#pragma once
#include "drive_model_protocol.h"
#include "drive_force_path.hpp"
namespace ngp {
struct DriveModelFrame {
    NgpdModelHints hints{};
    uint32_t epoch=0,generation=0,car_hash=0;
    double source_clock=0;
};
struct DriveModelConversionProfile {
    DriveTorqueMode mode=DriveTorqueMode::isolated_residual;
    bool additional_windup_contract_verified=false;
    uint32_t car_hash=0;
    std::array<double,2> windup_nm_per_normalized{};
    bool per_wheel_model_nm_verified=false,windup_scale_verified=false;
    bool exclusive_owner=false,rwd_verified=false,controls_contract_verified=false;
};
struct DriveNativeSample {
    uint32_t epoch=0,generation=0,car_hash=0,sequence=0;
    double clock=0,dt=0;
    std::array<double,2> isolated_drive_nm{},omega_rad_s{};
    bool baseline_isolated=false,same_tick_verified=false;
};
struct DriveConvertedRequest {DriveForceRequest request;bool valid=false;};
// wheel_drive_torque_model_nm is already a PER-WHEEL value in drivetrain.lua.
// Its source is unqualified until the independent conversion profile is proven.
inline DriveConvertedRequest drive_model_request(const DriveModelFrame& frame,
    const DriveNativeSample& sensor,const DriveModelConversionProfile& profile){
    DriveConvertedRequest out;const auto& h=frame.hints;
    const bool additional=profile.mode==DriveTorqueMode::additional_windup;
    if(profile.mode!=DriveTorqueMode::isolated_residual&&!additional)return out;
    if(additional){if(!profile.additional_windup_contract_verified)return out;}
    else if(!sensor.baseline_isolated||!profile.per_wheel_model_nm_verified)return out;
    if(!profile.car_hash||sensor.car_hash!=profile.car_hash||frame.car_hash!=profile.car_hash||
       !sensor.epoch||!sensor.generation||frame.epoch!=sensor.epoch||frame.generation!=sensor.generation||
       !sensor.sequence||sensor.sequence>=1073741823||!sensor.same_tick_verified||
       !profile.windup_scale_verified||!profile.exclusive_owner||!profile.rwd_verified||!profile.controls_contract_verified||
       h.abi!=NGPD_MODEL_ABI||h.valid!=1||h.units_qualified||h.reserved||
       !std::isfinite(sensor.clock)||sensor.clock<0||!std::isfinite(frame.source_clock)||frame.source_clock<0||
       frame.source_clock>sensor.clock||sensor.clock-frame.source_clock>.1||!std::isfinite(sensor.dt)||sensor.dt<=0||sensor.dt>.003)return out;
    for(double v:{h.drive_normalized,h.windup_demand_normalized,h.windup_transmitted_normalized,h.windup_torque_normalized,h.windup_soft_normalized})
        if(!std::isfinite(v)||std::abs(v)>1)return out;
    if(!std::isfinite(h.wheel_drive_torque_model_nm)||std::abs(h.wheel_drive_torque_model_nm)>12000)return out;
    for(unsigned i=0;i<2;++i)if((!additional&&(!std::isfinite(sensor.isolated_drive_nm[i])||std::abs(sensor.isolated_drive_nm[i])>20000))||
       !std::isfinite(sensor.omega_rad_s[i])||std::abs(sensor.omega_rad_s[i])>2000||
       !std::isfinite(profile.windup_nm_per_normalized[i])||profile.windup_nm_per_normalized[i]==0||std::abs(profile.windup_nm_per_normalized[i])>20000)return out;
    auto& r=out.request;r.epoch=sensor.epoch;r.generation=sensor.generation;r.car_hash=sensor.car_hash;r.sensor_sequence=sensor.sequence;
    r.source_clock=sensor.clock;r.model_age=sensor.clock-frame.source_clock;
    auto& in=r.input;in.dt=sensor.dt;in.mode=profile.mode;in.additional_windup_contract_verified=profile.additional_windup_contract_verified;
    in.native_drive_nm=additional?std::array<double,2>{0,0}:sensor.isolated_drive_nm;in.omega_rad_s=sensor.omega_rad_s;
    in.model_drive_nm=additional?std::array<double,2>{0,0}:std::array<double,2>{h.wheel_drive_torque_model_nm,h.wheel_drive_torque_model_nm};
    in.windup_nm_per_normalized=profile.windup_nm_per_normalized;
    in.windup_demand_normalized=h.windup_demand_normalized;in.windup_soft_normalized=h.windup_soft_normalized;
    // soft already contains the transmitted/windup effect. Neither the
    // normalized drive output nor windup_torque is added a second time.
    in.baseline_isolated=sensor.baseline_isolated;in.model_nm_verified=profile.per_wheel_model_nm_verified;
    in.model_valid=in.same_tick_verified=in.windup_scale_verified=in.exclusive_owner=in.rwd_verified=in.controls_contract_verified=true;
    out.valid=true;return out;
}
}
