#pragma once
#include "model_runtime.hpp"
namespace ngp {
struct BodyModelCandidate {
    std::array<double,4> normalized{}; // roll, pitch, heave, yawHint
    bool valid=false,units_qualified=false;
};
inline BodyModelCandidate extract_body_model(Runtime& runtime){
    BodyModelCandidate out;
    if(!runtime.errors.empty()||isnil(runtime.car))return out;
    try{
        auto it=runtime.modules.find("chassis_roll");if(it==runtime.modules.end())return out;
        auto state=get(it->second,V("state")),params=get(it->second,V("params"));
        if(text(get(state,V("status")))!="RUNNING")return out;
        const char* keys[]={"roll","pitch","heave","yawHint"};
        const char* limits[]={"maxRoll","maxPitch","maxHeave","maxYaw"};
        for(unsigned i=0;i<4;++i){
            auto value=get(state,V(keys[i])),bound=get(params,V(limits[i]));
            if(!std::holds_alternative<double>(value.data)||!std::holds_alternative<double>(bound.data))return BodyModelCandidate{};
            double v=num(value),cap=num(bound);
            if(!std::isfinite(v)||!std::isfinite(cap)||cap<=0||std::abs(v)>cap+1e-12)return BodyModelCandidate{};
            out.normalized[i]=v;
        }
        out.valid=true;return out;
    }catch(...){return BodyModelCandidate{};}
}
}
