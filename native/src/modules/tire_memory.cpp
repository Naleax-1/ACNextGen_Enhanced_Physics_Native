// Generated native C++ from pinned tire_memory.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("INIT");
static const V lit6("GRIP");
static const V lit7("LOADING");
static const V lit8("SLIPPING");
static const V lit9("RECOVERING");
static const V lit10("SATURATED");
static const V lit11("UNLOADED");
static const V lit12("RECONTACT");
static const V lit13("HOT");
static const V lit14("HISTORY");
static const V lit15("STORE_ONLY");
static const V lit16("params");
static const V lit17("loadReference");
static const V lit18("loadMin");
static const V lit19("loadWarmStart");
static const V lit20("loadWarmFull");
static const V lit21("slipAngleRef");
static const V lit22("slipRatioRef");
static const V lit23("ambientTemp");
static const V lit24("optimumTemp");
static const V lit25("warmRecoveryTemp");
static const V lit26("hotRecoveryTemp");
static const V lit27("overheatTemp");
static const V lit28("slipTau");
static const V lit29("loadTau");
static const V lit30("contactTau");
static const V lit31("heatTau");
static const V lit32("memoryTau");
static const V lit33("gripTau");
static const V lit34("buildTau");
static const V lit35("releaseTau");
static const V lit36("recontactTau");
static const V lit37("slipAngleBuildGain");
static const V lit38("slipRatioBuildGain");
static const V lit39("combinedSlipBuildGain");
static const V lit40("loadBuildGain");
static const V lit41("contactLossBuildGain");
static const V lit42("contactTrustBuildGain");
static const V lit43("contactUnstableBuildGain");
static const V lit44("contactDelayBuildGain");
static const V lit45("carcassHistoryBuildGain");
static const V lit46("carcassHeatBuildGain");
static const V lit47("carcassHysteresisBuildGain");
static const V lit48("carcassVerticalBuildGain");
static const V lit49("bristleBuildGain");
static const V lit50("tireLimitBuildGain");
static const V lit51("hopBuildGain");
static const V lit52("armCamberBuildGain");
static const V lit53("armToeBuildGain");
static const V lit54("driveRearBuildGain");
static const V lit55("lsdRearBuildGain");
static const V lit56("shaftRearBuildGain");
static const V lit57("roadShockBuildGain");
static const V lit58("pathLossBuildGain");
static const V lit59("forceSlipEnergyBuildGain");
static const V lit60("slipRecoveryRiskGain");
static const V lit61("thermalStressBuildGain");
static const V lit62("microHeatGain");
static const V lit63("macroHeatGain");
static const V lit64("dampingHeatGain");
static const V lit65("thermalBuildGain");
static const V lit66("thermalReleaseGain");
static const V lit67("abrasionBuildGain");
static const V lit68("abrasionReleaseGain");
static const V lit69("historyReleaseGain");
static const V lit70("historyStickiness");
static const V lit71("recoveryGain");
static const V lit72("contactQualityRecoveryGain");
static const V lit73("supportRecoveryGain");
static const V lit74("gripGateRecoveryGain");
static const V lit75("recoveryBiasGain");
static const V lit76("slipAngleRecoveryGain");
static const V lit77("slipRatioRecoveryGain");
static const V lit78("contactLossRecoveryLoss");
static const V lit79("hotRecoveryLoss");
static const V lit80("abrasionRecoveryLoss");
static const V lit81("dirtyReturnRecoveryLoss");
static const V lit82("roadShockRecoveryLoss");
static const V lit83("normalTempRecovery");
static const V lit84("warmTempRecovery");
static const V lit85("hotTempRecovery");
static const V lit86("overheatRecovery");
static const V lit87("memoryGripLoss");
static const V lit88("thermalGripLoss");
static const V lit89("abrasionGripLoss");
static const V lit90("contactGripLoss");
static const V lit91("recontactGripBonus");
static const V lit92("forceGripLoss");
static const V lit93("roadGripLoss");
static const V lit94("minGrip");
static const V lit95("maxGrip");
static const V lit96("unloadedLoadFactor");
static const V lit97("saturatedCombinedSlip");
static const V lit98("slippingCombinedSlip");
static const V lit99("memoryRecoveringMin");
static const V lit100("loadingBuildMargin");
static const V lit101("recontactQualityLow");
static const V lit102("recontactQualityHigh");
static const V lit103("recontactRate");
static const V lit104("recontactMemoryMin");
static const V lit105("hotMemoryThreshold");
static const V lit106("historyThreshold");
static const V lit107("maxMemory");
static const V lit108("maxThermalMemory");
static const V lit109("maxAbrasionMemory");
static const V lit110("maxHeat");
static const V lit111("minDt");
static const V lit112("maxDt");
static const V lit113("debugStoreInterval");
static const V lit114("state");
static const V lit115("status");
static const V lit116("updateCount");
static const V lit117("wheelsValid");
static const V lit118("storeOnly");
static const V lit119("avgMemory");
static const V lit120("avgGrip");
static const V lit121("avgBuild");
static const V lit122("avgRecovery");
static const V lit123("avgThermal");
static const V lit124("avgAbrasion");
static const V lit125("avgHeat");
static const V lit126("avgHistory");
static const V lit127("avgRecoveryScalar");
static const V lit128("activeCount");
static const V lit129("contactLinked");
static const V lit130("carcassLinked");
static const V lit131("dynamicsLinked");
static const V lit132("hopLinked");
static const V lit133("armLinked");
static const V lit134("drivetrainLinked");
static const V lit135("lsdLinked");
static const V lit136("loadLinked");
static const V lit137("forceLinked");
static const V lit138("roadLinked");
static const V lit139("thermalLinked");
static const V lit140("recoveryLinked");
static const V lit141("debugStoreTimer");
static const V lit142("debugStoreNow");
static const V lit143("wheels");
static const V lit144("active");
static const V lit145("name");
static const V lit146("slipAngle");
static const V lit147("slipRatio");
static const V lit148("rawSlipAngle");
static const V lit149("rawSlipRatio");
static const V lit150("load");
static const V lit151("rawLoad");
static const V lit152("loadRate");
static const V lit153("prevLoad");
static const V lit154("memory");
static const V lit155("thermalMemory");
static const V lit156("abrasionMemory");
static const V lit157("historyMemory");
static const V lit158("grip");
static const V lit159("build");
static const V lit160("recovery");
static const V lit161("recoveryScalar");
static const V lit162("tyreTemp");
static const V lit163("virtualTemp");
static const V lit164("tempRecovery");
static const V lit165("slipRecovery");
static const V lit166("microHeat");
static const V lit167("macroHeat");
static const V lit168("heatSeed");
static const V lit169("historyStress");
static const V lit170("contactQuality");
static const V lit171("prevContactQuality");
static const V lit172("contactQualityRate");
static const V lit173("contactRaw");
static const V lit174("contactTrust");
static const V lit175("contactCombinedSlip");
static const V lit176("contactStabilityScore");
static const V lit177("contactStatus");
static const V lit178("contactLoss");
static const V lit179("contactEnergy");
static const V lit180("carcassSupport");
static const V lit181("carcassGripGate");
static const V lit182("carcassVerticalNorm");
static const V lit183("carcassHysteresis");
static const V lit184("carcassDelay");
static const V lit185("carcassRecoveryBias");
static const V lit186("carcassBristleLat");
static const V lit187("carcassBristleLong");
static const V lit188("sidewallEnergy");
static const V lit189("deformation");
static const V lit190("tireLimit");
static const V lit191("tireGrip");
static const V lit192("forceSlipEnergy");
static const V lit193("forceCombinedSlip");
static const V lit194("hopEnergy");
static const V lit195("armCamber");
static const V lit196("armToe");
static const V lit197("driveTorque");
static const V lit198("lsdLock");
static const V lit199("shaftTwist");
static const V lit200("roadShock");
static const V lit201("roadSeverity");
static const V lit202("pathLoss");
static const V lit203("thermalStress");
static const V lit204("slipRecoveryRisk");
static const V lit205("dirtyReturn");
static const V lit206("phaseId");
static const V lit207("phaseText");
static const V lit208("recontact");
static const V lit209("recontactShock");
static const V lit210("debug");
static const V lit211("huge");
static const V lit212("abs");
static const V lit213("safeStore");
static const V lit214("safeLoadRaw");
static const V lit215("safeField");
static const V lit216("getCar");
static const V lit217("loadK");
static const V lit218("WHEEL");
static const V lit219("ngp_contact_load_");
static const V lit220("ngp_tire_carcass_load_");
static const V lit221("ngp_tdyn_load_");
static const V lit222("ngp_tire_force_load_");
static const V lit223("ngp_tire_load_");
static const V lit224("ngp_tire_load_input_");
static const V lit225("ngp_sprung_load_");
static const V lit226("ngp_wheel_load_");
static const V lit227("ngp_load_wheel_");
static const V lit228("ngp_load_path_load_");
static const V lit229("ngp_lp_load_");
static const V lit230("STORE");
static const V lit231("ngp_dlt_load_");
static const V lit232("max");
static const V lit233("DLT");
static const V lit234("DEFAULT");
static const V lit235("ngp_tyre_temp_");
static const V lit236("ngp_tire_temp_");
static const V lit237("ngp_brake_temp_read_");
static const V lit238("ngp_memory_temp_");
static const V lit239("ngp_contact_slip_angle_");
static const V lit240("ngp_tire_carcass_slip_angle_");
static const V lit241("ngp_tire_force_effective_slip_angle_");
static const V lit242("ngp_tdyn_effective_slip_angle_");
static const V lit243("ngp_tire_slip_angle_");
static const V lit244("ngp_slip_angle_");
static const V lit245("ngp_filtered_slip_angle_");
static const V lit246("ngp_contact_slip_ratio_");
static const V lit247("ngp_tire_carcass_slip_ratio_");
static const V lit248("ngp_tire_force_effective_slip_ratio_");
static const V lit249("ngp_tdyn_effective_slip_ratio_");
static const V lit250("ngp_tire_slip_ratio_");
static const V lit251("ngp_slip_ratio_");
static const V lit252("ngp_filtered_slip_ratio_");
static const V lit253("ngp_contact_quality_");
static const V lit254("ngp_tire_contact_quality_");
static const V lit255("ngp_carcass_support_");
static const V lit256("ngp_tire_hop_energy_");
static const V lit257("ngp_tire_grip_");
static const V lit258("ngp_tire_limit_");
static const V lit259("ngp_tcr_quality_");
static const V lit260("ngp_tc_contact_");
static const V lit261("ngp_contact_raw_");
static const V lit262("ngp_contact_trust_");
static const V lit263("ngp_contact_stability_score_");
static const V lit264("ngp_contact_combined_slip_");
static const V lit265("ngp_tire_force_combined_slip_");
static const V lit266("ngp_tdyn_combined_slip_");
static const V lit267("ngp_tire_dynamics_combined_slip_");
static const V lit268("ngp_tire_combined_slip_");
static const V lit269("ngp_contact_status_");
static const V lit270("ngp_tire_contact_loss_");
static const V lit271("ngp_tcr_contact_loss_");
static const V lit272("ngp_contact_loss_");
static const V lit273("ngp_contact_hop_drop_");
static const V lit274("ngp_tcr_energy_push_");
static const V lit275("ngp_tc_energy_");
static const V lit276("ngp_tire_slip_energy_");
static const V lit277("ngp_tdyn_slip_energy_");
static const V lit278("ngp_tire_force_slip_energy_");
static const V lit279("ngp_tire_carcass_support_");
static const V lit280("ngp_contact_carcass_support_");
static const V lit281("ngp_carcass_grip_gate_");
static const V lit282("ngp_tire_carcass_grip_gate_");
static const V lit283("ngp_contact_grip_gate_");
static const V lit284("ngp_carcass_vertical_norm_");
static const V lit285("ngp_tire_carcass_vertical_norm_");
static const V lit286("ngp_contact_vertical_norm_");
static const V lit287("ngp_carcass_hysteresis_");
static const V lit288("ngp_tire_carcass_hysteresis_");
static const V lit289("ngp_contact_hysteresis_");
static const V lit290("ngp_contact_delay_");
static const V lit291("ngp_tire_contact_delay_");
static const V lit292("ngp_contact_quality_delay_");
static const V lit293("ngp_carcass_recovery_bias_");
static const V lit294("ngp_tire_carcass_recovery_bias_");
static const V lit295("ngp_contact_recovery_bias_");
static const V lit296("ngp_carcass_heat_seed_");
static const V lit297("ngp_tire_carcass_heat_seed_");
static const V lit298("ngp_contact_heat_seed_");
static const V lit299("ngp_carcass_history_stress_");
static const V lit300("ngp_tire_carcass_history_stress_");
static const V lit301("ngp_contact_history_stress_");
static const V lit302("ngp_carcass_bristle_lat_");
static const V lit303("ngp_tire_carcass_bristle_lat_");
static const V lit304("ngp_carcass_bristle_long_");
static const V lit305("ngp_tire_carcass_bristle_long_");
static const V lit306("ngp_sidewall_energy_");
static const V lit307("ngp_tire_sidewall_energy_");
static const V lit308("ngp_tire_deformation_");
static const V lit309("ngp_tire_carcass_deformation_");
static const V lit310("ngp_tyre_limit_");
static const V lit311("ngp_tforce_limit_");
static const V lit312("ngp_tyre_grip_");
static const V lit313("ngp_tforce_grip_");
static const V lit314("ngp_tire_dynamics_slip_energy_");
static const V lit315("ngp_tirehop_energy_");
static const V lit316("ngp_tire_hop_");
static const V lit317("ngp_thop_energy_");
static const V lit318("ngp_control_arm_camber_");
static const V lit319("ngp_arm_camber_");
static const V lit320("ngp_ca_camber_");
static const V lit321("ngp_compliance_virtual_camber_");
static const V lit322("ngp_control_arm_toe_");
static const V lit323("ngp_arm_toe_");
static const V lit324("ngp_ca_toe_");
static const V lit325("ngp_compliance_virtual_toe_");
static const V lit326("ngp_drive_torque_normalized_from_nm");
static const V lit327("ngp_drive_torque");
static const V lit328("ngp_drivetrain_torque");
static const V lit329("ngp_dt_torque");
static const V lit330("ngp_lsd_lock");
static const V lit331("ngp_diff_lock");
static const V lit332("ngp_shaft_twist");
static const V lit333("ngp_windup_twist");
static const V lit334("ngp_driveline_twist");
static const V lit335("ngp_road_impact_");
static const V lit336("ngp_rii_impact_");
static const V lit337("ngp_road_input_severity_");
static const V lit338("ngp_susp_road_impulse_");
static const V lit339("ngp_rii_severity_");
static const V lit340("ngp_rbi_wheel_input_");
static const V lit341("ngp_load_path_loss_");
static const V lit342("ngp_lp_path_loss_");
static const V lit343("ngp_lp_force_loss_");
static const V lit344("ngp_rii_path_loss_");
static const V lit345("ngp_thermal_stress");
static const V lit346("ngp_virtual_thermal_stress");
static const V lit347("ngp_brake_root_heat_avg");
static const V lit348("ngp_tire_memory_avg_heat");
static const V lit349("ngp_slip_snap_risk_");
static const V lit350("ngp_snap_risk_");
static const V lit351("ngp_slip_dirty_return_");
static const V lit352("ngp_dirty_return_");
static const V lit353("ngp_memory_");
static const V lit354("ngp_rubber_memory_");
static const V lit355("ngp_tire_memory_");
static const V lit356("ngp_tyre_memory_");
static const V lit357("ngp_memory_grip_");
static const V lit358("ngp_tire_memory_grip_");
static const V lit359("ngp_tyre_memory_grip_");
static const V lit360("ngp_tire_memory_phase_id_");
static const V lit361("ngp_tire_memory_phase_");
static const V lit362("ngp_tyre_memory_phase_id_");
static const V lit363("ngp_tyre_memory_phase_");
static const V lit364("ngp_tire_memory_recontact_");
static const V lit365("ngp_memory_thermal_");
static const V lit366("ngp_memory_abrasion_");
static const V lit367("ngp_memory_history_");
static const V lit368("ngp_memory_micro_heat_");
static const V lit369("ngp_memory_macro_heat_");
static const V lit370("ngp_memory_virtual_temp_");
static const V lit371("ngp_memory_recovery_scalar_");
static const V lit372("ngp_memory_recontact_shock_");
static const V lit373("ngp_tire_memory_thermal_");
static const V lit374("ngp_tire_memory_abrasion_");
static const V lit375("ngp_tire_memory_history_");
static const V lit376("ngp_tire_memory_heat_");
static const V lit377("ngp_tire_memory_recovery_scalar_");
static const V lit378("ngp_tm_memory_");
static const V lit379("ngp_tm_grip_");
static const V lit380("ngp_tm_phase_id_");
static const V lit381("ngp_tm_thermal_");
static const V lit382("ngp_tm_abrasion_");
static const V lit383("ngp_tm_history_");
static const V lit384("ngp_tm_recovery_scalar_");
static const V lit385("ngp_memory_build_");
static const V lit386("ngp_memory_recovery_");
static const V lit387("ngp_memory_slip_angle_");
static const V lit388("ngp_memory_slip_ratio_");
static const V lit389("ngp_memory_load_");
static const V lit390("ngp_memory_load_rate_");
static const V lit391("ngp_memory_active_");
static const V lit392("ngp_memory_contact_loss_");
static const V lit393("ngp_memory_contact_quality_");
static const V lit394("ngp_memory_contact_trust_");
static const V lit395("ngp_memory_contact_combined_slip_");
static const V lit396("ngp_memory_contact_stability_");
static const V lit397("ngp_memory_contact_quality_rate_");
static const V lit398("ngp_memory_carcass_support_");
static const V lit399("ngp_memory_carcass_hysteresis_");
static const V lit400("ngp_memory_carcass_delay_");
static const V lit401("ngp_memory_carcass_heat_seed_");
static const V lit402("ngp_memory_carcass_history_stress_");
static const V lit403("ngp_memory_tire_limit_");
static const V lit404("ngp_memory_hop_");
static const V lit405("ngp_memory_lsd_");
static const V lit406("ngp_memory_road_shock_");
static const V lit407("ngp_memory_path_loss_");
static const V lit408("ngp_memory_force_slip_energy_");
static const V lit409("ngp_memory_dirty_return_");
static const V lit410("ngp_tire_memory_status");
static const V lit411("UNKNOWN");
static const V lit412("ngp_tyre_memory_status");
static const V lit413("ngp_tire_memory_update_count");
static const V lit414("ngp_tire_memory_wheels_valid");
static const V lit415("ngp_tire_memory_avg");
static const V lit416("ngp_tire_memory_avg_grip");
static const V lit417("ngp_tire_memory_avg_thermal");
static const V lit418("ngp_tire_memory_avg_abrasion");
static const V lit419("ngp_tm_status");
static const V lit420("ngp_tm_update_count");
static const V lit421("ngp_tm_store_only");
static const V lit422("ngp_tm_avg_memory");
static const V lit423("ngp_tm_avg_grip");
static const V lit424("ngp_tm_avg_history");
static const V lit425("ngp_tm_max_memory");
static const V lit426("ngp_tm_min_grip");
static const V lit427("ngp_tm_active_count");
static const V lit428("ngp_tire_memory_avg_build");
static const V lit429("ngp_tire_memory_avg_recovery");
static const V lit430("ngp_tire_memory_avg_recovery_scalar");
static const V lit431("ngp_tire_memory_contact_linked");
static const V lit432("ngp_tire_memory_carcass_linked");
static const V lit433("ngp_tire_memory_dynamics_linked");
static const V lit434("ngp_tire_memory_hop_linked");
static const V lit435("ngp_tire_memory_arm_linked");
static const V lit436("ngp_tire_memory_drivetrain_linked");
static const V lit437("ngp_tire_memory_lsd_linked");
static const V lit438("ngp_tire_memory_load_linked");
static const V lit439("ngp_tire_memory_force_linked");
static const V lit440("ngp_tire_memory_road_linked");
static const V lit441("ngp_tire_memory_thermal_linked");
static const V lit442("ngp_tire_memory_recovery_linked");
static const V lit443("init");
static const V lit444("update");
static const V lit445("BAD DT");
static const V lit446("STORE ONLY");
static const V lit447("RUNNING");
static const V lit448("min");
static const V lit449("getMemory");
static const V lit450("getGrip");
static const V lit451("getThermalMemory");
static const V lit452("getAbrasionMemory");
static const V lit453("getHistoryMemory");
static const V lit454("getRecoveryScalar");
static const V lit455("getPhase");
static const V lit456("getState");
static const V lit457("debugStr");
static const V lit458("format");
static const V lit459("Status %s / Count %.0f / Wheels %s / Store %s\n");
static const V lit460("Phase %s / Mem %.3f Grip %.3f Hist %.3f\n");
static const V lit461("Build %.3f Rec %.4f Scalar %.2f Heat %.3f Abr %.3f\n");
static const V lit462("SA %.3f SR %.3f Load %.0f CQ %.2f Trust %.2f\n");
static const V lit463("Carc Sup %.2f Hyst %.2f Delay %.2f ReC %.0f\n");
static const V lit464("Road %.2f Path %.2f ForceE %.2f Dirty %.2f\n");
static const V lit465("Links CT:%s Car:%s TD:%s Hop:%s Arm:%s DT:%s LSD:%s Force:%s Road:%s");
static const V lit466("OK");
static const V lit467("NIL");
static const V lit468("YES");
static const V lit469("NO");
V load_tire_memory(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(41);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,lit5,V(0.0));set(z,lit6,V(1.0));set(z,lit7,V(2.0));set(z,lit8,V(3.0));set(z,lit9,V(4.0));set(z,lit10,V(5.0));set(z,lit11,V(6.0));set(z,lit12,V(7.0));set(z,lit13,V(8.0));set(z,lit14,V(9.0));set(z,lit15,V(10.0));return z;})();e->slot(0,3)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit16)};V t5=([&](){V z=table();set(z,lit17,V(4000.0));set(z,lit18,V(120.0));set(z,lit19,V(1800.0));set(z,lit20,V(6200.0));set(z,lit21,V(0.22));set(z,lit22,V(0.35));set(z,lit23,V(25.0));set(z,lit24,V(90.0));set(z,lit25,V(75.0));set(z,lit26,V(105.0));set(z,lit27,V(125.0));set(z,lit28,V(0.16));set(z,lit29,V(0.24));set(z,lit30,V(0.07));set(z,lit31,V(0.45));set(z,lit32,V(0.22));set(z,lit33,V(0.12));set(z,lit34,V(0.06));set(z,lit35,V(0.42));set(z,lit36,V(0.09));set(z,lit37,V(0.46));set(z,lit38,V(0.34));set(z,lit39,V(0.18));set(z,lit40,V(0.12));set(z,lit41,V(0.26));set(z,lit42,V(0.2));set(z,lit43,V(0.16));set(z,lit44,V(0.16));set(z,lit45,V(0.3));set(z,lit46,V(0.22));set(z,lit47,V(0.18));set(z,lit48,V(0.1));set(z,lit49,V(0.12));set(z,lit50,V(0.1));set(z,lit51,V(0.14));set(z,lit52,V(0.03));set(z,lit53,V(0.045));set(z,lit54,V(0.08));set(z,lit55,V(0.06));set(z,lit56,V(0.05));set(z,lit57,V(0.1));set(z,lit58,V(0.1));set(z,lit59,V(0.14));set(z,lit60,V(0.1));set(z,lit61,V(0.12));set(z,lit62,V(0.22));set(z,lit63,V(0.14));set(z,lit64,V(0.18));set(z,lit65,V(0.2));set(z,lit66,V(0.055));set(z,lit67,V(0.18));set(z,lit68,V(0.018));set(z,lit69,V(0.06));set(z,lit70,V(0.72));set(z,lit71,V(0.2));set(z,lit72,V(0.2));set(z,lit73,V(0.18));set(z,lit74,V(0.14));set(z,lit75,V(0.22));set(z,lit76,V(0.56));set(z,lit77,V(0.74));set(z,lit78,V(0.16));set(z,lit79,V(0.38));set(z,lit80,V(0.22));set(z,lit81,V(0.12));set(z,lit82,V(0.08));set(z,lit83,V(1.0));set(z,lit84,V(0.76));set(z,lit85,V(0.42));set(z,lit86,V(0.24));set(z,lit87,V(0.3));set(z,lit88,V(0.12));set(z,lit89,V(0.18));set(z,lit90,V(0.08));set(z,lit91,V(0.03));set(z,lit92,V(0.04));set(z,lit93,V(0.05));set(z,lit94,V(0.68));set(z,lit95,V(1.05));set(z,lit96,V(0.1));set(z,lit97,V(1.2));set(z,lit98,V(0.7));set(z,lit99,V(0.055));set(z,lit100,V(0.012));set(z,lit101,V(0.34));set(z,lit102,V(0.58));set(z,lit103,V(2.0));set(z,lit104,V(0.08));set(z,lit105,V(0.36));set(z,lit106,V(0.42));set(z,lit107,V(1.0));set(z,lit108,V(1.0));set(z,lit109,V(1.0));set(z,lit110,V(1.0));set(z,lit111,V(0.0001));set(z,lit112,V(0.1));set(z,lit113,V(0.25));return z;})();refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t6=([&](){V z=table();set(z,lit115,lit5);set(z,lit116,V(0.0));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(0.0));set(z,lit120,V(1.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(1.0));set(z,lit107,V(0.0));set(z,lit94,V(1.0));set(z,lit128,V(0.0));set(z,lit129,V(false));set(z,lit130,V(false));set(z,lit131,V(false));set(z,lit132,V(false));set(z,lit133,V(false));set(z,lit134,V(false));set(z,lit135,V(false));set(z,lit136,V(false));set(z,lit137,V(false));set(z,lit138,V(false));set(z,lit139,V(false));set(z,lit140,V(false));set(z,lit141,V(999.0));set(z,lit142,V(true));set(z,lit143,([&](){V z=table();return z;})());return z;})();refs[0].put(std::move(t6));}
{double t7=num(V(0.0)),t8=num(V(3.0)),t9=num(V(1.0));for(double t10=t7;(t9>0?t10<=t8:t10>=t8);t10+=t9){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t10);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0))};V t11=([&](){V z=table();set(z,lit144,V(false));set(z,lit145,get(e->slot(1,2),e->slot(0,0)));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,get(get(e->slot(1,1),lit16),lit17));set(z,lit151,get(get(e->slot(1,1),lit16),lit17));set(z,lit152,V(0.0));set(z,lit153,get(get(e->slot(1,1),lit16),lit17));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,V(0.0));set(z,lit158,V(1.0));set(z,lit159,V(0.0));set(z,lit160,V(0.0));set(z,lit161,V(1.0));set(z,lit162,get(get(e->slot(1,1),lit16),lit23));set(z,lit163,get(get(e->slot(1,1),lit16),lit23));set(z,lit164,V(1.0));set(z,lit165,V(1.0));set(z,lit166,V(0.0));set(z,lit167,V(0.0));set(z,lit168,V(0.0));set(z,lit169,V(0.0));set(z,lit170,V(1.0));set(z,lit171,V(1.0));set(z,lit172,V(0.0));set(z,lit173,V(1.0));set(z,lit174,V(1.0));set(z,lit175,V(0.0));set(z,lit176,V(1.0));set(z,lit177,V(0.0));set(z,lit178,V(0.0));set(z,lit179,V(0.0));set(z,lit180,V(1.0));set(z,lit181,V(1.0));set(z,lit182,V(0.0));set(z,lit183,V(0.0));set(z,lit184,V(0.0));set(z,lit185,V(0.0));set(z,lit186,V(0.0));set(z,lit187,V(0.0));set(z,lit188,V(0.0));set(z,lit189,V(0.0));set(z,lit190,V(0.0));set(z,lit191,V(1.0));set(z,lit192,V(0.0));set(z,lit193,V(0.0));set(z,lit194,V(0.0));set(z,lit195,V(0.0));set(z,lit196,V(0.0));set(z,lit197,V(0.0));set(z,lit198,V(0.0));set(z,lit199,V(0.0));set(z,lit200,V(0.0));set(z,lit201,V(0.0));set(z,lit202,V(0.0));set(z,lit203,V(0.0));set(z,lit204,V(0.0));set(z,lit205,V(0.0));set(z,lit206,V(0.0));set(z,lit207,lit5);set(z,lit208,V(0.0));set(z,lit209,V(0.0));return z;})();refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),e->slot(0,0))};V t12=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));refs[0].put(std::move(t12));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit210)};V t13=get(e->slot(0,1),lit114);refs[0].put(std::move(t13));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(([&](){V t15=([&](){V t16=([&](){V t17=eq(e->slot(0,2),V());return !truth(t17)?ne(e->slot(0,2),e->slot(0,2)):t17;})();return !truth(t16)?eq(e->slot(0,2),get(e->get("math"),lit211)):t16;})();return !truth(t15)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit211)))):t15;})())){if(truth(eq(e->slot(0,1),V()))){return Args{V(0.0)};
}
return Args{e->slot(0,1)};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,4),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t18));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit212),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t19=([&](){V t20=ge(e->slot(0,2),e->slot(0,1));return truth(t20)?V(1.0):t20;})();return !truth(t19)?V(0.0):t19;})()};
}
{V t21=first(call(e->slot(1,5),Args{divv(sub(e->slot(0,2),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t21);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t22=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t23=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t24=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t25=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t25));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
{V t26=get(e->slot(0,0),lit213);e->slot(0,10)=std::move(t26);}
{V t27=get(e->slot(0,0),lit214);e->slot(0,11)=std::move(t27);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t28=first(call(e->slot(1,11),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t28);}
if(truth(eq(e->slot(0,2),V()))){if(truth(eq(e->slot(0,1),V()))){return Args{V()};
}
return Args{e->slot(0,1)};
}
return call(e->slot(1,4),Args{e->slot(0,2),e->slot(0,1)});
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t29=num(V(1.0)),t30=num(length(e->slot(0,0))),t31=num(V(1.0));for(double t32=t29;(t31>0?t32<=t30:t32>=t30);t32+=t31){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t32);{V t33=first(call(e->slot(2,11),Args{get(e->slot(1,0),e->slot(0,0))}));e->slot(0,1)=std::move(t33);}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1),get(e->slot(1,0),e->slot(0,0))};
}
}}
return Args{V(),V()};
return Args{};});
{V t34=get(e->slot(0,0),lit215);e->slot(0,14)=std::move(t34);}
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t35=V(!truth(e->get("ac")));return !truth(t35)?V(!truth(get(e->get("ac"),lit216))):t35;})())){return Args{V()};
}
{Args t36=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit216),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t36,0);e->slot(0,1)=arg(t36,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{Args t37=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,0),lit143)};
return Args{};})});e->slot(0,1)=arg(t37,0);e->slot(0,2)=arg(t37,1);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{Args t38=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t39=get(e->slot(1,0),e->slot(1,1));return !truth(t39)?get(e->slot(1,0),add(e->slot(1,1),V(1.0))):t39;})()};
return Args{};})});e->slot(0,2)=arg(t38,0);e->slot(0,3)=arg(t38,1);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(0,0),lit207)};V t40=([&](){V t41=e->slot(0,1);return !truth(t41)?lit5:t41;})();refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit206)};V t42=([&](){V t43=get(e->slot(1,3),get(e->slot(0,0),lit207));return !truth(t43)?V(0.0):t43;})();refs[0].put(std::move(t42));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit141)};V t44=add(([&](){V t45=get(get(e->slot(1,1),lit114),lit141);return !truth(t45)?V(0.0):t45;})(),([&](){V t46=e->slot(0,0);return !truth(t46)?V(0.0):t46;})());refs[0].put(std::move(t44));}
if(truth(ge(get(get(e->slot(1,1),lit114),lit141),get(get(e->slot(1,1),lit16),lit113)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit141)};V t47=V(0.0);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit142)};V t48=V(true);refs[0].put(std::move(t48));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit142)};V t49=V(false);refs[0].put(std::move(t49));}
}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t50=([&](){V z=table();set(z,V(1.0),lit150);set(z,V(2.0),lit217);return z;})();e->slot(0,0)=std::move(t50);}
{double t51=num(V(1.0)),t52=num(length(e->slot(0,0))),t53=num(V(1.0));for(double t54=t51;(t53>0?t54<=t52:t54>=t52);t54+=t53){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t54);{V t55=first(call(e->slot(3,14),Args{e->slot(2,0),get(e->slot(1,0),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t55);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(3,6),Args{e->slot(0,1)})),lit218};
}
}}
}
{Args t56=call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit219,e->slot(0,1)));set(z,V(2.0),concat(lit220,e->slot(0,1)));set(z,V(3.0),concat(lit221,e->slot(0,1)));set(z,V(4.0),concat(lit222,e->slot(0,1)));set(z,V(5.0),concat(lit223,e->slot(0,1)));set(z,V(6.0),concat(lit224,e->slot(0,1)));set(z,V(7.0),concat(lit225,e->slot(0,1)));set(z,V(8.0),concat(lit226,e->slot(0,1)));set(z,V(9.0),concat(lit227,e->slot(0,1)));set(z,V(10.0),concat(lit228,e->slot(0,1)));set(z,V(11.0),concat(lit229,e->slot(0,1)));return z;})()});e->slot(0,2)=arg(t56,0);e->slot(0,3)=arg(t56,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit136)};V t57=V(true);refs[0].put(std::move(t57));}
return Args{first(call(e->slot(1,6),Args{e->slot(0,2)})),([&](){V t58=e->slot(0,3);return !truth(t58)?lit230:t58;})()};
}
{V t59=first(call(e->slot(1,11),Args{concat(lit231,e->slot(0,1))}));e->slot(0,4)=std::move(t59);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit136)};V t60=V(true);refs[0].put(std::move(t60));}
return Args{first(call(get(e->get("math"),lit232),Args{V(0.0),add(get(get(e->slot(1,1),lit16),lit17),first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})))})),lit233};
}
return Args{get(get(e->slot(1,1),lit16),lit17),lit234};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t61=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit235,e->slot(0,0)));set(z,V(2.0),concat(lit236,e->slot(0,0)));set(z,V(3.0),concat(lit237,e->slot(0,0)));set(z,V(4.0),concat(lit238,e->slot(0,0)));return z;})()}));e->slot(0,1)=std::move(t61);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit139)};V t62=V(true);refs[0].put(std::move(t62));}
return call(e->slot(1,4),Args{e->slot(0,1),get(get(e->slot(1,1),lit16),lit23)});
}
return Args{get(get(e->slot(1,1),lit16),lit23)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t63=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit239,e->slot(0,0)));set(z,V(2.0),concat(lit240,e->slot(0,0)));set(z,V(3.0),concat(lit241,e->slot(0,0)));set(z,V(4.0),concat(lit242,e->slot(0,0)));set(z,V(5.0),concat(lit243,e->slot(0,0)));set(z,V(6.0),concat(lit244,e->slot(0,0)));set(z,V(7.0),concat(lit245,e->slot(0,0)));return z;})()}));e->slot(0,2)=std::move(t63);}
{V t64=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit246,e->slot(0,0)));set(z,V(2.0),concat(lit247,e->slot(0,0)));set(z,V(3.0),concat(lit248,e->slot(0,0)));set(z,V(4.0),concat(lit249,e->slot(0,0)));set(z,V(5.0),concat(lit250,e->slot(0,0)));set(z,V(6.0),concat(lit251,e->slot(0,0)));set(z,V(7.0),concat(lit252,e->slot(0,0)));return z;})()}));e->slot(0,3)=std::move(t64);}
if(truth(([&](){V t65=eq(e->slot(0,2),V());return truth(t65)?e->slot(0,1):t65;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t66=first(call(e->slot(1,14),Args{e->slot(0,1),lit146,V(0.0)}));refs[0].put(std::move(t66));}
}
if(truth(([&](){V t67=eq(e->slot(0,3),V());return truth(t67)?e->slot(0,1):t67;})())){{std::array<Ref,1> refs{Ref(e,0,3)};V t68=first(call(e->slot(1,14),Args{e->slot(0,1),lit147,V(0.0)}));refs[0].put(std::move(t68));}
}
return joined(Args{first(call(e->slot(1,6),Args{e->slot(0,2)}))},call(e->slot(1,6),Args{e->slot(0,3)}));
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,1))){return Args{V(true)};
}
{V t69=([&](){V z=table();set(z,V(1.0),concat(lit253,e->slot(0,0)));set(z,V(2.0),concat(lit254,e->slot(0,0)));set(z,V(3.0),concat(lit220,e->slot(0,0)));set(z,V(4.0),concat(lit222,e->slot(0,0)));set(z,V(5.0),concat(lit243,e->slot(0,0)));set(z,V(6.0),concat(lit250,e->slot(0,0)));set(z,V(7.0),concat(lit231,e->slot(0,0)));set(z,V(8.0),concat(lit255,e->slot(0,0)));set(z,V(9.0),concat(lit256,e->slot(0,0)));set(z,V(10.0),concat(lit257,e->slot(0,0)));set(z,V(11.0),concat(lit258,e->slot(0,0)));return z;})();e->slot(0,2)=std::move(t69);}
{double t70=num(V(1.0)),t71=num(length(e->slot(0,2))),t72=num(V(1.0));for(double t73=t70;(t72>0?t73<=t71:t73>=t71);t73+=t72){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t73);if(truth(ne(first(call(e->slot(2,11),Args{get(e->slot(1,2),e->slot(0,0))})),V()))){return Args{V(true)};
}
}}
return Args{V(false)};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t74=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit253,e->slot(0,0)));set(z,V(2.0),concat(lit254,e->slot(0,0)));set(z,V(3.0),concat(lit259,e->slot(0,0)));set(z,V(4.0),concat(lit260,e->slot(0,0)));return z;})()}));e->slot(0,2)=std::move(t74);}
{V t75=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit261,e->slot(0,0)));set(z,V(2.0),concat(lit259,e->slot(0,0)));return z;})()}));e->slot(0,3)=std::move(t75);}
{V t76=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit262,e->slot(0,0)));set(z,V(2.0),concat(lit263,e->slot(0,0)));set(z,V(3.0),concat(lit259,e->slot(0,0)));return z;})()}));e->slot(0,4)=std::move(t76);}
{V t77=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit264,e->slot(0,0)));set(z,V(2.0),concat(lit265,e->slot(0,0)));set(z,V(3.0),concat(lit266,e->slot(0,0)));set(z,V(4.0),concat(lit267,e->slot(0,0)));set(z,V(5.0),concat(lit268,e->slot(0,0)));return z;})()}));e->slot(0,5)=std::move(t77);}
{V t78=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit263,e->slot(0,0)));set(z,V(2.0),concat(lit262,e->slot(0,0)));return z;})()}));e->slot(0,6)=std::move(t78);}
{V t79=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit269,e->slot(0,0)));return z;})()}));e->slot(0,7)=std::move(t79);}
{V t80=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit270,e->slot(0,0)));set(z,V(2.0),concat(lit271,e->slot(0,0)));set(z,V(3.0),concat(lit272,e->slot(0,0)));set(z,V(4.0),concat(lit273,e->slot(0,0)));return z;})()}));e->slot(0,8)=std::move(t80);}
{V t81=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit274,e->slot(0,0)));set(z,V(2.0),concat(lit275,e->slot(0,0)));set(z,V(3.0),concat(lit276,e->slot(0,0)));set(z,V(4.0),concat(lit277,e->slot(0,0)));set(z,V(5.0),concat(lit278,e->slot(0,0)));return z;})()}));e->slot(0,9)=std::move(t81);}
if(truth(([&](){V t82=([&](){V t83=([&](){V t84=([&](){V t85=([&](){V t86=([&](){V t87=([&](){V t88=ne(e->slot(0,2),V());return !truth(t88)?ne(e->slot(0,3),V()):t88;})();return !truth(t87)?ne(e->slot(0,4),V()):t87;})();return !truth(t86)?ne(e->slot(0,5),V()):t86;})();return !truth(t85)?ne(e->slot(0,6),V()):t85;})();return !truth(t84)?ne(e->slot(0,7),V()):t84;})();return !truth(t83)?ne(e->slot(0,8),V()):t83;})();return !truth(t82)?ne(e->slot(0,9),V()):t82;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit129)};V t89=V(true);refs[0].put(std::move(t89));}
}
{V t90=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));e->slot(0,10)=std::move(t90);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit173)};V t91=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),e->slot(0,10)})),V(0.0),V(1.2)}));refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit174)};V t92=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),e->slot(0,10)})),V(0.0),V(1.2)}));refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit175)};V t93=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(2.5)}));refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit176)};V t94=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),get(e->slot(0,1),lit174)})),V(0.0),V(1.2)}));refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit177)};V t95=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit178)};V t96=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,8),sub(V(1.0),e->slot(0,10))})),V(0.0),V(1.0)}));refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit179)};V t97=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t97));}
return Args{e->slot(0,10)};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t98=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit255,e->slot(0,0)));set(z,V(2.0),concat(lit279,e->slot(0,0)));set(z,V(3.0),concat(lit280,e->slot(0,0)));return z;})()}));e->slot(0,2)=std::move(t98);}
{V t99=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit281,e->slot(0,0)));set(z,V(2.0),concat(lit282,e->slot(0,0)));set(z,V(3.0),concat(lit283,e->slot(0,0)));return z;})()}));e->slot(0,3)=std::move(t99);}
{V t100=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit284,e->slot(0,0)));set(z,V(2.0),concat(lit285,e->slot(0,0)));set(z,V(3.0),concat(lit286,e->slot(0,0)));return z;})()}));e->slot(0,4)=std::move(t100);}
{V t101=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit287,e->slot(0,0)));set(z,V(2.0),concat(lit288,e->slot(0,0)));set(z,V(3.0),concat(lit289,e->slot(0,0)));return z;})()}));e->slot(0,5)=std::move(t101);}
{V t102=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit290,e->slot(0,0)));set(z,V(2.0),concat(lit291,e->slot(0,0)));set(z,V(3.0),concat(lit292,e->slot(0,0)));return z;})()}));e->slot(0,6)=std::move(t102);}
{V t103=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit293,e->slot(0,0)));set(z,V(2.0),concat(lit294,e->slot(0,0)));set(z,V(3.0),concat(lit295,e->slot(0,0)));return z;})()}));e->slot(0,7)=std::move(t103);}
{V t104=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit296,e->slot(0,0)));set(z,V(2.0),concat(lit297,e->slot(0,0)));set(z,V(3.0),concat(lit298,e->slot(0,0)));return z;})()}));e->slot(0,8)=std::move(t104);}
{V t105=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit299,e->slot(0,0)));set(z,V(2.0),concat(lit300,e->slot(0,0)));set(z,V(3.0),concat(lit301,e->slot(0,0)));return z;})()}));e->slot(0,9)=std::move(t105);}
{V t106=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit302,e->slot(0,0)));set(z,V(2.0),concat(lit303,e->slot(0,0)));return z;})()}));e->slot(0,10)=std::move(t106);}
{V t107=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit304,e->slot(0,0)));set(z,V(2.0),concat(lit305,e->slot(0,0)));return z;})()}));e->slot(0,11)=std::move(t107);}
{V t108=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit306,e->slot(0,0)));set(z,V(2.0),concat(lit307,e->slot(0,0)));return z;})()}));e->slot(0,12)=std::move(t108);}
{V t109=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit308,e->slot(0,0)));set(z,V(2.0),concat(lit309,e->slot(0,0)));return z;})()}));e->slot(0,13)=std::move(t109);}
if(truth(([&](){V t110=([&](){V t111=([&](){V t112=([&](){V t113=([&](){V t114=([&](){V t115=([&](){V t116=([&](){V t117=([&](){V t118=([&](){V t119=([&](){V t120=ne(e->slot(0,2),V());return !truth(t120)?ne(e->slot(0,3),V()):t120;})();return !truth(t119)?ne(e->slot(0,4),V()):t119;})();return !truth(t118)?ne(e->slot(0,5),V()):t118;})();return !truth(t117)?ne(e->slot(0,6),V()):t117;})();return !truth(t116)?ne(e->slot(0,7),V()):t116;})();return !truth(t115)?ne(e->slot(0,8),V()):t115;})();return !truth(t114)?ne(e->slot(0,9),V()):t114;})();return !truth(t113)?ne(e->slot(0,10),V()):t113;})();return !truth(t112)?ne(e->slot(0,11),V()):t112;})();return !truth(t111)?ne(e->slot(0,12),V()):t111;})();return !truth(t110)?ne(e->slot(0,13),V()):t110;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit130)};V t121=V(true);refs[0].put(std::move(t121));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit180)};V t122=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit181)};V t123=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit182)};V t124=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit183)};V t125=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit184)};V t126=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit185)};V t127=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit168)};V t128=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit169)};V t129=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit186)};V t130=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit187)};V t131=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit188)};V t132=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit189)};V t133=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,13),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t133));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t134=first(call(e->slot(1,24),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,2)=std::move(t134);}
call(e->slot(1,25),Args{e->slot(0,0),e->slot(0,1)});
{V t135=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit258,e->slot(0,0)));set(z,V(2.0),concat(lit310,e->slot(0,0)));set(z,V(3.0),concat(lit311,e->slot(0,0)));return z;})()}));e->slot(0,3)=std::move(t135);}
{V t136=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit257,e->slot(0,0)));set(z,V(2.0),concat(lit312,e->slot(0,0)));set(z,V(3.0),concat(lit313,e->slot(0,0)));return z;})()}));e->slot(0,4)=std::move(t136);}
{V t137=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit278,e->slot(0,0)));set(z,V(2.0),concat(lit277,e->slot(0,0)));set(z,V(3.0),concat(lit314,e->slot(0,0)));return z;})()}));e->slot(0,5)=std::move(t137);}
{V t138=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit265,e->slot(0,0)));set(z,V(2.0),concat(lit266,e->slot(0,0)));set(z,V(3.0),concat(lit267,e->slot(0,0)));return z;})()}));e->slot(0,6)=std::move(t138);}
if(truth(([&](){V t139=([&](){V t140=([&](){V t141=ne(e->slot(0,3),V());return !truth(t141)?ne(e->slot(0,4),V()):t141;})();return !truth(t140)?ne(e->slot(0,5),V()):t140;})();return !truth(t139)?ne(e->slot(0,6),V()):t139;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit131)};V t142=V(true);refs[0].put(std::move(t142));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit137)};V t143=([&](){V t144=([&](){V t145=get(get(e->slot(1,1),lit114),lit137);return !truth(t145)?ne(e->slot(0,5),V()):t145;})();return !truth(t144)?ne(e->slot(0,6),V()):t144;})();refs[0].put(std::move(t143));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit190)};V t146=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(2.0)}));refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit191)};V t147=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(1.0)})),V(0.0),V(1.25)}));refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit192)};V t148=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit193)};V t149=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),get(e->slot(0,1),lit175)})),V(0.0),V(2.5)}));refs[0].put(std::move(t149));}
{V t150=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit315,e->slot(0,0)));set(z,V(2.0),concat(lit256,e->slot(0,0)));set(z,V(3.0),concat(lit316,e->slot(0,0)));set(z,V(4.0),concat(lit317,e->slot(0,0)));return z;})()}));e->slot(0,7)=std::move(t150);}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit132)};V t151=V(true);refs[0].put(std::move(t151));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit194)};V t152=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t152));}
{V t153=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit318,e->slot(0,0)));set(z,V(2.0),concat(lit319,e->slot(0,0)));set(z,V(3.0),concat(lit320,e->slot(0,0)));set(z,V(4.0),concat(lit321,e->slot(0,0)));return z;})()}));e->slot(0,8)=std::move(t153);}
{V t154=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit322,e->slot(0,0)));set(z,V(2.0),concat(lit323,e->slot(0,0)));set(z,V(3.0),concat(lit324,e->slot(0,0)));set(z,V(4.0),concat(lit325,e->slot(0,0)));return z;})()}));e->slot(0,9)=std::move(t154);}
if(truth(([&](){V t155=ne(e->slot(0,8),V());return !truth(t155)?ne(e->slot(0,9),V()):t155;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit133)};V t156=V(true);refs[0].put(std::move(t156));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit195)};V t157=first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit196)};V t158=first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0)}));refs[0].put(std::move(t158));}
if(truth(ge(e->slot(0,0),V(2.0)))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t159=first(call(e->slot(2,13),Args{([&](){V z=table();set(z,V(1.0),lit326);set(z,V(2.0),lit327);set(z,V(3.0),lit328);set(z,V(4.0),lit329);return z;})()}));e->slot(0,0)=std::move(t159);}
{V t160=first(call(e->slot(2,13),Args{([&](){V z=table();set(z,V(1.0),lit330);set(z,V(2.0),lit331);return z;})()}));e->slot(0,1)=std::move(t160);}
{V t161=first(call(e->slot(2,13),Args{([&](){V z=table();set(z,V(1.0),lit332);set(z,V(2.0),lit333);set(z,V(3.0),lit334);return z;})()}));e->slot(0,2)=std::move(t161);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit114),lit134)};V t162=V(true);refs[0].put(std::move(t162));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit114),lit135)};V t163=V(true);refs[0].put(std::move(t163));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit197)};V t164=first(call(e->slot(2,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit198)};V t165=first(call(e->slot(2,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit199)};V t166=first(call(e->slot(2,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t166));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit197)};V t167=V(0.0);refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit198)};V t168=V(0.0);refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit199)};V t169=V(0.0);refs[0].put(std::move(t169));}
}
{V t170=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit335,e->slot(0,0)));set(z,V(2.0),concat(lit336,e->slot(0,0)));set(z,V(3.0),concat(lit337,e->slot(0,0)));set(z,V(4.0),concat(lit338,e->slot(0,0)));return z;})()}));e->slot(0,10)=std::move(t170);}
{V t171=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit337,e->slot(0,0)));set(z,V(2.0),concat(lit339,e->slot(0,0)));set(z,V(3.0),concat(lit340,e->slot(0,0)));return z;})()}));e->slot(0,11)=std::move(t171);}
{V t172=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit341,e->slot(0,0)));set(z,V(2.0),concat(lit342,e->slot(0,0)));set(z,V(3.0),concat(lit343,e->slot(0,0)));set(z,V(4.0),concat(lit344,e->slot(0,0)));return z;})()}));e->slot(0,12)=std::move(t172);}
if(truth(([&](){V t173=([&](){V t174=ne(e->slot(0,10),V());return !truth(t174)?ne(e->slot(0,11),V()):t174;})();return !truth(t173)?ne(e->slot(0,12),V()):t173;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit138)};V t175=V(true);refs[0].put(std::move(t175));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit200)};V t176=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit201)};V t177=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit202)};V t178=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t178));}
{V t179=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),lit345);set(z,V(2.0),lit346);set(z,V(3.0),lit347);set(z,V(4.0),lit348);return z;})()}));e->slot(0,13)=std::move(t179);}
if(truth(ne(e->slot(0,13),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit139)};V t180=V(true);refs[0].put(std::move(t180));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit203)};V t181=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,13),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t181));}
{V t182=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit349,e->slot(0,0)));set(z,V(2.0),concat(lit350,e->slot(0,0)));return z;})()}));e->slot(0,14)=std::move(t182);}
{V t183=first(call(e->slot(1,13),Args{([&](){V z=table();set(z,V(1.0),concat(lit351,e->slot(0,0)));set(z,V(2.0),concat(lit352,e->slot(0,0)));return z;})()}));e->slot(0,15)=std::move(t183);}
if(truth(([&](){V t184=ne(e->slot(0,14),V());return !truth(t184)?ne(e->slot(0,15),V()):t184;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit140)};V t185=V(true);refs[0].put(std::move(t185));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit204)};V t186=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit205)};V t187=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,15),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t187));}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t188=first(call(e->slot(1,5),Args{divv(get(e->slot(0,0),lit146),first(call(get(e->get("math"),lit232),Args{get(get(e->slot(1,1),lit16),lit21),V(0.001)}))),V(0.0),V(2.0)}));e->slot(0,1)=std::move(t188);}
{V t189=first(call(e->slot(1,5),Args{divv(get(e->slot(0,0),lit147),first(call(get(e->get("math"),lit232),Args{get(get(e->slot(1,1),lit16),lit22),V(0.001)}))),V(0.0),V(2.0)}));e->slot(0,2)=std::move(t189);}
{V t190=first(call(e->slot(1,5),Args{first(call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit175),get(e->slot(0,0),lit193)})),V(0.0),V(2.5)}));e->slot(0,3)=std::move(t190);}
return call(e->slot(1,5),Args{add(add(mul(e->slot(0,1),get(get(e->slot(1,1),lit16),lit37)),mul(e->slot(0,2),get(get(e->slot(1,1),lit16),lit38))),mul(e->slot(0,3),get(get(e->slot(1,1),lit16),lit39))),V(0.0),V(1.0)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,18);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t191=get(e->slot(1,1),lit16);e->slot(0,2)=std::move(t191);}
{V t192=first(call(e->slot(1,5),Args{divv(get(e->slot(0,0),lit150),first(call(get(e->get("math"),lit232),Args{get(e->slot(0,2),lit17),V(1.0)}))),V(0.0),V(2.5)}));e->slot(0,3)=std::move(t192);}
{V t193=first(call(e->slot(1,7),Args{get(e->slot(0,2),lit19),get(e->slot(0,2),lit20),get(e->slot(0,0),lit150)}));e->slot(0,4)=std::move(t193);}
{V t194=first(call(e->slot(1,27),Args{e->slot(0,0)}));e->slot(0,5)=std::move(t194);}
{V t195=first(call(get(e->get("math"),lit232),Args{([&](){V t196=get(e->slot(0,0),lit186);return !truth(t196)?V(0.0):t196;})(),([&](){V t197=get(e->slot(0,0),lit187);return !truth(t197)?V(0.0):t197;})()}));e->slot(0,6)=std::move(t195);}
{V t198=first(call(e->slot(1,5),Args{add(add(mul(get(e->slot(0,0),lit183),V(0.55)),mul(get(e->slot(0,0),lit188),V(0.35))),mul(get(e->slot(0,0),lit189),V(0.25))),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t198);}
{V t199=first(call(e->slot(1,5),Args{add(add(add(add(mul(get(e->slot(0,0),lit168),V(0.45)),mul(e->slot(0,6),V(0.28))),mul(e->slot(0,5),V(0.22))),mul(get(e->slot(0,0),lit192),V(0.18))),mul(e->slot(0,4),V(0.1))),V(0.0),get(e->slot(0,2),lit110)}));e->slot(0,8)=std::move(t199);}
{V t200=first(call(e->slot(1,5),Args{add(add(add(add(add(mul(get(e->slot(0,0),lit169),V(0.45)),mul(e->slot(0,7),get(e->slot(0,2),lit64))),mul(get(e->slot(0,0),lit184),V(0.16))),mul(get(e->slot(0,0),lit194),V(0.12))),mul(get(e->slot(0,0),lit200),V(0.1))),mul(first(call(get(e->get("math"),lit232),Args{sub(e->slot(0,3),V(1.0)),V(0.0)})),V(0.1))),V(0.0),get(e->slot(0,2),lit110)}));e->slot(0,9)=std::move(t200);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit166)};V t201=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit166),e->slot(0,8),get(e->slot(0,2),lit31),e->slot(0,1)}));refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit167)};V t202=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit167),e->slot(0,9),mul(get(e->slot(0,2),lit31),V(1.35)),e->slot(0,1)}));refs[0].put(std::move(t202));}
{V t203=add(add(add(get(e->slot(0,2),lit23),mul(get(e->slot(0,0),lit166),V(38.0))),mul(get(e->slot(0,0),lit167),V(52.0))),mul(get(e->slot(0,0),lit203),V(18.0)));e->slot(0,10)=std::move(t203);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit163)};V t204=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit163),e->slot(0,10),V(1.25),e->slot(0,1)}));refs[0].put(std::move(t204));}
{V t205=first(call(e->slot(1,7),joined(Args{get(e->slot(0,2),lit24),get(e->slot(0,2),lit27)},call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit162),get(e->slot(0,0),lit163)}))));e->slot(0,11)=std::move(t205);}
{V t206=first(call(e->slot(1,5),Args{add(add(add(add(mul(get(e->slot(0,0),lit166),V(0.35)),mul(get(e->slot(0,0),lit167),V(0.42))),mul(e->slot(0,11),V(0.34))),mul(get(e->slot(0,0),lit168),get(e->slot(0,2),lit65))),mul(get(e->slot(0,0),lit203),get(e->slot(0,2),lit61))),V(0.0),get(e->slot(0,2),lit108)}));e->slot(0,12)=std::move(t206);}
{V t207=mul(mul(mul(get(e->slot(0,2),lit66),e->slot(0,1)),add(V(0.65),mul(V(0.35),get(e->slot(0,0),lit180)))),sub(V(1.0),mul(e->slot(0,11),V(0.65))));e->slot(0,13)=std::move(t207);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit155)};V t208=first(call(e->slot(1,5),Args{sub(first(call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit155),e->slot(0,12)})),e->slot(0,13)),V(0.0),get(e->slot(0,2),lit108)}));refs[0].put(std::move(t208));}
{V t209=first(call(e->slot(1,5),Args{add(add(add(add(mul(get(e->slot(0,0),lit169),get(e->slot(0,2),lit67)),mul(first(call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit175),get(e->slot(0,0),lit193)})),V(0.1))),mul(first(call(get(e->get("math"),lit232),Args{sub(V(1.0),get(e->slot(0,0),lit174)),V(0.0)})),V(0.08))),mul(get(e->slot(0,0),lit183),V(0.08))),mul(get(e->slot(0,0),lit205),V(0.08))),V(0.0),get(e->slot(0,2),lit109)}));e->slot(0,14)=std::move(t209);}
{V t210=mul(mul(get(e->slot(0,2),lit68),e->slot(0,1)),add(V(0.5),mul(V(0.5),get(e->slot(0,0),lit170))));e->slot(0,15)=std::move(t210);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit156)};V t211=first(call(e->slot(1,5),Args{sub(first(call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit156),e->slot(0,14)})),e->slot(0,15)),V(0.0),get(e->slot(0,2),lit109)}));refs[0].put(std::move(t211));}
{V t212=first(call(e->slot(1,5),Args{add(add(add(add(mul(get(e->slot(0,0),lit155),V(0.36)),mul(get(e->slot(0,0),lit156),V(0.42))),mul(get(e->slot(0,0),lit169),V(0.28))),mul(get(e->slot(0,0),lit184),V(0.12))),mul(get(e->slot(0,0),lit202),V(0.08))),V(0.0),V(1.0)}));e->slot(0,16)=std::move(t212);}
{V t213=([&](){V t214=([&](){V t215=gt(e->slot(0,16),get(e->slot(0,0),lit157));return truth(t215)?mul(get(e->slot(0,2),lit34),V(1.4)):t215;})();return !truth(t214)?mul(get(e->slot(0,2),lit35),V(2.2)):t214;})();e->slot(0,17)=std::move(t213);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit157)};V t216=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit157),e->slot(0,16),e->slot(0,17),e->slot(0,1)}));refs[0].put(std::move(t216));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t217=get(e->slot(1,1),lit16);e->slot(0,1)=std::move(t217);}
{V t218=first(call(get(e->get("math"),lit232),Args{([&](){V t219=get(e->slot(0,0),lit162);return !truth(t219)?get(e->slot(0,1),lit23):t219;})(),([&](){V t220=get(e->slot(0,0),lit163);return !truth(t220)?get(e->slot(0,1),lit23):t220;})()}));e->slot(0,2)=std::move(t218);}
if(truth(lt(e->slot(0,2),get(e->slot(0,1),lit25)))){return Args{get(e->slot(0,1),lit83)};
}
if(truth(lt(e->slot(0,2),get(e->slot(0,1),lit26)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t221=first(call(e->slot(2,7),Args{get(e->slot(1,1),lit25),get(e->slot(1,1),lit26),e->slot(1,2)}));e->slot(0,0)=std::move(t221);}
return call(e->slot(2,8),Args{get(e->slot(1,1),lit84),get(e->slot(1,1),lit85),e->slot(0,0)});
}
if(truth(lt(e->slot(0,2),get(e->slot(0,1),lit27)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t222=first(call(e->slot(2,7),Args{get(e->slot(1,1),lit26),get(e->slot(1,1),lit27),e->slot(1,2)}));e->slot(0,0)=std::move(t222);}
return call(e->slot(2,8),Args{get(e->slot(1,1),lit85),get(e->slot(1,1),lit86),e->slot(0,0)});
}
return Args{get(e->slot(0,1),lit86)};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t223=get(e->slot(1,1),lit16);e->slot(0,1)=std::move(t223);}
{V t224=first(call(e->slot(1,5),Args{divv(get(e->slot(0,0),lit146),first(call(get(e->get("math"),lit232),Args{get(e->slot(0,1),lit21),V(0.001)}))),V(0.0),V(2.0)}));e->slot(0,2)=std::move(t224);}
{V t225=first(call(e->slot(1,5),Args{divv(get(e->slot(0,0),lit147),first(call(get(e->get("math"),lit232),Args{get(e->slot(0,1),lit22),V(0.001)}))),V(0.0),V(2.0)}));e->slot(0,3)=std::move(t225);}
{V t226=add(add(add(add(add(add(mul(e->slot(0,2),get(e->slot(0,1),lit76)),mul(e->slot(0,3),get(e->slot(0,1),lit77))),mul(get(e->slot(0,0),lit178),get(e->slot(0,1),lit78))),mul(get(e->slot(0,0),lit156),get(e->slot(0,1),lit80))),mul(get(e->slot(0,0),lit155),get(e->slot(0,1),lit79))),mul(get(e->slot(0,0),lit205),get(e->slot(0,1),lit81))),mul(get(e->slot(0,0),lit200),get(e->slot(0,1),lit82)));e->slot(0,4)=std::move(t226);}
{V t227=mul(first(call(get(e->get("math"),lit232),Args{sub(get(e->slot(0,0),lit180),V(0.65)),V(0.0)})),get(e->slot(0,1),lit73));e->slot(0,5)=std::move(t227);}
{V t228=mul(first(call(get(e->get("math"),lit232),Args{sub(get(e->slot(0,0),lit170),V(0.65)),V(0.0)})),get(e->slot(0,1),lit72));e->slot(0,6)=std::move(t228);}
{V t229=mul(first(call(get(e->get("math"),lit232),Args{sub(get(e->slot(0,0),lit181),V(0.65)),V(0.0)})),get(e->slot(0,1),lit74));e->slot(0,7)=std::move(t229);}
{V t230=mul(get(e->slot(0,0),lit185),get(e->slot(0,1),lit75));e->slot(0,8)=std::move(t230);}
{V t231=mul(first(call(get(e->get("math"),lit232),Args{sub(get(e->slot(0,0),lit191),V(1.0)),V(0.0)})),V(0.06));e->slot(0,9)=std::move(t231);}
return call(e->slot(1,5),Args{add(add(add(add(add(sub(V(1.0),e->slot(0,4)),e->slot(0,5)),e->slot(0,6)),e->slot(0,7)),e->slot(0,8)),e->slot(0,9)),V(0.0),V(1.2)});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t232=get(e->slot(1,1),lit16);e->slot(0,1)=std::move(t232);}
{V t233=divv(get(e->slot(0,0),lit150),first(call(get(e->get("math"),lit232),Args{get(e->slot(0,1),lit17),V(1.0)})));e->slot(0,2)=std::move(t233);}
{V t234=first(call(e->slot(1,27),Args{e->slot(0,0)}));e->slot(0,3)=std::move(t234);}
{V t235=mul(first(call(get(e->get("math"),lit232),Args{sub(e->slot(0,2),V(0.8)),V(0.0)})),get(e->slot(0,1),lit40));e->slot(0,4)=std::move(t235);}
{V t236=add(add(add(mul(first(call(get(e->get("math"),lit232),Args{sub(V(1.0),get(e->slot(0,0),lit170)),V(0.0)})),get(e->slot(0,1),lit41)),mul(first(call(get(e->get("math"),lit232),Args{sub(V(1.0),get(e->slot(0,0),lit174)),V(0.0)})),get(e->slot(0,1),lit42))),mul(first(call(get(e->get("math"),lit232),Args{sub(V(1.0),get(e->slot(0,0),lit176)),V(0.0)})),get(e->slot(0,1),lit43))),mul(get(e->slot(0,0),lit184),get(e->slot(0,1),lit44)));e->slot(0,5)=std::move(t236);}
{V t237=add(add(add(add(mul(get(e->slot(0,0),lit169),get(e->slot(0,1),lit45)),mul(get(e->slot(0,0),lit168),get(e->slot(0,1),lit46))),mul(get(e->slot(0,0),lit183),get(e->slot(0,1),lit47))),mul(get(e->slot(0,0),lit182),get(e->slot(0,1),lit48))),mul(first(call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit186),get(e->slot(0,0),lit187)})),get(e->slot(0,1),lit49)));e->slot(0,6)=std::move(t237);}
{V t238=add(add(add(add(add(add(add(mul(get(e->slot(0,0),lit190),get(e->slot(0,1),lit50)),mul(get(e->slot(0,0),lit194),get(e->slot(0,1),lit51))),mul(first(call(get(e->get("math"),lit212),Args{get(e->slot(0,0),lit195)})),get(e->slot(0,1),lit52))),mul(first(call(get(e->get("math"),lit212),Args{get(e->slot(0,0),lit196)})),get(e->slot(0,1),lit53))),mul(get(e->slot(0,0),lit192),get(e->slot(0,1),lit59))),mul(get(e->slot(0,0),lit204),get(e->slot(0,1),lit60))),mul(get(e->slot(0,0),lit200),get(e->slot(0,1),lit57))),mul(get(e->slot(0,0),lit202),get(e->slot(0,1),lit58)));e->slot(0,7)=std::move(t238);}
if(truth(([&](){V t239=([&](){V t240=ne(get(e->slot(0,0),lit197),V(0.0));return !truth(t240)?ne(get(e->slot(0,0),lit199),V(0.0)):t240;})();return !truth(t239)?ne(get(e->slot(0,0),lit198),V(0.0)):t239;})())){{std::array<Ref,1> refs{Ref(e,0,7)};V t241=add(add(add(e->slot(0,7),mul(first(call(get(e->get("math"),lit212),Args{get(e->slot(0,0),lit197)})),get(e->slot(0,1),lit54))),mul(first(call(get(e->get("math"),lit212),Args{get(e->slot(0,0),lit199)})),get(e->slot(0,1),lit56))),mul(get(e->slot(0,0),lit198),get(e->slot(0,1),lit55)));refs[0].put(std::move(t241));}
}
{V t242=add(add(add(mul(get(e->slot(0,0),lit155),V(0.28)),mul(get(e->slot(0,0),lit156),V(0.34))),mul(mul(get(e->slot(0,0),lit157),get(e->slot(0,1),lit70)),V(0.2))),mul(get(e->slot(0,0),lit203),get(e->slot(0,1),lit61)));e->slot(0,8)=std::move(t242);}
return call(e->slot(1,5),Args{add(add(add(add(add(e->slot(0,3),e->slot(0,4)),e->slot(0,5)),e->slot(0,6)),e->slot(0,7)),e->slot(0,8)),V(0.0),get(e->slot(0,1),lit107)});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t243=get(e->slot(1,1),lit16);e->slot(0,2)=std::move(t243);}
call(e->slot(1,28),Args{e->slot(0,0),e->slot(0,1)});
{V t244=first(call(e->slot(1,31),Args{e->slot(0,0)}));e->slot(0,3)=std::move(t244);}
{V t245=first(call(e->slot(1,29),Args{e->slot(0,0)}));e->slot(0,4)=std::move(t245);}
{V t246=first(call(e->slot(1,30),Args{e->slot(0,0)}));e->slot(0,5)=std::move(t246);}
{V t247=first(call(e->slot(1,5),Args{add(V(0.55),mul(V(0.45),get(e->slot(0,0),lit180))),V(0.25),V(1.15)}));e->slot(0,6)=std::move(t247);}
{V t248=first(call(e->slot(1,5),Args{add(V(0.35),mul(V(0.65),get(e->slot(0,0),lit170))),V(0.15),V(1.15)}));e->slot(0,7)=std::move(t248);}
{V t249=first(call(e->slot(1,5),Args{add(V(0.5),mul(V(0.5),get(e->slot(0,0),lit181))),V(0.2),V(1.15)}));e->slot(0,8)=std::move(t249);}
{V t250=mul(mul(mul(mul(e->slot(0,4),e->slot(0,5)),e->slot(0,6)),e->slot(0,7)),e->slot(0,8));e->slot(0,9)=std::move(t250);}
{V t251=mul(mul(e->slot(0,1),get(e->slot(0,2),lit71)),e->slot(0,9));e->slot(0,10)=std::move(t251);}
if(truth(gt(e->slot(0,3),get(e->slot(0,0),lit154)))){{std::array<Ref,1> refs{Ref(e->slot(0,0),lit154)};V t252=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit154),e->slot(0,3),get(e->slot(0,2),lit34),e->slot(0,1)}));refs[0].put(std::move(t252));}
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t253=first(call(get(e->get("math"),lit232),Args{e->slot(1,3),mul(get(e->slot(1,0),lit157),V(0.55))}));e->slot(0,0)=std::move(t253);}
{std::array<Ref,1> refs{Ref(e->slot(1,0),lit154)};V t254=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit154),e->slot(0,0),get(e->slot(1,2),lit35),e->slot(1,1)}));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e->slot(1,0),lit154)};V t255=first(call(e->slot(2,5),Args{sub(get(e->slot(1,0),lit154),e->slot(1,10)),V(0.0),get(e->slot(1,2),lit107)}));refs[0].put(std::move(t255));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit154)};V t256=first(call(e->slot(1,5),Args{get(e->slot(0,0),lit154),V(0.0),get(e->slot(0,2),lit107)}));refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit159)};V t257=e->slot(0,3);refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit160)};V t258=e->slot(0,10);refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit161)};V t259=e->slot(0,9);refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit164)};V t260=e->slot(0,4);refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit165)};V t261=e->slot(0,5);refs[0].put(std::move(t261));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t262=get(e->slot(1,1),lit16);e->slot(0,2)=std::move(t262);}
{V t263=mul(get(e->slot(0,0),lit154),get(e->slot(0,2),lit87));e->slot(0,3)=std::move(t263);}
{V t264=mul(get(e->slot(0,0),lit155),get(e->slot(0,2),lit88));e->slot(0,4)=std::move(t264);}
{V t265=mul(get(e->slot(0,0),lit156),get(e->slot(0,2),lit89));e->slot(0,5)=std::move(t265);}
{V t266=mul(first(call(get(e->get("math"),lit232),Args{sub(V(1.0),get(e->slot(0,0),lit174)),V(0.0)})),get(e->slot(0,2),lit90));e->slot(0,6)=std::move(t266);}
{V t267=mul(get(e->slot(0,0),lit192),get(e->slot(0,2),lit92));e->slot(0,7)=std::move(t267);}
{V t268=mul(first(call(get(e->get("math"),lit232),Args{get(e->slot(0,0),lit200),get(e->slot(0,0),lit202)})),get(e->slot(0,2),lit93));e->slot(0,8)=std::move(t268);}
{V t269=mul(get(e->slot(0,0),lit209),get(e->slot(0,2),lit91));e->slot(0,9)=std::move(t269);}
{V t270=first(call(e->slot(1,5),Args{add(V(0.72),mul(V(0.28),get(e->slot(0,0),lit181))),V(0.55),V(1.08)}));e->slot(0,10)=std::move(t270);}
{V t271=mul(add(sub(sub(sub(sub(sub(sub(V(1.0),e->slot(0,3)),e->slot(0,4)),e->slot(0,5)),e->slot(0,6)),e->slot(0,7)),e->slot(0,8)),e->slot(0,9)),e->slot(0,10));e->slot(0,11)=std::move(t271);}
{std::array<Ref,1> refs{Ref(e,0,11)};V t272=first(call(e->slot(1,5),Args{e->slot(0,11),get(e->slot(0,2),lit94),get(e->slot(0,2),lit95)}));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit158)};V t273=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit158),e->slot(0,11),get(e->slot(0,2),lit33),e->slot(0,1)}));refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit158)};V t274=first(call(e->slot(1,5),Args{get(e->slot(0,0),lit158),get(e->slot(0,2),lit94),get(e->slot(0,2),lit95)}));refs[0].put(std::move(t274));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t275=get(e->slot(1,1),lit16);e->slot(0,2)=std::move(t275);}
{V t276=divv(get(e->slot(0,0),lit150),first(call(get(e->get("math"),lit232),Args{get(e->slot(0,2),lit17),V(1.0)})));e->slot(0,3)=std::move(t276);}
{V t277=le(([&](){V t278=([&](){V t279=get(e->slot(0,0),lit171);return !truth(t279)?get(e->slot(0,0),lit170):t279;})();return !truth(t278)?V(1.0):t278;})(),get(e->slot(0,2),lit101));e->slot(0,4)=std::move(t277);}
{V t280=([&](){V t281=([&](){V t282=([&](){V t283=e->slot(0,4);return truth(t283)?ge(([&](){V t284=get(e->slot(0,0),lit170);return !truth(t284)?V(0.0):t284;})(),get(e->slot(0,2),lit102)):t283;})();return truth(t282)?ge(([&](){V t285=get(e->slot(0,0),lit172);return !truth(t285)?V(0.0):t285;})(),get(e->slot(0,2),lit103)):t282;})();return truth(t281)?ge(([&](){V t286=get(e->slot(0,0),lit154);return !truth(t286)?V(0.0):t286;})(),get(e->slot(0,2),lit104)):t281;})();e->slot(0,5)=std::move(t280);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit208)};V t287=([&](){V t288=([&](){V t289=e->slot(0,5);return truth(t289)?V(1.0):t289;})();return !truth(t288)?V(0.0):t288;})();refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit209)};V t290=first(call(e->slot(1,9),Args{get(e->slot(0,0),lit209),get(e->slot(0,0),lit208),get(e->slot(0,2),lit36),e->slot(0,1)}));refs[0].put(std::move(t290));}
if(truth(V(!truth(get(e->slot(0,0),lit144))))){call(e->slot(1,18),Args{e->slot(0,0),lit15});
return Args{};
}
if(truth(([&](){V t291=lt(e->slot(0,3),get(e->slot(0,2),lit96));return !truth(t291)?eq(get(e->slot(0,0),lit177),V(4.0)):t291;})())){call(e->slot(1,18),Args{e->slot(0,0),lit11});
return Args{};
}
if(truth(e->slot(0,5))){call(e->slot(1,18),Args{e->slot(0,0),lit12});
return Args{};
}
if(truth(([&](){V t292=([&](){V t293=eq(get(e->slot(0,0),lit177),V(3.0));return !truth(t293)?ge(get(e->slot(0,0),lit175),get(e->slot(0,2),lit97)):t293;})();return !truth(t292)?ge(get(e->slot(0,0),lit193),get(e->slot(0,2),lit97)):t292;})())){call(e->slot(1,18),Args{e->slot(0,0),lit10});
return Args{};
}
if(truth(([&](){V t294=([&](){V t295=eq(get(e->slot(0,0),lit177),V(2.0));return !truth(t295)?ge(get(e->slot(0,0),lit175),get(e->slot(0,2),lit98)):t295;})();return !truth(t294)?ge(get(e->slot(0,0),lit193),get(e->slot(0,2),lit98)):t294;})())){call(e->slot(1,18),Args{e->slot(0,0),lit8});
return Args{};
}
if(truth(ge(get(e->slot(0,0),lit155),get(e->slot(0,2),lit105)))){call(e->slot(1,18),Args{e->slot(0,0),lit13});
return Args{};
}
if(truth(ge(get(e->slot(0,0),lit157),get(e->slot(0,2),lit106)))){call(e->slot(1,18),Args{e->slot(0,0),lit14});
return Args{};
}
if(truth(([&](){V t296=ge(get(e->slot(0,0),lit154),get(e->slot(0,2),lit99));return truth(t296)?le(get(e->slot(0,0),lit159),add(get(e->slot(0,0),lit160),get(e->slot(0,2),lit100))):t296;})())){call(e->slot(1,18),Args{e->slot(0,0),lit9});
return Args{};
}
if(truth(gt(get(e->slot(0,0),lit159),add(get(e->slot(0,0),lit160),get(e->slot(0,2),lit100))))){call(e->slot(1,18),Args{e->slot(0,0),lit7});
return Args{};
}
call(e->slot(1,18),Args{e->slot(0,0),lit6});
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e,0,1)};V t297=([&](){V t298=e->slot(0,1);return !truth(t298)?V(0.016):t298;})();refs[0].put(std::move(t297));}
{V t299=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,2)=std::move(t299);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit144)};V t300=V(false);refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit146)};V t301=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit146),V(0.0),get(get(e->slot(1,1),lit16),lit28),e->slot(0,1)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit147)};V t302=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit147),V(0.0),get(get(e->slot(1,1),lit16),lit28),e->slot(0,1)}));refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit148)};V t303=V(0.0);refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit149)};V t304=V(0.0);refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit151)};V t305=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit151),get(get(e->slot(1,1),lit16),lit17),get(get(e->slot(1,1),lit16),lit29),e->slot(0,1)}));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit150)};V t306=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit150),get(get(e->slot(1,1),lit16),lit17),get(get(e->slot(1,1),lit16),lit29),e->slot(0,1)}));refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit152)};V t307=V(0.0);refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit154)};V t308=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit154),V(0.0),get(get(e->slot(1,1),lit16),lit35),e->slot(0,1)}));refs[0].put(std::move(t308));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit155)};V t309=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit155),V(0.0),mul(get(get(e->slot(1,1),lit16),lit35),V(2.0)),e->slot(0,1)}));refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit156)};V t310=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit156),V(0.0),mul(get(get(e->slot(1,1),lit16),lit35),V(4.0)),e->slot(0,1)}));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit157)};V t311=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit157),V(0.0),mul(get(get(e->slot(1,1),lit16),lit35),V(3.0)),e->slot(0,1)}));refs[0].put(std::move(t311));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit158)};V t312=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit158),V(1.0),get(get(e->slot(1,1),lit16),lit33),e->slot(0,1)}));refs[0].put(std::move(t312));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit159)};V t313=V(0.0);refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit160)};V t314=V(0.0);refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit161)};V t315=V(1.0);refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit162)};V t316=get(get(e->slot(1,1),lit16),lit23);refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit163)};V t317=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit163),get(get(e->slot(1,1),lit16),lit23),V(1.25),e->slot(0,1)}));refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit164)};V t318=V(1.0);refs[0].put(std::move(t318));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit165)};V t319=V(1.0);refs[0].put(std::move(t319));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit166)};V t320=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit166),V(0.0),get(get(e->slot(1,1),lit16),lit31),e->slot(0,1)}));refs[0].put(std::move(t320));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit167)};V t321=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit167),V(0.0),get(get(e->slot(1,1),lit16),lit31),e->slot(0,1)}));refs[0].put(std::move(t321));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit168)};V t322=V(0.0);refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit169)};V t323=V(0.0);refs[0].put(std::move(t323));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit170)};V t324=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit170),V(1.0),get(get(e->slot(1,1),lit16),lit30),e->slot(0,1)}));refs[0].put(std::move(t324));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit171)};V t325=get(e->slot(0,2),lit170);refs[0].put(std::move(t325));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit172)};V t326=V(0.0);refs[0].put(std::move(t326));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit173)};V t327=V(1.0);refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit174)};V t328=V(1.0);refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit175)};V t329=V(0.0);refs[0].put(std::move(t329));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit176)};V t330=V(1.0);refs[0].put(std::move(t330));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit177)};V t331=V(0.0);refs[0].put(std::move(t331));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit178)};V t332=V(0.0);refs[0].put(std::move(t332));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit179)};V t333=V(0.0);refs[0].put(std::move(t333));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit180)};V t334=V(1.0);refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit181)};V t335=V(1.0);refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit182)};V t336=V(0.0);refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit183)};V t337=V(0.0);refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit184)};V t338=V(0.0);refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit185)};V t339=V(0.0);refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit186)};V t340=V(0.0);refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit187)};V t341=V(0.0);refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit188)};V t342=V(0.0);refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit189)};V t343=V(0.0);refs[0].put(std::move(t343));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit190)};V t344=V(0.0);refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit191)};V t345=V(1.0);refs[0].put(std::move(t345));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit192)};V t346=V(0.0);refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit193)};V t347=V(0.0);refs[0].put(std::move(t347));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit194)};V t348=V(0.0);refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit195)};V t349=V(0.0);refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit196)};V t350=V(0.0);refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit197)};V t351=V(0.0);refs[0].put(std::move(t351));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit198)};V t352=V(0.0);refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit199)};V t353=V(0.0);refs[0].put(std::move(t353));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit200)};V t354=V(0.0);refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit201)};V t355=V(0.0);refs[0].put(std::move(t355));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit202)};V t356=V(0.0);refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit203)};V t357=V(0.0);refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit204)};V t358=V(0.0);refs[0].put(std::move(t358));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit205)};V t359=V(0.0);refs[0].put(std::move(t359));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit208)};V t360=V(0.0);refs[0].put(std::move(t360));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit209)};V t361=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit209),V(0.0),get(get(e->slot(1,1),lit16),lit36),e->slot(0,1)}));refs[0].put(std::move(t361));}
call(e->slot(1,18),Args{e->slot(0,2),lit5});
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,10),Args{concat(lit353,e->slot(0,0)),([&](){V t362=get(e->slot(0,1),lit154);return !truth(t362)?V(0.0):t362;})()});
call(e->slot(1,10),Args{concat(lit354,e->slot(0,0)),([&](){V t363=get(e->slot(0,1),lit154);return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,10),Args{concat(lit355,e->slot(0,0)),([&](){V t364=get(e->slot(0,1),lit154);return !truth(t364)?V(0.0):t364;})()});
call(e->slot(1,10),Args{concat(lit356,e->slot(0,0)),([&](){V t365=get(e->slot(0,1),lit154);return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,10),Args{concat(lit357,e->slot(0,0)),([&](){V t366=get(e->slot(0,1),lit158);return !truth(t366)?V(1.0):t366;})()});
call(e->slot(1,10),Args{concat(lit358,e->slot(0,0)),([&](){V t367=get(e->slot(0,1),lit158);return !truth(t367)?V(1.0):t367;})()});
call(e->slot(1,10),Args{concat(lit359,e->slot(0,0)),([&](){V t368=get(e->slot(0,1),lit158);return !truth(t368)?V(1.0):t368;})()});
call(e->slot(1,10),Args{concat(lit360,e->slot(0,0)),([&](){V t369=get(e->slot(0,1),lit206);return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,10),Args{concat(lit361,e->slot(0,0)),([&](){V t370=get(e->slot(0,1),lit207);return !truth(t370)?lit5:t370;})()});
call(e->slot(1,10),Args{concat(lit362,e->slot(0,0)),([&](){V t371=get(e->slot(0,1),lit206);return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,10),Args{concat(lit363,e->slot(0,0)),([&](){V t372=get(e->slot(0,1),lit207);return !truth(t372)?lit5:t372;})()});
call(e->slot(1,10),Args{concat(lit364,e->slot(0,0)),([&](){V t373=get(e->slot(0,1),lit208);return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,10),Args{concat(lit365,e->slot(0,0)),([&](){V t374=get(e->slot(0,1),lit155);return !truth(t374)?V(0.0):t374;})()});
call(e->slot(1,10),Args{concat(lit366,e->slot(0,0)),([&](){V t375=get(e->slot(0,1),lit156);return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,10),Args{concat(lit367,e->slot(0,0)),([&](){V t376=get(e->slot(0,1),lit157);return !truth(t376)?V(0.0):t376;})()});
call(e->slot(1,10),Args{concat(lit368,e->slot(0,0)),([&](){V t377=get(e->slot(0,1),lit166);return !truth(t377)?V(0.0):t377;})()});
call(e->slot(1,10),Args{concat(lit369,e->slot(0,0)),([&](){V t378=get(e->slot(0,1),lit167);return !truth(t378)?V(0.0):t378;})()});
call(e->slot(1,10),Args{concat(lit370,e->slot(0,0)),([&](){V t379=get(e->slot(0,1),lit163);return !truth(t379)?get(get(e->slot(1,1),lit16),lit23):t379;})()});
call(e->slot(1,10),Args{concat(lit371,e->slot(0,0)),([&](){V t380=get(e->slot(0,1),lit161);return !truth(t380)?V(1.0):t380;})()});
call(e->slot(1,10),Args{concat(lit372,e->slot(0,0)),([&](){V t381=get(e->slot(0,1),lit209);return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,10),Args{concat(lit373,e->slot(0,0)),([&](){V t382=get(e->slot(0,1),lit155);return !truth(t382)?V(0.0):t382;})()});
call(e->slot(1,10),Args{concat(lit374,e->slot(0,0)),([&](){V t383=get(e->slot(0,1),lit156);return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,10),Args{concat(lit375,e->slot(0,0)),([&](){V t384=get(e->slot(0,1),lit157);return !truth(t384)?V(0.0):t384;})()});
call(e->slot(1,10),joined(Args{concat(lit376,e->slot(0,0))},call(get(e->get("math"),lit232),Args{([&](){V t385=get(e->slot(0,1),lit166);return !truth(t385)?V(0.0):t385;})(),([&](){V t386=get(e->slot(0,1),lit167);return !truth(t386)?V(0.0):t386;})()})));
call(e->slot(1,10),Args{concat(lit377,e->slot(0,0)),([&](){V t387=get(e->slot(0,1),lit161);return !truth(t387)?V(1.0):t387;})()});
call(e->slot(1,10),Args{concat(lit378,e->slot(0,0)),([&](){V t388=get(e->slot(0,1),lit154);return !truth(t388)?V(0.0):t388;})()});
call(e->slot(1,10),Args{concat(lit379,e->slot(0,0)),([&](){V t389=get(e->slot(0,1),lit158);return !truth(t389)?V(1.0):t389;})()});
call(e->slot(1,10),Args{concat(lit380,e->slot(0,0)),([&](){V t390=get(e->slot(0,1),lit206);return !truth(t390)?V(0.0):t390;})()});
call(e->slot(1,10),Args{concat(lit381,e->slot(0,0)),([&](){V t391=get(e->slot(0,1),lit155);return !truth(t391)?V(0.0):t391;})()});
call(e->slot(1,10),Args{concat(lit382,e->slot(0,0)),([&](){V t392=get(e->slot(0,1),lit156);return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,10),Args{concat(lit383,e->slot(0,0)),([&](){V t393=get(e->slot(0,1),lit157);return !truth(t393)?V(0.0):t393;})()});
call(e->slot(1,10),Args{concat(lit384,e->slot(0,0)),([&](){V t394=get(e->slot(0,1),lit161);return !truth(t394)?V(1.0):t394;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit114),lit142))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit385,e->slot(0,0)),([&](){V t395=get(e->slot(0,1),lit159);return !truth(t395)?V(0.0):t395;})()});
call(e->slot(1,10),Args{concat(lit386,e->slot(0,0)),([&](){V t396=get(e->slot(0,1),lit160);return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,10),Args{concat(lit387,e->slot(0,0)),([&](){V t397=get(e->slot(0,1),lit146);return !truth(t397)?V(0.0):t397;})()});
call(e->slot(1,10),Args{concat(lit388,e->slot(0,0)),([&](){V t398=get(e->slot(0,1),lit147);return !truth(t398)?V(0.0):t398;})()});
call(e->slot(1,10),Args{concat(lit389,e->slot(0,0)),([&](){V t399=get(e->slot(0,1),lit150);return !truth(t399)?V(0.0):t399;})()});
call(e->slot(1,10),Args{concat(lit390,e->slot(0,0)),([&](){V t400=get(e->slot(0,1),lit152);return !truth(t400)?V(0.0):t400;})()});
call(e->slot(1,10),Args{concat(lit238,e->slot(0,0)),([&](){V t401=get(e->slot(0,1),lit162);return !truth(t401)?get(get(e->slot(1,1),lit16),lit23):t401;})()});
call(e->slot(1,10),Args{concat(lit391,e->slot(0,0)),([&](){V t402=([&](){V t403=get(e->slot(0,1),lit144);return truth(t403)?V(1.0):t403;})();return !truth(t402)?V(0.0):t402;})()});
call(e->slot(1,10),Args{concat(lit392,e->slot(0,0)),([&](){V t404=get(e->slot(0,1),lit178);return !truth(t404)?V(0.0):t404;})()});
call(e->slot(1,10),Args{concat(lit393,e->slot(0,0)),([&](){V t405=get(e->slot(0,1),lit170);return !truth(t405)?V(1.0):t405;})()});
call(e->slot(1,10),Args{concat(lit394,e->slot(0,0)),([&](){V t406=get(e->slot(0,1),lit174);return !truth(t406)?V(1.0):t406;})()});
call(e->slot(1,10),Args{concat(lit395,e->slot(0,0)),([&](){V t407=get(e->slot(0,1),lit175);return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,10),Args{concat(lit396,e->slot(0,0)),([&](){V t408=get(e->slot(0,1),lit176);return !truth(t408)?V(1.0):t408;})()});
call(e->slot(1,10),Args{concat(lit397,e->slot(0,0)),([&](){V t409=get(e->slot(0,1),lit172);return !truth(t409)?V(0.0):t409;})()});
call(e->slot(1,10),Args{concat(lit398,e->slot(0,0)),([&](){V t410=get(e->slot(0,1),lit180);return !truth(t410)?V(1.0):t410;})()});
call(e->slot(1,10),Args{concat(lit399,e->slot(0,0)),([&](){V t411=get(e->slot(0,1),lit183);return !truth(t411)?V(0.0):t411;})()});
call(e->slot(1,10),Args{concat(lit400,e->slot(0,0)),([&](){V t412=get(e->slot(0,1),lit184);return !truth(t412)?V(0.0):t412;})()});
call(e->slot(1,10),Args{concat(lit401,e->slot(0,0)),([&](){V t413=get(e->slot(0,1),lit168);return !truth(t413)?V(0.0):t413;})()});
call(e->slot(1,10),Args{concat(lit402,e->slot(0,0)),([&](){V t414=get(e->slot(0,1),lit169);return !truth(t414)?V(0.0):t414;})()});
call(e->slot(1,10),Args{concat(lit403,e->slot(0,0)),([&](){V t415=get(e->slot(0,1),lit190);return !truth(t415)?V(0.0):t415;})()});
call(e->slot(1,10),Args{concat(lit404,e->slot(0,0)),([&](){V t416=get(e->slot(0,1),lit194);return !truth(t416)?V(0.0):t416;})()});
call(e->slot(1,10),Args{concat(lit405,e->slot(0,0)),([&](){V t417=get(e->slot(0,1),lit198);return !truth(t417)?V(0.0):t417;})()});
call(e->slot(1,10),Args{concat(lit406,e->slot(0,0)),([&](){V t418=get(e->slot(0,1),lit200);return !truth(t418)?V(0.0):t418;})()});
call(e->slot(1,10),Args{concat(lit407,e->slot(0,0)),([&](){V t419=get(e->slot(0,1),lit202);return !truth(t419)?V(0.0):t419;})()});
call(e->slot(1,10),Args{concat(lit408,e->slot(0,0)),([&](){V t420=get(e->slot(0,1),lit192);return !truth(t420)?V(0.0):t420;})()});
call(e->slot(1,10),Args{concat(lit409,e->slot(0,0)),([&](){V t421=get(e->slot(0,1),lit205);return !truth(t421)?V(0.0):t421;})()});
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit410,([&](){V t422=get(get(e->slot(1,1),lit114),lit115);return !truth(t422)?lit411:t422;})()});
call(e->slot(1,10),Args{lit412,([&](){V t423=get(get(e->slot(1,1),lit114),lit115);return !truth(t423)?lit411:t423;})()});
call(e->slot(1,10),Args{lit413,([&](){V t424=get(get(e->slot(1,1),lit114),lit116);return !truth(t424)?V(0.0):t424;})()});
call(e->slot(1,10),Args{lit414,([&](){V t425=([&](){V t426=get(get(e->slot(1,1),lit114),lit117);return truth(t426)?V(1.0):t426;})();return !truth(t425)?V(0.0):t425;})()});
call(e->slot(1,10),Args{lit415,([&](){V t427=get(get(e->slot(1,1),lit114),lit119);return !truth(t427)?V(0.0):t427;})()});
call(e->slot(1,10),Args{lit416,([&](){V t428=get(get(e->slot(1,1),lit114),lit120);return !truth(t428)?V(1.0):t428;})()});
call(e->slot(1,10),Args{lit417,([&](){V t429=get(get(e->slot(1,1),lit114),lit123);return !truth(t429)?V(0.0):t429;})()});
call(e->slot(1,10),Args{lit418,([&](){V t430=get(get(e->slot(1,1),lit114),lit124);return !truth(t430)?V(0.0):t430;})()});
call(e->slot(1,10),Args{lit348,([&](){V t431=get(get(e->slot(1,1),lit114),lit125);return !truth(t431)?V(0.0):t431;})()});
call(e->slot(1,10),Args{lit419,([&](){V t432=get(get(e->slot(1,1),lit114),lit115);return !truth(t432)?lit411:t432;})()});
call(e->slot(1,10),Args{lit420,([&](){V t433=get(get(e->slot(1,1),lit114),lit116);return !truth(t433)?V(0.0):t433;})()});
call(e->slot(1,10),Args{lit421,([&](){V t434=([&](){V t435=get(get(e->slot(1,1),lit114),lit118);return truth(t435)?V(1.0):t435;})();return !truth(t434)?V(0.0):t434;})()});
call(e->slot(1,10),Args{lit422,([&](){V t436=get(get(e->slot(1,1),lit114),lit119);return !truth(t436)?V(0.0):t436;})()});
call(e->slot(1,10),Args{lit423,([&](){V t437=get(get(e->slot(1,1),lit114),lit120);return !truth(t437)?V(1.0):t437;})()});
call(e->slot(1,10),Args{lit424,([&](){V t438=get(get(e->slot(1,1),lit114),lit126);return !truth(t438)?V(0.0):t438;})()});
call(e->slot(1,10),Args{lit425,([&](){V t439=get(get(e->slot(1,1),lit114),lit107);return !truth(t439)?V(0.0):t439;})()});
call(e->slot(1,10),Args{lit426,([&](){V t440=get(get(e->slot(1,1),lit114),lit94);return !truth(t440)?V(1.0):t440;})()});
call(e->slot(1,10),Args{lit427,([&](){V t441=get(get(e->slot(1,1),lit114),lit128);return !truth(t441)?V(0.0):t441;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit114),lit142))))){return Args{};
}
call(e->slot(1,10),Args{lit428,([&](){V t442=get(get(e->slot(1,1),lit114),lit121);return !truth(t442)?V(0.0):t442;})()});
call(e->slot(1,10),Args{lit429,([&](){V t443=get(get(e->slot(1,1),lit114),lit122);return !truth(t443)?V(0.0):t443;})()});
call(e->slot(1,10),Args{lit430,([&](){V t444=get(get(e->slot(1,1),lit114),lit127);return !truth(t444)?V(1.0):t444;})()});
call(e->slot(1,10),Args{lit431,([&](){V t445=([&](){V t446=get(get(e->slot(1,1),lit114),lit129);return truth(t446)?V(1.0):t446;})();return !truth(t445)?V(0.0):t445;})()});
call(e->slot(1,10),Args{lit432,([&](){V t447=([&](){V t448=get(get(e->slot(1,1),lit114),lit130);return truth(t448)?V(1.0):t448;})();return !truth(t447)?V(0.0):t447;})()});
call(e->slot(1,10),Args{lit433,([&](){V t449=([&](){V t450=get(get(e->slot(1,1),lit114),lit131);return truth(t450)?V(1.0):t450;})();return !truth(t449)?V(0.0):t449;})()});
call(e->slot(1,10),Args{lit434,([&](){V t451=([&](){V t452=get(get(e->slot(1,1),lit114),lit132);return truth(t452)?V(1.0):t452;})();return !truth(t451)?V(0.0):t451;})()});
call(e->slot(1,10),Args{lit435,([&](){V t453=([&](){V t454=get(get(e->slot(1,1),lit114),lit133);return truth(t454)?V(1.0):t454;})();return !truth(t453)?V(0.0):t453;})()});
call(e->slot(1,10),Args{lit436,([&](){V t455=([&](){V t456=get(get(e->slot(1,1),lit114),lit134);return truth(t456)?V(1.0):t456;})();return !truth(t455)?V(0.0):t455;})()});
call(e->slot(1,10),Args{lit437,([&](){V t457=([&](){V t458=get(get(e->slot(1,1),lit114),lit135);return truth(t458)?V(1.0):t458;})();return !truth(t457)?V(0.0):t457;})()});
call(e->slot(1,10),Args{lit438,([&](){V t459=([&](){V t460=get(get(e->slot(1,1),lit114),lit136);return truth(t460)?V(1.0):t460;})();return !truth(t459)?V(0.0):t459;})()});
call(e->slot(1,10),Args{lit439,([&](){V t461=([&](){V t462=get(get(e->slot(1,1),lit114),lit137);return truth(t462)?V(1.0):t462;})();return !truth(t461)?V(0.0):t461;})()});
call(e->slot(1,10),Args{lit440,([&](){V t463=([&](){V t464=get(get(e->slot(1,1),lit114),lit138);return truth(t464)?V(1.0):t464;})();return !truth(t463)?V(0.0):t463;})()});
call(e->slot(1,10),Args{lit441,([&](){V t465=([&](){V t466=get(get(e->slot(1,1),lit114),lit139);return truth(t466)?V(1.0):t466;})();return !truth(t465)?V(0.0):t465;})()});
call(e->slot(1,10),Args{lit442,([&](){V t467=([&](){V t468=get(get(e->slot(1,1),lit114),lit140);return truth(t468)?V(1.0):t468;})();return !truth(t467)?V(0.0):t467;})()});
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t469=num(V(0.0)),t470=num(V(3.0)),t471=num(V(1.0));for(double t472=t469;(t471>0?t472<=t470:t472>=t470);t472+=t471){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t472);call(e->slot(2,36),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit114),lit143),e->slot(0,0))});
}}
call(e->slot(1,37),Args{});
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit129)};V t473=V(false);refs[0].put(std::move(t473));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit130)};V t474=V(false);refs[0].put(std::move(t474));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit131)};V t475=V(false);refs[0].put(std::move(t475));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit132)};V t476=V(false);refs[0].put(std::move(t476));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit133)};V t477=V(false);refs[0].put(std::move(t477));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit134)};V t478=V(false);refs[0].put(std::move(t478));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit135)};V t479=V(false);refs[0].put(std::move(t479));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit136)};V t480=V(false);refs[0].put(std::move(t480));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit137)};V t481=V(false);refs[0].put(std::move(t481));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit138)};V t482=V(false);refs[0].put(std::move(t482));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit139)};V t483=V(false);refs[0].put(std::move(t483));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit140)};V t484=V(false);refs[0].put(std::move(t484));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t485=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,4)=std::move(t485);}
if(truth(V(!truth(first(call(e->slot(1,23),Args{e->slot(0,0),e->slot(0,1)})))))){call(e->slot(1,35),Args{e->slot(0,0),e->slot(0,2)});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit144)};V t486=([&](){V t487=V(!truth(e->slot(0,3)));return !truth(t487)?ne(e->slot(0,1),V()):t487;})();refs[0].put(std::move(t486));}
{Args t488=call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,1)});e->slot(0,5)=arg(t488,0);e->slot(0,6)=arg(t488,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit148)};V t489=e->slot(0,5);refs[0].put(std::move(t489));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit149)};V t490=e->slot(0,6);refs[0].put(std::move(t490));}
{V t491=first(call(get(e->get("math"),lit212),call(e->slot(1,20),Args{e->slot(0,1),e->slot(0,0)})));e->slot(0,7)=std::move(t491);}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit151)};V t492=e->slot(0,7);refs[0].put(std::move(t492));}
{V t493=([&](){V t494=get(e->slot(0,4),lit150);return !truth(t494)?e->slot(0,7):t494;})();e->slot(0,8)=std::move(t493);}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit146)};V t495=first(call(e->slot(1,9),Args{get(e->slot(0,4),lit146),e->slot(0,5),get(get(e->slot(1,1),lit16),lit28),e->slot(0,2)}));refs[0].put(std::move(t495));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit147)};V t496=first(call(e->slot(1,9),Args{get(e->slot(0,4),lit147),e->slot(0,6),get(get(e->slot(1,1),lit16),lit28),e->slot(0,2)}));refs[0].put(std::move(t496));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit150)};V t497=first(call(e->slot(1,9),Args{get(e->slot(0,4),lit150),e->slot(0,7),get(get(e->slot(1,1),lit16),lit29),e->slot(0,2)}));refs[0].put(std::move(t497));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit152)};V t498=divv(sub(get(e->slot(0,4),lit150),e->slot(0,8)),first(call(get(e->get("math"),lit232),Args{e->slot(0,2),V(0.001)})));refs[0].put(std::move(t498));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit153)};V t499=e->slot(0,8);refs[0].put(std::move(t499));}
{V t500=([&](){V t501=get(e->slot(0,4),lit170);return !truth(t501)?V(1.0):t501;})();e->slot(0,9)=std::move(t500);}
{V t502=first(call(e->slot(1,26),Args{e->slot(0,0),e->slot(0,4)}));e->slot(0,10)=std::move(t502);}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit170)};V t503=first(call(e->slot(1,9),Args{e->slot(0,9),e->slot(0,10),get(get(e->slot(1,1),lit16),lit30),e->slot(0,2)}));refs[0].put(std::move(t503));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit172)};V t504=divv(sub(get(e->slot(0,4),lit170),e->slot(0,9)),first(call(get(e->get("math"),lit232),Args{e->slot(0,2),V(0.001)})));refs[0].put(std::move(t504));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit171)};V t505=e->slot(0,9);refs[0].put(std::move(t505));}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit162)};V t506=first(call(e->slot(1,21),Args{e->slot(0,0)}));refs[0].put(std::move(t506));}
call(e->slot(1,32),Args{e->slot(0,4),e->slot(0,2)});
call(e->slot(1,33),Args{e->slot(0,4),e->slot(0,2)});
call(e->slot(1,34),Args{e->slot(0,4),e->slot(0,2)});
return Args{};});
Ref(e->slot(0,1),lit443).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit115)};V t507=lit5;refs[0].put(std::move(t507));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit118)};V t508=V(false);refs[0].put(std::move(t508));}
call(e->slot(1,38),Args{});
return Args{};}));
Ref(e->slot(0,1),lit444).put(native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit116)};V t509=add(([&](){V t510=get(get(e->slot(1,1),lit114),lit116);return !truth(t510)?V(0.0):t510;})(),V(1.0));refs[0].put(std::move(t509));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t511=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t511));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit115)};V t512=lit445;refs[0].put(std::move(t512));}
call(e->slot(1,38),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t513=first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit16),lit111),get(get(e->slot(1,1),lit16),lit112)}));refs[0].put(std::move(t513));}
call(e->slot(1,19),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t514=first(call(e->slot(1,15),Args{}));refs[0].put(std::move(t514));}
}
{V t515=first(call(e->slot(1,16),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t515);}
{V t516=eq(e->slot(0,3),V());e->slot(0,4)=std::move(t516);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit118)};V t517=e->slot(0,4);refs[0].put(std::move(t517));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit117)};V t518=ne(e->slot(0,3),V());refs[0].put(std::move(t518));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit115)};V t519=([&](){V t520=([&](){V t521=e->slot(0,4);return truth(t521)?lit446:t521;})();return !truth(t520)?lit447:t520;})();refs[0].put(std::move(t519));}
call(e->slot(1,39),Args{});
{V t522=V(0.0);e->slot(0,5)=std::move(t522);}
{V t523=V(0.0);e->slot(0,6)=std::move(t523);}
{V t524=V(0.0);e->slot(0,7)=std::move(t524);}
{V t525=V(0.0);e->slot(0,8)=std::move(t525);}
{V t526=V(0.0);e->slot(0,9)=std::move(t526);}
{V t527=V(0.0);e->slot(0,10)=std::move(t527);}
{V t528=V(0.0);e->slot(0,11)=std::move(t528);}
{V t529=V(0.0);e->slot(0,12)=std::move(t529);}
{V t530=V(0.0);e->slot(0,13)=std::move(t530);}
{V t531=V(0.0);e->slot(0,14)=std::move(t531);}
{V t532=V(999.0);e->slot(0,15)=std::move(t532);}
{V t533=V(0.0);e->slot(0,16)=std::move(t533);}
{double t534=num(V(0.0)),t535=num(V(3.0)),t536=num(V(1.0));for(double t537=t534;(t536>0?t537<=t535:t537>=t535);t537+=t536){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t537);{V t538=first(call(e->slot(2,17),Args{e->slot(1,3),e->slot(0,0)}));e->slot(0,1)=std::move(t538);}
call(e->slot(2,40),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0),e->slot(1,4)});
{V t539=get(get(get(e->slot(2,1),lit114),lit143),e->slot(0,0));e->slot(0,2)=std::move(t539);}
if(truth(get(e->slot(0,2),lit144))){{std::array<Ref,1> refs{Ref(e,1,16)};V t540=add(e->slot(1,16),V(1.0));refs[0].put(std::move(t540));}
}
{std::array<Ref,1> refs{Ref(e,1,5)};V t541=add(e->slot(1,5),([&](){V t542=get(e->slot(0,2),lit154);return !truth(t542)?V(0.0):t542;})());refs[0].put(std::move(t541));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t543=add(e->slot(1,6),([&](){V t544=get(e->slot(0,2),lit158);return !truth(t544)?V(1.0):t544;})());refs[0].put(std::move(t543));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t545=add(e->slot(1,7),([&](){V t546=get(e->slot(0,2),lit159);return !truth(t546)?V(0.0):t546;})());refs[0].put(std::move(t545));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t547=add(e->slot(1,8),([&](){V t548=get(e->slot(0,2),lit160);return !truth(t548)?V(0.0):t548;})());refs[0].put(std::move(t547));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t549=add(e->slot(1,9),([&](){V t550=get(e->slot(0,2),lit155);return !truth(t550)?V(0.0):t550;})());refs[0].put(std::move(t549));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t551=add(e->slot(1,10),([&](){V t552=get(e->slot(0,2),lit156);return !truth(t552)?V(0.0):t552;})());refs[0].put(std::move(t551));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t553=add(e->slot(1,11),first(call(get(e->get("math"),lit232),Args{([&](){V t554=get(e->slot(0,2),lit166);return !truth(t554)?V(0.0):t554;})(),([&](){V t555=get(e->slot(0,2),lit167);return !truth(t555)?V(0.0):t555;})()})));refs[0].put(std::move(t553));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t556=add(e->slot(1,12),([&](){V t557=get(e->slot(0,2),lit157);return !truth(t557)?V(0.0):t557;})());refs[0].put(std::move(t556));}
{std::array<Ref,1> refs{Ref(e,1,13)};V t558=add(e->slot(1,13),([&](){V t559=get(e->slot(0,2),lit161);return !truth(t559)?V(1.0):t559;})());refs[0].put(std::move(t558));}
{std::array<Ref,1> refs{Ref(e,1,14)};V t560=first(call(get(e->get("math"),lit232),Args{e->slot(1,14),([&](){V t561=get(e->slot(0,2),lit154);return !truth(t561)?V(0.0):t561;})()}));refs[0].put(std::move(t560));}
{std::array<Ref,1> refs{Ref(e,1,15)};V t562=first(call(get(e->get("math"),lit448),Args{e->slot(1,15),([&](){V t563=get(e->slot(0,2),lit158);return !truth(t563)?V(1.0):t563;})()}));refs[0].put(std::move(t562));}
call(e->slot(2,36),Args{e->slot(0,0),e->slot(0,2)});
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit119)};V t564=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t564));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit120)};V t565=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t565));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit121)};V t566=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t566));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit122)};V t567=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t567));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit123)};V t568=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t568));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit124)};V t569=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t569));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit125)};V t570=mul(e->slot(0,11),V(0.25));refs[0].put(std::move(t570));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit126)};V t571=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t571));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit127)};V t572=mul(e->slot(0,13),V(0.25));refs[0].put(std::move(t572));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit107)};V t573=e->slot(0,14);refs[0].put(std::move(t573));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit94)};V t574=([&](){V t575=([&](){V t576=eq(e->slot(0,15),V(999.0));return truth(t576)?V(1.0):t576;})();return !truth(t575)?e->slot(0,15):t575;})();refs[0].put(std::move(t574));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit114),lit128)};V t577=e->slot(0,16);refs[0].put(std::move(t577));}
call(e->slot(1,37),Args{});
return Args{};}));
Ref(e->slot(0,1),lit449).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t578=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t578);}
return Args{([&](){V t579=([&](){V t580=e->slot(0,1);return truth(t580)?get(e->slot(0,1),lit154):t580;})();return !truth(t579)?V(0.0):t579;})()};
return Args{};}));
Ref(e->slot(0,1),lit450).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t581=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t581);}
return Args{([&](){V t582=([&](){V t583=e->slot(0,1);return truth(t583)?get(e->slot(0,1),lit158):t583;})();return !truth(t582)?V(1.0):t582;})()};
return Args{};}));
Ref(e->slot(0,1),lit451).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t584=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t584);}
return Args{([&](){V t585=([&](){V t586=e->slot(0,1);return truth(t586)?get(e->slot(0,1),lit155):t586;})();return !truth(t585)?V(0.0):t585;})()};
return Args{};}));
Ref(e->slot(0,1),lit452).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t587=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t587);}
return Args{([&](){V t588=([&](){V t589=e->slot(0,1);return truth(t589)?get(e->slot(0,1),lit156):t589;})();return !truth(t588)?V(0.0):t588;})()};
return Args{};}));
Ref(e->slot(0,1),lit453).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t590=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t590);}
return Args{([&](){V t591=([&](){V t592=e->slot(0,1);return truth(t592)?get(e->slot(0,1),lit157):t592;})();return !truth(t591)?V(0.0):t591;})()};
return Args{};}));
Ref(e->slot(0,1),lit454).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t593=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t593);}
return Args{([&](){V t594=([&](){V t595=e->slot(0,1);return truth(t595)?get(e->slot(0,1),lit161):t595;})();return !truth(t594)?V(1.0):t594;})()};
return Args{};}));
Ref(e->slot(0,1),lit455).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t596=get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0));e->slot(0,1)=std::move(t596);}
return Args{([&](){V t597=([&](){V t598=e->slot(0,1);return truth(t598)?get(e->slot(0,1),lit207):t598;})();return !truth(t597)?lit411:t597;})()};
return Args{};}));
Ref(e->slot(0,1),lit456).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit114)};
}
return Args{get(get(get(e->slot(1,1),lit114),lit143),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit457).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t599=([&](){V t600=get(get(get(e->slot(1,1),lit114),lit143),([&](){V t601=e->slot(0,0);return !truth(t601)?V(0.0):t601;})());return !truth(t600)?get(get(get(e->slot(1,1),lit114),lit143),V(0.0)):t600;})();e->slot(0,1)=std::move(t599);}
return call(get(e->get("string"),lit458),Args{concat(lit459,concat(lit460,concat(lit461,concat(lit462,concat(lit463,concat(lit464,lit465)))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit114),lit115)})),([&](){V t602=get(get(e->slot(1,1),lit114),lit116);return !truth(t602)?V(0.0):t602;})(),([&](){V t603=([&](){V t604=get(get(e->slot(1,1),lit114),lit117);return truth(t604)?lit466:t604;})();return !truth(t603)?lit467:t603;})(),([&](){V t605=([&](){V t606=get(get(e->slot(1,1),lit114),lit118);return truth(t606)?lit468:t606;})();return !truth(t605)?lit469:t605;})(),first(call(e->get("tostring"),Args{([&](){V t607=get(e->slot(0,1),lit207);return !truth(t607)?lit5:t607;})()})),([&](){V t608=get(e->slot(0,1),lit154);return !truth(t608)?V(0.0):t608;})(),([&](){V t609=get(e->slot(0,1),lit158);return !truth(t609)?V(1.0):t609;})(),([&](){V t610=get(e->slot(0,1),lit157);return !truth(t610)?V(0.0):t610;})(),([&](){V t611=get(e->slot(0,1),lit159);return !truth(t611)?V(0.0):t611;})(),([&](){V t612=get(e->slot(0,1),lit160);return !truth(t612)?V(0.0):t612;})(),([&](){V t613=get(e->slot(0,1),lit161);return !truth(t613)?V(1.0):t613;})(),first(call(get(e->get("math"),lit232),Args{([&](){V t614=get(e->slot(0,1),lit166);return !truth(t614)?V(0.0):t614;})(),([&](){V t615=get(e->slot(0,1),lit167);return !truth(t615)?V(0.0):t615;})()})),([&](){V t616=get(e->slot(0,1),lit156);return !truth(t616)?V(0.0):t616;})(),([&](){V t617=get(e->slot(0,1),lit146);return !truth(t617)?V(0.0):t617;})(),([&](){V t618=get(e->slot(0,1),lit147);return !truth(t618)?V(0.0):t618;})(),([&](){V t619=get(e->slot(0,1),lit150);return !truth(t619)?V(0.0):t619;})(),([&](){V t620=get(e->slot(0,1),lit170);return !truth(t620)?V(1.0):t620;})(),([&](){V t621=get(e->slot(0,1),lit174);return !truth(t621)?V(1.0):t621;})(),([&](){V t622=get(e->slot(0,1),lit180);return !truth(t622)?V(1.0):t622;})(),([&](){V t623=get(e->slot(0,1),lit183);return !truth(t623)?V(0.0):t623;})(),([&](){V t624=get(e->slot(0,1),lit184);return !truth(t624)?V(0.0):t624;})(),([&](){V t625=get(e->slot(0,1),lit208);return !truth(t625)?V(0.0):t625;})(),([&](){V t626=get(e->slot(0,1),lit200);return !truth(t626)?V(0.0):t626;})(),([&](){V t627=get(e->slot(0,1),lit202);return !truth(t627)?V(0.0):t627;})(),([&](){V t628=get(e->slot(0,1),lit192);return !truth(t628)?V(0.0):t628;})(),([&](){V t629=get(e->slot(0,1),lit205);return !truth(t629)?V(0.0):t629;})(),([&](){V t630=([&](){V t631=get(get(e->slot(1,1),lit114),lit129);return truth(t631)?lit466:t631;})();return !truth(t630)?lit467:t630;})(),([&](){V t632=([&](){V t633=get(get(e->slot(1,1),lit114),lit130);return truth(t633)?lit466:t633;})();return !truth(t632)?lit467:t632;})(),([&](){V t634=([&](){V t635=get(get(e->slot(1,1),lit114),lit131);return truth(t635)?lit466:t635;})();return !truth(t634)?lit467:t634;})(),([&](){V t636=([&](){V t637=get(get(e->slot(1,1),lit114),lit132);return truth(t637)?lit466:t637;})();return !truth(t636)?lit467:t636;})(),([&](){V t638=([&](){V t639=get(get(e->slot(1,1),lit114),lit133);return truth(t639)?lit466:t639;})();return !truth(t638)?lit467:t638;})(),([&](){V t640=([&](){V t641=get(get(e->slot(1,1),lit114),lit134);return truth(t641)?lit466:t641;})();return !truth(t640)?lit467:t640;})(),([&](){V t642=([&](){V t643=get(get(e->slot(1,1),lit114),lit135);return truth(t643)?lit466:t643;})();return !truth(t642)?lit467:t642;})(),([&](){V t644=([&](){V t645=get(get(e->slot(1,1),lit114),lit137);return truth(t645)?lit466:t645;})();return !truth(t644)?lit467:t644;})(),([&](){V t646=([&](){V t647=get(get(e->slot(1,1),lit114),lit138);return truth(t647)?lit466:t647;})();return !truth(t646)?lit467:t646;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
