#pragma once
#include "body_force_candidate.hpp"
#include "body_transport.hpp"
namespace ngp {
class BodyForceChannel {
    BodyExecution ledger;
    BodyForceCommand pending{};
    uint32_t epoch=0,generation=0,car=0,last_sensor=0;
public:
    bool begin(uint32_t e,uint32_t g,uint32_t c,uint64_t proof,double independently_verified_energy_j,bool verified,double capacity_j=-1){
        if(!ledger.begin(e,g,c,proof,independently_verified_energy_j,verified,capacity_j))return false;
        if(e!=epoch||g!=generation||c!=car){pending={};last_sensor=0;epoch=e;generation=g;car=c;}
        return true;
    }
    void stop(){ledger.stop();pending={};}
    bool resume(){return ledger.resume();}
    bool begin_recovery(uint32_t e,uint32_t g,uint32_t c,uint64_t proof,double capacity_j,bool verified){
        if(!verified){stop();return false;}
        if(e==epoch&&g==generation&&c==car){
            if(!ledger.resume())return false;
            if(!ledger.begin(e,g,c,proof,0,true,capacity_j)){ledger.stop();return false;}
            return true;
        }
        return begin(e,g,c,proof,0,true,capacity_j);
    }
    bool waiting()const{return ledger.waiting();}
    bool faulted()const{return ledger.faulted();}
    const char* reason()const{return ledger.reason();}
    uint64_t fault_sequence()const{return ledger.fault_sequence();}
    double fault_source_clock()const{return ledger.fault_source_clock();}
    double fault_observed_clock()const{return ledger.fault_observed_clock();}
    double available()const{return ledger.available();}
    double unresolved()const{return ledger.unresolved();}
    void expire(double clock){ledger.expire(clock);if(!ledger.waiting())pending={};}
    NgpBodyForceCommand prepare(const BodyForceCandidate& candidate,double current_clock){
        expire(current_clock);
        if(!candidate.valid||candidate.epoch!=epoch||candidate.generation!=generation||candidate.car_hash!=car||
           !candidate.sensor_sequence||candidate.sensor_sequence<=last_sensor||!std::isfinite(current_clock)||
           current_clock<candidate.source_clock||current_clock-candidate.source_clock>.003001)return {};
        auto c=ledger.prepare(candidate.forces,candidate.source_clock,candidate.reservation_j,true);
        if(!c.sequence)return {};
        // A mismatch must never leave a reserved transaction eligible for send.
        if(c.evidence_id!=candidate.evidence_id){ledger.stop();return {};}
        auto wire=body_wire_command(c);
        if(!wire.mask){ledger.stop();return {};}
        pending=c;last_sensor=candidate.sensor_sequence;return wire;
    }
    bool acknowledge(const NgpBodyObservationFrame& frame,double current_clock,const BodyWorkProfile& profile){
        if(!pending.sequence)return false;
        auto receipt=body_wire_receipt(frame,pending,profile);
        bool accepted=ledger.acknowledge(receipt,current_clock);
        if(!ledger.waiting())pending={};return accepted;
    }
};
}
