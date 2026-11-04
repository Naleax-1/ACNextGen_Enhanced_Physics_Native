#pragma once
#include "brake_sensor_validation.hpp"
#include "brake_residual.hpp"
#include "brake_force_protocol.h"
#include <algorithm>

namespace ngp {
struct BrakeForceProfile {
    uint32_t car_hash=0;
    uint64_t evidence_id=0;
    // 1: signed brake torque; 2: nonnegative magnitude opposing wheel rotation.
    unsigned baseline_mode=0;
    double baseline_scale_nm_per_raw=0.,command_scale_raw_per_nm=0.,dt=0.;
    bool baseline_isolated=false,units_verified=false,exclusive_owner=false,abs_contract_verified=false,native_fade_double_counting_excluded=false,phase_verified=false;
    bool ready(uint32_t car)const {
        return car&&car==car_hash&&evidence_id&&evidence_id<=9007199254740991ULL&&(baseline_mode==1||baseline_mode==2)&&
            baseline_isolated&&units_verified&&exclusive_owner&&abs_contract_verified&&native_fade_double_counting_excluded&&phase_verified&&
            std::isfinite(dt)&&dt>0.&&dt<=.02&&
            std::isfinite(baseline_scale_nm_per_raw)&&baseline_scale_nm_per_raw>0.&&baseline_scale_nm_per_raw<=1000.&&
            std::isfinite(command_scale_raw_per_nm)&&std::abs(command_scale_raw_per_nm)>0.&&std::abs(command_scale_raw_per_nm)<=1000.;
    }
};
struct BrakeForceCandidate {
    uint32_t epoch=0,generation=0,car_hash=0,sensor_sequence=0,valid_mask=0;
    uint64_t evidence_id=0;
    double source_clock=0.;
    std::array<double,4> baseline_nm{},omega{},ratio{},delta_raw{},combined_nm{};
};
inline NgpbForceCommand brake_force_command(const BrakeForceCandidate& c,uint32_t sequence){
    NgpbForceCommand out{};out.abi=NGPB_FORCE_ABI;
    if(!std::isfinite(c.source_clock)||c.source_clock<0||c.valid_mask!=15||!sequence||sequence>=1073741823||!c.evidence_id||c.evidence_id>9007199254740991ULL)return out;
    out.epoch=c.epoch;out.generation=c.generation;out.car_hash=c.car_hash;out.sequence=sequence;
    out.mask=15;out.sensor_sequence=c.sensor_sequence;out.evidence_id=c.evidence_id;out.source_clock=c.source_clock;
    for(unsigned i=0;i<4;++i){out.ratio[i]=c.ratio[i];out.baseline_nm[i]=c.baseline_nm[i];out.delta_raw[i]=c.delta_raw[i];}
    return out;
}
// Profile qualification is external. Raw model and sensor flags cannot arm it.
inline BrakeForceCandidate brake_force_candidate(const NgpbSensor& sensor,const NgpbModelHints& model,
    double sensor_age,double model_age,uint32_t epoch,uint32_t generation,uint32_t car,
    const BrakeForceProfile& profile,bool enabled){
    BrakeForceCandidate out;
    if(!enabled||!profile.ready(car)||!brake_sensor_valid(sensor,epoch,generation,car,0.)||
       !std::isfinite(sensor_age)||sensor_age<0.||sensor_age>.006||
       !std::isfinite(model_age)||model_age<0.||model_age>.2||
       model.abi!=NGPB_ABI||model.valid_mask!=15||model.units_qualified||model.reserved||
       std::abs(sensor.dt-profile.dt)>1e-7||sensor.abs_in_action||sensor.handbrake_input>.001||sensor.brake_input<=.001)return out;
    BrakeResidualInput input;input.valid_mask=15;
    input.baseline_isolated=input.torque_units_verified=input.exclusive_owner=input.abs_inactive=true;
    for(unsigned i=0;i<4;++i){
        const double raw=sensor.brake_torque_raw[i],omega=sensor.angular_speed_raw[i];
        if(std::abs(omega)<1.||std::abs(sensor.handbrake_torque_raw[i])>1e-9||
           !std::isfinite(model.lock_ratio[i])||model.lock_ratio[i]<0.||model.lock_ratio[i]>1.)return out;
        if(profile.baseline_mode==2&&raw<0.)return out;
        input.native_brake_torque_nm[i]=raw*profile.baseline_scale_nm_per_raw;
        if(profile.baseline_mode==2)input.native_brake_torque_nm[i]*=omega>0.?-1.:1.;
        input.angular_speed_rad_s[i]=omega;input.friction_ratio[i]=model.friction_ratio[i];
    }
    const auto residual=brake_residual(input);if(residual.valid_mask!=15)return out;
    for(unsigned i=0;i<4;++i){
        out.delta_raw[i]=residual.delta_nm[i]*profile.command_scale_raw_per_nm;
        if(!std::isfinite(out.delta_raw[i])||std::abs(out.delta_raw[i])>20000.)return BrakeForceCandidate{};
    }
    out.epoch=epoch;out.generation=generation;out.car_hash=car;out.sensor_sequence=sensor.sequence;
    out.source_clock=sensor.clock;out.evidence_id=profile.evidence_id;out.valid_mask=15;
    out.baseline_nm=input.native_brake_torque_nm;out.omega=input.angular_speed_rad_s;
    out.ratio=input.friction_ratio;out.combined_nm=residual.combined_nm;return out;
}
}
