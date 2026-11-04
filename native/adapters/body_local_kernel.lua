-- Geometry and bounded work only; constitutive chassis models remain native.
-- This kernel does not authorize or issue physics API calls.
local BodyLocalKernel={}
local function number(v)assert(type(v)=='number' and v==v and math.abs(v)<math.huge);return v end
function BodyLocalKernel.forces(input)
 local ok,result=pcall(function()
  assert(input.residual_contract_verified==true and input.body_force_units_verified==true and input.coordinates_verified==true)
  local roll,pitch,yaw=number(input.roll_moment_nm),number(input.pitch_moment_nm),number(input.yaw_moment_nm)
  local width,length,cap=number(input.half_width_m),number(input.half_length_m),number(input.max_force_n)
  assert(width>=.1 and width<=2 and length>=.1 and length<=3 and cap>0 and cap<=80)
  roll=roll/(2*width);pitch=-pitch/(2*length);yaw=yaw/(2*length)
  assert(math.abs(roll)<=cap and math.sqrt(pitch*pitch+yaw*yaw)<=cap)
  local positions={[0]={width,0,0},{-width,0,0},{0,0,length},{0,0,-length}}
  local forces={[0]={0,roll,0},{0,-roll,0},{yaw,pitch,0},{-yaw,-pitch,0}}
  local power=0
  for i=0,3 do for a=1,3 do power=power+number(input.point_velocity_local_ms[i][a])*forces[i][a]end end
  number(power);return {valid=true,positions=positions,forces=forces,power_w=power}
 end)
 return ok and result or {valid=false}
end
function BodyLocalKernel.work(input)
 local ok,result=pcall(function()
  for _,k in ipairs({'force_units_verified','interval_verified','constant_local_force_verified','velocity_units_verified','bounds_verified'})do assert(input[k]==true)end
  local dt=number(input.dt);assert(dt>0 and dt<=.02)
  local intervalError=input.dt_error_s==nil and 0 or number(input.dt_error_s)
  assert(intervalError>=0 and intervalError<=1e-7)
  local low,high=dt-intervalError,dt+intervalError;assert(low>0 and high<=.02)
  local power,uncertaintyLow,uncertaintyHigh=0,0,0
  for i=0,3 do
   local bound,error=number(input.local_acceleration_bound_ms2[i]),number(input.velocity_error_ms[i]);assert(bound>=0 and error>=0)
   local force2,change2=0,0
   for a=1,3 do
    local f=number(input.constant_force_local_n[i][a]);local before=number(input.velocity_before_local_ms[i][a]);local after=number(input.velocity_after_local_ms[i][a])
    force2=force2+f*f;change2=change2+(after-before)*(after-before);power=power+f*before
   end
   local norm,change=number(math.sqrt(force2)),number(math.sqrt(change2))
   local allowed=number(bound*high+2*error)
   assert(norm<=80 and change<=allowed)
   uncertaintyLow=uncertaintyLow+norm*number(bound*low+error)
   uncertaintyHigh=uncertaintyHigh+norm*number(bound*high+error)
  end
  -- With nonnegative acceleration bounds this quadratic upper bound is
  -- convex in duration. Its maximum over the interval is at an endpoint.
  number(power);number(uncertaintyLow);number(uncertaintyHigh)
  local upper=math.max(number((power+uncertaintyLow)*low),number((power+uncertaintyHigh)*high))
  return {valid=true,positive_work_upper_j=math.max(0,upper),absorbed_work_lower_j=math.max(0,-upper)}
 end)
 return ok and result or {valid=false}
end
