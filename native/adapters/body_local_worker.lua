-- Physics-rate execution of native SI moment candidates, not chassis models.
-- Not selected by production launch until transport/profile qualification.
local BodyLocalWorker={}
local function finite(v)return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v,max)return finite(v) and v>=1 and v<=max and v%1==0 end
function BodyLocalWorker.new(options,hash)
 local p={};for k,v in pairs(options.body_profile or {})do p[k]=v end
 -- Both the reservation path and every generation's Actor use one immutable
 -- declaration snapshot. Caller tables are not a live configuration channel.
 options={epoch=options.epoch,car_id=options.car_id,body_profile=p}
 assert(p.local_execution_verified==true and p.same_callback_sample_verified==true and p.bounds_verified==true)
 assert(finite(p.dt) and p.dt>0 and p.dt<=.003 and finite(p.model_hold_seconds) and p.model_hold_seconds>0 and p.model_hold_seconds<=.1)
 assert(finite(p.storage_capacity_j) and p.storage_capacity_j>=0 and p.storage_capacity_j<=1)
 for _,k in ipairs({'acceleration_bound_ms2','velocity_error_ms'})do
  local t={};for i=0,3 do local v=p[k] and p[k][i];assert(finite(v) and v>=0);t[i]=v end;p[k]=t
 end
 local s={generation=0,sequence=0,balance_j=0,held_j=0,pending=nil,fault=false,reason='',sent=0,acked=0,model=nil,modelSequence=0}
 local actor
 local function fail(reason)if actor then actor:stop()end;s.fault=true;s.reason=reason;s.model=nil end
 local function work(r,after)
  return BodyLocalKernel.work({dt=p.dt,dt_error_s=1e-7,constant_force_local_n=r.forces,velocity_before_local_ms=r.velocity_before,
   velocity_after_local_ms=after or r.velocity_before,local_acceleration_bound_ms2=p.acceleration_bound_ms2,
   velocity_error_ms=p.velocity_error_ms,force_units_verified=p.units_verified,interval_verified=p.action_interval_verified,
   constant_local_force_verified=p.constant_local_force_verified,velocity_units_verified=p.units_verified,bounds_verified=p.bounds_verified})
 end
 local function authorize(r)
  local bound=work(r)
  if not bound.valid then s.reason='invalid_work_bound';return false end
  if bound.positive_work_upper_j>s.balance_j then s.reason='insufficient_energy';return false end
  s.held_j=bound.positive_work_upper_j;s.balance_j=s.balance_j-s.held_j
  -- The Actor owns this snapshot and never exposes it to the candidate input.
  s.pending=r;s.reason='';return true
 end
 local function reset(generation)
  s.generation=generation;s.sequence=0;s.balance_j=0;s.held_j=0;s.pending=nil;s.fault=false;s.reason='';s.model=nil;s.modelSequence=0;s.lastClock=nil;s.blocked=false
  actor=BodyForceWorker.new(options,hash,authorize)
 end
 function s:stop()
  if self.pending then fail('stopped_with_pending')elseif actor then actor:stop()end
  self.model=nil;self.blocked=true
 end
 function s:step(dt,clock,flags,generation,m)
  if not integer(generation,2147483646) then self:stop();return self end
  if generation<self.generation then fail('generation_regressed');return self end
  if generation~=self.generation then self:stop();reset(generation)end
  if self.fault or self.blocked then return self end
  if flags~=15 or not finite(clock) or clock<0 or not finite(dt) or dt<=0 or math.abs(dt-p.dt)>1e-7 then self:stop();return self end
  if self.lastClock and clock<=self.lastClock then fail('clock_not_increasing');return self end;self.lastClock=clock
  if self.pending then
   local expected=self.pending;local receipt=actor:step(nil,clock,dt,flags,generation)
   if receipt.fault or receipt.sequence~=expected.sequence or receipt.completed_mask~=15 or not receipt.samples_valid then fail('invalid_receipt');return self end
   if math.abs(receipt.clock_after-receipt.clock_before-p.dt)>1e-7 then fail('invalid_interval');return self end
   local bound=work(receipt,receipt.velocity_after)
   if not bound.valid or bound.positive_work_upper_j>self.held_j then fail('invalid_or_unreserved_work');return self end
   self.balance_j=math.min(p.storage_capacity_j,self.balance_j+self.held_j-bound.positive_work_upper_j+bound.absorbed_work_lower_j)
   self.held_j=0;self.pending=nil;self.acked=self.acked+1
  end
  if not m then self.model=nil;return self end
  local valid=m.epoch==options.epoch and m.generation==generation and m.car_hash==hash and m.patch_code==p.patch_code and m.evidence_id==p.evidence_id and
   integer(m.sequence,1073741822) and m.sequence>=self.modelSequence and finite(m.source_clock) and m.source_clock<=clock and clock-m.source_clock<=p.model_hold_seconds
  for _,key in ipairs({'roll_moment_nm','pitch_moment_nm','yaw_moment_nm'})do valid=valid and finite(m[key])end
  if not valid then self.model=nil;self.reason='invalid_model';return self end
  if m.sequence==self.modelSequence then
   valid=self.model and self.model.source_clock==m.source_clock
   for _,key in ipairs({'roll_moment_nm','pitch_moment_nm','yaw_moment_nm'})do valid=valid and self.model[key]==m[key]end
  else valid=not self.model or m.source_clock>=self.model.source_clock end
  if not valid then self.model=nil;self.reason='changed_or_regressed_model';return self end
  self.model={source_clock=m.source_clock,roll_moment_nm=m.roll_moment_nm,pitch_moment_nm=m.pitch_moment_nm,yaw_moment_nm=m.yaw_moment_nm};self.modelSequence=m.sequence
  local zero={[0]={0,0,0},{0,0,0},{0,0,0},{0,0,0}}
  local result=BodyLocalKernel.forces({roll_moment_nm=m.roll_moment_nm,pitch_moment_nm=m.pitch_moment_nm,yaw_moment_nm=m.yaw_moment_nm,
   half_width_m=.5,half_length_m=1,max_force_n=p.max_force_n,point_velocity_local_ms=zero,
   residual_contract_verified=p.exclusive_owner,body_force_units_verified=p.units_verified,coordinates_verified=p.coordinates_verified})
  if not result.valid then self.reason='invalid_force_geometry';return self end
  if self.sequence>=1073741822 then fail('sequence_exhausted');return self end;self.sequence=self.sequence+1
  local command={epoch=options.epoch,generation=generation,car_hash=hash,evidence_id=p.evidence_id,sequence=self.sequence,source_clock=clock,positions=result.positions,forces=result.forces}
  local applied=actor:step(command,clock,dt,flags,generation)
  if applied.pending then self.sent=self.sent+1 elseif self.pending then fail('partial_or_failed_application')end
  return self
 end
 return s
end
