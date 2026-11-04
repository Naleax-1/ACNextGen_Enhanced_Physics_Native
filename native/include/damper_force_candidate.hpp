#pragma once
#include "damper_execution.hpp"
namespace ngp {
struct DamperRigidFrame {DamperVec origin{};std::array<DamperVec,3> axes{};};
struct DamperGeometrySample {
    uint32_t epoch=0,generation=0,sequence=0,car_hash=0,patch_code=0;
    DamperRigidFrame body;std::array<DamperRigidFrame,4> wheels;
    double clock=0;bool sampled_together_verified=false;
};
struct DamperForceCandidate {
    DamperForceIntent intent;DamperWorkBound bound;
    uint32_t sensor_sequence=0;bool valid=false;
};
inline bool damper_local_point(const DamperRigidFrame& frame,const DamperVec& point,DamperVec& local){
    for(unsigned a=0;a<3;++a){
        if(!std::isfinite(frame.origin[a])||std::abs(frame.origin[a])>1e7||!std::isfinite(point[a]))return false;
        for(unsigned b=0;b<3;++b){
            double dot=0;for(unsigned j=0;j<3;++j){if(!std::isfinite(frame.axes[a][j])||!std::isfinite(frame.axes[b][j]))return false;dot+=frame.axes[a][j]*frame.axes[b][j];}
            if(std::abs(dot-(a==b?1.:0.))>1e-6)return false;
        }
    }
    for(unsigned a=0;a<3;++a){local[a]=0;for(unsigned j=0;j<3;++j)local[a]+=(point[j]-frame.origin[j])*frame.axes[a][j];
        if(!std::isfinite(local[a])||std::abs(local[a])>3)return false;
    }
    return true;
}
inline DamperForceCandidate damper_force_candidate(const DamperModelCandidate& model,const DamperResidualProfile& residual,
    const DamperPointSample& points,const DamperGeometrySample& geometry,const DamperWorkProfile& work,
    double sensor_age,double model_age,double delivery_lease){
    DamperForceCandidate out;
    // Worker accepts delivery up to this lease; prospective bounds may not
    // assume a shorter interval than the actual receiver contract permits.
    if(delivery_lease!=.003001||!geometry.sampled_together_verified||geometry.epoch!=points.epoch||geometry.generation!=points.generation||
       geometry.sequence!=points.sequence||geometry.car_hash!=points.car_hash||geometry.patch_code!=points.patch_code||
       !std::isfinite(geometry.clock)||geometry.clock<0)return out;
    auto force=damper_point_output(model,residual,points,points.epoch,points.generation,sensor_age,model_age);
    if(!force.valid)return out;
    auto bound=damper_work_bound(force,points,residual,work,delivery_lease);if(!bound.valid)return out;
    auto& c=out.intent;c.epoch=points.epoch;c.generation=points.generation;c.car_hash=points.car_hash;c.patch_code=points.patch_code;
    c.evidence_id=residual.evidence_id;c.mask=force.mask;c.source_clock=geometry.clock;c.dt=work.dt;
    for(unsigned i=0;i<4;++i)if(c.mask&(1u<<i)){
        if(!damper_local_point(geometry.body,points.body_position_m[i],c.body_local_point[i])||
           !damper_local_point(geometry.wheels[i],points.wheel_position_m[i],c.wheel_local_point[i]))return {};
        c.world_force_n[i]=force.body_force_n[i];
    }
    out.sensor_sequence=points.sequence;out.bound=bound;out.valid=true;return out;
}
class DamperForceChannel {
    DamperExecution ledger;
    uint32_t epoch=0,generation=0,car=0,last_sensor=0;
public:
    bool begin(uint32_t e,uint32_t g,uint32_t c,uint32_t patch,uint64_t proof,double capacity,bool verified){
        if(!ledger.begin(e,g,c,patch,proof,capacity,verified))return false;
        if(e!=epoch||g!=generation||c!=car){epoch=e;generation=g;car=c;last_sensor=0;}return true;
    }
    void stop(){ledger.stop();}
    bool resume(){return ledger.resume();}
    bool waiting()const{return ledger.waiting();}
    bool faulted()const{return ledger.faulted();}
    double available()const{return ledger.available();}
    double unresolved()const{return ledger.unresolved();}
    const char* reason()const{return ledger.reason();}
    void expire(double clock){ledger.expire(clock);}
    NgpDamperCommand prepare(const DamperForceCandidate& candidate,double clock){
        ledger.expire(clock);auto& c=candidate.intent;
        if(!candidate.valid||!candidate.sensor_sequence||candidate.sensor_sequence<=last_sensor||c.epoch!=epoch||c.generation!=generation||c.car_hash!=car||
           !std::isfinite(clock)||clock<c.source_clock||clock-c.source_clock>.003001)return {};
        auto wire=ledger.prepare(c,candidate.bound);if(wire.sequence)last_sensor=candidate.sensor_sequence;return wire;
    }
    bool acknowledge(const NgpDamperObservationFrame& frame,uint32_t before,uint32_t after,const DamperReceiptProfile& profile,double clock){
        return ledger.acknowledge(frame,before,after,profile,clock);
    }
};
}
