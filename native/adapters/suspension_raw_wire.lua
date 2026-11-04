local SuspensionRawWire={}
local BODY=[[
uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
uint32_t app_masks[2],suspension_masks[2],damper_masks[2],render_mask,reserved2;
uint64_t render_frames[2];double dt,clock_before,clock_after;
double app_before[4],app_after[4],suspension_before[4],suspension_after[4],damper_before[4],damper_after[4];
]]
local function barrier()if ac.memoryBarrier then ac.memoryBarrier()end end
local function checksum(raw)local a,b=1,0;for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
function SuspensionRawWire.new(options,hash)
 assert(options.suspension_raw_capture==true,'Raw suspension capture must be explicitly selected')
 local s={observer=SuspensionRawObserver.new(options,hash),sequence=0}
 local factory=assert(ac.StructItem.build or ac.StructItem.combine);s.packet=factory(BODY)
 s.output=ac.writeMemoryMappedFile((options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.SuspensionRawSensor','uint32_t commit,checksum;struct {'..BODY..'} packet;',false)
 function s:disable()self.observer:reset();self.output.commit=0 end
 function s:step(dt,clock,flags,generation)
  local pair=self.observer:sample(clock,dt,flags,generation)
  if not pair or self.sequence>=1073741822 then self.output.commit=0;return end
  self.sequence=self.sequence+1;local p=self.packet;p.abi=1;p.epoch=options.epoch;p.sequence=self.sequence;p.generation=generation;p.car_hash=hash;p.flags=flags;p.patch_code=pair.after.patch_code;p.reserved=0;p.reserved2=0
  p.dt=dt;p.clock_before=pair.before.clock;p.clock_after=pair.after.clock;p.render_mask=0
  for index,sample in ipairs({pair.before,pair.after})do
   local j=index-1;p.app_masks[j]=sample.app_mask;p.suspension_masks[j]=sample.suspension_mask;p.damper_masks[j]=sample.damper_mask
   local render=sample.render_frame
   if render and render<=9007199254740991 then p.render_frames[j]=render;p.render_mask=p.render_mask+2^j else p.render_frames[j]=0 end
   local suffix=index==1 and 'before' or 'after'
   for i=0,3 do p['app_'..suffix][i]=sample.app_travel[i] or 0;p['suspension_'..suffix][i]=sample.extended_suspension[i] or 0;p['damper_'..suffix][i]=sample.extended_damper[i] or 0 end
  end
  local raw=ac.structBytes(p);assert(#raw==296,'Suspension raw ABI mismatch')
  self.output.commit=self.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw);self.output.checksum=checksum(raw);barrier();self.output.commit=self.sequence*2
 end
 return s
end
