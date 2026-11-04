-- Optional read-only comparison. SDK returns numbers without a unit/phase
-- contract for the extended APIs: never label these raw samples as SI velocity.
local SuspensionRawObserver={}
local function finite(v)return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function integer(v)return finite(v) and v>=1 and v<=2147483646 and v%1==0 end
function SuspensionRawObserver.new(options,hash)
 local enabled=options.suspension_raw_capture==true
 local epoch,carID=options.epoch,options.car_id
 local s={previous=nil}
 function s:reset()self.previous=nil end
 function s:sample(clock,dt,flags,generation)
  if not enabled or flags~=15 or not finite(clock) or clock<0 or not finite(dt) or dt<=0 or dt>.02 or not integer(generation)then self:reset();return nil end
  local ok,current=pcall(function()
   local sim=ac.getSim();assert(sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and sim.isReplayOnlyMode~=true and sim.isSessionFinished~=true)
   assert(ac.getCarID(0)==carID)
   if physics.allowed~=nil then assert(physics.allowed()==true)
   else assert(ac.load and ac.load('ngp4_permission')==1 and ac.load('ngp4_epoch')==epoch and ac.load('ngp4_generation')==generation)end
   local patch=tonumber(ac.getPatchVersionCode());assert(integer(patch))
   local r={clock=clock,dt=dt,epoch=epoch,generation=generation,car_hash=hash,patch_code=patch,
    app_travel={},extended_suspension={},extended_damper={},app_mask=0,suspension_mask=0,damper_mask=0}
   local carOK,car=pcall(ac.getCar,0)
   for i=0,3 do
    local appOK,app=pcall(function()return carOK and car and car.wheels and car.wheels[i] and car.wheels[i].suspensionTravel end)
    if appOK and finite(app)then r.app_travel[i]=app;r.app_mask=r.app_mask+2^i end
    local suspensionOK,suspension=pcall(physics.getExtendedSuspensionTravel,0,i)
    if suspensionOK and finite(suspension)then r.extended_suspension[i]=suspension;r.suspension_mask=r.suspension_mask+2^i end
    local damperOK,damper=pcall(physics.getExtendedDamperTravel,0,i)
    if damperOK and finite(damper)then r.extended_damper[i]=damper;r.damper_mask=r.damper_mask+2^i end
   end
   if finite(sim.frame) and sim.frame>=0 and sim.frame%1==0 then r.render_frame=sim.frame end
   return r
  end)
  if not ok then self:reset();return nil end
  local before=self.previous;self.previous=current
  if not before or before.generation~=generation or before.patch_code~=current.patch_code or before.clock>=clock or math.abs(clock-before.clock-dt)>1e-7 then return nil end
  return {before=before,after=current,raw_only=true,units_verified=false,phase_verified=false,wheel_velocity_verified=false,actuator_calls=0}
 end
 return s
end
