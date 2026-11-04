-- Physics-rate conversion only. Constitutive brake models remain native.
-- Selected only by an explicit local brake profile; Actor remains final authority.
local BrakeLocalWorker={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function BrakeLocalWorker.new(options,carHash)
 local p={};for k,v in pairs(options.brake_profile or {}) do p[k]=v end
 local actor=assert(BrakeForceWorker).new(options,carHash)
 local s={generation=0,sequence=0,modelSequence=0,model=nil}
 function s:stop() self.model=nil;self.blockedGeneration=self.generation end
 function s:step(m,clock,dt,flags,generation)
  local function refuse(reason)return {calls=0,attempts=0,completed_mask=0,fault=reason}end
  if not finite(generation) or generation%1~=0 or generation<1 or generation>=2147483647 or generation<self.generation then return refuse(20)end
  if generation~=self.generation then self.generation=generation;self.modelSequence=0;self.model=nil;self.blockedGeneration=nil;self.lastClock=nil end
  if flags~=15 then self.model=nil;self.blockedGeneration=generation;return refuse(21)end
  if self.blockedGeneration==generation then return refuse(21)end
  local ok,result=pcall(function()
   -- CSP callback dt is float32-promoted; use the Actor's existing
   -- calibrated interval tolerance rather than exact binary equality.
   assert(finite(clock) and clock>=0 and finite(dt) and dt>0 and dt<=.02 and
    finite(p.dt) and p.dt>0 and p.dt<=.02 and math.abs(dt-p.dt)<=1e-7)
   assert(not self.lastClock or clock>self.lastClock,'Callback clock did not advance')
   assert(type(m)=='table' and m.epoch==options.epoch and m.generation==generation and m.car_hash==carHash and m.evidence_id==p.evidence_id)
   assert(m.patch_code==p.patch_code and finite(p.patch_code) and p.patch_code>=1 and p.patch_code%1==0)
   assert(finite(m.sequence) and m.sequence>=1 and m.sequence<1073741823 and m.sequence%1==0 and m.sequence>=self.modelSequence)
   local hold=p.model_hold_seconds or .1;assert(finite(hold) and hold>0 and hold<=.1)
   assert(m.valid_mask==15 and finite(m.source_clock) and m.source_clock>=0 and m.source_clock<=clock and clock-m.source_clock<=hold)
   local ratios={};for i=0,3 do local r=m.ratio[i];assert(finite(r) and r>=0 and r<=1);ratios[i]=r end
   if m.sequence==self.modelSequence then
    assert(self.model and self.model.source_clock==m.source_clock)
    for i=0,3 do assert(self.model.ratio[i]==ratios[i])end
   else
    assert(not self.model or m.source_clock>=self.model.source_clock)
    self.model={source_clock=m.source_clock,ratio=ratios};self.modelSequence=m.sequence
   end
   self.lastClock=clock
   local cp=ac.getCarPhysics(0);assert(cp and cp.isAvailable==true and cp.wheels)
   assert(self.sequence<1073741822);self.sequence=self.sequence+1
   local c={epoch=options.epoch,generation=generation,car_hash=carHash,evidence_id=p.evidence_id,
    sequence=self.sequence,source_clock=clock,mask=15,ratio={},baseline_nm={},delta_raw={}}
   for i=0,3 do
    local w=cp.wheels[i];local omega=physics.getWheelAngularSpeed(0,i)
    assert(w and finite(w.brakeTorque) and finite(omega) and math.abs(omega)>=1)
    local baseline=w.brakeTorque*p.baseline_scale_nm_per_raw
    if p.baseline_mode==2 then assert(w.brakeTorque>=0);baseline=baseline*(omega>0 and -1 or 1)end
    assert(finite(baseline) and baseline*omega<=0)
    c.ratio[i]=ratios[i];c.baseline_nm[i]=baseline;c.delta_raw[i]=baseline*(ratios[i]-1)*p.command_scale_raw_per_nm
   end
   return actor:apply(c,clock,dt,flags,generation)
  end)
  if not ok then self.model=nil;local r=refuse(22);r.detail=tostring(result);return r end
  return result
 end
 return s
end
