#pragma once
#include "bridge_protocol.h"
#include "bounded_snapshot_read.hpp"
#include "car_configuration.hpp"
#include "caster_steering_binding.hpp"
#include "brake_temperature_binding.hpp"
#include "damper_temperature_binding.hpp"
#include "body_temperature_binding.hpp"
#include "chassis_temperature_binding.hpp"
#include "energy_temperature_binding.hpp"
#include "inertia_temperature_binding.hpp"
#include "flex_temperature_binding.hpp"
#include "suspension_travel_binding.hpp"
#include "spring_base_binding.hpp"
#include "damper_coefficient_binding.hpp"
#include "tyre_reference_context.hpp"
#include "spring_force_protocol.h"
#include "brake_force_protocol.h"
#include "body_force_protocol.h"
#include "wheel_torque_local_protocol.h"
#include <condition_variable>
#include <functional>
#include <array>
#include <mutex>
#include <utility>

struct CommandMailbox {
    HANDLE handle=nullptr;Ngp4CommandFrame* data=nullptr;
    ~CommandMailbox(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(Ngp4CommandFrame),name.c_str());
        if(!handle)throw std::runtime_error("Command MMF creation failed");
        data=static_cast<Ngp4CommandFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(Ngp4CommandFrame)));
        if(!data)throw std::runtime_error("Command MMF mapping failed");
        publish(Ngp4Command{});
    }
    void publish(const Ngp4Command& c){
        if(!data)return;data->commit=c.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&c,sizeof c);data->checksum=ngp4_checksum(&c,sizeof c);
        MemoryBarrier();data->commit=c.sequence*2;
    }
};

struct EnhancementMailbox {
    HANDLE handle=nullptr;NgpeCommandFrame* data=nullptr;
    ~EnhancementMailbox(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpeCommandFrame),name.c_str());
        if(!handle)throw std::runtime_error("Enhancement command MMF creation failed");
        data=static_cast<NgpeCommandFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpeCommandFrame)));
        if(!data)throw std::runtime_error("Enhancement command MMF mapping failed");publish(NgpeCommand{});
    }
    void publish(const NgpeCommand& c){
        if(!data)return;data->commit=c.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&c,sizeof c);data->checksum=ngp4_checksum(&c,sizeof c);
        MemoryBarrier();data->commit=c.sequence*2;
    }
};

// This worker owns its DLL Context. The fast loop never enters that Context.
struct BrakeForceMailbox {
    HANDLE handle=nullptr;NgpbForceCommandFrame* data=nullptr;
    ~BrakeForceMailbox(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpbForceCommandFrame),name.c_str());
        if(!handle)throw std::runtime_error("Brake force mailbox creation failed");
        data=static_cast<NgpbForceCommandFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpbForceCommandFrame)));
        if(!data)throw std::runtime_error("Brake force mailbox mapping failed");publish(NgpbForceCommand{});
    }
    void publish(const NgpbForceCommand& command){
        if(!data)return;data->commit=command.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&command,sizeof command);data->checksum=ngp4_checksum(&command,sizeof command);
        MemoryBarrier();data->commit=command.sequence*2;
    }
};
struct BodyForceMailbox {
    HANDLE handle=nullptr;NgpBodyForceCommandFrame* data=nullptr;
    ~BodyForceMailbox(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpBodyForceCommandFrame),name.c_str());
        if(!handle)throw std::runtime_error("Body force mailbox creation failed");
        data=static_cast<NgpBodyForceCommandFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpBodyForceCommandFrame)));
        if(!data)throw std::runtime_error("Body force mailbox mapping failed");publish(NgpBodyForceCommand{});
    }
    void publish(const NgpBodyForceCommand& command){
        if(!data)return;data->commit=command.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&command,sizeof command);data->checksum=ngp4_checksum(&command,sizeof command);
        MemoryBarrier();data->commit=command.sequence*2;
    }
};
struct SpringForceMailbox {
    HANDLE handle=nullptr;NgpsForceCommandFrame* data=nullptr;
    ~SpringForceMailbox(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpsForceCommandFrame),name.c_str());
        if(!handle)throw std::runtime_error("Spring force mailbox creation failed");
        data=static_cast<NgpsForceCommandFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpsForceCommandFrame)));
        if(!data)throw std::runtime_error("Spring force mapping failed");publish(NgpsForceCommand{});
    }
    void publish(const NgpsForceCommand& command){
        if(!data)return;data->commit=command.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&command,sizeof command);data->checksum=ngp4_checksum(&command,sizeof command);
        MemoryBarrier();data->commit=command.sequence*2;
    }
};

// This worker owns its DLL Context. The fast loop never enters that Context.
struct SpringHintsMailbox {
    HANDLE handle=nullptr;NgpsHintsFrame* data=nullptr;
    ~SpringHintsMailbox(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);}
    void open(const std::wstring& name){
        handle=CreateFileMappingW(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(NgpsHintsFrame),name.c_str());
        if(!handle)throw std::runtime_error("Spring hints MMF creation failed");
        data=static_cast<NgpsHintsFrame*>(MapViewOfFile(handle,FILE_MAP_WRITE,0,0,sizeof(NgpsHintsFrame)));
        if(!data)throw std::runtime_error("Spring hints mapping failed");publish(NgpsHintsPacket{});
    }
    void publish(const NgpsHintsPacket& packet){
        if(!data)return;data->commit=packet.sequence*2-1;MemoryBarrier();
        std::memcpy(&data->packet,&packet,sizeof packet);data->checksum=ngp4_checksum(&packet,sizeof packet);
        MemoryBarrier();data->commit=packet.sequence*2;
    }
};

