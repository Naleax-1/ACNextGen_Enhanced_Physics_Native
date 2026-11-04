#pragma once
#include "tyre_reference_producer.hpp"
#include "model_runtime.hpp"
#include "ngp2_api.h"
namespace ngp::experiment {
// Context must be the original core Context. The existing extractor is called
// on that same Context, preserving Hub/Audit/availability and route gates.
// Timing/context metadata is still supplied by the caller; no live transport
// authentication or actuation permission is granted by this experimental API.
template<class CoreContext>
bool extract_tyre_reference_angles(CoreContext& context,std::array<double,4>& out){
    out={};
    try{
        auto wheels=ngp::get(context.runtime.car,ngp::V("wheels"));
        for(unsigned i=0;i<4;++i){
            auto value=ngp::get(ngp::get(wheels,ngp::V(double(i))),ngp::V("slipAngle"));
            auto number=std::get_if<double>(&value.data);
            if(!number||!std::isfinite(*number)||std::abs(*number)>1.5707963267948966)return false;
            out[i]=*number;
        }
        return true;
    }catch(...){return false;}
}

template<class CoreContext>
bool extract_tyre_reference_input(CoreContext& context,const TyreReferenceInput& timing,
                                 TyreReferenceInput& out,NgpeHints* legacy_copy=nullptr,std::string* rejection=nullptr){
    out={};if(rejection)rejection->clear();
    auto reject=[&](const std::string& why){if(rejection)*rejection=why;return false;};
    if(legacy_copy)*legacy_copy={};
    if(!timing.models_ready||!context.model_step_valid||!context.runtime.errors.empty())return reject("model_not_ready");
    NgpeHints legacy{};
    const auto hint_result=ngpe_extract_hints(&context,&legacy);
    if(hint_result||legacy.abi!=1||legacy.tyre_mask>15)return reject("legacy_hints_rejected:"+std::to_string(hint_result));
    try{
        auto& r=context.runtime;
        auto field=[](ngp::V value,const char* name){return ngp::get(value,ngp::V(name));};
        auto state=[&](const char* name){return field(r.modules.at(name),"state");};
        auto number=[](ngp::V v){auto p=std::get_if<double>(&v.data);if(!p||!std::isfinite(*p))throw std::runtime_error("Invalid owned reference input");return *p;};
        auto tyre=state("tire_force"),thermal=state("thermal"),damage=state("damage_state");
        if(ngp::text(field(tyre,"status"))!="RUNNING")return reject("owner_not_running:"+ngp::text(field(tyre,"status")));
        auto force=field(tyre,"force"),damage_wheels=field(damage,"wheel");
        auto input_wheels=field(r.car,"wheels");
        const double cap=number(field(field(r.modules.at("tire_force"),"params"),"maxForce"));
        if(cap<=0)return reject("invalid_max_force");
        const double heat=std::clamp(number(field(thermal,"tyreStress")),0.,1.);
        auto candidate=timing;candidate.owner_mask=legacy.tyre_mask;
        for(unsigned i=0;i<4;++i){
            auto wheel=ngp::get(force,ngp::V(double(i)));
            const double angle=number(field(wheel,"slipAngle")),response=number(field(wheel,"lateral"));
            if(std::abs(angle)>1.5707963267948966||std::abs(response)>cap)return reject("owner_range:wheel"+std::to_string(i));
            // The owner can source angle from upstream shared signals. That
            // belongs in the legacy envelope, not the fixed reference input.
            const double reference_angle=number(field(ngp::get(input_wheels,ngp::V(double(i))),"slipAngle"));
            if(std::abs(reference_angle)>1.5707963267948966)return reject("reference_angle_range:wheel"+std::to_string(i));
            candidate.slip_angle[i]=reference_angle;candidate.owner_response[i]=response;
            candidate.ungated_coefficient[i]=8.*std::clamp(std::abs(angle)/.174533,0.,1.);
            candidate.contact[i]=std::clamp(number(field(wheel,"contactQuality")),0.,1.);
            candidate.heat[i]=heat;
            candidate.damage[i]=std::clamp(number(ngp::get(damage_wheels,ngp::V(double(i)))),0.,1.);
            const double expected=candidate.ungated_coefficient[i]*candidate.contact[i]*(1.-heat)*(1.-candidate.damage[i]);
            if((legacy.tyre_mask&(1u<<i))&&std::abs(expected-legacy.tyre_ns_m[i])>1e-12)return reject("legacy_gate_mismatch:wheel"+std::to_string(i));
        }
        out=candidate;if(legacy_copy)*legacy_copy=legacy;return true;
    }catch(const std::exception& e){return reject(std::string("extraction_exception:")+e.what());}
    catch(...){return reject("unknown_extraction_exception");}
}
}
