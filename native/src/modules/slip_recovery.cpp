// Generated native C++ from pinned slip_recovery.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("STABLE");
static const V lit6("SLIDING");
static const V lit7("SATURATED");
static const V lit8("EARLY_RECOVERY");
static const V lit9("RECOVERING");
static const V lit10("RECONTACT");
static const V lit11("SNAP_RISK");
static const V lit12("UNLOADED");
static const V lit13("HEAT_SOAK");
static const V lit14("DIRTY_RETURN");
static const V lit15("params");
static const V lit16("slipGood");
static const V lit17("slipRecoverStart");
static const V lit18("slipBad");
static const V lit19("slipSaturated");
static const V lit20("slipRatioScale");
static const V lit21("slipAngleScale");
static const V lit22("contactGood");
static const V lit23("contactBad");
static const V lit24("recontactQuality");
static const V lit25("recontactRate");
static const V lit26("trustGood");
static const V lit27("trustBad");
static const V lit28("loadReference");
static const V lit29("loadLow");
static const V lit30("loadReturnMin");
static const V lit31("slideBuildGain");
static const V lit32("saturationBuildGain");
static const V lit33("memoryBuildGain");
static const V lit34("carcassBuildGain");
static const V lit35("lowContactBuildGain");
static const V lit36("yawOversteerBuildGain");
static const V lit37("loadPathLossBuildGain");
static const V lit38("thermalBuildGain");
static const V lit39("abrasionBuildGain");
static const V lit40("historyBuildGain");
static const V lit41("heatSeedBuildGain");
static const V lit42("hysteresisBuildGain");
static const V lit43("bristleBuildGain");
static const V lit44("lowTrustBuildGain");
static const V lit45("slideDecayBase");
static const V lit46("slideDecayContactGain");
static const V lit47("slideDecayTrustGain");
static const V lit48("slideDecayGripReturnGain");
static const V lit49("slideDecayHeatLoss");
static const V lit50("slideDecayAbrasionLoss");
static const V lit51("slideDecayHistoryLoss");
static const V lit52("recoveryContactGain");
static const V lit53("recoveryTrustGain");
static const V lit54("recoverySlipDropGain");
static const V lit55("recoveryReturnForceGain");
static const V lit56("recoveryLoadGain");
static const V lit57("recoveryCarcassGain");
static const V lit58("recoveryYawGain");
static const V lit59("recoveryScalarGain");
static const V lit60("recoveryBiasGain");
static const V lit61("recoveryHeatLoss");
static const V lit62("recoveryAbrasionLoss");
static const V lit63("recoveryHistoryLoss");
static const V lit64("recoveryShockLoss");
static const V lit65("recoveryHysteresisLoss");
static const V lit66("recoveryDelayLoss");
static const V lit67("gripReturnBase");
static const V lit68("gripReturnRecoveryGain");
static const V lit69("gripReturnContactGain");
static const V lit70("gripReturnTrustGain");
static const V lit71("gripReturnMemoryLoss");
static const V lit72("gripReturnDelayLoss");
static const V lit73("gripReturnHeatLoss");
static const V lit74("gripReturnAbrasionLoss");
static const V lit75("gripReturnHistoryLoss");
static const V lit76("gripReturnShockLoss");
static const V lit77("gripReturnTireGripGain");
static const V lit78("snapContactGain");
static const V lit79("snapTrustGain");
static const V lit80("snapSlipDropGain");
static const V lit81("snapMemoryGain");
static const V lit82("snapReturnGain");
static const V lit83("snapRecoveryBiasGain");
static const V lit84("snapRecontactShockGain");
static const V lit85("snapYawGain");
static const V lit86("snapLoadPathGain");
static const V lit87("snapHysteresisGain");
static const V lit88("snapRearBias");
static const V lit89("snapFrontBias");
static const V lit90("biteContactGain");
static const V lit91("biteSlipDropGain");
static const V lit92("biteReturnGain");
static const V lit93("biteTrustGain");
static const V lit94("biteShockGain");
static const V lit95("roadShockRecoveryLoss");
static const V lit96("roadSurfaceSnapGain");
static const V lit97("roadPathLossGain");
static const V lit98("loadPathDeliveryGain");
static const V lit99("contactLossExtraBuildGain");
static const V lit100("tauSlip");
static const V lit101("tauContact");
static const V lit102("tauLoad");
static const V lit103("tauRecoveryRise");
static const V lit104("tauRecoveryFall");
static const V lit105("tauGripReturn");
static const V lit106("tauSnapRise");
static const V lit107("tauSnapFall");
static const V lit108("tauSlideMemory");
static const V lit109("tauRecontact");
static const V lit110("tauBite");
static const V lit111("maxSlideMemory");
static const V lit112("maxRecovery");
static const V lit113("maxSnapRisk");
static const V lit114("maxBite");
static const V lit115("minDt");
static const V lit116("maxDt");
static const V lit117("debugStoreInterval");
static const V lit118("state");
static const V lit119("status");
static const V lit120("INIT");
static const V lit121("updateCount");
static const V lit122("wheelsValid");
static const V lit123("avgRecovery");
static const V lit124("avgGripReturn");
static const V lit125("avgSnapRisk");
static const V lit126("avgSlideMemory");
static const V lit127("avgRecontact");
static const V lit128("avgBite");
static const V lit129("avgDirtyReturn");
static const V lit130("rearRecovery");
static const V lit131("rearSnapRisk");
static const V lit132("contactLinked");
static const V lit133("memoryLinked");
static const V lit134("carcassLinked");
static const V lit135("yawLinked");
static const V lit136("loadPathLinked");
static const V lit137("roadLinked");
static const V lit138("yawOversteer");
static const V lit139("yawUndersteer");
static const V lit140("yawRecovery");
static const V lit141("yawSpinRisk");
static const V lit142("debugStoreTimer");
static const V lit143("debugStoreNow");
static const V lit144("wheels");
static const V lit145("active");
static const V lit146("slip");
static const V lit147("rawSlip");
static const V lit148("prevSlip");
static const V lit149("slipRate");
static const V lit150("slipDrop");
static const V lit151("slipAngle");
static const V lit152("slipRatio");
static const V lit153("contactQuality");
static const V lit154("rawContactQuality");
static const V lit155("contactTrust");
static const V lit156("prevContactQuality");
static const V lit157("contactRate");
static const V lit158("contactRise");
static const V lit159("contactStatus");
static const V lit160("stability");
static const V lit161("contactLoss");
static const V lit162("load");
static const V lit163("loadFactor");
static const V lit164("tireMemory");
static const V lit165("tireGrip");
static const V lit166("tirePhaseId");
static const V lit167("tireRecontact");
static const V lit168("thermalMemory");
static const V lit169("abrasionMemory");
static const V lit170("historyMemory");
static const V lit171("microHeat");
static const V lit172("macroHeat");
static const V lit173("virtualTemp");
static const V lit174("memoryRecoveryScalar");
static const V lit175("memoryRecontactShock");
static const V lit176("carcassEnergy");
static const V lit177("carcassDelay");
static const V lit178("carcassReturn");
static const V lit179("carcassDeformation");
static const V lit180("carcassSupport");
static const V lit181("carcassGripGate");
static const V lit182("verticalNorm");
static const V lit183("carcassHysteresis");
static const V lit184("recoveryBias");
static const V lit185("bristleLat");
static const V lit186("bristleLong");
static const V lit187("loadPathEfficiency");
static const V lit188("loadPathLoss");
static const V lit189("loadPathDelay");
static const V lit190("loadPathContact");
static const V lit191("loadPathIntegrity");
static const V lit192("loadPathDelivery");
static const V lit193("roadImpact");
static const V lit194("roadShock");
static const V lit195("roadSurfaceLimit");
static const V lit196("roadPathLoss");
static const V lit197("roadModuleHint");
static const V lit198("slideIntensity");
static const V lit199("slideMemory");
static const V lit200("recoveryRate");
static const V lit201("gripReturn");
static const V lit202("snapRisk");
static const V lit203("recontactSharpness");
static const V lit204("bite");
static const V lit205("dirtyReturn");
static const V lit206("phaseId");
static const V lit207("phase");
static const V lit208("debug");
static const V lit209("huge");
static const V lit210("abs");
static const V lit211("max");
static const V lit212("safeField");
static const V lit213("safeLoadRaw");
static const V lit214("safeStore");
static const V lit215("getCar");
static const V lit216("function");
static const V lit217("ngp_tire_slip_angle_");
static const V lit218("ngp_slip_angle_");
static const V lit219("ngp_filtered_slip_angle_");
static const V lit220("ngp_memory_slip_angle_");
static const V lit221("ngp_contact_slip_angle_");
static const V lit222("ngp_hub_slipA_");
static const V lit223("ngp_tire_slip_ratio_");
static const V lit224("ngp_slip_ratio_");
static const V lit225("ngp_filtered_slip_ratio_");
static const V lit226("ngp_memory_slip_ratio_");
static const V lit227("ngp_contact_slip_ratio_");
static const V lit228("ngp_hub_slipR_");
static const V lit229("ngp_contact_combined_slip_");
static const V lit230("ngp_slip_recovery_slip_");
static const V lit231("sqrt");
static const V lit232("ngp_contact_load_");
static const V lit233("ngp_wheel_load_");
static const V lit234("ngp_load_path_load_");
static const V lit235("ngp_tire_state_load_");
static const V lit236("ngp_dlt_load_");
static const V lit237("loadK");
static const V lit238("ngp_contact_quality_");
static const V lit239("ngp_tire_contact_quality_");
static const V lit240("ngp_tcr_quality_");
static const V lit241("ngp_contact_raw_");
static const V lit242("ngp_contact_raw_quality_");
static const V lit243("ngp_contact_trust_");
static const V lit244("ngp_contact_grip_gate_");
static const V lit245("ngp_carcass_grip_gate_");
static const V lit246("ngp_recovery_trust_");
static const V lit247("ngp_contact_stability_score_");
static const V lit248("ngp_contact_status_");
static const V lit249("ngp_contact_loss_");
static const V lit250("min");
static const V lit251("ngp_tire_memory_");
static const V lit252("ngp_tyre_memory_");
static const V lit253("ngp_rubber_memory_");
static const V lit254("ngp_memory_");
static const V lit255("ngp_memory_grip_");
static const V lit256("ngp_tire_memory_grip_");
static const V lit257("ngp_tyre_memory_grip_");
static const V lit258("ngp_tire_memory_phase_id_");
static const V lit259("ngp_tyre_memory_phase_id_");
static const V lit260("ngp_tire_memory_recontact_");
static const V lit261("ngp_tyre_memory_recontact_");
static const V lit262("ngp_tire_memory_thermal_");
static const V lit263("ngp_tyre_memory_thermal_");
static const V lit264("ngp_memory_thermal_");
static const V lit265("ngp_tire_memory_abrasion_");
static const V lit266("ngp_tyre_memory_abrasion_");
static const V lit267("ngp_memory_abrasion_");
static const V lit268("ngp_tire_memory_history_");
static const V lit269("ngp_tyre_memory_history_");
static const V lit270("ngp_memory_history_");
static const V lit271("ngp_tire_memory_heat_");
static const V lit272("ngp_tyre_memory_heat_");
static const V lit273("ngp_memory_heat_");
static const V lit274("ngp_memory_micro_heat_");
static const V lit275("ngp_memory_macro_heat_");
static const V lit276("ngp_memory_virtual_temp_");
static const V lit277("ngp_tire_memory_recovery_scalar_");
static const V lit278("ngp_tyre_memory_recovery_scalar_");
static const V lit279("ngp_memory_recovery_scalar_");
static const V lit280("ngp_memory_recontact_shock_");
static const V lit281("ngp_tire_memory_recontact_shock_");
static const V lit282("ngp_tyre_memory_recontact_shock_");
static const V lit283("ngp_tire_sidewall_energy_");
static const V lit284("ngp_sidewall_energy_");
static const V lit285("ngp_tire_contact_delay_");
static const V lit286("ngp_contact_delay_");
static const V lit287("ngp_tire_return_force_");
static const V lit288("ngp_return_force_");
static const V lit289("ngp_tire_deformation_");
static const V lit290("ngp_carcass_deformation_");
static const V lit291("ngp_carcass_support_");
static const V lit292("ngp_contact_carcass_support_");
static const V lit293("ngp_carcass_vertical_norm_");
static const V lit294("ngp_contact_vertical_norm_");
static const V lit295("ngp_carcass_hysteresis_");
static const V lit296("ngp_contact_hysteresis_");
static const V lit297("ngp_carcass_recovery_bias_");
static const V lit298("ngp_contact_recovery_bias_");
static const V lit299("ngp_carcass_bristle_lat_");
static const V lit300("ngp_carcass_bristle_long_");
static const V lit301("ngp_load_path_efficiency_");
static const V lit302("ngp_lp_eff_");
static const V lit303("ngp_load_path_loss_");
static const V lit304("ngp_lp_loss_");
static const V lit305("ngp_load_path_delay_");
static const V lit306("ngp_lp_delay_");
static const V lit307("ngp_load_path_contact_");
static const V lit308("ngp_lp_contact_");
static const V lit309("ngp_load_path_integrity_");
static const V lit310("ngp_lp_integrity_");
static const V lit311("ngp_load_path_tire_delivery_");
static const V lit312("ngp_lp_tire_delivery_");
static const V lit313("ngp_road_impact_");
static const V lit314("ngp_rii_impact_");
static const V lit315("ngp_road_input_impact_");
static const V lit316("ngp_road_shock_");
static const V lit317("ngp_rii_shock_");
static const V lit318("ngp_road_surface_limit_");
static const V lit319("ngp_rii_surface_limit_");
static const V lit320("ngp_road_path_loss_");
static const V lit321("ngp_rii_path_loss_");
static const V lit322("ngp_road_module_hint_");
static const V lit323("ngp_rii_hint_");
static const V lit324("ngp_yaw_oversteer_energy");
static const V lit325("ngp_oversteer_energy");
static const V lit326("ngp_yaw_budget_oversteer");
static const V lit327("ngp_yaw_understeer_energy");
static const V lit328("ngp_understeer_energy");
static const V lit329("ngp_yaw_budget_understeer");
static const V lit330("ngp_yaw_recovery_phase");
static const V lit331("ngp_recovery_phase");
static const V lit332("ngp_yaw_budget_recovery");
static const V lit333("ngp_yaw_spin_risk");
static const V lit334("ngp_spin_risk");
static const V lit335("ngp_yaw_budget_spin_risk");
static const V lit336("UNKNOWN");
static const V lit337("ngp_slip_recovery_rate_");
static const V lit338("ngp_slip_grip_return_");
static const V lit339("ngp_slip_snap_risk_");
static const V lit340("ngp_slip_slide_memory_");
static const V lit341("ngp_slip_recontact_");
static const V lit342("ngp_slip_recovery_phase_id_");
static const V lit343("ngp_slip_recovery_phase_");
static const V lit344("ngp_recovery_rate_");
static const V lit345("ngp_grip_return_");
static const V lit346("ngp_snap_risk_");
static const V lit347("ngp_slide_memory_");
static const V lit348("ngp_recontact_sharpness_");
static const V lit349("ngp_slip_bite_");
static const V lit350("ngp_slip_dirty_return_");
static const V lit351("ngp_slip_contact_trust_");
static const V lit352("ngp_slip_thermal_memory_");
static const V lit353("ngp_slip_abrasion_memory_");
static const V lit354("ngp_slip_history_memory_");
static const V lit355("ngp_slip_recovery_scalar_");
static const V lit356("ngp_slip_recontact_shock_");
static const V lit357("ngp_recovery_bite_");
static const V lit358("ngp_dirty_return_");
static const V lit359("ngp_sr_rate_");
static const V lit360("ngp_sr_grip_");
static const V lit361("ngp_sr_snap_");
static const V lit362("ngp_sr_memory_");
static const V lit363("ngp_sr_recontact_");
static const V lit364("ngp_sr_bite_");
static const V lit365("ngp_sr_dirty_");
static const V lit366("ngp_slip_recovery_slip_rate_");
static const V lit367("ngp_slip_recovery_slip_drop_");
static const V lit368("ngp_slip_recovery_contact_");
static const V lit369("ngp_slip_recovery_contact_rate_");
static const V lit370("ngp_slip_recovery_load_");
static const V lit371("ngp_slip_recovery_carcass_return_");
static const V lit372("ngp_slip_recovery_carcass_delay_");
static const V lit373("ngp_slip_recovery_carcass_hysteresis_");
static const V lit374("ngp_slip_recovery_load_path_loss_");
static const V lit375("ngp_slip_recovery_grip_gate_");
static const V lit376("ngp_slip_recovery_recovery_bias_");
static const V lit377("ngp_slip_recovery_road_shock_");
static const V lit378("ngp_slip_recovery_road_surface_");
static const V lit379("ngp_slip_recovery_status");
static const V lit380("ngp_slip_recovery_update_count");
static const V lit381("ngp_slip_recovery_wheels_valid");
static const V lit382("ngp_slip_recovery_avg");
static const V lit383("ngp_slip_recovery_avg_grip_return");
static const V lit384("ngp_slip_recovery_avg_snap_risk");
static const V lit385("ngp_slip_recovery_avg_slide_memory");
static const V lit386("ngp_slip_recovery_avg_recontact");
static const V lit387("ngp_slip_recovery_avg_bite");
static const V lit388("ngp_slip_recovery_avg_dirty_return");
static const V lit389("ngp_recovery_avg");
static const V lit390("ngp_snap_risk_avg");
static const V lit391("ngp_slide_memory_avg");
static const V lit392("ngp_recovery_bite_avg");
static const V lit393("ngp_dirty_return_avg");
static const V lit394("ngp_sr_avg_recovery");
static const V lit395("ngp_sr_avg_grip");
static const V lit396("ngp_sr_avg_snap");
static const V lit397("ngp_sr_avg_memory");
static const V lit398("ngp_sr_rear_recovery");
static const V lit399("ngp_sr_rear_snap");
static const V lit400("ngp_sr_max_recovery");
static const V lit401("ngp_sr_max_snap");
static const V lit402("ngp_sr_max_memory");
static const V lit403("ngp_slip_recovery_contact_linked");
static const V lit404("ngp_slip_recovery_memory_linked");
static const V lit405("ngp_slip_recovery_carcass_linked");
static const V lit406("ngp_slip_recovery_yaw_linked");
static const V lit407("ngp_slip_recovery_load_path_linked");
static const V lit408("ngp_slip_recovery_road_linked");
static const V lit409("init");
static const V lit410("update");
static const V lit411("NO CAR");
static const V lit412("NO WHEELS");
static const V lit413("RUNNING");
static const V lit414("getRecovery");
static const V lit415("getGripReturn");
static const V lit416("getSnapRisk");
static const V lit417("getBite");
static const V lit418("getDirtyReturn");
static const V lit419("getSlideMemory");
static const V lit420("getRecontact");
static const V lit421("getPhase");
static const V lit422("getState");
static const V lit423("debugStr");
static const V lit424("format");
static const V lit425("Status %s / Count %.0f / Wheels %s\n");
static const V lit426("%s Rec %.3f GripRet %.3f Snap %.3f\n");
static const V lit427("SlideMem %.3f ReC %.3f Bite %.3f Dirty %.3f\n");
static const V lit428("Slip %.3f Drop %.3f Trust %.2f CQ %.2f Load %.0f\n");
static const V lit429("Heat %.2f Abr %.2f Hist %.2f Shock %.2f\n");
static const V lit430("Ret %.2f Delay %.2f Hyst %.2f Bias %.2f\n");
static const V lit431("Links CQ:%s TM:%s TC:%s YMB:%s LP:%s RII:%s");
static const V lit432("OK");
static const V lit433("NIL");
V load_slip_recovery(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(40);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,lit5,V(1.0));set(z,lit6,V(2.0));set(z,lit7,V(3.0));set(z,lit8,V(4.0));set(z,lit9,V(5.0));set(z,lit10,V(6.0));set(z,lit11,V(7.0));set(z,lit12,V(8.0));set(z,lit13,V(9.0));set(z,lit14,V(10.0));return z;})();e->slot(0,3)=std::move(t4);}
{V t5=([&](){V z=table();set(z,get(e->slot(0,3),lit5),lit5);set(z,get(e->slot(0,3),lit6),lit6);set(z,get(e->slot(0,3),lit7),lit7);set(z,get(e->slot(0,3),lit8),lit8);set(z,get(e->slot(0,3),lit9),lit9);set(z,get(e->slot(0,3),lit10),lit10);set(z,get(e->slot(0,3),lit11),lit11);set(z,get(e->slot(0,3),lit12),lit12);set(z,get(e->slot(0,3),lit13),lit13);set(z,get(e->slot(0,3),lit14),lit14);return z;})();e->slot(0,4)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit15)};V t6=([&](){V z=table();set(z,lit16,V(0.18));set(z,lit17,V(0.55));set(z,lit18,V(1.2));set(z,lit19,V(1.55));set(z,lit20,V(1.0));set(z,lit21,V(1.0));set(z,lit22,V(0.72));set(z,lit23,V(0.34));set(z,lit24,V(0.62));set(z,lit25,V(1.8));set(z,lit26,V(0.7));set(z,lit27,V(0.32));set(z,lit28,V(3200.0));set(z,lit29,V(250.0));set(z,lit30,V(900.0));set(z,lit31,V(1.22));set(z,lit32,V(0.58));set(z,lit33,V(0.4));set(z,lit34,V(0.3));set(z,lit35,V(0.5));set(z,lit36,V(0.3));set(z,lit37,V(0.25));set(z,lit38,V(0.28));set(z,lit39,V(0.24));set(z,lit40,V(0.34));set(z,lit41,V(0.18));set(z,lit42,V(0.22));set(z,lit43,V(0.16));set(z,lit44,V(0.32));set(z,lit45,V(0.34));set(z,lit46,V(0.32));set(z,lit47,V(0.2));set(z,lit48,V(0.16));set(z,lit49,V(0.22));set(z,lit50,V(0.18));set(z,lit51,V(0.2));set(z,lit52,V(0.48));set(z,lit53,V(0.36));set(z,lit54,V(0.55));set(z,lit55,V(0.42));set(z,lit56,V(0.2));set(z,lit57,V(0.18));set(z,lit58,V(0.16));set(z,lit59,V(0.46));set(z,lit60,V(0.22));set(z,lit61,V(0.32));set(z,lit62,V(0.26));set(z,lit63,V(0.28));set(z,lit64,V(0.35));set(z,lit65,V(0.18));set(z,lit66,V(0.18));set(z,lit67,V(0.2));set(z,lit68,V(0.45));set(z,lit69,V(0.2));set(z,lit70,V(0.18));set(z,lit71,V(0.3));set(z,lit72,V(0.16));set(z,lit73,V(0.22));set(z,lit74,V(0.18));set(z,lit75,V(0.2));set(z,lit76,V(0.2));set(z,lit77,V(0.3));set(z,lit78,V(0.5));set(z,lit79,V(0.34));set(z,lit80,V(0.76));set(z,lit81,V(0.46));set(z,lit82,V(0.55));set(z,lit83,V(0.42));set(z,lit84,V(0.62));set(z,lit85,V(0.42));set(z,lit86,V(0.22));set(z,lit87,V(0.18));set(z,lit88,V(1.25));set(z,lit89,V(0.72));set(z,lit90,V(0.4));set(z,lit91,V(0.36));set(z,lit92,V(0.42));set(z,lit93,V(0.28));set(z,lit94,V(0.34));set(z,lit95,V(0.12));set(z,lit96,V(0.18));set(z,lit97,V(0.12));set(z,lit98,V(0.12));set(z,lit99,V(0.16));set(z,lit100,V(0.05));set(z,lit101,V(0.075));set(z,lit102,V(0.12));set(z,lit103,V(0.06));set(z,lit104,V(0.15));set(z,lit105,V(0.11));set(z,lit106,V(0.05));set(z,lit107,V(0.17));set(z,lit108,V(0.24));set(z,lit109,V(0.085));set(z,lit110,V(0.07));set(z,lit111,V(1.0));set(z,lit112,V(1.0));set(z,lit113,V(1.0));set(z,lit114,V(1.0));set(z,lit115,V(5e-05));set(z,lit116,V(0.05));set(z,lit117,V(0.25));return z;})();refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t7=([&](){V z=table();set(z,lit119,lit120);set(z,lit121,V(0.0));set(z,lit122,V(false));set(z,lit123,V(0.0));set(z,lit124,V(1.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(0.0));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit111,V(0.0));set(z,lit130,V(0.0));set(z,lit131,V(0.0));set(z,lit132,V(false));set(z,lit133,V(false));set(z,lit134,V(false));set(z,lit135,V(false));set(z,lit136,V(false));set(z,lit137,V(false));set(z,lit138,V(0.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(999.0));set(z,lit143,V(true));set(z,lit144,([&](){V z=table();return z;})());return z;})();refs[0].put(std::move(t7));}
{double t8=num(V(0.0)),t9=num(V(3.0)),t10=num(V(1.0));for(double t11=t8;(t10>0?t11<=t9:t11>=t9);t11+=t10){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t11);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0))};V t12=([&](){V z=table();set(z,lit145,V(false));set(z,lit146,V(0.0));set(z,lit147,V(0.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(0.0));set(z,lit151,V(0.0));set(z,lit152,V(0.0));set(z,lit153,V(1.0));set(z,lit154,V(1.0));set(z,lit155,V(1.0));set(z,lit156,V(1.0));set(z,lit157,V(0.0));set(z,lit158,V(0.0));set(z,lit159,V(0.0));set(z,lit160,V(1.0));set(z,lit161,V(0.0));set(z,lit162,V(0.0));set(z,lit163,V(0.0));set(z,lit164,V(0.0));set(z,lit165,V(1.0));set(z,lit166,V(0.0));set(z,lit167,V(0.0));set(z,lit168,V(0.0));set(z,lit169,V(0.0));set(z,lit170,V(0.0));set(z,lit171,V(0.0));set(z,lit172,V(0.0));set(z,lit173,V(25.0));set(z,lit174,V(1.0));set(z,lit175,V(0.0));set(z,lit176,V(0.0));set(z,lit177,V(0.0));set(z,lit178,V(0.0));set(z,lit179,V(0.0));set(z,lit180,V(1.0));set(z,lit181,V(1.0));set(z,lit182,V(0.0));set(z,lit183,V(0.0));set(z,lit184,V(0.0));set(z,lit185,V(0.0));set(z,lit186,V(0.0));set(z,lit187,V(1.0));set(z,lit188,V(0.0));set(z,lit189,V(0.0));set(z,lit190,V(0.0));set(z,lit191,V(1.0));set(z,lit192,V(1.0));set(z,lit193,V(0.0));set(z,lit194,V(0.0));set(z,lit195,V(0.0));set(z,lit196,V(0.0));set(z,lit197,V(0.0));set(z,lit198,V(0.0));set(z,lit199,V(0.0));set(z,lit200,V(0.0));set(z,lit201,V(1.0));set(z,lit202,V(0.0));set(z,lit203,V(0.0));set(z,lit204,V(0.0));set(z,lit205,V(0.0));set(z,lit206,get(e->slot(1,3),lit5));set(z,lit207,lit5);return z;})();refs[0].put(std::move(t12));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),e->slot(0,0))};V t13=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));refs[0].put(std::move(t13));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit208)};V t14=get(e->slot(0,1),lit118);refs[0].put(std::move(t14));}
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t15=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t15);}
if(truth(([&](){V t16=([&](){V t17=([&](){V t18=eq(e->slot(0,2),V());return !truth(t18)?ne(e->slot(0,2),e->slot(0,2)):t18;})();return !truth(t17)?eq(e->slot(0,2),get(e->get("math"),lit209)):t17;})();return !truth(t16)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit209)))):t16;})())){return Args{([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,5),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t20));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit210),call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t21=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t22=first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t23=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t24=first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t24));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,6),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit211),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t25=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t26=first(call(e->slot(1,5),Args{e->slot(0,1),V(1.0)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t27=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t27));}
if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t28=([&](){V t29=ge(e->slot(0,2),e->slot(0,1));return truth(t29)?V(1.0):t29;})();return !truth(t28)?V(0.0):t28;})()};
}
{V t30=first(call(e->slot(1,6),Args{divv(sub(e->slot(0,2),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t30);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
{V t31=get(e->slot(0,0),lit212);e->slot(0,10)=std::move(t31);}
{V t32=get(e->slot(0,0),lit213);e->slot(0,11)=std::move(t32);}
{V t33=get(e->slot(0,0),lit214);e->slot(0,12)=std::move(t33);}
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t34=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t34);}
{double t35=num(V(1.0)),t36=num(length(e->slot(0,1))),t37=num(V(1.0));for(double t38=t35;(t37>0?t38<=t36:t38>=t36);t38+=t37){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t38);{V t39=first(call(e->slot(2,11),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t39);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,5),Args{e->slot(0,1),e->slot(1,0)})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit142)};V t40=add(([&](){V t41=get(get(e->slot(1,1),lit118),lit142);return !truth(t41)?V(0.0):t41;})(),([&](){V t42=e->slot(0,0);return !truth(t42)?V(0.0):t42;})());refs[0].put(std::move(t40));}
if(truth(ge(get(get(e->slot(1,1),lit118),lit142),get(get(e->slot(1,1),lit15),lit117)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit142)};V t43=V(0.0);refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit143)};V t44=V(true);refs[0].put(std::move(t44));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit143)};V t45=V(false);refs[0].put(std::move(t45));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,1))))){return Args{V()};
}
{V t46=first(call(e->slot(1,10),Args{e->slot(0,1),lit144,V()}));e->slot(0,2)=std::move(t46);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t47=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,0))};
return Args{};})});e->slot(0,3)=arg(t47,0);e->slot(0,4)=arg(t47,1);}
if(truth(([&](){V t48=e->slot(0,3);return truth(t48)?e->slot(0,4):t48;})())){return Args{e->slot(0,4)};
}
{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t49=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,0),V(1.0)))};
return Args{};})});refs[0].put(arg(t49,0));refs[1].put(arg(t49,1));}
if(truth(([&](){V t50=e->slot(0,3);return truth(t50)?e->slot(0,4):t50;})())){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t51=V(!truth(e->get("ac")));return !truth(t51)?ne(first(call(e->get("type"),Args{get(e->get("ac"),lit215)})),lit216):t51;})())){return Args{V()};
}
{Args t52=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit215),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t52,0);e->slot(0,1)=arg(t52,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(false)};
}
{V t53=first(call(e->slot(1,10),Args{e->slot(0,0),lit144,V()}));e->slot(0,1)=std::move(t53);}
return Args{ne(e->slot(0,1),V())};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t54=first(call(e->slot(1,13),Args{V(),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0)),concat(lit219,e->slot(0,0)),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0))}));e->slot(0,2)=std::move(t54);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t55=first(call(e->slot(1,10),Args{e->slot(0,1),lit151,V(0.0)}));refs[0].put(std::move(t55));}
}
{V t56=first(call(e->slot(1,13),Args{V(),concat(lit223,e->slot(0,0)),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0)),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0)),concat(lit228,e->slot(0,0))}));e->slot(0,3)=std::move(t56);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t57=first(call(e->slot(1,10),Args{e->slot(0,1),lit152,V(0.0)}));refs[0].put(std::move(t57));}
}
{V t58=first(call(e->slot(1,11),Args{concat(lit229,e->slot(0,0))}));e->slot(0,4)=std::move(t58);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit132)};V t59=V(true);refs[0].put(std::move(t59));}
return joined(Args{first(call(e->slot(1,6),Args{first(call(e->slot(1,7),Args{e->slot(0,4)})),V(0.0),V(3.0)})),first(call(e->slot(1,7),Args{e->slot(0,2)}))},call(e->slot(1,7),Args{e->slot(0,3)}));
}
{std::array<Ref,1> refs{Ref(e,0,4)};V t60=first(call(e->slot(1,11),Args{concat(lit230,e->slot(0,0))}));refs[0].put(std::move(t60));}
if(truth(ne(e->slot(0,4),V()))){return joined(Args{first(call(e->slot(1,6),Args{first(call(e->slot(1,7),Args{e->slot(0,4)})),V(0.0),V(3.0)})),first(call(e->slot(1,7),Args{e->slot(0,2)}))},call(e->slot(1,7),Args{e->slot(0,3)}));
}
{V t61=mul(first(call(e->slot(1,7),Args{e->slot(0,3)})),get(get(e->slot(1,1),lit15),lit20));e->slot(0,5)=std::move(t61);}
{V t62=mul(first(call(e->slot(1,7),Args{e->slot(0,2)})),get(get(e->slot(1,1),lit15),lit21));e->slot(0,6)=std::move(t62);}
{V t63=first(call(get(e->get("math"),lit231),Args{add(mul(divv(e->slot(0,5),V(0.35)),divv(e->slot(0,5),V(0.35))),mul(divv(e->slot(0,6),V(0.22)),divv(e->slot(0,6),V(0.22))))}));e->slot(0,7)=std::move(t63);}
return joined(Args{first(call(e->slot(1,6),Args{e->slot(0,7),V(0.0),V(3.0)})),first(call(e->slot(1,7),Args{e->slot(0,2)}))},call(e->slot(1,7),Args{e->slot(0,3)}));
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t64=first(call(e->slot(1,11),Args{concat(lit232,e->slot(0,0))}));e->slot(0,2)=std::move(t64);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit132)};V t65=V(true);refs[0].put(std::move(t65));}
return call(e->slot(1,5),Args{e->slot(0,2),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t66=first(call(e->slot(1,11),Args{concat(lit233,e->slot(0,0))}));refs[0].put(std::move(t66));}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,5),Args{e->slot(0,2),get(get(e->slot(1,1),lit15),lit28)});
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t67=first(call(e->slot(1,11),Args{concat(lit234,e->slot(0,0))}));refs[0].put(std::move(t67));}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit136)};V t68=V(true);refs[0].put(std::move(t68));}
return call(e->slot(1,5),Args{e->slot(0,2),get(get(e->slot(1,1),lit15),lit28)});
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t69=first(call(e->slot(1,11),Args{concat(lit235,e->slot(0,0))}));refs[0].put(std::move(t69));}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,5),Args{e->slot(0,2),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t70=first(call(e->slot(1,11),Args{concat(lit236,e->slot(0,0))}));refs[0].put(std::move(t70));}
if(truth(ne(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t71=first(call(e->slot(2,5),Args{e->slot(1,2),V(0.0)}));e->slot(0,0)=std::move(t71);}
if(truth(gt(first(call(e->slot(2,7),Args{e->slot(0,0)})),V(900.0)))){return call(e->slot(2,7),Args{e->slot(0,0)});
}
return Args{add(get(get(e->slot(2,1),lit15),lit28),e->slot(0,0))};
}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t72=first(call(e->slot(2,10),Args{e->slot(1,1),lit162,V()}));e->slot(0,0)=std::move(t72);}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,5),Args{e->slot(0,0),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t73=first(call(e->slot(2,10),Args{e->slot(1,1),lit237,V()}));refs[0].put(std::move(t73));}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,5),Args{e->slot(0,0),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t74=V();refs[0].put(std::move(t74));}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,5),Args{e->slot(0,0),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t75=V();refs[0].put(std::move(t75));}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,5),Args{e->slot(0,0),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t76=V();refs[0].put(std::move(t76));}
if(truth(ne(e->slot(0,0),V()))){return call(e->slot(2,5),Args{e->slot(0,0),V(0.0)});
}
}
return Args{V(0.0)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t77=first(call(e->slot(1,13),Args{V(),concat(lit238,e->slot(0,0)),concat(lit239,e->slot(0,0)),concat(lit240,e->slot(0,0))}));e->slot(0,3)=std::move(t77);}
{V t78=first(call(e->slot(1,13),Args{V(),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0))}));e->slot(0,4)=std::move(t78);}
{V t79=first(call(e->slot(1,13),Args{V(),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0)),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0))}));e->slot(0,5)=std::move(t79);}
{V t80=first(call(e->slot(1,11),Args{concat(lit247,e->slot(0,0))}));e->slot(0,6)=std::move(t80);}
{V t81=first(call(e->slot(1,11),Args{concat(lit248,e->slot(0,0))}));e->slot(0,7)=std::move(t81);}
{V t82=first(call(e->slot(1,11),Args{concat(lit249,e->slot(0,0))}));e->slot(0,8)=std::move(t82);}
if(truth(([&](){V t83=([&](){V t84=([&](){V t85=([&](){V t86=([&](){V t87=ne(e->slot(0,3),V());return !truth(t87)?ne(e->slot(0,4),V()):t87;})();return !truth(t86)?ne(e->slot(0,5),V()):t86;})();return !truth(t85)?ne(e->slot(0,6),V()):t85;})();return !truth(t84)?ne(e->slot(0,7),V()):t84;})();return !truth(t83)?ne(e->slot(0,8),V()):t83;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit132)};V t88=V(true);refs[0].put(std::move(t88));}
}
if(truth(([&](){V t89=eq(e->slot(0,3),V());return truth(t89)?ne(e->slot(0,8),V()):t89;})())){{std::array<Ref,1> refs{Ref(e,0,3)};V t90=sub(V(1.0),first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t90));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit154)};V t91=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit153)};V t92=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit153),get(e->slot(0,1),lit154),get(get(e->slot(1,1),lit15),lit101),e->slot(0,2)}));refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit155)};V t93=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),get(e->slot(0,1),lit153)})),V(0.0),V(1.2)}));refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit160)};V t94=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit159)};V t95=first(call(e->slot(1,5),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t96=first(call(e->slot(1,6),Args{sub(V(1.0),first(call(get(e->get("math"),lit250),Args{get(e->slot(0,1),lit153),get(e->slot(0,1),lit155)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t96));}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,15);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t97=first(call(e->slot(1,13),Args{V(),concat(lit251,e->slot(0,0)),concat(lit252,e->slot(0,0)),concat(lit253,e->slot(0,0)),concat(lit254,e->slot(0,0))}));e->slot(0,2)=std::move(t97);}
{V t98=first(call(e->slot(1,13),Args{V(),concat(lit255,e->slot(0,0)),concat(lit256,e->slot(0,0)),concat(lit257,e->slot(0,0))}));e->slot(0,3)=std::move(t98);}
{V t99=first(call(e->slot(1,11),Args{concat(lit258,e->slot(0,0))}));e->slot(0,4)=std::move(t99);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t100=first(call(e->slot(1,11),Args{concat(lit259,e->slot(0,0))}));refs[0].put(std::move(t100));}
}
{V t101=first(call(e->slot(1,11),Args{concat(lit260,e->slot(0,0))}));e->slot(0,5)=std::move(t101);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t102=first(call(e->slot(1,11),Args{concat(lit261,e->slot(0,0))}));refs[0].put(std::move(t102));}
}
{V t103=first(call(e->slot(1,13),Args{V(),concat(lit262,e->slot(0,0)),concat(lit263,e->slot(0,0)),concat(lit264,e->slot(0,0))}));e->slot(0,6)=std::move(t103);}
{V t104=first(call(e->slot(1,13),Args{V(),concat(lit265,e->slot(0,0)),concat(lit266,e->slot(0,0)),concat(lit267,e->slot(0,0))}));e->slot(0,7)=std::move(t104);}
{V t105=first(call(e->slot(1,13),Args{V(),concat(lit268,e->slot(0,0)),concat(lit269,e->slot(0,0)),concat(lit270,e->slot(0,0))}));e->slot(0,8)=std::move(t105);}
{V t106=first(call(e->slot(1,13),Args{V(),concat(lit271,e->slot(0,0)),concat(lit272,e->slot(0,0)),concat(lit273,e->slot(0,0))}));e->slot(0,9)=std::move(t106);}
{V t107=first(call(e->slot(1,11),Args{concat(lit274,e->slot(0,0))}));e->slot(0,10)=std::move(t107);}
{V t108=first(call(e->slot(1,11),Args{concat(lit275,e->slot(0,0))}));e->slot(0,11)=std::move(t108);}
{V t109=first(call(e->slot(1,11),Args{concat(lit276,e->slot(0,0))}));e->slot(0,12)=std::move(t109);}
{V t110=first(call(e->slot(1,13),Args{V(),concat(lit277,e->slot(0,0)),concat(lit278,e->slot(0,0)),concat(lit279,e->slot(0,0))}));e->slot(0,13)=std::move(t110);}
{V t111=first(call(e->slot(1,13),Args{V(),concat(lit280,e->slot(0,0)),concat(lit281,e->slot(0,0)),concat(lit282,e->slot(0,0))}));e->slot(0,14)=std::move(t111);}
if(truth(([&](){V t112=([&](){V t113=([&](){V t114=([&](){V t115=([&](){V t116=([&](){V t117=([&](){V t118=([&](){V t119=([&](){V t120=ne(e->slot(0,2),V());return !truth(t120)?ne(e->slot(0,3),V()):t120;})();return !truth(t119)?ne(e->slot(0,4),V()):t119;})();return !truth(t118)?ne(e->slot(0,5),V()):t118;})();return !truth(t117)?ne(e->slot(0,6),V()):t117;})();return !truth(t116)?ne(e->slot(0,7),V()):t116;})();return !truth(t115)?ne(e->slot(0,8),V()):t115;})();return !truth(t114)?ne(e->slot(0,9),V()):t114;})();return !truth(t113)?ne(e->slot(0,13),V()):t113;})();return !truth(t112)?ne(e->slot(0,14),V()):t112;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit133)};V t121=V(true);refs[0].put(std::move(t121));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit164)};V t122=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit165)};V t123=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit166)};V t124=first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit167)};V t125=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit168)};V t126=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),joined(Args{e->slot(0,6)},call(e->slot(1,5),Args{e->slot(0,9),V(0.0)})))),V(0.0),V(1.0)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit169)};V t127=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit170)};V t128=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,8),get(e->slot(0,1),lit164)})),V(0.0),V(1.0)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit171)};V t129=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,10),get(e->slot(0,1),lit168)})),V(0.0),V(1.0)}));refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit172)};V t130=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,11),get(e->slot(0,1),lit168)})),V(0.0),V(1.0)}));refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit173)};V t131=first(call(e->slot(1,5),Args{e->slot(0,12),V(25.0)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit174)};V t132=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,13),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit175)};V t133=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t133));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t134=first(call(e->slot(1,13),Args{V(),concat(lit283,e->slot(0,0)),concat(lit284,e->slot(0,0))}));e->slot(0,2)=std::move(t134);}
{V t135=first(call(e->slot(1,13),Args{V(),concat(lit285,e->slot(0,0)),concat(lit286,e->slot(0,0))}));e->slot(0,3)=std::move(t135);}
{V t136=first(call(e->slot(1,13),Args{V(),concat(lit287,e->slot(0,0)),concat(lit288,e->slot(0,0))}));e->slot(0,4)=std::move(t136);}
{V t137=first(call(e->slot(1,13),Args{V(),concat(lit289,e->slot(0,0)),concat(lit290,e->slot(0,0))}));e->slot(0,5)=std::move(t137);}
{V t138=first(call(e->slot(1,13),Args{V(),concat(lit291,e->slot(0,0)),concat(lit292,e->slot(0,0))}));e->slot(0,6)=std::move(t138);}
{V t139=first(call(e->slot(1,13),Args{V(),concat(lit245,e->slot(0,0)),concat(lit244,e->slot(0,0))}));e->slot(0,7)=std::move(t139);}
{V t140=first(call(e->slot(1,13),Args{V(),concat(lit293,e->slot(0,0)),concat(lit294,e->slot(0,0))}));e->slot(0,8)=std::move(t140);}
{V t141=first(call(e->slot(1,13),Args{V(),concat(lit295,e->slot(0,0)),concat(lit296,e->slot(0,0))}));e->slot(0,9)=std::move(t141);}
{V t142=first(call(e->slot(1,13),Args{V(),concat(lit297,e->slot(0,0)),concat(lit298,e->slot(0,0))}));e->slot(0,10)=std::move(t142);}
{V t143=first(call(e->slot(1,11),Args{concat(lit299,e->slot(0,0))}));e->slot(0,11)=std::move(t143);}
{V t144=first(call(e->slot(1,11),Args{concat(lit300,e->slot(0,0))}));e->slot(0,12)=std::move(t144);}
if(truth(([&](){V t145=([&](){V t146=([&](){V t147=([&](){V t148=([&](){V t149=([&](){V t150=([&](){V t151=([&](){V t152=([&](){V t153=([&](){V t154=ne(e->slot(0,2),V());return !truth(t154)?ne(e->slot(0,3),V()):t154;})();return !truth(t153)?ne(e->slot(0,4),V()):t153;})();return !truth(t152)?ne(e->slot(0,5),V()):t152;})();return !truth(t151)?ne(e->slot(0,6),V()):t151;})();return !truth(t150)?ne(e->slot(0,7),V()):t150;})();return !truth(t149)?ne(e->slot(0,8),V()):t149;})();return !truth(t148)?ne(e->slot(0,9),V()):t148;})();return !truth(t147)?ne(e->slot(0,10),V()):t147;})();return !truth(t146)?ne(e->slot(0,11),V()):t146;})();return !truth(t145)?ne(e->slot(0,12),V()):t145;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit134)};V t155=V(true);refs[0].put(std::move(t155));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit176)};V t156=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit177)};V t157=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit178)};V t158=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit179)};V t159=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit180)};V t160=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit181)};V t161=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,7),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit182)};V t162=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit183)};V t163=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit184)};V t164=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit185)};V t165=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit186)};V t166=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t166));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t167=first(call(e->slot(1,13),Args{V(),concat(lit301,e->slot(0,0)),concat(lit302,e->slot(0,0))}));e->slot(0,2)=std::move(t167);}
{V t168=first(call(e->slot(1,13),Args{V(),concat(lit303,e->slot(0,0)),concat(lit304,e->slot(0,0))}));e->slot(0,3)=std::move(t168);}
{V t169=first(call(e->slot(1,13),Args{V(),concat(lit305,e->slot(0,0)),concat(lit306,e->slot(0,0))}));e->slot(0,4)=std::move(t169);}
{V t170=first(call(e->slot(1,13),Args{V(),concat(lit307,e->slot(0,0)),concat(lit308,e->slot(0,0))}));e->slot(0,5)=std::move(t170);}
{V t171=first(call(e->slot(1,13),Args{V(),concat(lit309,e->slot(0,0)),concat(lit310,e->slot(0,0))}));e->slot(0,6)=std::move(t171);}
{V t172=first(call(e->slot(1,13),Args{V(),concat(lit311,e->slot(0,0)),concat(lit312,e->slot(0,0))}));e->slot(0,7)=std::move(t172);}
if(truth(([&](){V t173=([&](){V t174=([&](){V t175=([&](){V t176=([&](){V t177=ne(e->slot(0,2),V());return !truth(t177)?ne(e->slot(0,3),V()):t177;})();return !truth(t176)?ne(e->slot(0,4),V()):t176;})();return !truth(t175)?ne(e->slot(0,5),V()):t175;})();return !truth(t174)?ne(e->slot(0,6),V()):t174;})();return !truth(t173)?ne(e->slot(0,7),V()):t173;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit136)};V t178=V(true);refs[0].put(std::move(t178));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit187)};V t179=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit188)};V t180=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit189)};V t181=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit190)};V t182=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit191)};V t183=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,6),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit192)};V t184=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,7),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t184));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t185=first(call(e->slot(1,13),Args{V(),concat(lit313,e->slot(0,0)),concat(lit314,e->slot(0,0)),concat(lit315,e->slot(0,0))}));e->slot(0,2)=std::move(t185);}
{V t186=first(call(e->slot(1,13),Args{V(),concat(lit316,e->slot(0,0)),concat(lit317,e->slot(0,0))}));e->slot(0,3)=std::move(t186);}
{V t187=first(call(e->slot(1,13),Args{V(),concat(lit318,e->slot(0,0)),concat(lit319,e->slot(0,0))}));e->slot(0,4)=std::move(t187);}
{V t188=first(call(e->slot(1,13),Args{V(),concat(lit320,e->slot(0,0)),concat(lit321,e->slot(0,0))}));e->slot(0,5)=std::move(t188);}
{V t189=first(call(e->slot(1,13),Args{V(),concat(lit322,e->slot(0,0)),concat(lit323,e->slot(0,0))}));e->slot(0,6)=std::move(t189);}
if(truth(([&](){V t190=([&](){V t191=([&](){V t192=([&](){V t193=ne(e->slot(0,2),V());return !truth(t193)?ne(e->slot(0,3),V()):t193;})();return !truth(t192)?ne(e->slot(0,4),V()):t192;})();return !truth(t191)?ne(e->slot(0,5),V()):t191;})();return !truth(t190)?ne(e->slot(0,6),V()):t190;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit137)};V t194=V(true);refs[0].put(std::move(t194));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit193)};V t195=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit194)};V t196=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit195)};V t197=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit196)};V t198=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit197)};V t199=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t199));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t200=first(call(e->slot(1,11),Args{lit324}));e->slot(0,0)=std::move(t200);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t201=first(call(e->slot(1,11),Args{lit325}));refs[0].put(std::move(t201));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t202=first(call(e->slot(1,11),Args{lit326}));refs[0].put(std::move(t202));}
}
{V t203=first(call(e->slot(1,11),Args{lit327}));e->slot(0,1)=std::move(t203);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t204=first(call(e->slot(1,11),Args{lit328}));refs[0].put(std::move(t204));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t205=first(call(e->slot(1,11),Args{lit329}));refs[0].put(std::move(t205));}
}
{V t206=first(call(e->slot(1,11),Args{lit330}));e->slot(0,2)=std::move(t206);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t207=first(call(e->slot(1,11),Args{lit331}));refs[0].put(std::move(t207));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t208=first(call(e->slot(1,11),Args{lit332}));refs[0].put(std::move(t208));}
}
{V t209=first(call(e->slot(1,11),Args{lit333}));e->slot(0,3)=std::move(t209);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t210=first(call(e->slot(1,11),Args{lit334}));refs[0].put(std::move(t210));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t211=first(call(e->slot(1,11),Args{lit335}));refs[0].put(std::move(t211));}
}
if(truth(([&](){V t212=([&](){V t213=([&](){V t214=ne(e->slot(0,0),V());return !truth(t214)?ne(e->slot(0,1),V()):t214;})();return !truth(t213)?ne(e->slot(0,2),V()):t213;})();return !truth(t212)?ne(e->slot(0,3),V()):t212;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit135)};V t215=V(true);refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit138)};V t216=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit139)};V t217=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit140)};V t218=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit141)};V t219=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t219));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t220=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit16),get(get(e->slot(1,1),lit15),lit18),get(e->slot(0,0),lit146)}));e->slot(0,2)=std::move(t220);}
{V t221=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit18),get(get(e->slot(1,1),lit15),lit19),get(e->slot(0,0),lit146)}));e->slot(0,3)=std::move(t221);}
{V t222=sub(V(1.0),first(call(e->slot(1,6),Args{get(e->slot(0,0),lit153),V(0.0),V(1.0)})));e->slot(0,4)=std::move(t222);}
{V t223=sub(V(1.0),first(call(e->slot(1,6),Args{get(e->slot(0,0),lit155),V(0.0),V(1.0)})));e->slot(0,5)=std::move(t223);}
{V t224=([&](){V t225=([&](){V t226=ge(e->slot(0,1),V(2.0));return truth(t226)?V(1.0):t226;})();return !truth(t225)?V(0.55):t225;})();e->slot(0,6)=std::move(t224);}
{V t227=mul(get(get(e->slot(1,1),lit118),lit138),e->slot(0,6));e->slot(0,7)=std::move(t227);}
{V t228=first(call(get(e->get("math"),lit211),Args{get(e->slot(0,0),lit188),mul(get(e->slot(0,0),lit196),get(get(e->slot(1,1),lit15),lit97))}));e->slot(0,8)=std::move(t228);}
{V t229=first(call(e->slot(1,6),Args{mul(add(get(e->slot(0,0),lit185),get(e->slot(0,0),lit186)),V(0.5)),V(0.0),V(1.5)}));e->slot(0,9)=std::move(t229);}
{V t230=add(add(add(add(add(add(add(add(add(add(add(add(add(add(mul(e->slot(0,2),get(get(e->slot(1,1),lit15),lit31)),mul(e->slot(0,3),get(get(e->slot(1,1),lit15),lit32))),mul(get(e->slot(0,0),lit164),get(get(e->slot(1,1),lit15),lit33))),mul(get(e->slot(0,0),lit177),get(get(e->slot(1,1),lit15),lit34))),mul(get(e->slot(0,0),lit183),get(get(e->slot(1,1),lit15),lit42))),mul(e->slot(0,9),get(get(e->slot(1,1),lit15),lit43))),mul(e->slot(0,4),get(get(e->slot(1,1),lit15),lit35))),mul(e->slot(0,5),get(get(e->slot(1,1),lit15),lit44))),mul(e->slot(0,7),get(get(e->slot(1,1),lit15),lit36))),mul(e->slot(0,8),get(get(e->slot(1,1),lit15),lit37))),mul(get(e->slot(0,0),lit168),get(get(e->slot(1,1),lit15),lit38))),mul(get(e->slot(0,0),lit169),get(get(e->slot(1,1),lit15),lit39))),mul(get(e->slot(0,0),lit170),get(get(e->slot(1,1),lit15),lit40))),mul(first(call(get(e->get("math"),lit211),Args{get(e->slot(0,0),lit171),get(e->slot(0,0),lit172)})),get(get(e->slot(1,1),lit15),lit41))),mul(get(e->slot(0,0),lit161),get(get(e->slot(1,1),lit15),lit99)));e->slot(0,10)=std::move(t230);}
return Args{first(call(e->slot(1,6),Args{e->slot(0,10),V(0.0),V(1.0)})),e->slot(0,3)};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t231=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit23),get(get(e->slot(1,1),lit15),lit22),get(e->slot(0,0),lit153)}));e->slot(0,3)=std::move(t231);}
{V t232=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit27),get(get(e->slot(1,1),lit15),lit26),get(e->slot(0,0),lit155)}));e->slot(0,4)=std::move(t232);}
{V t233=first(call(e->slot(1,6),Args{divv(get(e->slot(0,0),lit150),first(call(get(e->get("math"),lit211),Args{get(get(e->slot(1,1),lit15),lit17),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t233);}
{V t234=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit178),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t234);}
{V t235=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit30),get(get(e->slot(1,1),lit15),lit28),get(e->slot(0,0),lit162)}));e->slot(0,7)=std::move(t235);}
{V t236=first(call(e->slot(1,6),Args{mul(sub(V(1.0),get(e->slot(0,0),lit177)),get(e->slot(0,0),lit180)),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t236);}
{V t237=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit118),lit140),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t237);}
{V t238=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit174),V(0.0),V(1.2)}));e->slot(0,10)=std::move(t238);}
{V t239=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit184),V(0.0),V(1.0)}));e->slot(0,11)=std::move(t239);}
{V t240=first(call(get(e->get("math"),lit211),Args{sub(get(e->slot(0,0),lit192),V(1.0)),V(0.0)}));e->slot(0,12)=std::move(t240);}
{V t241=([&](){V t242=([&](){V t243=ge(e->slot(0,2),V(2.0));return truth(t243)?V(1.0):t243;})();return !truth(t242)?V(0.82):t242;})();e->slot(0,13)=std::move(t241);}
{V t244=add(add(add(add(add(add(add(add(add(mul(e->slot(0,3),get(get(e->slot(1,1),lit15),lit52)),mul(e->slot(0,4),get(get(e->slot(1,1),lit15),lit53))),mul(e->slot(0,5),get(get(e->slot(1,1),lit15),lit54))),mul(e->slot(0,6),get(get(e->slot(1,1),lit15),lit55))),mul(e->slot(0,7),get(get(e->slot(1,1),lit15),lit56))),mul(e->slot(0,8),get(get(e->slot(1,1),lit15),lit57))),mul(e->slot(0,9),get(get(e->slot(1,1),lit15),lit58))),mul(e->slot(0,10),get(get(e->slot(1,1),lit15),lit59))),mul(e->slot(0,11),get(get(e->slot(1,1),lit15),lit60))),mul(e->slot(0,12),get(get(e->slot(1,1),lit15),lit98)));e->slot(0,14)=std::move(t244);}
{V t245=add(add(add(add(add(add(mul(get(e->slot(0,0),lit168),get(get(e->slot(1,1),lit15),lit61)),mul(get(e->slot(0,0),lit169),get(get(e->slot(1,1),lit15),lit62))),mul(get(e->slot(0,0),lit170),get(get(e->slot(1,1),lit15),lit63))),mul(get(e->slot(0,0),lit175),get(get(e->slot(1,1),lit15),lit64))),mul(get(e->slot(0,0),lit183),get(get(e->slot(1,1),lit15),lit65))),mul(get(e->slot(0,0),lit177),get(get(e->slot(1,1),lit15),lit66))),mul(first(call(get(e->get("math"),lit211),Args{get(e->slot(0,0),lit194),get(e->slot(0,0),lit193)})),get(get(e->slot(1,1),lit15),lit95)));e->slot(0,15)=std::move(t245);}
{std::array<Ref,1> refs{Ref(e,0,14)};V t246=mul(sub(e->slot(0,14),e->slot(0,15)),e->slot(0,13));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e,0,14)};V t247=first(call(e->slot(1,6),Args{mul(e->slot(0,14),V(0.48)),V(0.0),get(get(e->slot(1,1),lit15),lit112)}));refs[0].put(std::move(t247));}
{V t248=([&](){V t249=([&](){V t250=gt(e->slot(0,14),get(e->slot(0,0),lit200));return truth(t250)?get(get(e->slot(1,1),lit15),lit103):t250;})();return !truth(t249)?get(get(e->slot(1,1),lit15),lit104):t249;})();e->slot(0,16)=std::move(t248);}
return call(e->slot(1,8),Args{get(e->slot(0,0),lit200),e->slot(0,14),e->slot(0,16),e->slot(0,1)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t251=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit153),V(0.0),V(1.0)}));e->slot(0,2)=std::move(t251);}
{V t252=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit155),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t252);}
{V t253=first(call(get(e->get("math"),lit211),Args{sub(get(e->slot(0,0),lit165),V(1.0)),V(0.0)}));e->slot(0,4)=std::move(t253);}
{V t254=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit191),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t254);}
{V t255=first(call(e->slot(1,6),Args{mul(get(e->slot(0,0),lit199),get(get(e->slot(1,1),lit15),lit71)),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t255);}
{V t256=first(call(e->slot(1,6),Args{mul(get(e->slot(0,0),lit177),get(get(e->slot(1,1),lit15),lit72)),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t256);}
{V t257=first(call(e->slot(1,6),Args{mul(get(e->slot(0,0),lit168),get(get(e->slot(1,1),lit15),lit73)),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t257);}
{V t258=first(call(e->slot(1,6),Args{mul(get(e->slot(0,0),lit169),get(get(e->slot(1,1),lit15),lit74)),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t258);}
{V t259=first(call(e->slot(1,6),Args{mul(get(e->slot(0,0),lit170),get(get(e->slot(1,1),lit15),lit75)),V(0.0),V(1.0)}));e->slot(0,10)=std::move(t259);}
{V t260=first(call(e->slot(1,6),Args{mul(get(e->slot(0,0),lit175),get(get(e->slot(1,1),lit15),lit76)),V(0.0),V(1.0)}));e->slot(0,11)=std::move(t260);}
{V t261=sub(sub(sub(sub(sub(sub(add(add(add(add(add(get(get(e->slot(1,1),lit15),lit67),mul(e->slot(0,1),get(get(e->slot(1,1),lit15),lit68))),mul(e->slot(0,2),get(get(e->slot(1,1),lit15),lit69))),mul(e->slot(0,3),get(get(e->slot(1,1),lit15),lit70))),mul(e->slot(0,4),get(get(e->slot(1,1),lit15),lit77))),mul(e->slot(0,5),V(0.08))),e->slot(0,6)),e->slot(0,7)),e->slot(0,8)),e->slot(0,9)),e->slot(0,10)),e->slot(0,11));e->slot(0,12)=std::move(t261);}
return call(e->slot(1,6),Args{e->slot(0,12),V(0.0),V(1.0)});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t262=([&](){V t263=([&](){V t264=ge(e->slot(0,1),V(2.0));return truth(t264)?V(1.08):t264;})();return !truth(t263)?V(0.8):t263;})();e->slot(0,2)=std::move(t262);}
{V t265=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit24),V(1.0),get(e->slot(0,0),lit153)}));e->slot(0,3)=std::move(t265);}
{V t266=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit26),V(1.0),get(e->slot(0,0),lit155)}));e->slot(0,4)=std::move(t266);}
{V t267=first(call(e->slot(1,6),Args{divv(get(e->slot(0,0),lit150),first(call(get(e->get("math"),lit211),Args{get(get(e->slot(1,1),lit15),lit17),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t267);}
{V t268=first(call(e->slot(1,6),Args{add(get(e->slot(0,0),lit178),mul(get(e->slot(0,0),lit184),V(0.5))),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t268);}
{V t269=first(call(e->slot(1,6),Args{first(call(get(e->get("math"),lit211),Args{get(e->slot(0,0),lit175),mul(get(e->slot(0,0),lit194),V(0.4))})),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t269);}
{V t270=add(add(add(add(mul(e->slot(0,3),get(get(e->slot(1,1),lit15),lit90)),mul(e->slot(0,4),get(get(e->slot(1,1),lit15),lit93))),mul(e->slot(0,5),get(get(e->slot(1,1),lit15),lit91))),mul(e->slot(0,6),get(get(e->slot(1,1),lit15),lit92))),mul(e->slot(0,7),get(get(e->slot(1,1),lit15),lit94)));e->slot(0,8)=std::move(t270);}
return call(e->slot(1,6),Args{mul(mul(e->slot(0,8),V(0.42)),e->slot(0,2)),V(0.0),get(get(e->slot(1,1),lit15),lit114)});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t271=([&](){V t272=([&](){V t273=ge(e->slot(0,1),V(2.0));return truth(t273)?get(get(e->slot(1,1),lit15),lit88):t273;})();return !truth(t272)?get(get(e->slot(1,1),lit15),lit89):t272;})();e->slot(0,2)=std::move(t271);}
{V t274=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit24),V(1.0),get(e->slot(0,0),lit153)}));e->slot(0,3)=std::move(t274);}
{V t275=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit26),V(1.0),get(e->slot(0,0),lit155)}));e->slot(0,4)=std::move(t275);}
{V t276=first(call(e->slot(1,6),Args{divv(get(e->slot(0,0),lit150),first(call(get(e->get("math"),lit211),Args{get(get(e->slot(1,1),lit15),lit17),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t276);}
{V t277=first(call(e->slot(1,6),Args{first(call(get(e->get("math"),lit211),Args{get(e->slot(0,0),lit199),get(e->slot(0,0),lit170)})),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t277);}
{V t278=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit178),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t278);}
{V t279=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit184),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t279);}
{V t280=first(call(e->slot(1,6),Args{add(get(e->slot(0,0),lit175),mul(get(e->slot(0,0),lit203),V(0.35))),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t280);}
{V t281=first(call(e->slot(1,6),Args{add(add(get(get(e->slot(1,1),lit118),lit138),get(get(e->slot(1,1),lit118),lit140)),mul(get(get(e->slot(1,1),lit118),lit141),V(0.5))),V(0.0),V(1.5)}));e->slot(0,10)=std::move(t281);}
{V t282=mul(first(call(e->slot(1,6),Args{add(get(e->slot(0,0),lit187),get(e->slot(0,0),lit190)),V(0.0),V(1.4)})),V(0.5));e->slot(0,11)=std::move(t282);}
{V t283=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit195),V(0.0),V(1.0)}));e->slot(0,12)=std::move(t283);}
{V t284=add(add(add(add(add(add(add(add(add(add(mul(e->slot(0,3),get(get(e->slot(1,1),lit15),lit78)),mul(e->slot(0,4),get(get(e->slot(1,1),lit15),lit79))),mul(e->slot(0,5),get(get(e->slot(1,1),lit15),lit80))),mul(e->slot(0,6),get(get(e->slot(1,1),lit15),lit81))),mul(e->slot(0,7),get(get(e->slot(1,1),lit15),lit82))),mul(e->slot(0,8),get(get(e->slot(1,1),lit15),lit83))),mul(e->slot(0,9),get(get(e->slot(1,1),lit15),lit84))),mul(e->slot(0,10),get(get(e->slot(1,1),lit15),lit85))),mul(e->slot(0,11),get(get(e->slot(1,1),lit15),lit86))),mul(get(e->slot(0,0),lit183),get(get(e->slot(1,1),lit15),lit87))),mul(e->slot(0,12),get(get(e->slot(1,1),lit15),lit96)));e->slot(0,13)=std::move(t284);}
{std::array<Ref,1> refs{Ref(e,0,13)};V t285=mul(mul(e->slot(0,13),V(0.29)),e->slot(0,2));refs[0].put(std::move(t285));}
if(truth(([&](){V t286=lt(get(e->slot(0,0),lit199),V(0.08));return truth(t286)?lt(get(e->slot(0,0),lit146),get(get(e->slot(1,1),lit15),lit16)):t286;})())){{std::array<Ref,1> refs{Ref(e,0,13)};V t287=mul(e->slot(0,13),V(0.25));refs[0].put(std::move(t287));}
}
if(truth(lt(get(e->slot(0,0),lit155),get(get(e->slot(1,1),lit15),lit27)))){{std::array<Ref,1> refs{Ref(e,0,13)};V t288=mul(e->slot(0,13),V(0.65));refs[0].put(std::move(t288));}
}
return call(e->slot(1,6),Args{e->slot(0,13),V(0.0),get(get(e->slot(1,1),lit15),lit113)});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t289=get(e->slot(0,0),lit158);e->slot(0,2)=std::move(t289);}
{V t290=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit24),V(1.0),get(e->slot(0,0),lit153)}));e->slot(0,3)=std::move(t290);}
{V t291=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit26),V(1.0),get(e->slot(0,0),lit155)}));e->slot(0,4)=std::move(t291);}
{V t292=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit15),lit25),mul(get(get(e->slot(1,1),lit15),lit25),V(2.2)),e->slot(0,2)}));e->slot(0,5)=std::move(t292);}
{V t293=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit199),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t293);}
{V t294=first(call(e->slot(1,6),Args{get(e->slot(0,0),lit167),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t294);}
{V t295=first(call(e->slot(1,6),Args{first(call(get(e->get("math"),lit211),Args{get(e->slot(0,0),lit175),mul(get(e->slot(0,0),lit194),V(0.35))})),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t295);}
{V t296=first(call(e->slot(1,6),Args{add(add(add(add(add(mul(e->slot(0,3),V(0.26)),mul(e->slot(0,4),V(0.2))),mul(e->slot(0,5),V(0.28))),mul(e->slot(0,6),V(0.18))),mul(e->slot(0,7),V(0.34))),mul(e->slot(0,8),V(0.32))),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t296);}
return call(e->slot(1,8),Args{get(e->slot(0,0),lit203),e->slot(0,9),get(get(e->slot(1,1),lit15),lit109),e->slot(0,1)});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t297=add(add(add(add(add(add(mul(get(e->slot(0,0),lit168),V(0.28)),mul(get(e->slot(0,0),lit169),V(0.24))),mul(get(e->slot(0,0),lit170),V(0.3))),mul(get(e->slot(0,0),lit175),V(0.32))),mul(get(e->slot(0,0),lit183),V(0.18))),mul(first(call(get(e->get("math"),lit211),Args{V(0.0),sub(V(1.0),get(e->slot(0,0),lit181))})),V(0.2))),mul(get(e->slot(0,0),lit194),V(0.08)));e->slot(0,1)=std::move(t297);}
return call(e->slot(1,6),Args{e->slot(0,1),V(0.0),V(1.0)});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t298=lt(get(e->slot(0,0),lit162),get(get(e->slot(1,1),lit15),lit29));return !truth(t298)?lt(get(e->slot(0,0),lit153),V(0.08)):t298;})())){return Args{get(e->slot(1,3),lit12)};
}
if(truth(gt(get(e->slot(0,0),lit202),V(0.62)))){return Args{get(e->slot(1,3),lit11)};
}
if(truth(([&](){V t299=gt(get(e->slot(0,0),lit168),V(0.66));return truth(t299)?lt(get(e->slot(0,0),lit201),V(0.46)):t299;})())){return Args{get(e->slot(1,3),lit13)};
}
if(truth(([&](){V t300=gt(get(e->slot(0,0),lit205),V(0.58));return truth(t300)?gt(get(e->slot(0,0),lit200),V(0.2)):t300;})())){return Args{get(e->slot(1,3),lit14)};
}
if(truth(gt(get(e->slot(0,0),lit203),V(0.48)))){return Args{get(e->slot(1,3),lit10)};
}
if(truth(([&](){V t301=gt(e->slot(0,1),V(0.45));return !truth(t301)?gt(get(e->slot(0,0),lit146),get(get(e->slot(1,1),lit15),lit19)):t301;})())){return Args{get(e->slot(1,3),lit7)};
}
if(truth(([&](){V t302=gt(get(e->slot(0,0),lit200),V(0.5));return truth(t302)?gt(get(e->slot(0,0),lit199),V(0.16)):t302;})())){return Args{get(e->slot(1,3),lit9)};
}
if(truth(([&](){V t303=gt(get(e->slot(0,0),lit150),V(0.1));return truth(t303)?gt(get(e->slot(0,0),lit199),V(0.1)):t303;})())){return Args{get(e->slot(1,3),lit8)};
}
if(truth(([&](){V t304=gt(get(e->slot(0,0),lit198),V(0.35));return !truth(t304)?gt(get(e->slot(0,0),lit146),get(get(e->slot(1,1),lit15),lit17)):t304;})())){return Args{get(e->slot(1,3),lit6)};
}
return Args{get(e->slot(1,3),lit5)};
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{Args t305=call(e->slot(1,26),Args{e->slot(0,1),e->slot(0,0)});e->slot(0,3)=arg(t305,0);e->slot(0,4)=arg(t305,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit198)};V t306=e->slot(0,3);refs[0].put(std::move(t306));}
{V t307=sub(sub(sub(add(add(add(get(get(e->slot(1,1),lit15),lit45),mul(get(e->slot(0,1),lit153),get(get(e->slot(1,1),lit15),lit46))),mul(get(e->slot(0,1),lit155),get(get(e->slot(1,1),lit15),lit47))),mul(get(e->slot(0,1),lit201),get(get(e->slot(1,1),lit15),lit48))),mul(get(e->slot(0,1),lit168),get(get(e->slot(1,1),lit15),lit49))),mul(get(e->slot(0,1),lit169),get(get(e->slot(1,1),lit15),lit50))),mul(get(e->slot(0,1),lit170),get(get(e->slot(1,1),lit15),lit51)));e->slot(0,5)=std::move(t307);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t308=first(call(e->slot(1,6),Args{e->slot(0,5),V(0.05),V(1.25)}));refs[0].put(std::move(t308));}
{V t309=first(call(e->slot(1,6),Args{sub(add(get(e->slot(0,1),lit199),mul(mul(e->slot(0,3),e->slot(0,2)),V(1.8))),mul(mul(e->slot(0,5),e->slot(0,2)),V(0.55))),V(0.0),get(get(e->slot(1,1),lit15),lit111)}));e->slot(0,6)=std::move(t309);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit199)};V t310=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit199),e->slot(0,6),get(get(e->slot(1,1),lit15),lit108),e->slot(0,2)}));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit200)};V t311=first(call(e->slot(1,27),Args{e->slot(0,1),e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t311));}
{V t312=first(call(e->slot(1,28),Args{e->slot(0,1),get(e->slot(0,1),lit200)}));e->slot(0,7)=std::move(t312);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit201)};V t313=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit201),e->slot(0,7),get(get(e->slot(1,1),lit15),lit105),e->slot(0,2)}));refs[0].put(std::move(t313));}
{V t314=first(call(e->slot(1,29),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,8)=std::move(t314);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit204)};V t315=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit204),e->slot(0,8),get(get(e->slot(1,1),lit15),lit110),e->slot(0,2)}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit203)};V t316=first(call(e->slot(1,31),Args{e->slot(0,1),e->slot(0,2)}));refs[0].put(std::move(t316));}
{V t317=first(call(e->slot(1,30),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,9)=std::move(t317);}
{V t318=([&](){V t319=([&](){V t320=gt(e->slot(0,9),get(e->slot(0,1),lit202));return truth(t320)?get(get(e->slot(1,1),lit15),lit106):t320;})();return !truth(t319)?get(get(e->slot(1,1),lit15),lit107):t319;})();e->slot(0,10)=std::move(t318);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit202)};V t321=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit202),e->slot(0,9),e->slot(0,10),e->slot(0,2)}));refs[0].put(std::move(t321));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit205)};V t322=first(call(e->slot(1,32),Args{e->slot(0,1)}));refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit206)};V t323=first(call(e->slot(1,33),Args{e->slot(0,1),e->slot(0,4)}));refs[0].put(std::move(t323));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit207)};V t324=([&](){V t325=get(e->slot(1,4),get(e->slot(0,1),lit206));return !truth(t325)?lit336:t325;})();refs[0].put(std::move(t324));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t326=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,2)=std::move(t326);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit145)};V t327=V(false);refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit147)};V t328=V(0.0);refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit146)};V t329=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit146),V(0.0),get(get(e->slot(1,1),lit15),lit100),e->slot(0,1)}));refs[0].put(std::move(t329));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit149)};V t330=V(0.0);refs[0].put(std::move(t330));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit150)};V t331=V(0.0);refs[0].put(std::move(t331));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit153)};V t332=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit153),V(0.0),get(get(e->slot(1,1),lit15),lit101),e->slot(0,1)}));refs[0].put(std::move(t332));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit155)};V t333=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit155),V(0.0),get(get(e->slot(1,1),lit15),lit101),e->slot(0,1)}));refs[0].put(std::move(t333));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit161)};V t334=V(1.0);refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit162)};V t335=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit162),V(0.0),get(get(e->slot(1,1),lit15),lit102),e->slot(0,1)}));refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit163)};V t336=V(0.0);refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit198)};V t337=V(0.0);refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit200)};V t338=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit200),V(0.0),get(get(e->slot(1,1),lit15),lit104),e->slot(0,1)}));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit201)};V t339=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit201),V(1.0),get(get(e->slot(1,1),lit15),lit105),e->slot(0,1)}));refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit202)};V t340=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit202),V(0.0),get(get(e->slot(1,1),lit15),lit107),e->slot(0,1)}));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit203)};V t341=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit203),V(0.0),get(get(e->slot(1,1),lit15),lit109),e->slot(0,1)}));refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit204)};V t342=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit204),V(0.0),get(get(e->slot(1,1),lit15),lit110),e->slot(0,1)}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit205)};V t343=first(call(e->slot(1,8),Args{get(e->slot(0,2),lit205),V(0.0),get(get(e->slot(1,1),lit15),lit110),e->slot(0,1)}));refs[0].put(std::move(t343));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit206)};V t344=get(e->slot(1,3),lit12);refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit207)};V t345=lit12;refs[0].put(std::move(t345));}
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t346=num(V(0.0)),t347=num(V(3.0)),t348=num(V(1.0));for(double t349=t346;(t348>0?t349<=t347:t349>=t347);t349+=t348){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t349);call(e->slot(2,35),Args{e->slot(0,0),e->slot(1,0)});
}}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,12),Args{concat(lit337,e->slot(0,0)),([&](){V t350=get(e->slot(0,1),lit200);return !truth(t350)?V(0.0):t350;})()});
call(e->slot(1,12),Args{concat(lit338,e->slot(0,0)),([&](){V t351=get(e->slot(0,1),lit201);return !truth(t351)?V(1.0):t351;})()});
call(e->slot(1,12),Args{concat(lit339,e->slot(0,0)),([&](){V t352=get(e->slot(0,1),lit202);return !truth(t352)?V(0.0):t352;})()});
call(e->slot(1,12),Args{concat(lit340,e->slot(0,0)),([&](){V t353=get(e->slot(0,1),lit199);return !truth(t353)?V(0.0):t353;})()});
call(e->slot(1,12),Args{concat(lit341,e->slot(0,0)),([&](){V t354=get(e->slot(0,1),lit203);return !truth(t354)?V(0.0):t354;})()});
call(e->slot(1,12),Args{concat(lit342,e->slot(0,0)),([&](){V t355=get(e->slot(0,1),lit206);return !truth(t355)?V(0.0):t355;})()});
call(e->slot(1,12),Args{concat(lit343,e->slot(0,0)),([&](){V t356=get(e->slot(0,1),lit207);return !truth(t356)?lit336:t356;})()});
call(e->slot(1,12),Args{concat(lit344,e->slot(0,0)),([&](){V t357=get(e->slot(0,1),lit200);return !truth(t357)?V(0.0):t357;})()});
call(e->slot(1,12),Args{concat(lit345,e->slot(0,0)),([&](){V t358=get(e->slot(0,1),lit201);return !truth(t358)?V(1.0):t358;})()});
call(e->slot(1,12),Args{concat(lit346,e->slot(0,0)),([&](){V t359=get(e->slot(0,1),lit202);return !truth(t359)?V(0.0):t359;})()});
call(e->slot(1,12),Args{concat(lit347,e->slot(0,0)),([&](){V t360=get(e->slot(0,1),lit199);return !truth(t360)?V(0.0):t360;})()});
call(e->slot(1,12),Args{concat(lit348,e->slot(0,0)),([&](){V t361=get(e->slot(0,1),lit203);return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,12),Args{concat(lit349,e->slot(0,0)),([&](){V t362=get(e->slot(0,1),lit204);return !truth(t362)?V(0.0):t362;})()});
call(e->slot(1,12),Args{concat(lit350,e->slot(0,0)),([&](){V t363=get(e->slot(0,1),lit205);return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,12),Args{concat(lit351,e->slot(0,0)),([&](){V t364=get(e->slot(0,1),lit155);return !truth(t364)?V(1.0):t364;})()});
call(e->slot(1,12),Args{concat(lit352,e->slot(0,0)),([&](){V t365=get(e->slot(0,1),lit168);return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,12),Args{concat(lit353,e->slot(0,0)),([&](){V t366=get(e->slot(0,1),lit169);return !truth(t366)?V(0.0):t366;})()});
call(e->slot(1,12),Args{concat(lit354,e->slot(0,0)),([&](){V t367=get(e->slot(0,1),lit170);return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,12),Args{concat(lit355,e->slot(0,0)),([&](){V t368=get(e->slot(0,1),lit174);return !truth(t368)?V(1.0):t368;})()});
call(e->slot(1,12),Args{concat(lit356,e->slot(0,0)),([&](){V t369=get(e->slot(0,1),lit175);return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,12),Args{concat(lit357,e->slot(0,0)),([&](){V t370=get(e->slot(0,1),lit204);return !truth(t370)?V(0.0):t370;})()});
call(e->slot(1,12),Args{concat(lit358,e->slot(0,0)),([&](){V t371=get(e->slot(0,1),lit205);return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,12),Args{concat(lit246,e->slot(0,0)),([&](){V t372=get(e->slot(0,1),lit155);return !truth(t372)?V(1.0):t372;})()});
call(e->slot(1,12),Args{concat(lit359,e->slot(0,0)),([&](){V t373=get(e->slot(0,1),lit200);return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,12),Args{concat(lit360,e->slot(0,0)),([&](){V t374=get(e->slot(0,1),lit201);return !truth(t374)?V(1.0):t374;})()});
call(e->slot(1,12),Args{concat(lit361,e->slot(0,0)),([&](){V t375=get(e->slot(0,1),lit202);return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,12),Args{concat(lit362,e->slot(0,0)),([&](){V t376=get(e->slot(0,1),lit199);return !truth(t376)?V(0.0):t376;})()});
call(e->slot(1,12),Args{concat(lit363,e->slot(0,0)),([&](){V t377=get(e->slot(0,1),lit203);return !truth(t377)?V(0.0):t377;})()});
call(e->slot(1,12),Args{concat(lit364,e->slot(0,0)),([&](){V t378=get(e->slot(0,1),lit204);return !truth(t378)?V(0.0):t378;})()});
call(e->slot(1,12),Args{concat(lit365,e->slot(0,0)),([&](){V t379=get(e->slot(0,1),lit205);return !truth(t379)?V(0.0):t379;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit118),lit143))))){return Args{};
}
call(e->slot(1,12),Args{concat(lit230,e->slot(0,0)),([&](){V t380=get(e->slot(0,1),lit146);return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,12),Args{concat(lit366,e->slot(0,0)),([&](){V t381=get(e->slot(0,1),lit149);return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,12),Args{concat(lit367,e->slot(0,0)),([&](){V t382=get(e->slot(0,1),lit150);return !truth(t382)?V(0.0):t382;})()});
call(e->slot(1,12),Args{concat(lit368,e->slot(0,0)),([&](){V t383=get(e->slot(0,1),lit153);return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,12),Args{concat(lit369,e->slot(0,0)),([&](){V t384=get(e->slot(0,1),lit157);return !truth(t384)?V(0.0):t384;})()});
call(e->slot(1,12),Args{concat(lit370,e->slot(0,0)),([&](){V t385=get(e->slot(0,1),lit162);return !truth(t385)?V(0.0):t385;})()});
call(e->slot(1,12),Args{concat(lit371,e->slot(0,0)),([&](){V t386=get(e->slot(0,1),lit178);return !truth(t386)?V(0.0):t386;})()});
call(e->slot(1,12),Args{concat(lit372,e->slot(0,0)),([&](){V t387=get(e->slot(0,1),lit177);return !truth(t387)?V(0.0):t387;})()});
call(e->slot(1,12),Args{concat(lit373,e->slot(0,0)),([&](){V t388=get(e->slot(0,1),lit183);return !truth(t388)?V(0.0):t388;})()});
call(e->slot(1,12),Args{concat(lit374,e->slot(0,0)),([&](){V t389=get(e->slot(0,1),lit188);return !truth(t389)?V(0.0):t389;})()});
call(e->slot(1,12),Args{concat(lit375,e->slot(0,0)),([&](){V t390=get(e->slot(0,1),lit181);return !truth(t390)?V(1.0):t390;})()});
call(e->slot(1,12),Args{concat(lit376,e->slot(0,0)),([&](){V t391=get(e->slot(0,1),lit184);return !truth(t391)?V(0.0):t391;})()});
call(e->slot(1,12),Args{concat(lit377,e->slot(0,0)),([&](){V t392=get(e->slot(0,1),lit194);return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,12),Args{concat(lit378,e->slot(0,0)),([&](){V t393=get(e->slot(0,1),lit195);return !truth(t393)?V(0.0):t393;})()});
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,12),Args{lit379,([&](){V t394=get(get(e->slot(1,1),lit118),lit119);return !truth(t394)?lit336:t394;})()});
call(e->slot(1,12),Args{lit380,([&](){V t395=get(get(e->slot(1,1),lit118),lit121);return !truth(t395)?V(0.0):t395;})()});
call(e->slot(1,12),Args{lit381,([&](){V t396=([&](){V t397=get(get(e->slot(1,1),lit118),lit122);return truth(t397)?V(1.0):t397;})();return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,12),Args{lit382,([&](){V t398=get(get(e->slot(1,1),lit118),lit123);return !truth(t398)?V(0.0):t398;})()});
call(e->slot(1,12),Args{lit383,([&](){V t399=get(get(e->slot(1,1),lit118),lit124);return !truth(t399)?V(1.0):t399;})()});
call(e->slot(1,12),Args{lit384,([&](){V t400=get(get(e->slot(1,1),lit118),lit125);return !truth(t400)?V(0.0):t400;})()});
call(e->slot(1,12),Args{lit385,([&](){V t401=get(get(e->slot(1,1),lit118),lit126);return !truth(t401)?V(0.0):t401;})()});
call(e->slot(1,12),Args{lit386,([&](){V t402=get(get(e->slot(1,1),lit118),lit127);return !truth(t402)?V(0.0):t402;})()});
call(e->slot(1,12),Args{lit387,([&](){V t403=get(get(e->slot(1,1),lit118),lit128);return !truth(t403)?V(0.0):t403;})()});
call(e->slot(1,12),Args{lit388,([&](){V t404=get(get(e->slot(1,1),lit118),lit129);return !truth(t404)?V(0.0):t404;})()});
call(e->slot(1,12),Args{lit389,([&](){V t405=get(get(e->slot(1,1),lit118),lit123);return !truth(t405)?V(0.0):t405;})()});
call(e->slot(1,12),Args{lit390,([&](){V t406=get(get(e->slot(1,1),lit118),lit125);return !truth(t406)?V(0.0):t406;})()});
call(e->slot(1,12),Args{lit391,([&](){V t407=get(get(e->slot(1,1),lit118),lit126);return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,12),Args{lit392,([&](){V t408=get(get(e->slot(1,1),lit118),lit128);return !truth(t408)?V(0.0):t408;})()});
call(e->slot(1,12),Args{lit393,([&](){V t409=get(get(e->slot(1,1),lit118),lit129);return !truth(t409)?V(0.0):t409;})()});
call(e->slot(1,12),Args{lit394,([&](){V t410=get(get(e->slot(1,1),lit118),lit123);return !truth(t410)?V(0.0):t410;})()});
call(e->slot(1,12),Args{lit395,([&](){V t411=get(get(e->slot(1,1),lit118),lit124);return !truth(t411)?V(1.0):t411;})()});
call(e->slot(1,12),Args{lit396,([&](){V t412=get(get(e->slot(1,1),lit118),lit125);return !truth(t412)?V(0.0):t412;})()});
call(e->slot(1,12),Args{lit397,([&](){V t413=get(get(e->slot(1,1),lit118),lit126);return !truth(t413)?V(0.0):t413;})()});
call(e->slot(1,12),Args{lit398,([&](){V t414=get(get(e->slot(1,1),lit118),lit130);return !truth(t414)?V(0.0):t414;})()});
call(e->slot(1,12),Args{lit399,([&](){V t415=get(get(e->slot(1,1),lit118),lit131);return !truth(t415)?V(0.0):t415;})()});
call(e->slot(1,12),Args{lit400,([&](){V t416=get(get(e->slot(1,1),lit118),lit112);return !truth(t416)?V(0.0):t416;})()});
call(e->slot(1,12),Args{lit401,([&](){V t417=get(get(e->slot(1,1),lit118),lit113);return !truth(t417)?V(0.0):t417;})()});
call(e->slot(1,12),Args{lit402,([&](){V t418=get(get(e->slot(1,1),lit118),lit111);return !truth(t418)?V(0.0):t418;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit118),lit143))))){return Args{};
}
call(e->slot(1,12),Args{lit403,([&](){V t419=([&](){V t420=get(get(e->slot(1,1),lit118),lit132);return truth(t420)?V(1.0):t420;})();return !truth(t419)?V(0.0):t419;})()});
call(e->slot(1,12),Args{lit404,([&](){V t421=([&](){V t422=get(get(e->slot(1,1),lit118),lit133);return truth(t422)?V(1.0):t422;})();return !truth(t421)?V(0.0):t421;})()});
call(e->slot(1,12),Args{lit405,([&](){V t423=([&](){V t424=get(get(e->slot(1,1),lit118),lit134);return truth(t424)?V(1.0):t424;})();return !truth(t423)?V(0.0):t423;})()});
call(e->slot(1,12),Args{lit406,([&](){V t425=([&](){V t426=get(get(e->slot(1,1),lit118),lit135);return truth(t426)?V(1.0):t426;})();return !truth(t425)?V(0.0):t425;})()});
call(e->slot(1,12),Args{lit407,([&](){V t427=([&](){V t428=get(get(e->slot(1,1),lit118),lit136);return truth(t428)?V(1.0):t428;})();return !truth(t427)?V(0.0):t427;})()});
call(e->slot(1,12),Args{lit408,([&](){V t429=([&](){V t430=get(get(e->slot(1,1),lit118),lit137);return truth(t430)?V(1.0):t430;})();return !truth(t429)?V(0.0):t429;})()});
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t431=num(V(0.0)),t432=num(V(3.0)),t433=num(V(1.0));for(double t434=t431;(t433>0?t434<=t432:t434>=t432);t434+=t433){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t434);call(e->slot(2,37),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit118),lit144),e->slot(0,0))});
}}
call(e->slot(1,38),Args{});
return Args{};});
Ref(e->slot(0,1),lit409).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit119)};V t435=lit120;refs[0].put(std::move(t435));}
call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit410).put(native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit121)};V t436=add(([&](){V t437=get(get(e->slot(1,1),lit118),lit121);return !truth(t437)?V(0.0):t437;})(),V(1.0));refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t438=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit15),lit115)})),get(get(e->slot(1,1),lit15),lit115),get(get(e->slot(1,1),lit15),lit116)}));refs[0].put(std::move(t438));}
call(e->slot(1,14),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t439=([&](){V t440=e->slot(0,1);return !truth(t440)?first(call(e->slot(1,16),Args{})):t440;})();refs[0].put(std::move(t439));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit132)};V t441=V(false);refs[0].put(std::move(t441));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit133)};V t442=V(false);refs[0].put(std::move(t442));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit134)};V t443=V(false);refs[0].put(std::move(t443));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit135)};V t444=V(false);refs[0].put(std::move(t444));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit136)};V t445=V(false);refs[0].put(std::move(t445));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit137)};V t446=V(false);refs[0].put(std::move(t446));}
call(e->slot(1,25),Args{});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit119)};V t447=lit411;refs[0].put(std::move(t447));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit122)};V t448=V(false);refs[0].put(std::move(t448));}
call(e->slot(1,36),Args{e->slot(0,0)});
call(e->slot(1,39),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,17),Args{e->slot(0,1)})))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit119)};V t449=lit412;refs[0].put(std::move(t449));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit122)};V t450=V(false);refs[0].put(std::move(t450));}
call(e->slot(1,36),Args{e->slot(0,0)});
call(e->slot(1,39),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit119)};V t451=lit413;refs[0].put(std::move(t451));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit122)};V t452=V(true);refs[0].put(std::move(t452));}
{V t453=V(0.0);e->slot(0,3)=std::move(t453);}
{V t454=V(0.0);e->slot(0,4)=std::move(t454);}
{V t455=V(0.0);e->slot(0,5)=std::move(t455);}
{V t456=V(0.0);e->slot(0,6)=std::move(t456);}
{V t457=V(0.0);e->slot(0,7)=std::move(t457);}
{V t458=V(0.0);e->slot(0,8)=std::move(t458);}
{V t459=V(0.0);e->slot(0,9)=std::move(t459);}
{V t460=V(0.0);e->slot(0,10)=std::move(t460);}
{V t461=V(0.0);e->slot(0,11)=std::move(t461);}
{V t462=V(0.0);e->slot(0,12)=std::move(t462);}
{double t463=num(V(0.0)),t464=num(V(3.0)),t465=num(V(1.0));for(double t466=t463;(t465>0?t466<=t464:t466>=t464);t466+=t465){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t466);{V t467=first(call(e->slot(2,15),Args{e->slot(0,0),e->slot(1,1)}));e->slot(0,1)=std::move(t467);}
{V t468=get(get(get(e->slot(2,1),lit118),lit144),e->slot(0,0));e->slot(0,2)=std::move(t468);}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,6);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit145)};V t469=V(true);refs[0].put(std::move(t469));}
{Args t470=call(e->slot(3,18),Args{e->slot(1,0),e->slot(1,1)});e->slot(0,0)=arg(t470,0);e->slot(0,1)=arg(t470,1);e->slot(0,2)=arg(t470,2);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit147)};V t471=e->slot(0,0);refs[0].put(std::move(t471));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit151)};V t472=e->slot(0,1);refs[0].put(std::move(t472));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit152)};V t473=e->slot(0,2);refs[0].put(std::move(t473));}
{V t474=([&](){V t475=get(e->slot(1,2),lit146);return !truth(t475)?e->slot(0,0):t475;})();e->slot(0,3)=std::move(t474);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit148)};V t476=e->slot(0,3);refs[0].put(std::move(t476));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit146)};V t477=first(call(e->slot(3,8),Args{get(e->slot(1,2),lit146),e->slot(0,0),get(get(e->slot(3,1),lit15),lit100),e->slot(2,0)}));refs[0].put(std::move(t477));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit149)};V t478=divv(sub(get(e->slot(1,2),lit146),e->slot(0,3)),first(call(get(e->get("math"),lit211),Args{e->slot(2,0),V(0.001)})));refs[0].put(std::move(t478));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit150)};V t479=first(call(e->slot(3,6),Args{mul(V(-num(get(e->slot(1,2),lit149))),e->slot(2,0)),V(0.0),V(3.0)}));refs[0].put(std::move(t479));}
{V t480=([&](){V t481=get(e->slot(1,2),lit153);return !truth(t481)?V(1.0):t481;})();e->slot(0,4)=std::move(t480);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit156)};V t482=e->slot(0,4);refs[0].put(std::move(t482));}
call(e->slot(3,20),Args{e->slot(1,0),e->slot(1,2),e->slot(2,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit157)};V t483=divv(sub(get(e->slot(1,2),lit153),e->slot(0,4)),first(call(get(e->get("math"),lit211),Args{e->slot(2,0),V(0.001)})));refs[0].put(std::move(t483));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit158)};V t484=first(call(get(e->get("math"),lit211),Args{V(0.0),get(e->slot(1,2),lit157)}));refs[0].put(std::move(t484));}
{V t485=first(call(get(e->get("math"),lit210),call(e->slot(3,19),Args{e->slot(1,0),e->slot(1,1)})));e->slot(0,5)=std::move(t485);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit162)};V t486=first(call(e->slot(3,8),Args{get(e->slot(1,2),lit162),e->slot(0,5),get(get(e->slot(3,1),lit15),lit102),e->slot(2,0)}));refs[0].put(std::move(t486));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit163)};V t487=first(call(e->slot(3,6),Args{divv(get(e->slot(1,2),lit162),first(call(get(e->get("math"),lit211),Args{get(get(e->slot(3,1),lit15),lit28),V(1.0)}))),V(0.0),V(2.0)}));refs[0].put(std::move(t487));}
call(e->slot(3,21),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,22),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,23),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,24),Args{e->slot(1,0),e->slot(1,2)});
call(e->slot(3,34),Args{e->slot(1,0),e->slot(1,2),e->slot(2,0)});
}else{call(e->slot(2,35),Args{e->slot(0,0),e->slot(1,0)});
}
{std::array<Ref,1> refs{Ref(e,1,3)};V t488=add(e->slot(1,3),([&](){V t489=get(e->slot(0,2),lit200);return !truth(t489)?V(0.0):t489;})());refs[0].put(std::move(t488));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t490=add(e->slot(1,4),([&](){V t491=get(e->slot(0,2),lit201);return !truth(t491)?V(1.0):t491;})());refs[0].put(std::move(t490));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t492=add(e->slot(1,5),([&](){V t493=get(e->slot(0,2),lit202);return !truth(t493)?V(0.0):t493;})());refs[0].put(std::move(t492));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t494=add(e->slot(1,6),([&](){V t495=get(e->slot(0,2),lit199);return !truth(t495)?V(0.0):t495;})());refs[0].put(std::move(t494));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t496=add(e->slot(1,7),([&](){V t497=get(e->slot(0,2),lit203);return !truth(t497)?V(0.0):t497;})());refs[0].put(std::move(t496));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t498=add(e->slot(1,8),([&](){V t499=get(e->slot(0,2),lit204);return !truth(t499)?V(0.0):t499;})());refs[0].put(std::move(t498));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t500=add(e->slot(1,9),([&](){V t501=get(e->slot(0,2),lit205);return !truth(t501)?V(0.0):t501;})());refs[0].put(std::move(t500));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t502=first(call(get(e->get("math"),lit211),Args{e->slot(1,10),([&](){V t503=get(e->slot(0,2),lit200);return !truth(t503)?V(0.0):t503;})()}));refs[0].put(std::move(t502));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t504=first(call(get(e->get("math"),lit211),Args{e->slot(1,11),([&](){V t505=get(e->slot(0,2),lit202);return !truth(t505)?V(0.0):t505;})()}));refs[0].put(std::move(t504));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t506=first(call(get(e->get("math"),lit211),Args{e->slot(1,12),([&](){V t507=get(e->slot(0,2),lit199);return !truth(t507)?V(0.0):t507;})()}));refs[0].put(std::move(t506));}
call(e->slot(2,37),Args{e->slot(0,0),e->slot(0,2)});
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit123)};V t508=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t508));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit124)};V t509=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t509));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit125)};V t510=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t510));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit126)};V t511=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t511));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit127)};V t512=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t512));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit128)};V t513=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t513));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit129)};V t514=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t514));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit112)};V t515=e->slot(0,10);refs[0].put(std::move(t515));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit113)};V t516=e->slot(0,11);refs[0].put(std::move(t516));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit111)};V t517=e->slot(0,12);refs[0].put(std::move(t517));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit130)};V t518=mul(add(([&](){V t519=get(get(get(get(e->slot(1,1),lit118),lit144),V(2.0)),lit200);return !truth(t519)?V(0.0):t519;})(),([&](){V t520=get(get(get(get(e->slot(1,1),lit118),lit144),V(3.0)),lit200);return !truth(t520)?V(0.0):t520;})()),V(0.5));refs[0].put(std::move(t518));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit118),lit131)};V t521=mul(add(([&](){V t522=get(get(get(get(e->slot(1,1),lit118),lit144),V(2.0)),lit202);return !truth(t522)?V(0.0):t522;})(),([&](){V t523=get(get(get(get(e->slot(1,1),lit118),lit144),V(3.0)),lit202);return !truth(t523)?V(0.0):t523;})()),V(0.5));refs[0].put(std::move(t521));}
call(e->slot(1,38),Args{});
return Args{};}));
Ref(e->slot(0,1),lit414).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t524=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t524);}
return Args{([&](){V t525=([&](){V t526=e->slot(0,1);return truth(t526)?get(e->slot(0,1),lit200):t526;})();return !truth(t525)?V(0.0):t525;})()};
return Args{};}));
Ref(e->slot(0,1),lit415).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t527=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t527);}
return Args{([&](){V t528=([&](){V t529=e->slot(0,1);return truth(t529)?get(e->slot(0,1),lit201):t529;})();return !truth(t528)?V(1.0):t528;})()};
return Args{};}));
Ref(e->slot(0,1),lit416).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t530=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t530);}
return Args{([&](){V t531=([&](){V t532=e->slot(0,1);return truth(t532)?get(e->slot(0,1),lit202):t532;})();return !truth(t531)?V(0.0):t531;})()};
return Args{};}));
Ref(e->slot(0,1),lit417).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t533=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t533);}
return Args{([&](){V t534=([&](){V t535=e->slot(0,1);return truth(t535)?get(e->slot(0,1),lit204):t535;})();return !truth(t534)?V(0.0):t534;})()};
return Args{};}));
Ref(e->slot(0,1),lit418).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t536=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t536);}
return Args{([&](){V t537=([&](){V t538=e->slot(0,1);return truth(t538)?get(e->slot(0,1),lit205):t538;})();return !truth(t537)?V(0.0):t537;})()};
return Args{};}));
Ref(e->slot(0,1),lit419).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t539=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t539);}
return Args{([&](){V t540=([&](){V t541=e->slot(0,1);return truth(t541)?get(e->slot(0,1),lit199):t541;})();return !truth(t540)?V(0.0):t540;})()};
return Args{};}));
Ref(e->slot(0,1),lit420).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t542=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t542);}
return Args{([&](){V t543=([&](){V t544=e->slot(0,1);return truth(t544)?get(e->slot(0,1),lit203):t544;})();return !truth(t543)?V(0.0):t543;})()};
return Args{};}));
Ref(e->slot(0,1),lit421).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t545=get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0));e->slot(0,1)=std::move(t545);}
return Args{([&](){V t546=([&](){V t547=e->slot(0,1);return truth(t547)?get(e->slot(0,1),lit207):t547;})();return !truth(t546)?lit336:t546;})()};
return Args{};}));
Ref(e->slot(0,1),lit422).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit118)};
}
return Args{get(get(get(e->slot(1,1),lit118),lit144),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit423).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t548=([&](){V t549=get(get(get(e->slot(1,1),lit118),lit144),([&](){V t550=e->slot(0,0);return !truth(t550)?V(0.0):t550;})());return !truth(t549)?get(get(get(e->slot(1,1),lit118),lit144),V(0.0)):t549;})();e->slot(0,1)=std::move(t548);}
return call(get(e->get("string"),lit424),Args{concat(lit425,concat(lit426,concat(lit427,concat(lit428,concat(lit429,concat(lit430,lit431)))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit118),lit119)})),([&](){V t551=get(get(e->slot(1,1),lit118),lit121);return !truth(t551)?V(0.0):t551;})(),([&](){V t552=([&](){V t553=get(get(e->slot(1,1),lit118),lit122);return truth(t553)?lit432:t553;})();return !truth(t552)?lit433:t552;})(),first(call(e->get("tostring"),Args{([&](){V t554=get(e->slot(0,1),lit207);return !truth(t554)?lit336:t554;})()})),([&](){V t555=get(e->slot(0,1),lit200);return !truth(t555)?V(0.0):t555;})(),([&](){V t556=get(e->slot(0,1),lit201);return !truth(t556)?V(1.0):t556;})(),([&](){V t557=get(e->slot(0,1),lit202);return !truth(t557)?V(0.0):t557;})(),([&](){V t558=get(e->slot(0,1),lit199);return !truth(t558)?V(0.0):t558;})(),([&](){V t559=get(e->slot(0,1),lit203);return !truth(t559)?V(0.0):t559;})(),([&](){V t560=get(e->slot(0,1),lit204);return !truth(t560)?V(0.0):t560;})(),([&](){V t561=get(e->slot(0,1),lit205);return !truth(t561)?V(0.0):t561;})(),([&](){V t562=get(e->slot(0,1),lit146);return !truth(t562)?V(0.0):t562;})(),([&](){V t563=get(e->slot(0,1),lit150);return !truth(t563)?V(0.0):t563;})(),([&](){V t564=get(e->slot(0,1),lit155);return !truth(t564)?V(1.0):t564;})(),([&](){V t565=get(e->slot(0,1),lit153);return !truth(t565)?V(0.0):t565;})(),([&](){V t566=get(e->slot(0,1),lit162);return !truth(t566)?V(0.0):t566;})(),([&](){V t567=get(e->slot(0,1),lit168);return !truth(t567)?V(0.0):t567;})(),([&](){V t568=get(e->slot(0,1),lit169);return !truth(t568)?V(0.0):t568;})(),([&](){V t569=get(e->slot(0,1),lit170);return !truth(t569)?V(0.0):t569;})(),([&](){V t570=get(e->slot(0,1),lit175);return !truth(t570)?V(0.0):t570;})(),([&](){V t571=get(e->slot(0,1),lit178);return !truth(t571)?V(0.0):t571;})(),([&](){V t572=get(e->slot(0,1),lit177);return !truth(t572)?V(0.0):t572;})(),([&](){V t573=get(e->slot(0,1),lit183);return !truth(t573)?V(0.0):t573;})(),([&](){V t574=get(e->slot(0,1),lit184);return !truth(t574)?V(0.0):t574;})(),([&](){V t575=([&](){V t576=get(get(e->slot(1,1),lit118),lit132);return truth(t576)?lit432:t576;})();return !truth(t575)?lit433:t575;})(),([&](){V t577=([&](){V t578=get(get(e->slot(1,1),lit118),lit133);return truth(t578)?lit432:t578;})();return !truth(t577)?lit433:t577;})(),([&](){V t579=([&](){V t580=get(get(e->slot(1,1),lit118),lit134);return truth(t580)?lit432:t580;})();return !truth(t579)?lit433:t579;})(),([&](){V t581=([&](){V t582=get(get(e->slot(1,1),lit118),lit135);return truth(t582)?lit432:t582;})();return !truth(t581)?lit433:t581;})(),([&](){V t583=([&](){V t584=get(get(e->slot(1,1),lit118),lit136);return truth(t584)?lit432:t584;})();return !truth(t583)?lit433:t583;})(),([&](){V t585=([&](){V t586=get(get(e->slot(1,1),lit118),lit137);return truth(t586)?lit432:t586;})();return !truth(t585)?lit433:t585;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
