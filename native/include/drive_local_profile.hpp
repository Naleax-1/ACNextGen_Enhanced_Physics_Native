#pragma once
#include "drive_receipt_adapter.hpp"
#include "drive_transport.hpp"
#include "json.hpp"
#include <string>
namespace ngp {
// Declaration validation only. True flags are not independent measurements.
struct DriveLocalProfile {
    std::string car_id,evidence_reference;
    uint32_t car_hash=0,patch_code=0;uint64_t evidence_id=0;
    double max_torque_nm=0,command_scale_raw_per_nm=0,storage_capacity_j=0,lsd_nm_per_hint=0;
    std::array<double,2> windup_nm_per_normalized{};
    DriveWorkProfile work;
    bool valid=false;
};
inline DriveLocalProfile drive_local_profile(const nlohmann::json& j){
    DriveLocalProfile out;
    try{
        auto number=[](const nlohmann::json& v){if(!v.is_number())throw 0;double x=v.get<double>();if(!std::isfinite(x))throw 0;return x;};
        auto integer=[&](const nlohmann::json& v,double max){double x=number(v);if(x<1||x>max||std::floor(x)!=x)throw 0;return uint64_t(x);};
        auto yes=[](const nlohmann::json& v){if(!v.is_boolean()||!v.get<bool>())throw 0;};
        auto array=[&](const nlohmann::json& v,std::array<double,2>& dst,bool signed_nonzero){
            if(!v.is_array()||v.size()!=2)throw 0;
            for(unsigned i=0;i<2;++i){double x=number(v[i]);if(signed_nonzero?(x==0||std::abs(x)>1000):(x<0||x>1e300))throw 0;dst[i]=x;}
        };
        if(!j.is_object()||integer(j.at("schema"),1)!=1)return {};yes(j.at("enabled"));
        if(j.at("execution_mode").get<std::string>()!="worker_local_additional_windup_v1"||j.at("torque_argument_contract").get<std::string>()!="constant_raw_per_nm")return {};
        out.car_id=j.at("car_id").get<std::string>();out.evidence_reference=j.at("evidence_reference").get<std::string>();
        if(out.car_id.empty()||out.car_id.size()>200||out.evidence_reference.empty()||out.evidence_reference.size()>500)return {};
        for(unsigned char c:out.car_id)if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_'||c=='-'))return {};
        out.car_hash=uint32_t(integer(j.at("car_hash"),4294967295.));
        if(out.car_hash!=drive_checksum(out.car_id.data(),out.car_id.size()))return {};
        out.patch_code=uint32_t(integer(j.at("patch_code"),2147483646.));out.evidence_id=integer(j.at("evidence_id"),9007199254740991.);
        for(const char* k:{"additional_windup_contract_verified","same_callback_sample_verified","units_verified","rwd_verified","exclusive_owner","controls_contract_verified","action_interval_verified","constant_torque_verified","acceleration_bound_verified","sample_units_verified"})yes(j.at(k));
        out.work.dt=number(j.at("dt"));out.max_torque_nm=number(j.at("max_torque_nm"));out.command_scale_raw_per_nm=number(j.at("command_scale_raw_per_nm"));
        if(out.work.dt<=0||out.work.dt>.003||out.max_torque_nm<=0||out.max_torque_nm>12||out.command_scale_raw_per_nm==0||std::abs(out.command_scale_raw_per_nm)>1000||number(j.at("initial_energy_j"))!=0)return {};
        if(j.contains("storage_capacity_j")){
            out.storage_capacity_j=number(j.at("storage_capacity_j"));
            if(out.storage_capacity_j<0||out.storage_capacity_j>1)return {};
            if(out.storage_capacity_j>0)yes(j.at("recovery_contract_verified"));
        }
        if(j.contains("lsd_nm_per_hint")){
            out.lsd_nm_per_hint=number(j.at("lsd_nm_per_hint"));if(out.lsd_nm_per_hint<0||out.lsd_nm_per_hint>12)return {};
            if(out.lsd_nm_per_hint>0)for(const char* k:{"additional_lsd_contract_verified","paired_application_order_verified","legacy_diff_disabled_verified"})yes(j.at(k));
        }
        array(j.at("windup_nm_per_normalized"),out.windup_nm_per_normalized,true);
        array(j.at("acceleration_bound_rad_s2"),out.work.acceleration_bound_rad_s2,false);array(j.at("omega_error_rad_s"),out.work.omega_error_rad_s,false);
        out.work.car_hash=out.car_hash;out.work.units_verified=out.work.action_interval_verified=out.work.constant_torque_verified=out.work.acceleration_bound_verified=out.work.sample_units_verified=true;
        out.valid=true;return out;
    }catch(...){return {};}
}
}
