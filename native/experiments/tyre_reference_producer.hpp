#pragma once
#include "tyre_nominal_reference.hpp"
#include "tyre_reference_conversion.hpp"
#include <array>
#include <optional>
namespace ngp::experiment {
// Streaming experimental adapter only: caller-declared ages/context are
// validated, not authenticated. No MMF, actuator or permission API is used.
struct TyreReferenceInput {
    TyreResponseSample stamp;
    double dt=0.,model_age=0.,input_age=0.;
    bool models_ready=false;
    uint32_t owner_mask=0;
    std::array<double,4> slip_angle{},owner_response{},ungated_coefficient{},contact{},heat{},damage{};
};
struct TyreReferenceCandidate {
    bool valid=false;
    uint32_t mask=0;
    std::array<double,4> coefficient{};
    std::array<TyreReferenceRatio,4> ratios{};
    // Same-update diagnostic values, never an actuator permission or SI force.
    std::array<double,4> owner_response{},reference_response{};
};
class TyreReferenceProducer {
    struct State {
        std::array<TyreNominalReference,4> references;
        TyreResponseSample previous{};
        explicit State(TyreNominalConfig c):references{TyreNominalReference(c),TyreNominalReference(c),TyreNominalReference(c),TyreNominalReference(c)}{}
    };
    const TyreNominalConfig config_;
    const double resolution_;
    std::optional<State> state_;
    bool enabled_=false;
    uint32_t stopped_generation_=0;
    TyreReferenceCandidate last_{};
public:
    TyreReferenceProducer(TyreNominalConfig config,double reference_resolution):config_(config),resolution_(reference_resolution){}
    void stop(){
        if(state_)stopped_generation_=state_->previous.generation;
        enabled_=false;state_.reset();last_={};
    }
    void resume(){enabled_=true;}
    const TyreReferenceCandidate& last()const{return last_;}
    // Advance only measured exogenous reference inputs. No owner response is invented.
    bool advance_reference_only(const TyreResponseSample& stamp,
                                const std::array<double,4>& angles,double dt){
        last_={};
        if(!enabled_||(stopped_generation_&&stamp.generation==stopped_generation_))return false;
        State next=state_?*state_:State(config_);
        for(unsigned i=0;i<4;++i){
            TyreResponseSample ignored;
            if(!next.references[i].update(stamp,angles[i],dt,ignored))return false;
        }
        next.previous=stamp;state_.emplace(next);return true;
    }
    TyreReferenceCandidate update(const TyreReferenceInput& input){
        last_={};
        if(!enabled_||!input.models_ready||input.owner_mask&~15u||
           !std::isfinite(resolution_)||resolution_<=0||
           !std::isfinite(input.model_age)||input.model_age<0||input.model_age>.2||
           !std::isfinite(input.input_age)||input.input_age<0||input.input_age>.02||
           (stopped_generation_&&input.stamp.generation==stopped_generation_))return last_;
        // Validate all wheels before advancing even a single reference.
        for(unsigned i=0;i<4;++i){
            for(double v:{input.slip_angle[i],input.owner_response[i],input.ungated_coefficient[i],
                          input.contact[i],input.heat[i],input.damage[i]})if(!std::isfinite(v))return last_;
            if(input.ungated_coefficient[i]<0||input.ungated_coefficient[i]>8||
               input.contact[i]<0||input.contact[i]>1||input.heat[i]<0||input.heat[i]>1||
               input.damage[i]<0||input.damage[i]>1)return last_;
        }
        // Stage a complete next state on the stack. Failed wheel/context/
        // clock checks cannot leave a partially advanced reference history.
        State next=state_?*state_:State(config_);
        TyreReferenceCandidate candidate;candidate.valid=true;
        for(unsigned i=0;i<4;++i){
            TyreResponseSample reference;
            if(!next.references[i].update(input.stamp,input.slip_angle[i],input.dt,reference))return last_;
            auto owner=input.stamp;owner.response=input.owner_response[i];
            candidate.owner_response[i]=owner.response;
            candidate.reference_response[i]=reference.response;
            const auto ratio=tyre_reference_response(owner,reference,resolution_);
            candidate.ratios[i]=ratio;
            if(!(input.owner_mask&(1u<<i)))continue;
            auto coefficient=tyre_reference_conversion(ratio,input.ungated_coefficient[i],input.contact[i],input.heat[i],input.damage[i]);
            if(coefficient.available){candidate.mask|=1u<<i;candidate.coefficient[i]=coefficient.coefficient_ns_m;}
        }
        next.previous=input.stamp;state_.emplace(next);last_=candidate;return last_;
    }
};
}
