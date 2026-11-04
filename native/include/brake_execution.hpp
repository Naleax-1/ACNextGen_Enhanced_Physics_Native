#pragma once
#include "brake_force_channel.hpp"
namespace ngp {
// Canonical command ownership. An ACK cannot change the original proposal.
class BrakeExecution {
    NgpbForceCommand pending{};
    uint32_t epoch=0,generation=0,car=0,next_sequence=1,last_sensor=0;
    bool active=false,latched=false;
    double last_dispatch_clock=-1.;
    unsigned fault_reason=0;
public:
    bool waiting()const{return pending.sequence!=0;}
    bool faulted()const{return latched;}
    const char* reason()const{return fault_reason==1?"stopped_with_pending_command":fault_reason==2?"receipt_deadline_exceeded":fault_reason==3?"incomplete_receipt":"";}
    void begin(uint32_t e,uint32_t g,uint32_t c){
        if(!e||!g||!c)return;
        // A stale begin must not discard pending work or clear a partial fault.
        if(e==epoch&&epoch&&(g<generation||(g==generation&&c!=car)))return;
        if(e!=epoch||g!=generation||c!=car){pending={};last_sensor=0;last_dispatch_clock=-1.;latched=false;fault_reason=0;epoch=e;generation=g;car=c;}
        active=e&&g&&c;
    }
    void stop(){if(waiting()){if(!latched)fault_reason=1;latched=true;}pending={};active=false;}
    void expire(double clock){
        if(waiting()&&(!std::isfinite(clock)||clock<pending.source_clock||clock-pending.source_clock>.006)){
            pending={};if(!latched)fault_reason=2;latched=true;
        }
    }
    NgpbForceCommand prepare(const BrakeForceCandidate& candidate,double clock){
        expire(clock);NgpbForceCommand out{};out.abi=NGPB_FORCE_ABI;
        if(!active||latched||waiting()||candidate.epoch!=epoch||candidate.generation!=generation||candidate.car_hash!=car||
           !candidate.sensor_sequence||candidate.sensor_sequence<=last_sensor||!std::isfinite(clock)||clock<0||clock<=last_dispatch_clock||
           !std::isfinite(candidate.source_clock)||candidate.source_clock<0||clock<candidate.source_clock||clock-candidate.source_clock>.006)return out;
        out=brake_force_command(candidate,next_sequence);
        if(out.mask!=15)return out;
        ++next_sequence;last_sensor=candidate.sensor_sequence;last_dispatch_clock=clock;pending=out;return out;
    }
    bool acknowledge(const NgpbForceReceipt& r,double clock){
        expire(clock);if(!waiting())return false;
        if(r.abi!=NGPB_FORCE_ABI||r.reserved||r.epoch!=pending.epoch||r.generation!=pending.generation||
           r.car_hash!=pending.car_hash||r.sequence!=pending.sequence||r.evidence_id!=pending.evidence_id)return false;
        if(!std::isfinite(r.clock)||!std::isfinite(clock)||r.clock<pending.source_clock||r.clock>clock||clock-r.clock>.006)return false;
        unsigned expected=0;for(double v:pending.delta_raw)expected+=v!=0.;
        const bool complete=r.fault==0&&r.completed_mask==15&&r.api_calls==expected&&r.api_attempts==expected;
        pending={};if(!complete){if(!latched)fault_reason=3;latched=true;}return complete;
    }
};
}
