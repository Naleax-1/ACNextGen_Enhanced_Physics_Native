#pragma once
#include "lsd_coupling.hpp"
#include "drive_receipt_adapter.hpp"
namespace ngp {
// Internal canonical composition; never accept this decomposition from a wire receipt.
struct RearTorqueComposition {
    std::array<double,2> drive_nm{},pair_nm{},total_nm{},omega{},windup_nm{};
    bool windup_qualified=false;
    double dt=0;
    double reservation_j=0;
    bool valid=false;
};
inline RearTorqueComposition rear_torque_compose(const LsdCouplingInput& pair,
    const std::array<double,2>& drive_nm,double max_total_nm,bool drive_contract_verified,const std::array<double,2>* windup_nm=nullptr,bool windup_contract_verified=false){
    RearTorqueComposition out;
    auto coupling=lsd_coupling(pair);
    if(!coupling.valid||!drive_contract_verified||!std::isfinite(max_total_nm)||max_total_nm<=0||max_total_nm>12)return out;
    if(windup_nm){
        if(!windup_contract_verified)return out;
        for(double t:*windup_nm)if(!std::isfinite(t)||std::abs(t)>12)return out;
        out.windup_nm=*windup_nm;out.windup_qualified=true;
    }else if(windup_contract_verified)return out;
    const double duration=pair.dt+1e-7;
    for(unsigned i=0;i<2;++i){
        if(!std::isfinite(drive_nm[i])||std::abs(drive_nm[i])>12)return {};
        out.drive_nm[i]=drive_nm[i];out.pair_nm[i]=coupling.torque_nm[i];out.total_nm[i]=drive_nm[i]+out.pair_nm[i];
        if(!std::isfinite(out.total_nm[i])||std::abs(out.total_nm[i])>max_total_nm)return {};
        const double uncertainty=pair.acceleration_bound[i]*duration+3*pair.omega_error[i];
        out.reservation_j+=std::max(0.,drive_nm[i]*pair.omega[i]+std::abs(drive_nm[i])*uncertainty)*duration;
    }
    if(!std::isfinite(out.reservation_j))return {};
    // Pair transfer has its own nonpositive certificate; it neither spends
    // storage for its slower wheel nor credits future absorption to drive.
    out.omega=pair.omega;out.dt=pair.dt;out.valid=true;return out;
}
inline DriveExecutionReceipt rear_torque_receipt(const RearTorqueComposition& owned,
    const DriveExecutionCommand& command,const DriveAppliedObservation& raw,const DriveWorkProfile& profile){
    auto receipt=drive_receipt(command,raw,profile);
    if(receipt.fault||!receipt.work_measurement_verified)return receipt;
    receipt.fault=true;receipt.work_measurement_verified=false;receipt.absorbed_work_lower_j=0;
    if(!owned.valid||owned.pair_nm[0]!=-owned.pair_nm[1]||command.delta_nm!=owned.total_nm)return receipt;
    DriveWorkInterval drive;
    drive.dt=raw.clock_after-raw.clock_before;drive.applied_constant_nm=owned.drive_nm;
    drive.omega_before=raw.omega_before;drive.omega_after=raw.omega_after;
    if(std::abs(owned.dt-profile.dt)>1e-7)return receipt;
    for(unsigned i=0;i<2;++i)if(!std::isfinite(owned.omega[i])||std::abs(raw.omega_before[i]-owned.omega[i])>2*profile.omega_error_rad_s[i])return receipt;
    drive.acceleration_bound_rad_s2=profile.acceleration_bound_rad_s2;drive.omega_error_rad_s=profile.omega_error_rad_s;
    drive.torque_calibrated=drive.interval_aligned=drive.samples_verified=drive.acceleration_bound_verified=true;
    auto work=drive_work_bound(drive);if(!work.valid)return receipt;
    double uncertainty=0;
    for(unsigned i=0;i<2;++i){
        if(owned.drive_nm[i]+owned.pair_nm[i]!=owned.total_nm[i])return receipt;
        uncertainty+=profile.acceleration_bound_rad_s2[i]*drive.dt+profile.omega_error_rad_s[i];
    }
    const double pair_power=owned.pair_nm[0]*(raw.omega_before[0]-raw.omega_before[1])+std::abs(owned.pair_nm[0])*uncertainty;
    if(!std::isfinite(pair_power)||pair_power>0)return receipt;
    receipt.conservative_work_debit_j=work.positive_work_upper_j;
    // This legacy receipt API has no registered windup-recovery profile.
    // The qualified four-wheel receipt path handles optional attribution;
    // this path still cannot credit the dissipative LSD term.
    receipt.absorbed_work_lower_j=0;receipt.fault=false;receipt.work_measurement_verified=true;return receipt;
}
}
