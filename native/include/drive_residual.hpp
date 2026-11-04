#pragma once
#include <algorithm>
#include <array>
#include <cmath>

namespace ngp {
enum class DriveTorqueMode { isolated_residual, additional_windup };
// RWD pair only. Residual mode requires isolated native torque; explicit
// additional-windup mode has a zero baseline for its new effect only.
// Nm estimates and normalized states are deliberately separate inputs.
struct DriveResidualInput {
    DriveTorqueMode mode=DriveTorqueMode::isolated_residual;
    bool additional_windup_contract_verified=false;
    std::array<double,2> native_drive_nm{},model_drive_nm{},omega_rad_s{},windup_nm_per_normalized{};
    double windup_demand_normalized=0,windup_soft_normalized=0,dt=0;
    // Independently measured/validated energy available to the additional
    // drivetrain. This function never credits predicted dissipated work.
    double available_additional_energy_j=0;
    bool model_valid=false,baseline_isolated=false,same_tick_verified=false;
    bool model_nm_verified=false,windup_scale_verified=false,exclusive_owner=false;
    bool rwd_verified=false,controls_contract_verified=false;
};
struct DriveResidualOutput {
    std::array<double,2> drive_delta_nm{},windup_delta_nm{},delta_nm{},combined_nm{};
    double positive_work_reservation_j=0;
    bool valid=false;
};
inline DriveResidualOutput drive_residual(const DriveResidualInput& in){
    DriveResidualOutput out;
    if(!in.model_valid||!in.same_tick_verified||
       !in.windup_scale_verified||!in.exclusive_owner||!in.rwd_verified||!in.controls_contract_verified)return out;
    const bool additional=in.mode==DriveTorqueMode::additional_windup;
    if(in.mode!=DriveTorqueMode::isolated_residual&&!additional)return out;
    if(additional){if(!in.additional_windup_contract_verified)return out;}
    else if(!in.baseline_isolated||!in.model_nm_verified)return out;
    if(!std::isfinite(in.dt)||in.dt<=0||in.dt>.02||!std::isfinite(in.available_additional_energy_j)||
       in.available_additional_energy_j<0||!std::isfinite(in.windup_demand_normalized)||
       !std::isfinite(in.windup_soft_normalized)||std::abs(in.windup_demand_normalized)>1||
       std::abs(in.windup_soft_normalized)>1)return out;
    for(unsigned i=0;i<2;++i){
        const auto native=in.native_drive_nm[i],model=in.model_drive_nm[i],omega=in.omega_rad_s[i],scale=in.windup_nm_per_normalized[i];
        if(!std::isfinite(native)||!std::isfinite(model)||!std::isfinite(omega)||!std::isfinite(scale)||
           std::abs(native)>20000||std::abs(model)>12000||std::abs(omega)>2000||scale==0||std::abs(scale)>20000)return DriveResidualOutput{};
        // In additional mode, zero is the baseline of the NEW effect, not
        // a claim that native AC drive torque is zero. Reject mixed inputs.
        if(additional&&(native!=0||model!=0))return DriveResidualOutput{};
        out.drive_delta_nm[i]=additional?0:model-native;
        // softTorque already includes transmitted torque and the windup term;
        // adding windupTorque again would count the original effect twice.
        out.windup_delta_nm[i]=(in.windup_soft_normalized-in.windup_demand_normalized)*scale;
        out.combined_nm[i]=model+out.windup_delta_nm[i];
        out.delta_nm[i]=out.combined_nm[i]-native;
        if(!std::isfinite(out.combined_nm[i])||std::abs(out.combined_nm[i])>20000)return DriveResidualOutput{};
        out.positive_work_reservation_j+=std::max(0.,out.delta_nm[i]*omega*in.dt);
    }
    // No clipping into a different effect. Reservation must be committed by
    // an execution ledger only after a matching actuator receipt.
    if(!std::isfinite(out.positive_work_reservation_j)||out.positive_work_reservation_j>in.available_additional_energy_j)return DriveResidualOutput{};
    out.valid=true;return out;
}
}
