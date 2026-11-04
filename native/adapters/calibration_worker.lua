---@diagnostic disable: undefined-global
-- Fixed one-shot calibration inputs. No automatic unit approval or model arming.
local o=assert(__input)
local bodyProbe=o.kind=='body_vertical'
local wheelProbe=o.kind=='wheel_vertical'
local wheelIndex=o.wheel_index
local validWheel=type(wheelIndex)=='number' and wheelIndex>=0 and wheelIndex<=3 and wheelIndex%1==0
local verticalProbe=bodyProbe or wheelProbe
local settle=o.settle_frames or 0
assert(settle==0 or settle==200,'Invalid settling interval')
assert(o.point_frame==nil or o.point_frame=='local' or o.point_frame=='world','Invalid point frame')
assert((bodyProbe and o.force_n==20 and (o.frames==1 or o.frames==8) and
    (o.argument_mode=='scaled_dt' or o.argument_mode=='raw_one' or o.argument_mode=='control' or o.argument_mode=='raw_reference')) or
    (o.kind=='rear_pair' and (o.torque_argument==.001 or o.torque_argument==0) and o.frames==1) or
    (wheelProbe and (o.argument==.1 or o.argument==1 or o.argument==10) and validWheel and o.frames==8 and o.point_frame=='world' and
     (o.argument_mode=='wheel_only' or o.argument_mode=='paired' or o.argument_mode=='control')),'Invalid calibration request')
local elapsed,beatAge,lastBeat,frame,calls=0,math.huge,nil,0,0
local impulse=0
assert(o.rear_phase_aligned==nil or (o.kind=='rear_pair' and type(o.rear_phase_aligned)=='boolean'),'Invalid rear phase option')
local rearPulseDone=false
local renderFrame,renderAge=nil,math.huge
local previousRelative,relativeSpeed=nil,0
assert(o.material_trace==nil or type(o.material_trace)=='boolean','Invalid material trace option')
local previousMaterial=nil
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function load(k) return ac.load('ngp4_'..k) end
local function log(v) ac.log('[ACNextGen CAL '..o.id..'] '..v) end
local function finish(reason)
    ac.store('ngp4_calibration_completed',reason=='completed' and 1 or 0)
    ac.store('ngp4_calibration_result_id',o.id)
    log('END reason='..reason..' calls='..calls..' argument_sum='..impulse);worker.terminate()
