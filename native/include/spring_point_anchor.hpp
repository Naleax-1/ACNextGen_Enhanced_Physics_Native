#pragma once
#include "spring_point_candidate.hpp"
namespace ngp {
struct SpringAnchorPolicy {
    double dwell_s=.1,max_speed_ms=.005,max_height_drift_m=.001;
    bool stationary_contract_verified=false,ground_contact_contract_verified=false;
};
struct SpringAnchorConditions {
    bool enabled=false,offline=false,unpaused=false,neutral=false,zero_throttle=false;
    bool steering_centered=false,handbrake_on=false,all_ground_contacts=false;
};
// Owns rest coordinates and lease allocation, not an energy reservoir. A new
// lease must be paired with an empty local work ledger by the actuator owner.
class SpringPointAnchor {
    SpringPointReference current;
    SpringPointProfile registered;
    SpringAnchorPolicy registered_policy;
    uint64_t next_lease=1;
    uint32_t last_sequence=0;
    double first_clock=-1,last_clock=-1;
    std::array<double,4> first_height{},first_error{};
    const char* reason="not_registered";
    static bool same_profile(const SpringPointProfile& a,const SpringPointProfile& b){
        return a.car_hash==b.car_hash&&a.patch_code==b.patch_code&&a.evidence_id==b.evidence_id&&
            a.additional_gain_n_m==b.additional_gain_n_m&&a.max_force_n==b.max_force_n&&a.current_height_error_m==b.current_height_error_m&&
            a.body_displacement_error_m==b.body_displacement_error_m&&a.wheel_displacement_error_m==b.wheel_displacement_error_m&&a.receipt_bounds_verified==b.receipt_bounds_verified&&
            a.additional_contract_verified==b.additional_contract_verified&&a.force_units_verified==b.force_units_verified&&a.wheel_reaction_verified==b.wheel_reaction_verified&&
            a.geometry_verified==b.geometry_verified&&a.height_error_verified==b.height_error_verified&&a.exclusive_owner==b.exclusive_owner;
    }
    static bool context(const SpringPointProfile& p,const DamperPointSample& s,const DamperGeometrySample& g){
        return p.car_hash&&p.patch_code&&p.evidence_id&&p.evidence_id<=9007199254740991ULL&&
            s.epoch&&s.generation&&s.sequence&&s.sequence<1073741823&&s.car_hash==p.car_hash&&s.patch_code==p.patch_code&&
            g.epoch==s.epoch&&g.generation==s.generation&&g.car_hash==s.car_hash&&g.patch_code==s.patch_code&&g.sequence==s.sequence&&
            std::isfinite(g.clock)&&g.clock>=0&&g.sampled_together_verified&&s.coordinates_verified&&s.sampled_together_verified&&s.body_velocity_verified&&s.wheel_velocity_verified&&
            p.additional_contract_verified&&p.force_units_verified&&p.wheel_reaction_verified&&p.geometry_verified&&p.height_error_verified&&p.exclusive_owner&&
            std::isfinite(p.additional_gain_n_m)&&p.additional_gain_n_m>=0&&p.additional_gain_n_m<=120&&std::isfinite(p.max_force_n)&&p.max_force_n>0&&p.max_force_n<=12;
    }
    bool same_context(const DamperPointSample& s,const SpringPointProfile& p)const{
        return current.epoch==s.epoch&&current.generation==s.generation&&current.car_hash==s.car_hash&&current.patch_code==s.patch_code&&current.evidence_id==p.evidence_id&&same_profile(registered,p);
    }
public:
    void invalidate(const char* why="invalidated"){
        current={};registered={};last_sequence=0;first_clock=last_clock=-1;reason=why;
        // Never recycle an old lease after Stop/reacquisition in this owner.
    }
    const SpringPointReference* reference()const{return current.stationary_verified?&current:nullptr;}
    const char* blocked_reason()const{return reason;}
    bool observe(const SpringPointProfile& p,const SpringAnchorPolicy& policy,const SpringAnchorConditions& c,
        const DamperPointSample& s,const DamperGeometrySample& g,const DamperWorkProfile& errors,double age){
        if(reference()){
            if(!c.enabled||!c.offline||!c.unpaused||!context(p,s,g)||!same_context(s,p)||!std::isfinite(age)||age<0||age>.003001)
                invalidate("reference_context_lost");
            return false; // Driving does not replace an established rest coordinate.
        }
        if(!context(p,s,g)||!std::isfinite(age)||age<0||age>.003001||!errors.bounds_verified||errors.car_hash!=p.car_hash||errors.patch_code!=p.patch_code||errors.evidence_id!=p.evidence_id||
           !policy.stationary_contract_verified||!policy.ground_contact_contract_verified||!std::isfinite(policy.dwell_s)||policy.dwell_s<.05||policy.dwell_s>2||
           !std::isfinite(policy.max_speed_ms)||policy.max_speed_ms<0||policy.max_speed_ms>.005||
           !std::isfinite(policy.max_height_drift_m)||policy.max_height_drift_m<0||policy.max_height_drift_m>.001||
           !c.enabled||!c.offline||!c.unpaused||!c.neutral||!c.zero_throttle||!c.steering_centered||!c.handbrake_on||!c.all_ground_contacts){invalidate("stationary_conditions_unavailable");return false;}
        std::array<double,4> height{};
        for(unsigned i=0;i<4;++i){
            const double eb=errors.body_velocity_error_ms[i],ew=errors.wheel_velocity_error_ms[i],ep=p.current_height_error_m[i];
            if(!std::isfinite(eb)||eb<0||!std::isfinite(ew)||ew<0||!std::isfinite(ep)||ep<0||ep>.001){invalidate("error_bounds_unavailable");return false;}
            double body_speed2=0,wheel_speed2=0,up_norm=0;
            for(unsigned a=0;a<3;++a){double axis=s.axis_world[i][a],vb=s.body_velocity_ms[i][a],vw=s.wheel_velocity_ms[i][a],x=s.wheel_position_m[i][a];
                if(!std::isfinite(axis)||!std::isfinite(vb)||!std::isfinite(vw)||!std::isfinite(x)||std::abs(x)>1e7||x!=s.body_position_m[i][a]){invalidate("invalid_point_sample");return false;}
                up_norm+=axis*axis;body_speed2+=vb*vb;wheel_speed2+=vw*vw;height[i]+=(x-g.body.origin[a])*axis;
                if(std::abs(axis-g.body.axes[1][a])>1e-6){invalidate("height_axis_mismatch");return false;}
            }
            DamperVec local{};
            if(!std::isfinite(up_norm)||std::abs(up_norm-1)>1e-6||!std::isfinite(height[i])||std::abs(height[i])>3||
               !damper_local_point(g.body,s.body_position_m[i],local)||!damper_local_point(g.wheels[i],s.wheel_position_m[i],local)){
                invalidate("invalid_reference_geometry");return false;}
            if(std::sqrt(body_speed2)+eb>policy.max_speed_ms||std::sqrt(wheel_speed2)+ew>policy.max_speed_ms){invalidate("stationary_speed_not_bounded");return false;}
        }
        if(first_clock>=0&&(!same_context(s,p)||s.sequence<=last_sequence||g.clock<=last_clock||g.clock-last_clock>.003001||
            registered_policy.dwell_s!=policy.dwell_s||registered_policy.max_speed_ms!=policy.max_speed_ms||registered_policy.max_height_drift_m!=policy.max_height_drift_m)){
            invalidate("stationary_window_discontinuous");return false;
        }
        if(first_clock<0){
            current.epoch=s.epoch;current.generation=s.generation;current.car_hash=p.car_hash;current.patch_code=p.patch_code;current.evidence_id=p.evidence_id;
            registered=p;registered_policy=policy;first_height=height;first_error=p.current_height_error_m;first_clock=g.clock;
        }
        for(unsigned i=0;i<4;++i)if(std::abs(height[i]-first_height[i])+p.current_height_error_m[i]+first_error[i]>policy.max_height_drift_m){
            invalidate("stationary_height_drift");return false;
        }
        last_clock=g.clock;last_sequence=s.sequence;reason="collecting_stationary_window";
        if(g.clock-first_clock+1e-9<policy.dwell_s)return false;
        if(next_lease>9007199254740991ULL){invalidate("reference_lease_exhausted");return false;}
        current.lease=next_lease++;current.height_m=height;current.error_m=p.current_height_error_m;
        current.stationary_verified=current.height_error_verified=true;reason="registered";return true;
    }
    bool permits(uint64_t lease,const SpringPointProfile& p,const DamperPointSample& s,const DamperGeometrySample& g,bool enabled,double age){
        if(!reference())return false;
        if(!enabled||!context(p,s,g)||!same_context(s,p)||!std::isfinite(age)||age<0||age>.003001||g.clock<last_clock||s.sequence<last_sequence||
           ((g.clock==last_clock)!=(s.sequence==last_sequence))){invalidate("reference_context_lost");return false;}
        if(lease!=current.lease)return false;
        last_clock=g.clock;last_sequence=s.sequence;return true;
    }
};
}
