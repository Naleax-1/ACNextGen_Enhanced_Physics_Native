---@diagnostic disable: undefined-global
local BrakeForceWire={}
local COMMAND=[[
uint32_t abi,epoch,generation,car_hash,sequence,mask,sensor_sequence,reserved;
uint64_t evidence_id;double source_clock;
double ratio[4],baseline_nm[4],delta_raw[4];
]]
local RECEIPT=[[
uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault;
uint64_t evidence_id;double clock;uint32_t api_attempts,reserved;
]]
local function barrier() local k=type(ac.memoryBarrier);if k=='function' or k=='cdata' then ac.memoryBarrier() end end
local function checksum(bytes) local a,b=1,0;for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end;return b*65536+a end
function BrakeForceWire.new(options,carHash)
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local profile=options.brake_profile or {}
    local evidence=profile.evidence_id or 0
    local s={actor=assert(BrakeForceWorker).new(options,carHash),command=factory(COMMAND),receipt=factory(RECEIPT),lastSequence=0,generation=0}
    local prefix=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.BrakeForce'
    s.output=ac.writeMemoryMappedFile(prefix..'Receipt','uint32_t commit,checksum;struct {'..RECEIPT..'} packet;',false)
    function s:step(dt,clock,flags,generation)
        if generation~=s.generation then s.generation=generation;s.lastSequence=0 end
        if flags~=15 then return end
        if not s.input then
            local ok,v=pcall(ac.readMemoryMappedFile,prefix..'Command','uint32_t commit,checksum;struct {'..COMMAND..'} packet;',false)
            if not ok or not v then return end;s.input=v
        end
        local token=tonumber(s.input.commit)
        if not token or token<=0 or token>=2147483646 or token%2~=0 or token<=s.lastSequence*2 then return end
        barrier();local ok,bytes=pcall(ac.structBytes,s.input.packet);barrier()
        if not ok or #bytes~=144 or token~=tonumber(s.input.commit) or checksum(bytes)~=tonumber(s.input.checksum) then return end
        ac.fillStructWithBytes(s.command,bytes);local p=s.command
        if p.abi~=1 or p.sequence*2~=token or p.reserved~=0 or p.sensor_sequence==0 then return end
        if p.epoch~=options.epoch or p.generation~=generation or p.car_hash~=carHash or tonumber(p.evidence_id)~=evidence then return end
        s.lastSequence=p.sequence
        local c={epoch=p.epoch,generation=p.generation,car_hash=p.car_hash,sequence=p.sequence,mask=p.mask,
            evidence_id=tonumber(p.evidence_id),source_clock=p.source_clock,ratio={},baseline_nm={},delta_raw={}}
        for i=0,3 do c.ratio[i]=tonumber(p.ratio[i]);c.baseline_nm[i]=tonumber(p.baseline_nm[i]);c.delta_raw[i]=tonumber(p.delta_raw[i]) end
        local result=s.actor:apply(c,clock,dt,flags,generation);local r=s.receipt
        r.abi=1;r.epoch=options.epoch;r.generation=generation;r.car_hash=carHash;r.sequence=p.sequence
        r.completed_mask=result.completed_mask;r.api_calls=result.calls;r.fault=result.fault;r.api_attempts=result.attempts
        r.evidence_id=evidence;r.clock=clock;r.reserved=0
        local raw=ac.structBytes(r);if #raw~=56 then return end
        s.output.commit=p.sequence*2-1;barrier();ac.fillStructWithBytes(s.output.packet,raw)
        s.output.checksum=checksum(raw);barrier();s.output.commit=p.sequence*2
        return result
    end
    return s
end
