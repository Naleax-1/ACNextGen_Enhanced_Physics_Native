#pragma once
#include "damper_transport.hpp"
#include "damper_work.hpp"
namespace ngp {
class DamperExecution {
    DamperForceIntent pending{};
    uint32_t epoch=0,generation=0,car=0,patch=0,next_sequence=1;
    uint64_t evidence=0;
    double balance=0,held=0,capacity=0;
    bool qualified=false,active=false,latched=false;
    const char* fault_reason="";
    void fail(const char* reason){latched=true;active=false;fault_reason=reason;pending={};}
public:
    bool waiting()const{return pending.sequence!=0;}
    bool faulted()const{return latched;}
    double available()const{return std::max(0.,balance-held);}
    double unresolved()const{return held;}
    const char* reason()const{return fault_reason;}
    // Start empty. Model energy states and Resume never refill the reservoir.
    bool begin(uint32_t e,uint32_t g,uint32_t c,uint32_t patch_code,uint64_t proof,double capacity_j,bool verified){
        if(e==epoch&&g==generation&&c==car)return active&&!latched&&proof==evidence&&patch_code==patch;
        if(!verified||!e||!g||!c||!patch_code||!proof||proof>9007199254740991ULL||
           !std::isfinite(capacity_j)||capacity_j<0||capacity_j>1||(e==epoch&&epoch&&g<=generation))return false;
        epoch=e;generation=g;car=c;patch=patch_code;evidence=proof;capacity=capacity_j;
        pending={};balance=held=0;qualified=active=true;latched=false;fault_reason="";return true;
    }
    void stop(){if(waiting())fail("stop_with_pending_command");else active=false;}
    bool resume(){if(!qualified||latched)return false;active=true;return true;}
    void expire(double clock){if(waiting()&&(!std::isfinite(clock)||clock<pending.source_clock||clock-pending.source_clock>.006002))fail("receipt_deadline_or_clock");}
    NgpDamperCommand prepare(DamperForceIntent intent,const DamperWorkBound& bound){
        expire(intent.source_clock);
        if(!active||latched||waiting()||!bound.valid||!std::isfinite(bound.work_upper_j)||
           intent.epoch!=epoch||intent.generation!=generation||intent.car_hash!=car||intent.patch_code!=patch||intent.evidence_id!=evidence||
           next_sequence>=1073741823)return {};
        double reserve=std::max(0.,bound.work_upper_j);if(reserve>available())return {};
        intent.sequence=next_sequence;auto wire=damper_wire_command(intent,reserve);if(!wire.sequence)return {};
        ++next_sequence;pending=intent;held=reserve;return wire;
    }
    bool acknowledge(const NgpDamperObservationFrame& frame,uint32_t before,uint32_t after,const DamperReceiptProfile& profile,double clock){
        // Inspect an already published receipt before declaring it missing.
        // The actual application lease and receipt freshness are still checked
        // below; a late Host read must not erase a valid completed interval.
        if(!waiting())return false;
        auto& p=frame.packet;
        if(p.sequence!=pending.sequence||p.evidence_id!=evidence||p.epoch!=epoch||p.generation!=generation||p.car_hash!=car||p.patch_code!=patch){expire(clock);return false;}
        if(before!=after||before!=frame.commit||before!=p.sequence*2||
           frame.checksum!=wheel_material_checksum(&p,sizeof p)){expire(clock);return false;}
        auto w=damper_wire_work(frame,before,after,pending,profile);
        if(!w.valid||!std::isfinite(clock)||!std::isfinite(p.clock_after)||p.clock_after>clock||clock-p.clock_after>.006002){fail("invalid_application_or_work");return false;}
        double debit=std::max(0.,w.upper_j),absorption=std::max(0.,-w.upper_j);
        if(debit>held){fail("work_exceeds_reservation");return false;}
        balance=std::min(capacity,std::max(0.,balance-debit)+std::min(capacity,absorption));
        held=0;pending={};return true;
    }
};
}