end
function script.update(dt)
    if not finite(dt) or dt<=0 or dt>.02 then finish('invalid_dt');return end
    elapsed=elapsed+dt;frame=frame+1
    local sampleFrame=frame-settle
    local beat=load('parent_heartbeat')
    if beat~=nil and beat~=lastBeat then lastBeat=beat;beatAge=0 else beatAge=beatAge+dt end
    local sim,car=ac.getSim(),ac.getCar(0)
    if wheelProbe then
        local rf=sim and tonumber(sim.frame)
        if finite(rf) and rf~=renderFrame then renderFrame=rf;renderAge=0 else renderAge=renderAge+dt end
    end
    local allowed=load('permission')==1
    if type(physics.allowed)=='function' or type(physics.allowed)=='cdata' then
        local ok,v=pcall(physics.allowed);allowed=allowed and ok and v==true
    end
    if load('epoch')~=o.epoch or load('generation')~=o.generation or beatAge>.2 or load('enabled')~=1 or not allowed or
       not sim or sim.isOnlineRace~=false or sim.isPaused~=false or sim.isSessionFinished==true or
       sim.isReplayActive==true or sim.isReplayOnlyMode==true or ac.getCarID(0)~=o.car_id then finish('interlock');return end
    if wheelProbe and load('calibration_only')~=1 then finish('model_force_isolation');return end
    local ok,errorMessage=pcall(function()
        local body=physics.getBodyTransform(0,-1,false)
        local v=physics.getPointVelocity(0,vec3(0,0,0),true)
        for _,a in ipairs({'x','y','z'}) do assert(finite(v[a]) and finite(body.up[a]) and
            body.position and finite(body.position[a]),'Invalid sample') end
        assert(car and car.physicsAvailable==true and car.gear==0 and finite(car.gas) and car.gas<=.001 and
            finite(car.steer) and math.abs(car.steer)<=1,'Controls changed')
        local cp=ac.getCarPhysics and ac.getCarPhysics(0)
        local wl=cp and cp.isAvailable==true and cp.wheels and cp.wheels[2]
        local wr=cp and cp.isAvailable==true and cp.wheels and cp.wheels[3]
        local held=finite(car.handbrake) and car.handbrake>=.9
        if o.auto_handbrake==true and verticalProbe and wl and wr and
            finite(wl.handbrakeTorque) and finite(wr.handbrakeTorque) and
            wl.handbrakeTorque>=100 and wr.handbrakeTorque>=100 then held=true end
        if frame==1 then log('CONTROLS handbrake='..tostring(car.handbrake)..' brake='..tostring(car.brake)..
            ' hb_torque_l='..tostring(wl and wl.handbrakeTorque or -1)..' hb_torque_r='..tostring(wr and wr.handbrakeTorque or -1)..
            ' horizontal_ms='..math.sqrt(v.x*v.x+v.z*v.z)..' gear='..car.gear..' gas='..car.gas..' steer='..car.steer) end
        if verticalProbe then
            if o.auto_handbrake==true and frame==1 and elapsed<=.15 and not held then frame=0;return end
            assert(held and v.x*v.x+v.z*v.z<=.005*.005,
                'Vertical probe gate held='..tostring(held)..' horizontal_ms='..math.sqrt(v.x*v.x+v.z*v.z)..
                ' frame='..frame..' elapsed='..elapsed..' handbrake='..tostring(car.handbrake))
        else
            assert(finite(car.handbrake) and car.handbrake<=.001 and finite(car.brake) and car.brake<=.001,
                'Rear probe requires released brakes')
        end
        local upNorm=body.up.x*body.up.x+body.up.y*body.up.y+body.up.z*body.up.z
        assert(upNorm>=.81 and upNorm<=1.21 and body.up.y>=.97 and
            v.x*v.x+v.y*v.y+v.z*v.z<=.05*.05,'Not stationary or level')
        -- A parked AC rigidbody can be asleep: zero samples would then prove
        -- neither the force scale nor a missing API. Wake once before baseline.
        physics.awakeCar(0)
        if frame==1 then log('AWAKE frame=1') end
        if frame==1 then
            local patch=-1
            if ac.getPatchVersionCode then local ok,value=pcall(ac.getPatchVersionCode);if ok then patch=tonumber(value) or -1 end end
            log('METADATA mass_kg='..(finite(car.mass) and car.mass or -1)..
                ' patch_code='..patch..
                ' inertia_l='..(wl and finite(wl.angularInertia) and wl.angularInertia or -1)..
                ' inertia_r='..(wr and finite(wr.angularInertia) and wr.angularInertia or -1)..
                ' px='..body.position.x..' py='..body.position.y..' pz='..body.position.z..
                ' brake='..tostring(car.brake)..' handbrake='..tostring(car.handbrake))
            if o.kind=='rear_pair' then
                -- Render/SDK metadata only. These names do not certify the
                -- effective rolling radius, inertia units or physics phase.
                for i=0,3 do
                    local pw=cp and cp.isAvailable==true and cp.wheels and cp.wheels[i]
                    local w=car.wheels and car.wheels[i]
                    local inertia=pw and pw.angularInertia
                    local shaft=pw and pw.shaftInertia
                    local radius=w and w.tyreRadius
                    local line='WHEEL_METADATA index='..i..
                        ' inertia_available='..(finite(inertia) and inertia>0 and 1 or 0)..
                        ' shaft_available='..(finite(shaft) and shaft>0 and 1 or 0)..
                        ' radius_available='..(finite(radius) and radius>0 and 1 or 0)
                    if finite(inertia) and inertia>0 then line=line..' angular_inertia_raw='..inertia end
                    if finite(shaft) and shaft>0 then line=line..' shaft_inertia_raw='..shaft end
                    if finite(radius) and radius>0 then line=line..' tyre_radius_m='..radius end
                    log(line)
                end
            end
        end
        if sampleFrame<=0 then return end
        -- 16 baseline frames, 8 pulse frames, 40 response frames. Always sample
        -- before writing: a sample at n+1 can show the response to write n.
        local sample='SAMPLE frame='..sampleFrame..' dt='..dt..' vx='..v.x..' vy='..v.y..' vz='..v.z..
            ' ux='..body.up.x..' uy='..body.up.y..' uz='..body.up.z..' calls='..calls
        if o.kind=='rear_pair' then
            local look=body.look
            local valid=look and finite(look.x) and finite(look.y) and finite(look.z)
            local norm=valid and look.x*look.x+look.y*look.y+look.z*look.z or 0
            valid=valid and norm>=.81 and norm<=1.21
            sample=sample..' heading_available='..(valid and 1 or 0)
            if valid then sample=sample..' heading_x='..look.x..' heading_y='..look.y..' heading_z='..look.z..
                ' origin_forward_ms='..(look.x*v.x+look.y*v.y+look.z*v.z) end
        end
        log(sample)
        local wheelPosition
        if wheelProbe then
            wheelPosition=physics.getBodyTransform(0,wheelIndex,false).position
            local w=car.wheels and car.wheels[wheelIndex]
            assert(w and finite(w.suspensionTravel) and finite(w.load),'Wheel render sample unavailable')
            local distance,relative=0,0
            for _,a in ipairs({'x','y','z'}) do
                assert(wheelPosition and finite(wheelPosition[a]),'Wheel position unavailable')
                distance=distance+(wheelPosition[a]-body.position[a])^2
                relative=relative+(wheelPosition[a]-body.position[a])*body.up[a]
            end
            assert(distance>=.01 and distance<=36 and w.load>=80,'Wheel geometry/contact gate')
            relativeSpeed=previousRelative and (relative-previousRelative)/dt or 0;previousRelative=relative
            assert(finite(relativeSpeed) and math.abs(relativeSpeed)<=.25,'Wheel relative-speed limit')
            log('WHEEL frame='..sampleFrame..' relative_up_m='..relative..' travel_m='..w.suspensionTravel..
                ' load_n='..w.load..' px='..wheelPosition.x..' py='..wheelPosition.y..' pz='..wheelPosition.z..
                ' render_frame='..tostring(tonumber(sim.frame) or -1)..' relative_speed_ms='..relativeSpeed..' wheel_index='..wheelIndex)
            -- Diagnostic candidates only. SDK wheel.velocity has no documented
            -- coordinate frame or sampling contract: never use it to write forces.
            local pointVelocity=physics.getPointVelocity(0,wheelPosition,false)
            local pointValid=true
            for _,a in ipairs({'x','y','z'}) do
                if not pointVelocity or not finite(pointVelocity[a]) then pointValid=false end
            end
            local pointUp=0
            if pointValid then
                pointUp=pointVelocity.x*body.up.x+pointVelocity.y*body.up.y+pointVelocity.z*body.up.z
            end
            local renderValid=false
            local rx,ry,rz=0,0,0
            local rv=w.velocity
            if rv and finite(rv.x) and finite(rv.y) and finite(rv.z) then
                renderValid=true;rx,ry,rz=rv.x,rv.y,rv.z
            end
            log('VELOCITY frame='..sampleFrame..' point_valid='..(pointValid and 1 or 0)..
                ' point_up_ms='..pointUp..' render_valid='..(renderValid and 1 or 0)..
                ' render_vx='..rx..' render_vy='..ry..' render_vz='..rz..
                ' render_age_s='..renderAge..' relative_speed_valid='..(sampleFrame>1 and 1 or 0))
            if o.material_trace==true then
                local axes={body.side,body.up,body.look};local xyz={'x','y','z'};local localPoint={0,0,0}
                for a=1,3 do
                    assert(axes[a],'Missing material basis')
                    for b=a,3 do
                        local d=0;assert(axes[b]);for _,j in ipairs(xyz) do assert(finite(axes[a][j]) and finite(axes[b][j]));d=d+axes[a][j]*axes[b][j] end
                        assert(math.abs(d-(a==b and 1 or 0))<1e-4,'Invalid material basis')
                    end
                    for _,j in ipairs(xyz) do localPoint[a]=localPoint[a]+(wheelPosition[j]-body.position[j])*axes[a][j] end
                end
                if previousMaterial then
                    local line='MATERIAL frame='..sampleFrame..' dt='..dt
                    for _,j in ipairs(xyz) do
                        local after=body.position[j];for a=1,3 do after=after+previousMaterial.localPoint[a]*axes[a][j] end
                        assert(finite(after),'Invalid material endpoint')
                        line=line..' b0'..j..'='..previousMaterial.position[j]..' b1'..j..'='..after..
                            ' w0'..j..'='..previousMaterial.position[j]..' w1'..j..'='..wheelPosition[j]
                    end
                    -- This follows the point selected at the previous callback,
                    -- including the body application point of a paired pulse.
                    log(line)
                end
                previousMaterial={localPoint=localPoint,position={x=wheelPosition.x,y=wheelPosition.y,z=wheelPosition.z}}
            end
        end
        if o.kind=='rear_pair' then
            assert(car.tractionType==0,'Rear probe requires RWD')
            local left,right=physics.getWheelAngularSpeed(0,ac.Wheel.RearLeft),physics.getWheelAngularSpeed(0,ac.Wheel.RearRight)
            assert(finite(left) and finite(right) and math.abs(left)<=.5 and math.abs(right)<=.5,'Wheels not stationary')
            local okFL,frontL=pcall(physics.getWheelAngularSpeed,0,0)
            local okFR,frontR=pcall(physics.getWheelAngularSpeed,0,1)
            local all=okFL and okFR and finite(frontL) and finite(frontR)
            local wheelLine='WHEELS frame='..sampleFrame..' left='..left..' right='..right..
                ' four_omega_available='..(all and 1 or 0)
            if all then wheelLine=wheelLine..' front_left='..frontL..' front_right='..frontR end
            log(wheelLine)
            local pulse=o.rear_phase_aligned==true and sampleFrame>=17 and sampleFrame<=24 and left-right>.02 or
                o.rear_phase_aligned~=true and sampleFrame==17
            if pulse and not rearPulseDone then
                rearPulseDone=true
                if o.torque_argument~=0 then
                    physics.addWheelTorque(0,ac.Wheel.RearLeft,o.torque_argument);calls=calls+1
                    physics.addWheelTorque(0,ac.Wheel.RearRight,-o.torque_argument);calls=calls+1
                end
                local afterL,afterR=physics.getWheelAngularSpeed(0,ac.Wheel.RearLeft),physics.getWheelAngularSpeed(0,ac.Wheel.RearRight)
                assert(finite(afterL) and finite(afterR),'Invalid wheel response')
                log('TORQUE frame='..sampleFrame..' argument='..o.torque_argument..' left_before='..left..' right_before='..right..
                    ' left_after='..afterL..' right_after='..afterR)
            end
        elseif wheelProbe and sampleFrame>16 and sampleFrame<=24 then
            assert(renderAge<=.03,'Wheel render sample stale')
            local arg=o.argument_mode=='control' and 0 or o.argument
            if arg~=0 then
                if o.argument_mode=='paired' then
                    physics.addForce(0,wheelPosition,false,vec3(body.up.x*arg,body.up.y*arg,body.up.z*arg),false)
                    calls=calls+1
                end
                physics.addForce(0,wheelPosition,false,vec3(-body.up.x*arg,-body.up.y*arg,-body.up.z*arg),false,wheelIndex)
                calls=calls+1;impulse=impulse+arg
            end
            log('WRITE frame='..sampleFrame..' argument='..arg..' wheel_index='..wheelIndex..' mode='..o.argument_mode)
        elseif bodyProbe and sampleFrame>16 and sampleFrame<=16+o.frames then
            -- raw_one is a bounded unit-comparison input, not "1 N". Its
            -- meaning is deliberately unverified; do not use it in models.
            local arg=o.argument_mode=='control' and 0 or (o.argument_mode=='raw_one' and 1 or
                (o.argument_mode=='raw_reference' and o.force_n or o.force_n*dt))
            if arg~=0 then
                local world=o.point_frame=='world'
                local pos=world and vec3(body.position.x,body.position.y,body.position.z) or vec3(0,0,0)
                physics.addForce(0,pos,not world,vec3(body.up.x*arg,body.up.y*arg,body.up.z*arg),false)
                calls=calls+1;impulse=impulse+arg
            end
            log('WRITE frame='..sampleFrame..' argument='..arg..' reference_force_n='..o.force_n..' mode='..o.argument_mode)
        end
    end)
    if not ok then finish('fault:'..tostring(errorMessage));return end
    if o.kind=='rear_pair' and o.rear_phase_aligned==true and sampleFrame>=24 and not rearPulseDone then finish('phase_not_found')
    elseif sampleFrame>=64 then finish('completed') elseif elapsed>1.3 then finish('time_limit') end
end
