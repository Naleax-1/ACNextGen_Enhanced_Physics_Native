#pragma once
#include <algorithm>
#include <array>
#include <cmath>
namespace ngp {
struct DriveWorkInterval {
    double dt=0;
    std::array<double,2> applied_constant_nm{},omega_before{},omega_after{},acceleration_bound_rad_s2{},omega_error_rad_s{};
    bool torque_calibrated=false,interval_aligned=false,samples_verified=false,acceleration_bound_verified=false;
};
struct DriveWorkBound {
    double positive_work_upper_j=0,absorbed_work_lower_j=0;
    bool valid=false;
};
// This bounds integral max(0,T*omega(t)) dt rather than merely the net work.
// From a verified Lipschitz bound |domega/dt|<=A, every intermediate velocity
// lies within A*dt + measurement error of the initial observation.
inline DriveWorkBound drive_work_bound(const DriveWorkInterval& in){
    DriveWorkBound out;
    if(!in.torque_calibrated||!in.interval_aligned||!in.samples_verified||!in.acceleration_bound_verified||
       !std::isfinite(in.dt)||in.dt<=0||in.dt>.02)return out;
    for(unsigned i=0;i<2;++i){
        const double t=in.applied_constant_nm[i],a=in.omega_before[i],b=in.omega_after[i],bound=in.acceleration_bound_rad_s2[i],error=in.omega_error_rad_s[i];
        if(!std::isfinite(t)||!std::isfinite(a)||!std::isfinite(b)||!std::isfinite(bound)||!std::isfinite(error)||
           std::abs(t)>40000||std::abs(a)>2000||std::abs(b)>2000||bound<0||error<0)return DriveWorkBound{};
        const double allowed_change=bound*in.dt+2*error,velocity_uncertainty=bound*in.dt+error;
        if(!std::isfinite(allowed_change)||!std::isfinite(velocity_uncertainty)||std::abs(b-a)>allowed_change)return DriveWorkBound{};
        const double uncertainty=std::abs(t)*velocity_uncertainty,power_upper=t*a+uncertainty;
        if(!std::isfinite(uncertainty)||!std::isfinite(power_upper))return DriveWorkBound{};
        out.positive_work_upper_j+=std::max(0.,power_upper)*in.dt;
        // Only guaranteed negative work can replenish a separate storage bank.
        out.absorbed_work_lower_j+=std::max(0.,-power_upper)*in.dt;
    }
    if(!std::isfinite(out.positive_work_upper_j)||!std::isfinite(out.absorbed_work_lower_j))return DriveWorkBound{};
    out.valid=true;return out;
}
}
