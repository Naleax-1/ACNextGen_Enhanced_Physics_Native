#pragma once
#include <algorithm>
#include <array>
#include <cmath>
namespace ngp {
// Additional closed rear coupling only. No isolated native LSD baseline is
// implied, and a model capacity alone grants neither SI units nor ownership.
struct LsdCouplingInput {
    double capacity_hint=0,nm_per_hint=0,dt=0;
    std::array<double,2> omega{},acceleration_bound{},omega_error{};
    bool model_valid=false,additional_contract_verified=false,scale_verified=false;
    bool rwd_verified=false,same_callback_verified=false,paired_owner_verified=false;
    bool legacy_diff_disabled_verified=false,bounds_verified=false;
};
struct LsdCouplingCandidate {
    std::array<double,2> torque_nm{};
    double signed_difference=0,pair_work_upper_j=0;
    bool valid=false;
};
inline LsdCouplingCandidate lsd_coupling(const LsdCouplingInput& in){
    LsdCouplingCandidate out;
    if(!in.model_valid||!in.additional_contract_verified||!in.scale_verified||!in.rwd_verified||
       !in.same_callback_verified||!in.paired_owner_verified||!in.legacy_diff_disabled_verified||!in.bounds_verified)return out;
    if(!std::isfinite(in.capacity_hint)||in.capacity_hint<0||in.capacity_hint>1||
       !std::isfinite(in.nm_per_hint)||in.nm_per_hint<=0||in.nm_per_hint>12||
       !std::isfinite(in.dt)||in.dt<=0||in.dt>.003)return out;
    double uncertainty=0;const double duration=in.dt+1e-7;
    for(unsigned i=0;i<2;++i){
        if(!std::isfinite(in.omega[i])||std::abs(in.omega[i])>2000||!std::isfinite(in.acceleration_bound[i])||
           in.acceleration_bound[i]<0||!std::isfinite(in.omega_error[i])||in.omega_error[i]<0)return out;
        uncertainty+=in.acceleration_bound[i]*duration+3*in.omega_error[i];
    }
    if(!std::isfinite(uncertainty))return out;
    const double difference=in.omega[0]-in.omega[1];
    const double left=-std::clamp(difference,-1.,1.)*in.capacity_hint*in.nm_per_hint;
    const double power_upper=left*difference+std::abs(left)*uncertainty;
    if(!std::isfinite(power_upper)||power_upper>0)return out;
    out.torque_nm={left,-left};out.signed_difference=difference;
    // Bounds the total work of the CLOSED pair, not either wheel in isolation.
    // Positive work at the slower wheel is supplied by the faster wheel. Both
    // API applications and the matching paired receipt are still mandatory.
    // Negative power uses the shortest accepted interval for an UPPER
    // bound. Multiplying by the longest interval would overstate absorption.
    out.pair_work_upper_j=power_upper*std::max(0.,in.dt-1e-7);
    if(!std::isfinite(out.pair_work_upper_j))return LsdCouplingCandidate{};
    out.valid=true;return out;
}
}
