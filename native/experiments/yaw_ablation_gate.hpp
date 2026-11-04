#pragma once
#include <cmath>
#include <cstdint>

namespace ngp::experiment {
// Experimental attenuation only. A true return never overrides parent safety.
// No actuator, configuration writer, model mutation or telemetry API here.
struct YawAblationConfig {
    bool enabled=false;
    uint32_t car_hash=0,patch_code=0;
    uint32_t pair_order_bits=0; // bit n: normal-first, otherwise suppress-first
    unsigned pairs=0;
    double phase_seconds=0.;
};
struct YawAblationSample {
    uint32_t epoch=0,generation=0,car_hash=0,patch_code=0,sequence=0;
    double clock=0.;
    bool ready=false,parent_allowed=false;
};
struct YawAblationDecision {
    bool output_allowed=false,started=false,finished=false,cancelled=false;
    unsigned phase=0;
    bool treatment_on=false;
};
class YawAblationGate {
    YawAblationConfig config_;
    bool valid_=false,started_=false,finished_=false,cancelled_=false;
    uint32_t epoch_=0,generation_=0,sequence_=0;
    double start_=0.,last_clock_=0.;
    const char* reason_="";
    void reject(const char* reason){if(!cancelled_)reason_=reason;cancelled_=true;}
public:
    explicit YawAblationGate(YawAblationConfig config):config_(config){
        valid_=config.car_hash&&config.patch_code&&config.pairs>=1&&config.pairs<=32&&
            std::isfinite(config.phase_seconds)&&config.phase_seconds>=.25&&
            2.*config.pairs*config.phase_seconds<=60.;
    }
    void cancel(){reject("explicit_cancel");}
    bool started()const{return started_;}
    bool cancelled()const{return cancelled_;}
    double start_clock()const{return start_;}
    const char* cancel_reason()const{return reason_;}
    YawAblationDecision update(const YawAblationSample& s){
        YawAblationDecision out;
        if(!config_.enabled){out.output_allowed=s.parent_allowed;return out;}
        const bool context=s.epoch&&s.generation&&s.sequence&&s.car_hash==config_.car_hash&&
            s.patch_code==config_.patch_code&&std::isfinite(s.clock)&&s.clock>=0.;
        if(!valid_)reject("configuration");
        if(!context)reject("context");
        if(started_){
            if(!s.ready)reject("readiness");
            if(!s.parent_allowed)reject("parent_permission");
            if(s.epoch!=epoch_)reject("epoch");
            if(s.generation!=generation_)reject("generation");
            if(s.clock<last_clock_)reject("clock_rollback");
            if(s.sequence<sequence_)reject("sequence_rollback");
            if((s.sequence==sequence_)!=(s.clock==last_clock_))reject("clock_sequence_disagreement");
        }
        if(!cancelled_&&!finished_&&s.ready&&s.parent_allowed){
            if(!started_){started_=true;start_=s.clock;epoch_=s.epoch;generation_=s.generation;}
            last_clock_=s.clock;sequence_=s.sequence;
            double elapsed=s.clock-start_;
            if(elapsed>=2.*config_.pairs*config_.phase_seconds)finished_=true;
            else{
                out.phase=unsigned(elapsed/config_.phase_seconds);
                const bool normal_first=(config_.pair_order_bits>>(out.phase/2))&1u;
                out.treatment_on=normal_first==(out.phase%2==0);
                out.output_allowed=s.parent_allowed&&out.treatment_on;
            }
        }
        out.started=started_;out.finished=finished_;out.cancelled=cancelled_;
        return out;
    }
};
}
