#pragma once
#include "tyre_reference_response.hpp"
namespace ngp::experiment {
struct TyreReferenceConversion {
    bool available=false;
    double coefficient_ns_m=0.;
};
// Experimental candidate only; no physical calibration or permission grant.
// Supply the UNGATED existing damping envelope. Applying a previously gated
// legacy coefficient here would incorrectly apply the same safety gate twice.
inline TyreReferenceConversion tyre_reference_conversion(const TyreReferenceRatio& ratio,
    double ungated_coefficient_ns_m,double contact_quality,double temperature_stress,double wheel_damage){
    if(!ratio.available||ratio.rejection!=TyreResponseRejection::none||
       !std::isfinite(ratio.attenuation)||ratio.attenuation<0||ratio.attenuation>1||
       !std::isfinite(ungated_coefficient_ns_m)||ungated_coefficient_ns_m<0||ungated_coefficient_ns_m>8)
        return {};
    for(double value:{contact_quality,temperature_stress,wheel_damage})
        if(!std::isfinite(value)||value<0||value>1)return {};
    const double gate=contact_quality*(1.-temperature_stress)*(1.-wheel_damage);
    return {true,ungated_coefficient_ns_m*ratio.attenuation*gate};
}
}
