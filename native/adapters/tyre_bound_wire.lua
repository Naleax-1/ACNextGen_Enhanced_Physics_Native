-- Explicitly selected existing body-only tyre effect. Dependencies are
-- supplied by the supervisor; incoming wire data cannot grant ownership.
local TyreBoundWire={}
local PACKET=[[
uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sensor_sequence,model_sequence,valid_mask,effect_id;
uint64_t evidence_id;double sensor_clock,model_clock,coefficient[4],source_magnitude[4];
]]
function TyreBoundWire.new(options,hash)
 local m=assert(TyreBoundModules,'Missing dedicated tyre dependencies')
 local declaration=options.tyre_local_profile
 local patch=tonumber(ac.getPatchVersionCode())
 local history,currentHistoryContext,lastHistoryRequest,lastHistoryStatus,lastHistoryError
 if options.tyre_interval_history==true then
  history=m.HistoryWorker.new(m.History,m.HistoryChannel,m.HistorySession,
   JSON.stringify,JSON.parse,ac.load,ac.store,ac.memoryBarrier)
 end
 local controller=m.Existing.new(m.Profile,m.Reader,m.Controller,m.Actor,m.Kernel,m.Envelope,m.Bound,
  {declaration=declaration,car_id=options.car_id,patch_code=patch,
   physical_enabled=options.physical_enabled,capture=options.enhancement_capture,
   calibration_only=options.calibration_capture_only==true,selected=options.tyre_local_selected==true,
   epoch=options.epoch,car_hash=hash,capture_application=options.tyre_application_trace==true,
   interval_observer=history and function(record)history:observe(record,currentHistoryContext)end or nil,
   interval_capture_active=history and function()return history.status=='recording'end or nil})
 if not controller then return nil end
 local input=nil;local lastGeneration=0;local revokedGeneration=0
 local s={};local publication=0;local lastClock=-1;local currentClock=0;local active=false
 local function publish()
  if publication>=1073741822 then return end
  publication=publication+1
  local status=controller:status();local prefix='ngp4_tyre_bound_'
  pcall(function()
   ac.store(prefix..'commit',publication*2-1);ac.memoryBarrier()
   local fields={epoch=options.epoch,generation=lastGeneration,car_hash=hash,clock=currentClock,
    calls=status.calls,frames=status.frames,ack=status.ack,fault=status.fault and 1 or 0,
    mask=active and status.active_mask or 0,power=active and status.observed_power or 0,active=active and 1 or 0}
   local trace=active and not status.fault and status.last_application or nil
   fields.trace_present=trace and 1 or 0
   local following=active and not status.fault and status.last_following_sample or nil
   fields.follow_present=following and 1 or 0
   if options.tyre_application_trace==true then
   fields.trace_sensor=trace and trace.sensor_sequence or 0
   fields.trace_hint=trace and trace.hint_sequence or 0
   fields.trace_dt=trace and trace.dt or 0
   for i=0,3 do
    local wheel=trace and trace.wheels[i]
    fields['trace_wheel'..i]=wheel and 1 or 0
    for _,key in ipairs({'point','force','velocity'}) do
     for j=0,2 do fields['trace_'..key..i..'_'..j]=wheel and wheel[key][j] or 0 end
    end
   end
   local previous=following and following.application
   fields.follow_clock=following and following.clock or 0
   fields.follow_dt=following and following.dt or 0
   fields.follow_sensor=following and following.sensor_sequence or 0
   fields.follow_callback=following and following.callback_sequence or 0
   for _,key in ipairs({'epoch','generation','car_hash','clock','dt','sensor_sequence','callback_sequence','hint_sequence'}) do
    fields['follow_previous_'..key]=previous and previous[key] or 0
   end
   for i=0,3 do
    local before=previous and previous.wheels[i]
    local after=following and following.wheels[i]
    fields['follow_wheel'..i]=before and after and 1 or 0
    for _,key in ipairs({'point','force','velocity'}) do
     for j=0,2 do fields['follow_before_'..key..i..'_'..j]=before and before[key][j] or 0 end
    end
    for _,key in ipairs({'point','velocity'}) do
     for j=0,2 do fields['follow_after_'..key..i..'_'..j]=after and after[key][j] or 0 end
    end
   end
   end
   for key,value in pairs(fields)do ac.store(prefix..key,value)end
   ac.memoryBarrier();ac.store(prefix..'commit',publication*2)
  end)
  lastClock=currentClock
 end
 function s:disable()revokedGeneration=lastGeneration;active=false;if history then pcall(history.stop,history)end;publish()end
 function s:step(sample,allowed)
  local generation=tonumber(sample.generation);lastGeneration=generation
  local context=ac.getCarID(0)==options.car_id and tonumber(ac.getPatchVersionCode())==patch
  if history then
   currentHistoryContext={epoch=options.epoch,generation=generation,car_hash=hash,
    clock=tonumber(sample.clock),enabled=allowed==true and context and generation~=revokedGeneration}
   pcall(function()
    local raw=ac.load('ngp4_tyre_history_request')
    if type(raw)=='string' and raw~=lastHistoryRequest and #raw<=2048 then
     lastHistoryRequest=raw;history:request(JSON.parse(raw),currentHistoryContext)
    end
   end)
  end
  if not input then
   local ok,value=pcall(ac.readMemoryMappedFile,
    (options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.TyreBound',
    'uint32_t commit,checksum;struct {'..PACKET..'} packet;',false)
   if ok then input=value end
  end
  local applied=controller:step(sample,input,allowed and context and generation~=revokedGeneration and 15 or 0,
   allowed==true and context,true,options.tyre_local_selected==true)
  currentClock=tonumber(sample.clock)
  if history and (history.status~=lastHistoryStatus or history.error~=lastHistoryError) then
   lastHistoryStatus=history.status;lastHistoryError=history.error
   pcall(function()
    ac.store('ngp4_tyre_history_worker_status',history.status)
    ac.store('ngp4_tyre_history_worker_error',history.error or '')
   end)
  end
  active=applied==true and allowed==true
  if lastClock<0 or currentClock<lastClock or currentClock-lastClock>=.1 or not allowed then publish()end
  return applied
 end
 function s:status()return controller:status()end
 return s
end
return TyreBoundWire
