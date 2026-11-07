-- Experimental composition; no profile authorization or production binding.
local BoundActor={}
function BoundActor.new(Actor,Kernel,Envelope,captureApplication,captureInterval)
 local bounds=nil
 local adapter={compute=function(sample,coefficients,mask)
  if not bounds then return nil end
  local current=Kernel.compute(sample,coefficients,mask)
  if not current then return nil end
  local forces=Envelope.limit(current,bounds)
  if not forces then return nil end
  current.forces=forces
  return current
 end}
 local actor=Actor.new(adapter,captureApplication,captureInterval);local original=actor.step
 function actor:step(sample,hint,authorized,geometry,callbackSequence)
  -- Bounds exist only for this call; even errors cannot retain them.
  bounds=hint and hint.source_magnitude or nil
  local ok,result,message=pcall(original,self,sample,hint,authorized,geometry,callbackSequence)
  bounds=nil
  if not ok then self.fault=true;return false,tostring(result) end
  return result,message
 end
 return actor
end
return BoundActor
