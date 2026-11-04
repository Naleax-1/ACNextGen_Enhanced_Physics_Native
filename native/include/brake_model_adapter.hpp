#pragma once
#include "model_runtime.hpp"
#include <array>
#include <cmath>

namespace ngp {
struct BrakeModelCandidate {
    unsigned valid_mask=0;
    std::array<double,4> friction_ratio{},disc_temperature_model{},lock_ratio{};
};
inline BrakeModelCandidate extract_brake_model(Runtime& runtime) {
    BrakeModelCandidate out;
    if(!runtime.errors.empty()||isnil(runtime.car))return out;
    try {
        auto fade=runtime.modules.find("brake_fade"),thermal=runtime.modules.find("brake_system"),lock=runtime.modules.find("brake_lock");
        if(fade==runtime.modules.end()||thermal==runtime.modules.end()||lock==runtime.modules.end())return out;
        auto f=get(fade->second,V("state")),t=get(thermal->second,V("state")),l=get(lock->second,V("state"));
        if(text(get(f,V("status")))!="RUNNING"||text(get(t,V("status")))!="RUNNING"||
           text(get(l,V("status")))!="RUNNING"||!truth(get(t,V("wheelsValid")))||!truth(get(l,V("wheelsValid"))))return out;
        auto required=[](const V& value){
            if(!std::holds_alternative<double>(value.data))throw std::runtime_error("Missing numeric brake state");
            const double number=num(value);
            if(!std::isfinite(number))throw std::runtime_error("Invalid brake state");
            return number;
        };
        const double normal=required(get(get(fade->second,V("params")),V("normalMu")));
        if(!std::isfinite(normal)||normal<=0.)return out;
        for(unsigned i=0;i<4;++i){
            V index{double(i)};
            auto mu=get(get(f,V("mu")),index),temp=get(get(t,V("discTemp")),index),locked=get(get(l,V("lock")),index);
            if(isnil(mu)||isnil(temp)||isnil(locked))return BrakeModelCandidate{};
            double ratio=required(mu)/normal,temperature=required(temp),lockValue=required(locked);
            if(!std::isfinite(ratio)||ratio<0.||ratio>1.||!std::isfinite(temperature)||temperature<0.||
               !std::isfinite(lockValue)||lockValue<0.||lockValue>1.)return BrakeModelCandidate{};
            out.friction_ratio[i]=ratio;out.disc_temperature_model[i]=temperature;out.lock_ratio[i]=lockValue;
        }
        out.valid_mask=15;return out;
    }catch(...){return BrakeModelCandidate{};}
}
}
