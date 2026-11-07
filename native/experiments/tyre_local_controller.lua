-- Experimental orchestration. No installation or calibration is implied.
-- Profile authorization, vehicle geometry and exclusive ownership must be
-- independently established by the supervisor before this can be used.
local Controller={}
local function positiveInteger(x) return type(x)=='number' and x==x and x%1==0 and x>0 and x<4294967296 end
function Controller.new(reader,actorFactory,profile,epoch,carHash,intervalObserver)
 assert(type(reader)=='function' and type(actorFactory)=='function' and type(profile)=='table')
 assert(positiveInteger(epoch) and positiveInteger(carHash))
 local actor=actorFactory();local generation=0;local stoppedGeneration=0;local uncertain=false;local unresolved=0;local ack=0;local heldSequence=0;local heldUpdates=0;local callbackSequence=0;local s={}
 function s:step(sample,input,flags,physicalEnabled,geometryVerified,ownerVerified)
  callbackSequence=callbackSequence+1
  -- The trusted caller supplies current physics flags and independent geometry
  -- and ownership checks. A negative result never reuses a previous hint.
  actor:clear_observation()
  local ok,result=pcall(function()
   local g=tonumber(sample.generation)
   assert(positiveInteger(g) and tonumber(sample.epoch)==epoch and tonumber(sample.car_hash)==carHash)
   assert(g>=generation)
   if g~=generation then
    -- A throwing API may have mutated physics before raising. A new
    -- generation cannot establish whether the previous call took effect.
    if actor.ambiguous_calls and actor.ambiguous_calls>0 then uncertain=true;unresolved=math.max(unresolved,actor.ambiguous_calls) end
    generation=g;actor=actorFactory();ack=0;heldSequence=0;heldUpdates=0
   end
   if uncertain then return false end
   if flags~=15 or physicalEnabled~=true then stoppedGeneration=g;return false end
   if stoppedGeneration==g or geometryVerified~=true or ownerVerified~=true or profile.verified~=true then return false end
   local expected={profile_verified=true,epoch=epoch,generation=g,car_hash=carHash,patch_code=profile.patch_code,
    evidence_id=profile.evidence_id,effect_id=profile.effect_id,sensor_sequence=tonumber(sample.sequence),clock=tonumber(sample.clock)}
   local hint=reader(input,expected)
   if not hint then return false end
   -- Preserve the existing enhancement lease independently of clock age.
   -- Even a zero-force callback consumes one update of this publication.
   if hint.sequence~=heldSequence then heldSequence=hint.sequence;heldUpdates=0 end
   if heldUpdates>=4 then return false end
   heldUpdates=heldUpdates+1
   ack=hint.sequence
   local applied=actor:step(sample,hint,true,true,callbackSequence)==true
   if actor.ambiguous_calls and actor.ambiguous_calls>0 then uncertain=true;unresolved=math.max(unresolved,actor.ambiguous_calls) end
   return applied
  end)
  -- Diagnostics cannot affect application success or the physics fault latch.
  if intervalObserver then pcall(intervalObserver,ok and result==true and actor.last_interval or nil)end
  return ok and result==true
 end
 function s:status()return {generation=generation,ack=ack,fault=actor.fault or uncertain,uncertain=uncertain,calls=actor.calls,frames=actor.frames,
  ambiguous_calls=unresolved,active_mask=actor.active_mask,observed_power=actor.observed_power,observed_dissipated_j=actor.observed_dissipated_j,
  last_application=actor.last_application,last_following_sample=actor.last_following_sample}end
 return s
end
return Controller
