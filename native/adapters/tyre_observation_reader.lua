-- Observation only. No ownership, calibration, physical permission or API calls.
local TyreObservationReader={}
local PACKET=[[
uint32_t magic,epoch,generation,car_hash,sequence,sensor_sequence,model_frame,mask;
double sensor_clock,model_clock,coefficient[4];
]]
local function finite(x) return type(x)=='number' and x==x and math.abs(x)<math.huge end
local function integer(x,lo,hi) return finite(x) and x%1==0 and x>=lo and x<=hi end
local function checksum(raw)
 local a,b=1,0
 for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end
 return b*65536+a
end
function TyreObservationReader.new()
 local build=assert(ac.StructItem.build or ac.StructItem.combine)
 local candidate=build(PACKET)
 local lastEpoch,lastGeneration,lastCar,lastSequence,lastRaw,maxObserved=nil,nil,nil,0,nil,0
 return function(input,expected)
  local stage='context'
  local ok,result=pcall(function()
   assert(type(expected)=='table' and input)
   assert(integer(expected.epoch,1,4294967295) and integer(expected.generation,1,4294967295))
   assert(integer(expected.car_hash,1,4294967295) and integer(expected.sensor_sequence,1,4294967295))
   assert(finite(expected.clock) and expected.clock>=0)
   local barrier=type(ac.memoryBarrier);assert(barrier=='function' or barrier=='cdata')
   stage='commit';local before=tonumber(input.commit);assert(integer(before,1,2147483644))
   if lastEpoch==expected.epoch and lastGeneration==expected.generation and lastCar==expected.car_hash then
    maxObserved=math.max(maxObserved,math.floor((before+1)/2))
   end
   assert(before%2==0)
   stage='snapshot';ac.memoryBarrier();local raw=ac.structBytes(input.packet);ac.memoryBarrier()
   assert(type(raw)=='string' and #raw==80 and before==tonumber(input.commit) and checksum(raw)==tonumber(input.checksum))
   ac.fillStructWithBytes(candidate,raw);local q=candidate
   stage='identity';local seq,mask=tonumber(q.sequence),tonumber(q.mask)
   assert(tonumber(q.magic)==0x4f425359 and integer(seq,1,1073741822) and seq*2==before)
   assert(tonumber(q.epoch)==expected.epoch and tonumber(q.generation)==expected.generation and tonumber(q.car_hash)==expected.car_hash)
   assert(integer(tonumber(q.sensor_sequence),1,expected.sensor_sequence) and integer(tonumber(q.model_frame),1,4294967295))
   assert(integer(mask,0,15))
   stage='freshness';local sensor,model=tonumber(q.sensor_clock),tonumber(q.model_clock)
   assert(finite(sensor) and finite(model) and model>=0 and sensor>=model and sensor<=expected.clock)
   assert(expected.clock-sensor<=.012 and sensor-model<=.1)
   stage='coefficients';local coefficients={}
   for i=0,3 do
    local v=tonumber(q.coefficient[i]);assert(finite(v) and v>=0 and v<=8)
    if math.floor(mask/2^i)%2==0 then assert(v==0) end
    coefficients[i]=v
   end
   stage='history';if lastEpoch then
    assert(lastEpoch==expected.epoch and lastCar==expected.car_hash and expected.generation>=lastGeneration)
    if lastGeneration==expected.generation then
     assert(seq>=maxObserved and seq>=lastSequence and (seq~=lastSequence or raw==lastRaw))
    else maxObserved=0 end
   end
   lastEpoch,lastGeneration,lastCar,lastSequence,lastRaw=expected.epoch,expected.generation,expected.car_hash,seq,raw
   maxObserved=math.max(maxObserved,seq)
   return {sequence=seq,sensor_sequence=tonumber(q.sensor_sequence),model_frame=tonumber(q.model_frame),
    sensor_clock=sensor,model_clock=model,mask=mask,coefficient=coefficients}
  end)
  if not ok then return nil,stage end
  return result,nil
 end
end
return TyreObservationReader
