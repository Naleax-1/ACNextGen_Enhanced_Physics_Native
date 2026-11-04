#pragma once
#include "tyre_reference_model_adapter.hpp"
#include "tyre_reference_step_clock.hpp"
#include <string>
#include "json.hpp"
namespace ngp::experiment {
// Isolated model-thread integration. Owns both original Context and reference
// history; a partial model failure latches closed until a coordinated reset.
// Not linked into the installed DLL/Host. No actuator interface.
template<class CoreContext>
class TyreReferenceModelSession {
    void* context_=nullptr;
    const std::string root_,configuration_;
    const TyreNominalConfig config_;
    const double resolution_;
    std::optional<TyreReferenceProducer> producer_;
    TyreReferenceStepClock clock_;
    uint64_t completed_=0;
    uint32_t epoch_=0,generation_=0,car_=0;
    bool faulted_=true;
    TyreReferenceCandidate last_{};
    nlohmann::json committed_damage_;
    uint32_t committed_car_=0,committed_generation_=0;
    uint64_t committed_frame_=0;
    void fail(){faulted_=true;last_={};if(producer_)producer_->stop();}
public:
    TyreReferenceModelSession(std::string root,std::string configuration,TyreNominalConfig config,double resolution)
        :root_(std::move(root)),configuration_(std::move(configuration)),config_(config),resolution_(resolution){}
    ~TyreReferenceModelSession(){if(context_)ngp2_destroy(context_);}
    TyreReferenceModelSession(const TyreReferenceModelSession&)=delete;
    TyreReferenceModelSession& operator=(const TyreReferenceModelSession&)=delete;
    bool reset(uint32_t epoch,uint32_t generation,uint32_t car,bool preserve_damage=false){
        fail();
        // Require a fresh generation even if a failed reset is retried.
        if(!epoch||!generation||!car||generation==generation_)return false;
        std::string configuration=configuration_;
        if(preserve_damage){
            if(committed_car_!=car||committed_damage_.is_null())return false;
            auto value=nlohmann::json::parse(configuration_,nullptr,false);
            if(value.is_discarded()||value.value("dependency_contract",std::string())!="selected_event_damage_v1")return false;
            value["initial_damage"]=committed_damage_;configuration=value.dump();
        }else{committed_damage_=nullptr;committed_car_=0;}
        generation_=generation;epoch_=epoch;car_=car;
        if(context_){ngp2_destroy(context_);context_=nullptr;}
        context_=ngp2_create(root_.c_str());
        if(!context_||ngp2_configure(context_,configuration.c_str()))return false;
        clock_={};completed_=0;producer_.emplace(config_,resolution_);producer_->resume();faulted_=false;return true;
    }
    // Host must call only after accepting this exact result under its revision
    // lock. Unpublished/cancelled calculations must never become a checkpoint.
    bool commit(uint32_t generation,uint64_t frame){
        if(faulted_||!last_.valid||generation!=generation_||frame!=completed_||
           (generation==committed_generation_&&frame<=committed_frame_))return false;
        auto snapshot=nlohmann::json::parse(ngp2_observer_snapshot(context_),nullptr,false);
        if(snapshot.is_discarded()||!snapshot.contains("damage_persistent"))return false;
        auto damage=snapshot["damage_persistent"];
        if(!damage.is_array()||damage.size()!=5)return false;
        for(const auto& v:damage)if(!v.is_number()||!std::isfinite(v.get<double>())||v.get<double>()<0||v.get<double>()>1)return false;
        committed_damage_=std::move(damage);committed_car_=car_;
        committed_generation_=generation;committed_frame_=frame;return true;
    }
    void stop(){fail();}
    bool faulted()const{return faulted_;}
    const TyreReferenceCandidate& last()const{return last_;}
    CoreContext& context(){return *static_cast<CoreContext*>(context_);}
    TyreReferenceCandidate step(const char* car_json,double dt,double worker_clock,double input_age){
        last_={};if(faulted_||!context_)return last_;
        auto next_clock=clock_;TyreReferenceInput timing;
        if(!next_clock.complete(completed_+1,dt,epoch_,generation_,car_,config_.model_units_id,worker_clock,input_age,timing)){
            fail();return last_;
        }
        // A failure may have mutated original owner state. Never retry it on
        // an unadvanced reference or reset the reference alone.
        if(ngp2_step_models(context_,car_json,dt)){fail();return last_;}
        TyreReferenceInput input;
        if(!extract_tyre_reference_input(context(),timing,input)){fail();return last_;}
        auto candidate=producer_->update(input);
        if(!candidate.valid){fail();return last_;}
        clock_=next_clock;++completed_;last_=candidate;return last_;
    }
};
}
