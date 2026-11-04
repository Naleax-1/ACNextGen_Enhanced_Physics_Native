#pragma once
#include "brake_force_channel.hpp"
#include "rear_torque_composition.hpp"
namespace ngp {
struct FourWheelTorqueComposition {
    std::array<double,4> brake_residual_nm{},api_correction_nm{},known_combined_nm{};
    double drive_reservation_j=0;
    bool valid=false;
};
// Internal conversion only. Both inputs must be retained canonical proposals,
// not worker-provided decompositions. A qualified common-callback service-brake
// baseline remains mandatory; fade is NOT arbitrary additional damping.
inline FourWheelTorqueComposition compose_brake_rear(const BrakeForceCandidate& brake,
    const RearTorqueComposition& rear,const DriveExecutionCommand& rear_command,
    double dt,double max_correction_nm,bool single_owner_verified,bool common_phase_verified){
    FourWheelTorqueComposition out;
    if(!single_owner_verified||!common_phase_verified||brake.valid_mask!=15||!rear.valid||!rear_command.sequence||
       !brake.epoch||brake.epoch!=rear_command.epoch||brake.generation!=rear_command.generation||
       !brake.generation||!brake.sensor_sequence||!brake.car_hash||brake.car_hash!=rear_command.car_hash||!brake.evidence_id||
       !std::isfinite(brake.source_clock)||!std::isfinite(rear_command.source_clock)||brake.source_clock<0||
       std::abs(brake.source_clock-rear_command.source_clock)>1e-7||rear_command.delta_nm!=rear.total_nm||
       !std::isfinite(dt)||dt<=0||dt>.003||!std::isfinite(rear.dt)||std::abs(rear.dt-dt)>1e-7||!std::isfinite(max_correction_nm)||max_correction_nm<=0||max_correction_nm>20000||
       !std::isfinite(rear.reservation_j)||rear.reservation_j<0)return out;
    for(unsigned i=0;i<4;++i){
        const double baseline=brake.baseline_nm[i],ratio=brake.ratio[i],omega=brake.omega[i];
        if(!std::isfinite(baseline)||std::abs(baseline)>20000||!std::isfinite(omega)||std::abs(omega)>2000||std::abs(omega)<1||
           baseline*omega>0||!std::isfinite(ratio)||ratio<0||ratio>1||
           !std::isfinite(brake.combined_nm[i])||std::abs(brake.combined_nm[i]-baseline*ratio)>1e-9)return {};
        if(i>=2&&(!std::isfinite(rear.omega[i-2])||omega!=rear.omega[i-2]))return {};
        const double addition=i>=2?rear.total_nm[i-2]:0;
        if(!std::isfinite(addition))return {};
        out.brake_residual_nm[i]=baseline*ratio-baseline;
        out.api_correction_nm[i]=out.brake_residual_nm[i]+addition;
        out.known_combined_nm[i]=baseline*ratio+addition;
        if(!std::isfinite(out.api_correction_nm[i])||std::abs(out.api_correction_nm[i])>max_correction_nm)return {};
    }
    // Saving native brake dissipation supplies no new drive storage credit.
    out.drive_reservation_j=rear.reservation_j;out.valid=true;return out;
}
}
