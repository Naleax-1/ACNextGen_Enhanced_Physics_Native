local BodyLocalWire={}
local HINT=[[
uint32_t abi,epoch,sequence,generation,car_hash,patch_code,valid_mask,reserved;
uint64_t evidence_id;double source_clock,roll_moment_nm,pitch_moment_nm,yaw_moment_nm;
]]
local STATUS=[[
uint32_t abi,epoch,sequence,generation,car_hash,patch_code,flags,fault,model_sequence,sent,acked,reserved;
uint64_t evidence_id;double clock,balance_j,held_j;
]]
local function barrier()if ac.memoryBarrier then ac.memoryBarrier()end end
local function checksum(raw)local a,b=1,0;for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
local function integer(v,max)return type(v)=='number' and v>=1 and v<=max and v%1==0 end
function BodyLocalWire.new(options,hash)
 local p=assert(options.body_profile);assert(p.execution_mode=='worker_local_body_v1')
 local factory=assert(ac.StructItem.build or ac.StructItem.combine)
 local prefix=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.BodyLocal'
 local s={controller=BodyLocalWorker.new(options,hash),candidate=factory(HINT),status=factory(STATUS),sequence=0}
 s.output=ac.writeMemoryMappedFile(prefix..'Status','uint32_t commit,checksum;struct {'..STATUS..'} packet;',false)
 function s:stop()self.controller:stop();self.output.commit=0 end
 function s:step(dt,clock,flags,generation)
  if type(clock)~='number' or clock~=clock or clock<0 or clock==math.huge or not integer(generation,2147483646) or
   type(flags)~='number' or flags%1~=0 or flags<0 or flags>15 then self:stop();return end
  if not self.input then local ok,v=pcall(ac.readMemoryMappedFile,prefix..'Hint','uint32_t commit,checksum;struct {'..HINT..'} packet;',false);if ok then self.input=v end end
  local model=nil
  if self.input then
   local token=tonumber(self.input.commit)
   if integer(token,2147483644) and token%2==0 then
    barrier();local ok,raw=pcall(ac.structBytes,self.input.packet);barrier()
    if ok and #raw==72 and token==tonumber(self.input.commit) and checksum(raw)==tonumber(self.input.checksum) and pcall(ac.fillStructWithBytes,self.candidate,raw)then
     local q=self.candidate
     if q.abi==1 and q.sequence*2==token and q.epoch==options.epoch and q.generation==generation and q.car_hash==hash and
      q.patch_code==p.patch_code and tonumber(q.evidence_id)==p.evidence_id and q.valid_mask==7 and q.reserved==0 then
      model={epoch=q.epoch,sequence=q.sequence,generation=q.generation,car_hash=q.car_hash,patch_code=q.patch_code,
       evidence_id=tonumber(q.evidence_id),source_clock=q.source_clock,roll_moment_nm=q.roll_moment_nm,pitch_moment_nm=q.pitch_moment_nm,yaw_moment_nm=q.yaw_moment_nm}
     end
    end
   end
  end
  local controller=self.controller:step(dt,clock,flags,generation,model)
  if self.sequence>=1073741822 then self:stop();return end;self.sequence=self.sequence+1
  local q=self.status;q.abi=1;q.epoch=options.epoch;q.sequence=self.sequence;q.generation=generation;q.car_hash=hash;q.patch_code=p.patch_code
  q.flags=flags;q.fault=controller.fault and 1 or 0;q.model_sequence=controller.modelSequence;q.sent=controller.sent;q.acked=controller.acked;q.reserved=0
  q.evidence_id=p.evidence_id;q.clock=clock;q.balance_j=controller.balance_j;q.held_j=controller.held_j
  local raw=ac.structBytes(q);assert(#raw==80,'Body local status ABI mismatch')
  self.output.commit=self.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw);self.output.checksum=checksum(raw);barrier();self.output.commit=self.sequence*2
 end
 return s
end
