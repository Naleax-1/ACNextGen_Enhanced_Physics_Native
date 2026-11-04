#pragma once
#include <algorithm>
#include <cmath>
namespace ngp {
// Exact output attribution, not an elastic-energy or SI-unit certificate.
// Saturation is assigned to the added windup term by comparing the same
// transmitted branch with/without that term; no independent clipping of sums.
struct WindupComponents {
    double transmission_correction=0,windup_correction=0,additional=0;
    bool valid=false;
};
inline WindupComponents windup_components(double demand,double transmitted,double windup,double dirty_loss,double soft){
    WindupComponents out;
    for(double x:{demand,transmitted,windup,soft})if(!std::isfinite(x)||std::abs(x)>1)return out;
    if(!std::isfinite(dirty_loss)||dirty_loss<.55||dirty_loss>1)return out;
    const double predicted=std::clamp((transmitted+.35*windup)*dirty_loss,-1.,1.);
    if(std::abs(predicted-soft)>1e-12)return out;
    const double base=std::clamp(transmitted*dirty_loss,-1.,1.);
    out.transmission_correction=base-demand;
    out.windup_correction=soft-base;
    out.additional=soft-demand;
    out.valid=true;return out;
}
}
