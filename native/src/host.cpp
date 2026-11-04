#include "tyre_reference_comparison.hpp"
#include "car_configuration.hpp"
#include "ngp2_api.h"
#include "module_count.h"
#include "ac_shared_memory.h"
#include "cphys_packet.h"
#include "json.hpp"
#include "spring_force_channel.hpp"
#include "spring_local_profile.hpp"
#include "spring_local_mailbox.hpp"
#include "drive_local_profile.hpp"
#include "drive_local_status_validation.hpp"
#include "drive_local_mailbox.hpp"
#include "wheel_torque_local_profile.hpp"
#include "wheel_torque_local_mailbox.hpp"
#include "wheel_torque_local_status_validation.hpp"
#include "brake_sensor_validation.hpp"
#include "brake_execution.hpp"
#include "brake_profile.hpp"
#include "brake_local_mailbox.hpp"
#include "brake_local_status_validation.hpp"
#include "body_sensor_validation.hpp"
#include "body_force_channel.hpp"
#include "body_profile.hpp"
#include "body_local_mailbox.hpp"
#include "body_local_status_validation.hpp"
#include "wheel_material_transport.hpp"
#include "damper_profile.hpp"
#include "damper_host_path.hpp"
#include "damper_hint_mailbox.hpp"
#include "status_publisher.hpp"
#include "control_reader.hpp"
#include "tyre_response_contract.hpp"
#include "tyre_signal_contract.hpp"
#include "tyre_shadow_freshness.hpp"
#include "tyre_observation_mailbox.hpp"
#include "../experiments/tyre_existing_host_profile.hpp"
#include "../experiments/yaw_ablation_profile.hpp"
#include <windows.h>
#include <chrono>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <thread>
namespace fs=std::filesystem;
using J=nlohmann::json;
#include "bridge_host.hpp"
#include "../experiments/tyre_bound_sender_channel.hpp"
static volatile LONG stop_flag=0;
static BOOL WINAPI stop_handler(DWORD){InterlockedExchange(&stop_flag,1);return TRUE;}
template<class F> F symbol(HMODULE d,const char* name){F f=nullptr;FARPROC raw=GetProcAddress(d,name);static_assert(sizeof f==sizeof raw);std::memcpy(&f,&raw,sizeof f);return f;}
template<class T> struct Mapping{
 HANDLE handle=nullptr;const T* data=nullptr;
 ~Mapping(){close();}void close(){if(data)UnmapViewOfFile(data);if(handle)CloseHandle(handle);data=nullptr;handle=nullptr;}
 bool open(const wchar_t* name){if(data)return true;handle=OpenFileMappingW(FILE_MAP_READ,FALSE,name);if(!handle)return false;data=static_cast<const T*>(MapViewOfFile(handle,FILE_MAP_READ,0,0,sizeof(T)));if(!data){close();return false;}return true;}
};
static std::string narrow(const uint16_t* p,size_t cap){std::string s;for(size_t i=0;i<cap&&p[i];++i)s+=p[i]<128?char(p[i]):'?';return s;}
static void atomic_json(const fs::path& path,const J& obj){fs::path temp=path;temp+=L".tmp";{std::ofstream out(temp,std::ios::binary|std::ios::trunc);out<<obj.dump();if(!out.good())throw std::runtime_error("Status write failed");}
 if(!MoveFileExW(temp.c_str(),path.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)){
  DWORD error=GetLastError();if(error!=ERROR_SHARING_VIOLATION&&error!=ERROR_ACCESS_DENIED)throw std::runtime_error("Status publication failed");
  // An observer may have the previous file open briefly. Keep its complete
  // snapshot and publish on the next cycle; never replace it in place.
 }}
static J command(const fs::path& p){std::ifstream f(p,std::ios::binary);if(!f)return J();std::string s((std::istreambuf_iterator<char>(f)),{});if(s.size()>65536)return J();
 const std::string end="\nNGP_CONTROL_END\n";if(s.size()<end.size()||s.substr(s.size()-end.size())!=end)return J();try{return J::parse(s.substr(0,s.size()-end.size()));}catch(...){return J();}}
static bool integer_number(const J& j,double limit){if(!j.is_number())return false;double v=j.get<double>();return std::isfinite(v)&&v>=0&&v<=limit&&std::floor(v)==v;}
static bool car_identity(const std::string& full,const std::string& shared){
 if(full.empty()||full.size()>200||shared.empty())return false;
 for(unsigned char c:full)if(!std::isalnum(c)&&c!='_'&&c!='-')return false;
 // Original AC stores at most 32 characters plus NUL. Never use that truncated
 // identifier as a content/cars path: the observer supplies the complete ID.
 return shared==full.substr(0,32);
}
static J vehicle(const SPageFilePhysics& p,const SPageFileStatic& st){
 J c={{"id",narrow(st.carModel,33)},{"speedKmh",p.speedKmh},{"speedMs",p.speedKmh/3.6},{"rpm",p.rpms},
 {"gear",p.gear-1},{"gas",p.gas},{"brake",p.brake},{"clutch",p.clutch},{"steer",p.steerAngle},{"fuel",p.fuel}};
 c["gForces"]={{"x",p.accG[0]},{"y",p.accG[1]},{"z",p.accG[2]}};
 c["acceleration_contract"]={{"schema",1},{"units","g"},{"axes","car_xyz"},{"source","original_ac"}};
 c["localVelocity"]={{"x",p.localVelocity[0]},{"y",p.localVelocity[1]},{"z",p.localVelocity[2]}};
 c["localAngularVelocity"]={{"x",p.localAngularVel[0]},{"y",p.localAngularVel[1]},{"z",p.localAngularVel[2]}};
 c["sim"]={{"ambientTemperature",p.airTemp},{"roadTemperature",p.roadTemp}};
 c["wheels"]=J::object();for(unsigned i=0;i<4;++i)c["wheels"][std::to_string(i)]={
 {"load",p.wheelLoad[i]},{"angularSpeed",p.wheelAngularSpeed[i]},{"suspensionTravel",p.suspensionTravel[i]},
 {"camber",p.camberRAD[i]},{"tyreRadius",st.tyreRadius[i]},{"tyrePressure",p.wheelsPressure[i]},
 {"tyreCoreTemperature",p.tyreCoreTemperature[i]},{"brakeTemperature",p.brakeTemp[i]},
 {"tyreWear",p.tyreWear[i]},{"tyreDirty",p.tyreDirtyLevel[i]},{"tyreSlip",p.wheelSlip[i]}};
 // wheelSlip is NOT slipRatio/slipAngle. Those fields remain absent and audited.
 // Native shared memory has no verified live car mass: do not fabricate it.
 return c;}
