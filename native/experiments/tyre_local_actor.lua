-- Experimental actor. Not registered with the production Worker.
-- Caller independently authenticates the profile, current context, hint age,
-- ownership, permission and geometry before every invocation.
local Actor={}
function Actor.new(kernel,captureApplication,captureInterval)
 local function intervalEnabled()
  if type(captureInterval)=='function' then local ok,value=pcall(captureInterval);return ok and value==true end
  return captureInterval==true
 end
 local s={fault=false,calls=0,frames=0,active_mask=0,observed_power=0,observed_dissipated_j=0,ambiguous_calls=0}
 function s:clear_observation() self.observed_power=0;self.active_mask=0;self.last_application=nil;self.last_following_sample=nil;self.last_interval=nil end
 function s:step(sample,hint,authorized,geometry_ok,callbackSequence)
  self.trace_callback_sequence=(self.trace_callback_sequence or 0)+1
  callbackSequence=callbackSequence or self.trace_callback_sequence
  local previous=self.pending_application;self.pending_application=nil
  self:clear_observation()
  if self.fault or authorized~=true or geometry_ok~=true or not hint then return false end
  local result=kernel.compute(sample,hint.coefficient,hint.valid_mask)
  if not result then return false end
  local calls_before=self.calls
  local ok,message=pcall(function()
   -- Validate all four positions and every resulting force before any call.
   local positions,forces={},{}
   for i=0,3 do
    local p,f={},{}
    for j=0,2 do
     local x,y=sample.positions[i][j],result.forces[i][j]
     assert(type(x)=='number' and x==x and math.abs(x)<1e7)
     assert(type(y)=='number' and y==y and math.abs(y)<=8)
     p[j]=x;f[j]=y
    end
    positions[i],forces[i]=p,f
   end
   -- Repeat the existing enhancement geometry envelope locally. A supervisor
   -- declaration cannot substitute for validating the current positions.
   local centreDistance=0
   for j=0,2 do
    local origin=sample.body_origin[j]
    assert(type(origin)=='number' and origin==origin and math.abs(origin)<1e7)
    local centre=0;for i=0,3 do centre=centre+positions[i][j]/4 end
    centreDistance=centreDistance+(centre-origin)^2
   end
   local function distance(a,b)
    local sum=0;for j=0,2 do sum=sum+(positions[a][j]-positions[b][j])^2 end
    return math.sqrt(sum)
   end
   local front,rear,left,right=distance(0,1),distance(2,3),distance(0,2),distance(1,3)
   assert(centreDistance<=36 and front>=.3 and front<=4 and rear>=.3 and rear<=4 and
    left>=.5 and left<=8 and right>=.5 and right<=8)
   if captureApplication==true and previous and previous.epoch==sample.epoch and
      previous.generation==sample.generation and previous.car_hash==sample.car_hash and
      callbackSequence==previous.callback_sequence+1 and
      sample.sequence>=previous.sensor_sequence and sample.sequence<=previous.sensor_sequence+1 and
      math.abs(sample.clock-previous.clock-sample.dt)<=1e-9 then
    local following={application=previous,clock=sample.clock,dt=sample.dt,
     sensor_sequence=sample.sequence,callback_sequence=callbackSequence,wheels={},causality_verified=false,solver_work_verified=false}
    for i,wheel in pairs(previous.wheels) do
     local p,v={},{}
     for j=0,2 do p[j]=positions[i][j];v[j]=sample.body_velocity[i][j] end
     following.wheels[i]={point=p,velocity=v}
    end
    self.last_following_sample=following
   end
   local apiType=type(physics.addForce);assert(apiType=='function' or apiType=='cdata')
   for i=0,3 do
    local p,f=positions[i],forces[i]
    if f[0]*f[0]+f[1]*f[1]+f[2]*f[2]>1e-12 then
     -- An exception cannot prove whether the engine applied this call.
     self.ambiguous_calls=self.ambiguous_calls+1
     physics.addForce(0,vec3(p[0],p[1],p[2]),false,vec3(f[0],f[1],f[2]),false)
     self.ambiguous_calls=self.ambiguous_calls-1
     self.calls=self.calls+1
     if captureApplication==true then
     if not self.last_application then
      self.last_application={clock=sample.clock,dt=sample.dt,epoch=sample.epoch,generation=sample.generation,car_hash=sample.car_hash,
       sensor_sequence=sample.sequence,callback_sequence=callbackSequence,hint_sequence=hint.sequence,wheels={},solver_work_verified=false}
     end
     local velocity={}
     for j=0,2 do velocity[j]=sample.body_velocity[i][j] end
     self.last_application.wheels[i]={point=p,force=f,velocity=velocity}
     end
     self.active_mask=self.active_mask+2^i
     -- This is power at sampled body point velocity, not solver work.
     local power=f[0]*sample.body_velocity[i][0]+f[1]*sample.body_velocity[i][1]+f[2]*sample.body_velocity[i][2]
     self.observed_power=self.observed_power+power
     self.observed_dissipated_j=self.observed_dissipated_j-math.min(0,power)*sample.dt
    end
   end
   if self.calls>calls_before then self.frames=self.frames+1 end
   if intervalEnabled() then
    local recorded,recordError=pcall(function()
    local r={epoch=sample.epoch,generation=sample.generation,car_hash=sample.car_hash,
     callback_sequence=callbackSequence,clock=sample.clock,dt=sample.dt,application_complete=true,wheels={}}
    for i=0,3 do
     local p,f,v={},{},{};local sent=math.floor(self.active_mask/2^i)%2==1
     for j=0,2 do p[j+1]=positions[i][j];f[j+1]=sent and forces[i][j] or 0;v[j+1]=sample.body_velocity[i][j]end
     r.wheels[i]={point=p,force=f,velocity=v}
    end
    self.last_interval=r
    end)
    if not recorded then self.last_interval=nil;self.interval_error=tostring(recordError)end
   end
  end)
  if not ok then self.fault=true;self.last_following_sample=nil;return false,tostring(message) end
  if captureApplication==true then self.pending_application=self.last_application end
  return true
 end
 return s
end
return Actor
