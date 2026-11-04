-- Diagnostic publication only; receives no commands and never calls physics.
local M={}
local BODY=[[
uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
double dt,clock,position[3],axes[3][3],local_velocity_raw[3],local_angular_velocity_raw[3];
double wheel_position[4][3],wheel_axes[4][3][3],wheel_velocity_raw[4][3],wheel_values[4][9];
]]
local function checksum(raw) local a,b=1,0;for i=1,#raw do a=(a+raw:byte(i))%65521;b=(b+a)%65521 end;return b*65536+a end
local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
function M.new(observer,options)
    assert(options.epoch>=1 and options.epoch<1073741823 and options.epoch%1==0)
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local s={observer=observer,packet=factory(BODY)}
    s.output=ac.writeMemoryMappedFile((options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.FFBPhysicsSensor',
        'uint32_t commit,checksum;struct {'..BODY..'} packet;',false)
    function s:disable() self.output.commit=0 end
    function s:publish(sample)
        self:disable()
        if not sample then return end
        local ok=pcall(function()
            local patch=tonumber(ac.getPatchVersionCode());assert(patch and patch==patch and patch>=1 and patch<2147483647 and patch%1==0)
            local p=self.packet;p.abi=1;p.epoch=options.epoch;p.sequence=sample.sequence;p.generation=1
            p.car_hash=checksum(sample.car_id);p.flags=15;p.patch_code=patch;p.reserved=0;p.dt=sample.dt;p.clock=sample.clock
            for j=0,2 do
                p.position[j]=sample.position[j+1];p.local_velocity_raw[j]=sample.local_velocity_raw[j+1];p.local_angular_velocity_raw[j]=sample.local_angular_velocity_raw[j+1]
                for a=0,2 do p.axes[a][j]=sample.axes[a+1][j+1] end
                for i=0,3 do
                    local w=sample.wheels[i];p.wheel_position[i][j]=w.position[j+1];p.wheel_velocity_raw[i][j]=w.velocity_raw[j+1]
                    for a=0,2 do p.wheel_axes[i][a][j]=w.axes[a+1][j+1] end
                end
            end
            for i=0,3 do for k,name in ipairs({'damperSpeed','suspensionTravel','angularSpeed','load','fx','fy','mz','slipAngle','slipRatio'}) do p.wheel_values[i][k-1]=sample.wheels[i][name] end end
            local raw=ac.structBytes(p);assert(#raw==960)
            self.output.commit=p.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw)
            self.output.checksum=checksum(raw);barrier();self.output.commit=p.sequence*2
        end)
        if not ok then self:disable() end
    end
    return s
end
return M
