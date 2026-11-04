#pragma once
#include "damper_force_candidate.hpp"
#include "damper_interval_input.hpp"
#include "json.hpp"
namespace ngp {
struct DamperProfile {
    DamperResidualProfile residual;DamperWorkProfile work;DamperReceiptProfile receipt;
    DamperIntervalInputProfile input;
    std::string car_id,evidence_reference,api_argument_mode;
    double storage_capacity_j=0;
    bool worker_local=false;
    bool valid=false,coordinates_verified=false,material_points_verified=false,sampled_together_verified=false;
};
// Parses declarations, not proof. Real deployment still requires the referenced
// measurements to establish every asserted contract for this car/CSP pair.
inline DamperProfile damper_profile(const nlohmann::json& j){
    DamperProfile out;
    try{
        auto number=[](const nlohmann::json& v){if(!v.is_number())throw 0;double x=v.get<double>();if(!std::isfinite(x))throw 0;return x;};
        auto integer=[&](const nlohmann::json& v,double max){double x=number(v);if(x<1||x>max||std::floor(x)!=x)throw 0;return uint64_t(x);};
        auto yes=[](const nlohmann::json& v){if(!v.is_boolean()||!v.get<bool>())throw 0;};
        auto array=[&](const nlohmann::json& v,std::array<double,4>& dest){if(!v.is_array()||v.size()!=4)throw 0;for(unsigned i=0;i<4;++i){dest[i]=number(v[i]);if(dest[i]<0)throw 0;}};
        if(!j.is_object()||integer(j.at("schema"),1)!=1)return {};yes(j.at("enabled"));
        if(j.contains("execution_mode")){
            auto mode=j.at("execution_mode").get<std::string>();
            if(mode!="host_command_v1"&&mode!="worker_local_v1")return {};
            out.worker_local=mode=="worker_local_v1";
        }
        if(j.contains("force_argument")){
            const auto& api=j.at("force_argument");yes(api.at("verified"));
            out.api_argument_mode=api.at("mode").get<std::string>();
            if(out.api_argument_mode!="force"&&out.api_argument_mode!="force_times_dt")return {};
        }
        out.car_id=j.at("car_id").get<std::string>();out.evidence_reference=j.at("evidence_reference").get<std::string>();
        if(out.car_id.empty()||out.car_id.size()>200||out.evidence_reference.empty()||out.evidence_reference.size()>500)return {};
        for(unsigned char c:out.car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return {};
        auto& r=out.residual;auto& w=out.work;auto& p=out.receipt;
        r.car_hash=uint32_t(integer(j.at("car_hash"),4294967295.));
        if(r.car_hash!=wheel_material_checksum(out.car_id.data(),out.car_id.size()))return {};
        r.patch_code=uint32_t(integer(j.at("patch_code"),2147483646.));r.evidence_id=integer(j.at("evidence_id"),9007199254740991.);
        for(const char* k:{"additional_damping_contract_verified","neutral_verified","relative_velocity_verified","force_units_verified","wheel_reaction_verified","exclusive_owner","coordinates_verified","material_points_verified","sampled_together_verified"})yes(j.at(k));
        r.additional_damping_contract_verified=r.neutral_verified=r.relative_velocity_verified=r.force_units_verified=r.wheel_reaction_verified=r.exclusive_owner=true;
        out.coordinates_verified=out.material_points_verified=out.sampled_together_verified=true;
        array(j.at("neutral_scale"),r.neutral_scale);array(j.at("gain_ns_m"),r.gain_ns_m);
        for(unsigned i=0;i<4;++i)if(r.neutral_scale[i]>10||r.gain_ns_m[i]>10000)return {};
        r.max_force_n=number(j.at("max_force_n"));out.storage_capacity_j=number(j.at("storage_capacity_j"));
        if(r.max_force_n<=0||r.max_force_n>20||out.storage_capacity_j<0||out.storage_capacity_j>1)return {};
        const auto& work=j.at("work");for(const char* k:{"bounds_verified","force_interval_verified","constant_world_force_verified"})yes(work.at(k));
        w.car_hash=p.car_hash=r.car_hash;w.patch_code=p.patch_code=r.patch_code;w.evidence_id=p.evidence_id=r.evidence_id;
        w.dt=number(work.at("dt"));if(w.dt<=0||w.dt>.003)return {};
        array(work.at("body_acceleration_bound_ms2"),w.body_acceleration_bound_ms2);array(work.at("wheel_acceleration_bound_ms2"),w.wheel_acceleration_bound_ms2);
        array(work.at("body_velocity_error_ms"),w.body_velocity_error_ms);array(work.at("wheel_velocity_error_ms"),w.wheel_velocity_error_ms);
        w.bounds_verified=w.force_interval_verified=w.constant_world_force_verified=true;
        const auto& receipt=j.at("receipt");yes(receipt.at("displacement_bounds_verified"));
        array(receipt.at("body_displacement_error_m"),p.body_displacement_error_m);array(receipt.at("wheel_displacement_error_m"),p.wheel_displacement_error_m);
        p.material_points_verified=p.coordinates_verified=p.bounds_verified=p.force_units_verified=p.constant_world_force_verified=p.force_interval_verified=true;
        const auto& input=j.at("input");
        if(input.at("source").get<std::string>()!="common_worker_interval_geometry_v1")return {};
        for(const char* k:{"body_point_velocity_contract_verified","rigid_geometry_verified","history_bound_verified","endpoint_error_verified","time_interval_verified","coordinates_verified"})yes(input.at(k));
        auto& v=out.input.wheel;v.car_hash=r.car_hash;v.patch_code=r.patch_code;v.evidence_id=r.evidence_id;
        array(input.at("history_acceleration_bound_ms2"),v.history_acceleration_bound_ms2);
        array(input.at("position_before_error_m"),v.position_before_error_m);array(input.at("position_after_error_m"),v.position_after_error_m);
        v.history_bound_verified=v.endpoint_error_verified=v.time_interval_verified=v.coordinates_verified=true;
        out.input.body_point_velocity_contract_verified=out.input.rigid_geometry_verified=true;
        out.valid=true;return out;
    }catch(...){return {};}
}
}
