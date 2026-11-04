local DamperLocalWire={}
local HINT=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,valid_mask,reserved;
uint64_t evidence_id;double source_clock,coefficient_scale[4];
]]
local STATUS=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags;
uint64_t evidence_id;double clock,balance_j,held_j;
]]
local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
local function checksum(bytes) local a,b=1,0;for i=1,#bytes do a=(a+bytes:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function DamperLocalWire.new(options,hash)
    assert(options.damper_profile and options.damper_profile.execution_mode=='worker_local_v1','Wrong damper execution mode')
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local prefix=options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4'
    local p=options.damper_profile
    local s={controller=DamperLocalWorker.new(options,hash),candidate=factory(HINT),status=factory(STATUS),sequence=0}
    s.output=ac.writeMemoryMappedFile(prefix..'.DamperLocalStatus','uint32_t commit,checksum;struct {'..STATUS..'} packet;',false)
    local function publish(clock,flags,generation)
        if s.sequence>=1073741822 then s.controller:stop();s.output.commit=0;return end
        s.sequence=s.sequence+1;local q=s.status;local c=s.controller
        q.abi=1;q.epoch=options.epoch;q.generation=generation;q.car_hash=hash;q.patch_code=p.patch_code;q.sequence=s.sequence
        q.sent=c.sent;q.acked=c.acked;q.fault=c.fault and 1 or 0;q.flags=flags+(c.pending and 16 or 0);q.evidence_id=p.evidence_id
        q.clock=clock;q.balance_j=c.balance_j;q.held_j=c.held_j
        local bytes=ac.structBytes(q);assert(#bytes==72,'Damper local status ABI mismatch')
        s.output.commit=q.sequence*2-1;barrier();ac.fillStructWithBytes(s.output.packet,bytes)
        s.output.checksum=checksum(bytes);barrier();s.output.commit=q.sequence*2
    end
    function s:stop() self.controller:stop();self.output.commit=0 end
    function s:step(dt,clock,flags,generation)
        if not self.input then
            local ok,value=pcall(ac.readMemoryMappedFile,prefix..'.DamperModelHint','uint32_t commit,checksum;struct {'..HINT..'} packet;',false)
            if ok then self.input=value end
        end
        local model=nil
        if self.input then
            local token=tonumber(self.input.commit)
            local valid=false
            if finite(token) and token>0 and token<2147483646 and token%2==0 then
                barrier();local ok,bytes=pcall(ac.structBytes,self.input.packet);barrier()
                if ok and #bytes==80 and token==tonumber(self.input.commit) and checksum(bytes)==tonumber(self.input.checksum) then
                    ac.fillStructWithBytes(self.candidate,bytes);local q=self.candidate
                    if q.abi==1 and q.reserved==0 and q.sequence*2==token and q.epoch==options.epoch and q.generation==generation and
                        q.car_hash==hash and q.patch_code==p.patch_code and tonumber(q.evidence_id)==p.evidence_id and
                        q.valid_mask>=1 and q.valid_mask<=15 and finite(q.source_clock) and q.source_clock>=0 and q.source_clock<=clock and clock-q.source_clock<=.1 then
                        model={epoch=q.epoch,generation=q.generation,car_hash=q.car_hash,patch_code=q.patch_code,evidence_id=tonumber(q.evidence_id),
                            sequence=q.sequence,source_clock=q.source_clock,valid_mask=q.valid_mask,coefficient_scale={}}
                        valid=true;for i=0,3 do local v=tonumber(q.coefficient_scale[i]);if not finite(v) or v<0 then valid=false end;model.coefficient_scale[i+1]=v end
                    end
                end
            end
            if not valid then self.controller:invalidateModel();model=nil end
        end
        self.controller:step(dt,clock,flags,generation,model)
        if finite(clock) and clock>=0 then publish(clock,flags,generation) else self.output.commit=0 end
    end
    return s
end
