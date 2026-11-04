#pragma once
#include "body_moment_adapter.hpp"
#include <algorithm>
#include <cstdint>
#include <limits>
namespace ngp {
struct BodyForceCommand {
    uint64_t sequence=0,evidence_id=0;
    uint32_t epoch=0,generation=0,car_hash=0;
    double source_clock=0,work_bound_j=0;
    std::array<BodyVec,4> positions{},forces{};
};
struct BodyForceReceipt {
    uint64_t sequence=0,evidence_id=0;
    uint32_t epoch=0,generation=0,car_hash=0,completed_mask=0;
    double clock=0,work_debit_upper_j=0;
    bool fault=false,work_verified=false;
    double absorbed_work_lower_j=0;
};
class BodyExecution {
    BodyForceCommand pending{};
    uint32_t epoch=0,generation=0,car=0;
    uint64_t evidence=0,next_sequence=1;
    double credit=0,spent=0,held=0,capacity=0;
    bool qualified=false,active=false,latched=false;
    const char* fault_reason="";
    uint64_t failed_sequence=0;
    double failed_source_clock=0,failed_observed_clock=0;
    void fail(const char* reason,double clock=std::numeric_limits<double>::quiet_NaN()){
        failed_sequence=pending.sequence;failed_source_clock=pending.source_clock;failed_observed_clock=clock;
        pending={};latched=true;active=false;fault_reason=reason;
    }
public:
    bool waiting()const{return pending.sequence!=0;}
    bool faulted()const{return latched;}
    const char* reason()const{return fault_reason;}
    uint64_t fault_sequence()const{return failed_sequence;}
    double fault_source_clock()const{return failed_source_clock;}
    double fault_observed_clock()const{return failed_observed_clock;}
    double available()const{return std::max(0.,credit-spent-held);}
    double unresolved()const{return held;}
    bool begin(uint32_t e,uint32_t g,uint32_t c,uint64_t proof,double energy_j,bool verified,double capacity_j=-1){
        if(e==epoch&&g==generation&&c==car)return active&&!latched&&proof==evidence;
        if(e==epoch&&epoch&&g<=generation)return false;
        epoch=e;generation=g;car=c;evidence=proof;pending={};credit=spent=held=capacity=0;qualified=active=latched=false;
        fault_reason="";failed_sequence=0;failed_source_clock=failed_observed_clock=0;
        if(capacity_j==-1)capacity_j=energy_j;
        if(!e||!g||!c||!proof||proof>9007199254740991ULL||!verified||!std::isfinite(energy_j)||energy_j<0||
           !std::isfinite(capacity_j)||capacity_j<energy_j)return false;
        credit=energy_j;capacity=capacity_j;qualified=active=true;return true;
    }
    void stop(){if(waiting())fail("stop_with_pending_command");else active=false;}
    bool resume(){if(!qualified||latched)return false;active=true;return true;}
    // Receipt permits a 3.001 ms delivery lease plus a <=3 ms interval.
    // Include numeric tolerance without granting another physics tick.
    void expire(double clock){if(waiting()&&(!std::isfinite(clock)||clock<pending.source_clock||clock-pending.source_clock>.006002))fail("receipt_deadline_or_clock",clock);}
    BodyForceCommand prepare(const BodyMomentOutput& value,double clock,double upper_j,bool bound_verified){
        expire(clock);
        if(!active||latched||waiting()||!value.valid||!bound_verified||!std::isfinite(clock)||!std::isfinite(upper_j)||
           upper_j<0||upper_j>available()||next_sequence==std::numeric_limits<uint64_t>::max())return {};
        BodyVec net{};
        for(unsigned i=0;i<4;++i){double norm=0;
            for(unsigned j=0;j<3;++j){double p=value.position_local_m[i][j],f=value.force_local_n[i][j];
                if(!std::isfinite(p)||!std::isfinite(f)||std::abs(p)>3)return {};
                norm+=f*f;net[j]+=f;}
            if(!std::isfinite(norm)||norm>80*80)return {};
        }
        for(double v:net)if(std::abs(v)>1e-9)return {};
        pending={next_sequence++,evidence,epoch,generation,car,clock,upper_j,value.position_local_m,value.force_local_n};
        held=upper_j;return pending;
    }
    bool acknowledge(const BodyForceReceipt& r,double clock){
        expire(clock);if(!waiting()||r.sequence!=pending.sequence||r.evidence_id!=evidence||r.epoch!=epoch||
            r.generation!=generation||r.car_hash!=car)return false;
        if(!std::isfinite(r.clock)||!std::isfinite(clock)||r.clock<pending.source_clock||r.clock>clock||clock-r.clock>.006)return false;
        if(r.fault||r.completed_mask!=15||!r.work_verified||!std::isfinite(r.work_debit_upper_j)||r.work_debit_upper_j<0||r.work_debit_upper_j>held||
           !std::isfinite(r.absorbed_work_lower_j)||r.absorbed_work_lower_j<0||
           (r.work_debit_upper_j>0&&r.absorbed_work_lower_j>0)){fail("receipt_work_or_application_invalid");return false;}
        // Deposit only measured, bounded absorption from this exact completed
        // command. Avoid cumulative counters/overflow and discard excess heat.
        double remaining=std::max(0.,credit-spent-r.work_debit_upper_j);
        credit=std::min(capacity,remaining+std::min(r.absorbed_work_lower_j,std::max(0.,capacity-remaining)));
        spent=held=0;pending={};return true;
    }
};
}
