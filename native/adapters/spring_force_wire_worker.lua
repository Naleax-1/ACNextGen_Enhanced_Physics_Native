---@diagnostic disable: undefined-global
-- Independent binary command/receipt route. Reference registration remains a
-- trusted calibration operation; a command cannot register its own reference.
local SpringForceWire={}
local COMMAND=[[
uint32_t abi,epoch,generation,car_hash,sequence,mask,reserved[2];
uint64_t reference_lease;
double source_clock,ttl,return_energy_j;
double up[3],body_force_n[4],positions[4][3];
]]
local RECEIPT=[[
uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault;
uint64_t reference_lease;
double clock,estimated_work_j;
uint32_t work_qualified,reserved;
]]
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function barrier() local kind=type(ac.memoryBarrier);if kind=='function' or kind=='cdata' then ac.memoryBarrier() end end
local function checksum(bytes)
    local a,b=1,0;for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
    return b*65536+a
end
function SpringForceWire.new(options,carHash)
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local s={actor=assert(SpringForce).new(options,carHash),command=factory(COMMAND),receipt=factory(RECEIPT),lastSequence=0,generation=0}
    local prefix=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.SpringForce'
    s.output=ac.writeMemoryMappedFile(prefix..'Receipt','uint32_t commit,checksum;struct {'..RECEIPT..'} packet;',false)
    function s:registerReference(lease,generation) return s.actor:setReference(lease,generation) end
    function s:disable() s.actor:disable() end
    function s:step(sample,dt,clock,flags,generation)
        if generation~=s.generation then s.generation=generation;s.lastSequence=0 end
        if flags~=15 then self:disable();return end
        if not s.input then
            local ok,value=pcall(ac.readMemoryMappedFile,prefix..'Command','uint32_t commit,checksum;struct {'..COMMAND..'} packet;',false)
            if not ok or not value then return end;s.input=value
        end
        local token=tonumber(s.input.commit)
        if not finite(token) or token<=0 or token%2~=0 or token<=s.lastSequence*2 then return end
        barrier();local ok,bytes=pcall(ac.structBytes,s.input.packet);barrier()
        if not ok or #bytes~=216 or token~=tonumber(s.input.commit) or checksum(bytes)~=tonumber(s.input.checksum) then return end
        ac.fillStructWithBytes(s.command,bytes);local p=s.command
        if p.abi~=1 or p.sequence*2~=token or p.reserved[0]~=0 or p.reserved[1]~=0 then return end
        s.lastSequence=p.sequence
        local c={epoch=p.epoch,generation=p.generation,car_hash=p.car_hash,sequence=p.sequence,mask=p.mask,
            reference_lease=tonumber(p.reference_lease),source_clock=p.source_clock,ttl=p.ttl,return_energy_j=p.return_energy_j,
            up=vec3(p.up[0],p.up[1],p.up[2]),body_force_n={},positions={}}
        for i=0,3 do c.body_force_n[i]=tonumber(p.body_force_n[i]);c.positions[i]=vec3(p.positions[i][0],p.positions[i][1],p.positions[i][2]) end
        local result=s.actor:apply(c,sample,dt,clock,flags,generation)
        local r=s.receipt
        r.abi=1;r.epoch=result.epoch;r.generation=result.generation;r.car_hash=result.car_hash;r.sequence=result.sequence
        r.reference_lease=result.reference_lease;r.completed_mask=result.completed_mask;r.api_calls=result.api_calls;r.fault=result.fault
        r.clock=result.clock;r.estimated_work_j=result.estimated_work_j;r.work_qualified=0;r.reserved=0
        local receiptBytes=ac.structBytes(r);if #receiptBytes~=64 then return end
        s.output.commit=r.sequence*2-1;barrier();ac.fillStructWithBytes(s.output.packet,receiptBytes)
        s.output.checksum=checksum(receiptBytes);barrier();s.output.commit=r.sequence*2
        return result
    end
    return s
end
