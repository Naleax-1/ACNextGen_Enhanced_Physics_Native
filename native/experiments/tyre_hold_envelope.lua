-- Experimental calculation only. A source force bound must be independently
-- tied to the same model, sensor, epoch and generation; this module cannot
-- establish that provenance or authorize physical application.
local Envelope={}
local function finite(x)return type(x)=='number' and x==x and math.abs(x)<math.huge end
function Envelope.limit(current,sourceMagnitude)
 local ok,value=pcall(function()
  assert(type(current)=='table' and type(current.forces)=='table' and type(sourceMagnitude)=='table')
  local forces={[0]={},[1]={},[2]={},[3]={}}
  for i=0,3 do
   local bound=sourceMagnitude[i];assert(finite(bound) and bound>=0 and bound<=8)
   local norm=0
   for j=0,2 do local v=current.forces[i][j];assert(finite(v));norm=norm+v*v end
   norm=math.sqrt(norm);assert(finite(norm) and norm<=8.000000001)
   local scale=norm>bound and bound/norm or 1
   for j=0,2 do forces[i][j]=current.forces[i][j]*scale end
  end
  return forces
 end)
 if not ok then return nil end
 return value
end
return Envelope