int main(int argc,char** argv){
 wchar_t path[MAX_PATH];DWORD count=GetModuleFileNameW(nullptr,path,MAX_PATH);if(!count||count>=MAX_PATH)return 1;
 fs::path bin=fs::path(path).parent_path(),runtime=bin.parent_path()/"runtime",ac_root=bin.parent_path().parent_path().parent_path().parent_path();
 std::string damage_policy="original";
 std::string input_contract="original";
 std::string damper_input_contract="original";
 std::string carcass_input_contract="original";
 std::string vehicle_config_contract="original";
 std::string lsd_torque_input_contract="original";
 std::string windup_input_contract="original";
 std::string hop_input_contract="original";
 std::string drivetrain_gear_contract="original";
 std::string spring_base_contract="original";
 std::string damper_coefficient_contract="original";
 std::string suspension_travel_contract="original";
 std::string brake_temperature_contract="original";
 std::string damper_temperature_contract="original";
 std::string body_temperature_contract="original";
 std::string chassis_temperature_contract="original";
 std::string energy_temperature_contract="original";
 std::string caster_steering_contract="original";
 std::string inertia_temperature_contract="original";
 std::string flex_temperature_contract="original";
 std::string lsd_configuration_contract="original";
 std::string tyre_signal_contract="original";
 std::string tyre_response_contract="legacy";
 double seconds=0.;std::wstring prefix=L"Local\\acpmf",cphys_name=L"Local\\AcTools.CSP.Limited.ACNextGen.V2.Car",
 worker_name=L"Local\\AcTools.CSP.Limited.ACNextGen.V4";bool probe=false,session_managed=false,wheel_material_capture=false,tyre_observation_capture=false;
 fs::path yaw_ablation_path;
 for(int i=1;i<argc;++i){std::string arg=argv[i];if(arg=="--runtime"&&i+1<argc)runtime=fs::u8path(argv[++i]);
 else if(arg=="--ac-root"&&i+1<argc)ac_root=fs::u8path(argv[++i]);else if(arg=="--seconds"&&i+1<argc)seconds=std::stod(argv[++i]);
 else if(arg=="--probe")probe=true;else if(arg=="--telemetry-prefix"&&i+1<argc){std::string s=argv[++i];prefix=std::wstring(s.begin(),s.end());}
 else if(arg=="--cphys-name"&&i+1<argc){std::string s=argv[++i];cphys_name=std::wstring(s.begin(),s.end());}
 else if(arg=="--worker-name"&&i+1<argc){std::string s=argv[++i];worker_name=std::wstring(s.begin(),s.end());}
 else if(arg=="--session-managed")session_managed=true;
 else if(arg=="--wheel-material-capture")wheel_material_capture=true;
 else if(arg=="--tyre-observation-capture")tyre_observation_capture=true;
 else if(arg=="--yaw-ablation-profile"&&i+1<argc)yaw_ablation_path=fs::u8path(argv[++i]);
 else if(arg=="--damage-policy"&&i+1<argc){damage_policy=argv[++i];if(damage_policy!="original"&&damage_policy!="event_only"&&damage_policy!="event_root_v1")return 2;}
 else if(arg=="--input-contract"&&i+1<argc){input_contract=argv[++i];if(input_contract!="original"&&input_contract!="csp_g_v1")return 2;}
 else if(arg=="--damper-input-contract"&&i+1<argc){damper_input_contract=argv[++i];if(damper_input_contract!="original"&&damper_input_contract!="current_suspension_travel_v1")return 2;}
 else if(arg=="--carcass-input-contract"&&i+1<argc){carcass_input_contract=argv[++i];if(carcass_input_contract!="original"&&carcass_input_contract!="current_wheel_slip_v1")return 2;}
 else if(arg=="--vehicle-config-contract"&&i+1<argc){vehicle_config_contract=argv[++i];if(vehicle_config_contract!="original"&&vehicle_config_contract!="unpacked_ini_observe_v1")return 2;}
 else if(arg=="--lsd-torque-input-contract"&&i+1<argc){lsd_torque_input_contract=argv[++i];if(lsd_torque_input_contract!="original"&&lsd_torque_input_contract!="drivetrain_nm_v1")return 2;}
 else if(arg=="--windup-input-contract"&&i+1<argc){windup_input_contract=argv[++i];if(windup_input_contract!="original"&&windup_input_contract!="drivetrain_normalized_v1")return 2;}
 else if(arg=="--damper-coefficient-contract"&&i+1<argc){damper_coefficient_contract=argv[++i];if(damper_coefficient_contract!="original"&&damper_coefficient_contract!="car_config_declared_blend_v1")return 2;}
 else if(arg=="--spring-base-contract"&&i+1<argc){spring_base_contract=argv[++i];if(spring_base_contract!="original"&&spring_base_contract!="car_config_base_rate_v1")return 2;}
 else if(arg=="--suspension-travel-contract"&&i+1<argc){suspension_travel_contract=argv[++i];if(suspension_travel_contract!="original"&&suspension_travel_contract!="per_update_travel_v1")return 2;}
 else if(arg=="--chassis-temperature-contract"&&i+1<argc){chassis_temperature_contract=argv[++i];if(chassis_temperature_contract!="original"&&chassis_temperature_contract!="current_wheel_brake_temperature_max_v1")return 2;}
 else if(arg=="--energy-temperature-contract"&&i+1<argc){energy_temperature_contract=argv[++i];if(energy_temperature_contract!="original"&&energy_temperature_contract!="current_wheel_brake_temperature_max_v1")return 2;}
 else if(arg=="--caster-steering-contract"&&i+1<argc){caster_steering_contract=argv[++i];if(caster_steering_contract!="original"&&caster_steering_contract!="current_front_deflection_radians_v1")return 2;}
 else if(arg=="--inertia-temperature-contract"&&i+1<argc){inertia_temperature_contract=argv[++i];if(inertia_temperature_contract!="original"&&inertia_temperature_contract!="current_wheel_brake_temperature_max_v1")return 2;}
 else if(arg=="--flex-temperature-contract"&&i+1<argc){flex_temperature_contract=argv[++i];if(flex_temperature_contract!="original"&&flex_temperature_contract!="current_wheel_brake_temperature_max_v1")return 2;}
 else if(arg=="--body-temperature-contract"&&i+1<argc){body_temperature_contract=argv[++i];if(body_temperature_contract!="original"&&body_temperature_contract!="current_wheel_brake_temperature_max_v1")return 2;}
 else if(arg=="--damper-temperature-contract"&&i+1<argc){damper_temperature_contract=argv[++i];if(damper_temperature_contract!="original"&&damper_temperature_contract!="current_wheel_brake_temperature_v1")return 2;}
 else if(arg=="--brake-temperature-contract"&&i+1<argc){brake_temperature_contract=argv[++i];if(brake_temperature_contract!="original"&&brake_temperature_contract!="current_wheel_brake_temperature_v1")return 2;}
 else if(arg=="--drivetrain-gear-contract"&&i+1<argc){drivetrain_gear_contract=argv[++i];if(drivetrain_gear_contract!="original"&&drivetrain_gear_contract!="validated_gears_v1")return 2;}
 else if(arg=="--hop-input-contract"&&i+1<argc){hop_input_contract=argv[++i];if(hop_input_contract!="original"&&hop_input_contract!="single_drivetrain_nm_v1")return 2;}
 else if(arg=="--lsd-configuration-contract"&&i+1<argc){lsd_configuration_contract=argv[++i];if(lsd_configuration_contract!="original"&&lsd_configuration_contract!="car_config_rear_v1")return 2;}
 else if(arg=="--tyre-signal-contract"&&i+1<argc){tyre_signal_contract=argv[++i];if(tyre_signal_contract!="original"&&tyre_signal_contract!="owner_state_v1")return 2;}
 else if(arg=="--tyre-response-contract"&&i+1<argc){tyre_response_contract=argv[++i];if(!ngp::tyre_response_contract_valid(tyre_response_contract))return 2;}
 else{std::fprintf(stderr,"Unknown argument\n");return 2;}}
 if(lsd_configuration_contract!="original"&&(vehicle_config_contract!="unpacked_ini_observe_v1"||lsd_torque_input_contract!="drivetrain_nm_v1"))return 2;
 if(damper_coefficient_contract!="original"&&vehicle_config_contract!="unpacked_ini_observe_v1")return 2;
 if(spring_base_contract!="original"&&vehicle_config_contract!="unpacked_ini_observe_v1")return 2;
 if(drivetrain_gear_contract!="original"&&vehicle_config_contract!="unpacked_ini_observe_v1")return 2;
 ngp::experiment::YawAblationProfile yaw_ablation;
 if(!yaw_ablation_path.empty())try{
  std::ifstream f(yaw_ablation_path,std::ios::binary);if(!f)throw std::runtime_error("Ablation profile missing");
  std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
  if(raw.size()>65536)throw std::runtime_error("Ablation profile oversized");
  yaw_ablation=ngp::experiment::yaw_ablation_profile(J::parse(raw));
 }catch(const std::exception& e){std::fprintf(stderr,"Ablation profile rejected: %s\n",e.what());return 2;}
 ngp::experiment::YawAblationGate yaw_ablation_gate(yaw_ablation.config);
 ngp::experiment::YawAblationDecision yaw_ablation_decision;
 J yaw_ablation_rejection;
 uint32_t yaw_patch_epoch=0,yaw_patch_generation=0,yaw_patch_car=0,yaw_patch_code=0;
 bool yaw_patch_changed=false;
 fs::create_directories(runtime);
 if(yaw_ablation.config.enabled){
  const auto marker=runtime/("yaw-ablation-consumed-"+yaw_ablation.job_id+".marker");
  HANDLE consumed=CreateFileW(marker.c_str(),GENERIC_WRITE,0,nullptr,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,nullptr);
  if(consumed==INVALID_HANDLE_VALUE){std::fprintf(stderr,"Ablation job already consumed or marker unavailable\n");return 2;}
  const char text[]="One-shot ablation grant consumed before Host startup.\n";DWORD written=0;
  bool saved=WriteFile(consumed,text,sizeof(text)-1,&written,nullptr)&&written==sizeof(text)-1&&FlushFileBuffers(consumed);
  CloseHandle(consumed);if(!saved){std::fprintf(stderr,"Ablation marker persistence failed\n");return 2;}
 }
 // Isolated synthetic telemetry must never contend with the installed host.
 std::wstring mutex_name=L"Local\\ACNextGen.Native.V2.Host";if(prefix!=L"Local\\acpmf")mutex_name+=prefix.substr(6);
 HANDLE singleton=CreateMutexW(nullptr,TRUE,mutex_name.c_str());if(!singleton||GetLastError()==ERROR_ALREADY_EXISTS){if(singleton)CloseHandle(singleton);return 3;}
 HMODULE dll=LoadLibraryExW((bin/L"ACNextGenCore.dll").c_str(),nullptr,LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR|LOAD_LIBRARY_SEARCH_SYSTEM32);
 if(!dll){std::fprintf(stderr,"DLL load failed: %lu\n",GetLastError());CloseHandle(singleton);return 4;}
 auto version=symbol<decltype(&ngp2_version)>(dll,"ngp2_version");auto create=symbol<decltype(&ngp2_create)>(dll,"ngp2_create");
 auto destroy=symbol<decltype(&ngp2_destroy)>(dll,"ngp2_destroy");auto step=symbol<decltype(&ngp2_step_models)>(dll,"ngp2_step_models");
 auto snapshot=symbol<decltype(&ngp2_observer_snapshot)>(dll,"ngp2_observer_snapshot");auto error=symbol<decltype(&ngp2_error)>(dll,"ngp2_error");
 auto configure=symbol<decltype(&ngp2_configure)>(dll,"ngp2_configure");
 auto profile=symbol<decltype(&ngp2_profile)>(dll,"ngp2_profile");J performance=J::object();
 auto effect_hint=symbol<decltype(&ngp4_effect_hint)>(dll,"ngp4_effect_hint");
 auto compute_effect=symbol<decltype(&ngp4_compute_effect)>(dll,"ngp4_compute_effect");
 auto owned_hints=symbol<decltype(&ngpe_extract_hints)>(dll,
     tyre_response_contract=="owned_lateral_limit_v1"?"ngpe_extract_constitutive_hints":"ngpe_extract_hints");
 auto spring_hints=symbol<decltype(&ngps_extract_model_hints)>(dll,"ngps_extract_model_hints");
 auto brake_hints=reinterpret_cast<decltype(&ngpb_extract_model_hints)>(GetProcAddress(dll,"ngpb_extract_model_hints"));
 auto drive_hints=reinterpret_cast<decltype(&ngpd_extract_model_hints)>(GetProcAddress(dll,"ngpd_extract_model_hints"));
 auto body_hints=reinterpret_cast<decltype(&ngpbody_extract_model_hints)>(GetProcAddress(dll,"ngpbody_extract_model_hints"));
 auto damper_hints=symbol<decltype(&ngpdamper_extract_model_hints)>(dll,"ngpdamper_extract_model_hints");
 auto compute_enhancement=symbol<decltype(&ngpe_compute)>(dll,"ngpe_compute");
 if(!version||version()!=2||!create||!destroy||!step||!snapshot||!error||!effect_hint||!compute_effect||!owned_hints||!compute_enhancement){FreeLibrary(dll);CloseHandle(singleton);return 5;}
 std::string root=ac_root.generic_u8string();void* ctx=create(root.c_str());if(!ctx){FreeLibrary(dll);CloseHandle(singleton);return 6;}
 // Game threads retain scheduler preference when CPU cores are busy.
 bool background_priority=SetPriorityClass(GetCurrentProcess(),BELOW_NORMAL_PRIORITY_CLASS)!=0;
 J model_config={{"input_contract",input_contract}};
 model_config["damper_input_contract"]=damper_input_contract;
 model_config["carcass_input_contract"]=carcass_input_contract;
 model_config["tyre_signal_contract"]=tyre_signal_contract;
 if(damage_policy=="event_only"||damage_policy=="event_root_v1")model_config["parameters"]={{"damage_state",{{"runtimeAccumulationScale",0.0}}}};
 if(damage_policy=="event_root_v1")model_config["dependency_contract"]="selected_event_damage_v1";
 if(lsd_torque_input_contract!="original")model_config["parameters"]["diff_lsd"]["torqueInputContract"]=lsd_torque_input_contract;
 if(windup_input_contract!="original")model_config["parameters"]["driveline_windup"]["torqueInputContract"]=windup_input_contract;
 if(damper_coefficient_contract!="original")model_config["parameters"]["damper_model"]["coefficientInputContract"]=damper_coefficient_contract;
 if(spring_base_contract!="original")model_config["parameters"]["progressive_spring"]["baseRateInputContract"]=spring_base_contract;
 if(suspension_travel_contract!="original")model_config["parameters"]["suspension"]["travelPublicationContract"]=suspension_travel_contract;
 if(chassis_temperature_contract!="original")model_config["parameters"]["chassis_roll"]["brakeTemperatureInputContract"]=chassis_temperature_contract;
 if(energy_temperature_contract!="original")model_config["parameters"]["chassis_energy"]["brakeTemperatureInputContract"]=energy_temperature_contract;
 if(caster_steering_contract!="original")model_config["parameters"]["caster_effect"]["steeringInputContract"]=caster_steering_contract;
 if(inertia_temperature_contract!="original")model_config["parameters"]["virtual_inertia"]["brakeTemperatureInputContract"]=inertia_temperature_contract;
 if(flex_temperature_contract!="original")model_config["parameters"]["chassis_flex"]["brakeTemperatureInputContract"]=flex_temperature_contract;
 if(body_temperature_contract!="original")model_config["parameters"]["body_rigidity_estimator"]["brakeTemperatureInputContract"]=body_temperature_contract;
 if(damper_temperature_contract!="original")model_config["parameters"]["damper_model"]["brakeTemperatureInputContract"]=damper_temperature_contract;
 if(brake_temperature_contract!="original")model_config["parameters"]["brake_fade"]["temperatureInputContract"]=brake_temperature_contract;
 if(drivetrain_gear_contract!="original")model_config["parameters"]["drivetrain"]["gearInputContract"]=drivetrain_gear_contract;
 if(hop_input_contract!="original")model_config["parameters"]["tire_hop"]["drivetrainInputContract"]=hop_input_contract;
 if(lsd_configuration_contract!="original")model_config["parameters"]["diff_lsd"]["configurationInputContract"]=lsd_configuration_contract;
 std::string model_configuration=model_config.dump();
 auto drive_components=reinterpret_cast<decltype(&ngpd_extract_model_components)>(GetProcAddress(dll,"ngpd_extract_model_components"));
 auto tyre_shadow_reader=symbol<AsyncModels::TyreShadowReader>(dll,"ngp2_tyre_reference_shadow");
 AsyncModels::VehicleConfigurationProvider configuration_provider;
 if(vehicle_config_contract=="unpacked_ini_observe_v1")configuration_provider=[ac_root,damper_coefficient_contract](const std::string& id){
  auto reference=ngp::load_vehicle_car_configuration(ac_root,id);
  if(damper_coefficient_contract!="original")for(const char* axle:{"FRONT","REAR"}){
   const auto& values=reference.at("damper_reference").at("axles").at(axle);
   for(auto it=values.begin();it!=values.end();++it)reference["car_config"][axle][it.key()]=it.value();
  }
  return reference;
 };
 AsyncModels models(root,create,destroy,step,snapshot,profile,error,effect_hint,owned_hints,configure,model_configuration,spring_hints,brake_hints,drive_hints,body_hints,damper_hints,drive_components,tyre_shadow_reader,std::move(configuration_provider));
 StatusPublisher status_publisher([&](const J& output){atomic_json(runtime/"status.json",output);});
 SetConsoleCtrlHandler(stop_handler,TRUE);HANDLE timer=CreateWaitableTimerExW(nullptr,nullptr,2,TIMER_ALL_ACCESS);
 Mapping<SPageFilePhysics> physics;Mapping<SPageFileGraphic> graphics;Mapping<SPageFileStatic> statics;
 Mapping<NgpCphysFrame> cphys;
 Mapping<Ngp4SensorFrame> sensor_mapping;CommandMailbox command_mapping;
 // Test telemetry must use a distinct bridge mailbox as well.
 if(prefix!=L"Local\\acpmf"&&worker_name==L"Local\\AcTools.CSP.Limited.ACNextGen.V4")worker_name=prefix+L".Bridge";
 command_mapping.open(worker_name+L".Command");
 Mapping<NgpeSensorFrame> enhancement_sensor_mapping;EnhancementMailbox enhancement_commands;
 Mapping<NgpbSensorFrame> brake_sensor_mapping;NgpbSensor brake_sensor{};
 Mapping<NgpBodySensorFrame> body_sensor_mapping;NgpBodySensor body_sensor{};
 DamperHostPath damper_path(worker_name);
 DamperHintMailbox damper_hints_mailbox;
 DriveLocalMailbox drive_local_mailbox;
 Mapping<NgpDriveLocalStatusFrame> drive_local_status_mapping;
 NgpDriveLocalStatus drive_local_status{};bool drive_local_fresh=false;
 uint32_t drive_local_sequence=0,drive_local_status_sequence=0;uint64_t drive_local_model_frame=0;
 auto drive_local_change=std::chrono::steady_clock::time_point{};
 WheelTorqueLocalMailbox wheel_local_mailbox;
 Mapping<NgpWheelLocalStatusFrame> wheel_local_status_mapping;
 NgpWheelLocalStatus wheel_local_status{};bool wheel_local_fresh=false;
 uint32_t wheel_local_sequence=0,wheel_local_status_sequence=0;uint64_t wheel_local_model_frame=0;
 auto wheel_local_change=std::chrono::steady_clock::time_point{};
 SpringLocalMailbox spring_local_mailbox;
 Mapping<NgpSpringLocalStatusFrame> spring_local_status_mapping;
 NgpSpringLocalStatus spring_local_status{};bool spring_local_fresh=false;
 uint32_t spring_local_sequence=0,spring_local_status_sequence=0;uint64_t spring_local_model_frame=0;
 auto spring_local_change=std::chrono::steady_clock::time_point{};
 Mapping<NgpDamperLocalStatusFrame> damper_local_status_mapping;
 NgpDamperLocalStatus damper_local_status{};bool damper_local_fresh=false;
 uint32_t damper_hint_sequence=0,damper_local_sequence=0;uint64_t damper_hint_model_frame=0;
 auto damper_local_change=std::chrono::steady_clock::time_point{};
 Mapping<NgpWheelIntervalFrame> wheel_interval_mapping;Mapping<NgpWheelMaterialFrame> wheel_material_mapping;
 Mapping<NgpWheelGeometryFrame> wheel_geometry_mapping;
 uint32_t damper_input_epoch=0,damper_input_generation=0,damper_input_sequence=0;
 auto damper_input_change=std::chrono::steady_clock::time_point{};
 bool damper_input_valid=false;
 double damper_interval_clock=0;
 ngp::DamperDisplacementReceipt wheel_material{};uint32_t material_epoch=0,material_generation=0,material_sequence=0;
 auto material_change=std::chrono::steady_clock::time_point{};
 uint32_t body_sensor_epoch=0,body_sensor_sequence=0;bool body_sensor_fresh=false;
 auto body_sensor_change=std::chrono::steady_clock::time_point{};
 ngp::BodyForceChannel body_channel;ngp::BodyMomentProfile body_moment_profile;ngp::BodyWorkProfile body_work_profile;
 ngp::BodyProfile loaded_body_profile;bool body_yaw_owner_reserved=false;
 BodyLocalMailbox body_local_mailbox;uint32_t body_local_sequence=0;uint64_t body_local_model_frame=0;bool body_local_hint_active=false;
 Mapping<NgpBodyLocalStatusFrame> body_local_status_mapping;NgpBodyLocalStatus body_local_status{};
 uint32_t body_local_status_epoch=0,body_local_status_generation=0,body_local_status_sequence=0;
 auto body_local_status_change=std::chrono::steady_clock::time_point{};bool body_local_status_fresh=false;
 ngp::DamperProfile loaded_damper_profile;
 ngp::LoadedBrakeProfile loaded_brake_profile;bool brake_profile_declared=false;
 {std::ifstream f(bin.parent_path()/"brake_profile.json",std::ios::binary);
  if(f){brake_profile_declared=true;std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
   if(raw.size()<=65536)try{loaded_brake_profile=ngp::brake_profile(J::parse(raw));}catch(...){}
  }
 }
 ngp::DriveLocalProfile loaded_drive_local_profile;bool drive_profile_declared=false;
 {std::ifstream f(bin.parent_path()/"drive_local_profile.json",std::ios::binary);
  if(f){drive_profile_declared=true;std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
   if(raw.size()<=65536)try{loaded_drive_local_profile=ngp::drive_local_profile(J::parse(raw));}catch(...){}
  }
 }
 ngp::WheelTorqueLocalProfile loaded_wheel_local_profile;bool wheel_profile_declared=false;
 {std::ifstream f(bin.parent_path()/"wheel_torque_local_profile.json",std::ios::binary);
  if(f){wheel_profile_declared=true;std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
   if(raw.size()<=65536)try{loaded_wheel_local_profile=ngp::wheel_torque_local_profile(J::parse(raw));}catch(...){}
  }
 }
 const bool wheel_profile_conflict=wheel_profile_declared&&loaded_drive_local_profile.valid;
 ngp::SpringLocalProfile loaded_spring_local_profile;
 {std::ifstream f(bin.parent_path()/"spring_local_profile.json",std::ios::binary);
  if(f){std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
   if(raw.size()<=65536)try{loaded_spring_local_profile=ngp::spring_local_profile(J::parse(raw));}catch(...){}
  }
 }
 {std::ifstream f(bin.parent_path()/"damper_profile.json",std::ios::binary);
  if(f){std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
   if(raw.size()<=65536)try{loaded_damper_profile=ngp::damper_profile(J::parse(raw));}catch(...){}
  }
 }
 {std::ifstream f(bin.parent_path()/"body_moment_profile.json",std::ios::binary);
  if(f){std::string raw;char ch;while(raw.size()<=65536&&f.get(ch))raw+=ch;
   if(raw.size()<=65536)try{auto declaration=J::parse(raw);body_yaw_owner_reserved=declaration.contains("yaw");loaded_body_profile=ngp::body_profile(declaration);}catch(...){}
  }
  if(loaded_body_profile.valid){body_moment_profile=loaded_body_profile.moment;body_work_profile=loaded_body_profile.work;}
 }
 // Independent profile certification is not installed. Storage always starts
 // empty; only completed, bounded absorption can supply later positive work.
 BodyForceMailbox body_commands;body_commands.open(worker_name+L".BodyForceCommand");
 Mapping<NgpBodyObservationFrame> body_observations;
 uint32_t body_sent=0,body_acked=0;bool body_previous_enabled=false,body_enabled=false;
 uint32_t brake_sensor_epoch=0,brake_sensor_sequence=0;
 auto brake_sensor_change=std::chrono::steady_clock::time_point{};bool brake_sensor_fresh=false;
 ngp::BrakeForceProfile brake_profile=loaded_brake_profile.force;ngp::BrakeExecution brake_execution;
 BrakeLocalMailbox brake_local_mailbox;uint32_t brake_local_sequence=0;uint64_t brake_local_model_frame=0;
 Mapping<NgpBrakeLocalStatusFrame> brake_local_status_mapping;NgpBrakeLocalStatus brake_local_status{};
 uint32_t brake_local_status_sequence=0,brake_local_status_generation=0,brake_local_status_epoch=0;
 auto brake_local_status_change=std::chrono::steady_clock::time_point{};bool brake_local_status_fresh=false;
 BrakeForceMailbox brake_force_mailbox;brake_force_mailbox.open(worker_name+L".BrakeForceCommand");
 Mapping<NgpbForceReceiptFrame> brake_receipts;
 uint32_t brake_sent=0,brake_acked=0;bool brake_previous_enabled=false,brake_force_enabled=false;
 enhancement_commands.open(worker_name+L".EnhancementCommand");
 TyreObservationMailbox tyre_observation_mailbox;uint32_t tyre_observation_sequence=0;
 std::map<std::string,uint64_t> tyre_observation_reasons;
 if(tyre_observation_capture)tyre_observation_mailbox.open(worker_name+L".TyreObservation");
 ngp::experiment::ExistingTyreHostProfile tyre_bound_profile;
 {std::ifstream f(bin.parent_path()/"config.json",std::ios::binary);
  if(f){try{J config;f>>config;tyre_bound_profile=ngp::experiment::existing_tyre_host_profile(config);}catch(...){}}}
 BoundTyreMailbox tyre_bound_mailbox;
 if(tyre_bound_profile.selected)tyre_bound_mailbox.open(worker_name+L".TyreBound");
 ngp::experiment::BoundTyreSenderChannel tyre_bound_sender(tyre_bound_mailbox);
 bool tyre_bound_published=false;
 bool tyre_bound_reference_preview_valid=false;
 ngp::experiment::BoundTyreFrame tyre_bound_reference_preview{};
 SpringHintsMailbox spring_mailbox;spring_mailbox.open(worker_name+L".SpringHints");uint32_t spring_sequence=0;
 auto spring_publish_time=std::chrono::steady_clock::time_point{};bool spring_published_active=false;
 // No spring force calibration is installed. The complete sender stays closed
 // until independently verified profile loading is implemented.
 ngp::SpringForceChannel spring_force_channel;ngp::SpringForceProfile spring_force_profile;
 SpringForceMailbox spring_force_mailbox;spring_force_mailbox.open(worker_name+L".SpringForceCommand");
 Mapping<NgpsForceReceiptFrame> spring_force_receipts;uint32_t spring_force_sent=0,spring_force_acked=0,spring_receipt_sequence=0;
 NgpeSensor enhancement_sensor{};NgpeCommand enhancement_command{};uint32_t enhancement_seq=0,enhancement_epoch=0,enhancement_sensor_seq=0;
 auto enhancement_change=std::chrono::steady_clock::now()-std::chrono::seconds(1);
 bool enhancement_fresh=false;uint32_t enhancement_rc=0;double enhancement_age=0.;NgpeHints enhancement_hints{};
 Ngp4Sensor sensor{};Ngp4Command effect{};uint32_t sensor_epoch=0,sensor_sequence=0,effect_sequence=0,bridge_generation=0;
 bool physical_requested=false,models_active=false,worker_fresh=false;
 ngp::TyreShadowClockHistory shadow_clock_history;
 auto sensor_change=std::chrono::steady_clock::now()-std::chrono::seconds(1);
 double fast_us=0.;uint32_t effect_result=0;
 uint32_t last_cphys_epoch=0,last_cphys_sequence=0;
 auto cphys_change=std::chrono::steady_clock::now()-std::chrono::seconds(1);
 std::string input_source="standard_shared_memory";
 J physics_observation=J::object();
 std::string host_id=std::to_string(GetCurrentProcessId())+"-"+std::to_string(GetTickCount64());
 bool requested=false,reset_pending=true,model_fault=false,have_command=false,damage_pause_pending=false;uint64_t frame=0,heartbeat=0,last_command=0;int32_t last_packet=0;unsigned seen_packets=0;
 std::string full_car_id,exit_reason="requested shutdown",fault_detail,last_command_body;
 double max_us=0.,last_us=0.;J values=J::object();std::string status="STOPPED",detail="Observer-only control; models start OFF",last_car;
 auto started=std::chrono::steady_clock::now(),last_change=started,last_step=started,last_write=started-std::chrono::seconds(1),last_command_poll=last_write;
 auto last_valid_command=started;
 ControlReader<J> control_reader([&]{return command(runtime/"control.json");});uint64_t control_revision=0;
 J model_manifest;{std::ifstream f(bin.parent_path()/"module_manifest.json");if(f)f>>model_manifest;}
 std::printf("ACNextGen Native V4: 51 C++ models, asynchronous model loop, common worker bridge.\n");std::fflush(stdout);
 try{while(!InterlockedCompareExchange(&stop_flag,0,0)){
  auto now=std::chrono::steady_clock::now();double elapsed=std::chrono::duration<double>(now-started).count();if(seconds>0.&&elapsed>=seconds)break;
  if(auto received=control_reader.latest();received&&received->revision!=control_revision){
   control_revision=received->revision;const J& cmd=received->value;
   bool valid=received->acquired<=now&&std::chrono::duration<double>(now-received->acquired).count()<=1.5&&cmd.is_object()&&cmd.contains("protocol")&&integer_number(cmd["protocol"],2.)&&cmd["protocol"]==2
     &&cmd.contains("host_id")&&cmd["host_id"].is_string()&&cmd["host_id"]==host_id
     &&cmd.contains("issued_at")&&integer_number(cmd["issued_at"],9007199254740991.)
     &&std::abs(double(std::time(nullptr))-cmd["issued_at"].get<double>())<=2.
     &&cmd.contains("sequence")&&integer_number(cmd["sequence"],9007199254740991.)
     &&cmd.contains("enabled")&&cmd["enabled"].is_boolean()&&cmd.contains("shutdown")&&cmd["shutdown"].is_boolean()
     &&(!cmd.contains("physical_enabled")||cmd["physical_enabled"].is_boolean())
     &&(!cmd.contains("bridge_generation")||(integer_number(cmd["bridge_generation"],2147483646.)&&cmd["bridge_generation"].get<double>()>=1));
   if(valid){uint64_t seq=cmd["sequence"].get<uint64_t>();std::string body=cmd.dump();if(seq>=last_command&&body!=last_command_body){
    bool enable=cmd["enabled"].get<bool>();
    if(!enable&&requested&&yaw_ablation.config.enabled)yaw_ablation_gate.cancel();
    if(!enable&&requested&&!cmd["shutdown"].get<bool>()&&damage_policy=="event_root_v1")damage_pause_pending=true;
    if(model_fault&&seq>last_command&&enable){model_fault=false;reset_pending=true;damage_pause_pending=false;}
    if(enable&&!requested)reset_pending=true;
    last_command=seq;last_command_body=std::move(body);requested=enable;have_command=true;last_valid_command=received->acquired;
    if(cmd.contains("car_id")&&cmd["car_id"].is_string())full_car_id=cmd["car_id"].get<std::string>();
    if(cmd.contains("bridge_generation")&&integer_number(cmd["bridge_generation"],2147483646.)){
     uint32_t next=cmd["bridge_generation"].get<uint32_t>();
     if(next!=bridge_generation){bridge_generation=next;reset_pending=true;}
    }
    // This first vehicle-data binding remains observation-only until its model
    // defaults, setup semantics and physical calibration are qualified.
    physical_requested=caster_steering_contract=="original"&&inertia_temperature_contract=="original"&&flex_temperature_contract=="original"&&energy_temperature_contract=="original"&&chassis_temperature_contract=="original"&&body_temperature_contract=="original"&&damper_temperature_contract=="original"&&damper_coefficient_contract=="original"&&spring_base_contract=="original"&&suspension_travel_contract=="original"&&brake_temperature_contract=="original"&&drivetrain_gear_contract=="original"&&vehicle_config_contract=="original"&&lsd_torque_input_contract=="original"&&windup_input_contract=="original"&&hop_input_contract=="original"&&cmd.value("physical_enabled",false)&&ngp::tyre_response_request_matches(cmd,tyre_response_contract)&&ngp::tyre_signal_request_matches(cmd,tyre_signal_contract)&&
      ((!cmd.contains("damper_input_contract")&&damper_input_contract=="original")||
       (cmd.contains("damper_input_contract")&&cmd["damper_input_contract"].is_string()&&cmd["damper_input_contract"].get<std::string>()==damper_input_contract))&&
      ((!cmd.contains("carcass_input_contract")&&carcass_input_contract=="original")||
       (cmd.contains("carcass_input_contract")&&cmd["carcass_input_contract"].is_string()&&cmd["carcass_input_contract"].get<std::string>()==carcass_input_contract));
    if(cmd["shutdown"].get<bool>())InterlockedExchange(&stop_flag,1);
   }}
   // A partial control-file write is not a Stop. Only a valid Stop or lease
   // expiry changes the request. The host never trusts a stale command.
  }
  double lease_age=std::chrono::duration<double>(now-last_valid_command).count();
  if(InterlockedCompareExchange(&stop_flag,0,0))break;
  if(have_command&&lease_age>1.5){requested=false;damage_pause_pending=false;}
  if(session_managed&&lease_age>(have_command?3.:5.)){exit_reason="observer lease expired";break;}
  bool ready=physics.open((prefix+L"_physics").c_str())&&graphics.open((prefix+L"_graphics").c_str())&&statics.open((prefix+L"_static").c_str());
  SPageFilePhysics p{};SPageFileGraphic g{};SPageFileStatic st{};bool coherent=false;
  if(ready){for(int retry=0;retry<3;++retry){int32_t before=physics.data->packetId;MemoryBarrier();std::memcpy(&p,physics.data,sizeof p);std::memcpy(&g,graphics.data,sizeof g);std::memcpy(&st,statics.data,sizeof st);MemoryBarrier();if(before==physics.data->packetId&&p.packetId==before){coherent=true;break;}}}
  if(coherent&&p.packetId!=last_packet){last_packet=p.packetId;last_change=now;++seen_packets;}
  bool fresh=coherent&&std::chrono::duration<double>(now-last_change).count()<=.2&&seen_packets>0;
  Ngp4Sensor latest{};bool sensor_valid=sensor_mapping.open((worker_name+L".Sensor").c_str())&&bridge_read(sensor_mapping.data,latest);
  if(sensor_valid){sensor=latest;if(sensor.epoch!=sensor_epoch||sensor.sequence!=sensor_sequence){
   if(sensor.epoch!=sensor_epoch)effect_sequence=0;
   sensor_epoch=sensor.epoch;sensor_sequence=sensor.sequence;sensor_change=now;
  }}
  std::string shared_id=narrow(st.carModel,33),identity=car_identity(full_car_id,shared_id)?full_car_id:shared_id;
  uint32_t identity_hash=bridge_car_hash(identity);
  worker_fresh=sensor_valid&&std::chrono::duration<double>(now-sensor_change).count()<=.03&&
   sensor.car_hash==identity_hash&&sensor.generation==bridge_generation&&car_identity(full_car_id,shared_id);
  const bool shadow_clock_monotonic=shadow_clock_history.observe(worker_fresh,sensor.epoch,identity_hash,sensor.clock);
  const bool shadow_input_ready=worker_fresh&&shadow_clock_monotonic&&(sensor.flags&0xf0000u)==0xf0000u;
  bool model_ready=ready&&fresh&&g.status==2&&requested&&!model_fault;
  if(!ready||!fresh||g.status!=2||model_fault)damage_pause_pending=false;
  if(!model_ready&&models_active){models.cancel();reset_pending=true;models_active=false;}
  if(!ready){status="WAITING_FOR_AC";detail="Original AC read-only shared memory not available";}
  else if(!fresh){status="STALE_TELEMETRY";detail="No fresh telemetry; native models paused";}
  else if(g.status!=2){status="PAUSED_OR_REPLAY";detail="AC must be live";}
  else if(model_fault){status="MODEL_ERROR";detail=fault_detail;}
  else if(!requested){status="STOPPED";detail="Models paused; use Resume";}
  else{
   status="RUNNING_NATIVE_MODELS";detail="51 compiled C++ models / common Worker additional-effect route";models_active=true;
    // This semantics-preserving first port is NOT a 333 Hz actuator yet.
    if(std::chrono::duration<double>(now-last_step).count()>=1./20.&&
       (!tyre_shadow_reader||shadow_input_ready)){
    double dt=std::chrono::duration<double>(now-last_step).count();last_step=now;
    std::string id=identity;bool reset=id!=last_car||reset_pending;
    bool preserve_damage=reset&&damage_pause_pending&&id==last_car;
    if(reset){last_car=id;dt=1./60.;reset_pending=false;damage_pause_pending=false;}
    dt=std::min(dt,.1);
    J c=vehicle(p,st);c["isInPit"]=g.isInPit==1;input_source="standard_shared_memory";physics_observation=J::object();
    c["id"]=id;
    if(id=="wdts_nissan_silvia_s14_acnextgen_native_test"&&car_identity(full_car_id,shared_id)&&cphys.open(cphys_name.c_str())){
     uint32_t before=cphys.data->commit;MemoryBarrier();NgpCphysFrame sample{};std::memcpy(&sample,cphys.data,sizeof sample);MemoryBarrier();
     bool valid=before>0&&!(before&1)&&before==cphys.data->commit&&before==sample.commit&&sample.packet.abi==2
       &&sample.packet.epoch&&sample.packet.sequence*2==before&&sample.packet.valid_mask==1
       &&std::isfinite(sample.packet.dt)&&sample.packet.dt>0&&sample.packet.dt<=.1
       &&std::isfinite(sample.packet.clock)&&sample.checksum==cphys_checksum(sample.packet);
     for(double v:sample.packet.car)valid=valid&&std::isfinite(v);
     for(auto& w:sample.packet.wheel)for(double v:w)valid=valid&&std::isfinite(v);
     if(valid&&(sample.packet.epoch!=last_cphys_epoch||sample.packet.sequence!=last_cphys_sequence)){
      last_cphys_epoch=sample.packet.epoch;last_cphys_sequence=sample.packet.sequence;cphys_change=now;}
     if(valid&&std::chrono::duration<double>(now-cphys_change).count()<=.2){
      const auto& v=sample.packet.car;c["speedKmh"]=v[0];c["speedMs"]=v[0]/3.6;c["rpm"]=v[1];c["gas"]=v[2];c["brake"]=v[3];c["clutch"]=v[4];c["steer"]=v[5];c["gear"]=v[6]-1;
      c["gForces"]={{"x",v[7]},{"y",v[8]},{"z",v[9]}};c["localVelocity"]={{"x",v[10]},{"y",v[11]},{"z",v[12]}};
      c["localAngularVelocity"]={{"x",v[13]},{"y",v[14]},{"z",v[15]}};c["engineTorque"]=v[16];
      for(unsigned i=0;i<4;++i){auto& w=c["wheels"][std::to_string(i)];const auto& a=sample.packet.wheel[i];w["angularSpeed"]=a[0];w["slipAngle"]=a[1];w["slipRatio"]=a[2];w["load"]=a[3];w["suspensionTravel"]=a[4];w["damperSpeed"]=a[5];w["nativeFx"]=a[6];w["nativeFy"]=a[7];w["nativeMz"]=a[8];}
      input_source="cphys_packet";
      c["acceleration_contract"]["source"]="cphys_unqualified";
      physics_observation={{"sequence",sample.packet.sequence},{"clock",sample.packet.clock},{"capture_dt",sample.packet.dt},
        {"fl_fx",sample.packet.wheel[0][6]},{"fl_fy",sample.packet.wheel[0][7]},{"fl_mz",sample.packet.wheel[0][8]},
        {"fl_slip_angle",sample.packet.wheel[0][1]},{"fl_slip_ratio",sample.packet.wheel[0][2]}};
     }
    }
    if(worker_fresh){
     for(unsigned i=0;i<4;++i){auto& w=c["wheels"][std::to_string(i)];w["angularSpeed"]=sensor.wheel_omega[i];
      if(sensor.flags&(1u<<(16+i))){const auto& a=sensor.wheel[i];
       w["slipAngle"]=a[0];w["slipRatio"]=a[1];w["load"]=a[2];w["suspensionTravel"]=a[3];w["camber"]=a[4];
       w["nativeFx"]=a[5];w["nativeFy"]=a[6];w["nativeMz"]=a[7];}
     }
     input_source="common_worker";
     physics_observation={{"sequence",sensor.sequence},{"clock",sensor.clock},{"capture_dt",sensor.dt},
      {"wheel_supplement_rate","render"},{"body_sample_rate","physics"},{"fl_fx",sensor.wheel[0][5]},
      {"fl_fy",sensor.wheel[0][6]},{"fl_mz",sensor.wheel[0][7]},{"fl_slip_angle",sensor.wheel[0][0]}};
    }
    if(tyre_shadow_reader&&worker_fresh&&shadow_clock_monotonic){
        c["ngp_reference_context"]={{"schema",1},{"epoch",sensor.epoch},{"generation",bridge_generation},
            {"car_hash",identity_hash},{"source_sequence",sensor.sequence},{"worker_clock",sensor.clock}};
    }
    models.submit(c.dump(),dt,id,reset,bridge_generation,identity_hash,worker_fresh?sensor.clock:-1,worker_fresh?sensor.epoch:0,preserve_damage);
   }
  }
  double risk=0.,authority=0.,model_age=0.;bool hint_valid=false;
  models.fast_hint(risk,authority,model_age,hint_valid,bridge_generation,identity_hash);
  auto fast_start=std::chrono::steady_clock::now();
  enhancement_fresh=false;
  body_sensor_fresh=false;body_sensor={};
  double body_candidate_age=0.;
  bool body_candidate_coherent=false,body_candidate_valid=false;
  if(body_sensor_mapping.open((worker_name+L".BodySensor").c_str())){
   auto mapped=body_sensor_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();
   NgpBodySensorFrame sample{};std::memcpy(&sample,mapped,sizeof sample);MemoryBarrier();
   body_candidate_age=sensor.clock-sample.packet.clock;
   const bool coherent=token&&!(token&1)&&token==mapped->commit&&token==sample.commit&&sample.packet.sequence*2==token&&
       sample.checksum==ngp4_checksum(&sample.packet,sizeof sample.packet);
   body_candidate_coherent=coherent;
   body_candidate_valid=coherent&&ngp::body_sensor_valid(sample.packet,sensor.epoch,bridge_generation,identity_hash,sensor.clock-sample.packet.clock);
   if(body_candidate_valid){
    if(sample.packet.epoch!=body_sensor_epoch||sample.packet.sequence>body_sensor_sequence){
     body_sensor_epoch=sample.packet.epoch;body_sensor_sequence=sample.packet.sequence;body_sensor_change=now;
    }
    body_sensor_fresh=worker_fresh&&requested&&sample.packet.sequence==body_sensor_sequence&&
        std::chrono::duration<double>(now-body_sensor_change).count()<=.02;
    if(body_sensor_fresh)body_sensor=sample.packet;
   }
  }
  const bool yaw_parent_allowed=!body_yaw_owner_reserved&&worker_fresh&&model_ready&&hint_valid&&physical_requested;
  // Only immutable build metadata is retained from this separate stream.
  // Never use a future/stale body pose or velocity to authorize yaw dynamics.
  if(yaw_ablation.config.enabled&&body_sensor_fresh){
      if(yaw_patch_epoch==sensor.epoch&&yaw_patch_generation==bridge_generation&&yaw_patch_car==identity_hash&&
          yaw_patch_code&&yaw_patch_code!=body_sensor.patch_code)yaw_patch_changed=true;
      yaw_patch_epoch=sensor.epoch;yaw_patch_generation=bridge_generation;
      yaw_patch_car=identity_hash;yaw_patch_code=body_sensor.patch_code;
  }
  const bool yaw_metadata_ready=!yaw_patch_changed&&yaw_patch_epoch==sensor.epoch&&
      yaw_patch_generation==bridge_generation&&yaw_patch_car==identity_hash&&
      yaw_patch_code==yaw_ablation.config.patch_code;
  bool yaw_ready=yaw_parent_allowed&&(sensor.flags&15)==15&&!sensor.fault_code&&yaw_metadata_ready&&
      full_car_id==yaw_ablation.car_id;
  double yaw_speed2=0.;for(double v:sensor.linear_velocity)yaw_speed2+=v*v;
  if(!yaw_ablation_gate.started()&&(!std::isfinite(yaw_speed2)||yaw_speed2<9.))yaw_ready=false;
  ngp::experiment::YawAblationSample yaw_sample{sensor.epoch,bridge_generation,identity_hash,
      yaw_patch_code,sensor.sequence,sensor.clock,yaw_ready,yaw_parent_allowed};
  if(!yaw_ablation.config.enabled||yaw_ablation_gate.started()||yaw_ablation_gate.cancelled()||yaw_ready)
      yaw_ablation_decision=yaw_ablation_gate.update(yaw_sample);
  if(yaw_ablation.config.enabled&&yaw_ablation_decision.cancelled&&yaw_ablation_rejection.is_null())
      yaw_ablation_rejection={{"body_fresh",body_sensor_fresh},{"body_candidate_age",body_candidate_age},
          {"body_coherent",body_candidate_coherent},{"body_valid",body_candidate_valid},
          {"parent_allowed",yaw_parent_allowed},{"sensor_flags",sensor.flags},{"sensor_clock",sensor.clock},
          {"body_patch",body_sensor.patch_code},{"full_car_id",full_car_id},{"worker_fresh",worker_fresh},
          {"hint_valid",hint_valid},{"model_ready",model_ready},
          {"sensor_read_valid",sensor_valid},{"sensor_age_seconds",std::chrono::duration<double>(now-sensor_change).count()},
          {"sensor_fault",sensor.fault_code},{"sensor_epoch",sensor.epoch},{"sensor_sequence",sensor.sequence},
          {"sensor_generation",sensor.generation},{"expected_generation",bridge_generation},
          {"sensor_car_hash",sensor.car_hash},{"expected_car_hash",identity_hash},
          {"car_identity_valid",car_identity(full_car_id,shared_id)},
          {"metadata_ready",yaw_metadata_ready},{"metadata_changed",yaw_patch_changed}};
  effect_result=compute_effect(&sensor,risk,authority,model_age,bridge_generation,
      yaw_parent_allowed&&yaw_ablation_decision.output_allowed,&effect);
  if(effect_sequence>=1073741822)throw std::runtime_error("Bridge sequence exhausted");
  effect.sequence=++effect_sequence;command_mapping.publish(effect);
  const bool non_yaw_physical_requested=physical_requested&&!yaw_ablation.config.enabled;
  wheel_material={};
  if(wheel_material_capture&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15&&!sensor.fault_code&&
     wheel_interval_mapping.open((worker_name+L".WheelIntervalSensor").c_str())&&
     wheel_material_mapping.open((worker_name+L".WheelMaterialSensor").c_str())){
   auto wm=wheel_material_mapping.data;auto wi=wheel_interval_mapping.data;
   uint32_t mb=wm->commit,wb=wi->commit;MemoryBarrier();
   NgpWheelMaterialFrame m{};NgpWheelIntervalFrame w{};std::memcpy(&m,wm,sizeof m);std::memcpy(&w,wi,sizeof w);MemoryBarrier();
   auto candidate=ngp::wheel_material_sample(m,mb,wm->commit,w,wb,wi->commit,sensor.epoch,bridge_generation,identity_hash,m.packet.patch_code,sensor.clock-m.packet.clock_after);
   if(candidate.mask){
    if(candidate.epoch!=material_epoch||candidate.generation!=material_generation||candidate.sequence>material_sequence){
     material_epoch=candidate.epoch;material_generation=candidate.generation;material_sequence=candidate.sequence;material_change=now;
    }
    if(candidate.sequence==material_sequence&&std::chrono::duration<double>(now-material_change).count()<=.003001)wheel_material=candidate;
   }
  }
  brake_sensor_fresh=false;brake_sensor={};
  if(brake_sensor_mapping.open((worker_name+L".BrakeSensor").c_str())){
   auto mapped=brake_sensor_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();
   NgpbSensorFrame sample{};std::memcpy(&sample,mapped,sizeof sample);MemoryBarrier();
   bool valid=token&&!(token&1)&&token==mapped->commit&&sample.commit==token&&sample.packet.sequence*2==token&&
       sample.checksum==ngp4_checksum(&sample.packet,sizeof sample.packet);
   if(valid){
    if(sample.packet.epoch!=brake_sensor_epoch||sample.packet.sequence>brake_sensor_sequence){
     brake_sensor_epoch=sample.packet.epoch;brake_sensor_sequence=sample.packet.sequence;brake_sensor_change=now;
    }
    brake_sensor_fresh=worker_fresh&&requested&&sample.packet.sequence==brake_sensor_sequence&&
       std::chrono::duration<double>(now-brake_sensor_change).count()<=.02&&
       ngp::brake_sensor_valid(sample.packet,sensor.epoch,bridge_generation,identity_hash,sensor.clock-sample.packet.clock);
    if(brake_sensor_fresh)brake_sensor=sample.packet;
   }
  }
  if(enhancement_sensor_mapping.open((worker_name+L".EnhancementSensor").c_str())){
   auto mapped=enhancement_sensor_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();
   NgpeSensorFrame sample{};std::memcpy(&sample,mapped,sizeof sample);MemoryBarrier();
   bool valid=token&&!(token&1)&&token==mapped->commit&&sample.commit==token&&sample.packet.sequence*2==token&&
     sample.packet.abi==NGPE_ABI&&sample.packet.epoch&&sample.checksum==ngp4_checksum(&sample.packet,sizeof sample.packet);
   if(valid){
    if(sample.packet.epoch!=enhancement_epoch||sample.packet.sequence!=enhancement_sensor_seq){
     if(sample.packet.epoch!=enhancement_epoch)enhancement_seq=0;
     enhancement_epoch=sample.packet.epoch;enhancement_sensor_seq=sample.packet.sequence;enhancement_change=now;
    }
    enhancement_sensor=sample.packet;
    enhancement_fresh=worker_fresh&&sample.packet.epoch==sensor.epoch&&sample.packet.generation==bridge_generation&&
      sample.packet.car_hash==identity_hash&&std::chrono::duration<double>(now-enhancement_change).count()<=.02&&sample.packet.fault==0;
   }
  }
  bool owned_valid=models.fast_owned(enhancement_hints,enhancement_age,bridge_generation,identity_hash);
  ngp::TyreLocalExpected tyre_bound_context;
  tyre_bound_context.epoch=enhancement_sensor.epoch;tyre_bound_context.generation=bridge_generation;
  tyre_bound_context.car_hash=identity_hash;tyre_bound_context.patch_code=body_sensor.patch_code;
  tyre_bound_context.current_sensor_sequence=enhancement_sensor.sequence;tyre_bound_context.clock=enhancement_sensor.clock;
  tyre_bound_context.evidence_id=20261014;tyre_bound_context.effect_id=NGP_TYRE_LOCAL_EXISTING_EFFECT;
  tyre_bound_context.profile_verified=tyre_bound_profile.matches(full_car_id,body_sensor.patch_code)&&body_sensor_fresh;
  tyre_bound_reference_preview={};tyre_bound_reference_preview_valid=false;
  if(tyre_bound_profile.source=="reference_observe"){
   // No physical conversion qualification is inferred from the existing body
   // API profile. Reserve the old route, clear its mailbox, and inspect only.
   tyre_bound_sender.stop();tyre_bound_published=false;
   if(requested&&model_ready&&worker_fresh&&enhancement_fresh&&
      non_yaw_physical_requested&&(sensor.flags&15)==15)
    tyre_bound_reference_preview_valid=ngp::experiment::bound_tyre_from_model(models,
      tyre_bound_context,enhancement_sensor,1,compute_enhancement,tyre_bound_reference_preview,
      ngp::experiment::BoundTyreModelSource::reference_candidate);
  }else{
   tyre_bound_published=tyre_bound_sender.update(models,tyre_bound_context,enhancement_sensor,
    requested&&model_ready,worker_fresh&&enhancement_fresh,tyre_bound_profile.selected,
    non_yaw_physical_requested&&(sensor.flags&15)==15,compute_enhancement);
  }
  if(tyre_observation_capture){
   std::array<double,4> coefficients{};uint32_t mask=0;uint64_t model_frame=0;double model_clock=-1.,age=0.;
   ngp::TyreObservationFrame packet{};
   const ngp::TyreObservationContext context{enhancement_sensor.epoch,bridge_generation,identity_hash,
       enhancement_sensor.sequence,enhancement_sensor.clock};
   const char* reason=!worker_fresh?"worker_stale":!requested?"not_requested":!model_ready?"model_not_ready":
       !enhancement_fresh?"enhancement_stale":"available";
   const bool available=worker_fresh&&requested&&model_ready&&enhancement_fresh&&
       models.fast_owned_tyre(coefficients,mask,model_frame,model_clock,age,bridge_generation,identity_hash,
          enhancement_sensor.epoch,enhancement_sensor.clock,&reason);
   if(available){
    if(tyre_observation_sequence>=1073741822u)reason="sequence_exhausted";
    else if(!ngp::make_tyre_observation(context,++tyre_observation_sequence,model_frame,enhancement_sensor.clock,
          model_clock,mask,coefficients,packet))reason="packet_invalid";
    else if(!tyre_observation_mailbox.publish(packet,context))reason="publish_failed";
   }
   if(std::strcmp(reason,"available")!=0)tyre_observation_mailbox.cancel();
   ++tyre_observation_reasons[reason];
  }
  // Reserve additional suspension damping for one owner, even when its
  // current sample cannot produce a command. Never substitute legacy damping.
  const bool damper_owner_selected=loaded_damper_profile.valid&&loaded_damper_profile.car_id==full_car_id&&
      loaded_damper_profile.residual.car_hash==identity_hash;
  enhancement_rc=compute_enhancement(&enhancement_sensor,&enhancement_hints,enhancement_age,bridge_generation,
      enhancement_fresh&&model_ready&&owned_valid&&non_yaw_physical_requested?((damper_owner_selected?6u:7u)&((wheel_profile_declared||brake_profile_declared)?~4u:~0u)&(tyre_bound_profile.selected?~2u:~0u)):0,&enhancement_command);
  if(enhancement_seq>=1073741822)throw std::runtime_error("Enhancement sequence exhausted");
  enhancement_command.sequence=++enhancement_seq;enhancement_commands.publish(enhancement_command);
  NgpsHintsPacket spring_packet{};spring_packet.abi=NGPS_ABI;spring_packet.hints.abi=NGPS_ABI;
  spring_packet.epoch=sensor.epoch;spring_packet.generation=bridge_generation;spring_packet.car_hash=identity_hash;
  spring_packet.source_clock=std::isfinite(sensor.clock)?sensor.clock:0.;
  NgpsModelHints candidate{};double candidate_age=0.;
  const bool candidate_valid=models.fast_spring(candidate,candidate_age,bridge_generation,identity_hash);
  spring_packet.model_age=std::isfinite(candidate_age)?std::clamp(candidate_age,0.,1000.):1000.;
  if(worker_fresh&&model_ready&&requested&&candidate_valid){spring_packet.hints=candidate;spring_packet.flags=1;}
  const bool spring_active=spring_packet.flags==1;
  const bool spring_local_owner_selected=loaded_spring_local_profile.valid&&loaded_spring_local_profile.car_id==full_car_id&&loaded_spring_local_profile.spring.car_hash==identity_hash;
  const bool spring_force_enabled=!spring_local_owner_selected&&non_yaw_physical_requested&&requested&&model_ready&&enhancement_fresh&&candidate_valid&&
      spring_force_profile.ready(identity_hash);
  if(!spring_force_enabled){if(spring_force_channel.referenced()||spring_force_channel.waiting())spring_force_channel.reset();}
  else{
   if(!spring_force_receipts.data)spring_force_receipts.open((worker_name+L".SpringForceReceipt").c_str());
   if(spring_force_receipts.data){
    const auto* mapped=spring_force_receipts.data;uint32_t token=mapped->commit;MemoryBarrier();
    NgpsForceReceiptFrame received{};std::memcpy(&received,mapped,sizeof received);MemoryBarrier();
    if(token&&!(token&1)&&token==mapped->commit&&token==received.commit&&token==received.packet.sequence*2&&
       received.packet.sequence>spring_receipt_sequence&&received.checksum==ngp4_checksum(&received.packet,sizeof received.packet)){
     const auto& receipt=received.packet;
     if(std::isfinite(receipt.clock)&&receipt.clock<=enhancement_sensor.clock+.003001){
      if(spring_force_channel.acknowledge(receipt,std::max(enhancement_sensor.clock,receipt.clock)))++spring_force_acked;
      spring_receipt_sequence=receipt.sequence;
     }
    }
   }
   double spring_sensor_age=std::chrono::duration<double>(now-enhancement_change).count();
   if(!spring_force_channel.referenced()){
    bool stationary=p.gear==1&&p.gas<=.001&&std::abs(p.steerAngle)<=.001;
    spring_force_channel.begin_reference(enhancement_sensor,spring_sensor_age,spring_force_profile,stationary);
   }
   auto force_command=spring_force_channel.prepare(enhancement_sensor,spring_sensor_age,candidate,candidate_age,spring_force_profile,true);
   if(force_command.mask){spring_force_mailbox.publish(force_command);++spring_force_sent;}
  }
  if(spring_active!=spring_published_active||std::chrono::duration<double>(now-spring_publish_time).count()>=.05){
   if(spring_sequence>=1073741822)throw std::runtime_error("Spring hints sequence exhausted");
   spring_packet.sequence=++spring_sequence;spring_mailbox.publish(spring_packet);
   spring_publish_time=now;spring_published_active=spring_active;
  }
  NgpbModelHints brake_hint{};double brake_model_age=0.;
  const bool brake_model_valid=models.fast_brake(brake_hint,brake_model_age,bridge_generation,identity_hash);
  const bool brake_context_ready=ngp::brake_profile_context_ready(loaded_brake_profile,full_car_id,identity_hash,body_sensor.patch_code,
      body_sensor_fresh&&body_sensor.epoch==sensor.epoch&&body_sensor.generation==bridge_generation&&body_sensor.car_hash==identity_hash,
      wheel_profile_declared||drive_profile_declared);
  brake_force_enabled=!loaded_brake_profile.local_execution&&brake_context_ready&&non_yaw_physical_requested&&requested&&model_ready&&brake_sensor_fresh&&brake_model_valid;
  // Receipt ownership outlives a transient missing model/sensor sample.
  // Retain only immutable context metadata; fresh physical input remains
  // mandatory for every new command. Explicit Stop still cancels pending work.
  const bool brake_session_allowed=!loaded_brake_profile.local_execution&&non_yaw_physical_requested&&requested&&worker_fresh&&(sensor.flags&15)==15&&
      ngp::brake_profile_context_ready(loaded_brake_profile,full_car_id,identity_hash,body_sensor.patch_code,
       body_sensor.epoch==sensor.epoch&&body_sensor.generation==bridge_generation&&body_sensor.car_hash==identity_hash,
       wheel_profile_declared||drive_profile_declared);
  brake_force_enabled=brake_force_enabled&&brake_session_allowed;
  if(!brake_session_allowed){
   brake_execution.stop();
   if(brake_previous_enabled)brake_force_mailbox.publish(NgpbForceCommand{});
  }else{
   brake_execution.begin(sensor.epoch,bridge_generation,identity_hash);
   if(brake_receipts.open((worker_name+L".BrakeForceReceipt").c_str())){
    auto mapped=brake_receipts.data;uint32_t token=mapped->commit;MemoryBarrier();
    NgpbForceReceiptFrame received{};std::memcpy(&received,mapped,sizeof received);MemoryBarrier();
    if(token&&!(token&1)&&token==mapped->commit&&token==received.commit&&received.packet.sequence*2==token&&
       received.checksum==ngp4_checksum(&received.packet,sizeof received.packet)&&
       std::isfinite(received.packet.clock)&&received.packet.clock<=brake_sensor.clock+.003001){
     if(brake_execution.acknowledge(received.packet,std::max(brake_sensor.clock,received.packet.clock)))++brake_acked;
    }
   }
   brake_execution.expire(std::max(sensor.clock,brake_sensor.clock));
   if(brake_force_enabled){
   const double age=std::chrono::duration<double>(now-brake_sensor_change).count();
   auto proposal=ngp::brake_force_candidate(brake_sensor,brake_hint,age,brake_model_age,sensor.epoch,bridge_generation,identity_hash,brake_profile,true);
   auto command=brake_execution.prepare(proposal,brake_sensor.clock);
   if(command.mask){brake_force_mailbox.publish(command);++brake_sent;}
   }
  }
  brake_previous_enabled=brake_force_enabled;
  const bool brake_local_enabled=loaded_brake_profile.local_execution&&brake_context_ready&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15;
  if(!brake_local_enabled)brake_local_mailbox.publish({});
  else{
   NgpbModelHints hints{};double age=0,source_clock=-1;uint32_t source_epoch=0;uint64_t model_frame=0;
   bool valid=models.fast_brake(hints,age,bridge_generation,identity_hash,&source_clock,&source_epoch,&model_frame)&&
       age<=loaded_brake_profile.model_hold_seconds&&source_epoch==sensor.epoch&&std::isfinite(source_clock)&&source_clock>=0&&source_clock<=sensor.clock&&
       sensor.clock-source_clock<=loaded_brake_profile.model_hold_seconds&&hints.abi==1&&hints.valid_mask==15&&!hints.units_qualified&&!hints.reserved;
   for(unsigned i=0;i<4;++i)valid=valid&&std::isfinite(hints.friction_ratio[i])&&hints.friction_ratio[i]>=0&&hints.friction_ratio[i]<=1&&std::isfinite(hints.lock_ratio[i])&&hints.lock_ratio[i]>=0&&hints.lock_ratio[i]<=1;
   if(valid&&model_frame!=brake_local_model_frame){
    if(brake_local_sequence>=1073741822)throw std::runtime_error("Brake local hint sequence exhausted");
    NgpBrakeLocalHint hint{};hint.abi=1;hint.epoch=sensor.epoch;hint.sequence=++brake_local_sequence;hint.generation=bridge_generation;
    hint.car_hash=identity_hash;hint.patch_code=loaded_brake_profile.patch_code;hint.valid_mask=15;hint.evidence_id=brake_profile.evidence_id;hint.source_clock=source_clock;
    for(unsigned i=0;i<4;++i)hint.ratio[i]=hints.friction_ratio[i];
    brake_local_mailbox.open(worker_name+L".BrakeLocalHint");brake_local_mailbox.publish(hint);brake_local_model_frame=model_frame;
   }else if(!valid)brake_local_mailbox.publish({});
  }
  brake_local_status_fresh=false;
  if(loaded_brake_profile.valid&&loaded_brake_profile.local_execution&&brake_local_status_mapping.open((worker_name+L".BrakeLocalStatus").c_str())){
   auto mapped=brake_local_status_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();NgpBrakeLocalStatusFrame frame{};std::memcpy(&frame,mapped,sizeof frame);MemoryBarrier();const auto& q=frame.packet;
   if(token&&!(token&1)&&token==mapped->commit&&token==frame.commit&&q.sequence*2==token&&frame.checksum==ngp4_checksum(&q,sizeof q)&&
      ngp::brake_local_status_valid(q,sensor.epoch,bridge_generation,identity_hash,loaded_brake_profile.patch_code,brake_profile.evidence_id,sensor.clock)){
    if(q.epoch!=brake_local_status_epoch||q.generation!=brake_local_status_generation){brake_local_status_sequence=0;brake_local_status_epoch=q.epoch;brake_local_status_generation=q.generation;}
    if(q.sequence>brake_local_status_sequence){brake_local_status_sequence=q.sequence;brake_local_status_change=now;}
    if(q.sequence==brake_local_status_sequence&&std::chrono::duration<double>(now-brake_local_status_change).count()<=.02){brake_local_status=q;brake_local_status_fresh=true;}
   }
  }
  NgpBodyModelHints body_hint{};double body_model_age=0,body_model_source_clock=-1;uint32_t body_model_source_epoch=0;uint64_t body_model_frame=0;
  const bool body_model_valid=models.fast_body(body_hint,body_model_age,bridge_generation,identity_hash,&body_model_source_clock,&body_model_source_epoch,&body_model_frame);
  const bool body_local_enabled=loaded_body_profile.valid&&loaded_body_profile.local_execution&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&
      (sensor.flags&15)==15&&loaded_body_profile.car_id==full_car_id&&body_sensor_fresh&&body_moment_profile.ready(identity_hash,body_sensor.patch_code);
  bool body_local_valid=body_local_enabled&&body_model_valid&&body_hint.abi==1&&body_hint.valid==1&&!body_hint.units_qualified&&!body_hint.reserved&&
      body_model_source_epoch==sensor.epoch&&std::isfinite(body_model_source_clock)&&body_model_source_clock>=0&&body_model_source_clock<=sensor.clock&&
      sensor.clock-body_model_source_clock<=loaded_body_profile.model_hold_seconds&&body_model_age<=loaded_body_profile.model_hold_seconds;
  ngp::BodyMomentCandidate local_moment;
  if(body_local_valid){
   ngp::BodyModelCandidate model;model.valid=true;for(unsigned i=0;i<4;++i)model.normalized[i]=body_hint.normalized[i];
   local_moment=ngp::body_model_candidate(model,body_moment_profile,identity_hash,body_sensor.patch_code,body_model_age,{});
   body_local_valid=local_moment.valid;
  }
  if(body_local_valid&&(!body_local_hint_active||body_local_model_frame!=body_model_frame)){
   if(body_local_sequence>=1073741822)throw std::runtime_error("Body local hint sequence exhausted");
   NgpBodyLocalHint hint{};hint.abi=1;hint.epoch=sensor.epoch;hint.sequence=++body_local_sequence;hint.generation=bridge_generation;hint.car_hash=identity_hash;
   hint.patch_code=body_sensor.patch_code;hint.valid_mask=7;hint.evidence_id=body_moment_profile.evidence_id;hint.source_clock=body_model_source_clock;
   hint.roll_moment_nm=local_moment.roll_nm;hint.pitch_moment_nm=local_moment.pitch_nm;hint.yaw_moment_nm=local_moment.yaw_nm;
   body_local_mailbox.open(worker_name+L".BodyLocalHint");body_local_mailbox.publish(hint);body_local_model_frame=body_model_frame;body_local_hint_active=true;
  }else if(!body_local_valid){body_local_mailbox.publish({});body_local_hint_active=false;}
  // A temporarily unavailable sample blocks new sends, but must not discard
  // the receipt of a command already applied. Hard Stop still cancels it.
  body_local_status_fresh=false;
  if(loaded_body_profile.valid&&loaded_body_profile.local_execution&&body_local_status_mapping.open((worker_name+L".BodyLocalStatus").c_str())){
   auto mapped=body_local_status_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();NgpBodyLocalStatusFrame frame{};std::memcpy(&frame,mapped,sizeof frame);MemoryBarrier();const auto& q=frame.packet;
   if(token&&!(token&1)&&token==mapped->commit&&token==frame.commit&&q.sequence*2==token&&frame.checksum==ngp4_checksum(&q,sizeof q)&&
      ngp::body_local_status_valid(q,sensor.epoch,bridge_generation,identity_hash,body_moment_profile.patch_code,body_moment_profile.evidence_id,sensor.clock,body_moment_profile.storage_capacity_j)){
    if(q.epoch!=body_local_status_epoch||q.generation!=body_local_status_generation){body_local_status_sequence=0;body_local_status_epoch=q.epoch;body_local_status_generation=q.generation;}
    if(q.sequence>body_local_status_sequence){body_local_status_sequence=q.sequence;body_local_status_change=now;}
    if(q.sequence==body_local_status_sequence&&std::chrono::duration<double>(now-body_local_status_change).count()<=.02){body_local_status=q;body_local_status_fresh=true;}
   }
  }
  body_enabled=!loaded_body_profile.local_execution&&non_yaw_physical_requested&&requested&&model_ready&&(sensor.flags&15)==15&&
      loaded_body_profile.valid&&loaded_body_profile.car_id==full_car_id&&
      body_moment_profile.ready(identity_hash,body_moment_profile.patch_code);
  if(!body_enabled){
   body_channel.stop();if(body_previous_enabled)body_commands.publish(NgpBodyForceCommand{});
  }else{
   const double current_clock=sensor.clock;
   body_channel.begin_recovery(sensor.epoch,bridge_generation,identity_hash,body_moment_profile.evidence_id,
       body_moment_profile.storage_capacity_j,true);
   body_channel.expire(current_clock);
   if(body_observations.open((worker_name+L".BodyForceObservation").c_str())){
    auto mapped=body_observations.data;uint32_t token=mapped->commit;MemoryBarrier();
    NgpBodyObservationFrame received{};std::memcpy(&received,mapped,sizeof received);MemoryBarrier();
    if(token&&!(token&1)&&token==mapped->commit&&token==received.commit)
     if(body_channel.acknowledge(received,current_clock,body_work_profile))++body_acked;
   }
   const double wall_age=std::chrono::duration<double>(now-body_sensor_change).count();
   const double clock_age=current_clock-body_sensor.clock;
   auto proposal=ngp::body_force_candidate(body_sensor,body_hint,sensor.epoch,bridge_generation,identity_hash,
       std::max(wall_age,clock_age),body_model_age,body_moment_profile,body_work_profile,body_sensor_fresh&&body_model_valid);
   auto command=body_channel.prepare(proposal,current_clock);
   if(command.mask){body_commands.publish(command);++body_sent;}
   if(body_channel.faulted())body_commands.publish(NgpBodyForceCommand{});
  }
  body_previous_enabled=body_enabled;
  ngp::DamperForceCandidate damper_proposal;damper_input_valid=false;bool damper_settlement_ready=false;
  if(damper_input_epoch!=sensor.epoch||damper_input_generation!=bridge_generation){
   damper_input_epoch=sensor.epoch;damper_input_generation=bridge_generation;
   damper_input_sequence=0;damper_interval_clock=0;
  }
  double damper_clock=std::max(sensor.clock,damper_interval_clock);
  // Read independently validated interval/geometry even when this primary
  // acquisition is incoherent: a completed receipt can be newer than the last
  // primary clock. This only advances the settlement clock. The tick() request
  // below still requires worker_fresh and cannot issue a new command otherwise.
  if(!loaded_damper_profile.worker_local&&loaded_damper_profile.valid&&loaded_damper_profile.car_id==full_car_id&&requested&&non_yaw_physical_requested&&model_ready&&
     wheel_interval_mapping.open((worker_name+L".WheelIntervalSensor").c_str())&&wheel_geometry_mapping.open((worker_name+L".WheelGeometrySensor").c_str())){
   auto wi=wheel_interval_mapping.data;auto wg=wheel_geometry_mapping.data;uint32_t wb=wi->commit,gb=wg->commit;MemoryBarrier();
   NgpWheelIntervalFrame w{};NgpWheelGeometryFrame g{};std::memcpy(&w,wi,sizeof w);std::memcpy(&g,wg,sizeof g);MemoryBarrier();
   // Both publishers use the same Worker elapsed clock. The interval is
   // published every callback, the primary sensor only about every 6 ms.
   // Accept at most that publication skew; never relax the command lease.
   const double clock_skew=w.packet.clock_after-sensor.clock;
   const double source_age=std::max(0.,-clock_skew);
   auto input=std::isfinite(clock_skew)&&clock_skew<=.006001?
       ngp::damper_interval_input(w,wb,wi->commit,g,gb,wg->commit,loaded_damper_profile.input,loaded_damper_profile.work,
       sensor.epoch,bridge_generation,identity_hash,loaded_damper_profile.residual.patch_code,source_age):ngp::DamperIntervalInput{};
   if(input.valid){
    if(w.packet.epoch!=damper_input_epoch||w.packet.generation!=damper_input_generation||w.packet.sequence>damper_input_sequence){
     damper_input_epoch=w.packet.epoch;damper_input_generation=w.packet.generation;damper_input_sequence=w.packet.sequence;damper_input_change=now;
    }
    damper_interval_clock=std::max(damper_interval_clock,w.packet.clock_after);
    damper_clock=std::max(sensor.clock,damper_interval_clock);
    double age=std::max(source_age,std::chrono::duration<double>(now-damper_input_change).count());
    damper_settlement_ready=std::isfinite(age)&&age>=0&&age<=.003001;
    NgpDamperModelHints hints{};double model_age=0;
    if(w.packet.sequence==damper_input_sequence&&models.fast_damper(hints,model_age,bridge_generation,identity_hash)){
     ngp::DamperModelCandidate model;model.valid_mask=hints.valid_mask;
     for(unsigned i=0;i<4;++i){model.force[i]=hints.force[i];model.raw_force[i]=hints.raw_force[i];model.model_velocity[i]=hints.model_velocity[i];model.coefficient_scale[i]=hints.coefficient_scale[i];}
     damper_proposal=ngp::damper_force_candidate(model,loaded_damper_profile.residual,input.points,input.geometry,input.work,age,model_age,.003001);
     damper_input_valid=damper_proposal.valid;
    }
   }
  }
  damper_path.tick(sensor.epoch,bridge_generation,identity_hash,full_car_id,
      !loaded_damper_profile.worker_local&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15&&!sensor.fault_code,
      damper_clock,loaded_damper_profile,damper_proposal.valid?&damper_proposal:nullptr,
      !sensor_valid&&requested&&non_yaw_physical_requested&&model_ready&&damper_settlement_ready);
  const bool damper_local_enabled=damper_owner_selected&&loaded_damper_profile.worker_local&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15&&!sensor.fault_code;
  if(loaded_damper_profile.worker_local){
   NgpDamperModelHints hints{};double age=0,source_clock=-1;uint32_t source_epoch=0;uint64_t model_frame=0;
   const bool valid=damper_local_enabled&&models.fast_damper(hints,age,bridge_generation,identity_hash,&source_clock,&source_epoch,&model_frame)&&
       source_epoch==sensor.epoch&&std::isfinite(source_clock)&&source_clock>=0&&source_clock<=sensor.clock&&sensor.clock-source_clock<=.1;
   if(valid&&model_frame!=damper_hint_model_frame){
    if(damper_hint_sequence>=1073741822)throw std::runtime_error("Damper hint sequence exhausted");
    NgpDamperModelHint hint{};hint.abi=1;hint.epoch=source_epoch;hint.generation=bridge_generation;hint.car_hash=identity_hash;
    hint.patch_code=loaded_damper_profile.residual.patch_code;hint.evidence_id=loaded_damper_profile.residual.evidence_id;
    hint.sequence=++damper_hint_sequence;hint.valid_mask=hints.valid_mask;hint.source_clock=source_clock;
    for(unsigned i=0;i<4;++i)hint.coefficient_scale[i]=hints.coefficient_scale[i];
    damper_hints_mailbox.open(worker_name+L".DamperModelHint");damper_hints_mailbox.publish(hint);damper_hint_model_frame=model_frame;
   }else if(!valid)damper_hints_mailbox.publish({});
  }
  damper_local_fresh=false;
  const bool wheel_local_selected=loaded_wheel_local_profile.valid&&loaded_wheel_local_profile.car_id==full_car_id&&loaded_wheel_local_profile.car_hash==identity_hash;
  const bool wheel_local_enabled=wheel_local_selected&&!wheel_profile_conflict&&!brake_profile_declared&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15&&!sensor.fault_code;
  if(wheel_profile_declared){
   NgpWheelLocalHint hint{};double age=0;uint64_t model_frame=0;
   bool valid=wheel_local_enabled&&models.fast_wheel_local(hint,age,model_frame,bridge_generation,identity_hash)&&
       hint.epoch==sensor.epoch&&hint.source_clock<=sensor.clock&&sensor.clock-hint.source_clock<=.1;
   if(valid&&model_frame!=wheel_local_model_frame){
    if(wheel_local_sequence>=1073741822)throw std::runtime_error("Wheel local hint sequence exhausted");
    hint.sequence=++wheel_local_sequence;hint.patch_code=loaded_wheel_local_profile.patch_code;hint.evidence_id=loaded_wheel_local_profile.evidence_id;
    wheel_local_mailbox.open(worker_name+L".WheelLocalHint");wheel_local_mailbox.publish(hint);wheel_local_model_frame=model_frame;
   }else if(!valid)wheel_local_mailbox.publish({});
  }
  wheel_local_fresh=false;
  if(loaded_wheel_local_profile.valid&&wheel_local_status_mapping.open((worker_name+L".WheelLocalStatus").c_str())){
   auto mapped=wheel_local_status_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();NgpWheelLocalStatusFrame f{};std::memcpy(&f,mapped,sizeof f);MemoryBarrier();const auto& q=f.packet;
   bool valid=token>0&&!(token&1)&&token==mapped->commit&&token==f.commit&&q.sequence<1073741823&&q.sequence*2==token&&q.abi==NGP_WHEEL_LOCAL_STATUS_ABI&&
       q.effect_id==NGP_WHEEL_LOCAL_EFFECT_ID&&q.reason_code<=NGP_WHEEL_LOCAL_REASON_MAX&&f.checksum==ngp::drive_checksum(&q,sizeof q)&&q.epoch==sensor.epoch&&q.generation==bridge_generation&&q.car_hash==identity_hash&&
       q.patch_code==loaded_wheel_local_profile.patch_code&&q.evidence_id==loaded_wheel_local_profile.evidence_id&&q.fault<=1&&q.flags<=31&&q.acked<=q.sent&&
       std::isfinite(q.clock)&&q.clock>=0&&q.clock-sensor.clock<=.006001&&sensor.clock-q.clock<=.03&&ngp::wheel_local_status_work_valid(q,loaded_wheel_local_profile.storage_capacity_j);
   if(valid){if(q.sequence!=wheel_local_status_sequence){wheel_local_status_sequence=q.sequence;wheel_local_change=now;}
    wheel_local_status=q;wheel_local_fresh=worker_fresh&&std::chrono::duration<double>(now-wheel_local_change).count()<=.03;}
  }
  const bool drive_local_selected=!wheel_profile_declared&&loaded_drive_local_profile.valid&&loaded_drive_local_profile.car_id==full_car_id&&loaded_drive_local_profile.car_hash==identity_hash;
  const bool drive_local_enabled=drive_local_selected&&!brake_profile_declared&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15&&!sensor.fault_code;
  if(loaded_drive_local_profile.valid){
   NgpdModelHints hints{};NgpdModelComponents components{};double age=0,source_clock=-1,lsd_capacity=0;uint32_t source_epoch=0;uint64_t model_frame=0;
   bool valid=drive_local_enabled&&models.fast_drive(hints,age,bridge_generation,identity_hash,&source_clock,&source_epoch,&model_frame,&components,loaded_drive_local_profile.lsd_nm_per_hint>0?&lsd_capacity:nullptr)&&age<=.1&&
       source_epoch==sensor.epoch&&std::isfinite(source_clock)&&source_clock>=0&&source_clock<=sensor.clock&&sensor.clock-source_clock<=.1&&
       hints.abi==NGPD_MODEL_ABI&&hints.valid==1&&!hints.units_qualified&&!hints.reserved&&
       std::isfinite(hints.windup_demand_normalized)&&std::abs(hints.windup_demand_normalized)<=1&&
       std::isfinite(hints.windup_soft_normalized)&&std::abs(hints.windup_soft_normalized)<=1&&
       std::isfinite(components.transmission_correction)&&std::abs(components.transmission_correction)<=2&&
       std::isfinite(components.windup_correction)&&std::abs(components.windup_correction)<=2&&
       std::abs(components.transmission_correction+components.windup_correction-(hints.windup_soft_normalized-hints.windup_demand_normalized))<=1e-12;
   if(valid&&model_frame!=drive_local_model_frame){
    if(drive_local_sequence>=1073741822)throw std::runtime_error("Drive local hint sequence exhausted");
    NgpDriveLocalHint hint{};hint.abi=NGP_DRIVE_LOCAL_HINT_ABI;hint.effect_id=NGP_DRIVE_LOCAL_EFFECT_ID;hint.epoch=source_epoch;hint.generation=bridge_generation;hint.car_hash=identity_hash;
    hint.patch_code=loaded_drive_local_profile.patch_code;hint.evidence_id=loaded_drive_local_profile.evidence_id;
    hint.sequence=++drive_local_sequence;hint.source_clock=source_clock;hint.demand=hints.windup_demand_normalized;hint.soft=hints.windup_soft_normalized;hint.transmission=components.transmission_correction;hint.windup=components.windup_correction;hint.lsd_capacity=lsd_capacity;
    drive_local_mailbox.open(worker_name+L".DriveLocalHint");drive_local_mailbox.publish(hint);drive_local_model_frame=model_frame;
   }else if(!valid)drive_local_mailbox.publish({});
  }
  drive_local_fresh=false;
  if(loaded_drive_local_profile.valid&&drive_local_status_mapping.open((worker_name+L".DriveLocalStatus").c_str())){
   auto mapped=drive_local_status_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();NgpDriveLocalStatusFrame f{};std::memcpy(&f,mapped,sizeof f);MemoryBarrier();const auto& q=f.packet;
   bool valid=token>0&&!(token&1)&&token==mapped->commit&&token==f.commit&&q.sequence<1073741823&&q.sequence*2==token&&q.abi==NGP_DRIVE_LOCAL_ABI&&
       q.effect_id==NGP_DRIVE_LOCAL_EFFECT_ID&&!q.reserved&&f.checksum==ngp::drive_checksum(&q,sizeof q)&&q.epoch==sensor.epoch&&q.generation==bridge_generation&&q.car_hash==identity_hash&&
       q.patch_code==loaded_drive_local_profile.patch_code&&q.evidence_id==loaded_drive_local_profile.evidence_id&&q.fault<=1&&q.flags<=31&&q.acked<=q.sent&&
       std::isfinite(q.clock)&&q.clock>=0&&q.clock-sensor.clock<=.006001&&sensor.clock-q.clock<=.03&&ngp::drive_local_status_work_valid(q,loaded_drive_local_profile.storage_capacity_j);
   if(valid){if(q.sequence!=drive_local_status_sequence){drive_local_status_sequence=q.sequence;drive_local_change=now;}
    drive_local_status=q;drive_local_fresh=worker_fresh&&std::chrono::duration<double>(now-drive_local_change).count()<=.03;}
  }
  const bool spring_local_enabled=spring_local_owner_selected&&non_yaw_physical_requested&&requested&&model_ready&&worker_fresh&&(sensor.flags&15)==15&&!sensor.fault_code;
  if(loaded_spring_local_profile.valid){
   NgpsModelHints hints{};double age=0,source_clock=-1;uint32_t source_epoch=0;uint64_t model_frame=0;
   bool valid=spring_local_enabled&&models.fast_spring(hints,age,bridge_generation,identity_hash,&source_clock,&source_epoch,&model_frame)&&age<=.1&&
       source_epoch==sensor.epoch&&std::isfinite(source_clock)&&source_clock>=0&&source_clock<=sensor.clock&&sensor.clock-source_clock<=.1&&
       hints.abi==NGPS_ABI&&!hints.units_qualified&&!hints.reserved&&hints.valid_mask>0&&!(hints.valid_mask&~15u);
   for(double ratio:hints.excess_ratio)valid=valid&&std::isfinite(ratio)&&ratio>=0;
   if(valid&&model_frame!=spring_local_model_frame){
    if(spring_local_sequence>=1073741822)throw std::runtime_error("Spring local hint sequence exhausted");
    NgpSpringLocalHint hint{};hint.effect_id=NGP_SPRING_LOCAL_EFFECT_ID;hint.abi=1;hint.epoch=source_epoch;hint.generation=bridge_generation;hint.car_hash=identity_hash;
    hint.patch_code=loaded_spring_local_profile.spring.patch_code;hint.evidence_id=loaded_spring_local_profile.spring.evidence_id;
    hint.sequence=++spring_local_sequence;hint.valid_mask=hints.valid_mask;hint.source_clock=source_clock;
    for(unsigned i=0;i<4;++i)hint.excess_ratio[i]=hints.excess_ratio[i];
    spring_local_mailbox.open(worker_name+L".SpringLocalHint");spring_local_mailbox.publish(hint);spring_local_model_frame=model_frame;
   }else if(!valid)spring_local_mailbox.publish({});
  }
  spring_local_fresh=false;
  if(loaded_spring_local_profile.valid&&spring_local_status_mapping.open((worker_name+L".SpringLocalStatus").c_str())){
   auto mapped=spring_local_status_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();NgpSpringLocalStatusFrame f{};std::memcpy(&f,mapped,sizeof f);MemoryBarrier();const auto& q=f.packet;
   bool valid=token>0&&!(token&1)&&token==mapped->commit&&token==f.commit&&q.sequence<1073741823&&q.sequence*2==token&&q.abi==1&&
       f.checksum==ngp::wheel_material_checksum(&q,sizeof q)&&q.epoch==sensor.epoch&&q.generation==bridge_generation&&q.car_hash==identity_hash&&
       q.patch_code==loaded_spring_local_profile.spring.patch_code&&q.evidence_id==loaded_spring_local_profile.spring.evidence_id&&q.reference_lease<=9007199254740991ULL&&
       q.fault<=1&&q.flags<=31&&q.acked<=q.sent&&std::isfinite(q.clock)&&q.clock>=0&&q.clock-sensor.clock<=.006001&&sensor.clock-q.clock<=.03&&
       std::isfinite(q.balance_j)&&q.balance_j>=0&&q.balance_j<=loaded_spring_local_profile.capacity_j&&std::isfinite(q.held_j)&&q.held_j>=0&&q.held_j<=1;
   if(valid){if(q.sequence!=spring_local_status_sequence){spring_local_status_sequence=q.sequence;spring_local_change=now;}
    spring_local_status=q;spring_local_fresh=worker_fresh&&std::chrono::duration<double>(now-spring_local_change).count()<=.03;}
  }
  if(loaded_damper_profile.worker_local&&damper_local_status_mapping.open((worker_name+L".DamperLocalStatus").c_str())){
   auto mapped=damper_local_status_mapping.data;uint32_t token=mapped->commit;MemoryBarrier();
   NgpDamperLocalStatusFrame f{};std::memcpy(&f,mapped,sizeof f);MemoryBarrier();const auto& q=f.packet;
   bool valid=token>0&&!(token&1)&&token==mapped->commit&&token==f.commit&&q.sequence<1073741823&&q.sequence*2==token&&q.abi==1&&
       f.checksum==ngp::wheel_material_checksum(&q,sizeof q)&&q.epoch==sensor.epoch&&q.generation==bridge_generation&&q.car_hash==identity_hash&&
       q.patch_code==loaded_damper_profile.residual.patch_code&&q.evidence_id==loaded_damper_profile.residual.evidence_id&&q.fault<=1&&q.flags<=31&&
       std::isfinite(q.clock)&&q.clock>=0&&q.clock-sensor.clock<=.006001&&sensor.clock-q.clock<=.03&&
       std::isfinite(q.balance_j)&&q.balance_j>=0&&q.balance_j<=loaded_damper_profile.storage_capacity_j&&std::isfinite(q.held_j)&&q.held_j>=0&&q.held_j<=1&&q.acked<=q.sent;
   if(valid){if(q.sequence!=damper_local_sequence){damper_local_sequence=q.sequence;damper_local_change=now;}
    damper_local_status=q;damper_local_fresh=worker_fresh&&std::chrono::duration<double>(now-damper_local_change).count()<=.03;}
  }
  fast_us=std::chrono::duration<double,std::micro>(std::chrono::steady_clock::now()-fast_start).count();
  if(std::chrono::duration<double>(now-last_write).count()>=.2){last_write=now;
    auto view_begin=std::chrono::steady_clock::now();auto result=models.read();
    values=std::move(result.data);performance=std::move(result.performance);frame=result.frame;
    const double shadow_age=std::chrono::duration<double>(now-result.source_time).count();
    const bool shadow_worker_match=shadow_clock_monotonic&&ngp::tyre_shadow_worker_matches(worker_fresh,result.worker_epoch,result.worker_clock,sensor.epoch,sensor.clock);
    const bool shadow_current=shadow_worker_match&&requested&&model_ready&&result.generation==bridge_generation&&result.car_hash==identity_hash&&
        result.error.empty()&&shadow_age>=0&&shadow_age<=.2&&!result.tyre_reference_shadow.empty();
    values["tyre_reference_observation"]={{"available",shadow_current},{"application_enabled",false},
        {"generation",bridge_generation},{"car_hash",identity_hash},
        {"model_frame",result.frame},{"worker_context_bound",shadow_current&&result.tyre_reference_context_matched},
        {"host_input_context_matched",shadow_current},{"rejection_reason",result.tyre_reference_rejection},
        {"source_worker_epoch",result.worker_epoch},
        {"source_worker_clock",std::isfinite(result.worker_clock)?J(result.worker_clock):J()},
        {"current_worker_epoch",sensor.epoch},{"current_worker_clock",std::isfinite(sensor.clock)?J(sensor.clock):J()},
        {"value",shadow_current?result.tyre_reference_shadow:J::object()}};

    values["tyre_reference_comparison"]=ngp::compare_tyre_reference(result.tyre_reference_shadow,
        result.owned_hints.tyre_ns_m,result.owned_hints.tyre_mask,
        shadow_current&&result.tyre_reference_context_matched&&result.owned_valid);

    // Observation only: use the same freshness and identity checks required by
    // the proposed callback-local transport. This does not select an owner,
    // publish a command, qualify a profile, or change the existing force path.
    std::array<double,4> local_tyre_coefficients{};uint32_t local_tyre_mask=0;
    uint64_t local_tyre_model_frame=0;double local_tyre_model_clock=-1.,local_tyre_age=0.;
    const bool local_tyre_available=worker_fresh&&requested&&model_ready&&enhancement_fresh&&
        models.fast_owned_tyre(local_tyre_coefficients,local_tyre_mask,local_tyre_model_frame,
          local_tyre_model_clock,local_tyre_age,bridge_generation,identity_hash,
          enhancement_sensor.epoch,enhancement_sensor.clock);
    values["tyre_local_transport_observation"]={{"available",local_tyre_available},
        {"application_enabled",false},{"sensor_sequence",enhancement_sensor.sequence},
        {"sensor_clock",std::isfinite(enhancement_sensor.clock)?J(enhancement_sensor.clock):J()},
        {"model_frame",local_tyre_model_frame},
        {"model_clock",local_tyre_available?J(local_tyre_model_clock):J()},
        {"model_age",std::isfinite(local_tyre_age)?J(local_tyre_age):J()},
        {"mask",local_tyre_mask},{"coefficient",local_tyre_coefficients}};
    values["tyre_observation_sender_counts"]={{"enabled",tyre_observation_capture},
        {"counts",tyre_observation_reasons},{"application_enabled",false}};
    values["tyre_bound_sender"]={{"selected",tyre_bound_profile.selected},{"declaration_valid",tyre_bound_profile.valid},
        {"source",tyre_bound_profile.source},{"published",tyre_bound_published},{"vehicle_response_verified",false}};
    values["tyre_bound_reference_preview"]={{"valid",tyre_bound_reference_preview_valid},
        {"application_enabled",false},{"force_packet_published",false},
        {"epoch",tyre_bound_reference_preview.packet.hint.epoch},
        {"generation",tyre_bound_reference_preview.packet.hint.generation},
        {"car_hash",tyre_bound_reference_preview.packet.hint.car_hash},
        {"sensor_clock",tyre_bound_reference_preview.packet.hint.sensor_clock},
        {"model_clock",tyre_bound_reference_preview.packet.hint.model_clock},
        {"sensor_sequence",tyre_bound_reference_preview.packet.hint.sensor_sequence},
        {"model_sequence",tyre_bound_reference_preview.packet.hint.model_sequence},
        {"mask",tyre_bound_reference_preview.packet.hint.valid_mask},
        {"coefficient",tyre_bound_reference_preview.packet.hint.coefficient},
        {"source_magnitude",tyre_bound_reference_preview.packet.source_magnitude}};

    values["wheel_material_sensor"]={{"capture_enabled",wheel_material_capture},{"fresh",wheel_material.mask==15},
        {"sequence",wheel_material.sequence},{"clock_before",wheel_material.clock_before},{"clock_after",wheel_material.clock_after},
        {"body_before",wheel_material.body_before},{"body_after",wheel_material.body_after},
        {"wheel_before",wheel_material.wheel_before},{"wheel_after",wheel_material.wheel_after},
        {"application_enabled",false},{"units_qualified",false}};
    values["damper_force_channel"]={{"profile_declarations_valid",loaded_damper_profile.valid},
        {"profile_car_id",loaded_damper_profile.car_id},{"application_enabled",damper_path.active()&&damper_input_valid},
        {"input_valid",damper_input_valid},
        {"commands_sent",damper_path.commands_sent()},{"commands_acked",damper_path.commands_acked()},
        {"waiting_ACK",damper_path.waiting()},{"fault_latched",damper_path.faulted()},
        {"available_j",damper_path.available()},{"unresolved_j",damper_path.unresolved()},
        {"blocked_reason",damper_path.reason()}};
    values["damper_local_channel"]={{"api_argument_mode",loaded_damper_profile.api_argument_mode.empty()?"legacy_raw":loaded_damper_profile.api_argument_mode},{"selected",loaded_damper_profile.worker_local},{"hint_sequence",damper_hint_sequence},
        {"fresh",damper_local_fresh},{"application_enabled",damper_local_enabled&&damper_local_fresh&&damper_local_status.flags==31&&!damper_local_status.fault},
        {"commands_sent",damper_local_status.sent},{"commands_acked",damper_local_status.acked},{"fault_latched",damper_local_status.fault==1},
        {"available_j",damper_local_status.balance_j},{"unresolved_j",damper_local_status.held_j}};
    values["body_sensor"]={{"fresh",body_sensor_fresh},{"patch_code",body_sensor.patch_code},
        {"sequence",body_sensor.sequence},{"clock",body_sensor.clock},{"velocity_local",body_sensor.velocity_local},
        {"application_enabled",false}};
    values["body_force_channel"]={{"profile_ready",body_moment_profile.ready(identity_hash,body_sensor.patch_code)},
        {"application_enabled",body_enabled&&!body_channel.faulted()},{"waiting_ACK",body_channel.waiting()},{"fault_latched",body_channel.faulted()},
        {"commands_sent",body_sent},{"commands_acked",body_acked},{"available_j",body_channel.available()},
        {"unresolved_j",body_channel.unresolved()},{"profile_loaded",loaded_body_profile.valid},
        {"fault_reason",body_channel.reason()},
        {"fault_sequence",body_channel.fault_sequence()},{"fault_source_clock",body_channel.fault_source_clock()},
        {"fault_observed_clock",std::isfinite(body_channel.fault_observed_clock())?J(body_channel.fault_observed_clock()):J()},
        {"blocked_reason",!loaded_body_profile.valid?"independent_profile_not_installed_or_invalid":
          body_channel.faulted()?body_channel.reason():body_enabled?"":"profile_context_or_input_not_ready"}};
    NgpBodyModelHints body_candidate{};double body_age=0.;
    NgpDamperModelHints damper_candidate{};double damper_age=0.;
    const bool damper_valid=requested&&model_ready&&models.fast_damper(damper_candidate,damper_age,bridge_generation,identity_hash);
    values["damper_model_candidate"]={{"valid",damper_valid},{"valid_mask",damper_candidate.valid_mask},
        {"units_qualified",false},{"application_enabled",false},{"model_age",std::isfinite(damper_age)?J(damper_age):J()},
        {"force_model",damper_candidate.force},{"raw_force_model",damper_candidate.raw_force},
        {"velocity_model",damper_candidate.model_velocity},{"coefficient_scale",damper_candidate.coefficient_scale}};
    const bool body_valid=requested&&model_ready&&models.fast_body(body_candidate,body_age,bridge_generation,identity_hash);
    values["body_model_candidate"]={{"valid",body_valid},{"units_qualified",false},{"application_enabled",false},
        {"model_age",std::isfinite(body_age)?J(body_age):J()},{"normalized",body_candidate.normalized}};
    values["body_local_channel"]={{"selected",loaded_body_profile.valid&&loaded_body_profile.local_execution},{"output_requested",body_local_enabled},
        {"hint_active",body_local_hint_active},{"hint_sequence",body_local_sequence},{"model_frame",body_local_model_frame},{"worker_application_observed",false},
        {"status_available",body_local_status_fresh},{"worker_reports_ready",body_local_status_fresh&&body_local_status.flags==15&&!body_local_status.fault&&body_local_status.model_sequence>0},
        {"sent_reported",body_local_status_fresh?J(body_local_status.sent):J()},{"acked_reported",body_local_status_fresh?J(body_local_status.acked):J()},
        {"balance_reported_j",body_local_status_fresh?J(body_local_status.balance_j):J()},{"held_reported_j",body_local_status_fresh?J(body_local_status.held_j):J()},
        {"worker_fault",body_local_status_fresh?J(body_local_status.fault):J()}};
    NgpdModelHints drive_candidate{};double drive_age=0.;
    const bool drive_valid=requested&&model_ready&&models.fast_drive(drive_candidate,drive_age,bridge_generation,identity_hash);
    values["drive_model_candidate"]={{"valid",drive_valid},{"units_qualified",false},{"application_enabled",false},
        {"model_age",std::isfinite(drive_age)?J(drive_age):J()},
        {"wheel_drive_torque_model_nm",drive_candidate.wheel_drive_torque_model_nm},
        {"drive_normalized",drive_candidate.drive_normalized},{"windup_demand_normalized",drive_candidate.windup_demand_normalized},
        {"windup_transmitted_normalized",drive_candidate.windup_transmitted_normalized},
        {"windup_torque_normalized",drive_candidate.windup_torque_normalized},{"windup_soft_normalized",drive_candidate.windup_soft_normalized}};
    NgpbModelHints brake_candidate{};double brake_age=0.;
    const bool brake_valid=requested&&model_ready&&models.fast_brake(brake_candidate,brake_age,bridge_generation,identity_hash);
    values["brake_model_candidate"]={{"valid",brake_valid},{"valid_mask",brake_candidate.valid_mask},
        {"units_qualified",false},{"application_enabled",false},
        {"model_age",std::isfinite(brake_age)?J(brake_age):J()},
        {"friction_ratio",brake_candidate.friction_ratio},{"disc_temperature_model",brake_candidate.disc_temperature_model},
        {"lock_ratio",brake_candidate.lock_ratio}};
    values["brake_input"]={{"fresh",brake_sensor_fresh},{"valid_mask",brake_sensor.valid_mask},
        {"units_qualified",false},{"baseline_isolated",false},{"application_enabled",false},
        {"abs_in_action",brake_sensor_fresh?J(brake_sensor.abs_in_action==1):J()},
        {"brake_torque_raw",brake_sensor.brake_torque_raw},{"handbrake_torque_raw",brake_sensor.handbrake_torque_raw},
        {"angular_speed_raw",brake_sensor.angular_speed_raw}};
    values["brake_force_channel"]={{"calibration_ready",brake_context_ready},{"profile_declared",brake_profile_declared},{"declaration_valid",loaded_brake_profile.valid},
        {"ownership_conflict",wheel_profile_declared||drive_profile_declared},
        {"application_enabled",brake_force_enabled&&!brake_execution.faulted()},{"waiting_ACK",brake_execution.waiting()},
        {"fault_latched",brake_execution.faulted()},{"fault_reason",brake_execution.reason()},{"commands_sent",brake_sent},{"commands_acked",brake_acked}};
    values["brake_local_channel"]={{"selected",loaded_brake_profile.valid&&loaded_brake_profile.local_execution},{"output_requested",brake_local_enabled},
        {"model_hint_sequence",brake_local_sequence},{"model_frame",brake_local_model_frame},{"worker_application_observed",false},
        {"status_available",brake_local_status_fresh},{"worker_reports_ready",brake_local_status_fresh&&brake_local_status.flags==15&&!brake_local_status.fault},
        {"api_calls_reported",brake_local_status_fresh?J(brake_local_status.api_calls):J()},
        {"api_attempts_reported",brake_local_status_fresh?J(brake_local_status.api_attempts):J()},
        {"worker_fault",brake_local_status_fresh?J(brake_local_status.fault):J()}};
    values["spring_transport"]={{"receiver_mask",worker_fresh?sensor.reserved[1]:0},
        {"units_qualified",false},{"application_enabled",false}};
    values["spring_force_channel"]={{"calibration_ready",spring_force_profile.ready(identity_hash)},
        {"application_enabled",spring_force_enabled},{"reference_ready",spring_force_channel.referenced()},
        {"commands_sent",spring_force_sent},{"commands_acked",spring_force_acked}};
    values["wheel_local_channel"]={{"declared",wheel_profile_declared},{"profile_valid",loaded_wheel_local_profile.valid},{"profile_conflict",wheel_profile_conflict},{"selected",wheel_local_selected},{"fresh",wheel_local_fresh},{"hint_sequence",wheel_local_sequence},
        {"reason_code",wheel_local_fresh?J(wheel_local_status.reason_code):J()},{"reason",wheel_local_fresh?J(ngp_wheel_local_reason(wheel_local_status.reason_code)):J()},
        {"application_enabled",wheel_local_enabled&&wheel_local_fresh&&wheel_local_status.flags==31&&!wheel_local_status.fault},
        {"commands_sent",wheel_local_status.sent},{"commands_acked",wheel_local_status.acked},{"fault_latched",wheel_local_status.fault==1},
        {"available_j",wheel_local_fresh?J(wheel_local_status.balance_j):J()},{"balance_reported",wheel_local_fresh},
        {"unresolved_j",wheel_local_status.held_j},{"storage_capacity_j",loaded_wheel_local_profile.storage_capacity_j},{"lsd_nm_per_hint",loaded_wheel_local_profile.lsd_nm_per_hint}};
    values["drive_local_channel"]={{"selected",drive_local_selected},{"fresh",drive_local_fresh},{"hint_sequence",drive_local_sequence},
        {"output_requested",drive_local_enabled},{"status_observation",ngp::drive_local_observation_state(drive_local_selected,drive_local_fresh,drive_local_status.flags,drive_local_status.fault)},
        {"application_enabled",drive_local_enabled&&drive_local_fresh&&drive_local_status.flags==31&&!drive_local_status.fault},
        {"commands_sent",drive_local_status.sent},{"commands_acked",drive_local_status.acked},{"fault_latched",drive_local_status.fault==1},
        {"available_j",drive_local_fresh?J(drive_local_status.balance_j):J()},
        {"lsd_nm_per_hint",loaded_drive_local_profile.lsd_nm_per_hint},{"storage_capacity_j",loaded_drive_local_profile.storage_capacity_j},{"balance_reported",drive_local_fresh},
        {"unresolved_j",drive_local_status.held_j},{"mode",loaded_drive_local_profile.storage_capacity_j>0?"recovered_energy_additional_windup":"dissipative_additional_windup"}};
    values["spring_local_channel"]={{"api_argument_mode",loaded_spring_local_profile.api_argument_mode.empty()?"legacy_raw":loaded_spring_local_profile.api_argument_mode},{"selected",loaded_spring_local_profile.valid},{"fresh",spring_local_fresh},{"hint_sequence",spring_local_sequence},
        {"application_enabled",spring_local_enabled&&spring_local_fresh&&spring_local_status.flags==31&&!spring_local_status.fault},
        {"commands_sent",spring_local_status.sent},{"commands_acked",spring_local_status.acked},{"fault_latched",spring_local_status.fault==1},
        {"reference_lease",spring_local_status.reference_lease},{"available_j",spring_local_status.balance_j},{"unresolved_j",spring_local_status.held_j}};
    last_us=result.last_us;max_us=result.max_us;
    if(!result.error.empty()&&model_ready){status="MODEL_ERROR";detail=result.error;fault_detail=detail;model_fault=true;requested=false;models.cancel();}
    performance["observer_us"]=std::chrono::duration<double,std::micro>(std::chrono::steady_clock::now()-view_begin).count();
    performance["fast_effect_us"]=fast_us;
    J enhancement={{"abi",NGPE_ABI},{"sensor_fresh",enhancement_fresh},{"compute_result",enhancement_rc},
        {"sensor_sequence",enhancement_sensor.sequence},{"command_sequence",enhancement_command.sequence},
        {"ack",enhancement_sensor.ack},{"api_calls",enhancement_sensor.api_calls},{"api_stage",enhancement_sensor.api_stage},
        {"fault",enhancement_sensor.fault},{"api_mask",enhancement_sensor.api_mask},
        {"application_enabled",enhancement_sensor.reserved==1},{"candidate_channels",enhancement_command.channels},
        {"applied_suspension",enhancement_sensor.applied_suspension},{"applied_tyre",enhancement_sensor.applied_tyre},
        {"applied_diff",enhancement_sensor.applied_diff},{"power_w",enhancement_command.total_power},
        {"model_age",std::isfinite(enhancement_age)?J(enhancement_age):J()},
        {"supplement_age",enhancement_sensor.supplement_age},
        {"status",!enhancement_fresh?"WAITING_FOR_PHYSICAL_SAMPLES":enhancement_sensor.reserved==1?"EXPERIMENTAL_APPLICATION":"CALIBRATION_PENDING"}};
    enhancement["sample"]={{"clock",enhancement_sensor.clock},{"flags",enhancement_sensor.flags},
        {"traction_type",enhancement_sensor.traction_type},{"side",enhancement_sensor.side},{"up",enhancement_sensor.up},
        {"body_origin_m",enhancement_sensor.body_origin},
        {"hub_positions_m",enhancement_sensor.positions},{"body_point_velocity_ms",enhancement_sensor.body_velocity},
        {"estimated_wheel_velocity_ms",enhancement_sensor.wheel_velocity},{"wheel_omega_rad_s",enhancement_sensor.wheel_omega},
        {"render_load_n",enhancement_sensor.load}};
    enhancement["command"]={{"source_clock",enhancement_command.source_clock},
        {"suspension_force_n",enhancement_command.suspension_force},{"lateral_force_n",enhancement_command.tyre_force},
        {"wheel_torque_nm",enhancement_command.wheel_torque},{"component_power_w",enhancement_command.power}};
    J unavailable=J::array({"verified live car mass"});
    if(input_source=="common_worker"){
     for(unsigned i=0;i<4;++i)if(!(sensor.flags&(1u<<(16+i))))
      unavailable.push_back("wheel "+std::to_string(i)+" native force/slip/camber supplement");
    }else if(input_source!="cphys_packet"){
     unavailable.push_back("native tyre fx/fy/mz");unavailable.push_back("slipAngle/slipRatio");
    }
    J bridge={{"abi",NGP4_ABI},{"sensor_fresh",worker_fresh},{"sensor_epoch",sensor.epoch},{"sensor_sequence",sensor.sequence},
     {"sensor_age",std::chrono::duration<double>(now-sensor_change).count()},{"generation",bridge_generation},
     {"command_sequence",effect.sequence},{"ack_sequence",sensor.ack_sequence},{"applied_frames",sensor.applied_frames},
     {"api_calls",sensor.api_calls},{"api_stage",sensor.api_stage},{"worker_status",sensor.api_status},{"fault_code",sensor.fault_code},
     {"zero_api_validated",sensor.reserved[0]==1},
     {"physical_requested",physical_requested},{"command_active",effect.flags==1},{"effect_result",effect_result},
     {"sensor_flags",worker_fresh?J(sensor.flags):J()},
     {"speed_m_s",worker_fresh&&std::isfinite(sensor.linear_velocity[0])&&std::isfinite(sensor.linear_velocity[1])&&std::isfinite(sensor.linear_velocity[2])?
        J(std::hypot(std::hypot(sensor.linear_velocity[0],sensor.linear_velocity[1]),sensor.linear_velocity[2])):J()},
     {"yaw_rate_rad_s",effect_result==0?J(effect.yaw_rate):J()},{"damping_nm_s",effect_result==0?J(effect.damping_nm_s):J()},
     {"effect","additional_yaw_damping"},{"yaw_moment_nm",effect.yaw_moment_nm},{"power_w",effect.power_w},
     {"model_age",std::isfinite(model_age)?J(model_age):J()},{"risk",risk},{"authority",authority}};
    J output={{"protocol",2},{"host_id",host_id},{"heartbeat",++heartbeat},
    {"model_result",{{"generation",result.generation},{"car_hash",result.car_hash},{"frame",result.frame},
       {"current_context",result.frame>0&&result.generation==bridge_generation&&result.car_hash==identity_hash&&result.error.empty()},
       {"age_seconds",std::chrono::duration<double>(now-result.source_time).count()}}},
    {"status",status},{"detail",detail},{"model_frame",frame},{"telemetry_packet",last_packet},{"telemetry_fresh",fresh},{"seen_packets",seen_packets},
    {"telemetry_age",std::chrono::duration<double>(now-last_change).count()},{"elapsed",elapsed},{"module_count",NGP_MODULE_COUNT},
    {"force_armed",physical_requested&&worker_fresh&&effect.flags==1&&sensor.api_status>=3&&sensor.api_status<=4},{"bridge",bridge},
    {"enhancement",enhancement},
    {"last_compute_us",last_us},{"max_compute_us",max_us},{"models",model_manifest},{"data",values},{"input_source",input_source},{"physics_observation",physics_observation},
    {"car_id",last_car},{"shared_car_id",narrow(st.carModel,33)},{"session_managed",session_managed},{"command_sequence",last_command},{"models_requested",requested},{"models_waiting_for_worker_inputs",bool(tyre_shadow_reader)&&requested&&!shadow_input_ready},{"command_age",lease_age},
    {"performance",performance},{"status_detail","compact"},{"background_priority",background_priority},{"model_damage_policy",damage_policy},
    {"model_dependency_contract",damage_policy=="event_root_v1"?"selected_event_damage_v1":"core_only"},
    {"tyre_response_contract",tyre_response_contract},
    {"tyre_signal_contract",tyre_signal_contract},
    {"damper_input_contract",damper_input_contract},
    {"carcass_input_contract",carcass_input_contract},
    {"vehicle_config_contract",vehicle_config_contract},
    {"lsd_torque_input_contract",lsd_torque_input_contract},
    {"windup_input_contract",windup_input_contract},
    {"hop_input_contract",hop_input_contract},
    {"drivetrain_gear_contract",drivetrain_gear_contract},
    {"brake_temperature_contract",brake_temperature_contract},{"damper_temperature_contract",damper_temperature_contract},{"body_temperature_contract",body_temperature_contract},{"chassis_temperature_contract",chassis_temperature_contract},{"energy_temperature_contract",energy_temperature_contract},{"inertia_temperature_contract",inertia_temperature_contract},{"flex_temperature_contract",flex_temperature_contract},
    {"suspension_travel_contract",suspension_travel_contract},
    {"spring_base_contract",spring_base_contract},{"damper_coefficient_contract",damper_coefficient_contract},
    {"lsd_configuration_contract",lsd_configuration_contract},
    {"unavailable_inputs",unavailable}};
    if(yaw_ablation.config.enabled)output["yaw_ablation"]={
        {"job_id",yaw_ablation.job_id},{"started",yaw_ablation_decision.started},
        {"finished",yaw_ablation_decision.finished},{"cancelled",yaw_ablation_decision.cancelled},
        {"cancel_reason",yaw_ablation_gate.cancel_reason()},{"first_rejection",yaw_ablation_rejection},
        {"phase",yaw_ablation_decision.phase},{"treatment_on",yaw_ablation_decision.treatment_on},
        {"output_allowed",yaw_ablation_decision.output_allowed},{"other_Host_force_routes_inhibited",true},
        {"start_clock",yaw_ablation_gate.start_clock()},{"sensor_clock",sensor.clock},
        {"source_clock",effect.source_clock},{"effect_sequence",effect.sequence},
        {"actual_command_active",effect.flags==1},{"phase_seconds",yaw_ablation.config.phase_seconds},
        {"pairs",yaw_ablation.config.pairs},{"pair_order_bits",yaw_ablation.config.pair_order_bits}};
    status_publisher.submit(std::move(output));
  }
  // Read/control polling is 200 Hz; model scheduling remains capped at 20 Hz.
  // A qualified body command has a one-tick (3.001 ms) delivery lease.
  // The ordinary 200 Hz loop can miss that lease before the next Worker tick.
  const int poll_ms=(body_enabled&&!body_channel.faulted())||damper_path.active()||damper_path.waiting()||
      brake_force_enabled||brake_execution.waiting()?1:5;
  LARGE_INTEGER due;due.QuadPart=-10000*poll_ms;if(timer&&SetWaitableTimer(timer,&due,0,nullptr,nullptr,FALSE))WaitForSingleObject(timer,INFINITE);else Sleep(poll_ms);
 }}catch(const std::exception& e){std::fprintf(stderr,"Host error: %s\n",e.what());command_mapping.publish(Ngp4Command{});models.stop();destroy(ctx);if(timer)CloseHandle(timer);FreeLibrary(dll);CloseHandle(singleton);return 7;}
 command_mapping.publish(Ngp4Command{});damper_hints_mailbox.publish({});spring_local_mailbox.publish({});drive_local_mailbox.publish({});wheel_local_mailbox.publish({});models.cancel();models.stop();values=models.read().data;
 J final={{"protocol",2},{"host_id",host_id},{"heartbeat",++heartbeat},{"status","HOST_EXITED"},{"module_count",NGP_MODULE_COUNT},{"model_frame",frame},{"force_armed",false},
 {"seen_packets",seen_packets},{"probe",probe},{"data",values},{"detail",exit_reason},{"session_managed",session_managed}};status_publisher.submit(std::move(final));status_publisher.close();status_publisher.check();
 std::printf("Native host exited: frames=%llu, telemetry_packets=%u, force_armed=false\n",static_cast<unsigned long long>(frame),seen_packets);
 destroy(ctx);if(timer)CloseHandle(timer);FreeLibrary(dll);ReleaseMutex(singleton);CloseHandle(singleton);return 0;
}