// This worker owns its DLL Context. The fast loop never enters that Context.
// Parse once on the model thread. This diagnostic value is not force authority.
inline bool tyre_reference_coefficients(const J& j,std::array<double,4>& out,uint32_t& mask){
    out={};mask=0;
    try{
        if(!j.is_object()||j.at("valid")!=true||!j.at("mask").is_number_unsigned()||
           !j.at("coefficient").is_array()||j.at("coefficient").size()!=4)return false;
        const auto m=j.at("mask").get<uint64_t>();if(m>15)return false;
        std::array<double,4> values{};
        for(unsigned i=0;i<4;++i){
            const auto& v=j.at("coefficient")[i];if(!v.is_number())return false;
            values[i]=v.get<double>();
            if(!std::isfinite(values[i])||values[i]<0||values[i]>8||(!(m&(1u<<i))&&values[i]!=0))return false;
        }
        out=values;mask=uint32_t(m);return true;
    }catch(...){return false;}
}
// Latest-input mailbox, not an ever-growing queue. Cancelled results cannot arm.
struct AsyncModels {
    using Clock=std::chrono::steady_clock;
    struct Job {std::string input,car_id;double dt=.05;bool reset=false;
        uint32_t generation=0,car_hash=0;uint64_t revision=0;Clock::time_point submitted;double worker_clock=-1;uint32_t worker_epoch=0;bool preserve_damage=false;};
    struct Result {std::string tyre_reference_rejection;bool tyre_reference_context_matched=false;J tyre_reference_shadow=J::object();J data=J::object(),performance=J::object();std::string error,car_id;
        double risk=0.,authority=0.,last_us=0.,max_us=0.,worker_clock=-1;uint32_t worker_epoch=0;bool hint_valid=false;
        uint32_t generation=0,car_hash=0;uint64_t frame=0;Clock::time_point source_time{},completed_time{};
        std::array<double,4> tyre_reference_coefficients{};uint32_t tyre_reference_mask=0;bool tyre_reference_coefficients_valid=false;
        NgpeHints owned_hints{};bool owned_valid=false;uint32_t owned_result=0;
        NgpsModelHints spring_hints{};bool spring_valid=false;
        NgpbModelHints brake_hints{};bool brake_valid=false;
        NgpdModelHints drive_hints{};bool drive_valid=false;NgpdModelComponents drive_components{};bool drive_components_valid=false;
        NgpBodyModelHints body_hints{};bool body_valid=false;
        NgpDamperModelHints damper_hints{};bool damper_valid=false;};
    std::mutex mutex;std::condition_variable cv;std::thread thread;
    Job pending;Result result;bool available=false,exit=false,failed=false,preserve_revision_damage=false;uint64_t revision=0;
    decltype(&ngp2_create) create;decltype(&ngp2_destroy) destroy;
    decltype(&ngp2_step_models) step;decltype(&ngp2_observer_snapshot) snapshot;
    decltype(&ngp2_profile) profile;decltype(&ngp2_error) error;decltype(&ngp4_effect_hint) hint;
    decltype(&ngpe_extract_hints) owned;
    decltype(&ngp2_configure) configure;
    decltype(&ngps_extract_model_hints) spring;
    decltype(&ngpb_extract_model_hints) brake;
    decltype(&ngpd_extract_model_hints) drive;decltype(&ngpd_extract_model_components) components;
    decltype(&ngpbody_extract_model_hints) body;
    decltype(&ngpdamper_extract_model_hints) damper;
    using TyreShadowReader=const char* (*)(void*);
    TyreShadowReader tyre_shadow_reader=nullptr;
    std::string model_configuration;
    bool require_caster_steering_binding=false;
    bool require_lsd_nm_binding=false;
    bool require_windup_binding=false;
    bool require_hop_binding=false;
    bool require_drivetrain_gear_binding=false;
    bool require_spring_base_binding=false;
    bool require_damper_coefficient_binding=false;
    bool require_suspension_travel_binding=false;
    bool require_brake_temperature_binding=false;
    bool require_damper_temperature_binding=false;
    bool require_body_temperature_binding=false;
    bool require_chassis_temperature_binding=false;
    bool require_energy_temperature_binding=false;
    bool require_inertia_temperature_binding=false;
    bool require_flex_temperature_binding=false;
    bool require_lsd_configuration_binding=false;
    using VehicleConfigurationProvider=std::function<J(const std::string&)>;
    VehicleConfigurationProvider vehicle_configuration_provider;
    std::string root;
    AsyncModels(std::string r,decltype(create) c,decltype(destroy) d,decltype(step) s,
        decltype(snapshot) v,decltype(profile) p,decltype(error) e,decltype(hint) h,decltype(owned) o=nullptr,
        decltype(configure) cfg=nullptr,std::string configuration="",decltype(spring) spring_fn=nullptr,decltype(brake) brake_fn=nullptr,decltype(drive) drive_fn=nullptr,decltype(body) body_fn=nullptr,decltype(damper) damper_fn=nullptr,decltype(components) components_fn=nullptr,TyreShadowReader shadow_fn=nullptr,VehicleConfigurationProvider configuration_provider=nullptr)
        :create(c),destroy(d),step(s),snapshot(v),profile(p),error(e),hint(h),owned(o),configure(cfg),
         spring(spring_fn),brake(brake_fn),drive(drive_fn),components(components_fn),body(body_fn),damper(damper_fn),model_configuration(std::move(configuration)),root(std::move(r)){
        tyre_shadow_reader=shadow_fn;
        vehicle_configuration_provider=std::move(configuration_provider);
        if(!model_configuration.empty()){
            const auto cfg=J::parse(model_configuration);
            require_caster_steering_binding=cfg.contains("parameters")&&cfg["parameters"].contains("caster_effect")&&
                cfg["parameters"]["caster_effect"].value("steeringInputContract",std::string())=="current_front_deflection_radians_v1";
            require_damper_coefficient_binding=cfg.contains("parameters")&&cfg["parameters"].contains("damper_model")&&
                cfg["parameters"]["damper_model"].value("coefficientInputContract",std::string())=="car_config_declared_blend_v1";
            require_spring_base_binding=cfg.contains("parameters")&&cfg["parameters"].contains("progressive_spring")&&
                cfg["parameters"]["progressive_spring"].value("baseRateInputContract",std::string())=="car_config_base_rate_v1";
            require_suspension_travel_binding=cfg.contains("parameters")&&cfg["parameters"].contains("suspension")&&
                cfg["parameters"]["suspension"].value("travelPublicationContract",std::string())=="per_update_travel_v1";
            require_body_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("body_rigidity_estimator")&&
                cfg["parameters"]["body_rigidity_estimator"].value("brakeTemperatureInputContract",std::string())=="current_wheel_brake_temperature_max_v1";
            require_chassis_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("chassis_roll")&&
                cfg["parameters"]["chassis_roll"].value("brakeTemperatureInputContract",std::string())=="current_wheel_brake_temperature_max_v1";
            require_energy_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("chassis_energy")&&
                cfg["parameters"]["chassis_energy"].value("brakeTemperatureInputContract",std::string())=="current_wheel_brake_temperature_max_v1";
            require_flex_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("chassis_flex")&&
                cfg["parameters"]["chassis_flex"].value("brakeTemperatureInputContract",std::string())=="current_wheel_brake_temperature_max_v1";
            require_inertia_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("virtual_inertia")&&
                cfg["parameters"]["virtual_inertia"].value("brakeTemperatureInputContract",std::string())=="current_wheel_brake_temperature_max_v1";
            require_damper_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("damper_model")&&
                cfg["parameters"]["damper_model"].value("brakeTemperatureInputContract",std::string())=="current_wheel_brake_temperature_v1";
            require_brake_temperature_binding=cfg.contains("parameters")&&cfg["parameters"].contains("brake_fade")&&
                cfg["parameters"]["brake_fade"].value("temperatureInputContract",std::string())=="current_wheel_brake_temperature_v1";
            require_drivetrain_gear_binding=cfg.contains("parameters")&&cfg["parameters"].contains("drivetrain")&&
                cfg["parameters"]["drivetrain"].value("gearInputContract",std::string())=="validated_gears_v1";
            require_hop_binding=cfg.contains("parameters")&&cfg["parameters"].contains("tire_hop")&&
                cfg["parameters"]["tire_hop"].value("drivetrainInputContract",std::string())=="single_drivetrain_nm_v1";
            require_windup_binding=cfg.contains("parameters")&&cfg["parameters"].contains("driveline_windup")&&
                cfg["parameters"]["driveline_windup"].value("torqueInputContract",std::string())=="drivetrain_normalized_v1";
            require_lsd_nm_binding=cfg.contains("parameters")&&cfg["parameters"].contains("diff_lsd")&&
                cfg["parameters"]["diff_lsd"].value("torqueInputContract",std::string())=="drivetrain_nm_v1";
            require_lsd_configuration_binding=cfg.contains("parameters")&&cfg["parameters"].contains("diff_lsd")&&
                cfg["parameters"]["diff_lsd"].value("configurationInputContract",std::string())=="car_config_rear_v1";
        }
        thread=std::thread([this]{run();});
    }
    ~AsyncModels(){stop();}
    void stop(){ {std::lock_guard<std::mutex> lock(mutex);exit=true;available=false;}cv.notify_all();if(thread.joinable())thread.join(); }
    void cancel(){std::lock_guard<std::mutex> lock(mutex);++revision;available=false;preserve_revision_damage=false;result.tyre_reference_shadow=J::object();result.tyre_reference_context_matched=false;result.tyre_reference_coefficients_valid=false;result.tyre_reference_coefficients={};result.tyre_reference_mask=0;result.tyre_reference_rejection="cancelled_or_reset";result.hint_valid=false;result.owned_valid=false;result.spring_valid=false;result.brake_valid=false;result.drive_valid=false;result.body_valid=false;result.damper_valid=false;if(!failed)result.error.clear();}
    void submit(std::string input,double dt,std::string id,bool reset,uint32_t generation,uint32_t car_hash,double worker_clock=-1,uint32_t worker_epoch=0,bool preserve_damage=false){
        {std::lock_guard<std::mutex> lock(mutex);if(failed)return;if(reset){++revision;result.tyre_reference_shadow=J::object();result.tyre_reference_context_matched=false;result.tyre_reference_coefficients_valid=false;result.tyre_reference_coefficients={};result.tyre_reference_mask=0;result.tyre_reference_rejection="cancelled_or_reset";result.hint_valid=false;result.owned_valid=false;result.spring_valid=false;result.brake_valid=false;result.drive_valid=false;result.body_valid=false;result.damper_valid=false;result.error.clear();}
        if(reset)preserve_revision_damage=preserve_damage;
        pending={std::move(input),std::move(id),dt,reset,generation,car_hash,revision,Clock::now(),worker_clock,worker_epoch,preserve_revision_damage};available=true;}cv.notify_one();
    }
    Result read(){std::lock_guard<std::mutex> lock(mutex);return result;}
    void fast_hint(double& risk,double& authority,double& age,bool& valid,uint32_t generation,uint32_t car_hash){
        std::lock_guard<std::mutex> lock(mutex);risk=result.risk;authority=result.authority;
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        valid=result.hint_valid&&result.generation==generation&&result.car_hash==car_hash&&age>=0&&age<=.2;
    }
    bool fast_owned(NgpeHints& out,double& age,uint32_t generation,uint32_t hash){
        std::lock_guard<std::mutex> lock(mutex);out=result.owned_hints;
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        return result.owned_valid&&result.generation==generation&&result.car_hash==hash&&age>=0&&age<=.2;
    }
    // Coherent existing tyre coefficients and model provenance. This accessor
    // alone grants neither a physical profile nor permission to apply force.
    bool fast_owned_tyre(std::array<double,4>& out,uint32_t& mask,uint64_t& frame,
                         double& model_clock,double& age,uint32_t generation,uint32_t hash,
                         uint32_t current_epoch,double current_clock,const char** reason=nullptr){
        std::lock_guard<std::mutex> lock(mutex);out={};mask=0;frame=0;model_clock=-1;
        auto reject=[&](const char* why){if(reason)*reason=why;return false;};
        if(reason)*reason="available";
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(exit||failed||!result.error.empty()||!result.owned_valid||!result.frame)return reject("model_unavailable");
        if(result.generation!=generation||result.car_hash!=hash||!current_epoch||result.worker_epoch!=current_epoch)return reject("context_mismatch");
        if(!std::isfinite(age)||age<0||age>.1)return reject("host_model_age");
        if(!std::isfinite(result.worker_clock)||result.worker_clock<0||!std::isfinite(current_clock)||
           current_clock<result.worker_clock||current_clock-result.worker_clock>.1)return reject("worker_clock_age");
        const auto& h=result.owned_hints;
        if(h.abi!=NGPE_ABI||h.tyre_mask>15)return reject("hint_header");
        std::array<double,4> value{};
        for(unsigned i=0;i<4;++i){
            value[i]=h.tyre_ns_m[i];
            if(!std::isfinite(value[i])||value[i]<0||value[i]>8||(!(h.tyre_mask&(1u<<i))&&value[i]!=0))return reject("coefficient_invalid");
        }
        out=value;mask=h.tyre_mask;frame=result.frame;model_clock=result.worker_clock;return true;
    }
    // Diagnostic snapshot only. The returned coefficient is not an actuator
    // command or proof of physical calibration. All fields come from one job.
    bool fast_tyre_reference(std::array<double,4>& out,uint32_t& mask,uint64_t& frame,
                             double& model_clock,double& age,uint32_t generation,uint32_t hash,
                             uint32_t current_epoch,double current_clock){
        std::lock_guard<std::mutex> lock(mutex);out={};mask=0;frame=0;model_clock=-1;
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(exit||failed||!result.error.empty()||!result.tyre_reference_context_matched||!result.tyre_reference_coefficients_valid||
           result.generation!=generation||result.car_hash!=hash||!current_epoch||result.worker_epoch!=current_epoch||
           age<0||age>.1||!std::isfinite(result.worker_clock)||result.worker_clock<0||
           !std::isfinite(current_clock)||current_clock<result.worker_clock||current_clock-result.worker_clock>.1||!result.frame)return false;
        out=result.tyre_reference_coefficients;mask=result.tyre_reference_mask;
        frame=result.frame;model_clock=result.worker_clock;return true;
    }
    bool fast_spring(NgpsModelHints& out,double& age,uint32_t generation,uint32_t hash,double* worker_clock=nullptr,uint32_t* worker_epoch=nullptr,uint64_t* frame=nullptr){
        std::lock_guard<std::mutex> lock(mutex);out=result.spring_hints;
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        bool valid=result.spring_valid&&result.generation==generation&&result.car_hash==hash&&age>=0&&age<=.2;
        if(valid){if(worker_clock)*worker_clock=result.worker_clock;if(worker_epoch)*worker_epoch=result.worker_epoch;if(frame)*frame=result.frame;}return valid;
    }
    bool fast_brake(NgpbModelHints& out,double& age,uint32_t generation,uint32_t hash,double* worker_clock=nullptr,uint32_t* worker_epoch=nullptr,uint64_t* frame=nullptr){
        std::lock_guard<std::mutex> lock(mutex);out={};
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(!result.brake_valid||result.generation!=generation||result.car_hash!=hash||age<0||age>.2||exit||failed)return false;
        out=result.brake_hints;
        if(worker_clock)*worker_clock=result.worker_clock;if(worker_epoch)*worker_epoch=result.worker_epoch;if(frame)*frame=result.frame;
        return true;
    }
    bool fast_drive(NgpdModelHints& out,double& age,uint32_t generation,uint32_t hash,double* worker_clock=nullptr,uint32_t* worker_epoch=nullptr,uint64_t* frame=nullptr,NgpdModelComponents* component_out=nullptr,double* lsd_capacity=nullptr){
        std::lock_guard<std::mutex> lock(mutex);out={};if(component_out)*component_out={};if(lsd_capacity)*lsd_capacity=0;
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(!result.drive_valid||result.generation!=generation||result.car_hash!=hash||age<0||age>.2||exit||failed)return false;
        if(component_out){if(!result.drive_components_valid)return false;*component_out=result.drive_components;}
        if(lsd_capacity){
            *lsd_capacity=0;
            if(!result.owned_valid||result.owned_hints.diff_valid!=1||!std::isfinite(result.owned_hints.diff_capacity_nm)||result.owned_hints.diff_capacity_nm<0||result.owned_hints.diff_capacity_nm>1)return false;
            *lsd_capacity=result.owned_hints.diff_capacity_nm;
        }
        out=result.drive_hints;if(worker_clock)*worker_clock=result.worker_clock;if(worker_epoch)*worker_epoch=result.worker_epoch;if(frame)*frame=result.frame;return true;
    }
    // One lock and one completed model job for brake, drive attribution and LSD.
    // Separate fast_brake/fast_drive calls could otherwise mix adjacent jobs.
    bool fast_wheel_local(NgpWheelLocalHint& out,double& age,uint64_t& frame,uint32_t generation,uint32_t hash){
        std::lock_guard<std::mutex> lock(mutex);out={};frame=0;
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(exit||failed||!result.brake_valid||!result.drive_valid||!result.drive_components_valid||!result.owned_valid||result.generation!=generation||result.car_hash!=hash||age<0||age>.1)return false;
        const auto& d=result.drive_hints;const auto& c=result.drive_components;const auto& b=result.brake_hints;const auto& o=result.owned_hints;
        if(d.abi!=NGPD_MODEL_ABI||d.valid!=1||d.units_qualified||d.reserved||c.abi!=1||c.valid!=1||c.units_qualified||c.reserved||
            b.abi!=NGPB_ABI||b.valid_mask!=15||b.units_qualified||b.reserved||o.abi!=NGPE_ABI||o.diff_valid!=1||
            !std::isfinite(d.windup_demand_normalized)||std::abs(d.windup_demand_normalized)>1||!std::isfinite(d.windup_soft_normalized)||std::abs(d.windup_soft_normalized)>1||
            !std::isfinite(c.transmission_correction)||std::abs(c.transmission_correction)>2||!std::isfinite(c.windup_correction)||std::abs(c.windup_correction)>2||
            std::abs(c.transmission_correction+c.windup_correction-(d.windup_soft_normalized-d.windup_demand_normalized))>1e-12||
            !std::isfinite(o.diff_capacity_nm)||o.diff_capacity_nm<0||o.diff_capacity_nm>1)return false;
        for(double ratio:b.friction_ratio)if(!std::isfinite(ratio)||ratio<0||ratio>1)return false;
        if(!std::isfinite(result.worker_clock)||result.worker_clock<0||!result.worker_epoch||!result.frame)return false;
        out.abi=NGP_WHEEL_LOCAL_HINT_ABI;out.effect_id=NGP_WHEEL_LOCAL_EFFECT_ID;out.epoch=result.worker_epoch;out.generation=generation;out.car_hash=hash;out.source_clock=result.worker_clock;
        out.demand=d.windup_demand_normalized;out.soft=d.windup_soft_normalized;out.transmission=c.transmission_correction;out.windup=c.windup_correction;out.lsd_capacity=o.diff_capacity_nm;
        for(unsigned i=0;i<4;++i)out.brake_ratio[i]=b.friction_ratio[i];frame=result.frame;return true;
    }
    bool fast_body(NgpBodyModelHints& out,double& age,uint32_t generation,uint32_t hash,double* worker_clock=nullptr,uint32_t* worker_epoch=nullptr,uint64_t* frame=nullptr){
        std::lock_guard<std::mutex> lock(mutex);out={};
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(!result.body_valid||result.generation!=generation||result.car_hash!=hash||age<0||age>.1||exit||failed)return false;
        out=result.body_hints;if(worker_clock)*worker_clock=result.worker_clock;if(worker_epoch)*worker_epoch=result.worker_epoch;if(frame)*frame=result.frame;return true;
    }
    bool fast_damper(NgpDamperModelHints& out,double& age,uint32_t generation,uint32_t hash,double* worker_clock=nullptr,uint32_t* worker_epoch=nullptr,uint64_t* frame=nullptr){
        std::lock_guard<std::mutex> lock(mutex);out={};
        age=std::chrono::duration<double>(Clock::now()-result.source_time).count();
        if(!result.damper_valid||result.generation!=generation||result.car_hash!=hash||age<0||age>.1||exit||failed)return false;
        out=result.damper_hints;if(worker_clock)*worker_clock=result.worker_clock;if(worker_epoch)*worker_epoch=result.worker_epoch;if(frame)*frame=result.frame;return true;
    }
    void run(){
        SetThreadPriority(GetCurrentThread(),THREAD_PRIORITY_BELOW_NORMAL);
        void* context=nullptr;std::string last_car;uint64_t context_revision=~uint64_t(0);bool last_step_ok=false;
        J vehicle_configuration=J::object();
        bool configuration_faulted=false;uint64_t configuration_fault_revision=0;
        try{while(true){
            Job job;{std::unique_lock<std::mutex> lock(mutex);cv.wait(lock,[this]{return exit||available;});
                if(exit)break;job=std::move(pending);available=false;}
            // Keep a source failure visible even if a repaired file is seen by
            // an already queued job before the Host consumes the error.
            if(configuration_faulted&&job.revision==configuration_fault_revision)continue;
            configuration_faulted=false;
            if(!context||job.reset||job.car_id!=last_car||job.revision!=context_revision){
                std::string configured=model_configuration;
                if(vehicle_configuration_provider){
                    try{
                    auto input=J::parse(job.input);
                    if(!input.contains("id")||input["id"]!=job.car_id)throw std::runtime_error("Vehicle configuration input identity mismatch");
                    auto reference=vehicle_configuration_provider(job.car_id);
                    if(reference.value("car_id",std::string())!=job.car_id||!reference.contains("car_config")||!reference["car_config"].is_object())
                        throw std::runtime_error("Vehicle configuration source identity mismatch");
                    J configuration=configured.empty()?J::object():J::parse(configured);
                    configuration["car_config"]=reference["car_config"];
                    ngp::validate_vehicle_gear_consumption(configuration,reference);
                    ngp::bind_vehicle_static_mass(configuration,reference);
                    ngp::bind_vehicle_clutch_configuration(configuration,reference);
                    configured=configuration.dump();
                    vehicle_configuration=std::move(reference);
                    }catch(const std::exception& ex){
                        // A missing/edited vehicle file is a recoverable input
                        // fault, not a reason to kill the model worker forever.
                        if(context){destroy(context);context=nullptr;}last_step_ok=false;
                        configuration_faulted=true;configuration_fault_revision=job.revision;
                        Result rejected;rejected.car_id=job.car_id;rejected.generation=job.generation;rejected.car_hash=job.car_hash;
                        rejected.error=std::string("Vehicle configuration: ")+ex.what();
                        rejected.data["vehicle_configuration"]={{"available",false},{"car_id",job.car_id},{"reason","configuration_input_error"}};
                        std::lock_guard<std::mutex> lock(mutex);
                        if(job.revision==revision&&!exit){rejected.frame=result.frame;result=std::move(rejected);}
                        continue;
                    }
                }
                if(context&&last_step_ok&&job.preserve_damage&&job.car_id==last_car&&!configured.empty()){
                    J configuration=J::parse(configured);
                    if(configuration.value("dependency_contract",std::string())=="selected_event_damage_v1"){
                    // Cancelled calculations are not committed damage state.
                    std::lock_guard<std::mutex> lock(mutex);
                    if(result.car_id==job.car_id&&result.error.empty()&&result.data.contains("damage_persistent"))
                        configuration["initial_damage"]=result.data["damage_persistent"];
                    configured=configuration.dump();
                    }
                }
                if(context)destroy(context);context=create(root.c_str());if(!context)throw std::runtime_error("Model context creation failed");
                if(!configured.empty()&&(!configure||configure(context,configured.c_str())!=0))
                    throw std::runtime_error("Model configuration failed");
                last_car=job.car_id;context_revision=job.revision;
            }
            if(vehicle_configuration_provider){
                try{ngp::validate_vehicle_gear_input(J::parse(job.input),vehicle_configuration);}
                catch(const std::exception& ex){
                    // Never let the original model invent an undeclared gear.
                    if(context){destroy(context);context=nullptr;}last_step_ok=false;
                    configuration_faulted=true;configuration_fault_revision=job.revision;
                    Result rejected;rejected.car_id=job.car_id;rejected.generation=job.generation;rejected.car_hash=job.car_hash;
                    rejected.error=std::string("Vehicle gear input: ")+ex.what();
                    rejected.data["vehicle_configuration"]={{"available",false},{"car_id",job.car_id},{"reason","gear_input_error"}};
                    std::lock_guard<std::mutex> lock(mutex);
                    if(job.revision==revision&&!exit){rejected.frame=result.frame;result=std::move(rejected);}
                    continue;
                }
            }
            auto start=Clock::now();uint32_t rc=step(context,job.input.c_str(),job.dt);
            last_step_ok=rc==0;
            double us=std::chrono::duration<double,std::micro>(Clock::now()-start).count();
            Result next;next.car_id=job.car_id;next.generation=job.generation;next.car_hash=job.car_hash;
            next.source_time=job.submitted;next.completed_time=Clock::now();next.last_us=us;next.worker_clock=job.worker_clock;next.worker_epoch=job.worker_epoch;
            next.data=J::parse(snapshot(context));if(profile)next.performance=J::parse(profile(context));
            if(vehicle_configuration_provider)next.data["vehicle_configuration"]=vehicle_configuration;
            next.error=rc?error(context):"";
            if(!rc&&require_damper_coefficient_binding&&(!next.data.contains("damper_coefficient_binding")||
                !ngp::damper_coefficient_binding_matches(next.data["damper_coefficient_binding"],vehicle_configuration))){
                rc=5;last_step_ok=false;next.error="Damper declared coefficient binding mismatch";
            }
            if(!rc&&require_spring_base_binding&&(!next.data.contains("spring_base_binding")||
                !ngp::spring_base_binding_matches(next.data["spring_base_binding"],vehicle_configuration))){
                rc=5;last_step_ok=false;next.error="Spring declared base rate binding mismatch";
            }
            if(!rc&&require_suspension_travel_binding&&(!next.data.contains("suspension_travel_binding")||
                !ngp::suspension_travel_binding_matches(next.data["suspension_travel_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Suspension travel publication binding mismatch";
            }
            if(!rc&&require_body_temperature_binding&&(!next.data.contains("body_temperature_binding")||
                !ngp::body_temperature_binding_matches(next.data["body_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Body measured temperature binding mismatch";
            }
            if(!rc&&require_caster_steering_binding&&(!next.data.contains("caster_steering_binding")||
                !ngp::caster_steering_binding_matches(next.data["caster_steering_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Caster steering input binding mismatch";
            }
            if(!rc&&require_chassis_temperature_binding&&(!next.data.contains("chassis_temperature_binding")||
                !ngp::chassis_temperature_binding_matches(next.data["chassis_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Chassis measured temperature binding mismatch";
            }
            if(!rc&&require_energy_temperature_binding&&(!next.data.contains("energy_temperature_binding")||
                !ngp::energy_temperature_binding_matches(next.data["energy_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Energy measured temperature binding mismatch";
            }
            if(!rc&&require_inertia_temperature_binding&&(!next.data.contains("inertia_temperature_binding")||
                !ngp::inertia_temperature_binding_matches(next.data["inertia_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Inertia measured temperature binding mismatch";
            }
            if(!rc&&require_flex_temperature_binding&&(!next.data.contains("flex_temperature_binding")||
                !ngp::flex_temperature_binding_matches(next.data["flex_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Flex measured temperature binding mismatch";
            }
            if(!rc&&require_damper_temperature_binding&&(!next.data.contains("damper_temperature_binding")||
                !ngp::damper_temperature_binding_matches(next.data["damper_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Damper measured temperature binding mismatch";
            }
            if(!rc&&require_brake_temperature_binding&&(!next.data.contains("brake_temperature_binding")||
                !ngp::brake_temperature_binding_matches(next.data["brake_temperature_binding"],J::parse(job.input)))){
                rc=5;last_step_ok=false;next.error="Brake measured temperature binding mismatch";
            }
            if(!rc&&require_drivetrain_gear_binding&&(!next.data.contains("drivetrain_gear_binding")||
                !ngp::drivetrain_gear_binding_matches(next.data["drivetrain_gear_binding"],vehicle_configuration))){
                rc=5;last_step_ok=false;next.error="Drivetrain validated gear binding mismatch";
            }
            if(!rc&&require_hop_binding&&(!next.data.contains("hop_input_binding")||
                next.data["hop_input_binding"].value("contract",std::string())!="single_drivetrain_nm_v1"||
                next.data["hop_input_binding"].value("source",std::string())!="ngp_diff_input_torque_nm"||
                !next.data["hop_input_binding"].contains("duplicate_alias_term")||
                next.data["hop_input_binding"]["duplicate_alias_term"]!=0.)){
                rc=5;last_step_ok=false;next.error="Hop drivetrain input binding mismatch";
            }
            if(!rc&&require_windup_binding&&(!next.data.contains("windup_input_binding")||
                next.data["windup_input_binding"].value("contract",std::string())!="drivetrain_normalized_v1"||
                next.data["windup_input_binding"].value("source",std::string())!="ngp_drivetrain_torque")){
                rc=5;last_step_ok=false;next.error="Windup normalized input binding mismatch";
            }
            if(!rc&&require_lsd_configuration_binding&&(!next.data.contains("lsd_configuration_binding")||
                next.data["lsd_configuration_binding"].value("contract",std::string())!="car_config_rear_v1"||
                next.data["lsd_configuration_binding"].value("source",std::string())!="CAR_CONFIG"||
                next.data["lsd_configuration_binding"].value("traction_type",std::string())!="RWD")){
                rc=5;last_step_ok=false;next.error="LSD configuration binding mismatch";
            }
            if(!rc&&require_lsd_nm_binding&&(!next.data.contains("lsd_input_binding")||
                next.data["lsd_input_binding"].value("contract",std::string())!="drivetrain_nm_v1"||
                next.data["lsd_input_binding"].value("ngp_lsd_torque_source",std::string())!="DRIVETRAIN_NM_V1")){
                rc=5;last_step_ok=false;next.error="LSD Nm input binding mismatch";
            }
            if(!rc&&tyre_shadow_reader){
                // Optional diagnostic API: never feeds owned_hints or actuators.
                const char* raw=tyre_shadow_reader(context);
                auto value=raw?J::parse(raw,nullptr,false):J();
                next.tyre_reference_rejection="invalid_diagnostic_envelope";
                if(value.is_object()&&value.contains("application_enabled")&&value["application_enabled"]==false&&
                   value.contains("worker_context_bound")&&value["worker_context_bound"]==false)
                {
                    // Retain the diagnostic envelope even when input echo fails.
                    // This data is observational and never supplies actuator hints.
                    next.data["tyre_reference_diagnostic_envelope"]=value;
                    next.tyre_reference_rejection="input_echo_mismatch";
                    if(value.contains("rejection_reason")&&value["rejection_reason"].is_string()&&
                       !value["rejection_reason"].get<std::string>().empty())
                        next.tyre_reference_rejection="core:"+value["rejection_reason"].get<std::string>();
                    auto input=J::parse(job.input,nullptr,false);
                    const bool supplied=input.is_object()&&input.contains("ngp_reference_context");
                    if(supplied){
                        if(ngp::tyre_reference_echo_matches(value,input["ngp_reference_context"],
                           job.generation,job.car_hash,job.worker_epoch,job.worker_clock)){
                            next.tyre_reference_rejection.clear();next.tyre_reference_context_matched=true;
                            next.tyre_reference_shadow=std::move(value);
                            next.tyre_reference_coefficients_valid=tyre_reference_coefficients(next.tyre_reference_shadow,next.tyre_reference_coefficients,next.tyre_reference_mask);
                        }
                    }else if(!value.contains("reference_context_validated")||value["reference_context_validated"]==false)
                    {next.tyre_reference_rejection.clear();next.tyre_reference_shadow=std::move(value);}
                }
            }
            next.hint_valid=!rc&&hint&&hint(context,&next.risk,&next.authority)==0;
            if(!rc&&damper)next.damper_valid=damper(context,&next.damper_hints)==0&&next.damper_hints.abi==NGP_DAMPER_MODEL_ABI&&
                next.damper_hints.valid_mask>0&&!(next.damper_hints.valid_mask&~15u)&&!next.damper_hints.units_qualified&&!next.damper_hints.reserved;
            if(!rc&&body)next.body_valid=body(context,&next.body_hints)==0&&next.body_hints.abi==NGP_BODY_MODEL_ABI&&
                next.body_hints.valid==1&&!next.body_hints.units_qualified&&!next.body_hints.reserved;
            if(!rc&&drive){
                next.drive_valid=drive(context,&next.drive_hints)==0&&next.drive_hints.abi==NGPD_MODEL_ABI&&
                    next.drive_hints.valid==1&&!next.drive_hints.units_qualified&&!next.drive_hints.reserved;
                if(next.drive_valid&&components){
                    next.drive_components_valid=components(context,&next.drive_components)==0&&next.drive_components.abi==1&&
                        next.drive_components.valid==1&&!next.drive_components.units_qualified&&!next.drive_components.reserved;
                }
                next.data["drive_model_candidate"]={{"components_valid",next.drive_components_valid},
                    {"transmission_correction",next.drive_components.transmission_correction},{"windup_correction",next.drive_components.windup_correction},
                    {"valid",next.drive_valid},{"units_qualified",false},{"application_enabled",false},
                    {"wheel_drive_torque_model_nm",next.drive_hints.wheel_drive_torque_model_nm},
                    {"drive_normalized",next.drive_hints.drive_normalized},{"windup_demand_normalized",next.drive_hints.windup_demand_normalized},
                    {"windup_transmitted_normalized",next.drive_hints.windup_transmitted_normalized},
                    {"windup_torque_normalized",next.drive_hints.windup_torque_normalized},{"windup_soft_normalized",next.drive_hints.windup_soft_normalized}};
            }
            if(!rc&&brake){
                next.brake_valid=brake(context,&next.brake_hints)==0&&next.brake_hints.abi==NGPB_ABI&&
                    next.brake_hints.valid_mask==15&&next.brake_hints.units_qualified==0&&next.brake_hints.reserved==0;
            }
            if(!rc&&spring){
                next.spring_valid=spring(context,&next.spring_hints)==0;
                next.data["spring_model_candidate"]={{"valid",next.spring_valid},
                    {"valid_mask",next.spring_hints.valid_mask},{"units_qualified",false},
                    {"effective_rate",next.spring_hints.effective_rate},{"base_rate",next.spring_hints.base_rate},
                    {"excess_ratio",next.spring_hints.excess_ratio}};
            }
            if(!rc&&owned){
                next.owned_result=owned(context,&next.owned_hints);next.owned_valid=next.owned_result==0;
                next.data["owned_actuation"]={{"result",next.owned_result},{"suspension_mask",next.owned_hints.suspension_mask},
                    {"tyre_mask",next.owned_hints.tyre_mask},{"diff_valid",next.owned_hints.diff_valid},
                    {"suspension_ns_m",next.owned_hints.suspension_ns_m},{"tyre_ns_m",next.owned_hints.tyre_ns_m},
                    {"diff_capacity_nm",next.owned_hints.diff_capacity_nm}};
            }
            {std::lock_guard<std::mutex> lock(mutex);if(job.revision!=revision||exit)continue;
                next.frame=result.frame+1;next.max_us=std::max(result.max_us,us);result=std::move(next);}
        }}catch(const std::exception& ex){std::lock_guard<std::mutex> lock(mutex);failed=true;available=false;result.error=ex.what();result.hint_valid=false;result.owned_valid=false;result.spring_valid=false;result.brake_valid=false;result.drive_valid=false;result.body_valid=false;result.damper_valid=false;
            if(vehicle_configuration_provider)result.data["vehicle_configuration"]={{"available",false},{"reason","configuration_or_model_exception"}};}
        if(context)destroy(context);
    }
};

inline uint32_t bridge_car_hash(const std::string& id){return ngp4_checksum(id.data(),id.size());}
inline bool bridge_read_once(const Ngp4SensorFrame* mapped,Ngp4Sensor& out){
    if(!mapped)return false;uint32_t token=mapped->commit;
    if(!token||(token&1))return false;MemoryBarrier();Ngp4SensorFrame copy{};std::memcpy(&copy,mapped,sizeof copy);MemoryBarrier();
    if(token!=mapped->commit||token!=copy.commit||copy.packet.sequence*2!=token||copy.packet.abi!=NGP4_ABI||
       !copy.packet.epoch||copy.checksum!=ngp4_checksum(&copy.packet,sizeof copy.packet))return false;
    const auto& s=copy.packet;
    if(!std::isfinite(s.dt)||s.dt<=0||s.dt>.03||!std::isfinite(s.clock)||!s.car_hash)return false;
    for(double v:s.side)if(!std::isfinite(v))return false;
    for(double v:s.front_velocity)if(!std::isfinite(v))return false;
    for(double v:s.rear_velocity)if(!std::isfinite(v))return false;
    for(double v:s.linear_velocity)if(!std::isfinite(v))return false;
    for(double v:s.wheel_omega)if(!std::isfinite(v))return false;
    for(const auto& w:s.wheel)for(double v:w)if(!std::isfinite(v))return false;
    out=copy.packet;return true;
}

inline bool bridge_read(const Ngp4SensorFrame* mapped,Ngp4Sensor& out){
    return ngp::bounded_snapshot_read(out,[&](Ngp4Sensor& sample){return bridge_read_once(mapped,sample);});
}
