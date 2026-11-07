-- Stateless prototype: calculate forces from a validated coefficient and the
-- current physics callback sample. Caller owns authorization, hint freshness,
-- coherent identity, geometry, onset qualification and actual API calls.
local Kernel={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function has(mask,bit) return math.floor(mask/bit)%2==1 end
function Kernel.compute(sample,coefficients,mask)
 local ok,result=pcall(function()
  local sampleType=type(sample)
  assert((sampleType=='table' or sampleType=='cdata' or sampleType=='userdata') and type(coefficients)=='table' and finite(mask) and mask%1==0 and mask>=0 and mask<=15)
  assert(sample.abi==1 and finite(sample.flags) and sample.flags%16==15)
  assert(finite(sample.clock) and sample.clock>=0 and finite(sample.dt) and sample.dt>0 and sample.dt<=.02)
  assert(finite(sample.supplement_age) and sample.supplement_age>=0)
  local side,up,side_norm,up_norm,dot={},{},0,0,0
  for j=0,2 do
   local x,y=sample.side[j],sample.up[j];assert(finite(x) and finite(y))
   side[j],up[j]=x,y;side_norm=side_norm+x*x;up_norm=up_norm+y*y;dot=dot+x*y
  end
  assert(side_norm>=.81 and side_norm<=1.21 and up_norm>=.81 and up_norm<=1.21 and math.abs(dot)<=.05)
  for j=0,2 do side[j]=side[j]/math.sqrt(side_norm) end
  local forces,power,active={ [0]={},[1]={},[2]={},[3]={} },0,0
  for i=0,3 do
   local c=coefficients[i];assert(finite(c) and c>=0 and c<=8)
   if not has(mask,2^i) then assert(c==0) end
   local load=sample.load[i];assert(finite(load) and load>=0 and load<=100000)
   local v=0
   for j=0,2 do local x=sample.body_velocity[i][j];assert(finite(x) and math.abs(x)<=300);v=v+x*side[j] end
   local eligible=has(mask,2^i) and has(sample.flags,2^(20+i)) and sample.supplement_age<=.03 and load>=80
   local scalar=eligible and math.max(-8,math.min(8,-c*v)) or 0
   for j=0,2 do forces[i][j]=scalar*side[j] end
   power=power+scalar*v;if eligible then active=active+2^i end
  end
  assert(finite(power) and power<=1e-9)
  return {forces=forces,power=power,active_mask=active}
 end)
 if not ok then return nil,tostring(result) end
 return result,nil
end
return Kernel
