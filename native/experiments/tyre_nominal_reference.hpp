#pragma once
#include "tyre_reference_response.hpp"
namespace ngp::experiment {
// A deliberately nominal original-model reference, NOT AC's tyre force model.
// Freeze parameters before any owner intervention; do not track live owner
// parameters or upstream load/grip, which would cancel their contribution.
struct TyreNominalConfig {
    uint64_t model_units_id=0;
    double lateral_scale=0.,force_tau=0.,release_tau=0.;
};
class TyreNominalReference {
    const TyreNominalConfig config_;
    bool initialized_=false;
    TyreResponseSample previous_{};
public:
    explicit TyreNominalReference(TyreNominalConfig config):config_(config){}
    bool update(const TyreResponseSample& stamp,double slip_angle_rad,double dt,TyreResponseSample& out){
        if(!config_.model_units_id||stamp.model_units_id!=config_.model_units_id||
           !std::isfinite(config_.lateral_scale)||config_.lateral_scale<=0||
           !std::isfinite(config_.force_tau)||config_.force_tau<=.0001||
           !std::isfinite(config_.release_tau)||config_.release_tau<=.0001||
           !stamp.epoch||!stamp.generation||!stamp.car_hash||!stamp.sequence||
           !std::isfinite(stamp.clock)||stamp.clock<0||
           !std::isfinite(slip_angle_rad)||std::abs(slip_angle_rad)>1.5707963267948966||
           !std::isfinite(dt)||dt<=0||dt>.1)return false;
        if(initialized_&&(stamp.epoch!=previous_.epoch||stamp.generation!=previous_.generation||
           stamp.car_hash!=previous_.car_hash||stamp.sequence!=uint64_t(previous_.sequence)+1||
           stamp.clock<=previous_.clock||std::abs((stamp.clock-previous_.clock)-dt)>1e-9))return false;
        const double target=slip_angle_rad*config_.lateral_scale;
        if(!std::isfinite(target))return false;
        const double prior=initialized_?previous_.response:0.;
        const double tau=std::abs(target)<std::abs(prior)?config_.release_tau:config_.force_tau;
        const double response=prior+(target-prior)*(dt/(tau+dt));
        if(!std::isfinite(response))return false;
        TyreResponseSample next=stamp;next.response=response;
        previous_=next;initialized_=true;out=next;return true;
    }
};
}
