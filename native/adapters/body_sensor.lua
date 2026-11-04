-- Four fixed body points, independent of wheel/hub measurements. No API writes.
local BodySensor={}
local BODY=[[
uint32_t abi,epoch,sequence,generation,car_hash,flags,patch_code,reserved;
double dt,clock,axes[3][3],positions[4][3],velocity_local[4][3];
]]
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function dot(a,b) return a.x*b.x+a.y*b.y+a.z*b.z end
local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
local function checksum(bytes) local a,b=1,0;for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end;return b*65536+a end
function BodySensor.new(options,carHash)
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local s={sequence=0,packet=factory(BODY)}
    local points={{.5,0,0},{-.5,0,0},{0,0,1},{0,0,-1}}
    s.output=ac.writeMemoryMappedFile((options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.BodySensor',
        'uint32_t commit,checksum;struct {'..BODY..'} packet;',false)
    function s:disable() self.output.commit=0 end
    function s:step(dt,clock,flags,generation)
        if self.sequence>=1073741822 then self:disable();return end
        self.sequence=self.sequence+1;local p=self.packet
        p.abi=1;p.epoch=options.epoch;p.sequence=self.sequence;p.generation=finite(generation) and generation>=1 and generation<2147483647 and generation%1==0 and generation or 0;p.car_hash=carHash;p.flags=0;p.patch_code=0;p.reserved=0
        p.dt=finite(dt) and dt or 0;p.clock=finite(clock) and clock or 0
        for i=0,2 do for j=0,2 do p.axes[i][j]=0 end end
        for i=0,3 do for j=0,2 do p.positions[i][j]=points[i+1][j+1];p.velocity_local[i][j]=0 end end
        local stage=1
        local ok,error=pcall(function()
            assert(flags==15 and finite(dt) and dt>0 and dt<=.02 and finite(clock) and clock>=0 and p.generation>0)
            stage=2;local sim=ac.getSim()
            assert(sim and sim.isOnlineRace==false and sim.isPaused==false and sim.isReplayActive~=true and sim.isReplayOnlyMode~=true and sim.isSessionFinished~=true and
                ac.getCarID(0)==options.car_id)
            if physics.allowed~=nil then assert(physics.allowed()==true)
            else assert(ac.load and ac.load('ngp4_permission')==1 and ac.load('ngp4_epoch')==options.epoch and ac.load('ngp4_generation')==generation) end
            stage=3;local body=physics.getBodyTransform(0);local axes={body.side,body.up,body.look}
            for _,v in ipairs(axes) do assert(v and finite(v.x) and finite(v.y) and finite(v.z) and math.abs(dot(v,v)-1)<1e-4) end
            assert(math.abs(dot(axes[1],axes[2]))<1e-4 and math.abs(dot(axes[1],axes[3]))<1e-4 and math.abs(dot(axes[2],axes[3]))<1e-4)
            for i=0,2 do p.axes[i][0]=axes[i+1].x;p.axes[i][1]=axes[i+1].y;p.axes[i][2]=axes[i+1].z end
            stage=4;local patch=tonumber(ac.getPatchVersionCode());assert(finite(patch) and patch>0 and patch%1==0);p.patch_code=patch
            for i=0,3 do
                stage=5;local pos=points[i+1];local v=physics.getPointVelocity(0,vec3(pos[1],pos[2],pos[3]),true)
                assert(v and finite(v.x) and finite(v.y) and finite(v.z))
                for j=0,2 do p.velocity_local[i][j]=dot(v,axes[j+1]) end
            end
        end)
        local diagnostic=not ok and ('stage='..stage..' '..tostring(error)) or nil
        if diagnostic~=s.lastDiagnostic then
            s.lastDiagnostic=diagnostic
            if diagnostic and ac.log then ac.log('[ACNextGen] BodySensor invalid '..diagnostic) end
        end
        p.flags=ok and 15 or 0
        local raw=ac.structBytes(p);if #raw~=312 then self:disable();return end
        self.output.commit=p.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw)
        self.output.checksum=checksum(raw);barrier();self.output.commit=p.sequence*2
    end
    return s
end
