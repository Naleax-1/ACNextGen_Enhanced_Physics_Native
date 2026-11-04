#pragma once
#include "spring_point_anchor.hpp"
#include "damper_interval_input.hpp"
#include "json.hpp"
namespace ngp {
// Declaration validation only. No measurement is certified by this parser.
struct SpringLocalProfile {
    SpringPointProfile spring;SpringAnchorPolicy anchor;DamperIntervalInputProfile input;
    DamperWorkProfile work;DamperReceiptProfile receipt;
    std::string car_id,evidence_reference,api_argument_mode;double capacity_j=0;bool valid=false;
};
inline SpringLocalProfile spring_local_profile(const nlohmann::json& j){
    SpringLocalProfile out;
    try{
        auto number=[](const nlohmann::json& v){if(!v.is_number())throw 0;double x=v.get<double>();if(!std::isfinite(x))throw 0;return x;};
        auto integer=[&](const nlohmann::json& v,double cap){double x=number(v);if(x<1||x>cap||std::floor(x)!=x)throw 0;return uint64_t(x);};
        auto yes=[](const nlohmann::json& v){if(!v.is_boolean()||!v.get<bool>())throw 0;};
        auto array=[&](const nlohmann::json& v,std::array<double,4>& dst,double cap=1e300){if(!v.is_array()||v.size()!=4)throw 0;for(unsigned i=0;i<4;++i){dst[i]=number(v[i]);if(dst[i]<0||dst[i]>cap)throw 0;}};
        if(integer(j.at("schema"),1)!=1||j.at("execution_mode").get<std::string>()!="worker_local_spring_v1")return {};yes(j.at("enabled"));
        if(j.contains("force_argument")){
            const auto& api=j.at("force_argument");yes(api.at("verified"));
            out.api_argument_mode=api.at("mode").get<std::string>();
            if(out.api_argument_mode!="force"&&out.api_argument_mode!="force_times_dt")return {};
        }
        out.car_id=j.at("car_id").get<std::string>();out.evidence_reference=j.at("evidence_reference").get<std::string>();
        if(out.car_id.empty()||out.car_id.size()>200||out.evidence_reference.empty()||out.evidence_reference.size()>500)return {};
        for(unsigned char c:out.car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return {};
        auto& p=out.spring;p.car_hash=uint32_t(integer(j.at("car_hash"),4294967295.));p.patch_code=uint32_t(integer(j.at("patch_code"),2147483646.));p.evidence_id=integer(j.at("evidence_id"),9007199254740991.);
        if(p.car_hash!=wheel_material_checksum(out.car_id.data(),out.car_id.size()))return {};
        for(const char* key:{"additional_contract_verified","force_units_verified","wheel_reaction_verified","geometry_verified","height_error_verified","exclusive_owner","coordinates_verified","material_points_verified","sampled_together_verified"})yes(j.at(key));
        p.additional_contract_verified=p.force_units_verified=p.wheel_reaction_verified=p.geometry_verified=p.height_error_verified=p.exclusive_owner=true;
        p.additional_gain_n_m=number(j.at("additional_gain_n_m"));p.max_force_n=number(j.at("max_force_n"));out.capacity_j=number(j.at("storage_capacity_j"));
        if(p.additional_gain_n_m<0||p.additional_gain_n_m>120||p.max_force_n<=0||p.max_force_n>12||out.capacity_j<0||out.capacity_j>1)return {};
        array(j.at("current_height_error_m"),p.current_height_error_m,.001);
        const auto& w=j.at("work");for(const char* key:{"bounds_verified","force_interval_verified","constant_world_force_verified"})yes(w.at(key));
        out.work.car_hash=p.car_hash;out.work.patch_code=p.patch_code;out.work.evidence_id=p.evidence_id;out.work.dt=number(w.at("dt"));if(out.work.dt<=0||out.work.dt>.003)return {};
        array(w.at("body_acceleration_bound_ms2"),out.work.body_acceleration_bound_ms2);array(w.at("wheel_acceleration_bound_ms2"),out.work.wheel_acceleration_bound_ms2);
        array(w.at("body_velocity_error_ms"),out.work.body_velocity_error_ms);array(w.at("wheel_velocity_error_ms"),out.work.wheel_velocity_error_ms);
        out.work.bounds_verified=out.work.force_interval_verified=out.work.constant_world_force_verified=true;
        const auto& r=j.at("receipt");yes(r.at("displacement_bounds_verified"));
        array(r.at("body_displacement_error_m"),p.body_displacement_error_m,.001);array(r.at("wheel_displacement_error_m"),p.wheel_displacement_error_m,.001);p.receipt_bounds_verified=true;
        const auto& a=j.at("reference");
        if(a.at("control_source").get<std::string>()!="csp_statecar_render_v1")return {};
        for(const char* key:{"controls_contract_verified","support_from_load_verified","stationary_contract_verified","ground_contact_contract_verified"})yes(a.at(key));
        out.anchor.dwell_s=number(a.at("dwell_s"));out.anchor.max_speed_ms=number(a.at("max_speed_ms"));out.anchor.max_height_drift_m=number(a.at("max_height_drift_m"));
        if(out.anchor.dwell_s<.05||out.anchor.dwell_s>2||out.anchor.max_speed_ms<0||out.anchor.max_speed_ms>.005||out.anchor.max_height_drift_m<0||out.anchor.max_height_drift_m>.001)return {};
        out.anchor.stationary_contract_verified=out.anchor.ground_contact_contract_verified=true;
        const auto& input=j.at("input");if(input.at("source").get<std::string>()!="common_worker_interval_geometry_v1")return {};
        for(const char* key:{"body_point_velocity_contract_verified","rigid_geometry_verified","history_bound_verified","endpoint_error_verified","time_interval_verified","coordinates_verified"})yes(input.at(key));
        auto& v=out.input.wheel;v.car_hash=p.car_hash;v.patch_code=p.patch_code;v.evidence_id=p.evidence_id;
        array(input.at("history_acceleration_bound_ms2"),v.history_acceleration_bound_ms2);array(input.at("position_before_error_m"),v.position_before_error_m);array(input.at("position_after_error_m"),v.position_after_error_m);
        v.history_bound_verified=v.endpoint_error_verified=v.time_interval_verified=v.coordinates_verified=true;out.input.body_point_velocity_contract_verified=out.input.rigid_geometry_verified=true;
        out.receipt.car_hash=p.car_hash;out.receipt.patch_code=p.patch_code;out.receipt.evidence_id=p.evidence_id;out.receipt.body_displacement_error_m=p.body_displacement_error_m;out.receipt.wheel_displacement_error_m=p.wheel_displacement_error_m;
        out.receipt.material_points_verified=out.receipt.coordinates_verified=out.receipt.bounds_verified=out.receipt.force_units_verified=out.receipt.constant_world_force_verified=out.receipt.force_interval_verified=true;
        out.valid=true;return out;
    }catch(...){return {};}
}
}
