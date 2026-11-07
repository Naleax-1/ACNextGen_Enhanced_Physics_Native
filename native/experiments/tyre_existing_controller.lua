-- Composition for the existing body-only effect. The supervisor must still
-- establish exclusive ownership and current geometry before every step.
local Existing={}
function Existing.new(Profile,Reader,Controller,Actor,Kernel,Envelope,Bound,options)
 local p=Profile.bind(options.declaration,options.car_id,options.patch_code,
  options.physical_enabled,options.capture,options.calibration_only,options.selected)
 if not p then return nil end
 assert(options.interval_observer==nil or type(options.interval_observer)=='function')
 return Controller.new(Reader.new(),function()return Bound.new(Actor,Kernel,Envelope,options.capture_application==true,
  options.interval_capture_active or options.interval_observer~=nil)end,p,options.epoch,options.car_hash,options.interval_observer)
end
return Existing
