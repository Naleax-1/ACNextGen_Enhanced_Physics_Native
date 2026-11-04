#pragma once
#include "model_runtime.hpp"
#include "spring_residual.hpp"
#include <array>

namespace ngp {
// Raw values belong to progressive_spring, not to shared last-writer aliases.
// Their ratio is dimensionless; this extraction does not qualify force units.
struct SpringModelCandidate {
    unsigned valid_mask=0;
    std::array<double,4> effective_rate{},base_rate{},excess_ratio{};
};
inline SpringModelCandidate extract_spring_model(Runtime& runtime) {
    SpringModelCandidate out;
    if(!runtime.errors.empty()||isnil(runtime.car)) return out;
    try {
        auto model=runtime.modules.find("progressive_spring"),audit=runtime.modules.find("wheel_audit");
        if(model==runtime.modules.end()||audit==runtime.modules.end()) return out;
        auto state=get(model->second,V("state")),check=get(audit->second,V("state"));
        if(text(get(state,V("status")))!="RUNNING"||text(get(check,V("status")))!="RUNNING"||
           !truth(get(state,V("wheelsValid")))) return out;
        auto required=[](V v){if(!std::holds_alternative<double>(v.data)||!std::isfinite(num(v)))throw 0;return num(v);};
        double base=required(get(get(model->second,V("params")),V("baseRate")));
        if(!std::isfinite(base)||base<=0.) return out;
        for(unsigned i=0;i<4;++i) {
            V index{double(i)};
            auto availability=get(get(check,V("available")),index);
            if(!truth(get(get(check,V("wheelExists")),index))||
               !truth(get(availability,V("suspensionTravel")))) continue;
            const double rate=required(get(get(state,V("rate")),index));
            if(!std::isfinite(rate)||rate<0.) return SpringModelCandidate{};
            double wheel_base=base;
            const auto contract=text(get(get(model->second,V("params")),V("baseRateInputContract")));
            if(contract=="car_config_base_rate_v1"){
                wheel_base=required(get(get(state,V("referenceBaseRate")),index));
                if(wheel_base<=0.||text(get(state,V("baseRateSource")))!="CAR_CONFIG_DECLARED_SPRING_RATE")return SpringModelCandidate{};
            }
            const double ratio=rate/wheel_base-1.;
            if(!std::isfinite(ratio)) return SpringModelCandidate{};
            out.effective_rate[i]=rate;out.base_rate[i]=wheel_base;
            out.excess_ratio[i]=std::max(0.,ratio);out.valid_mask|=1u<<i;
        }
        return out;
    } catch(...) { return SpringModelCandidate{}; }
}

// Calibration owns conversion from the model ratio to an ADDITIONAL stiffness.
// Native AC stiffness and the model's absolute predicted force are not added.
struct SpringConversion {
    bool units_qualified=false;
    double additional_gain_n_m=0.;
    bool stiffness(const SpringModelCandidate& model,unsigned wheel,double& out) const {
        out=0.;
        if(!units_qualified||wheel>=4||!(model.valid_mask&(1u<<wheel))||
           !std::isfinite(additional_gain_n_m)||additional_gain_n_m<0.||
           !std::isfinite(model.excess_ratio[wheel])||model.excess_ratio[wheel]<0.) return false;
        out=std::min(SpringResidual::stiffness_cap_n_m,
                     additional_gain_n_m*model.excess_ratio[wheel]);
        return std::isfinite(out);
    }
};
}
