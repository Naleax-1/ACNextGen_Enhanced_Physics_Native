#include "ngp2_api.h"
#include "model_runtime.hpp"
#include "spring_model_adapter.hpp"
#include "brake_model_adapter.hpp"
#include "drive_model_adapter.hpp"
#include "body_model_adapter.hpp"
#include "damper_model_adapter.hpp"
#include "tyre_constitutive_limit.hpp"
#include "json.hpp"
#include <cstring>
#include <cmath>
#include <chrono>
#ifdef NGP_TYRE_REFERENCE_SHADOW
#include "../experiments/tyre_reference_model_adapter.hpp"
#include "tyre_reference_context.hpp"
#endif
struct Context {
    ngp::Runtime runtime;
    std::string snapshot,observer_snapshot,error,profile="{}";
    bool snapshot_dirty=false;
    bool model_step_valid=false;
#ifdef NGP_TYRE_REFERENCE_SHADOW
    ngp::experiment::TyreReferenceProducer tyre_shadow{{1,300,.03,.055},1e-6};
    uint32_t tyre_shadow_frame=0;
    double tyre_shadow_clock=0;
    bool tyre_shadow_failed=false;
    std::string tyre_shadow_rejection;
    bool tyre_context_validated=false;
    ngp::TyreReferenceContext tyre_context;
    ngp::TyreReferenceContextHistory tyre_context_history;
    std::string tyre_shadow_json="{}";
#endif
    explicit Context(const char* root):runtime(root?root:""){runtime.initialize();}
};
#ifdef NGP_TYRE_REFERENCE_SHADOW
// Diagnostic-only build. Local identifiers are not Worker context certificates.
static void tyre_shadow_step(Context& x,double dt,const char* vehicle_json){
    if(x.tyre_shadow_failed)return;
    x.tyre_shadow_rejection.clear();
    const auto document=nlohmann::json::parse(vehicle_json,nullptr,false);
    const bool supplied=document.is_object()&&document.contains("ngp_reference_context");
    if(supplied){
        ngp::TyreReferenceContext provenance;
        if(x.tyre_shadow_frame&&!x.tyre_context_validated)x.tyre_shadow_rejection="late_context_binding";
        else if(!ngp::parse_tyre_reference_context(document["ngp_reference_context"],provenance))x.tyre_shadow_rejection="context_parse_rejected";
        else if(!x.tyre_context_history.admit(provenance))x.tyre_shadow_rejection="context_history_rejected";
        if(!x.tyre_shadow_rejection.empty()){
            x.tyre_shadow_failed=true;x.tyre_shadow.stop();return;
        }
        x.tyre_context=provenance;x.tyre_context_validated=true;
    }else if(x.tyre_context_validated){x.tyre_shadow_rejection="bound_context_missing";x.tyre_shadow_failed=true;x.tyre_shadow.stop();return;}

    if(x.tyre_shadow_frame==UINT32_MAX){x.tyre_shadow_rejection="model_sequence_exhausted";x.tyre_shadow_failed=true;x.tyre_shadow.stop();return;}
    ngp::experiment::TyreReferenceInput timing,input;
    timing.models_ready=true;timing.dt=dt;x.tyre_shadow_clock+=dt;
    timing.stamp={1,1,1,++x.tyre_shadow_frame,1,x.tyre_shadow_clock,0};
    if(x.tyre_context_validated){timing.stamp.epoch=x.tyre_context.epoch;
        timing.stamp.generation=x.tyre_context.generation;timing.stamp.car_hash=x.tyre_context.car_hash;}
    if(x.tyre_shadow_frame==1)x.tyre_shadow.resume();
    std::string extraction_rejection;
    if(!ngp::experiment::extract_tyre_reference_input(x,timing,input,nullptr,&extraction_rejection)){
        if(extraction_rejection=="legacy_hints_rejected:4"){
            std::array<double,4> angles;
            if(ngp::experiment::extract_tyre_reference_angles(x,angles)&&
               x.tyre_shadow.advance_reference_only(timing.stamp,angles,dt)){
                x.tyre_shadow_rejection="owner_not_ready_reference_advanced";return;
            }
        }
        x.tyre_shadow_rejection="original_input_extraction_rejected:"+extraction_rejection;x.tyre_shadow_failed=true;x.tyre_shadow.stop();return;
    }
    if(!x.tyre_shadow.update(input).valid){x.tyre_shadow_rejection="reference_update_rejected";x.tyre_shadow_failed=true;x.tyre_shadow.stop();}
}
extern "C" NGP2_API const char* ngp2_tyre_reference_shadow(void* c){
    if(!c)return "{}";auto& x=*static_cast<Context*>(c);const auto& value=x.tyre_shadow.last();
    auto diagnostic=nlohmann::json({{"valid",x.model_step_valid&&!x.tyre_shadow_failed&&value.valid},
        {"frame",x.tyre_shadow_frame},{"model_clock",x.tyre_shadow_clock},{"rejection_reason",x.tyre_shadow_rejection},
        {"mask",value.mask},{"coefficient",value.coefficient},{"application_enabled",false},
        {"owner_response_model_units",value.owner_response},{"reference_response_model_units",value.reference_response},
        {"worker_context_bound",false},{"reference_context_validated",x.tyre_context_validated},
        {"source_worker_epoch",x.tyre_context.epoch},{"source_generation",x.tyre_context.generation},
        {"source_car_hash",x.tyre_context.car_hash},{"source_sequence",x.tyre_context.source_sequence},
        {"source_worker_clock",x.tyre_context.worker_clock}});
    const auto& history=x.tyre_context_history;
    diagnostic["context_history_detail"]=history.last_rejection();
    if(*history.last_rejection()){
        auto context_json=[](const ngp::TyreReferenceContext& p){return nlohmann::json{
            {"epoch",p.epoch},{"generation",p.generation},{"car_hash",p.car_hash},
            {"source_sequence",p.source_sequence},{"worker_clock",p.worker_clock}};};
        diagnostic["context_history_previous"]=context_json(history.previous());
        diagnostic["context_history_rejected"]=context_json(history.rejected());
    }
    x.tyre_shadow_json=diagnostic.dump();return x.tyre_shadow_json.c_str();
}
#endif
static void invalidate_tyre_shadow(Context& x){
#ifdef NGP_TYRE_REFERENCE_SHADOW
 if(x.tyre_shadow_rejection.empty())x.tyre_shadow_rejection="original_model_invalidated";
 x.tyre_shadow_failed=true;x.tyre_shadow.stop();
#endif
}
uint32_t ngp2_version(){return 2;}
uint32_t ngpdamper_extract_model_hints(void* context,NgpDamperModelHints* out){
    if(!out)return 1;
    std::memset(out,0,sizeof *out);out->abi=NGP_DAMPER_MODEL_ABI;
    if(!context)return 2;
    auto& value=*static_cast<Context*>(context);
    if(!value.model_step_valid)return 3;
    const auto c=ngp::extract_damper_model(value.runtime);if(!c.valid_mask)return 4;
    out->valid_mask=c.valid_mask;
    for(unsigned i=0;i<4;++i){out->force[i]=c.force[i];out->raw_force[i]=c.raw_force[i];
        out->model_velocity[i]=c.model_velocity[i];out->coefficient_scale[i]=c.coefficient_scale[i];}
    return 0;
}
uint32_t ngpbody_extract_model_hints(void* context,NgpBodyModelHints* out){
    if(!out)return 1;
    std::memset(out,0,sizeof *out);out->abi=NGP_BODY_MODEL_ABI;
    if(!context)return 2;
    auto& value=*static_cast<Context*>(context);
    if(!value.model_step_valid)return 3;
    const auto c=ngp::extract_body_model(value.runtime);if(!c.valid)return 4;
    out->valid=1;for(unsigned i=0;i<4;++i)out->normalized[i]=c.normalized[i];return 0;
}
uint32_t ngpd_extract_model_components(void* context,NgpdModelComponents* out){
    if(!out)return 1;
    std::memset(out,0,sizeof *out);out->abi=1;
    if(!context)return 2;
    auto& value=*static_cast<Context*>(context);
    if(!value.model_step_valid)return 3;
    const auto c=ngp::extract_drive_model(value.runtime);
    if(!c.valid||!c.components.valid)return 4;
    out->valid=1;out->transmission_correction=c.components.transmission_correction;
    out->windup_correction=c.components.windup_correction;return 0;
}
uint32_t ngpd_extract_model_hints(void* context,NgpdModelHints* out){
    if(!out)return 1;
    std::memset(out,0,sizeof *out);out->abi=NGPD_MODEL_ABI;
    if(!context)return 2;
    auto& value=*static_cast<Context*>(context);
    if(!value.model_step_valid)return 3;
    const auto c=ngp::extract_drive_model(value.runtime);
    if(!c.valid)return 4;
    out->valid=1;
    out->wheel_drive_torque_model_nm=c.wheel_drive_torque_model_nm;
    out->drive_normalized=c.drive_normalized;out->windup_demand_normalized=c.windup_demand_normalized;
    out->windup_transmitted_normalized=c.windup_transmitted_normalized;
    out->windup_torque_normalized=c.windup_torque_normalized;out->windup_soft_normalized=c.windup_soft_normalized;
    return 0;
}
uint32_t ngpb_extract_model_hints(void* context,NgpbModelHints* out){
    if(!out)return 1;
    std::memset(out,0,sizeof *out);out->abi=NGPB_ABI;
    if(!context)return 2;
    auto& value=*static_cast<Context*>(context);
    if(!value.model_step_valid)return 3;
    const auto candidate=ngp::extract_brake_model(value.runtime);
    if(candidate.valid_mask!=15)return 4;
    out->valid_mask=candidate.valid_mask;
    for(unsigned i=0;i<4;++i){
        out->friction_ratio[i]=candidate.friction_ratio[i];
        out->disc_temperature_model[i]=candidate.disc_temperature_model[i];
        out->lock_ratio[i]=candidate.lock_ratio[i];
    }
    return 0;
}
uint32_t ngps_extract_model_hints(void* context,NgpsModelHints* out){
    if(!out)return 1;
    std::memset(out,0,sizeof *out);out->abi=NGPS_ABI;
    if(!context)return 2;
    auto& value=*static_cast<Context*>(context);
    if(!value.model_step_valid)return 3;
    const auto candidate=ngp::extract_spring_model(value.runtime);
    if(!candidate.valid_mask)return 4;
    out->valid_mask=candidate.valid_mask;
    for(unsigned i=0;i<4;++i){
        out->effective_rate[i]=candidate.effective_rate[i];
        out->base_rate[i]=candidate.base_rate[i];
        out->excess_ratio[i]=candidate.excess_ratio[i];
    }
    return 0;
}
void* ngp2_create(const char* root){try{return new Context(root);}catch(...){return nullptr;}}
void ngp2_destroy(void* c){delete static_cast<Context*>(c);}
uint32_t ngp2_configure(void* c,const char* json){if(!c||!json)return 1;auto& x=*static_cast<Context*>(c);try{
x.model_step_valid=false;
#ifdef NGP_TYRE_REFERENCE_SHADOW
if(x.tyre_shadow_frame)invalidate_tyre_shadow(x);
#endif
ngp::current=&x.runtime;auto obj=nlohmann::json::parse(json);if(obj.contains("car_config"))x.runtime.config=ngp::from_json(obj["car_config"].dump());
if(obj.contains("input_contract")){
 auto mode=obj["input_contract"].get<std::string>();
 if(mode!="original"&&mode!="csp_g_v1")throw std::runtime_error("Invalid input contract");
 x.runtime.normalized_inputs=mode=="csp_g_v1";
}
if(obj.contains("damper_input_contract")){
 auto mode=obj["damper_input_contract"].get<std::string>();
 if(mode!="original"&&mode!="current_suspension_travel_v1")throw std::runtime_error("Invalid damper input contract");
 if(!x.runtime.modules.empty())throw std::runtime_error("Damper input contract must precede model loading");
 x.runtime.damper_current_travel=mode=="current_suspension_travel_v1";
}
if(obj.contains("carcass_input_contract")){
 auto mode=obj["carcass_input_contract"].get<std::string>();
 if(mode!="original"&&mode!="current_wheel_slip_v1")throw std::runtime_error("Invalid carcass input contract");
 if(!x.runtime.modules.empty())throw std::runtime_error("Carcass input contract must precede model loading");
 x.runtime.carcass_current_slip=mode=="current_wheel_slip_v1";
}
if(obj.contains("tyre_signal_contract")){
 auto mode=obj["tyre_signal_contract"].get<std::string>();
 if(mode!="original"&&mode!="owner_state_v1")throw std::runtime_error("Invalid tyre signal contract");
 if(!x.runtime.modules.empty())throw std::runtime_error("Tyre signal contract must precede model loading");
 x.runtime.tyre_owner_inputs=mode=="owner_state_v1";
}
if(obj.contains("dependency_contract")){
 auto mode=obj["dependency_contract"].get<std::string>();
 if(mode!="core_only"&&mode!="selected_original_v1"&&mode!="selected_event_damage_v1")throw std::runtime_error("Invalid dependency contract");
 if(!x.runtime.modules.empty())throw std::runtime_error("Dependency contract must be set before loading models");
 x.runtime.selected_dependencies=mode!="core_only";
 x.runtime.event_damage=mode=="selected_event_damage_v1";
}
if(obj.contains("initial_damage")){
 if(!x.runtime.modules.empty()||!x.runtime.event_damage)throw std::runtime_error("Initial damage requires an unloaded event-owned context");
 const auto& d=obj["initial_damage"];
 if(!d.is_array()||d.size()!=5)throw std::runtime_error("Invalid initial damage shape");
 for(const auto& v:d)if(!v.is_number()||!std::isfinite(v.get<double>())||v.get<double>()<0.||v.get<double>()>1.)throw std::runtime_error("Invalid initial damage value");
 x.runtime.initial_damage=ngp::from_json(d.dump());
}
if(obj.contains("parameters"))x.runtime.overrides=ngp::from_json(obj["parameters"].dump());return 0;}catch(const std::exception& ex){x.error=ex.what();return 2;}}
static uint32_t step_impl(void* c,const char* vehicle_json,double dt,bool full){if(!c)return 1;auto& x=*static_cast<Context*>(c);
x.model_step_valid=false;
#ifdef NGP_TYRE_REFERENCE_SHADOW
if(x.tyre_shadow_frame){x.tyre_shadow_json="{}";}
#endif
if(!vehicle_json){invalidate_tyre_shadow(x);return 1;}
if(!std::isfinite(dt)||dt<=0||dt>.1){x.error="Invalid dt";invalidate_tyre_shadow(x);return 2;}
try{ngp::current=&x.runtime;auto t0=std::chrono::steady_clock::now();ngp::V vehicle=ngp::from_json(vehicle_json);auto t1=std::chrono::steady_clock::now();
x.runtime.step(vehicle,dt);auto t2=std::chrono::steady_clock::now();x.snapshot_dirty=true;
if(full){x.snapshot=ngp::snapshot_json(x.runtime);x.snapshot_dirty=false;}auto t3=std::chrono::steady_clock::now();
auto us=[](auto a,auto b){return std::chrono::duration<double,std::micro>(b-a).count();};
x.profile=nlohmann::json({{"input_us",us(t0,t1)},{"models_us",us(t1,t2)},{"snapshot_us",us(t2,t3)},{"modules_us",x.runtime.module_us}}).dump();
x.error=x.runtime.errors.empty()?"":x.runtime.errors.front();x.model_step_valid=x.runtime.errors.empty();
#ifdef NGP_TYRE_REFERENCE_SHADOW
if(x.model_step_valid)tyre_shadow_step(x,dt,vehicle_json);else{invalidate_tyre_shadow(x);}
#endif
return x.model_step_valid?0:3;}catch(const std::exception& ex){x.error=ex.what();x.snapshot="{}";x.snapshot_dirty=false;invalidate_tyre_shadow(x);return 4;}}
uint32_t ngp2_step(void* c,const char* vehicle_json,double dt){return step_impl(c,vehicle_json,dt,true);}
uint32_t ngp2_step_models(void* c,const char* vehicle_json,double dt){return step_impl(c,vehicle_json,dt,false);}
const char* ngp2_snapshot(void* c){if(!c)return "{}";auto& x=*static_cast<Context*>(c);
try{if(x.snapshot_dirty){x.snapshot=ngp::snapshot_json(x.runtime);x.snapshot_dirty=false;}return x.snapshot.c_str();}
catch(const std::exception& ex){x.error=ex.what();return "{}";}}
const char* ngp2_observer_snapshot(void* c){if(!c)return "{}";auto& x=*static_cast<Context*>(c);
try{x.observer_snapshot=ngp::snapshot_json(x.runtime,true);return x.observer_snapshot.c_str();}
catch(const std::exception& ex){x.error=ex.what();return "{}";}}
const char* ngp2_error(void* c){return c?static_cast<Context*>(c)->error.c_str():"Invalid context";}
const char* ngp2_profile(void* c){return c?static_cast<Context*>(c)->profile.c_str():"{}";}
uint32_t ngp4_effect_hint(void* c,double* risk,double* authority){
if(!c||!risk||!authority)return 1;*risk=0.;*authority=0.;auto& r=static_cast<Context*>(c)->runtime;
if(!static_cast<Context*>(c)->model_step_valid||!r.errors.empty()||ngp::isnil(r.car))return 2;
try{auto a=r.signals.find("ngp_ymb_spin_risk"),b=r.signals.find("ngp_ymb_avg_authority");
if(a==r.signals.end()||b==r.signals.end())return 3;
double x=ngp::num(a->second),y=ngp::num(b->second);if(!std::isfinite(x)||!std::isfinite(y))return 4;
*risk=std::clamp(x,0.,1.);*authority=std::clamp(y,0.,1.);return 0;}catch(...){return 5;}}

