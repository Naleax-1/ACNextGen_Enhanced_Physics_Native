#pragma once
#include "body_model_path.hpp"
#include "body_receipt_adapter.hpp"
#include "body_transport.hpp"
#include "json.hpp"
#include <string>
namespace ngp {
struct BodyProfile {
    BodyMomentProfile moment;BodyWorkProfile work;
    std::string car_id,evidence_reference;
    bool valid=false;
    bool local_execution=false;
    double model_hold_seconds=0;
};
// Loading declarations is not evidence certification. The referenced report
// must independently establish each asserted contract before deployment.
inline BodyProfile body_profile(const nlohmann::json& j){
    BodyProfile out;
    try{
        auto number=[](const nlohmann::json& v){if(!v.is_number())throw 0;double n=v.get<double>();if(!std::isfinite(n))throw 0;return n;};
        auto integer=[&](const nlohmann::json& v,double limit){double n=number(v);if(n<1||n>limit||std::floor(n)!=n)throw 0;return uint64_t(n);};
        auto yes=[](const nlohmann::json& v){if(!v.is_boolean()||!v.get<bool>())throw 0;};
        if(!j.is_object()||integer(j.at("schema"),1)!=1)return {};
        yes(j.at("enabled"));
        if(j.contains("execution_mode")){
            const auto mode=j.at("execution_mode").get<std::string>();
            if(mode=="worker_local_body_v1"){
                yes(j.at("local_execution_verified"));yes(j.at("same_callback_sample_verified"));yes(j.at("model_hold_verified"));
                out.model_hold_seconds=number(j.at("model_hold_seconds"));
                if(out.model_hold_seconds<=0||out.model_hold_seconds>.1)return {};
                out.local_execution=true;
            }else if(mode!="body_moment_v1")return {};
        }
        out.car_id=j.at("car_id").get<std::string>();out.evidence_reference=j.at("evidence_reference").get<std::string>();
        if(out.car_id.empty()||out.car_id.size()>200||out.evidence_reference.empty()||out.evidence_reference.size()>500)return {};
        for(unsigned char c:out.car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return {};
        auto& p=out.moment;auto& w=out.work;
        p.car_hash=uint32_t(integer(j.at("car_hash"),4294967295.));
        if(p.car_hash!=body_checksum(out.car_id.data(),out.car_id.size()))return {};
        p.patch_code=uint32_t(integer(j.at("patch_code"),2147483646.));p.evidence_id=integer(j.at("evidence_id"),9007199254740991.);
        for(const char* key:{"normalization_contract_verified","neutral_verified","exclusive_owner","body_force_units_verified","coordinates_verified"})yes(j.at(key));
        p.normalization_contract_verified=p.neutral_verified=p.exclusive_owner=p.body_force_units_verified=p.coordinates_verified=true;
        const auto& neutral=j.at("neutral_normalized");const auto& gain=j.at("signed_nm_per_normalized");
        if(!neutral.is_array()||neutral.size()!=2||!gain.is_array()||gain.size()!=2)return {};
        for(unsigned i=0;i<2;++i){p.neutral_normalized[i]=number(neutral[i]);p.signed_nm_per_normalized[i]=number(gain[i]);}
        if(j.contains("yaw")){
            const auto& yaw=j.at("yaw");
            yes(yaw.at("enabled"));yes(yaw.at("normalization_verified"));
            yes(yaw.at("neutral_verified"));yes(yaw.at("exclusive_owner_verified"));
            p.yaw_enabled=p.yaw_normalization_verified=p.yaw_neutral_verified=p.yaw_exclusive_owner_verified=true;
            p.yaw_neutral_normalized=number(yaw.at("neutral_normalized"));
            p.yaw_signed_nm_per_normalized=number(yaw.at("signed_nm_per_normalized"));
        }
        p.half_width_m=number(j.at("half_width_m"));p.half_length_m=number(j.at("half_length_m"));
        p.max_force_n=number(j.at("max_force_n"));p.storage_capacity_j=number(j.at("storage_capacity_j"));
        if(p.half_width_m!=.5||p.half_length_m!=1||p.max_force_n<=0||p.max_force_n>20||!p.ready(p.car_hash,p.patch_code))return {};
        const auto& work=j.at("work");
        for(const char* key:{"units_verified","interval_verified","constant_local_force_verified","sample_coordinates_verified","bounds_verified"})yes(work.at(key));
        w.car_hash=p.car_hash;w.evidence_id=p.evidence_id;w.dt=number(work.at("dt"));
        if(w.dt<=0||w.dt>.003)return {};
        const auto& bounds=work.at("acceleration_bound_ms2");const auto& errors=work.at("velocity_error_ms");
        if(!bounds.is_array()||bounds.size()!=4||!errors.is_array()||errors.size()!=4)return {};
        for(unsigned i=0;i<4;++i){
            w.acceleration_bound_ms2[i]=number(bounds[i]);w.velocity_error_ms[i]=number(errors[i]);
            if(w.acceleration_bound_ms2[i]<0||w.velocity_error_ms[i]<0)return {};
        }
        w.units_verified=w.interval_verified=w.constant_local_force_verified=w.sample_coordinates_verified=w.bounds_verified=true;
        out.valid=true;return out;
    }catch(...){return {};}
}
}
