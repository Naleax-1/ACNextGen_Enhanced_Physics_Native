local SpringLocalWire={}
local HINT=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,valid_mask,effect_id;
uint64_t evidence_id;double source_clock,excess_ratio[4];
]]
local STATUS=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags;
uint64_t evidence_id,reference_lease;double clock,balance_j,held_j;
]]
local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
local function checksum(raw) local a,b=1,0;for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function SpringLocalWire.new(options,hash)
    local p=assert(options.spring_profile);assert(p.execution_mode=='worker_local_spring_v1')
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local prefix=options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4'
    local s={controller=SpringLocalWorker.new(options,hash),conditions=SpringLocalConditions.new(options,hash),
        candidate=factory(HINT),status=factory(STATUS),sequence=0}
    s.output=ac.writeMemoryMappedFile(prefix..'.SpringLocalStatus','uint32_t commit,checksum;struct {'..STATUS..'} packet;',false)
    function s:stop() self.controller:stop();self.output.commit=0 end
    function s:step(dt,clock,flags,generation)
        if not self.input then local ok,value=pcall(ac.readMemoryMappedFile,prefix..'.SpringLocalHint','uint32_t commit,checksum;struct {'..HINT..'} packet;',false);if ok then self.input=value end end
        local model=nil
        if self.input then
            local token=tonumber(self.input.commit);local valid=false
            if finite(token) and token>0 and token<2147483646 and token%2==0 then
                barrier();local ok,raw=pcall(ac.structBytes,self.input.packet);barrier()
                if ok and #raw==80 and token==tonumber(self.input.commit) and checksum(raw)==tonumber(self.input.checksum) then
                    ac.fillStructWithBytes(self.candidate,raw);local q=self.candidate
                    if q.abi==1 and q.effect_id==2 and q.sequence*2==token and q.epoch==options.epoch and q.generation==generation and q.car_hash==hash and
                        q.patch_code==p.patch_code and tonumber(q.evidence_id)==p.evidence_id and q.valid_mask>=1 and q.valid_mask<=15 and
                        finite(q.source_clock) and q.source_clock>=0 and q.source_clock<=clock and clock-q.source_clock<=.1 then
                        valid=true;model={epoch=q.epoch,generation=q.generation,car_hash=q.car_hash,patch_code=q.patch_code,evidence_id=tonumber(q.evidence_id),
                            sequence=q.sequence,source_clock=q.source_clock,valid_mask=q.valid_mask,excess_ratio={}}
                        for i=0,3 do local v=tonumber(q.excess_ratio[i]);if not finite(v) or v<0 then valid=false end;model.excess_ratio[i+1]=v end
                    end
                end
            end
            if not valid then self.controller:invalidateModel();model=nil end
        end
        self.controller:step(dt,clock,flags,generation,model,self.conditions:step(dt,clock,flags,generation))
        if not finite(clock) or clock<0 or self.sequence>=1073741822 then self:stop();return end
        self.sequence=self.sequence+1;local q=self.status;local c=self.controller
        q.abi=1;q.epoch=options.epoch;q.generation=generation;q.car_hash=hash;q.patch_code=p.patch_code;q.sequence=self.sequence
        q.sent=c.sent;q.acked=c.acked;q.fault=c.fault and 1 or 0;q.flags=flags+(c.pending and 16 or 0)
        q.evidence_id=p.evidence_id;q.reference_lease=c.reference_lease;q.clock=clock;q.balance_j=c.balance_j;q.held_j=c.held_j
        local raw=ac.structBytes(q);assert(#raw==80,'Spring local status ABI mismatch')
        self.output.commit=q.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw)
        self.output.checksum=checksum(raw);barrier();self.output.commit=q.sequence*2
    end
    return s
end