// Each source is an explicitly owned state table. Shared diagnostic aliases do
// not determine ownership, and debug publication intervals do not delay hints.
uint32_t ngpe_extract_hints(void* c,NgpeHints* out){
if(!out)return 1;std::memset(out,0,sizeof *out);out->abi=NGPE_ABI;
if(!c)return 2;auto& r=static_cast<Context*>(c)->runtime;
if(!static_cast<Context*>(c)->model_step_valid||!r.errors.empty()||ngp::isnil(r.car))return 3;
if(!ngp::physics_hub_ready(r))return 7;
try{
auto state=[&](const char* name){auto it=r.modules.find(name);return it==r.modules.end()?ngp::V():ngp::get(it->second,ngp::V("state"));};
auto field=[](ngp::V v,const char* key){return ngp::get(v,ngp::V(key));};
auto at=[](ngp::V v,unsigned i){return ngp::get(v,ngp::V(double(i)));};
auto number=[](ngp::V v){double n=ngp::num(v);if(!std::isfinite(n))throw std::runtime_error("Nonfinite owned output");return n;};
auto unit=[&](ngp::V v){return std::clamp(number(v),0.,1.);};
auto running=[&](ngp::V v){return !ngp::isnil(v)&&ngp::text(field(v,"status"))=="RUNNING";};
auto damper=state("damper_model"),tyre=state("tire_force"),diff=state("diff_lsd");
auto audit=state("wheel_audit"),damage=state("damage_state"),condition=state("vehicle_condition"),thermal=state("thermal");
if(!running(audit)||!running(damage)||!running(condition)||!running(thermal))return 4;
// A missing rear wheel must not skip its angular-speed availability gate.
// Validate the required rear pair before writing any partial candidate hints.
for(unsigned i=2;i<4;++i){
 if(!ngp::truth(at(field(audit,"wheelExists"),i))||
    !ngp::truth(field(at(field(audit,"available"),i),"angularSpeed")))return 5;
}
for(unsigned i=0;i<4;++i){
 auto availability=at(field(audit,"available"),i);
 // Audit availability is field presence, not numerical qualification.
 auto audited_load=field(at(field(audit,"wheel"),i),"load");
 auto load_number=std::get_if<double>(&audited_load.data);
 bool load=ngp::truth(field(availability,"load"))&&load_number&&std::isfinite(*load_number)&&*load_number>=0.;
 if(!ngp::truth(at(field(audit,"wheelExists"),i)))continue;
 double health=1.-unit(at(field(damage,"wheel"),i));
 if(running(damper)&&ngp::truth(field(damper,"wheelsValid"))&&
    ngp::truth(field(availability,"suspensionTravel"))){
  double scale=number(at(field(damper,"coeffScale"),i));
  // New bounded additive damping gain; not a claim about native damper units.
  out->suspension_ns_m[i]=std::clamp(40.*std::max(scale-1.,0.),0.,120.)*health;
  out->suspension_mask|=1u<<i;
 }
 if(running(tyre)&&ngp::truth(field(tyre,"wheelsValid"))&&load){
  if(r.tyre_owner_inputs&&!(r.tyre_owner_input_mask&(1u<<i)))continue;
  auto wheel=at(field(tyre,"force"),i);
  if(ngp::truth(field(wheel,"active"))){
   // Use the owner's raw lateral-slip input (radians at the native boundary).
   // A shared combined-slip alias can be a valid zero from another model and
   // is not the owner of this deliberately lateral-only additional effect.
   double angle=number(field(wheel,"slipAngle"));
   if(std::abs(angle)>1.5707963267948966)continue;
   double slip=std::clamp(std::abs(angle)/.174533,0.,1.),quality=unit(field(wheel,"contactQuality"));
   double tyre_heat=unit(field(thermal,"tyreStress"));
   out->tyre_ns_m[i]=8.*slip*quality*(1.-tyre_heat)*health;
   out->tyre_mask|=1u<<i;
  }
 }
}
if(running(diff)&&ngp::truth(field(diff,"omegaLinked"))){
 double capacity=number(field(diff,"actualResistanceTorqueNm"));
 double drivetrain_health=1.-unit(field(condition,"drivetrain"));
 double rear_health=1.-std::max(unit(at(field(damage,"wheel"),2)),unit(at(field(damage,"wheel"),3)));
 double diff_heat=unit(field(thermal,"diffStress"));
 out->diff_capacity_nm=std::clamp(.02*std::max(capacity,0.),0.,1.)*drivetrain_health*rear_health*(1.-diff_heat);
 out->diff_valid=1;
}
return 0;
}catch(...){std::memset(out,0,sizeof *out);out->abi=NGPE_ABI;return 6;}}

