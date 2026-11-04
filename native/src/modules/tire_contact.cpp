// Generated native C++ from pinned tire_contact.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("nominalLoad");
static const V lit3("loadSensitivity");
static const V lit4("patchLateralScale");
static const V lit5("patchLongScale");
static const V lit6("patchInfluence");
static const V lit7("minLoad");
static const V lit8("defaultRadius");
static const V lit9("defaultWidth");
static const V lit10("defaultPressure");
static const V lit11("minPressure");
static const V lit12("minGripScale");
static const V lit13("maxGripScale");
static const V lit14("coreContactInfluence");
static const V lit15("coreGripInfluence");
static const V lit16("responseGripInfluence");
static const V lit17("responseLossInfluence");
static const V lit18("tireDynamicsGripInfluence");
static const V lit19("tireLimitLossInfluence");
static const V lit20("armCamberPatchLoss");
static const V lit21("armToePatchLoss");
static const V lit22("hopPatchLoss");
static const V lit23("memoryPatchLoss");
static const V lit24("loadBlend");
static const V lit25("contactQualityInfluence");
static const V lit26("contactTrustInfluence");
static const V lit27("contactLossInfluence");
static const V lit28("carcassSupportInfluence");
static const V lit29("carcassGripGateInfluence");
static const V lit30("carcassDeformationLoss");
static const V lit31("slipRecoveryGain");
static const V lit32("loadPathLossGain");
static const V lit33("tireDeliveryGain");
static const V lit34("surfaceLimitLoss");
static const V lit35("thermalLossGain");
static const V lit36("loadFilterTau");
static const V lit37("areaTau");
static const V lit38("gripTau");
static const V lit39("corrTau");
static const V lit40("storeOnlyDecayTau");
static const V lit41("debugStoreInterval");
static const V lit42("area");
static const V lit43("gripScale");
static const V lit44("latCorr");
static const V lit45("longCorr");
static const V lit46("load");
static const V lit47("rawLoad");
static const V lit48("slipAngle");
static const V lit49("slipRatio");
static const V lit50("radius");
static const V lit51("width");
static const V lit52("pressure");
static const V lit53("coreContact");
static const V lit54("coreGrip");
static const V lit55("responseGrip");
static const V lit56("responseLoss");
static const V lit57("contactQuality");
static const V lit58("contactTrust");
static const V lit59("contactLoss");
static const V lit60("armCamber");
static const V lit61("armToe");
static const V lit62("memory");
static const V lit63("hop");
static const V lit64("carcassSupport");
static const V lit65("carcassGripGate");
static const V lit66("carcassDeformation");
static const V lit67("recoveryGripReturn");
static const V lit68("recoverySnapRisk");
static const V lit69("loadPathLoss");
static const V lit70("tireDelivery");
static const V lit71("surfaceLimit");
static const V lit72("thermalStress");
static const V lit73("loadFront");
static const V lit74("loadRear");
static const V lit75("loadLeft");
static const V lit76("loadRight");
static const V lit77("avgArea");
static const V lit78("avgGrip");
static const V lit79("minGrip");
static const V lit80("maxLoad");
static const V lit81("linkedTireState");
static const V lit82("linkedLoadState");
static const V lit83("coreLinked");
static const V lit84("responseLinked");
static const V lit85("dynamicsLinked");
static const V lit86("armLinked");
static const V lit87("memoryLinked");
static const V lit88("hopLinked");
static const V lit89("contactQualityLinked");
static const V lit90("carcassLinked");
static const V lit91("recoveryLinked");
static const V lit92("loadPathLinked");
static const V lit93("roadLinked");
static const V lit94("thermalLinked");
static const V lit95("wheelsValid");
static const V lit96("storeOnly");
static const V lit97("status");
static const V lit98("INIT");
static const V lit99("updateCount");
static const V lit100("debugStoreTimer");
static const V lit101("debugStoreNow");
static const V lit102("state");
static const V lit103("debug");
static const V lit104("huge");
static const V lit105("abs");
static const V lit106("max");
static const V lit107("safeField");
static const V lit108("safeLoadRaw");
static const V lit109("safeStore");
static const V lit110("getCar");
static const V lit111("wheels");
static const V lit112("ngp_dlt_load_");
static const V lit113("ngp_load_front");
static const V lit114("ngp_front_bias");
static const V lit115("ngp_load_rear");
static const V lit116("ngp_rear_bias");
static const V lit117("ngp_load_left");
static const V lit118("ngp_left_bias");
static const V lit119("ngp_load_right");
static const V lit120("ngp_right_bias");
static const V lit121("ngp_contact_slip_angle_");
static const V lit122("ngp_tire_slip_angle_");
static const V lit123("ngp_slip_angle_");
static const V lit124("ngp_filtered_slip_angle_");
static const V lit125("ngp_memory_slip_angle_");
static const V lit126("ngp_contact_slip_ratio_");
static const V lit127("ngp_tire_slip_ratio_");
static const V lit128("ngp_slip_ratio_");
static const V lit129("ngp_filtered_slip_ratio_");
static const V lit130("ngp_memory_slip_ratio_");
static const V lit131("ngp_tc_contact_");
static const V lit132("ngp_tc_grip_");
static const V lit133("ngp_tire_effective_grip_");
static const V lit134("ngp_tcr_effective_grip_");
static const V lit135("ngp_contact_grip_gate_");
static const V lit136("ngp_tire_contact_loss_");
static const V lit137("ngp_tcr_contact_loss_");
static const V lit138("ngp_contact_loss_");
static const V lit139("ngp_contact_quality_");
static const V lit140("ngp_tire_contact_quality_");
static const V lit141("ngp_tcr_quality_");
static const V lit142("ngp_contact_trust_");
static const V lit143("ngp_recovery_trust_");
static const V lit144("ngp_tire_grip_");
static const V lit145("ngp_memory_grip_");
static const V lit146("ngp_tire_limit_");
static const V lit147("ngp_tdyn_tire_limit_");
static const V lit148("ngp_control_arm_camber_");
static const V lit149("ngp_arm_camber_");
static const V lit150("ngp_ca_camber_");
static const V lit151("ngp_control_arm_toe_");
static const V lit152("ngp_arm_toe_");
static const V lit153("ngp_ca_toe_");
static const V lit154("ngp_rubber_memory_");
static const V lit155("ngp_tire_memory_");
static const V lit156("ngp_memory_");
static const V lit157("ngp_slide_memory_");
static const V lit158("ngp_tirehop_energy_");
static const V lit159("ngp_tire_hop_energy_");
static const V lit160("ngp_tire_hop_");
static const V lit161("ngp_carcass_support_");
static const V lit162("ngp_tire_carcass_support_");
static const V lit163("ngp_carcass_grip_gate_");
static const V lit164("ngp_tire_deformation_");
static const V lit165("ngp_carcass_deformation_");
static const V lit166("ngp_slip_grip_return_");
static const V lit167("ngp_grip_return_");
static const V lit168("ngp_slip_snap_risk_");
static const V lit169("ngp_snap_risk_");
static const V lit170("ngp_load_path_loss_");
static const V lit171("ngp_lp_loss_");
static const V lit172("ngp_road_path_loss_");
static const V lit173("ngp_load_path_tire_delivery_");
static const V lit174("ngp_lp_tire_delivery_");
static const V lit175("ngp_road_tire_delivery_");
static const V lit176("ngp_road_surface_limit_");
static const V lit177("ngp_rii_surface_limit_");
static const V lit178("ngp_thermal_stress_");
static const V lit179("ngp_tire_heat_seed_");
static const V lit180("ngp_carcass_heat_seed_");
static const V lit181("loadK");
static const V lit182("ngp_wheel_load_");
static const V lit183("ngp_load_wheel_");
static const V lit184("ngp_contact_load_");
static const V lit185("ngp_tire_state_load_");
static const V lit186("ngp_tire_load_input_");
static const V lit187("ngp_hub_wheel_load_");
static const V lit188("tyreRadius");
static const V lit189("tyreWidth");
static const V lit190("tyrePressure");
static const V lit191("ngp_tyre_pressure_");
static const V lit192("ngp_tire_pressure_");
static const V lit193("sqrt");
static const V lit194("surfaceGrip");
static const V lit195("ngp_caster_grip_");
static const V lit196("cos");
static const V lit197("min");
static const V lit198("pi");
static const V lit199("ngp_cp_area_");
static const V lit200("ngp_cp_grip_");
static const V lit201("ngp_cp_lat_");
static const V lit202("ngp_cp_long_");
static const V lit203("ngp_cp_load_");
static const V lit204("ngp_tire_contact_area_");
static const V lit205("ngp_tire_contact_grip_");
static const V lit206("ngp_tire_contact_lat_");
static const V lit207("ngp_tire_contact_long_");
static const V lit208("ngp_tire_contact_load_");
static const V lit209("ngp_tire_patch_area_");
static const V lit210("ngp_tire_patch_grip_");
static const V lit211("ngp_tire_patch_lat_");
static const V lit212("ngp_tire_patch_long_");
static const V lit213("ngp_tcp_area_");
static const V lit214("ngp_tcp_grip_");
static const V lit215("ngp_tcp_lat_");
static const V lit216("ngp_tcp_long_");
static const V lit217("ngp_tcp_load_");
static const V lit218("ngp_cp_slip_angle_");
static const V lit219("ngp_cp_slip_ratio_");
static const V lit220("ngp_cp_pressure_");
static const V lit221("ngp_cp_width_");
static const V lit222("ngp_cp_radius_");
static const V lit223("ngp_cp_core_contact_");
static const V lit224("ngp_cp_response_grip_");
static const V lit225("ngp_cp_response_loss_");
static const V lit226("ngp_cp_contact_quality_");
static const V lit227("ngp_cp_contact_trust_");
static const V lit228("ngp_cp_contact_loss_");
static const V lit229("ngp_cp_carcass_support_");
static const V lit230("ngp_cp_tire_delivery_");
static const V lit231("ngp_tire_contact_status");
static const V lit232("UNKNOWN");
static const V lit233("ngp_tire_contact_update_count");
static const V lit234("ngp_tire_contact_wheels_valid");
static const V lit235("ngp_tire_contact_store_only");
static const V lit236("ngp_tire_contact_linked_tire_state");
static const V lit237("ngp_tire_contact_linked_load_state");
static const V lit238("ngp_tire_contact_avg_area");
static const V lit239("ngp_tire_contact_avg_grip");
static const V lit240("ngp_tire_contact_min_grip");
static const V lit241("ngp_tire_contact_max_load");
static const V lit242("ngp_tcp_avg_area");
static const V lit243("ngp_tcp_avg_grip");
static const V lit244("ngp_tcp_min_grip");
static const V lit245("ngp_tcp_max_load");
static const V lit246("ngp_tire_contact_load_front");
static const V lit247("ngp_tire_contact_load_rear");
static const V lit248("ngp_tire_contact_load_left");
static const V lit249("ngp_tire_contact_load_right");
static const V lit250("ngp_tire_contact_core_linked");
static const V lit251("ngp_tire_contact_response_linked");
static const V lit252("ngp_tire_contact_dynamics_linked");
static const V lit253("ngp_tire_contact_arm_linked");
static const V lit254("ngp_tire_contact_memory_linked");
static const V lit255("ngp_tire_contact_hop_linked");
static const V lit256("ngp_tire_contact_quality_linked");
static const V lit257("ngp_tire_contact_carcass_linked");
static const V lit258("ngp_tire_contact_recovery_linked");
static const V lit259("ngp_tire_contact_load_path_linked");
static const V lit260("ngp_tire_contact_road_linked");
static const V lit261("ngp_tire_contact_thermal_linked");
static const V lit262("init");
static const V lit263("update");
static const V lit264("BAD DT");
static const V lit265("STORE ONLY");
static const V lit266("NO WHEELS");
static const V lit267("RUNNING");
static const V lit268("getArea");
static const V lit269("getGripScale");
static const V lit270("getLateralCorrection");
static const V lit271("getLongitudinalCorrection");
static const V lit272("getLoad");
static const V lit273("getState");
static const V lit274("debugStr");
static const V lit275("format");
static const V lit276("Status %s / Count %.0f\n");
static const V lit277("Area %.4f Grip %.3f Lat %.3f Long %.3f\n");
static const V lit278("Load %.0f SlipA %.3f SlipR %.3f\n");
static const V lit279("CQ %.2f Trust %.2f Loss %.2f Carc %.2f Del %.2f");
static const V lit280("Status %s / Count %.0f / Wheels %s / StoreOnly %s\n");
static const V lit281("CP Grip FL %.3f FR %.3f RL %.3f RR %.3f\n");
static const V lit282("Area    FL %.4f FR %.4f RL %.4f RR %.4f\n");
static const V lit283("LatCorr %.3f %.3f %.3f %.3f\n");
static const V lit284("LongCr  %.3f %.3f %.3f %.3f\n");
static const V lit285("Links TS:%s LT:%s Core:%s Resp:%s Dyn:%s Arm:%s CQ:%s Carc:%s");
static const V lit286("OK");
static const V lit287("NIL");
static const V lit288("YES");
static const V lit289("NO");
V load_tire_contact(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(36);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(3000.0));set(z,lit3,V(0.25));set(z,lit4,V(0.8));set(z,lit5,V(0.6));set(z,lit6,V(0.12));set(z,lit7,V(100.0));set(z,lit8,V(0.33));set(z,lit9,V(0.225));set(z,lit10,V(1.8));set(z,lit11,V(0.5));set(z,lit12,V(0.5));set(z,lit13,V(1.2));set(z,lit14,V(0.22));set(z,lit15,V(0.18));set(z,lit16,V(0.22));set(z,lit17,V(0.16));set(z,lit18,V(0.12));set(z,lit19,V(0.08));set(z,lit20,V(0.035));set(z,lit21,V(0.045));set(z,lit22,V(0.08));set(z,lit23,V(0.06));set(z,lit24,V(0.35));set(z,lit25,V(0.18));set(z,lit26,V(0.1));set(z,lit27,V(0.18));set(z,lit28,V(0.16));set(z,lit29,V(0.12));set(z,lit30,V(0.1));set(z,lit31,V(0.08));set(z,lit32,V(0.1));set(z,lit33,V(0.12));set(z,lit34,V(0.08));set(z,lit35,V(0.06));set(z,lit36,V(0.05));set(z,lit37,V(0.06));set(z,lit38,V(0.055));set(z,lit39,V(0.05));set(z,lit40,V(0.22));set(z,lit41,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit42,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit43,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit44,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit45,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit46,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit47,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit48,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit49,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit50,([&](){V z=table();set(z,V(0.0),V(0.33));set(z,V(1.0),V(0.33));set(z,V(2.0),V(0.33));set(z,V(3.0),V(0.33));return z;})());set(z,lit51,([&](){V z=table();set(z,V(0.0),V(0.225));set(z,V(1.0),V(0.225));set(z,V(2.0),V(0.225));set(z,V(3.0),V(0.225));return z;})());set(z,lit52,([&](){V z=table();set(z,V(0.0),V(1.8));set(z,V(1.0),V(1.8));set(z,V(2.0),V(1.8));set(z,V(3.0),V(1.8));return z;})());set(z,lit53,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit54,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,V(0.5));set(z,lit74,V(0.5));set(z,lit75,V(0.5));set(z,lit76,V(0.5));set(z,lit77,V(0.0));set(z,lit78,V(1.0));set(z,lit79,V(1.0));set(z,lit80,V(0.0));set(z,lit81,V(false));set(z,lit82,V(false));set(z,lit83,V(false));set(z,lit84,V(false));set(z,lit85,V(false));set(z,lit86,V(false));set(z,lit87,V(false));set(z,lit88,V(false));set(z,lit89,V(false));set(z,lit90,V(false));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,lit98);set(z,lit99,V(0.0));set(z,lit100,V(999.0));set(z,lit101,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit104)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit104)))):t8;})())){return Args{e->slot(0,1)};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t11=first(call(e->slot(1,3),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t11));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit105),Args{([&](){V t12=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));return !truth(t12)?V(0.0):t12;})()});
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t13=([&](){V t14=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));return !truth(t14)?V(0.0):t14;})();refs[0].put(std::move(t13));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t15=([&](){V t16=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));return !truth(t16)?V(0.0):t16;})();refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t17=([&](){V t18=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));return !truth(t18)?V(0.0):t18;})();refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t19=([&](){V t20=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));return !truth(t20)?V(0.0):t20;})();refs[0].put(std::move(t19));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),divv(e->slot(0,3),first(call(get(e->get("math"),lit106),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)})))))};
return Args{};});
{V t21=get(e->slot(0,0),lit107);e->slot(0,7)=std::move(t21);}
{V t22=get(e->slot(0,0),lit108);e->slot(0,8)=std::move(t22);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t23=first(call(e->slot(1,8),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t23);}
if(truth(eq(e->slot(0,2),V()))){return Args{e->slot(0,1)};
}
return call(e->slot(1,3),Args{e->slot(0,2),e->slot(0,1)});
return Args{};});
{V t24=get(e->slot(0,0),lit109);e->slot(0,10)=std::move(t24);}
e->slot(0,11)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t25=V(!truth(e->get("ac")));return !truth(t25)?V(!truth(get(e->get("ac"),lit110))):t25;})())){return Args{V()};
}
{Args t26=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit110),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t26,0);e->slot(0,1)=arg(t26,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,7),Args{e->slot(0,0),lit111,V()});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t27=first(call(e->slot(1,7),Args{e->slot(0,0),e->slot(0,1),V()}));e->slot(0,2)=std::move(t27);}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
return call(e->slot(1,7),Args{e->slot(0,0),add(e->slot(0,1),V(1.0)),V()});
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t28=add(([&](){V t29=get(e->slot(1,2),lit100);return !truth(t29)?V(0.0):t29;})(),([&](){V t30=e->slot(0,0);return !truth(t30)?V(0.0):t30;})());refs[0].put(std::move(t28));}
if(truth(ge(get(e->slot(1,2),lit100),get(get(e->slot(1,1),lit1),lit41)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t31=V(0.0);refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t32=V(true);refs[0].put(std::move(t32));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t33=V(false);refs[0].put(std::move(t33));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t34=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t34);}
{double t35=num(V(1.0)),t36=num(length(e->slot(0,1))),t37=num(V(1.0));for(double t38=t35;(t37>0?t38<=t36:t38>=t36);t38+=t37){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t38);{V t39=first(call(e->slot(2,8),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t39);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),e->slot(1,0)})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t40=first(call(e->slot(1,8),Args{concat(lit112,e->slot(0,0))}));e->slot(0,1)=std::move(t40);}
if(truth(eq(e->slot(0,1),V()))){return Args{V()};
}
{V t41=([&](){V t42=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));return !truth(t42)?V(0.0):t42;})();e->slot(0,2)=std::move(t41);}
if(truth(lt(first(call(get(e->get("math"),lit105),Args{e->slot(0,2)})),mul(get(get(e->slot(1,1),lit1),lit2),V(0.8))))){return Args{add(get(get(e->slot(1,1),lit1),lit2),e->slot(0,2))};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t43=first(call(e->slot(1,8),Args{lit113}));e->slot(0,0)=std::move(t43);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t44=first(call(e->slot(1,8),Args{lit114}));refs[0].put(std::move(t44));}
}
{V t45=first(call(e->slot(1,8),Args{lit115}));e->slot(0,1)=std::move(t45);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t46=first(call(e->slot(1,8),Args{lit116}));refs[0].put(std::move(t46));}
}
{V t47=first(call(e->slot(1,8),Args{lit117}));e->slot(0,2)=std::move(t47);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t48=first(call(e->slot(1,8),Args{lit118}));refs[0].put(std::move(t48));}
}
{V t49=first(call(e->slot(1,8),Args{lit119}));e->slot(0,3)=std::move(t49);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t50=first(call(e->slot(1,8),Args{lit120}));refs[0].put(std::move(t50));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t51=first(call(e->slot(1,4),Args{([&](){V t52=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.5)}));return !truth(t52)?V(0.5):t52;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t53=first(call(e->slot(1,4),Args{([&](){V t54=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.5)}));return !truth(t54)?V(0.5):t54;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t55=first(call(e->slot(1,4),Args{([&](){V t56=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.5)}));return !truth(t56)?V(0.5):t56;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t57=first(call(e->slot(1,4),Args{([&](){V t58=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.5)}));return !truth(t58)?V(0.5):t58;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t59=([&](){V t60=([&](){V t61=([&](){V t62=ne(e->slot(0,0),V());return !truth(t62)?ne(e->slot(0,1),V()):t62;})();return !truth(t61)?ne(e->slot(0,2),V()):t61;})();return !truth(t60)?ne(e->slot(0,3),V()):t60;})();refs[0].put(std::move(t59));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t63=V(false);e->slot(0,2)=std::move(t63);}
{V t64=first(call(e->slot(1,8),Args{concat(lit121,e->slot(0,0))}));e->slot(0,3)=std::move(t64);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t65=first(call(e->slot(1,8),Args{concat(lit122,e->slot(0,0))}));refs[0].put(std::move(t65));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t66=first(call(e->slot(1,8),Args{concat(lit123,e->slot(0,0))}));refs[0].put(std::move(t66));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t67=first(call(e->slot(1,8),Args{concat(lit124,e->slot(0,0))}));refs[0].put(std::move(t67));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t68=first(call(e->slot(1,8),Args{concat(lit125,e->slot(0,0))}));refs[0].put(std::move(t68));}
}
{V t69=first(call(e->slot(1,8),Args{concat(lit126,e->slot(0,0))}));e->slot(0,4)=std::move(t69);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t70=first(call(e->slot(1,8),Args{concat(lit127,e->slot(0,0))}));refs[0].put(std::move(t70));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t71=first(call(e->slot(1,8),Args{concat(lit128,e->slot(0,0))}));refs[0].put(std::move(t71));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t72=first(call(e->slot(1,8),Args{concat(lit129,e->slot(0,0))}));refs[0].put(std::move(t72));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t73=first(call(e->slot(1,8),Args{concat(lit130,e->slot(0,0))}));refs[0].put(std::move(t73));}
}
if(truth(([&](){V t74=ne(e->slot(0,3),V());return !truth(t74)?ne(e->slot(0,4),V()):t74;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t75=V(true);refs[0].put(std::move(t75));}
}
{std::array<Ref,1> refs{Ref(e,0,3)};V t76=([&](){V t77=first(call(e->slot(1,3),joined(Args{e->slot(0,3)},call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,1),lit48,V(0.0)})),V(0.0)}))));return !truth(t77)?V(0.0):t77;})();refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t78=([&](){V t79=first(call(e->slot(1,3),joined(Args{e->slot(0,4)},call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,1),lit49,V(0.0)})),V(0.0)}))));return !truth(t79)?V(0.0):t79;})();refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit48),e->slot(0,0))};V t80=e->slot(0,3);refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit49),e->slot(0,0))};V t81=e->slot(0,4);refs[0].put(std::move(t81));}
return Args{e->slot(0,3),e->slot(0,4),e->slot(0,2)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,23);auto e=&storage;e->slot(0,0)=arg(a,0);{V t82=first(call(e->slot(1,8),Args{concat(lit131,e->slot(0,0))}));e->slot(0,1)=std::move(t82);}
{V t83=first(call(e->slot(1,8),Args{concat(lit132,e->slot(0,0))}));e->slot(0,2)=std::move(t83);}
if(truth(([&](){V t84=ne(e->slot(0,1),V());return !truth(t84)?ne(e->slot(0,2),V()):t84;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t85=V(true);refs[0].put(std::move(t85));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit53),e->slot(0,0))};V t86=first(call(e->slot(1,4),Args{([&](){V t87=first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)}));return !truth(t87)?V(1.0):t87;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit54),e->slot(0,0))};V t88=first(call(e->slot(1,4),Args{([&](){V t89=first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)}));return !truth(t89)?V(1.0):t89;})(),V(0.0),V(1.25)}));refs[0].put(std::move(t88));}
{V t90=first(call(e->slot(1,8),Args{concat(lit133,e->slot(0,0))}));e->slot(0,3)=std::move(t90);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t91=first(call(e->slot(1,8),Args{concat(lit134,e->slot(0,0))}));refs[0].put(std::move(t91));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t92=first(call(e->slot(1,8),Args{concat(lit135,e->slot(0,0))}));refs[0].put(std::move(t92));}
}
{V t93=first(call(e->slot(1,8),Args{concat(lit136,e->slot(0,0))}));e->slot(0,4)=std::move(t93);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t94=first(call(e->slot(1,8),Args{concat(lit137,e->slot(0,0))}));refs[0].put(std::move(t94));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t95=first(call(e->slot(1,8),Args{concat(lit138,e->slot(0,0))}));refs[0].put(std::move(t95));}
}
if(truth(([&](){V t96=ne(e->slot(0,3),V());return !truth(t96)?ne(e->slot(0,4),V()):t96;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t97=V(true);refs[0].put(std::move(t97));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit55),e->slot(0,0))};V t98=first(call(e->slot(1,4),Args{([&](){V t99=first(call(e->slot(1,3),Args{e->slot(0,3),V(1.0)}));return !truth(t99)?V(1.0):t99;})(),V(0.35),V(1.25)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit56),e->slot(0,0))};V t100=first(call(e->slot(1,4),Args{([&](){V t101=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)}));return !truth(t101)?V(0.0):t101;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t100));}
{V t102=first(call(e->slot(1,8),Args{concat(lit139,e->slot(0,0))}));e->slot(0,5)=std::move(t102);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t103=first(call(e->slot(1,8),Args{concat(lit140,e->slot(0,0))}));refs[0].put(std::move(t103));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t104=first(call(e->slot(1,8),Args{concat(lit141,e->slot(0,0))}));refs[0].put(std::move(t104));}
}
{V t105=first(call(e->slot(1,8),Args{concat(lit142,e->slot(0,0))}));e->slot(0,6)=std::move(t105);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t106=first(call(e->slot(1,8),Args{concat(lit143,e->slot(0,0))}));refs[0].put(std::move(t106));}
}
{V t107=first(call(e->slot(1,8),Args{concat(lit138,e->slot(0,0))}));e->slot(0,7)=std::move(t107);}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t108=first(call(e->slot(1,8),Args{concat(lit136,e->slot(0,0))}));refs[0].put(std::move(t108));}
}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t109=first(call(e->slot(1,8),Args{concat(lit137,e->slot(0,0))}));refs[0].put(std::move(t109));}
}
if(truth(([&](){V t110=([&](){V t111=ne(e->slot(0,5),V());return !truth(t111)?ne(e->slot(0,6),V()):t111;})();return !truth(t110)?ne(e->slot(0,7),V()):t110;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t112=V(true);refs[0].put(std::move(t112));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit57),e->slot(0,0))};V t113=first(call(e->slot(1,4),Args{([&](){V t114=first(call(e->slot(1,3),Args{e->slot(0,5),V(1.0)}));return !truth(t114)?V(1.0):t114;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit58),e->slot(0,0))};V t115=first(call(e->slot(1,4),Args{([&](){V t116=first(call(e->slot(1,3),Args{e->slot(0,6),get(get(e->slot(1,2),lit57),e->slot(0,0))}));return !truth(t116)?get(get(e->slot(1,2),lit57),e->slot(0,0)):t116;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit59),e->slot(0,0))};V t117=first(call(e->slot(1,4),Args{([&](){V t118=first(call(e->slot(1,3),joined(Args{e->slot(0,7)},call(get(e->get("math"),lit106),Args{sub(V(1.0),get(get(e->slot(1,2),lit57),e->slot(0,0))),V(0.0)}))));return !truth(t118)?V(0.0):t118;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t117));}
{V t119=first(call(e->slot(1,8),Args{concat(lit144,e->slot(0,0))}));e->slot(0,8)=std::move(t119);}
if(truth(eq(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(e,0,8)};V t120=first(call(e->slot(1,8),Args{concat(lit145,e->slot(0,0))}));refs[0].put(std::move(t120));}
}
{V t121=first(call(e->slot(1,8),Args{concat(lit146,e->slot(0,0))}));e->slot(0,9)=std::move(t121);}
if(truth(eq(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(e,0,9)};V t122=first(call(e->slot(1,8),Args{concat(lit147,e->slot(0,0))}));refs[0].put(std::move(t122));}
}
if(truth(([&](){V t123=ne(e->slot(0,8),V());return !truth(t123)?ne(e->slot(0,9),V()):t123;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t124=V(true);refs[0].put(std::move(t124));}
}
{V t125=first(call(e->slot(1,8),Args{concat(lit148,e->slot(0,0))}));e->slot(0,10)=std::move(t125);}
if(truth(eq(e->slot(0,10),V()))){{std::array<Ref,1> refs{Ref(e,0,10)};V t126=first(call(e->slot(1,8),Args{concat(lit149,e->slot(0,0))}));refs[0].put(std::move(t126));}
}
if(truth(eq(e->slot(0,10),V()))){{std::array<Ref,1> refs{Ref(e,0,10)};V t127=first(call(e->slot(1,8),Args{concat(lit150,e->slot(0,0))}));refs[0].put(std::move(t127));}
}
{V t128=first(call(e->slot(1,8),Args{concat(lit151,e->slot(0,0))}));e->slot(0,11)=std::move(t128);}
if(truth(eq(e->slot(0,11),V()))){{std::array<Ref,1> refs{Ref(e,0,11)};V t129=first(call(e->slot(1,8),Args{concat(lit152,e->slot(0,0))}));refs[0].put(std::move(t129));}
}
if(truth(eq(e->slot(0,11),V()))){{std::array<Ref,1> refs{Ref(e,0,11)};V t130=first(call(e->slot(1,8),Args{concat(lit153,e->slot(0,0))}));refs[0].put(std::move(t130));}
}
if(truth(([&](){V t131=ne(e->slot(0,10),V());return !truth(t131)?ne(e->slot(0,11),V()):t131;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t132=V(true);refs[0].put(std::move(t132));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit60),e->slot(0,0))};V t133=([&](){V t134=first(call(e->slot(1,3),Args{e->slot(0,10),V(0.0)}));return !truth(t134)?V(0.0):t134;})();refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit61),e->slot(0,0))};V t135=([&](){V t136=first(call(e->slot(1,3),Args{e->slot(0,11),V(0.0)}));return !truth(t136)?V(0.0):t136;})();refs[0].put(std::move(t135));}
{V t137=first(call(e->slot(1,8),Args{concat(lit154,e->slot(0,0))}));e->slot(0,12)=std::move(t137);}
if(truth(eq(e->slot(0,12),V()))){{std::array<Ref,1> refs{Ref(e,0,12)};V t138=first(call(e->slot(1,8),Args{concat(lit155,e->slot(0,0))}));refs[0].put(std::move(t138));}
}
if(truth(eq(e->slot(0,12),V()))){{std::array<Ref,1> refs{Ref(e,0,12)};V t139=first(call(e->slot(1,8),Args{concat(lit156,e->slot(0,0))}));refs[0].put(std::move(t139));}
}
if(truth(eq(e->slot(0,12),V()))){{std::array<Ref,1> refs{Ref(e,0,12)};V t140=first(call(e->slot(1,8),Args{concat(lit157,e->slot(0,0))}));refs[0].put(std::move(t140));}
}
if(truth(ne(e->slot(0,12),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t141=V(true);refs[0].put(std::move(t141));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit62),e->slot(0,0))};V t142=first(call(e->slot(1,4),Args{([&](){V t143=first(call(e->slot(1,3),Args{e->slot(0,12),V(0.0)}));return !truth(t143)?V(0.0):t143;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t142));}
{V t144=first(call(e->slot(1,8),Args{concat(lit158,e->slot(0,0))}));e->slot(0,13)=std::move(t144);}
if(truth(eq(e->slot(0,13),V()))){{std::array<Ref,1> refs{Ref(e,0,13)};V t145=first(call(e->slot(1,8),Args{concat(lit159,e->slot(0,0))}));refs[0].put(std::move(t145));}
}
if(truth(eq(e->slot(0,13),V()))){{std::array<Ref,1> refs{Ref(e,0,13)};V t146=first(call(e->slot(1,8),Args{concat(lit160,e->slot(0,0))}));refs[0].put(std::move(t146));}
}
if(truth(ne(e->slot(0,13),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t147=V(true);refs[0].put(std::move(t147));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit63),e->slot(0,0))};V t148=first(call(e->slot(1,4),Args{([&](){V t149=first(call(e->slot(1,3),Args{e->slot(0,13),V(0.0)}));return !truth(t149)?V(0.0):t149;})(),V(0.0),V(1.0)}));refs[0].put(std::move(t148));}
{V t150=first(call(e->slot(1,8),Args{concat(lit161,e->slot(0,0))}));e->slot(0,14)=std::move(t150);}
if(truth(eq(e->slot(0,14),V()))){{std::array<Ref,1> refs{Ref(e,0,14)};V t151=first(call(e->slot(1,8),Args{concat(lit162,e->slot(0,0))}));refs[0].put(std::move(t151));}
}
{V t152=first(call(e->slot(1,8),Args{concat(lit163,e->slot(0,0))}));e->slot(0,15)=std::move(t152);}
if(truth(eq(e->slot(0,15),V()))){{std::array<Ref,1> refs{Ref(e,0,15)};V t153=first(call(e->slot(1,8),Args{concat(lit135,e->slot(0,0))}));refs[0].put(std::move(t153));}
}
{V t154=first(call(e->slot(1,8),Args{concat(lit164,e->slot(0,0))}));e->slot(0,16)=std::move(t154);}
if(truth(eq(e->slot(0,16),V()))){{std::array<Ref,1> refs{Ref(e,0,16)};V t155=first(call(e->slot(1,8),Args{concat(lit165,e->slot(0,0))}));refs[0].put(std::move(t155));}
}
if(truth(([&](){V t156=([&](){V t157=ne(e->slot(0,14),V());return !truth(t157)?ne(e->slot(0,15),V()):t157;})();return !truth(t156)?ne(e->slot(0,16),V()):t156;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t158=V(true);refs[0].put(std::move(t158));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit64),e->slot(0,0))};V t159=first(call(e->slot(1,4),Args{([&](){V t160=first(call(e->slot(1,3),Args{e->slot(0,14),V(1.0)}));return !truth(t160)?V(1.0):t160;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit65),e->slot(0,0))};V t161=first(call(e->slot(1,4),Args{([&](){V t162=first(call(e->slot(1,3),Args{e->slot(0,15),V(1.0)}));return !truth(t162)?V(1.0):t162;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit66),e->slot(0,0))};V t163=first(call(e->slot(1,4),Args{([&](){V t164=first(call(e->slot(1,3),Args{e->slot(0,16),V(0.0)}));return !truth(t164)?V(0.0):t164;})(),V(0.0),V(1.5)}));refs[0].put(std::move(t163));}
{V t165=first(call(e->slot(1,8),Args{concat(lit166,e->slot(0,0))}));e->slot(0,17)=std::move(t165);}
if(truth(eq(e->slot(0,17),V()))){{std::array<Ref,1> refs{Ref(e,0,17)};V t166=first(call(e->slot(1,8),Args{concat(lit167,e->slot(0,0))}));refs[0].put(std::move(t166));}
}
{V t167=first(call(e->slot(1,8),Args{concat(lit168,e->slot(0,0))}));e->slot(0,18)=std::move(t167);}
if(truth(eq(e->slot(0,18),V()))){{std::array<Ref,1> refs{Ref(e,0,18)};V t168=first(call(e->slot(1,8),Args{concat(lit169,e->slot(0,0))}));refs[0].put(std::move(t168));}
}
if(truth(([&](){V t169=ne(e->slot(0,17),V());return !truth(t169)?ne(e->slot(0,18),V()):t169;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t170=V(true);refs[0].put(std::move(t170));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit67),e->slot(0,0))};V t171=first(call(e->slot(1,4),Args{([&](){V t172=first(call(e->slot(1,3),Args{e->slot(0,17),V(1.0)}));return !truth(t172)?V(1.0):t172;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit68),e->slot(0,0))};V t173=first(call(e->slot(1,4),Args{([&](){V t174=first(call(e->slot(1,3),Args{e->slot(0,18),V(0.0)}));return !truth(t174)?V(0.0):t174;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t173));}
{V t175=first(call(e->slot(1,8),Args{concat(lit170,e->slot(0,0))}));e->slot(0,19)=std::move(t175);}
if(truth(eq(e->slot(0,19),V()))){{std::array<Ref,1> refs{Ref(e,0,19)};V t176=first(call(e->slot(1,8),Args{concat(lit171,e->slot(0,0))}));refs[0].put(std::move(t176));}
}
if(truth(eq(e->slot(0,19),V()))){{std::array<Ref,1> refs{Ref(e,0,19)};V t177=first(call(e->slot(1,8),Args{concat(lit172,e->slot(0,0))}));refs[0].put(std::move(t177));}
}
{V t178=first(call(e->slot(1,8),Args{concat(lit173,e->slot(0,0))}));e->slot(0,20)=std::move(t178);}
if(truth(eq(e->slot(0,20),V()))){{std::array<Ref,1> refs{Ref(e,0,20)};V t179=first(call(e->slot(1,8),Args{concat(lit174,e->slot(0,0))}));refs[0].put(std::move(t179));}
}
if(truth(eq(e->slot(0,20),V()))){{std::array<Ref,1> refs{Ref(e,0,20)};V t180=first(call(e->slot(1,8),Args{concat(lit175,e->slot(0,0))}));refs[0].put(std::move(t180));}
}
if(truth(([&](){V t181=ne(e->slot(0,19),V());return !truth(t181)?ne(e->slot(0,20),V()):t181;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t182=V(true);refs[0].put(std::move(t182));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit69),e->slot(0,0))};V t183=first(call(e->slot(1,4),Args{([&](){V t184=first(call(e->slot(1,3),Args{e->slot(0,19),V(0.0)}));return !truth(t184)?V(0.0):t184;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit70),e->slot(0,0))};V t185=first(call(e->slot(1,4),Args{([&](){V t186=first(call(e->slot(1,3),Args{e->slot(0,20),V(1.0)}));return !truth(t186)?V(1.0):t186;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t185));}
{V t187=first(call(e->slot(1,8),Args{concat(lit176,e->slot(0,0))}));e->slot(0,21)=std::move(t187);}
if(truth(eq(e->slot(0,21),V()))){{std::array<Ref,1> refs{Ref(e,0,21)};V t188=first(call(e->slot(1,8),Args{concat(lit177,e->slot(0,0))}));refs[0].put(std::move(t188));}
}
if(truth(ne(e->slot(0,21),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t189=V(true);refs[0].put(std::move(t189));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit71),e->slot(0,0))};V t190=first(call(e->slot(1,4),Args{([&](){V t191=first(call(e->slot(1,3),Args{e->slot(0,21),V(0.0)}));return !truth(t191)?V(0.0):t191;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t190));}
{V t192=first(call(e->slot(1,8),Args{concat(lit178,e->slot(0,0))}));e->slot(0,22)=std::move(t192);}
if(truth(eq(e->slot(0,22),V()))){{std::array<Ref,1> refs{Ref(e,0,22)};V t193=first(call(e->slot(1,8),Args{concat(lit179,e->slot(0,0))}));refs[0].put(std::move(t193));}
}
if(truth(eq(e->slot(0,22),V()))){{std::array<Ref,1> refs{Ref(e,0,22)};V t194=first(call(e->slot(1,8),Args{concat(lit180,e->slot(0,0))}));refs[0].put(std::move(t194));}
}
if(truth(ne(e->slot(0,22),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t195=V(true);refs[0].put(std::move(t195));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit72),e->slot(0,0))};V t196=first(call(e->slot(1,4),Args{([&](){V t197=first(call(e->slot(1,3),Args{e->slot(0,22),V(0.0)}));return !truth(t197)?V(0.0):t197;})(),V(0.0),V(1.2)}));refs[0].put(std::move(t196));}
return joined(Args{first(call(e->slot(1,4),Args{([&](){V t198=first(call(e->slot(1,3),Args{e->slot(0,8),V(1.0)}));return !truth(t198)?V(1.0):t198;})(),V(0.0),V(1.25)}))},call(e->slot(1,4),Args{([&](){V t199=first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)}));return !truth(t199)?V(0.0):t199;})(),V(0.0),V(2.0)}));
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t200=V();e->slot(0,2)=std::move(t200);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,0,2)};V t201=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit46,V()})),V()}));refs[0].put(std::move(t201));}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t202=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit181,V()})),V()}));refs[0].put(std::move(t202));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t203=first(call(e->slot(1,3),Args{V(),V()}));refs[0].put(std::move(t203));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t204=first(call(e->slot(1,3),Args{V(),V()}));refs[0].put(std::move(t204));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t205=first(call(e->slot(1,3),Args{V(),V()}));refs[0].put(std::move(t205));}
}
}
{V t206=first(call(e->slot(1,8),Args{concat(lit182,e->slot(0,1))}));e->slot(0,3)=std::move(t206);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t207=first(call(e->slot(1,8),Args{concat(lit183,e->slot(0,1))}));refs[0].put(std::move(t207));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t208=first(call(e->slot(1,8),Args{concat(lit184,e->slot(0,1))}));refs[0].put(std::move(t208));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t209=first(call(e->slot(1,8),Args{concat(lit185,e->slot(0,1))}));refs[0].put(std::move(t209));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t210=first(call(e->slot(1,8),Args{concat(lit186,e->slot(0,1))}));refs[0].put(std::move(t210));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t211=first(call(e->slot(1,8),Args{concat(lit187,e->slot(0,1))}));refs[0].put(std::move(t211));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t212=V(true);refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t213=([&](){V t214=first(call(e->slot(1,3),Args{e->slot(0,3),([&](){V t215=e->slot(0,2);return !truth(t215)?get(get(e->slot(1,1),lit1),lit2):t215;})()}));return !truth(t214)?get(get(e->slot(1,1),lit1),lit2):t214;})();refs[0].put(std::move(t213));}
if(truth(ne(e->slot(0,2),V()))){return Args{add(mul(e->slot(0,2),sub(V(1.0),get(get(e->slot(1,1),lit1),lit24))),mul(e->slot(0,3),get(get(e->slot(1,1),lit1),lit24)))};
}
return Args{e->slot(0,3)};
}
{V t216=first(call(e->slot(1,16),Args{e->slot(0,1)}));e->slot(0,4)=std::move(t216);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t217=V(true);refs[0].put(std::move(t217));}
if(truth(ne(e->slot(0,2),V()))){return Args{add(mul(e->slot(0,2),sub(V(1.0),get(get(e->slot(1,1),lit1),lit24))),mul(e->slot(0,4),get(get(e->slot(1,1),lit1),lit24)))};
}
return Args{e->slot(0,4)};
}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
return Args{get(get(e->slot(1,1),lit1),lit2)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t218=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit188,V()})),V()}));e->slot(0,1)=std::move(t218);}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1)};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t219=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit188,V()})),V()}));refs[0].put(std::move(t219));}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1)};
}
return Args{get(get(e->slot(1,1),lit1),lit8)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t220=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit189,V()})),V()}));e->slot(0,1)=std::move(t220);}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1)};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t221=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit189,V()})),V()}));refs[0].put(std::move(t221));}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1)};
}
return Args{get(get(e->slot(1,1),lit1),lit9)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t222=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit190,V()})),V()}));e->slot(0,2)=std::move(t222);}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t223=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit190,V()})),V()}));refs[0].put(std::move(t223));}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
return call(e->slot(1,9),joined(Args{concat(lit191,e->slot(0,1))},call(e->slot(1,9),Args{concat(lit192,e->slot(0,1)),get(get(e->slot(1,1),lit1),lit10)})));
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t224=([&](){V t225=first(call(e->slot(1,3),Args{first(call(e->slot(1,21),Args{e->slot(0,0)})),get(get(e->slot(1,1),lit1),lit8)}));return !truth(t225)?get(get(e->slot(1,1),lit1),lit8):t225;})();e->slot(0,3)=std::move(t224);}
{V t226=([&](){V t227=first(call(e->slot(1,3),Args{first(call(e->slot(1,22),Args{e->slot(0,0)})),get(get(e->slot(1,1),lit1),lit9)}));return !truth(t227)?get(get(e->slot(1,1),lit1),lit9):t227;})();e->slot(0,4)=std::move(t226);}
{V t228=([&](){V t229=first(call(e->slot(1,3),Args{first(call(e->slot(1,23),Args{e->slot(0,0),e->slot(0,1)})),get(get(e->slot(1,1),lit1),lit10)}));return !truth(t229)?get(get(e->slot(1,1),lit1),lit10):t229;})();e->slot(0,5)=std::move(t228);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t230=first(call(get(e->get("math"),lit106),Args{e->slot(0,5),get(get(e->slot(1,1),lit1),lit11)}));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t231=first(call(get(e->get("math"),lit106),Args{e->slot(0,4),V(0.001)}));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t232=first(call(get(e->get("math"),lit106),Args{e->slot(0,3),V(0.001)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t233=first(call(get(e->get("math"),lit106),Args{([&](){V t234=first(call(e->slot(1,3),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit2)}));return !truth(t234)?get(get(e->slot(1,1),lit1),lit2):t234;})(),V(0.0)}));refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit50),e->slot(0,1))};V t235=e->slot(0,3);refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit51),e->slot(0,1))};V t236=e->slot(0,4);refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit52),e->slot(0,1))};V t237=e->slot(0,5);refs[0].put(std::move(t237));}
{V t238=add(mul(mul(e->slot(0,5),V(100000.0)),e->slot(0,4)),V(1.0));e->slot(0,6)=std::move(t238);}
{V t239=mul(mul(V(2.0),first(call(get(e->get("math"),lit193),Args{divv(first(call(get(e->get("math"),lit106),Args{mul(e->slot(0,2),e->slot(0,3)),V(0.0)})),e->slot(0,6))}))),e->slot(0,4));e->slot(0,7)=std::move(t239);}
{V t240=add(add(V(1.0),mul(first(call(e->slot(1,4),Args{sub(V(1.0),get(get(e->slot(1,2),lit64),e->slot(0,1))),V(0.0),V(1.0)})),V(0.1))),mul(first(call(e->slot(1,4),Args{get(get(e->slot(1,2),lit66),e->slot(0,1)),V(0.0),V(1.0)})),V(0.05)));e->slot(0,8)=std::move(t240);}
return call(get(e->get("math"),lit106),Args{mul(e->slot(0,7),e->slot(0,8)),V(0.0)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e,0,1)};V t241=([&](){V t242=first(call(e->slot(1,3),Args{e->slot(0,1),get(get(e->slot(1,1),lit1),lit2)}));return !truth(t242)?get(get(e->slot(1,1),lit1),lit2):t242;})();refs[0].put(std::move(t241));}
{V t243=divv(e->slot(0,1),first(call(get(e->get("math"),lit106),Args{get(get(e->slot(1,1),lit1),lit2),V(1.0)})));e->slot(0,2)=std::move(t243);}
{V t244=sub(V(1.0),mul(get(get(e->slot(1,1),lit1),lit3),sub(e->slot(0,2),V(1.0))));e->slot(0,3)=std::move(t244);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t245=first(call(e->slot(1,4),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)}));refs[0].put(std::move(t245));}
{V t246=([&](){V t247=first(call(e->slot(1,3),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit194,V(1.0)})),V(1.0)}));return !truth(t247)?V(1.0):t247;})();e->slot(0,4)=std::move(t246);}
return Args{mul(e->slot(0,3),e->slot(0,4))};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(get(e->slot(1,2),lit82))))){return Args{e->slot(0,1)};
}
{V t248=([&](){V t249=([&](){V t250=le(e->slot(0,0),V(1.0));return truth(t250)?get(e->slot(1,2),lit73):t250;})();return !truth(t249)?get(e->slot(1,2),lit74):t249;})();e->slot(0,2)=std::move(t248);}
{V t251=([&](){V t252=([&](){V t253=([&](){V t254=eq(e->slot(0,0),V(0.0));return !truth(t254)?eq(e->slot(0,0),V(2.0)):t254;})();return truth(t253)?get(e->slot(1,2),lit75):t253;})();return !truth(t252)?get(e->slot(1,2),lit76):t252;})();e->slot(0,3)=std::move(t251);}
{V t255=add(mul(e->slot(0,2),V(0.75)),mul(e->slot(0,3),V(0.25)));e->slot(0,4)=std::move(t255);}
return Args{mul(e->slot(0,1),add(V(0.92),mul(e->slot(0,4),V(0.16))))};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t256=([&](){V t257=first(call(e->slot(1,9),Args{concat(lit195,e->slot(0,0)),V(1.0)}));return !truth(t257)?V(1.0):t257;})();e->slot(0,2)=std::move(t256);}
return Args{mul(e->slot(0,1),e->slot(0,2))};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t258=e->slot(0,1);e->slot(0,4)=std::move(t258);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t259=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit53),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit14))));refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t260=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit54),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit15))));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t261=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit55),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit16))));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t262=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit56),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit17))));refs[0].put(std::move(t262));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t263=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit57),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit25))));refs[0].put(std::move(t263));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t264=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit58),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit26))));refs[0].put(std::move(t264));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t265=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit59),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit27))));refs[0].put(std::move(t265));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t266=mul(e->slot(0,4),add(V(1.0),mul(sub(e->slot(0,2),V(1.0)),get(get(e->slot(1,1),lit1),lit18))));refs[0].put(std::move(t266));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t267=mul(e->slot(0,4),sub(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit1),lit19))));refs[0].put(std::move(t267));}
{V t268=add(mul(first(call(get(e->get("math"),lit105),Args{get(get(e->slot(1,2),lit60),e->slot(0,0))})),get(get(e->slot(1,1),lit1),lit20)),mul(first(call(get(e->get("math"),lit105),Args{get(get(e->slot(1,2),lit61),e->slot(0,0))})),get(get(e->slot(1,1),lit1),lit21)));e->slot(0,5)=std::move(t268);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t269=mul(e->slot(0,4),sub(V(1.0),first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(0.2)}))));refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t270=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit62),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit23))));refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t271=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit63),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit22))));refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t272=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit64),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit28))));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t273=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit65),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit29))));refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t274=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit66),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit30))));refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t275=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit67),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit31))));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t276=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit68),e->slot(0,0)),V(0.04))));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t277=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit69),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit32))));refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t278=mul(e->slot(0,4),add(V(1.0),mul(sub(get(get(e->slot(1,2),lit70),e->slot(0,0)),V(1.0)),get(get(e->slot(1,1),lit1),lit33))));refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t279=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit71),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit34))));refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t280=mul(e->slot(0,4),sub(V(1.0),mul(get(get(e->slot(1,2),lit72),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit35))));refs[0].put(std::move(t280));}
return call(e->slot(1,4),Args{e->slot(0,4),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t281=([&](){V t282=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));return !truth(t282)?V(0.0):t282;})();refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t283=([&](){V t284=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));return !truth(t284)?V(0.0):t284;})();refs[0].put(std::move(t283));}
{V t285=first(call(get(e->get("math"),lit196),call(get(e->get("math"),lit197),Args{mul(first(call(get(e->get("math"),lit105),Args{e->slot(0,0)})),get(get(e->slot(1,1),lit1),lit4)),divv(get(e->get("math"),lit198),V(4.0))})));e->slot(0,3)=std::move(t285);}
{V t286=divv(V(1.0),add(V(1.0),mul(first(call(get(e->get("math"),lit105),Args{e->slot(0,1)})),get(get(e->slot(1,1),lit1),lit5))));e->slot(0,4)=std::move(t286);}
{V t287=first(call(e->slot(1,4),Args{get(get(e->slot(1,2),lit64),e->slot(0,2)),V(0.0),V(1.2)}));e->slot(0,5)=std::move(t287);}
{V t288=first(call(e->slot(1,4),Args{get(get(e->slot(1,2),lit65),e->slot(0,2)),V(0.0),V(1.2)}));e->slot(0,6)=std::move(t288);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t289=mul(mul(e->slot(0,3),add(V(0.92),mul(e->slot(0,5),V(0.08)))),add(V(0.96),mul(e->slot(0,6),V(0.04))));refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t290=mul(mul(e->slot(0,4),add(V(0.92),mul(e->slot(0,5),V(0.08)))),add(V(0.96),mul(e->slot(0,6),V(0.04))));refs[0].put(std::move(t290));}
return joined(Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.2)}))},call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.2)}));
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,10),Args{concat(lit199,e->slot(0,0)),([&](){V t291=get(get(e->slot(1,2),lit42),e->slot(0,0));return !truth(t291)?V(0.0):t291;})()});
call(e->slot(1,10),Args{concat(lit200,e->slot(0,0)),([&](){V t292=get(get(e->slot(1,2),lit43),e->slot(0,0));return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,10),Args{concat(lit201,e->slot(0,0)),([&](){V t293=get(get(e->slot(1,2),lit44),e->slot(0,0));return !truth(t293)?V(0.0):t293;})()});
call(e->slot(1,10),Args{concat(lit202,e->slot(0,0)),([&](){V t294=get(get(e->slot(1,2),lit45),e->slot(0,0));return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,10),Args{concat(lit203,e->slot(0,0)),([&](){V t295=get(get(e->slot(1,2),lit46),e->slot(0,0));return !truth(t295)?V(0.0):t295;})()});
call(e->slot(1,10),Args{concat(lit204,e->slot(0,0)),([&](){V t296=get(get(e->slot(1,2),lit42),e->slot(0,0));return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,10),Args{concat(lit205,e->slot(0,0)),([&](){V t297=get(get(e->slot(1,2),lit43),e->slot(0,0));return !truth(t297)?V(0.0):t297;})()});
call(e->slot(1,10),Args{concat(lit206,e->slot(0,0)),([&](){V t298=get(get(e->slot(1,2),lit44),e->slot(0,0));return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,10),Args{concat(lit207,e->slot(0,0)),([&](){V t299=get(get(e->slot(1,2),lit45),e->slot(0,0));return !truth(t299)?V(0.0):t299;})()});
call(e->slot(1,10),Args{concat(lit208,e->slot(0,0)),([&](){V t300=get(get(e->slot(1,2),lit46),e->slot(0,0));return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,10),Args{concat(lit209,e->slot(0,0)),([&](){V t301=get(get(e->slot(1,2),lit42),e->slot(0,0));return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,10),Args{concat(lit210,e->slot(0,0)),([&](){V t302=get(get(e->slot(1,2),lit43),e->slot(0,0));return !truth(t302)?V(0.0):t302;})()});
call(e->slot(1,10),Args{concat(lit211,e->slot(0,0)),([&](){V t303=get(get(e->slot(1,2),lit44),e->slot(0,0));return !truth(t303)?V(0.0):t303;})()});
call(e->slot(1,10),Args{concat(lit212,e->slot(0,0)),([&](){V t304=get(get(e->slot(1,2),lit45),e->slot(0,0));return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,10),Args{concat(lit213,e->slot(0,0)),([&](){V t305=get(get(e->slot(1,2),lit42),e->slot(0,0));return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,10),Args{concat(lit214,e->slot(0,0)),([&](){V t306=get(get(e->slot(1,2),lit43),e->slot(0,0));return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,10),Args{concat(lit215,e->slot(0,0)),([&](){V t307=get(get(e->slot(1,2),lit44),e->slot(0,0));return !truth(t307)?V(0.0):t307;})()});
call(e->slot(1,10),Args{concat(lit216,e->slot(0,0)),([&](){V t308=get(get(e->slot(1,2),lit45),e->slot(0,0));return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,10),Args{concat(lit217,e->slot(0,0)),([&](){V t309=get(get(e->slot(1,2),lit46),e->slot(0,0));return !truth(t309)?V(0.0):t309;})()});
if(truth(V(!truth(get(e->slot(1,2),lit101))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit218,e->slot(0,0)),([&](){V t310=get(get(e->slot(1,2),lit48),e->slot(0,0));return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,10),Args{concat(lit219,e->slot(0,0)),([&](){V t311=get(get(e->slot(1,2),lit49),e->slot(0,0));return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,10),Args{concat(lit220,e->slot(0,0)),([&](){V t312=get(get(e->slot(1,2),lit52),e->slot(0,0));return !truth(t312)?get(get(e->slot(1,1),lit1),lit10):t312;})()});
call(e->slot(1,10),Args{concat(lit221,e->slot(0,0)),([&](){V t313=get(get(e->slot(1,2),lit51),e->slot(0,0));return !truth(t313)?get(get(e->slot(1,1),lit1),lit9):t313;})()});
call(e->slot(1,10),Args{concat(lit222,e->slot(0,0)),([&](){V t314=get(get(e->slot(1,2),lit50),e->slot(0,0));return !truth(t314)?get(get(e->slot(1,1),lit1),lit8):t314;})()});
call(e->slot(1,10),Args{concat(lit223,e->slot(0,0)),([&](){V t315=get(get(e->slot(1,2),lit53),e->slot(0,0));return !truth(t315)?V(1.0):t315;})()});
call(e->slot(1,10),Args{concat(lit224,e->slot(0,0)),([&](){V t316=get(get(e->slot(1,2),lit55),e->slot(0,0));return !truth(t316)?V(1.0):t316;})()});
call(e->slot(1,10),Args{concat(lit225,e->slot(0,0)),([&](){V t317=get(get(e->slot(1,2),lit56),e->slot(0,0));return !truth(t317)?V(0.0):t317;})()});
call(e->slot(1,10),Args{concat(lit226,e->slot(0,0)),([&](){V t318=get(get(e->slot(1,2),lit57),e->slot(0,0));return !truth(t318)?V(1.0):t318;})()});
call(e->slot(1,10),Args{concat(lit227,e->slot(0,0)),([&](){V t319=get(get(e->slot(1,2),lit58),e->slot(0,0));return !truth(t319)?V(1.0):t319;})()});
call(e->slot(1,10),Args{concat(lit228,e->slot(0,0)),([&](){V t320=get(get(e->slot(1,2),lit59),e->slot(0,0));return !truth(t320)?V(0.0):t320;})()});
call(e->slot(1,10),Args{concat(lit229,e->slot(0,0)),([&](){V t321=get(get(e->slot(1,2),lit64),e->slot(0,0));return !truth(t321)?V(1.0):t321;})()});
call(e->slot(1,10),Args{concat(lit230,e->slot(0,0)),([&](){V t322=get(get(e->slot(1,2),lit70),e->slot(0,0));return !truth(t322)?V(1.0):t322;})()});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit231,([&](){V t323=get(e->slot(1,2),lit97);return !truth(t323)?lit232:t323;})()});
call(e->slot(1,10),Args{lit233,([&](){V t324=get(e->slot(1,2),lit99);return !truth(t324)?V(0.0):t324;})()});
call(e->slot(1,10),Args{lit234,([&](){V t325=([&](){V t326=get(e->slot(1,2),lit95);return truth(t326)?V(1.0):t326;})();return !truth(t325)?V(0.0):t325;})()});
call(e->slot(1,10),Args{lit235,([&](){V t327=([&](){V t328=get(e->slot(1,2),lit96);return truth(t328)?V(1.0):t328;})();return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,10),Args{lit236,([&](){V t329=([&](){V t330=get(e->slot(1,2),lit81);return truth(t330)?V(1.0):t330;})();return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,10),Args{lit237,([&](){V t331=([&](){V t332=get(e->slot(1,2),lit82);return truth(t332)?V(1.0):t332;})();return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,10),Args{lit238,([&](){V t333=get(e->slot(1,2),lit77);return !truth(t333)?V(0.0):t333;})()});
call(e->slot(1,10),Args{lit239,([&](){V t334=get(e->slot(1,2),lit78);return !truth(t334)?V(1.0):t334;})()});
call(e->slot(1,10),Args{lit240,([&](){V t335=get(e->slot(1,2),lit79);return !truth(t335)?V(1.0):t335;})()});
call(e->slot(1,10),Args{lit241,([&](){V t336=get(e->slot(1,2),lit80);return !truth(t336)?V(0.0):t336;})()});
call(e->slot(1,10),Args{lit242,([&](){V t337=get(e->slot(1,2),lit77);return !truth(t337)?V(0.0):t337;})()});
call(e->slot(1,10),Args{lit243,([&](){V t338=get(e->slot(1,2),lit78);return !truth(t338)?V(1.0):t338;})()});
call(e->slot(1,10),Args{lit244,([&](){V t339=get(e->slot(1,2),lit79);return !truth(t339)?V(1.0):t339;})()});
call(e->slot(1,10),Args{lit245,([&](){V t340=get(e->slot(1,2),lit80);return !truth(t340)?V(0.0):t340;})()});
if(truth(V(!truth(get(e->slot(1,2),lit101))))){return Args{};
}
call(e->slot(1,10),Args{lit246,([&](){V t341=get(e->slot(1,2),lit73);return !truth(t341)?V(0.5):t341;})()});
call(e->slot(1,10),Args{lit247,([&](){V t342=get(e->slot(1,2),lit74);return !truth(t342)?V(0.5):t342;})()});
call(e->slot(1,10),Args{lit248,([&](){V t343=get(e->slot(1,2),lit75);return !truth(t343)?V(0.5):t343;})()});
call(e->slot(1,10),Args{lit249,([&](){V t344=get(e->slot(1,2),lit76);return !truth(t344)?V(0.5):t344;})()});
call(e->slot(1,10),Args{lit250,([&](){V t345=([&](){V t346=get(e->slot(1,2),lit83);return truth(t346)?V(1.0):t346;})();return !truth(t345)?V(0.0):t345;})()});
call(e->slot(1,10),Args{lit251,([&](){V t347=([&](){V t348=get(e->slot(1,2),lit84);return truth(t348)?V(1.0):t348;})();return !truth(t347)?V(0.0):t347;})()});
call(e->slot(1,10),Args{lit252,([&](){V t349=([&](){V t350=get(e->slot(1,2),lit85);return truth(t350)?V(1.0):t350;})();return !truth(t349)?V(0.0):t349;})()});
call(e->slot(1,10),Args{lit253,([&](){V t351=([&](){V t352=get(e->slot(1,2),lit86);return truth(t352)?V(1.0):t352;})();return !truth(t351)?V(0.0):t351;})()});
call(e->slot(1,10),Args{lit254,([&](){V t353=([&](){V t354=get(e->slot(1,2),lit87);return truth(t354)?V(1.0):t354;})();return !truth(t353)?V(0.0):t353;})()});
call(e->slot(1,10),Args{lit255,([&](){V t355=([&](){V t356=get(e->slot(1,2),lit88);return truth(t356)?V(1.0):t356;})();return !truth(t355)?V(0.0):t355;})()});
call(e->slot(1,10),Args{lit256,([&](){V t357=([&](){V t358=get(e->slot(1,2),lit89);return truth(t358)?V(1.0):t358;})();return !truth(t357)?V(0.0):t357;})()});
call(e->slot(1,10),Args{lit257,([&](){V t359=([&](){V t360=get(e->slot(1,2),lit90);return truth(t360)?V(1.0):t360;})();return !truth(t359)?V(0.0):t359;})()});
call(e->slot(1,10),Args{lit258,([&](){V t361=([&](){V t362=get(e->slot(1,2),lit91);return truth(t362)?V(1.0):t362;})();return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,10),Args{lit259,([&](){V t363=([&](){V t364=get(e->slot(1,2),lit92);return truth(t364)?V(1.0):t364;})();return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,10),Args{lit260,([&](){V t365=([&](){V t366=get(e->slot(1,2),lit93);return truth(t366)?V(1.0):t366;})();return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,10),Args{lit261,([&](){V t367=([&](){V t368=get(e->slot(1,2),lit94);return truth(t368)?V(1.0):t368;})();return !truth(t367)?V(0.0):t367;})()});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t369=([&](){V t370=([&](){V t371=e->slot(0,2);return truth(t371)?V(0.0):t371;})();return !truth(t370)?V(1.0):t370;})();e->slot(0,3)=std::move(t369);}
{V t372=([&](){V t373=([&](){V t374=e->slot(0,2);return truth(t374)?V(0.0):t374;})();return !truth(t373)?V(1.0):t373;})();e->slot(0,4)=std::move(t372);}
{V t375=([&](){V t376=([&](){V t377=e->slot(0,2);return truth(t377)?V(0.0):t377;})();return !truth(t376)?get(get(e->slot(1,2),lit42),e->slot(0,0)):t376;})();e->slot(0,5)=std::move(t375);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit42),e->slot(0,0))};V t378=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit42),e->slot(0,0)),e->slot(0,5),get(get(e->slot(1,1),lit1),lit40),e->slot(0,1)}));refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit43),e->slot(0,0))};V t379=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit43),e->slot(0,0)),e->slot(0,3),get(get(e->slot(1,1),lit1),lit40),e->slot(0,1)}));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit44),e->slot(0,0))};V t380=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit44),e->slot(0,0)),e->slot(0,4),get(get(e->slot(1,1),lit1),lit40),e->slot(0,1)}));refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit45),e->slot(0,0))};V t381=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit45),e->slot(0,0)),e->slot(0,4),get(get(e->slot(1,1),lit1),lit40),e->slot(0,1)}));refs[0].put(std::move(t381));}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit46),e->slot(0,0))};V t382=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit46),e->slot(0,0)),V(0.0),get(get(e->slot(1,1),lit1),lit40),e->slot(0,1)}));refs[0].put(std::move(t382));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit48),e->slot(0,0))};V t383=V(0.0);refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit49),e->slot(0,0))};V t384=V(0.0);refs[0].put(std::move(t384));}
}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t385=num(V(0.0)),t386=num(V(3.0)),t387=num(V(1.0));for(double t388=t385;(t387>0?t388<=t386:t388>=t386);t388+=t387){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t388);call(e->slot(2,30),Args{e->slot(0,0)});
}}
call(e->slot(1,31),Args{});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t389=V(false);refs[0].put(std::move(t389));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t390=V(false);refs[0].put(std::move(t390));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t391=V(false);refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t392=V(false);refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t393=V(false);refs[0].put(std::move(t393));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t394=V(false);refs[0].put(std::move(t394));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t395=V(false);refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t396=V(false);refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t397=V(false);refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t398=V(false);refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t399=V(false);refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t400=V(false);refs[0].put(std::move(t400));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t401=first(call(e->slot(1,20),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t401);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t402=first(call(get(e->get("math"),lit106),Args{([&](){V t403=first(call(e->slot(1,3),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit2)}));return !truth(t403)?get(get(e->slot(1,1),lit1),lit2):t403;})(),V(0.0)}));refs[0].put(std::move(t402));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit47),e->slot(0,0))};V t404=e->slot(0,3);refs[0].put(std::move(t404));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit46),e->slot(0,0))};V t405=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit46),e->slot(0,0)),e->slot(0,3),get(get(e->slot(1,1),lit1),lit36),e->slot(0,2)}));refs[0].put(std::move(t405));}
{V t406=get(get(e->slot(1,2),lit46),e->slot(0,0));e->slot(0,4)=std::move(t406);}
if(truth(lt(e->slot(0,4),get(get(e->slot(1,1),lit1),lit7)))){call(e->slot(1,32),Args{e->slot(0,0),e->slot(0,2),V(true)});
call(e->slot(1,30),Args{e->slot(0,0)});
return Args{};
}
{V t407=first(call(e->slot(1,24),Args{e->slot(0,1),e->slot(0,0),e->slot(0,4)}));e->slot(0,5)=std::move(t407);}
{V t408=first(call(e->slot(1,25),Args{e->slot(0,1),e->slot(0,4)}));e->slot(0,6)=std::move(t408);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t409=first(call(e->slot(1,26),Args{e->slot(0,0),e->slot(0,6)}));refs[0].put(std::move(t409));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t410=first(call(e->slot(1,27),Args{e->slot(0,0),e->slot(0,6)}));refs[0].put(std::move(t410));}
{Args t411=call(e->slot(1,18),Args{e->slot(0,0),e->slot(0,1)});e->slot(0,7)=arg(t411,0);e->slot(0,8)=arg(t411,1);e->slot(0,9)=arg(t411,2);}
if(truth(e->slot(0,9))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t412=V(true);refs[0].put(std::move(t412));}
}
{Args t413=call(e->slot(1,19),Args{e->slot(0,0)});e->slot(0,10)=arg(t413,0);e->slot(0,11)=arg(t413,1);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t414=first(call(e->slot(1,28),Args{e->slot(0,0),e->slot(0,6),e->slot(0,10),e->slot(0,11)}));refs[0].put(std::move(t414));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t415=first(call(e->slot(1,4),Args{e->slot(0,6),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)}));refs[0].put(std::move(t415));}
{Args t416=call(e->slot(1,29),Args{e->slot(0,7),e->slot(0,8),e->slot(0,0)});e->slot(0,12)=arg(t416,0);e->slot(0,13)=arg(t416,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit42),e->slot(0,0))};V t417=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit42),e->slot(0,0)),e->slot(0,5),get(get(e->slot(1,1),lit1),lit37),e->slot(0,2)}));refs[0].put(std::move(t417));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit43),e->slot(0,0))};V t418=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit43),e->slot(0,0)),e->slot(0,6),get(get(e->slot(1,1),lit1),lit38),e->slot(0,2)}));refs[0].put(std::move(t418));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit44),e->slot(0,0))};V t419=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit44),e->slot(0,0)),e->slot(0,12),get(get(e->slot(1,1),lit1),lit39),e->slot(0,2)}));refs[0].put(std::move(t419));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit45),e->slot(0,0))};V t420=first(call(e->slot(1,6),Args{get(get(e->slot(1,2),lit45),e->slot(0,0)),e->slot(0,13),get(get(e->slot(1,1),lit1),lit39),e->slot(0,2)}));refs[0].put(std::move(t420));}
call(e->slot(1,30),Args{e->slot(0,0)});
return Args{};});
Ref(e->slot(0,1),lit262).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t421=lit98;refs[0].put(std::move(t421));}
call(e->slot(1,33),Args{});
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t422=add(([&](){V t423=get(e->slot(1,2),lit99);return !truth(t423)?V(0.0):t423;})(),V(1.0));refs[0].put(std::move(t422));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t424=([&](){V t425=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));return !truth(t425)?V(0.0):t425;})();refs[0].put(std::move(t424));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t426=lit264;refs[0].put(std::move(t426));}
call(e->slot(1,33),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t427=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0001),V(0.1)}));refs[0].put(std::move(t427));}
call(e->slot(1,14),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t428=first(call(e->slot(1,11),Args{}));refs[0].put(std::move(t428));}
}
{V t429=first(call(e->slot(1,12),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t429);}
{V t430=ne(e->slot(0,1),V());e->slot(0,4)=std::move(t430);}
{V t431=ne(e->slot(0,3),V());e->slot(0,5)=std::move(t431);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t432=e->slot(0,5);refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t433=V(!truth(e->slot(0,5)));refs[0].put(std::move(t433));}
if(truth(V(!truth(e->slot(0,4))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t434=lit265;refs[0].put(std::move(t434));}
}else if(truth(V(!truth(e->slot(0,5))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t435=lit266;refs[0].put(std::move(t435));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t436=lit267;refs[0].put(std::move(t436));}
}

{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t437=V(false);refs[0].put(std::move(t437));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t438=V(false);refs[0].put(std::move(t438));}
call(e->slot(1,34),Args{});
call(e->slot(1,17),Args{});
{V t439=V(0.0);e->slot(0,6)=std::move(t439);}
{V t440=V(0.0);e->slot(0,7)=std::move(t440);}
{V t441=V(999.0);e->slot(0,8)=std::move(t441);}
{V t442=V(0.0);e->slot(0,9)=std::move(t442);}
{double t443=num(V(0.0)),t444=num(V(3.0)),t445=num(V(1.0));for(double t446=t443;(t445>0?t446<=t444:t446>=t444);t446+=t445){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t446);{V t447=first(call(e->slot(2,13),Args{e->slot(1,3),e->slot(0,0)}));e->slot(0,1)=std::move(t447);}
if(truth(([&](){V t448=e->slot(1,5);return truth(t448)?V(!truth(e->slot(0,1))):t448;})())){call(e->slot(2,32),Args{e->slot(0,0),e->slot(1,0),V(true)});
call(e->slot(2,30),Args{e->slot(0,0)});
}else{call(e->slot(2,35),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0)});
}
{std::array<Ref,1> refs{Ref(e,1,6)};V t449=add(e->slot(1,6),([&](){V t450=get(get(e->slot(2,2),lit42),e->slot(0,0));return !truth(t450)?V(0.0):t450;})());refs[0].put(std::move(t449));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t451=add(e->slot(1,7),([&](){V t452=get(get(e->slot(2,2),lit43),e->slot(0,0));return !truth(t452)?V(1.0):t452;})());refs[0].put(std::move(t451));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t453=first(call(get(e->get("math"),lit197),Args{e->slot(1,8),([&](){V t454=get(get(e->slot(2,2),lit43),e->slot(0,0));return !truth(t454)?V(1.0):t454;})()}));refs[0].put(std::move(t453));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t455=first(call(get(e->get("math"),lit106),Args{e->slot(1,9),([&](){V t456=get(get(e->slot(2,2),lit46),e->slot(0,0));return !truth(t456)?V(0.0):t456;})()}));refs[0].put(std::move(t455));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t457=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t457));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t458=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t458));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t459=([&](){V t460=([&](){V t461=eq(e->slot(0,8),V(999.0));return truth(t461)?V(1.0):t461;})();return !truth(t460)?e->slot(0,8):t460;})();refs[0].put(std::move(t459));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t462=e->slot(0,9);refs[0].put(std::move(t462));}
call(e->slot(1,31),Args{});
return Args{};}));
Ref(e->slot(0,1),lit268).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t463=get(get(e->slot(1,2),lit42),e->slot(0,0));return !truth(t463)?V(0.0):t463;})()};
return Args{};}));
Ref(e->slot(0,1),lit269).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t464=get(get(e->slot(1,2),lit43),e->slot(0,0));return !truth(t464)?V(0.0):t464;})()};
return Args{};}));
Ref(e->slot(0,1),lit270).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t465=get(get(e->slot(1,2),lit44),e->slot(0,0));return !truth(t465)?V(0.0):t465;})()};
return Args{};}));
Ref(e->slot(0,1),lit271).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t466=get(get(e->slot(1,2),lit45),e->slot(0,0));return !truth(t466)?V(0.0):t466;})()};
return Args{};}));
Ref(e->slot(0,1),lit272).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t467=get(get(e->slot(1,2),lit46),e->slot(0,0));return !truth(t467)?V(0.0):t467;})()};
return Args{};}));
Ref(e->slot(0,1),lit273).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,2)};
}
return Args{([&](){V z=table();set(z,lit42,([&](){V t468=get(get(e->slot(1,2),lit42),e->slot(0,0));return !truth(t468)?V(0.0):t468;})());set(z,lit43,([&](){V t469=get(get(e->slot(1,2),lit43),e->slot(0,0));return !truth(t469)?V(0.0):t469;})());set(z,lit44,([&](){V t470=get(get(e->slot(1,2),lit44),e->slot(0,0));return !truth(t470)?V(0.0):t470;})());set(z,lit45,([&](){V t471=get(get(e->slot(1,2),lit45),e->slot(0,0));return !truth(t471)?V(0.0):t471;})());set(z,lit46,([&](){V t472=get(get(e->slot(1,2),lit46),e->slot(0,0));return !truth(t472)?V(0.0):t472;})());set(z,lit48,([&](){V t473=get(get(e->slot(1,2),lit48),e->slot(0,0));return !truth(t473)?V(0.0):t473;})());set(z,lit49,([&](){V t474=get(get(e->slot(1,2),lit49),e->slot(0,0));return !truth(t474)?V(0.0):t474;})());set(z,lit52,([&](){V t475=get(get(e->slot(1,2),lit52),e->slot(0,0));return !truth(t475)?get(get(e->slot(1,1),lit1),lit10):t475;})());set(z,lit51,([&](){V t476=get(get(e->slot(1,2),lit51),e->slot(0,0));return !truth(t476)?get(get(e->slot(1,1),lit1),lit9):t476;})());set(z,lit50,([&](){V t477=get(get(e->slot(1,2),lit50),e->slot(0,0));return !truth(t477)?get(get(e->slot(1,1),lit1),lit8):t477;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit274).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t478=([&](){V t479=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t479)?V(0.0):t479;})();e->slot(0,0)=std::move(t478);}
return call(get(e->get("string"),lit275),Args{concat(lit276,concat(lit277,concat(lit278,lit279))),first(call(e->get("tostring"),Args{get(e->slot(2,2),lit97)})),([&](){V t480=get(e->slot(2,2),lit99);return !truth(t480)?V(0.0):t480;})(),([&](){V t481=get(get(e->slot(2,2),lit42),e->slot(0,0));return !truth(t481)?V(0.0):t481;})(),([&](){V t482=get(get(e->slot(2,2),lit43),e->slot(0,0));return !truth(t482)?V(0.0):t482;})(),([&](){V t483=get(get(e->slot(2,2),lit44),e->slot(0,0));return !truth(t483)?V(0.0):t483;})(),([&](){V t484=get(get(e->slot(2,2),lit45),e->slot(0,0));return !truth(t484)?V(0.0):t484;})(),([&](){V t485=get(get(e->slot(2,2),lit46),e->slot(0,0));return !truth(t485)?V(0.0):t485;})(),([&](){V t486=get(get(e->slot(2,2),lit48),e->slot(0,0));return !truth(t486)?V(0.0):t486;})(),([&](){V t487=get(get(e->slot(2,2),lit49),e->slot(0,0));return !truth(t487)?V(0.0):t487;})(),([&](){V t488=get(get(e->slot(2,2),lit57),e->slot(0,0));return !truth(t488)?V(1.0):t488;})(),([&](){V t489=get(get(e->slot(2,2),lit58),e->slot(0,0));return !truth(t489)?V(1.0):t489;})(),([&](){V t490=get(get(e->slot(2,2),lit59),e->slot(0,0));return !truth(t490)?V(0.0):t490;})(),([&](){V t491=get(get(e->slot(2,2),lit64),e->slot(0,0));return !truth(t491)?V(1.0):t491;})(),([&](){V t492=get(get(e->slot(2,2),lit70),e->slot(0,0));return !truth(t492)?V(1.0):t492;})()});
}
return call(get(e->get("string"),lit275),Args{concat(lit280,concat(lit281,concat(lit282,concat(lit283,concat(lit284,lit285))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit97)})),([&](){V t493=get(e->slot(1,2),lit99);return !truth(t493)?V(0.0):t493;})(),([&](){V t494=([&](){V t495=get(e->slot(1,2),lit95);return truth(t495)?lit286:t495;})();return !truth(t494)?lit287:t494;})(),([&](){V t496=([&](){V t497=get(e->slot(1,2),lit96);return truth(t497)?lit288:t497;})();return !truth(t496)?lit289:t496;})(),([&](){V t498=get(get(e->slot(1,2),lit43),V(0.0));return !truth(t498)?V(0.0):t498;})(),([&](){V t499=get(get(e->slot(1,2),lit43),V(1.0));return !truth(t499)?V(0.0):t499;})(),([&](){V t500=get(get(e->slot(1,2),lit43),V(2.0));return !truth(t500)?V(0.0):t500;})(),([&](){V t501=get(get(e->slot(1,2),lit43),V(3.0));return !truth(t501)?V(0.0):t501;})(),([&](){V t502=get(get(e->slot(1,2),lit42),V(0.0));return !truth(t502)?V(0.0):t502;})(),([&](){V t503=get(get(e->slot(1,2),lit42),V(1.0));return !truth(t503)?V(0.0):t503;})(),([&](){V t504=get(get(e->slot(1,2),lit42),V(2.0));return !truth(t504)?V(0.0):t504;})(),([&](){V t505=get(get(e->slot(1,2),lit42),V(3.0));return !truth(t505)?V(0.0):t505;})(),([&](){V t506=get(get(e->slot(1,2),lit44),V(0.0));return !truth(t506)?V(0.0):t506;})(),([&](){V t507=get(get(e->slot(1,2),lit44),V(1.0));return !truth(t507)?V(0.0):t507;})(),([&](){V t508=get(get(e->slot(1,2),lit44),V(2.0));return !truth(t508)?V(0.0):t508;})(),([&](){V t509=get(get(e->slot(1,2),lit44),V(3.0));return !truth(t509)?V(0.0):t509;})(),([&](){V t510=get(get(e->slot(1,2),lit45),V(0.0));return !truth(t510)?V(0.0):t510;})(),([&](){V t511=get(get(e->slot(1,2),lit45),V(1.0));return !truth(t511)?V(0.0):t511;})(),([&](){V t512=get(get(e->slot(1,2),lit45),V(2.0));return !truth(t512)?V(0.0):t512;})(),([&](){V t513=get(get(e->slot(1,2),lit45),V(3.0));return !truth(t513)?V(0.0):t513;})(),([&](){V t514=([&](){V t515=get(e->slot(1,2),lit81);return truth(t515)?lit286:t515;})();return !truth(t514)?lit287:t514;})(),([&](){V t516=([&](){V t517=get(e->slot(1,2),lit82);return truth(t517)?lit286:t517;})();return !truth(t516)?lit287:t516;})(),([&](){V t518=([&](){V t519=get(e->slot(1,2),lit83);return truth(t519)?lit286:t519;})();return !truth(t518)?lit287:t518;})(),([&](){V t520=([&](){V t521=get(e->slot(1,2),lit84);return truth(t521)?lit286:t521;})();return !truth(t520)?lit287:t520;})(),([&](){V t522=([&](){V t523=get(e->slot(1,2),lit85);return truth(t523)?lit286:t523;})();return !truth(t522)?lit287:t522;})(),([&](){V t524=([&](){V t525=get(e->slot(1,2),lit86);return truth(t525)?lit286:t525;})();return !truth(t524)?lit287:t524;})(),([&](){V t526=([&](){V t527=get(e->slot(1,2),lit89);return truth(t527)?lit286:t527;})();return !truth(t526)?lit287:t526;})(),([&](){V t528=([&](){V t529=get(e->slot(1,2),lit90);return truth(t529)?lit286:t529;})();return !truth(t528)?lit287:t528;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
