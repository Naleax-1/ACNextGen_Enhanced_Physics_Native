#pragma once
#include "body_moment_adapter.hpp"
#include <algorithm>
namespace ngp {
struct BodyWorkInterval {
    double dt=0,dt_error_s=0; // Internal bound input, not a wire ABI field.
    std::array<BodyVec,4> constant_force_local_n{},velocity_before_local_ms{},velocity_after_local_ms{};
    std::array<double,4> local_acceleration_bound_ms2{},velocity_error_ms{};
    bool force_units_verified=false,interval_verified=false,constant_local_force_verified=false;
    bool velocity_units_verified=false,bounds_verified=false;
};
struct BodyWorkBound {
    double positive_work_upper_j=0;bool valid=false;
    // Only a verified, completed interval may deposit this lower bound.
    double absorbed_work_lower_j=0;
};
inline BodyWorkBound body_work_bound(const BodyWorkInterval& in){
    BodyWorkBound out;
    if(!in.force_units_verified||!in.interval_verified||!in.constant_local_force_verified||
       !in.velocity_units_verified||!in.bounds_verified||!std::isfinite(in.dt)||in.dt<=0||in.dt>.02)return out;
    if(!std::isfinite(in.dt_error_s)||in.dt_error_s<0||in.dt_error_s>1e-7)return out;
    const double low=in.dt-in.dt_error_s,high=in.dt+in.dt_error_s;
    if(low<=0||high>.02)return out;
    double initial_power=0,uncertainty_low=0,uncertainty_high=0;
    for(unsigned i=0;i<4;++i){
        double force_squared=0,velocity_delta_squared=0;
        const double bound=in.local_acceleration_bound_ms2[i],error=in.velocity_error_ms[i];
        if(!std::isfinite(bound)||!std::isfinite(error)||bound<0||error<0)return BodyWorkBound{};
        for(unsigned axis=0;axis<3;++axis){
            double f=in.constant_force_local_n[i][axis],a=in.velocity_before_local_ms[i][axis],b=in.velocity_after_local_ms[i][axis];
            if(!std::isfinite(f)||!std::isfinite(a)||!std::isfinite(b))return BodyWorkBound{};
            force_squared+=f*f;velocity_delta_squared+=(b-a)*(b-a);initial_power+=f*a;
        }
        double force_norm=std::sqrt(force_squared),change=std::sqrt(velocity_delta_squared);
        const double allowed_change=bound*high+2*error,velocity_low=bound*low+error,velocity_high=bound*high+error;
        if(!std::isfinite(force_norm)||force_norm>80||!std::isfinite(change)||!std::isfinite(allowed_change)||
           !std::isfinite(velocity_low)||!std::isfinite(velocity_high)||change>allowed_change)return BodyWorkBound{};
        uncertainty_low+=force_norm*velocity_low;uncertainty_high+=force_norm*velocity_high;
    }
    // Bound total additional positive work: internal transfers between the
    // four points cancel. Negative predicted work never grants stored energy.
    if(!std::isfinite(initial_power)||!std::isfinite(uncertainty_low)||!std::isfinite(uncertainty_high))return BodyWorkBound{};
    // Nonnegative acceleration bounds make the duration bound convex.
    const double lower_endpoint=(initial_power+uncertainty_low)*low;
    const double upper_endpoint=(initial_power+uncertainty_high)*high;
    if(!std::isfinite(lower_endpoint)||!std::isfinite(upper_endpoint))return {};
    const double work_upper=std::max(lower_endpoint,upper_endpoint);
    if(!std::isfinite(work_upper))return BodyWorkBound{};
    out.positive_work_upper_j=std::max(0.,work_upper);
    out.absorbed_work_lower_j=std::max(0.,-work_upper);
    out.valid=true;return out;
}
}