uint32_t ngpe_extract_constitutive_hints(void* context,NgpeHints* out){
    const auto result=ngpe_extract_hints(context,out);
    if(result||!out->tyre_mask)return result;
    try{
        auto& runtime=static_cast<Context*>(context)->runtime;
        auto module=runtime.modules.at("tire_force");
        auto state=ngp::get(module,ngp::V("state")),params=ngp::get(module,ngp::V("params"));
        auto number=[](const ngp::V& value){
            auto n=std::get_if<double>(&value.data);
            if(!n||!std::isfinite(*n))throw std::runtime_error("Invalid owned tyre force");
            return *n;
        };
        const auto cap=number(ngp::get(params,ngp::V("maxForce")));
        auto force=ngp::get(state,ngp::V("force"));std::array<double,4> lateral{},safety_gate{};
        auto thermal=ngp::get(runtime.modules.at("thermal"),ngp::V("state"));
        auto damage=ngp::get(runtime.modules.at("damage_state"),ngp::V("state"));
        const double temperature_gate=1.-std::clamp(number(ngp::get(thermal,ngp::V("tyreStress"))),0.,1.);
        auto wheel_damage=ngp::get(damage,ngp::V("wheel"));
        for(unsigned i=0;i<4;++i)if(out->tyre_mask&(1u<<i)){
            auto wheel=ngp::get(force,ngp::V(double(i)));
            lateral[i]=number(ngp::get(wheel,ngp::V("lateral")));
            const double contact_gate=std::clamp(number(ngp::get(wheel,ngp::V("contactQuality"))),0.,1.);
            safety_gate[i]=contact_gate*temperature_gate*(1.-std::clamp(number(ngp::get(wheel_damage,ngp::V(double(i)))),0.,1.));
        }
        if(!ngp::limit_tyre_constitutive(out->tyre_mask,cap,lateral,out->tyre_ns_m,safety_gate))throw std::runtime_error("Invalid tyre envelope");
        return 0;
    }catch(...){std::memset(out,0,sizeof *out);out->abi=NGPE_ABI;return 8;}
}
