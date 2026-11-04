// Generated native C++ from pinned tire_carcass.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("version");
static const V lit2("1.1.7-XRayV2.1");
static const V lit3("FL");
static const V lit4("FR");
static const V lit5("RL");
static const V lit6("RR");
static const V lit7("INIT");
static const V lit8("SUPPORTED");
static const V lit9("SIDEWALL_LAT");
static const V lit10("CARCASS_LONG");
static const V lit11("COMPRESSED");
static const V lit12("DELAYED");
static const V lit13("RETURNING");
static const V lit14("SATURATED");
static const V lit15("UNLOADED");
static const V lit16("IMPACT");
static const V lit17("params");
static const V lit18("loadRef");
static const V lit19("loadMin");
static const V lit20("loadCrushStart");
static const V lit21("loadCrushFull");
static const V lit22("virtualSpringRate");
static const V lit23("virtualDamperRate");
static const V lit24("verticalDeflectRef");
static const V lit25("maxVerticalDeflect");
static const V lit26("bristleLengthRef");
static const V lit27("bristleLatGain");
static const V lit28("bristleLongGain");
static const V lit29("staticMuRef");
static const V lit30("slidingMuRef");
static const V lit31("latPeakMin");
static const V lit32("latPeakMax");
static const V lit33("longPeakMin");
static const V lit34("longPeakMax");
static const V lit35("peakLoadRef");
static const V lit36("slipAngleRef");
static const V lit37("slipRatioRef");
static const V lit38("latSlipGain");
static const V lit39("longSlipGain");
static const V lit40("loadCrushGain");
static const V lit41("loadVelocityGain");
static const V lit42("contactLossGain");
static const V lit43("tireMemoryGain");
static const V lit44("damperImpactGain");
static const V lit45("complianceGain");
static const V lit46("driveWindupGain");
static const V lit47("roadShockGain");
static const V lit48("roadTextureGain");
static const V lit49("roadPathLossGain");
static const V lit50("roadSurfaceLimitGain");
static const V lit51("loadPathLossGain");
static const V lit52("forceLeakGain");
static const V lit53("impactGain");
static const V lit54("thermalStressGain");
static const V lit55("inputFilterTau");
static const V lit56("bristleTauLat");
static const V lit57("bristleTauLong");
static const V lit58("frontResponseTau");
static const V lit59("rearResponseTau");
static const V lit60("frontReleaseTau");
static const V lit61("rearReleaseTau");
static const V lit62("verticalTau");
static const V lit63("verticalReleaseTau");
static const V lit64("frontEnergyBuildTau");
static const V lit65("rearEnergyBuildTau");
static const V lit66("energyReleaseTau");
static const V lit67("energyTargetMax");
static const V lit68("energySlipWeight");
static const V lit69("energyDeformationWeight");
static const V lit70("energyResponseErrorWeight");
static const V lit71("energyHysteresisWeight");
static const V lit72("energyImpactWeight");
static const V lit73("energyCombinedSlipWeight");
static const V lit74("energyVerticalWeight");
static const V lit75("energyIntegrityWeight");
static const V lit76("delayTau");
static const V lit77("returnTau");
static const V lit78("buildTau");
static const V lit79("releaseTau");
static const V lit80("clearTau");
static const V lit81("hysteresisBuildGain");
static const V lit82("hysteresisReleaseGain");
static const V lit83("hysteresisTau");
static const V lit84("lowQualityThreshold");
static const V lit85("unloadedQualityThreshold");
static const V lit86("deformationThreshold");
static const V lit87("compressedThreshold");
static const V lit88("saturatedThreshold");
static const V lit89("returnThreshold");
static const V lit90("delayThreshold");
static const V lit91("impactThreshold");
static const V lit92("maxCarcass");
static const V lit93("maxEnergy");
static const V lit94("maxDelay");
static const V lit95("maxReturn");
static const V lit96("maxHysteresis");
static const V lit97("minDt");
static const V lit98("maxDt");
static const V lit99("debugStoreInterval");
static const V lit100("active");
static const V lit101("name");
static const V lit102("load");
static const V lit103("prevLoad");
static const V lit104("rawLoad");
static const V lit105("loadVelocity");
static const V lit106("slipAngle");
static const V lit107("slipRatio");
static const V lit108("rawSlipAngle");
static const V lit109("rawSlipRatio");
static const V lit110("contactQuality");
static const V lit111("contactRaw");
static const V lit112("contactTrust");
static const V lit113("combinedSlip");
static const V lit114("contactLoss");
static const V lit115("contactStatus");
static const V lit116("tireMemory");
static const V lit117("tireMemoryGrip");
static const V lit118("tireMemoryPhaseId");
static const V lit119("memoryThermal");
static const V lit120("memoryAbrasion");
static const V lit121("memoryHistory");
static const V lit122("memoryHeat");
static const V lit123("damperHyst");
static const V lit124("damperImpact");
static const V lit125("damperVelocity");
static const V lit126("damperVerticalPulse");
static const V lit127("damperPhaseId");
static const V lit128("complianceEnergy");
static const V lit129("complianceForceLeak");
static const V lit130("virtualToe");
static const V lit131("virtualCamber");
static const V lit132("loadPathLoss");
static const V lit133("loadPathDelay");
static const V lit134("loadPathIntegrity");
static const V lit135("tireDelivery");
static const V lit136("verticalFlow");
static const V lit137("forceLeak");
static const V lit138("roadShock");
static const V lit139("roadTexture");
static const V lit140("roadSurfaceLimit");
static const V lit141("roadPathLoss");
static const V lit142("roadModuleHint");
static const V lit143("impactValue");
static const V lit144("thermalStress");
static const V lit145("windupEnergy");
static const V lit146("rearPush");
static const V lit147("bristleLat");
static const V lit148("bristleLong");
static const V lit149("verticalDeflect");
static const V lit150("verticalTarget");
static const V lit151("verticalNorm");
static const V lit152("carcassLat");
static const V lit153("carcassLong");
static const V lit154("sidewallEnergy");
static const V lit155("contactDelay");
static const V lit156("returnForce");
static const V lit157("deformation");
static const V lit158("crush");
static const V lit159("hysteresis");
static const V lit160("support");
static const V lit161("gripGate");
static const V lit162("recoveryBias");
static const V lit163("heatSeed");
static const V lit164("historyStress");
static const V lit165("slipDemand");
static const V lit166("responseTau");
static const V lit167("energyTau");
static const V lit168("responseError");
static const V lit169("energyReservoir");
static const V lit170("releaseRate");
static const V lit171("energyTargetRaw");
static const V lit172("energyHeadroom");
static const V lit173("energySaturated");
static const V lit174("latTarget");
static const V lit175("longTarget");
static const V lit176("energyTarget");
static const V lit177("delayTarget");
static const V lit178("returnTarget");
static const V lit179("phaseId");
static const V lit180("phaseText");
static const V lit181("status");
static const V lit182("updateCount");
static const V lit183("wheelsValid");
static const V lit184("avgLat");
static const V lit185("avgLong");
static const V lit186("avgEnergy");
static const V lit187("avgDelay");
static const V lit188("avgReturn");
static const V lit189("avgDeformation");
static const V lit190("avgSupport");
static const V lit191("avgHysteresis");
static const V lit192("avgVerticalNorm");
static const V lit193("avgGripGate");
static const V lit194("avgSlipDemand");
static const V lit195("avgResponseTau");
static const V lit196("avgEnergyTau");
static const V lit197("avgResponseError");
static const V lit198("avgReleaseRate");
static const V lit199("maxDeformation");
static const V lit200("maxEnergyLive");
static const V lit201("maxDelayLive");
static const V lit202("contactLinked");
static const V lit203("memoryLinked");
static const V lit204("damperLinked");
static const V lit205("complianceLinked");
static const V lit206("windupLinked");
static const V lit207("loadPathLinked");
static const V lit208("roadLinked");
static const V lit209("impactLinked");
static const V lit210("thermalLinked");
static const V lit211("storeOnly");
static const V lit212("debugStoreTimer");
static const V lit213("debugStoreNow");
static const V lit214("wheels");
static const V lit215("state");
static const V lit216("debug");
static const V lit217("huge");
static const V lit218("abs");
static const V lit219("max");
static const V lit220("safeStore");
static const V lit221("safeLoadRaw");
static const V lit222("safeField");
static const V lit223("getCar");
static const V lit224("loadK");
static const V lit225("ngp_contact_load_");
static const V lit226("ngp_wheel_load_");
static const V lit227("ngp_load_wheel_");
static const V lit228("ngp_tire_state_load_");
static const V lit229("ngp_sprung_load_");
static const V lit230("ngp_load_path_load_");
static const V lit231("ngp_hub_load_");
static const V lit232("ngp_dlt_load_");
static const V lit233("ngp_contact_slip_angle_");
static const V lit234("ngp_tire_slip_angle_");
static const V lit235("ngp_slip_angle_");
static const V lit236("ngp_filtered_slip_angle_");
static const V lit237("ngp_memory_slip_angle_");
static const V lit238("ngp_tire_carcass_slip_angle_");
static const V lit239("ngp_contact_slip_ratio_");
static const V lit240("ngp_tire_slip_ratio_");
static const V lit241("ngp_slip_ratio_");
static const V lit242("ngp_filtered_slip_ratio_");
static const V lit243("ngp_memory_slip_ratio_");
static const V lit244("ngp_tire_carcass_slip_ratio_");
static const V lit245("ngp_contact_quality_");
static const V lit246("ngp_tire_contact_quality_");
static const V lit247("ngp_tcr_quality_");
static const V lit248("ngp_contact_quality_live_");
static const V lit249("ngp_contact_raw_");
static const V lit250("ngp_contact_raw_quality_");
static const V lit251("ngp_tcr_raw_");
static const V lit252("ngp_contact_trust_");
static const V lit253("ngp_recovery_trust_");
static const V lit254("ngp_contact_grip_gate_");
static const V lit255("ngp_carcass_grip_gate_");
static const V lit256("ngp_contact_combined_slip_");
static const V lit257("ngp_slip_recovery_slip_");
static const V lit258("ngp_tdyn_combined_slip_");
static const V lit259("ngp_tire_force_combined_slip_");
static const V lit260("ngp_susp_tire_combined_slip_");
static const V lit261("ngp_contact_status_");
static const V lit262("ngp_tcr_status_");
static const V lit263("sqrt");
static const V lit264("min");
static const V lit265("ngp_tire_memory_");
static const V lit266("ngp_tyrememory_");
static const V lit267("ngp_tyre_memory_");
static const V lit268("ngp_rubber_memory_");
static const V lit269("ngp_memory_");
static const V lit270("ngp_memory_grip_");
static const V lit271("ngp_tire_memory_grip_");
static const V lit272("ngp_tyrememory_grip_");
static const V lit273("ngp_tire_memory_phase_id_");
static const V lit274("ngp_memory_phase_id_");
static const V lit275("ngp_tire_memory_thermal_");
static const V lit276("ngp_memory_thermal_");
static const V lit277("ngp_slip_thermal_memory_");
static const V lit278("ngp_tire_memory_abrasion_");
static const V lit279("ngp_memory_abrasion_");
static const V lit280("ngp_slip_abrasion_memory_");
static const V lit281("ngp_tire_memory_history_");
static const V lit282("ngp_memory_history_");
static const V lit283("ngp_slip_history_memory_");
static const V lit284("ngp_carcass_history_stress_");
static const V lit285("ngp_carcass_heat_seed_");
static const V lit286("ngp_memory_heat_");
static const V lit287("ngp_tire_memory_heat_");
static const V lit288("ngp_thermal_stress_");
static const V lit289("ngp_damper_hyst_");
static const V lit290("ngp_damper_hysteretic_");
static const V lit291("ngp_hysteretic_damping_");
static const V lit292("ngp_damper_hyst_impact_");
static const V lit293("ngp_damper_impact_");
static const V lit294("ngp_road_shock_");
static const V lit295("ngp_damper_hyst_velocity_");
static const V lit296("ngp_damper_velocity_");
static const V lit297("ngp_susp_speed_");
static const V lit298("ngp_damper_vertical_pulse_");
static const V lit299("ngp_road_vertical_pulse_");
static const V lit300("ngp_road_input_vertical_pulse_");
static const V lit301("ngp_damper_hyst_phase_id_");
static const V lit302("ngp_damper_phase_id_");
static const V lit303("ngp_compliance_energy_");
static const V lit304("ngp_compliance_stack_energy_");
static const V lit305("ngp_cs_energy_");
static const V lit306("ngp_compliance_force_leak_");
static const V lit307("ngp_load_path_force_leak_");
static const V lit308("ngp_road_force_leak_");
static const V lit309("ngp_force_leak");
static const V lit310("ngp_virtual_toe_");
static const V lit311("ngp_compliance_virtual_toe_");
static const V lit312("ngp_control_arm_toe_");
static const V lit313("ngp_arm_toe_");
static const V lit314("ngp_virtual_camber_");
static const V lit315("ngp_compliance_virtual_camber_");
static const V lit316("ngp_control_arm_camber_");
static const V lit317("ngp_arm_camber_");
static const V lit318("ngp_load_path_loss_");
static const V lit319("ngp_lp_loss_");
static const V lit320("ngp_road_path_loss_");
static const V lit321("ngp_rii_path_loss_");
static const V lit322("ngp_load_path_delay_");
static const V lit323("ngp_lp_delay_");
static const V lit324("ngp_load_path_integrity_");
static const V lit325("ngp_lp_integrity_");
static const V lit326("ngp_road_integrity_");
static const V lit327("ngp_load_path_tire_delivery_");
static const V lit328("ngp_lp_tire_delivery_");
static const V lit329("ngp_road_tire_delivery_");
static const V lit330("ngp_load_path_vertical_flow_");
static const V lit331("ngp_lp_vertical_flow_");
static const V lit332("ngp_road_vertical_flow_");
static const V lit333("ngp_rii_avg_vertical_flow");
static const V lit334("ngp_lp_force_leak_");
static const V lit335("ngp_rii_shock_");
static const V lit336("ngp_road_impact_");
static const V lit337("ngp_rii_impact_");
static const V lit338("ngp_road_texture_");
static const V lit339("ngp_rii_texture_");
static const V lit340("ngp_road_noise_");
static const V lit341("ngp_rii_noise_");
static const V lit342("ngp_road_surface_limit_");
static const V lit343("ngp_rii_surface_limit_");
static const V lit344("ngp_road_module_hint_");
static const V lit345("ngp_rii_hint_");
static const V lit346("ngp_impact_wheel_");
static const V lit347("ngp_impact_value_");
static const V lit348("ngp_damage_event_wheel_");
static const V lit349("ngp_virtual_thermal_stress");
static const V lit350("ngp_brake_root_heat_avg");
static const V lit351("ngp_windup_energy");
static const V lit352("ngp_driveline_energy");
static const V lit353("ngp_drive_windup_energy");
static const V lit354("ngp_drive_lash");
static const V lit355("ngp_drive_soft_rear_push");
static const V lit356("ngp_driveline_rear_push");
static const V lit357("ngp_rear_axle_windup");
static const V lit358("NO WHEEL");
static const V lit359("STORE ONLY");
static const V lit360("ngp_tire_carcass_lat_");
static const V lit361("ngp_tire_carcass_long_");
static const V lit362("ngp_tire_sidewall_energy_");
static const V lit363("ngp_tire_contact_delay_");
static const V lit364("ngp_tire_return_force_");
static const V lit365("ngp_tire_deformation_");
static const V lit366("ngp_tire_carcass_phase_id_");
static const V lit367("ngp_tire_carcass_phase_");
static const V lit368("UNKNOWN");
static const V lit369("ngp_carcass_lat_");
static const V lit370("ngp_carcass_long_");
static const V lit371("ngp_sidewall_energy_");
static const V lit372("ngp_contact_delay_");
static const V lit373("ngp_return_force_");
static const V lit374("ngp_carcass_bristle_lat_");
static const V lit375("ngp_carcass_bristle_long_");
static const V lit376("ngp_carcass_vertical_deflect_");
static const V lit377("ngp_carcass_vertical_norm_");
static const V lit378("ngp_carcass_hysteresis_");
static const V lit379("ngp_carcass_support_");
static const V lit380("ngp_carcass_recovery_bias_");
static const V lit381("ngp_carcass_crush_");
static const V lit382("ngp_carcass_slip_demand_");
static const V lit383("ngp_carcass_response_tau_");
static const V lit384("ngp_carcass_energy_tau_");
static const V lit385("ngp_carcass_response_error_");
static const V lit386("ngp_carcass_energy_reservoir_");
static const V lit387("ngp_carcass_release_rate_");
static const V lit388("ngp_carcass_energy_target_");
static const V lit389("ngp_carcass_energy_target_raw_");
static const V lit390("ngp_carcass_energy_headroom_");
static const V lit391("ngp_carcass_energy_saturated_");
static const V lit392("ngp_tc_lat_");
static const V lit393("ngp_tc_long_");
static const V lit394("ngp_tc_energy_");
static const V lit395("ngp_tc_delay_");
static const V lit396("ngp_tc_return_");
static const V lit397("ngp_tc_support_");
static const V lit398("ngp_tc_grip_gate_");
static const V lit399("ngp_tire_carcass_load_");
static const V lit400("ngp_tire_carcass_load_velocity_");
static const V lit401("ngp_tire_carcass_cq_");
static const V lit402("ngp_tire_carcass_combined_slip_");
static const V lit403("ngp_tire_carcass_memory_");
static const V lit404("ngp_tire_carcass_hyst_");
static const V lit405("ngp_tire_carcass_compliance_");
static const V lit406("ngp_tire_carcass_crush_");
static const V lit407("ngp_tire_carcass_support_");
static const V lit408("ngp_tire_carcass_trust_");
static const V lit409("ngp_tire_carcass_road_shock_");
static const V lit410("ngp_tire_carcass_path_loss_");
static const V lit411("ngp_tire_carcass_status");
static const V lit412("ngp_tire_carcass_update_count");
static const V lit413("ngp_tire_carcass_wheels_valid");
static const V lit414("ngp_tire_carcass_avg_lat");
static const V lit415("ngp_tire_carcass_avg_long");
static const V lit416("ngp_tire_carcass_avg_energy");
static const V lit417("ngp_tire_carcass_avg_delay");
static const V lit418("ngp_tire_carcass_avg_return");
static const V lit419("ngp_tire_carcass_avg_deformation");
static const V lit420("ngp_tire_carcass_avg_support");
static const V lit421("ngp_tire_carcass_avg_hysteresis");
static const V lit422("ngp_carcass_avg_vertical_norm");
static const V lit423("ngp_carcass_avg_grip_gate");
static const V lit424("ngp_carcass_avg_slip_demand");
static const V lit425("ngp_carcass_avg_response_tau");
static const V lit426("ngp_carcass_avg_energy_tau");
static const V lit427("ngp_carcass_avg_response_error");
static const V lit428("ngp_carcass_avg_release_rate");
static const V lit429("ngp_carcass_max_deformation");
static const V lit430("ngp_carcass_max_energy");
static const V lit431("ngp_carcass_max_delay");
static const V lit432("ngp_tc_avg_deformation");
static const V lit433("ngp_tc_avg_support");
static const V lit434("ngp_tc_max_deformation");
static const V lit435("ngp_tire_carcass_contact_linked");
static const V lit436("ngp_tire_carcass_memory_linked");
static const V lit437("ngp_tire_carcass_damper_linked");
static const V lit438("ngp_tire_carcass_compliance_linked");
static const V lit439("ngp_tire_carcass_windup_linked");
static const V lit440("ngp_tire_carcass_load_path_linked");
static const V lit441("ngp_tire_carcass_road_linked");
static const V lit442("ngp_tire_carcass_impact_linked");
static const V lit443("ngp_tire_carcass_thermal_linked");
static const V lit444("ngp_tire_carcass_store_only");
static const V lit445("init");
static const V lit446("update");
static const V lit447("BAD DT");
static const V lit448("NO CAR");
static const V lit449("NO WHEELS");
static const V lit450("RUNNING");
static const V lit451("getState");
static const V lit452("getDeformation");
static const V lit453("getSidewallEnergy");
static const V lit454("getSupport");
static const V lit455("getGripGate");
static const V lit456("getRecoveryBias");
static const V lit457("getPhase");
static const V lit458("getResponseTau");
static const V lit459("getEnergyReservoir");
static const V lit460("getResponseError");
static const V lit461("debugStr");
static const V lit462("format");
static const V lit463("Status %s / Count %.0f / Wheels %s\n");
static const V lit464("Phase %s / Def %.3f / E %.3f / Sup %.3f / Gate %.3f\n");
static const V lit465("Lat %.3f Long %.3f BrL %.3f BrG %.3f\n");
static const V lit466("Demand %.3f / RespTau %.3f / EnergyTau %.3f / Err %.3f / Rel %.3f\n");
static const V lit467("Reservoir %.3f / Target %.3f / Head %.3f / Sat %s\n");
static const V lit468("Vert %.3f Hys %.3f Delay %.3f Return %.3f\n");
static const V lit469("SA %.3f SR %.3f Load %.0f dLoad %.0f CQ %.2f CS %.2f\n");
static const V lit470("Road %.2f Path %.2f Leak %.2f Thermal %.2f\n");
static const V lit471("Links CQ:%s Mem:%s DH:%s CS:%s DW:%s LP:%s RII:%s");
static const V lit472("OK");
static const V lit473("NIL");
V load_tire_carcass(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(45);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=lit2;refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit3);set(z,V(1.0),lit4);set(z,V(2.0),lit5);set(z,V(3.0),lit6);return z;})();e->slot(0,2)=std::move(t4);}
{V t5=([&](){V z=table();set(z,lit7,V(0.0));set(z,lit8,V(1.0));set(z,lit9,V(2.0));set(z,lit10,V(3.0));set(z,lit11,V(4.0));set(z,lit12,V(5.0));set(z,lit13,V(6.0));set(z,lit14,V(7.0));set(z,lit15,V(8.0));set(z,lit16,V(9.0));return z;})();e->slot(0,3)=std::move(t5);}
{V t6=([&](){V z=table();set(z,get(e->slot(0,3),lit7),lit7);set(z,get(e->slot(0,3),lit8),lit8);set(z,get(e->slot(0,3),lit9),lit9);set(z,get(e->slot(0,3),lit10),lit10);set(z,get(e->slot(0,3),lit11),lit11);set(z,get(e->slot(0,3),lit12),lit12);set(z,get(e->slot(0,3),lit13),lit13);set(z,get(e->slot(0,3),lit14),lit14);set(z,get(e->slot(0,3),lit15),lit15);set(z,get(e->slot(0,3),lit16),lit16);return z;})();e->slot(0,4)=std::move(t6);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit17)};V t7=([&](){V z=table();set(z,lit18,V(3200.0));set(z,lit19,V(120.0));set(z,lit20,V(1800.0));set(z,lit21,V(6200.0));set(z,lit22,V(65000.0));set(z,lit23,V(1125.0));set(z,lit24,V(0.05));set(z,lit25,V(0.085));set(z,lit26,V(0.11));set(z,lit27,V(0.86));set(z,lit28,V(0.74));set(z,lit29,V(2.783));set(z,lit30,V(1.796));set(z,lit31,V(0.15));set(z,lit32,V(0.266));set(z,lit33,V(0.14));set(z,lit34,V(0.21));set(z,lit35,V(10500.0));set(z,lit36,V(0.22));set(z,lit37,V(0.35));set(z,lit38,V(0.72));set(z,lit39,V(0.58));set(z,lit40,V(0.42));set(z,lit41,V(0.18));set(z,lit42,V(0.36));set(z,lit43,V(0.24));set(z,lit44,V(0.24));set(z,lit45,V(0.24));set(z,lit46,V(0.2));set(z,lit47,V(0.18));set(z,lit48,V(0.1));set(z,lit49,V(0.18));set(z,lit50,V(0.16));set(z,lit51,V(0.18));set(z,lit52,V(0.12));set(z,lit53,V(0.16));set(z,lit54,V(0.12));set(z,lit55,V(0.012));set(z,lit56,V(0.014));set(z,lit57,V(0.012));set(z,lit58,V(0.1));set(z,lit59,V(0.05));set(z,lit60,V(0.16));set(z,lit61,V(0.12));set(z,lit62,V(0.04));set(z,lit63,V(0.09));set(z,lit64,V(0.45));set(z,lit65,V(0.35));set(z,lit66,V(0.65));set(z,lit67,V(0.92));set(z,lit68,V(0.28));set(z,lit69,V(0.24));set(z,lit70,V(0.2));set(z,lit71,V(0.1));set(z,lit72,V(0.07));set(z,lit73,V(0.06));set(z,lit74,V(0.03));set(z,lit75,V(0.02));set(z,lit76,V(0.1));set(z,lit77,V(0.11));set(z,lit78,V(0.04));set(z,lit79,V(0.155));set(z,lit80,V(0.22));set(z,lit81,V(1.1));set(z,lit82,V(0.52));set(z,lit83,V(0.08));set(z,lit84,V(0.34));set(z,lit85,V(0.18));set(z,lit86,V(0.18));set(z,lit87,V(0.3));set(z,lit88,V(0.72));set(z,lit89,V(0.16));set(z,lit90,V(0.18));set(z,lit91,V(0.55));set(z,lit92,V(1.0));set(z,lit93,V(1.0));set(z,lit94,V(1.0));set(z,lit95,V(1.0));set(z,lit96,V(1.0));set(z,lit97,V(0.0001));set(z,lit98,V(0.1));set(z,lit99,V(0.25));return z;})();refs[0].put(std::move(t7));}
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V z=table();set(z,lit100,V(false));set(z,lit101,get(e->slot(1,2),e->slot(0,0)));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(1.0));set(z,lit111,V(1.0));set(z,lit112,V(1.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(1.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(0.0));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit130,V(0.0));set(z,lit131,V(0.0));set(z,lit132,V(0.0));set(z,lit133,V(0.0));set(z,lit134,V(1.0));set(z,lit135,V(1.0));set(z,lit136,V(0.0));set(z,lit137,V(0.0));set(z,lit138,V(0.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(0.0));set(z,lit143,V(0.0));set(z,lit144,V(0.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(0.0));set(z,lit151,V(0.0));set(z,lit152,V(0.0));set(z,lit153,V(0.0));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,V(0.0));set(z,lit158,V(0.0));set(z,lit159,V(0.0));set(z,lit160,V(1.0));set(z,lit161,V(1.0));set(z,lit162,V(0.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(0.0));set(z,lit166,V(0.0));set(z,lit167,V(0.0));set(z,lit168,V(0.0));set(z,lit169,V(0.0));set(z,lit170,V(0.0));set(z,lit171,V(0.0));set(z,lit172,V(1.0));set(z,lit173,V(false));set(z,lit174,V(0.0));set(z,lit175,V(0.0));set(z,lit176,V(0.0));set(z,lit177,V(0.0));set(z,lit178,V(0.0));set(z,lit179,get(e->slot(1,3),lit7));set(z,lit180,get(e->slot(1,4),get(e->slot(1,3),lit7)));return z;})()};
return Args{};});
{V t8=([&](){V z=table();set(z,lit181,lit7);set(z,lit182,V(0.0));set(z,lit183,V(false));set(z,lit184,V(0.0));set(z,lit185,V(0.0));set(z,lit186,V(0.0));set(z,lit187,V(0.0));set(z,lit188,V(0.0));set(z,lit189,V(0.0));set(z,lit190,V(1.0));set(z,lit191,V(0.0));set(z,lit192,V(0.0));set(z,lit193,V(1.0));set(z,lit194,V(0.0));set(z,lit195,V(0.0));set(z,lit196,V(0.0));set(z,lit197,V(0.0));set(z,lit198,V(0.0));set(z,lit199,V(0.0));set(z,lit200,V(0.0));set(z,lit201,V(0.0));set(z,lit202,V(false));set(z,lit203,V(false));set(z,lit204,V(false));set(z,lit205,V(false));set(z,lit206,V(false));set(z,lit207,V(false));set(z,lit208,V(false));set(z,lit209,V(false));set(z,lit210,V(false));set(z,lit211,V(false));set(z,lit212,V(999.0));set(z,lit213,V(true));set(z,lit214,([&](){V z=table();return z;})());return z;})();e->slot(0,6)=std::move(t8);}
{double t9=num(V(0.0)),t10=num(V(3.0)),t11=num(V(1.0));for(double t12=t9;(t11>0?t12<=t10:t12>=t10);t12+=t11){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t12);{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit214),e->slot(0,0))};V t13=first(call(e->slot(1,5),Args{e->slot(0,0)}));refs[0].put(std::move(t13));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),e->slot(0,0))};V t14=get(get(e->slot(1,6),lit214),e->slot(0,0));refs[0].put(std::move(t14));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit215)};V t15=e->slot(0,6);refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit216)};V t16=e->slot(0,6);refs[0].put(std::move(t16));}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t17=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t17);}
if(truth(([&](){V t18=([&](){V t19=([&](){V t20=eq(e->slot(0,2),V());return !truth(t20)?ne(e->slot(0,2),e->slot(0,2)):t20;})();return !truth(t19)?eq(e->slot(0,2),get(e->get("math"),lit217)):t19;})();return !truth(t18)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit217)))):t18;})())){return Args{([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,7),Args{e->slot(0,0),([&](){V t23=e->slot(0,1);return !truth(t23)?V(0.0):t23;})()}));refs[0].put(std::move(t22));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit218),call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t24=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t25=first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t26=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t27=first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t27));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,8),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit219),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t28=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t29=first(call(e->slot(1,7),Args{e->slot(0,1),V(1.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t30=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t30));}
if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t31=([&](){V t32=ge(e->slot(0,2),e->slot(0,1));return truth(t32)?V(1.0):t32;})();return !truth(t31)?V(0.0):t31;})()};
}
{V t33=first(call(e->slot(1,8),Args{divv(sub(e->slot(0,2),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t33);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
{V t34=get(e->slot(0,0),lit220);e->slot(0,12)=std::move(t34);}
{V t35=get(e->slot(0,0),lit221);e->slot(0,13)=std::move(t35);}
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t36=first(call(e->slot(1,13),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t36);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t37=e->slot(0,1);return !truth(t37)?V(0.0):t37;})()};
}
return call(e->slot(1,7),Args{e->slot(0,2),([&](){V t38=e->slot(0,1);return !truth(t38)?V(0.0):t38;})()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t39=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t39);}
{double t40=num(V(1.0)),t41=num(length(e->slot(0,1))),t42=num(V(1.0));for(double t43=t40;(t42>0?t43<=t41:t43>=t41);t43+=t42){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t43);{V t44=first(call(e->slot(2,13),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t44);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,7),Args{e->slot(0,1),([&](){V t45=e->slot(1,0);return !truth(t45)?V(0.0):t45;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
{V t46=get(e->slot(0,0),lit222);e->slot(0,16)=std::move(t46);}
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t47=V(!truth(e->get("ac")));return !truth(t47)?V(!truth(get(e->get("ac"),lit223))):t47;})())){return Args{V()};
}
{Args t48=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit223),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t48,0);e->slot(0,1)=arg(t48,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,7);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t49=first(call(e->slot(1,16),Args{e->slot(0,0),lit214,V()}));e->slot(0,2)=std::move(t49);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t50=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t50,0);e->slot(0,4)=arg(t50,1);}
if(truth(([&](){V t51=e->slot(0,3);return truth(t51)?ne(e->slot(0,4),V()):t51;})())){return Args{e->slot(0,4)};
}
{Args t52=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});e->slot(0,5)=arg(t52,0);e->slot(0,6)=arg(t52,1);}
if(truth(([&](){V t53=e->slot(0,5);return truth(t53)?ne(e->slot(0,6),V()):t53;})())){return Args{e->slot(0,6)};
}
return Args{V()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t54=([&](){V z=table();set(z,V(1.0),lit102);set(z,V(2.0),lit224);return z;})();e->slot(0,1)=std::move(t54);}
{double t55=num(V(1.0)),t56=num(length(e->slot(0,1))),t57=num(V(1.0));for(double t58=t55;(t57>0?t58<=t56:t58>=t56);t58+=t57){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t58);{V t59=first(call(e->slot(2,16),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t59);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,7),Args{e->slot(0,1),V()});
}
}}
return Args{V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{V()};
}
{V t60=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t60);}
{V t61=first(call(get(e->get("math"),lit218),Args{e->slot(0,1)}));e->slot(0,2)=std::move(t61);}
{V t62=get(get(e->slot(1,1),lit17),lit18);e->slot(0,3)=std::move(t62);}
if(truth(lt(e->slot(0,1),V(0.0)))){return call(get(e->get("math"),lit219),Args{V(0.0),add(e->slot(0,3),e->slot(0,1))});
}
if(truth(([&](){V t63=ge(e->slot(0,2),mul(e->slot(0,3),V(0.85)));return truth(t63)?le(e->slot(0,2),mul(e->slot(0,3),V(2.5))):t63;})())){return Args{e->slot(0,2)};
}
return call(get(e->get("math"),lit219),Args{V(0.0),add(e->slot(0,3),e->slot(0,1))});
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t64=first(call(e->slot(1,19),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t64);}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
{Args t65=call(e->slot(1,15),Args{V(),concat(lit225,e->slot(0,1)),concat(lit226,e->slot(0,1)),concat(lit227,e->slot(0,1)),concat(lit228,e->slot(0,1)),concat(lit229,e->slot(0,1)),concat(lit230,e->slot(0,1)),concat(lit231,e->slot(0,1))});e->slot(0,3)=arg(t65,0);e->slot(0,4)=arg(t65,1);}
if(truth(ne(e->slot(0,4),V()))){return call(get(e->get("math"),lit219),Args{V(0.0),([&](){V t66=e->slot(0,3);return !truth(t66)?V(0.0):t66;})()});
}
{V t67=first(call(e->slot(1,13),Args{concat(lit232,e->slot(0,1))}));e->slot(0,5)=std::move(t67);}
if(truth(ne(e->slot(0,5),V()))){return call(e->slot(1,20),Args{e->slot(0,5)});
}
return Args{get(get(e->slot(1,1),lit17),lit18)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t68=call(e->slot(1,15),Args{V(),concat(lit233,e->slot(0,0)),concat(lit234,e->slot(0,0)),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0))});e->slot(0,2)=arg(t68,0);e->slot(0,3)=arg(t68,1);}
{Args t69=call(e->slot(1,15),Args{V(),concat(lit239,e->slot(0,0)),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0)),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0))});e->slot(0,4)=arg(t69,0);e->slot(0,5)=arg(t69,1);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t70=first(call(e->slot(1,16),Args{e->slot(0,1),lit106,V(0.0)}));refs[0].put(std::move(t70));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t71=first(call(e->slot(1,16),Args{e->slot(0,1),lit107,V(0.0)}));refs[0].put(std::move(t71));}
}
return joined(Args{first(call(e->slot(1,9),Args{e->slot(0,2)}))},call(e->slot(1,9),Args{e->slot(0,4)}));
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit212)};V t72=add(([&](){V t73=get(e->slot(1,6),lit212);return !truth(t73)?V(0.0):t73;})(),([&](){V t74=e->slot(0,0);return !truth(t74)?V(0.0):t74;})());refs[0].put(std::move(t72));}
if(truth(ge(get(e->slot(1,6),lit212),get(get(e->slot(1,1),lit17),lit99)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit212)};V t75=V(0.0);refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit213)};V t76=V(true);refs[0].put(std::move(t76));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,6),lit213)};V t77=V(false);refs[0].put(std::move(t77));}
}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,6),lit202)};V t78=V(false);refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit203)};V t79=V(false);refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit204)};V t80=V(false);refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit205)};V t81=V(false);refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit206)};V t82=V(false);refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit207)};V t83=V(false);refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit208)};V t84=V(false);refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit209)};V t85=V(false);refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit210)};V t86=V(false);refs[0].put(std::move(t86));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t87=first(call(e->slot(1,8),Args{divv(e->slot(0,0),first(call(get(e->get("math"),lit219),Args{get(get(e->slot(1,1),lit17),lit35),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t87);}
return Args{add(e->slot(0,1),mul(sub(e->slot(0,2),e->slot(0,1)),e->slot(0,3)))};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t88=get(e->slot(1,1),lit17);e->slot(0,1)=std::move(t88);}
{V t89=divv(first(call(get(e->get("math"),lit219),Args{e->slot(0,0),V(0.0)})),first(call(get(e->get("math"),lit219),Args{get(e->slot(0,1),lit22),V(1.0)})));e->slot(0,2)=std::move(t89);}
return call(e->slot(1,8),Args{e->slot(0,2),V(0.0),get(e->slot(0,1),lit25)});
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t90=first(call(e->slot(1,11),Args{get(get(e->slot(1,1),lit17),lit19),mul(get(get(e->slot(1,1),lit17),lit18),V(0.55)),get(e->slot(0,0),lit102)}));e->slot(0,1)=std::move(t90);}
{V t91=first(call(e->slot(1,8),Args{mul(get(e->slot(0,0),lit113),V(0.32)),V(0.0),V(0.65)}));e->slot(0,2)=std::move(t91);}
{V t92=first(call(e->slot(1,8),Args{divv(first(call(get(e->get("math"),lit219),Args{V(-num(get(e->slot(0,0),lit105))),V(0.0)})),first(call(get(e->get("math"),lit219),Args{mul(get(get(e->slot(1,1),lit17),lit18),V(12.0)),V(1.0)}))),V(0.0),V(0.35)}));e->slot(0,3)=std::move(t92);}
return call(e->slot(1,8),Args{sub(sub(e->slot(0,1),e->slot(0,2)),e->slot(0,3)),V(0.0),V(1.0)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,18);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t93=call(e->slot(1,15),Args{V(),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0)),concat(lit247,e->slot(0,0)),concat(lit248,e->slot(0,0))});e->slot(0,2)=arg(t93,0);e->slot(0,3)=arg(t93,1);}
{Args t94=call(e->slot(1,15),Args{V(),concat(lit249,e->slot(0,0)),concat(lit250,e->slot(0,0)),concat(lit251,e->slot(0,0))});e->slot(0,4)=arg(t94,0);e->slot(0,5)=arg(t94,1);}
{Args t95=call(e->slot(1,15),Args{V(),concat(lit252,e->slot(0,0)),concat(lit253,e->slot(0,0)),concat(lit254,e->slot(0,0)),concat(lit255,e->slot(0,0))});e->slot(0,6)=arg(t95,0);e->slot(0,7)=arg(t95,1);}
{Args t96=call(e->slot(1,15),Args{V(),concat(lit256,e->slot(0,0)),concat(lit257,e->slot(0,0)),concat(lit258,e->slot(0,0)),concat(lit259,e->slot(0,0)),concat(lit260,e->slot(0,0))});e->slot(0,8)=arg(t96,0);e->slot(0,9)=arg(t96,1);}
{Args t97=call(e->slot(1,15),Args{V(),concat(lit261,e->slot(0,0)),concat(lit262,e->slot(0,0))});e->slot(0,10)=arg(t97,0);e->slot(0,11)=arg(t97,1);}
if(truth(([&](){V t98=([&](){V t99=([&](){V t100=([&](){V t101=e->slot(0,3);return !truth(t101)?e->slot(0,5):t101;})();return !truth(t100)?e->slot(0,7):t100;})();return !truth(t99)?e->slot(0,9):t99;})();return !truth(t98)?e->slot(0,11):t98;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit202)};V t102=V(true);refs[0].put(std::move(t102));}
}
{V t103=first(call(e->slot(1,25),Args{get(e->slot(0,1),lit102),get(get(e->slot(1,1),lit17),lit31),get(get(e->slot(1,1),lit17),lit32)}));e->slot(0,12)=std::move(t103);}
{V t104=first(call(e->slot(1,25),Args{get(e->slot(0,1),lit102),get(get(e->slot(1,1),lit17),lit33),get(get(e->slot(1,1),lit17),lit34)}));e->slot(0,13)=std::move(t104);}
{V t105=divv(get(e->slot(0,1),lit106),first(call(get(e->get("math"),lit219),Args{e->slot(0,12),V(0.001)})));e->slot(0,14)=std::move(t105);}
{V t106=divv(get(e->slot(0,1),lit107),first(call(get(e->get("math"),lit219),Args{e->slot(0,13),V(0.001)})));e->slot(0,15)=std::move(t106);}
{V t107=first(call(get(e->get("math"),lit263),Args{add(mul(e->slot(0,14),e->slot(0,14)),mul(e->slot(0,15),e->slot(0,15)))}));e->slot(0,16)=std::move(t107);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t108=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,8),e->slot(0,16)})),V(0.0),V(2.5)}));refs[0].put(std::move(t108));}
{V t109=first(call(e->slot(1,27),Args{e->slot(0,1)}));e->slot(0,17)=std::move(t109);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t110=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),e->slot(0,17)})),V(0.0),V(1.2)}));refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t111=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),get(e->slot(0,1),lit110)})),V(0.0),V(1.2)}));refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t112=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,6),get(e->slot(0,1),lit110)})),V(0.0),V(1.2)}));refs[0].put(std::move(t112));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t113=first(call(e->slot(1,8),Args{sub(V(1.0),first(call(get(e->get("math"),lit264),Args{get(e->slot(0,1),lit110),get(e->slot(0,1),lit112),V(1.0)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t114=first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0)}));refs[0].put(std::move(t114));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t115=call(e->slot(1,15),Args{V(),concat(lit265,e->slot(0,0)),concat(lit266,e->slot(0,0)),concat(lit267,e->slot(0,0)),concat(lit268,e->slot(0,0)),concat(lit269,e->slot(0,0))});e->slot(0,2)=arg(t115,0);e->slot(0,3)=arg(t115,1);}
{Args t116=call(e->slot(1,15),Args{V(),concat(lit270,e->slot(0,0)),concat(lit271,e->slot(0,0)),concat(lit272,e->slot(0,0))});e->slot(0,4)=arg(t116,0);e->slot(0,5)=arg(t116,1);}
{Args t117=call(e->slot(1,15),Args{V(),concat(lit273,e->slot(0,0)),concat(lit274,e->slot(0,0))});e->slot(0,6)=arg(t117,0);e->slot(0,7)=arg(t117,1);}
{Args t118=call(e->slot(1,15),Args{V(),concat(lit275,e->slot(0,0)),concat(lit276,e->slot(0,0)),concat(lit277,e->slot(0,0))});e->slot(0,8)=arg(t118,0);e->slot(0,9)=arg(t118,1);}
{Args t119=call(e->slot(1,15),Args{V(),concat(lit278,e->slot(0,0)),concat(lit279,e->slot(0,0)),concat(lit280,e->slot(0,0))});e->slot(0,10)=arg(t119,0);e->slot(0,11)=arg(t119,1);}
{Args t120=call(e->slot(1,15),Args{V(),concat(lit281,e->slot(0,0)),concat(lit282,e->slot(0,0)),concat(lit283,e->slot(0,0)),concat(lit284,e->slot(0,0))});e->slot(0,12)=arg(t120,0);e->slot(0,13)=arg(t120,1);}
{Args t121=call(e->slot(1,15),Args{V(),concat(lit285,e->slot(0,0)),concat(lit286,e->slot(0,0)),concat(lit287,e->slot(0,0)),concat(lit288,e->slot(0,0))});e->slot(0,14)=arg(t121,0);e->slot(0,15)=arg(t121,1);}
if(truth(([&](){V t122=([&](){V t123=([&](){V t124=([&](){V t125=([&](){V t126=([&](){V t127=e->slot(0,3);return !truth(t127)?e->slot(0,5):t127;})();return !truth(t126)?e->slot(0,7):t126;})();return !truth(t125)?e->slot(0,9):t125;})();return !truth(t124)?e->slot(0,11):t124;})();return !truth(t123)?e->slot(0,13):t123;})();return !truth(t122)?e->slot(0,15):t122;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit203)};V t128=V(true);refs[0].put(std::move(t128));}
}
{V t129=first(call(e->slot(1,8),Args{add(mul(get(e->slot(0,1),lit164),V(0.75)),mul(first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,1),lit113),V(0.85)),V(0.0)})),V(0.2))),V(0.0),V(1.0)}));e->slot(0,16)=std::move(t129);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t130=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),e->slot(0,16)})),V(0.0),V(1.2)}));refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit117)};V t131=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),sub(V(1.0),mul(get(e->slot(0,1),lit116),V(0.16)))})),V(0.0),V(1.2)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t132=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t133=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit120)};V t134=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit121)};V t135=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,12),get(e->slot(0,1),lit116)})),V(0.0),V(1.0)}));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit122)};V t136=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,14),get(e->slot(0,1),lit119)})),V(0.0),V(1.0)}));refs[0].put(std::move(t136));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t137=call(e->slot(1,15),Args{V(),concat(lit289,e->slot(0,0)),concat(lit290,e->slot(0,0)),concat(lit291,e->slot(0,0))});e->slot(0,2)=arg(t137,0);e->slot(0,3)=arg(t137,1);}
{Args t138=call(e->slot(1,15),Args{V(),concat(lit292,e->slot(0,0)),concat(lit293,e->slot(0,0)),concat(lit294,e->slot(0,0))});e->slot(0,4)=arg(t138,0);e->slot(0,5)=arg(t138,1);}
{Args t139=call(e->slot(1,15),Args{V(),concat(lit295,e->slot(0,0)),concat(lit296,e->slot(0,0)),concat(lit297,e->slot(0,0))});e->slot(0,6)=arg(t139,0);e->slot(0,7)=arg(t139,1);}
{Args t140=call(e->slot(1,15),Args{V(),concat(lit298,e->slot(0,0)),concat(lit299,e->slot(0,0)),concat(lit300,e->slot(0,0))});e->slot(0,8)=arg(t140,0);e->slot(0,9)=arg(t140,1);}
{Args t141=call(e->slot(1,15),Args{V(),concat(lit301,e->slot(0,0)),concat(lit302,e->slot(0,0))});e->slot(0,10)=arg(t141,0);e->slot(0,11)=arg(t141,1);}
if(truth(([&](){V t142=([&](){V t143=([&](){V t144=([&](){V t145=e->slot(0,3);return !truth(t145)?e->slot(0,5):t145;})();return !truth(t144)?e->slot(0,7):t144;})();return !truth(t143)?e->slot(0,9):t143;})();return !truth(t142)?e->slot(0,11):t142;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit204)};V t146=V(true);refs[0].put(std::move(t146));}
}
{V t147=first(call(get(e->get("math"),lit219),Args{divv(get(e->slot(0,1),lit105),first(call(get(e->get("math"),lit219),Args{mul(get(get(e->slot(1,1),lit17),lit18),V(25.0)),V(1.0)}))),V(0.0)}));e->slot(0,12)=std::move(t147);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit123)};V t148=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),mul(get(e->slot(0,1),lit159),V(0.55))})),V(0.0),V(1.2)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t149=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),e->slot(0,12)})),V(0.0),V(1.2)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t150=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t151=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t152=first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0)}));refs[0].put(std::move(t152));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t153=call(e->slot(1,15),Args{V(),concat(lit303,e->slot(0,0)),concat(lit304,e->slot(0,0)),concat(lit305,e->slot(0,0))});e->slot(0,2)=arg(t153,0);e->slot(0,3)=arg(t153,1);}
{Args t154=call(e->slot(1,15),Args{V(),concat(lit306,e->slot(0,0)),concat(lit307,e->slot(0,0)),concat(lit308,e->slot(0,0)),lit309});e->slot(0,4)=arg(t154,0);e->slot(0,5)=arg(t154,1);}
{Args t155=call(e->slot(1,15),Args{V(),concat(lit310,e->slot(0,0)),concat(lit311,e->slot(0,0)),concat(lit312,e->slot(0,0)),concat(lit313,e->slot(0,0))});e->slot(0,6)=arg(t155,0);e->slot(0,7)=arg(t155,1);}
{Args t156=call(e->slot(1,15),Args{V(),concat(lit314,e->slot(0,0)),concat(lit315,e->slot(0,0)),concat(lit316,e->slot(0,0)),concat(lit317,e->slot(0,0))});e->slot(0,8)=arg(t156,0);e->slot(0,9)=arg(t156,1);}
if(truth(([&](){V t157=([&](){V t158=([&](){V t159=e->slot(0,3);return !truth(t159)?e->slot(0,5):t159;})();return !truth(t158)?e->slot(0,7):t158;})();return !truth(t157)?e->slot(0,9):t157;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit205)};V t160=V(true);refs[0].put(std::move(t160));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t161=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t162=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t163=first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t164=first(call(e->slot(1,7),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t164));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t165=call(e->slot(1,15),Args{V(),concat(lit318,e->slot(0,0)),concat(lit319,e->slot(0,0)),concat(lit320,e->slot(0,0)),concat(lit321,e->slot(0,0))});e->slot(0,2)=arg(t165,0);e->slot(0,3)=arg(t165,1);}
{Args t166=call(e->slot(1,15),Args{V(),concat(lit322,e->slot(0,0)),concat(lit323,e->slot(0,0))});e->slot(0,4)=arg(t166,0);e->slot(0,5)=arg(t166,1);}
{Args t167=call(e->slot(1,15),Args{V(),concat(lit324,e->slot(0,0)),concat(lit325,e->slot(0,0)),concat(lit326,e->slot(0,0))});e->slot(0,6)=arg(t167,0);e->slot(0,7)=arg(t167,1);}
{Args t168=call(e->slot(1,15),Args{V(),concat(lit327,e->slot(0,0)),concat(lit328,e->slot(0,0)),concat(lit329,e->slot(0,0))});e->slot(0,8)=arg(t168,0);e->slot(0,9)=arg(t168,1);}
{Args t169=call(e->slot(1,15),Args{V(),concat(lit330,e->slot(0,0)),concat(lit331,e->slot(0,0)),concat(lit332,e->slot(0,0)),lit333});e->slot(0,10)=arg(t169,0);e->slot(0,11)=arg(t169,1);}
{Args t170=call(e->slot(1,15),Args{V(),concat(lit307,e->slot(0,0)),concat(lit334,e->slot(0,0)),concat(lit308,e->slot(0,0))});e->slot(0,12)=arg(t170,0);e->slot(0,13)=arg(t170,1);}
if(truth(([&](){V t171=([&](){V t172=([&](){V t173=([&](){V t174=([&](){V t175=e->slot(0,3);return !truth(t175)?e->slot(0,5):t175;})();return !truth(t174)?e->slot(0,7):t174;})();return !truth(t173)?e->slot(0,9):t173;})();return !truth(t172)?e->slot(0,11):t172;})();return !truth(t171)?e->slot(0,13):t171;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit207)};V t176=V(true);refs[0].put(std::move(t176));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit132)};V t177=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit133)};V t178=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t179=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t180=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,8),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit136)};V t181=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit137)};V t182=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t182));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t183=call(e->slot(1,15),Args{V(),concat(lit294,e->slot(0,0)),concat(lit335,e->slot(0,0)),concat(lit336,e->slot(0,0)),concat(lit337,e->slot(0,0))});e->slot(0,2)=arg(t183,0);e->slot(0,3)=arg(t183,1);}
{Args t184=call(e->slot(1,15),Args{V(),concat(lit338,e->slot(0,0)),concat(lit339,e->slot(0,0)),concat(lit340,e->slot(0,0)),concat(lit341,e->slot(0,0))});e->slot(0,4)=arg(t184,0);e->slot(0,5)=arg(t184,1);}
{Args t185=call(e->slot(1,15),Args{V(),concat(lit342,e->slot(0,0)),concat(lit343,e->slot(0,0))});e->slot(0,6)=arg(t185,0);e->slot(0,7)=arg(t185,1);}
{Args t186=call(e->slot(1,15),Args{V(),concat(lit320,e->slot(0,0)),concat(lit321,e->slot(0,0))});e->slot(0,8)=arg(t186,0);e->slot(0,9)=arg(t186,1);}
{Args t187=call(e->slot(1,15),Args{V(),concat(lit344,e->slot(0,0)),concat(lit345,e->slot(0,0))});e->slot(0,10)=arg(t187,0);e->slot(0,11)=arg(t187,1);}
{Args t188=call(e->slot(1,15),Args{V(),concat(lit346,e->slot(0,0)),concat(lit347,e->slot(0,0)),concat(lit348,e->slot(0,0))});e->slot(0,12)=arg(t188,0);e->slot(0,13)=arg(t188,1);}
{Args t189=call(e->slot(1,15),Args{V(),concat(lit288,e->slot(0,0)),lit349,lit350});e->slot(0,14)=arg(t189,0);e->slot(0,15)=arg(t189,1);}
if(truth(([&](){V t190=([&](){V t191=([&](){V t192=([&](){V t193=e->slot(0,3);return !truth(t193)?e->slot(0,5):t193;})();return !truth(t192)?e->slot(0,7):t192;})();return !truth(t191)?e->slot(0,9):t191;})();return !truth(t190)?e->slot(0,11):t190;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit208)};V t194=V(true);refs[0].put(std::move(t194));}
}
if(truth(e->slot(0,13))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit209)};V t195=V(true);refs[0].put(std::move(t195));}
}
if(truth(e->slot(0,15))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit210)};V t196=V(true);refs[0].put(std::move(t196));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit138)};V t197=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit139)};V t198=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit140)};V t199=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit141)};V t200=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,8),get(e->slot(0,1),lit132)})),V(0.0),V(1.2)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit142)};V t201=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit143)};V t202=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t203=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t203));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t204=call(e->slot(1,15),Args{V(),lit351,lit352,lit353,lit354});e->slot(0,2)=arg(t204,0);e->slot(0,3)=arg(t204,1);}
{Args t205=call(e->slot(1,15),Args{V(),lit355,lit356,lit357});e->slot(0,4)=arg(t205,0);e->slot(0,5)=arg(t205,1);}
if(truth(([&](){V t206=e->slot(0,3);return !truth(t206)?e->slot(0,5):t206;})())){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit206)};V t207=V(true);refs[0].put(std::move(t207));}
}
if(truth(ge(e->slot(0,0),V(2.0)))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit145)};V t208=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit146)};V t209=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t209));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit145)};V t210=V(0.0);refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit146)};V t211=V(0.0);refs[0].put(std::move(t211));}
}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,28),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,29),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,30),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,31),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,32),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,33),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,34),Args{e->slot(0,0),e->slot(0,1)});
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(([&](){V t212=le(get(e->slot(0,0),lit110),get(get(e->slot(1,1),lit17),lit85));return !truth(t212)?le(get(e->slot(0,0),lit102),get(get(e->slot(1,1),lit17),lit19)):t212;})())){return Args{get(e->slot(1,3),lit15),get(e->slot(1,4),get(e->slot(1,3),lit15))};
}
if(truth(gt(first(call(get(e->get("math"),lit219),Args{get(e->slot(0,0),lit124),get(e->slot(0,0),lit143),get(e->slot(0,0),lit138)})),get(get(e->slot(1,1),lit17),lit91)))){return Args{get(e->slot(1,3),lit16),get(e->slot(1,4),get(e->slot(1,3),lit16))};
}
if(truth(([&](){V t213=gt(get(e->slot(0,0),lit157),get(get(e->slot(1,1),lit17),lit88));return !truth(t213)?gt(get(e->slot(0,0),lit113),V(1.25)):t213;})())){return Args{get(e->slot(1,3),lit14),get(e->slot(1,4),get(e->slot(1,3),lit14))};
}
if(truth(([&](){V t214=gt(get(e->slot(0,0),lit156),get(get(e->slot(1,1),lit17),lit89));return truth(t214)?lt(get(e->slot(0,0),lit157),get(e->slot(0,0),lit154)):t214;})())){return Args{get(e->slot(1,3),lit13),get(e->slot(1,4),get(e->slot(1,3),lit13))};
}
if(truth(gt(get(e->slot(0,0),lit155),get(get(e->slot(1,1),lit17),lit90)))){return Args{get(e->slot(1,3),lit12),get(e->slot(1,4),get(e->slot(1,3),lit12))};
}
if(truth(gt(get(e->slot(0,0),lit151),get(get(e->slot(1,1),lit17),lit87)))){return Args{get(e->slot(1,3),lit11),get(e->slot(1,4),get(e->slot(1,3),lit11))};
}
if(truth(([&](){V t215=gt(get(e->slot(0,0),lit152),get(e->slot(0,0),lit153));return truth(t215)?gt(get(e->slot(0,0),lit152),get(get(e->slot(1,1),lit17),lit86)):t215;})())){return Args{get(e->slot(1,3),lit9),get(e->slot(1,4),get(e->slot(1,3),lit9))};
}
if(truth(([&](){V t216=ge(get(e->slot(0,0),lit153),get(e->slot(0,0),lit152));return truth(t216)?gt(get(e->slot(0,0),lit153),get(get(e->slot(1,1),lit17),lit86)):t216;})())){return Args{get(e->slot(1,3),lit10),get(e->slot(1,4),get(e->slot(1,3),lit10))};
}
return Args{get(e->slot(1,3),lit8),get(e->slot(1,4),get(e->slot(1,3),lit8))};
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t217=first(call(e->slot(1,8),Args{add(add(add(add(add(add(mul(first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,0),lit113),V(0.7)),V(0.0)})),V(0.55)),mul(get(e->slot(0,0),lit159),V(0.22))),mul(get(e->slot(0,0),lit124),V(0.18))),mul(get(e->slot(0,0),lit138),V(0.12))),mul(get(e->slot(0,0),lit140),V(0.14))),mul(get(e->slot(0,0),lit144),get(get(e->slot(1,1),lit17),lit54))),mul(sub(V(1.0),get(e->slot(0,0),lit110)),V(0.2))),V(0.0),V(1.0)}));e->slot(0,2)=std::move(t217);}
{V t218=([&](){V t219=([&](){V t220=gt(e->slot(0,2),get(e->slot(0,0),lit164));return truth(t220)?V(0.22):t220;})();return !truth(t219)?V(1.8):t219;})();e->slot(0,3)=std::move(t218);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit164)};V t221=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,0),lit164),e->slot(0,2),e->slot(0,3),e->slot(0,1)})),V(0.0),V(1.0)}));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit163)};V t222=first(call(e->slot(1,8),Args{add(add(add(add(add(mul(get(e->slot(0,0),lit164),V(0.55)),mul(get(e->slot(0,0),lit113),V(0.2))),mul(get(e->slot(0,0),lit159),V(0.16))),mul(get(e->slot(0,0),lit124),V(0.12))),mul(get(e->slot(0,0),lit122),V(0.12))),mul(get(e->slot(0,0),lit144),V(0.1))),V(0.0),V(1.0)}));refs[0].put(std::move(t222));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,42);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t223=get(e->slot(1,1),lit17);e->slot(0,3)=std::move(t223);}
{V t224=ge(e->slot(0,0),V(2.0));e->slot(0,4)=std::move(t224);}
{V t225=([&](){V t226=([&](){V t227=e->slot(0,4);return truth(t227)?get(e->slot(0,3),lit59):t227;})();return !truth(t226)?get(e->slot(0,3),lit58):t226;})();e->slot(0,5)=std::move(t225);}
{V t228=([&](){V t229=([&](){V t230=e->slot(0,4);return truth(t230)?get(e->slot(0,3),lit61):t230;})();return !truth(t229)?get(e->slot(0,3),lit60):t229;})();e->slot(0,6)=std::move(t228);}
{V t231=([&](){V t232=([&](){V t233=e->slot(0,4);return truth(t233)?get(e->slot(0,3),lit65):t233;})();return !truth(t232)?get(e->slot(0,3),lit64):t232;})();e->slot(0,7)=std::move(t231);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit166)};V t234=e->slot(0,5);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit167)};V t235=e->slot(0,7);refs[0].put(std::move(t235));}
{V t236=first(call(e->slot(1,25),Args{get(e->slot(0,1),lit102),get(e->slot(0,3),lit31),get(e->slot(0,3),lit32)}));e->slot(0,8)=std::move(t236);}
{V t237=first(call(e->slot(1,25),Args{get(e->slot(0,1),lit102),get(e->slot(0,3),lit33),get(e->slot(0,3),lit34)}));e->slot(0,9)=std::move(t237);}
{V t238=first(call(e->slot(1,8),Args{divv(get(e->slot(0,1),lit106),first(call(get(e->get("math"),lit219),Args{e->slot(0,8),V(0.001)}))),V(0.0),V(2.0)}));e->slot(0,10)=std::move(t238);}
{V t239=first(call(e->slot(1,8),Args{divv(get(e->slot(0,1),lit107),first(call(get(e->get("math"),lit219),Args{e->slot(0,9),V(0.001)}))),V(0.0),V(2.0)}));e->slot(0,11)=std::move(t239);}
{V t240=first(call(e->slot(1,11),Args{get(e->slot(0,3),lit20),get(e->slot(0,3),lit21),get(e->slot(0,1),lit102)}));e->slot(0,12)=std::move(t240);}
{V t241=first(call(e->slot(1,8),Args{sub(V(1.0),first(call(get(e->get("math"),lit264),Args{get(e->slot(0,1),lit110),get(e->slot(0,1),lit112),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,13)=std::move(t241);}
{V t242=first(call(e->slot(1,8),Args{sub(V(1.0),get(e->slot(0,1),lit117)),V(0.0),V(1.0)}));e->slot(0,14)=std::move(t242);}
{V t243=first(call(e->slot(1,8),Args{sub(V(1.0),first(call(get(e->get("math"),lit264),Args{get(e->slot(0,1),lit134),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,15)=std::move(t243);}
{V t244=first(call(e->slot(1,8),Args{sub(V(1.0),first(call(get(e->get("math"),lit264),Args{get(e->slot(0,1),lit135),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,16)=std::move(t244);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit158)};V t245=e->slot(0,12);refs[0].put(std::move(t245));}
{V t246=first(call(e->slot(1,26),Args{get(e->slot(0,1),lit102)}));e->slot(0,17)=std::move(t246);}
{V t247=([&](){V t248=([&](){V t249=gt(e->slot(0,17),get(e->slot(0,1),lit149));return truth(t249)?get(e->slot(0,3),lit62):t249;})();return !truth(t248)?get(e->slot(0,3),lit63):t248;})();e->slot(0,18)=std::move(t247);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit149)};V t250=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit149),e->slot(0,17),e->slot(0,18),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit25)}));refs[0].put(std::move(t250));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit150)};V t251=e->slot(0,17);refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit151)};V t252=first(call(e->slot(1,8),Args{divv(get(e->slot(0,1),lit149),first(call(get(e->get("math"),lit219),Args{get(e->slot(0,3),lit24),V(0.001)}))),V(0.0),V(1.5)}));refs[0].put(std::move(t252));}
{V t253=first(call(e->slot(1,8),Args{divv(first(call(get(e->get("math"),lit218),Args{get(e->slot(0,1),lit105)})),first(call(get(e->get("math"),lit219),Args{mul(get(e->slot(0,3),lit18),V(18.0)),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,19)=std::move(t253);}
{V t254=first(call(e->slot(1,8),Args{add(add(add(mul(get(e->slot(0,1),lit139),V(0.28)),mul(get(e->slot(0,1),lit138),V(0.45))),mul(get(e->slot(0,1),lit136),V(0.18))),mul(get(e->slot(0,1),lit143),V(0.26))),V(0.0),V(1.2)}));e->slot(0,20)=std::move(t254);}
{V t255=first(call(e->slot(1,8),Args{add(add(add(mul(e->slot(0,10),get(e->slot(0,3),lit27)),mul(first(call(get(e->get("math"),lit218),Args{get(e->slot(0,1),lit130)})),V(0.75))),mul(get(e->slot(0,1),lit140),V(0.1))),mul(get(e->slot(0,1),lit137),V(0.05))),V(0.0),get(e->slot(0,3),lit92)}));e->slot(0,21)=std::move(t255);}
{V t256=first(call(e->slot(1,8),Args{add(add(add(mul(e->slot(0,11),get(e->slot(0,3),lit28)),mul(get(e->slot(0,1),lit146),V(0.08))),mul(get(e->slot(0,1),lit145),V(0.06))),mul(get(e->slot(0,1),lit133),V(0.06))),V(0.0),get(e->slot(0,3),lit92)}));e->slot(0,22)=std::move(t256);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit165)};V t257=first(call(e->slot(1,8),Args{mul(first(call(get(e->get("math"),lit263),Args{add(mul(e->slot(0,21),e->slot(0,21)),mul(e->slot(0,22),e->slot(0,22)))})),V(0.70710678)),V(0.0),V(1.0)}));refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit147)};V t258=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit147),e->slot(0,21),get(e->slot(0,3),lit56),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit92)}));refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit148)};V t259=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit148),e->slot(0,22),get(e->slot(0,3),lit57),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit92)}));refs[0].put(std::move(t259));}
{V t260=add(add(add(add(add(add(add(add(add(get(e->slot(0,1),lit147),mul(e->slot(0,13),get(e->slot(0,3),lit42))),mul(get(e->slot(0,1),lit116),get(e->slot(0,3),lit43))),mul(get(e->slot(0,1),lit128),get(e->slot(0,3),lit45))),mul(get(e->slot(0,1),lit129),V(0.1))),mul(first(call(get(e->get("math"),lit218),Args{get(e->slot(0,1),lit130)})),V(0.6))),mul(first(call(get(e->get("math"),lit218),Args{get(e->slot(0,1),lit131)})),V(0.32))),mul(get(e->slot(0,1),lit140),get(e->slot(0,3),lit50))),mul(first(call(get(e->get("math"),lit219),Args{get(e->slot(0,1),lit132),get(e->slot(0,1),lit141)})),get(e->slot(0,3),lit51))),mul(get(e->slot(0,1),lit137),get(e->slot(0,3),lit52)));e->slot(0,23)=std::move(t260);}
{V t261=add(add(add(add(add(add(add(add(add(get(e->slot(0,1),lit148),mul(e->slot(0,12),get(e->slot(0,3),lit40))),mul(get(e->slot(0,1),lit151),V(0.18))),mul(e->slot(0,19),get(e->slot(0,3),lit41))),mul(e->slot(0,13),V(0.22))),mul(e->slot(0,14),V(0.2))),mul(get(e->slot(0,1),lit145),get(e->slot(0,3),lit46))),mul(get(e->slot(0,1),lit146),V(0.1))),mul(e->slot(0,20),get(e->slot(0,3),lit47))),mul(e->slot(0,16),V(0.1)));e->slot(0,24)=std::move(t261);}
{V t262=first(call(get(e->get("math"),lit219),Args{sub(add(e->slot(0,23),e->slot(0,24)),add(get(e->slot(0,1),lit152),get(e->slot(0,1),lit153))),V(0.0)}));e->slot(0,25)=std::move(t262);}
{V t263=first(call(get(e->get("math"),lit219),Args{sub(add(get(e->slot(0,1),lit152),get(e->slot(0,1),lit153)),add(e->slot(0,23),e->slot(0,24))),V(0.0)}));e->slot(0,26)=std::move(t263);}
{V t264=first(call(e->slot(1,8),Args{add(add(add(add(mul(e->slot(0,25),get(e->slot(0,3),lit81)),mul(e->slot(0,26),get(e->slot(0,3),lit82))),mul(e->slot(0,19),V(0.28))),mul(get(e->slot(0,1),lit123),V(0.2))),mul(get(e->slot(0,1),lit139),get(e->slot(0,3),lit48))),V(0.0),get(e->slot(0,3),lit96)}));e->slot(0,27)=std::move(t264);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit159)};V t265=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit159),e->slot(0,27),get(e->slot(0,3),lit83),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit96)}));refs[0].put(std::move(t265));}
{V t266=first(call(e->slot(1,8),Args{first(call(get(e->get("math"),lit219),joined(Args{first(call(get(e->get("math"),lit218),Args{sub(e->slot(0,23),get(e->slot(0,1),lit152))}))},call(get(e->get("math"),lit218),Args{sub(e->slot(0,24),get(e->slot(0,1),lit153))})))),V(0.0),V(1.0)}));e->slot(0,28)=std::move(t266);}
{V t267=first(call(e->slot(1,8),Args{first(call(get(e->get("math"),lit219),Args{e->slot(0,23),e->slot(0,24)})),V(0.0),V(1.0)}));e->slot(0,29)=std::move(t267);}
{V t268=first(call(e->slot(1,8),Args{first(call(get(e->get("math"),lit219),Args{get(e->slot(0,1),lit124),get(e->slot(0,1),lit143),get(e->slot(0,1),lit138)})),V(0.0),V(1.0)}));e->slot(0,30)=std::move(t268);}
{V t269=first(call(e->slot(1,8),Args{divv(get(e->slot(0,1),lit113),V(1.5)),V(0.0),V(1.0)}));e->slot(0,31)=std::move(t269);}
{V t270=first(call(e->slot(1,8),Args{divv(get(e->slot(0,1),lit151),V(1.5)),V(0.0),V(1.0)}));e->slot(0,32)=std::move(t270);}
{V t271=add(add(add(add(add(add(add(mul(get(e->slot(0,1),lit165),get(e->slot(0,3),lit68)),mul(e->slot(0,29),get(e->slot(0,3),lit69))),mul(e->slot(0,28),get(e->slot(0,3),lit70))),mul(get(e->slot(0,1),lit159),get(e->slot(0,3),lit71))),mul(e->slot(0,30),get(e->slot(0,3),lit72))),mul(e->slot(0,31),get(e->slot(0,3),lit73))),mul(e->slot(0,32),get(e->slot(0,3),lit74))),mul(e->slot(0,15),get(e->slot(0,3),lit75)));e->slot(0,33)=std::move(t271);}
{V t272=first(call(e->slot(1,8),joined(Args{e->slot(0,33),V(0.0)},call(get(e->get("math"),lit264),Args{get(e->slot(0,3),lit67),get(e->slot(0,3),lit93)}))));e->slot(0,34)=std::move(t272);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit171)};V t273=e->slot(0,33);refs[0].put(std::move(t273));}
{V t274=add(add(add(add(add(add(add(mul(get(e->slot(0,1),lit116),V(0.24)),mul(get(e->slot(0,1),lit128),V(0.2))),mul(e->slot(0,13),V(0.34))),mul(get(e->slot(0,1),lit159),V(0.2))),mul(get(e->slot(0,1),lit133),V(0.14))),mul(first(call(get(e->get("math"),lit219),Args{get(e->slot(0,1),lit141),get(e->slot(0,1),lit132)})),get(e->slot(0,3),lit49))),mul(first(call(get(e->get("math"),lit219),Args{V(0.0),sub(e->slot(0,34),get(e->slot(0,1),lit154))})),V(0.24))),mul(e->slot(0,28),V(0.28)));e->slot(0,35)=std::move(t274);}
{V t275=add(add(add(add(mul(first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,1),lit154),e->slot(0,34)),V(0.0)})),V(0.82)),mul(first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,1),lit152),e->slot(0,23)),V(0.0)})),V(0.38))),mul(first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,1),lit153),e->slot(0,24)),V(0.0)})),V(0.34))),mul(divv(first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,1),lit149),e->slot(0,17)),V(0.0)})),first(call(get(e->get("math"),lit219),Args{get(e->slot(0,3),lit24),V(0.001)}))),V(0.16))),mul(first(call(get(e->get("math"),lit219),Args{V(0.0),sub(get(e->slot(0,1),lit110),get(e->slot(0,1),lit111))})),V(0.12)));e->slot(0,36)=std::move(t275);}
{std::array<Ref,1> refs{Ref(e,0,23)};V t276=first(call(e->slot(1,8),Args{e->slot(0,23),V(0.0),get(e->slot(0,3),lit92)}));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e,0,24)};V t277=first(call(e->slot(1,8),Args{e->slot(0,24),V(0.0),get(e->slot(0,3),lit92)}));refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(e,0,34)};V t278=first(call(e->slot(1,8),Args{e->slot(0,34),V(0.0),get(e->slot(0,3),lit93)}));refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e,0,35)};V t279=first(call(e->slot(1,8),Args{e->slot(0,35),V(0.0),get(e->slot(0,3),lit94)}));refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e,0,36)};V t280=first(call(e->slot(1,8),Args{e->slot(0,36),V(0.0),get(e->slot(0,3),lit95)}));refs[0].put(std::move(t280));}
{V t281=([&](){V t282=([&](){V t283=gt(e->slot(0,23),get(e->slot(0,1),lit152));return truth(t283)?e->slot(0,5):t283;})();return !truth(t282)?e->slot(0,6):t282;})();e->slot(0,37)=std::move(t281);}
{V t284=([&](){V t285=([&](){V t286=gt(e->slot(0,24),get(e->slot(0,1),lit153));return truth(t286)?e->slot(0,5):t286;})();return !truth(t285)?e->slot(0,6):t285;})();e->slot(0,38)=std::move(t284);}
{V t287=([&](){V t288=([&](){V t289=gt(e->slot(0,34),get(e->slot(0,1),lit154));return truth(t289)?e->slot(0,7):t289;})();return !truth(t288)?get(e->slot(0,3),lit66):t288;})();e->slot(0,39)=std::move(t287);}
{V t290=get(e->slot(0,1),lit154);e->slot(0,40)=std::move(t290);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit152)};V t291=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit152),e->slot(0,23),e->slot(0,37),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit92)}));refs[0].put(std::move(t291));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit153)};V t292=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit153),e->slot(0,24),e->slot(0,38),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit92)}));refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit154)};V t293=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit154),e->slot(0,34),e->slot(0,39),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit93)}));refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit169)};V t294=get(e->slot(0,1),lit154);refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit172)};V t295=first(call(e->slot(1,8),Args{sub(get(e->slot(0,3),lit93),get(e->slot(0,1),lit154)),V(0.0),get(e->slot(0,3),lit93)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit173)};V t296=ge(get(e->slot(0,1),lit154),sub(get(e->slot(0,3),lit67),V(0.005)));refs[0].put(std::move(t296));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit168)};V t297=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit168),e->slot(0,28),get(e->slot(0,3),lit76),e->slot(0,2)})),V(0.0),V(1.0)}));refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit170)};V t298=first(call(e->slot(1,8),Args{divv(first(call(get(e->get("math"),lit219),Args{sub(e->slot(0,40),get(e->slot(0,1),lit154)),V(0.0)})),first(call(get(e->get("math"),lit219),Args{e->slot(0,2),get(e->slot(0,3),lit97)}))),V(0.0),V(8.0)}));refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit155)};V t299=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit155),e->slot(0,35),get(e->slot(0,3),lit76),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit94)}));refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit156)};V t300=first(call(e->slot(1,8),Args{first(call(e->slot(1,10),Args{get(e->slot(0,1),lit156),e->slot(0,36),get(e->slot(0,3),lit77),e->slot(0,2)})),V(0.0),get(e->slot(0,3),lit95)}));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit157)};V t301=first(call(e->slot(1,8),Args{divv(add(add(add(get(e->slot(0,1),lit152),get(e->slot(0,1),lit153)),get(e->slot(0,1),lit154)),mul(get(e->slot(0,1),lit151),V(0.55))),V(3.55)),V(0.0),V(1.0)}));refs[0].put(std::move(t301));}
{V t302=first(call(e->slot(1,8),Args{divv(sub(get(e->slot(0,3),lit29),get(e->slot(0,3),lit30)),first(call(get(e->get("math"),lit219),Args{get(e->slot(0,3),lit29),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,41)=std::move(t302);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit160)};V t303=first(call(e->slot(1,8),Args{sub(sub(sub(sub(sub(sub(sub(V(1.0),mul(get(e->slot(0,1),lit157),V(0.26))),mul(e->slot(0,13),V(0.42))),mul(get(e->slot(0,1),lit164),V(0.15))),mul(get(e->slot(0,1),lit132),V(0.1))),mul(e->slot(0,15),V(0.12))),mul(e->slot(0,16),V(0.1))),mul(mul(e->slot(0,41),first(call(get(e->get("math"),lit219),Args{sub(get(e->slot(0,1),lit113),V(1.0)),V(0.0)}))),V(0.2))),V(0.0),V(1.0)}));refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t304=first(call(e->slot(1,8),Args{mul(mul(get(e->slot(0,1),lit160),sub(V(1.0),mul(get(e->slot(0,1),lit155),V(0.18)))),sub(V(1.0),mul(get(e->slot(0,1),lit140),V(0.08)))),V(0.0),V(1.0)}));refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit162)};V t305=first(call(e->slot(1,8),Args{add(add(add(mul(get(e->slot(0,1),lit156),V(0.65)),mul(get(e->slot(0,1),lit159),V(0.22))),mul(get(e->slot(0,1),lit164),V(0.12))),mul(get(e->slot(0,1),lit121),V(0.08))),V(0.0),V(1.0)}));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit174)};V t306=e->slot(0,23);refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit175)};V t307=e->slot(0,24);refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit176)};V t308=e->slot(0,34);refs[0].put(std::move(t308));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit177)};V t309=e->slot(0,35);refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit178)};V t310=e->slot(0,36);refs[0].put(std::move(t310));}
call(e->slot(1,37),Args{e->slot(0,1),e->slot(0,2)});
{std::array<Ref,2> refs{Ref(e->slot(0,1),lit179),Ref(e->slot(0,1),lit180)};Args t311=call(e->slot(1,36),Args{e->slot(0,1)});refs[0].put(arg(t311,0));refs[1].put(arg(t311,1));}
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t312=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,3)=std::move(t312);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit100)};V t313=V(false);refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit104)};V t314=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit104),get(get(e->slot(1,1),lit17),lit18),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit102)};V t315=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit102),get(get(e->slot(1,1),lit17),lit18),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit103)};V t316=get(e->slot(0,3),lit102);refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t317=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit105),V(0.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit106)};V t318=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit106),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t318));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit107)};V t319=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit107),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t319));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit108)};V t320=V(0.0);refs[0].put(std::move(t320));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit109)};V t321=V(0.0);refs[0].put(std::move(t321));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit110)};V t322=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit110),V(1.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit111)};V t323=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit111),V(1.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t323));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit112)};V t324=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit112),V(1.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t324));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit113)};V t325=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit113),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t325));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit114)};V t326=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit114),V(0.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t326));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit115)};V t327=V(0.0);refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit147)};V t328=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit147),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit148)};V t329=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit148),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t329));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit149)};V t330=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit149),V(0.0),get(get(e->slot(1,1),lit17),lit63),e->slot(0,1)}));refs[0].put(std::move(t330));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit150)};V t331=V(0.0);refs[0].put(std::move(t331));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit151)};V t332=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit151),V(0.0),get(get(e->slot(1,1),lit17),lit63),e->slot(0,1)}));refs[0].put(std::move(t332));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit152)};V t333=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit152),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t333));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit153)};V t334=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit153),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit154)};V t335=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit154),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit155)};V t336=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit155),V(0.0),get(get(e->slot(1,1),lit17),lit76),e->slot(0,1)}));refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit156)};V t337=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit156),V(0.0),get(get(e->slot(1,1),lit17),lit77),e->slot(0,1)}));refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit159)};V t338=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit159),V(0.0),get(get(e->slot(1,1),lit17),lit83),e->slot(0,1)}));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit157)};V t339=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit157),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit158)};V t340=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit158),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit160)};V t341=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit160),V(1.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit161)};V t342=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit161),V(1.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit162)};V t343=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit162),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t343));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit163)};V t344=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit163),V(0.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit164)};V t345=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit164),V(0.0),V(1.2),e->slot(0,1)}));refs[0].put(std::move(t345));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit165)};V t346=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit165),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit168)};V t347=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit168),V(0.0),get(get(e->slot(1,1),lit17),lit79),e->slot(0,1)}));refs[0].put(std::move(t347));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit169)};V t348=get(e->slot(0,3),lit154);refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit170)};V t349=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit170),V(0.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit171)};V t350=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit171),V(0.0),get(get(e->slot(1,1),lit17),lit80),e->slot(0,1)}));refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit172)};V t351=first(call(e->slot(1,8),Args{sub(get(get(e->slot(1,1),lit17),lit93),get(e->slot(0,3),lit154)),V(0.0),get(get(e->slot(1,1),lit17),lit93)}));refs[0].put(std::move(t351));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit173)};V t352=V(false);refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit179)};V t353=([&](){V t354=e->slot(0,2);return !truth(t354)?get(e->slot(1,3),lit7):t354;})();refs[0].put(std::move(t353));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit180)};V t355=([&](){V t356=([&](){V t357=eq(e->slot(0,2),get(e->slot(1,3),lit15));return truth(t357)?lit358:t357;})();return !truth(t356)?lit359:t356;})();refs[0].put(std::move(t355));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,12),Args{concat(lit360,e->slot(0,0)),([&](){V t358=get(e->slot(0,1),lit152);return !truth(t358)?V(0.0):t358;})()});
call(e->slot(1,12),Args{concat(lit361,e->slot(0,0)),([&](){V t359=get(e->slot(0,1),lit153);return !truth(t359)?V(0.0):t359;})()});
call(e->slot(1,12),Args{concat(lit362,e->slot(0,0)),([&](){V t360=get(e->slot(0,1),lit154);return !truth(t360)?V(0.0):t360;})()});
call(e->slot(1,12),Args{concat(lit363,e->slot(0,0)),([&](){V t361=get(e->slot(0,1),lit155);return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,12),Args{concat(lit364,e->slot(0,0)),([&](){V t362=get(e->slot(0,1),lit156);return !truth(t362)?V(0.0):t362;})()});
call(e->slot(1,12),Args{concat(lit365,e->slot(0,0)),([&](){V t363=get(e->slot(0,1),lit157);return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,12),Args{concat(lit366,e->slot(0,0)),([&](){V t364=get(e->slot(0,1),lit179);return !truth(t364)?V(0.0):t364;})()});
call(e->slot(1,12),Args{concat(lit367,e->slot(0,0)),([&](){V t365=get(e->slot(0,1),lit180);return !truth(t365)?lit368:t365;})()});
call(e->slot(1,12),Args{concat(lit369,e->slot(0,0)),([&](){V t366=get(e->slot(0,1),lit152);return !truth(t366)?V(0.0):t366;})()});
call(e->slot(1,12),Args{concat(lit370,e->slot(0,0)),([&](){V t367=get(e->slot(0,1),lit153);return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,12),Args{concat(lit371,e->slot(0,0)),([&](){V t368=get(e->slot(0,1),lit154);return !truth(t368)?V(0.0):t368;})()});
call(e->slot(1,12),Args{concat(lit372,e->slot(0,0)),([&](){V t369=get(e->slot(0,1),lit155);return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,12),Args{concat(lit373,e->slot(0,0)),([&](){V t370=get(e->slot(0,1),lit156);return !truth(t370)?V(0.0):t370;})()});
call(e->slot(1,12),Args{concat(lit374,e->slot(0,0)),([&](){V t371=get(e->slot(0,1),lit147);return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,12),Args{concat(lit375,e->slot(0,0)),([&](){V t372=get(e->slot(0,1),lit148);return !truth(t372)?V(0.0):t372;})()});
call(e->slot(1,12),Args{concat(lit376,e->slot(0,0)),([&](){V t373=get(e->slot(0,1),lit149);return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,12),Args{concat(lit377,e->slot(0,0)),([&](){V t374=get(e->slot(0,1),lit151);return !truth(t374)?V(0.0):t374;})()});
call(e->slot(1,12),Args{concat(lit378,e->slot(0,0)),([&](){V t375=get(e->slot(0,1),lit159);return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,12),Args{concat(lit379,e->slot(0,0)),([&](){V t376=get(e->slot(0,1),lit160);return !truth(t376)?V(1.0):t376;})()});
call(e->slot(1,12),Args{concat(lit255,e->slot(0,0)),([&](){V t377=get(e->slot(0,1),lit161);return !truth(t377)?V(1.0):t377;})()});
call(e->slot(1,12),Args{concat(lit380,e->slot(0,0)),([&](){V t378=get(e->slot(0,1),lit162);return !truth(t378)?V(0.0):t378;})()});
call(e->slot(1,12),Args{concat(lit285,e->slot(0,0)),([&](){V t379=get(e->slot(0,1),lit163);return !truth(t379)?V(0.0):t379;})()});
call(e->slot(1,12),Args{concat(lit284,e->slot(0,0)),([&](){V t380=get(e->slot(0,1),lit164);return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,12),Args{concat(lit381,e->slot(0,0)),([&](){V t381=get(e->slot(0,1),lit158);return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,12),Args{concat(lit382,e->slot(0,0)),([&](){V t382=get(e->slot(0,1),lit165);return !truth(t382)?V(0.0):t382;})()});
call(e->slot(1,12),Args{concat(lit383,e->slot(0,0)),([&](){V t383=get(e->slot(0,1),lit166);return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,12),Args{concat(lit384,e->slot(0,0)),([&](){V t384=get(e->slot(0,1),lit167);return !truth(t384)?V(0.0):t384;})()});
call(e->slot(1,12),Args{concat(lit385,e->slot(0,0)),([&](){V t385=get(e->slot(0,1),lit168);return !truth(t385)?V(0.0):t385;})()});
call(e->slot(1,12),Args{concat(lit386,e->slot(0,0)),([&](){V t386=get(e->slot(0,1),lit169);return !truth(t386)?V(0.0):t386;})()});
call(e->slot(1,12),Args{concat(lit387,e->slot(0,0)),([&](){V t387=get(e->slot(0,1),lit170);return !truth(t387)?V(0.0):t387;})()});
call(e->slot(1,12),Args{concat(lit388,e->slot(0,0)),([&](){V t388=get(e->slot(0,1),lit176);return !truth(t388)?V(0.0):t388;})()});
call(e->slot(1,12),Args{concat(lit389,e->slot(0,0)),([&](){V t389=get(e->slot(0,1),lit171);return !truth(t389)?V(0.0):t389;})()});
call(e->slot(1,12),Args{concat(lit390,e->slot(0,0)),([&](){V t390=get(e->slot(0,1),lit172);return !truth(t390)?V(0.0):t390;})()});
call(e->slot(1,12),Args{concat(lit391,e->slot(0,0)),([&](){V t391=([&](){V t392=get(e->slot(0,1),lit173);return truth(t392)?V(1.0):t392;})();return !truth(t391)?V(0.0):t391;})()});
call(e->slot(1,12),Args{concat(lit392,e->slot(0,0)),([&](){V t393=get(e->slot(0,1),lit152);return !truth(t393)?V(0.0):t393;})()});
call(e->slot(1,12),Args{concat(lit393,e->slot(0,0)),([&](){V t394=get(e->slot(0,1),lit153);return !truth(t394)?V(0.0):t394;})()});
call(e->slot(1,12),Args{concat(lit394,e->slot(0,0)),([&](){V t395=get(e->slot(0,1),lit154);return !truth(t395)?V(0.0):t395;})()});
call(e->slot(1,12),Args{concat(lit395,e->slot(0,0)),([&](){V t396=get(e->slot(0,1),lit155);return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,12),Args{concat(lit396,e->slot(0,0)),([&](){V t397=get(e->slot(0,1),lit156);return !truth(t397)?V(0.0):t397;})()});
call(e->slot(1,12),Args{concat(lit397,e->slot(0,0)),([&](){V t398=get(e->slot(0,1),lit160);return !truth(t398)?V(1.0):t398;})()});
call(e->slot(1,12),Args{concat(lit398,e->slot(0,0)),([&](){V t399=get(e->slot(0,1),lit161);return !truth(t399)?V(1.0):t399;})()});
if(truth(V(!truth(get(e->slot(1,6),lit213))))){return Args{};
}
call(e->slot(1,12),Args{concat(lit399,e->slot(0,0)),([&](){V t400=get(e->slot(0,1),lit102);return !truth(t400)?V(0.0):t400;})()});
call(e->slot(1,12),Args{concat(lit400,e->slot(0,0)),([&](){V t401=get(e->slot(0,1),lit105);return !truth(t401)?V(0.0):t401;})()});
call(e->slot(1,12),Args{concat(lit238,e->slot(0,0)),([&](){V t402=get(e->slot(0,1),lit106);return !truth(t402)?V(0.0):t402;})()});
call(e->slot(1,12),Args{concat(lit244,e->slot(0,0)),([&](){V t403=get(e->slot(0,1),lit107);return !truth(t403)?V(0.0):t403;})()});
call(e->slot(1,12),Args{concat(lit401,e->slot(0,0)),([&](){V t404=get(e->slot(0,1),lit110);return !truth(t404)?V(1.0):t404;})()});
call(e->slot(1,12),Args{concat(lit402,e->slot(0,0)),([&](){V t405=get(e->slot(0,1),lit113);return !truth(t405)?V(0.0):t405;})()});
call(e->slot(1,12),Args{concat(lit403,e->slot(0,0)),([&](){V t406=get(e->slot(0,1),lit116);return !truth(t406)?V(0.0):t406;})()});
call(e->slot(1,12),Args{concat(lit404,e->slot(0,0)),([&](){V t407=get(e->slot(0,1),lit123);return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,12),Args{concat(lit405,e->slot(0,0)),([&](){V t408=get(e->slot(0,1),lit128);return !truth(t408)?V(0.0):t408;})()});
call(e->slot(1,12),Args{concat(lit406,e->slot(0,0)),([&](){V t409=get(e->slot(0,1),lit158);return !truth(t409)?V(0.0):t409;})()});
call(e->slot(1,12),Args{concat(lit407,e->slot(0,0)),([&](){V t410=get(e->slot(0,1),lit160);return !truth(t410)?V(1.0):t410;})()});
call(e->slot(1,12),Args{concat(lit408,e->slot(0,0)),([&](){V t411=get(e->slot(0,1),lit112);return !truth(t411)?V(1.0):t411;})()});
call(e->slot(1,12),Args{concat(lit409,e->slot(0,0)),([&](){V t412=get(e->slot(0,1),lit138);return !truth(t412)?V(0.0):t412;})()});
call(e->slot(1,12),Args{concat(lit410,e->slot(0,0)),([&](){V t413=get(e->slot(0,1),lit132);return !truth(t413)?V(0.0):t413;})()});
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,12),Args{lit411,([&](){V t414=get(e->slot(1,6),lit181);return !truth(t414)?lit368:t414;})()});
call(e->slot(1,12),Args{lit412,([&](){V t415=get(e->slot(1,6),lit182);return !truth(t415)?V(0.0):t415;})()});
call(e->slot(1,12),Args{lit413,([&](){V t416=([&](){V t417=get(e->slot(1,6),lit183);return truth(t417)?V(1.0):t417;})();return !truth(t416)?V(0.0):t416;})()});
call(e->slot(1,12),Args{lit414,([&](){V t418=get(e->slot(1,6),lit184);return !truth(t418)?V(0.0):t418;})()});
call(e->slot(1,12),Args{lit415,([&](){V t419=get(e->slot(1,6),lit185);return !truth(t419)?V(0.0):t419;})()});
call(e->slot(1,12),Args{lit416,([&](){V t420=get(e->slot(1,6),lit186);return !truth(t420)?V(0.0):t420;})()});
call(e->slot(1,12),Args{lit417,([&](){V t421=get(e->slot(1,6),lit187);return !truth(t421)?V(0.0):t421;})()});
call(e->slot(1,12),Args{lit418,([&](){V t422=get(e->slot(1,6),lit188);return !truth(t422)?V(0.0):t422;})()});
call(e->slot(1,12),Args{lit419,([&](){V t423=get(e->slot(1,6),lit189);return !truth(t423)?V(0.0):t423;})()});
call(e->slot(1,12),Args{lit420,([&](){V t424=get(e->slot(1,6),lit190);return !truth(t424)?V(1.0):t424;})()});
call(e->slot(1,12),Args{lit421,([&](){V t425=get(e->slot(1,6),lit191);return !truth(t425)?V(0.0):t425;})()});
call(e->slot(1,12),Args{lit422,([&](){V t426=get(e->slot(1,6),lit192);return !truth(t426)?V(0.0):t426;})()});
call(e->slot(1,12),Args{lit423,([&](){V t427=get(e->slot(1,6),lit193);return !truth(t427)?V(1.0):t427;})()});
call(e->slot(1,12),Args{lit424,([&](){V t428=get(e->slot(1,6),lit194);return !truth(t428)?V(0.0):t428;})()});
call(e->slot(1,12),Args{lit425,([&](){V t429=get(e->slot(1,6),lit195);return !truth(t429)?V(0.0):t429;})()});
call(e->slot(1,12),Args{lit426,([&](){V t430=get(e->slot(1,6),lit196);return !truth(t430)?V(0.0):t430;})()});
call(e->slot(1,12),Args{lit427,([&](){V t431=get(e->slot(1,6),lit197);return !truth(t431)?V(0.0):t431;})()});
call(e->slot(1,12),Args{lit428,([&](){V t432=get(e->slot(1,6),lit198);return !truth(t432)?V(0.0):t432;})()});
call(e->slot(1,12),Args{lit429,([&](){V t433=get(e->slot(1,6),lit199);return !truth(t433)?V(0.0):t433;})()});
call(e->slot(1,12),Args{lit430,([&](){V t434=get(e->slot(1,6),lit200);return !truth(t434)?V(0.0):t434;})()});
call(e->slot(1,12),Args{lit431,([&](){V t435=get(e->slot(1,6),lit201);return !truth(t435)?V(0.0):t435;})()});
call(e->slot(1,12),Args{lit432,([&](){V t436=get(e->slot(1,6),lit189);return !truth(t436)?V(0.0):t436;})()});
call(e->slot(1,12),Args{lit433,([&](){V t437=get(e->slot(1,6),lit190);return !truth(t437)?V(1.0):t437;})()});
call(e->slot(1,12),Args{lit434,([&](){V t438=get(e->slot(1,6),lit199);return !truth(t438)?V(0.0):t438;})()});
if(truth(V(!truth(get(e->slot(1,6),lit213))))){return Args{};
}
call(e->slot(1,12),Args{lit435,([&](){V t439=([&](){V t440=get(e->slot(1,6),lit202);return truth(t440)?V(1.0):t440;})();return !truth(t439)?V(0.0):t439;})()});
call(e->slot(1,12),Args{lit436,([&](){V t441=([&](){V t442=get(e->slot(1,6),lit203);return truth(t442)?V(1.0):t442;})();return !truth(t441)?V(0.0):t441;})()});
call(e->slot(1,12),Args{lit437,([&](){V t443=([&](){V t444=get(e->slot(1,6),lit204);return truth(t444)?V(1.0):t444;})();return !truth(t443)?V(0.0):t443;})()});
call(e->slot(1,12),Args{lit438,([&](){V t445=([&](){V t446=get(e->slot(1,6),lit205);return truth(t446)?V(1.0):t446;})();return !truth(t445)?V(0.0):t445;})()});
call(e->slot(1,12),Args{lit439,([&](){V t447=([&](){V t448=get(e->slot(1,6),lit206);return truth(t448)?V(1.0):t448;})();return !truth(t447)?V(0.0):t447;})()});
call(e->slot(1,12),Args{lit440,([&](){V t449=([&](){V t450=get(e->slot(1,6),lit207);return truth(t450)?V(1.0):t450;})();return !truth(t449)?V(0.0):t449;})()});
call(e->slot(1,12),Args{lit441,([&](){V t451=([&](){V t452=get(e->slot(1,6),lit208);return truth(t452)?V(1.0):t452;})();return !truth(t451)?V(0.0):t451;})()});
call(e->slot(1,12),Args{lit442,([&](){V t453=([&](){V t454=get(e->slot(1,6),lit209);return truth(t454)?V(1.0):t454;})();return !truth(t453)?V(0.0):t453;})()});
call(e->slot(1,12),Args{lit443,([&](){V t455=([&](){V t456=get(e->slot(1,6),lit210);return truth(t456)?V(1.0):t456;})();return !truth(t455)?V(0.0):t455;})()});
call(e->slot(1,12),Args{lit444,([&](){V t457=([&](){V t458=get(e->slot(1,6),lit211);return truth(t458)?V(1.0):t458;})();return !truth(t457)?V(0.0):t457;})()});
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t459=num(V(0.0)),t460=num(V(3.0)),t461=num(V(1.0));for(double t462=t459;(t461>0?t462<=t460:t462>=t460);t462+=t461){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t462);call(e->slot(2,40),Args{e->slot(0,0),get(get(e->slot(2,6),lit214),e->slot(0,0))});
}}
call(e->slot(1,41),Args{});
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t463=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,3)=std::move(t463);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit100)};V t464=ne(e->slot(0,1),V());refs[0].put(std::move(t464));}
{Args t465=call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,1)});e->slot(0,4)=arg(t465,0);e->slot(0,5)=arg(t465,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit108)};V t466=e->slot(0,4);refs[0].put(std::move(t466));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit109)};V t467=e->slot(0,5);refs[0].put(std::move(t467));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit106)};V t468=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit106),e->slot(0,4),get(get(e->slot(1,1),lit17),lit55),e->slot(0,2)}));refs[0].put(std::move(t468));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit107)};V t469=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit107),e->slot(0,5),get(get(e->slot(1,1),lit17),lit55),e->slot(0,2)}));refs[0].put(std::move(t469));}
{V t470=first(call(get(e->get("math"),lit218),call(e->slot(1,21),Args{e->slot(0,1),e->slot(0,0)})));e->slot(0,6)=std::move(t470);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit104)};V t471=e->slot(0,6);refs[0].put(std::move(t471));}
if(truth(le(([&](){V t472=get(e->slot(0,3),lit102);return !truth(t472)?V(0.0):t472;})(),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(0,3),lit103)};V t473=e->slot(0,6);refs[0].put(std::move(t473));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit102)};V t474=e->slot(0,6);refs[0].put(std::move(t474));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t475=V(0.0);refs[0].put(std::move(t475));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,3),lit103)};V t476=get(e->slot(0,3),lit102);refs[0].put(std::move(t476));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit102)};V t477=first(call(e->slot(1,10),Args{get(e->slot(0,3),lit102),e->slot(0,6),V(0.055),e->slot(0,2)}));refs[0].put(std::move(t477));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t478=divv(sub(get(e->slot(0,3),lit102),get(e->slot(0,3),lit103)),first(call(get(e->get("math"),lit219),Args{e->slot(0,2),get(get(e->slot(1,1),lit17),lit97)})));refs[0].put(std::move(t478));}
}
call(e->slot(1,35),Args{e->slot(0,0),e->slot(0,3)});
call(e->slot(1,38),Args{e->slot(0,0),e->slot(0,3),e->slot(0,2)});
return Args{};});
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,18);auto e=&storage;{Args t479=Args{V(0.0),V(0.0),V(0.0),V(0.0)};e->slot(0,0)=arg(t479,0);e->slot(0,1)=arg(t479,1);e->slot(0,2)=arg(t479,2);e->slot(0,3)=arg(t479,3);}
{Args t480=Args{V(0.0),V(0.0),V(0.0),V(0.0)};e->slot(0,4)=arg(t480,0);e->slot(0,5)=arg(t480,1);e->slot(0,6)=arg(t480,2);e->slot(0,7)=arg(t480,3);}
{Args t481=Args{V(0.0),V(0.0)};e->slot(0,8)=arg(t481,0);e->slot(0,9)=arg(t481,1);}
{Args t482=Args{V(0.0),V(0.0),V(0.0)};e->slot(0,10)=arg(t482,0);e->slot(0,11)=arg(t482,1);e->slot(0,12)=arg(t482,2);}
{Args t483=Args{V(0.0),V(0.0)};e->slot(0,13)=arg(t483,0);e->slot(0,14)=arg(t483,1);}
{Args t484=Args{V(0.0),V(0.0),V(0.0)};e->slot(0,15)=arg(t484,0);e->slot(0,16)=arg(t484,1);e->slot(0,17)=arg(t484,2);}
{double t485=num(V(0.0)),t486=num(V(3.0)),t487=num(V(1.0));for(double t488=t485;(t487>0?t488<=t486:t488>=t486);t488+=t487){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t488);{V t489=get(get(e->slot(2,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t489);}
{std::array<Ref,1> refs{Ref(e,1,0)};V t490=add(e->slot(1,0),([&](){V t491=get(e->slot(0,1),lit152);return !truth(t491)?V(0.0):t491;})());refs[0].put(std::move(t490));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t492=add(e->slot(1,1),([&](){V t493=get(e->slot(0,1),lit153);return !truth(t493)?V(0.0):t493;})());refs[0].put(std::move(t492));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t494=add(e->slot(1,2),([&](){V t495=get(e->slot(0,1),lit154);return !truth(t495)?V(0.0):t495;})());refs[0].put(std::move(t494));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t496=add(e->slot(1,3),([&](){V t497=get(e->slot(0,1),lit155);return !truth(t497)?V(0.0):t497;})());refs[0].put(std::move(t496));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t498=add(e->slot(1,4),([&](){V t499=get(e->slot(0,1),lit156);return !truth(t499)?V(0.0):t499;})());refs[0].put(std::move(t498));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t500=add(e->slot(1,5),([&](){V t501=get(e->slot(0,1),lit157);return !truth(t501)?V(0.0):t501;})());refs[0].put(std::move(t500));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t502=add(e->slot(1,6),([&](){V t503=get(e->slot(0,1),lit160);return !truth(t503)?V(1.0):t503;})());refs[0].put(std::move(t502));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t504=add(e->slot(1,7),([&](){V t505=get(e->slot(0,1),lit159);return !truth(t505)?V(0.0):t505;})());refs[0].put(std::move(t504));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t506=add(e->slot(1,8),([&](){V t507=get(e->slot(0,1),lit151);return !truth(t507)?V(0.0):t507;})());refs[0].put(std::move(t506));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t508=add(e->slot(1,9),([&](){V t509=get(e->slot(0,1),lit161);return !truth(t509)?V(1.0):t509;})());refs[0].put(std::move(t508));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t510=add(e->slot(1,10),([&](){V t511=get(e->slot(0,1),lit165);return !truth(t511)?V(0.0):t511;})());refs[0].put(std::move(t510));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t512=add(e->slot(1,11),([&](){V t513=get(e->slot(0,1),lit166);return !truth(t513)?V(0.0):t513;})());refs[0].put(std::move(t512));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t514=add(e->slot(1,12),([&](){V t515=get(e->slot(0,1),lit167);return !truth(t515)?V(0.0):t515;})());refs[0].put(std::move(t514));}
{std::array<Ref,1> refs{Ref(e,1,13)};V t516=add(e->slot(1,13),([&](){V t517=get(e->slot(0,1),lit168);return !truth(t517)?V(0.0):t517;})());refs[0].put(std::move(t516));}
{std::array<Ref,1> refs{Ref(e,1,14)};V t518=add(e->slot(1,14),([&](){V t519=get(e->slot(0,1),lit170);return !truth(t519)?V(0.0):t519;})());refs[0].put(std::move(t518));}
{std::array<Ref,1> refs{Ref(e,1,15)};V t520=first(call(get(e->get("math"),lit219),Args{e->slot(1,15),([&](){V t521=get(e->slot(0,1),lit157);return !truth(t521)?V(0.0):t521;})()}));refs[0].put(std::move(t520));}
{std::array<Ref,1> refs{Ref(e,1,16)};V t522=first(call(get(e->get("math"),lit219),Args{e->slot(1,16),([&](){V t523=get(e->slot(0,1),lit154);return !truth(t523)?V(0.0):t523;})()}));refs[0].put(std::move(t522));}
{std::array<Ref,1> refs{Ref(e,1,17)};V t524=first(call(get(e->get("math"),lit219),Args{e->slot(1,17),([&](){V t525=get(e->slot(0,1),lit155);return !truth(t525)?V(0.0):t525;})()}));refs[0].put(std::move(t524));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit184)};V t526=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t526));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit185)};V t527=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t527));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit186)};V t528=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t528));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit187)};V t529=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t529));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit188)};V t530=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t530));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit189)};V t531=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t531));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit190)};V t532=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t532));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit191)};V t533=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t533));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit192)};V t534=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t534));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit193)};V t535=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t535));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit194)};V t536=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t536));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit195)};V t537=mul(e->slot(0,11),V(0.25));refs[0].put(std::move(t537));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit196)};V t538=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t538));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit197)};V t539=mul(e->slot(0,13),V(0.25));refs[0].put(std::move(t539));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit198)};V t540=mul(e->slot(0,14),V(0.25));refs[0].put(std::move(t540));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit199)};V t541=e->slot(0,15);refs[0].put(std::move(t541));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit200)};V t542=e->slot(0,16);refs[0].put(std::move(t542));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit201)};V t543=e->slot(0,17);refs[0].put(std::move(t543));}
return Args{};});
Ref(e->slot(0,1),lit445).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,6),lit181)};V t544=lit7;refs[0].put(std::move(t544));}
call(e->slot(1,42),Args{});
return Args{};}));
Ref(e->slot(0,1),lit446).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit182)};V t545=add(([&](){V t546=get(e->slot(1,6),lit182);return !truth(t546)?V(0.0):t546;})(),V(1.0));refs[0].put(std::move(t545));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t547=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t547));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit181)};V t548=lit447;refs[0].put(std::move(t548));}
call(e->slot(1,42),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t549=first(call(e->slot(1,8),Args{e->slot(0,0),get(get(e->slot(1,1),lit17),lit97),get(get(e->slot(1,1),lit17),lit98)}));refs[0].put(std::move(t549));}
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,24),Args{});
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit211)};V t550=V(false);refs[0].put(std::move(t550));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t551=([&](){V t552=e->slot(0,1);return !truth(t552)?first(call(e->slot(1,17),Args{})):t552;})();refs[0].put(std::move(t551));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit181)};V t553=lit448;refs[0].put(std::move(t553));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit183)};V t554=V(false);refs[0].put(std::move(t554));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit211)};V t555=V(true);refs[0].put(std::move(t555));}
{double t556=num(V(0.0)),t557=num(V(3.0)),t558=num(V(1.0));for(double t559=t556;(t558>0?t559<=t557:t559>=t557);t559+=t558){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t559);call(e->slot(2,43),Args{e->slot(0,0),V(),e->slot(1,0)});
}}
call(e->slot(1,44),Args{});
call(e->slot(1,42),Args{});
return Args{};
}
{V t560=first(call(e->slot(1,16),Args{e->slot(0,1),lit214,V()}));e->slot(0,3)=std::move(t560);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit181)};V t561=lit449;refs[0].put(std::move(t561));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit183)};V t562=V(false);refs[0].put(std::move(t562));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit211)};V t563=V(true);refs[0].put(std::move(t563));}
{double t564=num(V(0.0)),t565=num(V(3.0)),t566=num(V(1.0));for(double t567=t564;(t566>0?t567<=t565:t567>=t565);t567+=t566){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t567);call(e->slot(2,43),Args{e->slot(0,0),V(),e->slot(1,0)});
}}
call(e->slot(1,44),Args{});
call(e->slot(1,42),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit181)};V t568=lit450;refs[0].put(std::move(t568));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit183)};V t569=V(true);refs[0].put(std::move(t569));}
{double t570=num(V(0.0)),t571=num(V(3.0)),t572=num(V(1.0));for(double t573=t570;(t572>0?t573<=t571:t573>=t571);t573+=t572){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t573);{V t574=first(call(e->slot(2,18),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t574);}
if(truth(e->slot(0,1))){call(e->slot(2,43),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0)});
}else{call(e->slot(2,39),Args{e->slot(0,0),e->slot(1,0),get(e->slot(2,3),lit15)});
}
call(e->slot(2,40),Args{e->slot(0,0),get(get(e->slot(2,6),lit214),e->slot(0,0))});
}}
call(e->slot(1,44),Args{});
call(e->slot(1,41),Args{});
return Args{};}));
Ref(e->slot(0,1),lit451).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,6)};
}
return Args{get(get(e->slot(1,6),lit214),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit452).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t575=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t575);}
return Args{([&](){V t576=([&](){V t577=e->slot(0,1);return truth(t577)?get(e->slot(0,1),lit157):t577;})();return !truth(t576)?V(0.0):t576;})()};
return Args{};}));
Ref(e->slot(0,1),lit453).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t578=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t578);}
return Args{([&](){V t579=([&](){V t580=e->slot(0,1);return truth(t580)?get(e->slot(0,1),lit154):t580;})();return !truth(t579)?V(0.0):t579;})()};
return Args{};}));
Ref(e->slot(0,1),lit454).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t581=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t581);}
return Args{([&](){V t582=([&](){V t583=e->slot(0,1);return truth(t583)?get(e->slot(0,1),lit160):t583;})();return !truth(t582)?V(1.0):t582;})()};
return Args{};}));
Ref(e->slot(0,1),lit455).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t584=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t584);}
return Args{([&](){V t585=([&](){V t586=e->slot(0,1);return truth(t586)?get(e->slot(0,1),lit161):t586;})();return !truth(t585)?V(1.0):t585;})()};
return Args{};}));
Ref(e->slot(0,1),lit456).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t587=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t587);}
return Args{([&](){V t588=([&](){V t589=e->slot(0,1);return truth(t589)?get(e->slot(0,1),lit162):t589;})();return !truth(t588)?V(0.0):t588;})()};
return Args{};}));
Ref(e->slot(0,1),lit457).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t590=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t590);}
return Args{([&](){V t591=([&](){V t592=e->slot(0,1);return truth(t592)?get(e->slot(0,1),lit180):t592;})();return !truth(t591)?lit368:t591;})()};
return Args{};}));
Ref(e->slot(0,1),lit458).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t593=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t593);}
return Args{([&](){V t594=([&](){V t595=e->slot(0,1);return truth(t595)?get(e->slot(0,1),lit166):t595;})();return !truth(t594)?V(0.0):t594;})()};
return Args{};}));
Ref(e->slot(0,1),lit459).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t596=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t596);}
return Args{([&](){V t597=([&](){V t598=e->slot(0,1);return truth(t598)?get(e->slot(0,1),lit169):t598;})();return !truth(t597)?V(0.0):t597;})()};
return Args{};}));
Ref(e->slot(0,1),lit460).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t599=get(get(e->slot(1,6),lit214),e->slot(0,0));e->slot(0,1)=std::move(t599);}
return Args{([&](){V t600=([&](){V t601=e->slot(0,1);return truth(t601)?get(e->slot(0,1),lit168):t601;})();return !truth(t600)?V(0.0):t600;})()};
return Args{};}));
Ref(e->slot(0,1),lit461).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t602=([&](){V t603=get(get(e->slot(1,6),lit214),([&](){V t604=e->slot(0,0);return !truth(t604)?V(0.0):t604;})());return !truth(t603)?get(get(e->slot(1,6),lit214),V(0.0)):t603;})();e->slot(0,1)=std::move(t602);}
return call(get(e->get("string"),lit462),Args{concat(lit463,concat(lit464,concat(lit465,concat(lit466,concat(lit467,concat(lit468,concat(lit469,concat(lit470,lit471)))))))),first(call(e->get("tostring"),Args{get(e->slot(1,6),lit181)})),([&](){V t605=get(e->slot(1,6),lit182);return !truth(t605)?V(0.0):t605;})(),([&](){V t606=([&](){V t607=get(e->slot(1,6),lit183);return truth(t607)?lit472:t607;})();return !truth(t606)?lit473:t606;})(),first(call(e->get("tostring"),Args{([&](){V t608=get(e->slot(0,1),lit180);return !truth(t608)?lit368:t608;})()})),([&](){V t609=get(e->slot(0,1),lit157);return !truth(t609)?V(0.0):t609;})(),([&](){V t610=get(e->slot(0,1),lit154);return !truth(t610)?V(0.0):t610;})(),([&](){V t611=get(e->slot(0,1),lit160);return !truth(t611)?V(1.0):t611;})(),([&](){V t612=get(e->slot(0,1),lit161);return !truth(t612)?V(1.0):t612;})(),([&](){V t613=get(e->slot(0,1),lit152);return !truth(t613)?V(0.0):t613;})(),([&](){V t614=get(e->slot(0,1),lit153);return !truth(t614)?V(0.0):t614;})(),([&](){V t615=get(e->slot(0,1),lit147);return !truth(t615)?V(0.0):t615;})(),([&](){V t616=get(e->slot(0,1),lit148);return !truth(t616)?V(0.0):t616;})(),([&](){V t617=get(e->slot(0,1),lit165);return !truth(t617)?V(0.0):t617;})(),([&](){V t618=get(e->slot(0,1),lit166);return !truth(t618)?V(0.0):t618;})(),([&](){V t619=get(e->slot(0,1),lit167);return !truth(t619)?V(0.0):t619;})(),([&](){V t620=get(e->slot(0,1),lit168);return !truth(t620)?V(0.0):t620;})(),([&](){V t621=get(e->slot(0,1),lit170);return !truth(t621)?V(0.0):t621;})(),([&](){V t622=get(e->slot(0,1),lit169);return !truth(t622)?V(0.0):t622;})(),([&](){V t623=get(e->slot(0,1),lit176);return !truth(t623)?V(0.0):t623;})(),([&](){V t624=get(e->slot(0,1),lit172);return !truth(t624)?V(0.0):t624;})(),first(call(e->get("tostring"),Args{eq(get(e->slot(0,1),lit173),V(true))})),([&](){V t625=get(e->slot(0,1),lit151);return !truth(t625)?V(0.0):t625;})(),([&](){V t626=get(e->slot(0,1),lit159);return !truth(t626)?V(0.0):t626;})(),([&](){V t627=get(e->slot(0,1),lit155);return !truth(t627)?V(0.0):t627;})(),([&](){V t628=get(e->slot(0,1),lit156);return !truth(t628)?V(0.0):t628;})(),([&](){V t629=get(e->slot(0,1),lit106);return !truth(t629)?V(0.0):t629;})(),([&](){V t630=get(e->slot(0,1),lit107);return !truth(t630)?V(0.0):t630;})(),([&](){V t631=get(e->slot(0,1),lit102);return !truth(t631)?V(0.0):t631;})(),([&](){V t632=get(e->slot(0,1),lit105);return !truth(t632)?V(0.0):t632;})(),([&](){V t633=get(e->slot(0,1),lit110);return !truth(t633)?V(1.0):t633;})(),([&](){V t634=get(e->slot(0,1),lit113);return !truth(t634)?V(0.0):t634;})(),([&](){V t635=get(e->slot(0,1),lit138);return !truth(t635)?V(0.0):t635;})(),([&](){V t636=get(e->slot(0,1),lit132);return !truth(t636)?V(0.0):t636;})(),([&](){V t637=get(e->slot(0,1),lit137);return !truth(t637)?V(0.0):t637;})(),([&](){V t638=get(e->slot(0,1),lit144);return !truth(t638)?V(0.0):t638;})(),([&](){V t639=([&](){V t640=get(e->slot(1,6),lit202);return truth(t640)?lit472:t640;})();return !truth(t639)?lit473:t639;})(),([&](){V t641=([&](){V t642=get(e->slot(1,6),lit203);return truth(t642)?lit472:t642;})();return !truth(t641)?lit473:t641;})(),([&](){V t643=([&](){V t644=get(e->slot(1,6),lit204);return truth(t644)?lit472:t644;})();return !truth(t643)?lit473:t643;})(),([&](){V t645=([&](){V t646=get(e->slot(1,6),lit205);return truth(t646)?lit472:t646;})();return !truth(t645)?lit473:t645;})(),([&](){V t647=([&](){V t648=get(e->slot(1,6),lit206);return truth(t648)?lit472:t648;})();return !truth(t647)?lit473:t647;})(),([&](){V t649=([&](){V t650=get(e->slot(1,6),lit207);return truth(t650)?lit472:t650;})();return !truth(t649)?lit473:t649;})(),([&](){V t651=([&](){V t652=get(e->slot(1,6),lit208);return truth(t652)?lit472:t652;})();return !truth(t651)?lit473:t651;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
