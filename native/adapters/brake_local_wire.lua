local BrakeLocalWire={}
local HINT=[[
uint32_t abi,epoch,sequence,generation,car_hash,patch_code,valid_mask,reserved;
uint64_t evidence_id;double source_clock,ratio[4];
]]
local STATUS=[[
uint32_t abi,epoch,sequence,generation,car_hash,patch_code,flags,fault,model_sequence,api_calls,api_attempts,reserved;
uint64_t evidence_id;double clock;
]]
local function finite(v)return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v,max)return finite(v) and v>=1 and v<=max and v%1==0 end
local function barrier()if ac.memoryBarrier then ac.memoryBarrier()end end
local function checksum(raw)local a,b=1,0;for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
function BrakeLocalWire.new(options,hash)
 local p=assert(options.brake_profile);assert(p.execution_mode=='worker_local_brake_residual_v1')
 local factory=assert(ac.StructItem.build or ac.StructItem.combine)
 local prefix=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.BrakeLocal'
 local s={controller=BrakeLocalWorker.new(options,hash),candidate=factory(HINT),status=factory(STATUS),sequence=0,calls=0,attempts=0}
 s.output=ac.writeMemoryMappedFile(prefix..'Status','uint32_t commit,checksum;struct {'..STATUS..'} packet;',false)
 function s:stop()self.controller:stop();self.output.commit=0 end
 function s:step(dt,clock,flags,generation)
  if not finite(clock) or clock<0 or not integer(generation,2147483646) or not finite(flags) or flags%1~=0 or flags<0 or flags>15 then self:stop();return end
  if not self.input then local ok,input=pcall(ac.readMemoryMappedFile,prefix..'Hint','uint32_t commit,checksum;struct {'..HINT..'} packet;',false);if ok then self.input=input end end
  local model=nil
  if self.input then
   local token=tonumber(self.input.commit)
   if integer(token,2147483644) and token%2==0 then
    barrier();local ok,raw=pcall(ac.structBytes,self.input.packet);barrier()
    if ok and #raw==80 and token==tonumber(self.input.commit) and checksum(raw)==tonumber(self.input.checksum) and pcall(ac.fillStructWithBytes,self.candidate,raw) then
     local q=self.candidate
     if q.abi==1 and q.sequence*2==token and q.reserved==0 and q.valid_mask==15 and q.epoch==options.epoch and q.generation==generation and q.car_hash==hash and q.patch_code==p.patch_code and tonumber(q.evidence_id)==p.evidence_id then
      model={epoch=q.epoch,sequence=q.sequence,generation=q.generation,car_hash=q.car_hash,patch_code=q.patch_code,evidence_id=tonumber(q.evidence_id),source_clock=q.source_clock,valid_mask=15,ratio={}}
      for i=0,3 do model.ratio[i]=q.ratio[i]end
     end
    end
   end
  end
  local result=self.controller:step(model,clock,dt,flags,generation)
  s.calls=s.calls+result.calls;s.attempts=s.attempts+result.attempts
  if self.sequence>=1073741822 or s.calls>=2147483647 or s.attempts>=2147483647 then self:stop();return end
  self.sequence=self.sequence+1;local q=self.status
  q.abi=1;q.epoch=options.epoch;q.sequence=self.sequence;q.generation=generation;q.car_hash=hash;q.patch_code=p.patch_code
  q.flags=flags;q.fault=result.fault;q.model_sequence=self.controller.modelSequence;q.api_calls=s.calls;q.api_attempts=s.attempts;q.reserved=0
  q.evidence_id=p.evidence_id;q.clock=clock
  local raw=ac.structBytes(q);assert(#raw==64,'Brake local status ABI mismatch')
  self.output.commit=self.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw);self.output.checksum=checksum(raw);barrier();self.output.commit=self.sequence*2
 end
 return s
end
