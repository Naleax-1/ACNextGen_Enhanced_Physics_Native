#pragma once
#include "model_runtime.hpp"
#include "windup_components.hpp"
#include "physics_hub_gate.hpp"
#include <cmath>

namespace ngp {
// Owned model states, not an additional wheel torque command. The original
// windup outputs are normalized and must never be added to nominal Nm values.
struct DriveModelCandidate {
    bool valid=false,units_qualified=false;
    double wheel_drive_torque_model_nm=0,drive_normalized=0;
    double windup_demand_normalized=0,windup_transmitted_normalized=0;
    double windup_torque_normalized=0,windup_soft_normalized=0;
    WindupComponents components;
    std::string configuration_source,windup_input_source;
};
inline DriveModelCandidate extract_drive_model(Runtime& runtime) {
    DriveModelCandidate out;
    if(!physics_hub_ready(runtime))return out;
    try {
        auto drive=runtime.modules.find("drivetrain"),windup=runtime.modules.find("driveline_windup");
        if(drive==runtime.modules.end()||windup==runtime.modules.end())return out;
        auto d=get(drive->second,V("state")),w=get(windup->second,V("state"));
        if(text(get(d,V("status")))!="RUNNING"||text(get(w,V("status")))!="RUNNING"||!truth(get(w,V("wheelsValid"))))return out;
        auto read=[](const V& state,const char* key){
            auto value=get(state,V(key));
            if(!std::holds_alternative<double>(value.data))throw std::runtime_error("Missing numeric drive state");
            auto number=num(value);if(!std::isfinite(number))throw std::runtime_error("Invalid drive state");
            return number;
        };
        out.wheel_drive_torque_model_nm=read(d,"wheelDriveTorqueNm");
        out.drive_normalized=read(d,"driveTorque");
        out.windup_demand_normalized=read(w,"demand");
        out.windup_transmitted_normalized=read(w,"transmittedTorque");
        out.windup_torque_normalized=read(w,"windupTorque");
        out.windup_soft_normalized=read(w,"softTorque");
        for(auto value:{out.drive_normalized,out.windup_demand_normalized,out.windup_transmitted_normalized,out.windup_torque_normalized,out.windup_soft_normalized})
            if(std::abs(value)>1.)return DriveModelCandidate{};
        if(std::abs(out.wheel_drive_torque_model_nm)>12000.)return DriveModelCandidate{};
        auto parameters=get(windup->second,V("params"));
        const double dirty=read(w,"dirtyReturn"),loss_gain=read(parameters,"dirtyReturnTorqueLoss");
        const double loss=1-std::clamp(dirty*loss_gain,0.,.45);
        out.components=windup_components(out.windup_demand_normalized,out.windup_transmitted_normalized,
            out.windup_torque_normalized,loss,out.windup_soft_normalized);
        if(!out.components.valid)return DriveModelCandidate{};
        out.configuration_source=text(get(d,V("configSource")));
        out.windup_input_source=text(get(w,V("torqueSource")));
        out.valid=true;return out;
    }catch(...){return DriveModelCandidate{};}
}
}
