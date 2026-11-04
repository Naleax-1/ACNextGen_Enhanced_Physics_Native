-- Read-only registration conditions. ac.StateCar is render-rate data, never
-- an instantaneous physics sensor. These fields do not grant force permission.
local SpringLocalConditions={}
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
function SpringLocalConditions.new(options,hash)
    local p=options.spring_profile or {};local r=p.reference or {}
    local certified=r.control_source=='csp_statecar_render_v1' and r.controls_contract_verified==true
    local supportCertified=r.support_from_load_verified==true and r.ground_contact_contract_verified==true
    local s={frame=nil,frames=0,frameClock=nil,generation=0,reason='not_sampled'}
    function s:step(dt,clock,flags,generation)
        local c={enabled=false,offline=false,unpaused=false,neutral=false,zero_throttle=false,
            steering_centered=false,handbrake_on=false,all_ground_contacts=false}
        if generation~=self.generation then self.generation=generation;self.frame=nil;self.frames=0;self.frameClock=nil end
        if not finite(clock) or clock<0 or not finite(dt) or dt<=0 or dt>.02 then self.reason='invalid_clock';return c end
        local ok,sim=pcall(ac.getSim)
        if not ok or not sim then self.reason='sim_unavailable';return c end
        c.enabled=flags==15
        c.offline=sim.isOnlineRace==false and sim.isReplayActive~=true and sim.isReplayOnlyMode~=true and sim.isSessionFinished~=true
        c.unpaused=sim.isPaused==false
        if not c.enabled or not c.offline or not c.unpaused then self.reason='inactive';return c end
        if not certified or p.car_hash~=hash then self.reason='controls_contract_unverified';return c end
        local frame=tonumber(sim.frame)
        if not finite(frame) or frame<0 or frame%1~=0 or frame>9007199254740991 then self.reason='render_frame_unavailable';return c end
        if self.frame and frame<self.frame then self.frame=nil;self.frames=0;self.frameClock=nil;self.reason='render_frame_regressed';return c end
        if frame~=self.frame then self.frame=frame;self.frames=self.frames+1;self.frameClock=clock end
        if self.frames<2 or not self.frameClock or clock<self.frameClock or clock-self.frameClock>.030001 then self.reason='render_controls_stale';return c end
        local sampled,car=pcall(ac.getCar,0)
        local identityOK,identity=pcall(ac.getCarID,0)
        if not sampled or not car or car.physicsAvailable~=true or not identityOK or identity~=options.car_id then self.reason='car_unavailable';return c end
        local gear,gas,steer,hb=tonumber(car.gear),tonumber(car.gas),tonumber(car.steer),tonumber(car.handbrake)
        if not finite(gear) or gear%1~=0 or gear< -1 or gear>20 or not finite(gas) or gas<0 or gas>1 or
            not finite(steer) or not finite(hb) or hb<0 or hb>1 then self.reason='control_field_unavailable';return c end
        c.neutral=gear==0;c.zero_throttle=gas<=.001;c.steering_centered=math.abs(steer)<=.1;c.handbrake_on=hb>=.5
        c.all_ground_contacts=supportCertified
        for i=0,3 do
            local wheel=car.wheels and car.wheels[i];local load=wheel and tonumber(wheel.load)
            if not finite(load) or load<80 or load>100000 then c.all_ground_contacts=false end
        end
        local afterOK,after=pcall(ac.getSim)
        if not afterOK or not after or tonumber(after.frame)~=frame then
            c.neutral=false;c.zero_throttle=false;c.steering_centered=false;c.handbrake_on=false;c.all_ground_contacts=false
            self.reason='render_changed_during_read';return c
        end
        self.reason=c.all_ground_contacts and 'qualified_render_conditions' or 'support_unavailable'
        return c
    end
    return s
end
