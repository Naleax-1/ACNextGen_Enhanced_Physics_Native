#pragma once
#include "drive_execution.hpp"
#include "drive_work.hpp"
namespace ngp {
// Raw Worker observations + independently registered calibration. A command
// cannot approve its own action duration, units or acceleration bounds.
struct DriveAppliedObservation {
    uint64_t sequence=0;
    uint32_t epoch=0,generation=0,car_hash=0,completed_mask=0;
    double clock_before=0,clock_after=0;
    std::array<double,2> omega_before{},omega_after{},applied_nm{};
    bool samples_valid=false,api_fault=false;
};
struct DriveWorkProfile {
    uint32_t car_hash=0;
    double dt=0;
    std::array<double,2> acceleration_bound_rad_s2{},omega_error_rad_s{};
    bool units_verified=false,action_interval_verified=false,constant_torque_verified=false;
    bool acceleration_bound_verified=false,sample_units_verified=false;
};
inline DriveExecutionReceipt drive_receipt(const DriveExecutionCommand& command,
                                          const DriveAppliedObservation& raw,const DriveWorkProfile& profile){
    DriveExecutionReceipt out;
    if(!command.sequence||raw.sequence!=command.sequence||raw.epoch!=command.epoch||raw.generation!=command.generation||
       raw.car_hash!=command.car_hash)return out;
    out.sequence=command.sequence;out.epoch=command.epoch;out.generation=command.generation;out.car_hash=command.car_hash;
    out.clock=raw.clock_after;out.completed_mask=raw.completed_mask;out.fault=true;
    if(raw.api_fault||raw.completed_mask!=3||!raw.samples_valid||profile.car_hash!=command.car_hash||
       !profile.units_verified||!profile.action_interval_verified||!profile.constant_torque_verified||
       !profile.acceleration_bound_verified||!profile.sample_units_verified||
       !std::isfinite(command.source_clock)||!std::isfinite(raw.clock_before)||!std::isfinite(raw.clock_after)||!std::isfinite(profile.dt)||
       profile.dt<=0||profile.dt>.02||raw.clock_before<command.source_clock||raw.clock_before-command.source_clock>.003001||
       std::abs(raw.clock_after-raw.clock_before-profile.dt)>1e-7)return out;
    for(unsigned i=0;i<2;++i)
        if(!std::isfinite(raw.applied_nm[i])||raw.applied_nm[i]!=command.delta_nm[i])return out;
    DriveWorkInterval interval;
// Duration has already been checked against the registered interval.
    // Debit the actual measured interval, including accepted clock tolerance.
    interval.dt=raw.clock_after-raw.clock_before;interval.applied_constant_nm=raw.applied_nm;
    interval.omega_before=raw.omega_before;interval.omega_after=raw.omega_after;
    interval.acceleration_bound_rad_s2=profile.acceleration_bound_rad_s2;interval.omega_error_rad_s=profile.omega_error_rad_s;
    interval.torque_calibrated=interval.interval_aligned=interval.samples_verified=interval.acceleration_bound_verified=true;
    auto bound=drive_work_bound(interval);
    if(!bound.valid)return out;
    out.conservative_work_debit_j=bound.positive_work_upper_j;
    out.absorbed_work_lower_j=bound.absorbed_work_lower_j;
    out.work_measurement_verified=true;out.fault=false;return out;
}
}
