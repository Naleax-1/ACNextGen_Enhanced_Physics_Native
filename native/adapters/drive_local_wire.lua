local DriveLocalWire={}
local HINT=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,effect_id,reserved;
uint64_t evidence_id;double source_clock,demand,soft,transmission,windup,lsd_capacity;
]]
local STATUS=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags,effect_id,reserved;
uint64_t evidence_id;double clock,held_j,balance_j;
]]
local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v,low,high) return finite(v) and v>=low and v<=high and v%1==0 end
local function checksum(raw) local a,b=1,0;for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
function DriveLocalWire.new(options,hash)
    local p=assert(options.drive_profile);assert(p.execution_mode=='worker_local_additional_windup_v1')
    local patch,evidence=p.patch_code,p.evidence_id
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local prefix=options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4'
    local s={controller=DriveLocalWorker.new(options,hash),candidate=factory(HINT),status=factory(STATUS),sequence=0}
    s.output=ac.writeMemoryMappedFile(prefix..'.DriveLocalStatus','uint32_t commit,checksum;struct {'..STATUS..'} packet;',false)
    function s:stop() self.controller:stop();self.output.commit=0 end
    function s:step(dt,clock,flags,generation)
        if not finite(clock) or clock<0 or not integer(flags,0,15) or not integer(generation,1,2147483646) then self:stop();return end
        if not self.input then local ok,value=pcall(ac.readMemoryMappedFile,prefix..'.DriveLocalHint','uint32_t commit,checksum;struct {'..HINT..'} packet;',false);if ok then self.input=value end end
        local model=nil
        if self.input then
            local token=tonumber(self.input.commit);local valid=false
            if integer(token,2,2147483644) and token%2==0 then
                barrier();local ok,raw=pcall(ac.structBytes,self.input.packet);barrier()
                if ok and #raw==88 and token==tonumber(self.input.commit) and checksum(raw)==tonumber(self.input.checksum) and pcall(ac.fillStructWithBytes,self.candidate,raw) then
                    local q=self.candidate
                    if q.abi==3 and q.effect_id==3 and q.reserved==0 and q.sequence*2==token and q.epoch==options.epoch and q.generation==generation and
                        q.car_hash==hash and q.patch_code==patch and tonumber(q.evidence_id)==evidence and
                        finite(q.source_clock) and q.source_clock>=0 and q.source_clock<=clock and clock-q.source_clock<=.1 and
                        finite(q.demand) and math.abs(q.demand)<=1 and finite(q.soft) and math.abs(q.soft)<=1 and finite(q.transmission) and math.abs(q.transmission)<=2 and
                        finite(q.windup) and math.abs(q.windup)<=2 and math.abs(q.transmission+q.windup-(q.soft-q.demand))<=1e-12 and finite(q.lsd_capacity) and q.lsd_capacity>=0 and q.lsd_capacity<=1 then
                        valid=true;model={epoch=q.epoch,generation=q.generation,car_hash=q.car_hash,patch_code=q.patch_code,evidence_id=tonumber(q.evidence_id),
                            sequence=q.sequence,source_clock=q.source_clock,demand=q.demand,soft=q.soft,transmission=q.transmission,windup=q.windup,lsd_capacity=q.lsd_capacity}
                    end
                end
            end
            if not valid then self.controller:invalidateModel() end
        end
        self.controller:step(dt,clock,flags,generation,model)
        if self.sequence>=1073741822 then self:stop();return end
        self.sequence=self.sequence+1;local q=self.status;local c=self.controller
        q.abi=2;q.epoch=options.epoch;q.generation=generation;q.car_hash=hash;q.patch_code=patch;q.sequence=self.sequence
        q.sent=c.sent;q.acked=c.acked;q.fault=c.fault and 1 or 0;q.flags=flags+(c.pending and 16 or 0);q.effect_id=3;q.reserved=0
        q.evidence_id=evidence;q.clock=clock;q.held_j=c.held_j;q.balance_j=c.balance_j
        local raw=ac.structBytes(q);assert(#raw==80,'Drive local status ABI mismatch')
        self.output.commit=q.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw)
        self.output.checksum=checksum(raw);barrier();self.output.commit=q.sequence*2
    end
    return s
end
