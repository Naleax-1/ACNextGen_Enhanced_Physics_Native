---@diagnostic disable: undefined-global
-- Test-car transport only: reads actual physics state, never writes it.
local packetBody=[[
uint32_t abi, epoch, sequence, valid_mask;
double dt, clock;
double car[17];
double wheel[4][9];
]]
local box,sample
local elapsed,timer,sequence=0,0,0
local epoch=math.random(1,2147483646)
local ready=false
local function checksum(bytes)
    local a,b=1,0
    for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
    return b*65536+a
end
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function required(v) assert(finite(v),'Missing/nonfinite cphys field');return v end
local ok,err=pcall(function()
    local factory=ac.StructItem.build or ac.StructItem.combine
    sample=factory(packetBody)
    box=ac.writeMemoryMappedFile('AcTools.CSP.Limited.ACNextGen.V2.Car',
        'uint32_t commit, checksum; struct {'..packetBody..'} packet;',false)
    ready=true
end)
if not ok then ac.log('[ACNextGen Native] cphys transport unavailable: '..tostring(err)) end
function script.update(dt)
    if not ready or not car or car.index~=0 then return end
    if not finite(dt) or dt<=0 then return end
    elapsed=elapsed+dt;timer=timer+dt
    if timer<.05 then return end
    local captureDt=timer;timer=0
    local good,message=pcall(function()
        local d=ac.accessCarPhysics()
        sequence=sequence+1;assert(sequence<1073741823,'Capture sequence exhausted')
        sample.abi=2;sample.epoch=epoch;sample.sequence=sequence;sample.valid_mask=1
        sample.dt=captureDt;sample.clock=elapsed
        sample.car[0]=required(d.speedKmh);sample.car[1]=required(d.rpm)
        sample.car[2]=required(d.gas);sample.car[3]=required(d.brake);sample.car[4]=required(d.clutch)
        sample.car[5]=required(d.steer);sample.car[6]=required(d.gear)
        sample.car[7]=required(d.gForces.x);sample.car[8]=required(d.gForces.y);sample.car[9]=required(d.gForces.z)
        sample.car[10]=required(d.localVelocity.x);sample.car[11]=required(d.localVelocity.y);sample.car[12]=required(d.localVelocity.z)
        sample.car[13]=required(d.localAngularVelocity.x);sample.car[14]=required(d.localAngularVelocity.y);sample.car[15]=required(d.localAngularVelocity.z)
        sample.car[16]=required(d.engineTorque)
        for i=0,3 do
            local w=d.wheels[i]
            sample.wheel[i][0]=required(w.angularSpeed);sample.wheel[i][1]=required(w.slipAngle);sample.wheel[i][2]=required(w.slipRatio)
            sample.wheel[i][3]=required(w.load);sample.wheel[i][4]=required(w.suspensionTravel);sample.wheel[i][5]=required(w.damperSpeed)
            sample.wheel[i][6]=required(w.fx);sample.wheel[i][7]=required(w.fy);sample.wheel[i][8]=required(w.mz)
        end
        local bytes=ac.structBytes(sample);assert(#bytes==456,'cphys ABI size mismatch')
        box.commit=sequence*2-1
        ac.fillStructWithBytes(box.packet,bytes)
        box.checksum=checksum(bytes)
        box.commit=sequence*2
    end)
    if not good then ready=false;ac.log('[ACNextGen Native] cphys capture stopped: '..tostring(message)) end
end
function script.reset() elapsed=0;timer=0;epoch=math.random(1,2147483646) end
