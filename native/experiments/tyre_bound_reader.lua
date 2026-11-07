-- Experimental bound-force reader only: no mapping registration, profile authorization or
-- physics API calls. The caller supplies a trusted context for every read.
local Reader={}
local HINT=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sensor_sequence,model_sequence,valid_mask,effect_id;
uint64_t evidence_id;double sensor_clock,model_clock,coefficient[4],source_magnitude[4];
]]
local function finite(x) return type(x)=='number' and x==x and math.abs(x)<math.huge end
local function integer(x,lo,hi) return finite(x) and x%1==0 and x>=lo and x<=hi end
local function checksum(raw)
 local a,b=1,0
 for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end
 return b*65536+a
end
function Reader.new()
 local factory=assert(ac.StructItem.build or ac.StructItem.combine)
 local candidate=factory(HINT)
 local lastSequence,lastRaw,lastEpoch,lastGeneration=0,nil,nil,nil
 local maxObserved=0
 local lastCar,lastPatch,lastEvidence,lastEffect=nil,nil,nil,nil
 return function(input,expected)
  -- A failed read yields no retained model. The caller must not reuse an old
  -- result and must independently check permission and profile qualification.
  local ok,result=pcall(function()
   assert(type(expected)=='table' and expected.profile_verified==true)
   assert(integer(expected.epoch,1,4294967295) and integer(expected.generation,1,4294967295))
   assert(integer(expected.car_hash,1,4294967295) and integer(expected.patch_code,1,4294967295))
   assert(integer(expected.evidence_id,1,9007199254740991) and integer(expected.sensor_sequence,1,4294967295))
   local effect=expected.effect_id or 0x54595245
   assert(effect==0x544c4547)
   local barrierType=type(ac.memoryBarrier)
   assert(finite(expected.clock) and expected.clock>=0 and (barrierType=='function' or barrierType=='cdata') and input)
   local before=tonumber(input.commit)
   assert(integer(before,1,2147483644))
   -- Once a newer publication is observed in the same trusted generation,
   -- a torn or corrupt payload must not allow an older hint to return.
   if lastEpoch==expected.epoch and lastGeneration==expected.generation and
      lastCar==expected.car_hash and lastPatch==expected.patch_code and lastEvidence==expected.evidence_id and lastEffect==effect then
    maxObserved=math.max(maxObserved,math.floor((before+1)/2))
   end
   assert(before%2==0)
   ac.memoryBarrier();local raw=ac.structBytes(input.packet);ac.memoryBarrier()
   assert(type(raw)=='string' and #raw==128 and before==tonumber(input.commit) and checksum(raw)==tonumber(input.checksum))
   ac.fillStructWithBytes(candidate,raw)
   local q=candidate
   local seq=tonumber(q.sequence);local mask=tonumber(q.valid_mask)
   assert(q.abi==1 and q.effect_id==effect and integer(seq,1,1073741822) and seq*2==before)
   assert(q.epoch==expected.epoch and q.generation==expected.generation and q.car_hash==expected.car_hash and q.patch_code==expected.patch_code)
   assert(tonumber(q.evidence_id)==expected.evidence_id and integer(mask,0,15))
   assert(integer(tonumber(q.sensor_sequence),1,expected.sensor_sequence) and integer(tonumber(q.model_sequence),1,4294967295))
   local sensor,model=tonumber(q.sensor_clock),tonumber(q.model_clock)
   assert(finite(sensor) and finite(model) and model>=0 and sensor>=model and sensor<=expected.clock)
   assert(expected.clock-sensor<=.012 and sensor-model<=.1)
   local c,bounds={},{}
   for i=0,3 do
    local v=tonumber(q.coefficient[i]);assert(finite(v) and v>=0 and v<=8)
    if math.floor(mask/2^i)%2==0 then assert(v==0) end
    local bound=tonumber(q.source_magnitude[i]);assert(finite(bound) and bound>=0 and bound<=8.000000001)
    if math.floor(mask/2^i)%2==0 then assert(bound==0) end
    c[i]=v;bounds[i]=bound
   end
   if lastEpoch then
    -- A reader belongs to one session identity. A new epoch/car/profile must
    -- construct a fresh reader; within it the generation cannot go backwards.
    assert(lastEpoch==expected.epoch and lastCar==expected.car_hash and lastPatch==expected.patch_code and lastEvidence==expected.evidence_id and lastEffect==effect)
    assert(expected.generation>=lastGeneration)
    if lastGeneration==expected.generation then
     assert(seq>=maxObserved and seq>=lastSequence and (seq~=lastSequence or raw==lastRaw))
    else
     maxObserved=0
    end
   end
   lastEpoch,lastGeneration,lastSequence,lastRaw=expected.epoch,expected.generation,seq,raw
   lastCar,lastPatch,lastEvidence,lastEffect=expected.car_hash,expected.patch_code,expected.evidence_id,effect
   maxObserved=math.max(maxObserved,seq)
   return {sequence=seq,sensor_sequence=tonumber(q.sensor_sequence),model_sequence=tonumber(q.model_sequence),
    sensor_clock=sensor,model_clock=model,valid_mask=mask,coefficient=c,source_magnitude=bounds}
  end)
  if not ok then return nil end
  return result
 end
end
return Reader
