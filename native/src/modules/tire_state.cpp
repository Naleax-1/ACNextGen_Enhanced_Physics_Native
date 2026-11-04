// Generated native C++ from pinned tire_state.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("relaxLateral");
static const V lit3("relaxLongitudinal");
static const V lit4("minSpeed");
static const V lit5("minRelaxLength");
static const V lit6("memoryLagGain");
static const V lit7("complianceLagGain");
static const V lit8("defaultLoad");
static const V lit9("loadReference");
static const V lit10("preferIntegratedLoad");
static const V lit11("loadRelaxGain");
static const V lit12("minLoadRelaxScale");
static const V lit13("maxLoadRelaxScale");
static const V lit14("slipAngleRefRad");
static const V lit15("slipRatioRef");
static const V lit16("combinedSlipRatioWeight");
static const V lit17("combinedSlipAngleWeight");
static const V lit18("slipEnergyTau");
static const V lit19("slipEnergyGain");
static const V lit20("slipEnergyOverStart");
static const V lit21("maxCombinedSlip");
static const V lit22("maxSlipEnergy");
static const V lit23("contactLossLagGain");
static const V lit24("contactEnergyLagGain");
static const V lit25("contactQualityRecoverGain");
static const V lit26("tireLimitLagGain");
static const V lit27("tireGripRecoverGain");
static const V lit28("tireHopLagGain");
static const V lit29("armCamberLatGain");
static const V lit30("armToeLongGain");
static const V lit31("armLagGain");
static const V lit32("driveRearLongLagGain");
static const V lit33("lsdRearLongLagGain");
static const V lit34("shaftRearLongLagGain");
static const V lit35("windupRearLongLagGain");
static const V lit36("carcassDelayLagGain");
static const V lit37("carcassHysteresisLagGain");
static const V lit38("carcassSupportRecoverGain");
static const V lit39("recoveryLagReduceGain");
static const V lit40("roadInputLagGain");
static const V lit41("loadPathLagGain");
static const V lit42("thermalLagGain");
static const V lit43("maxLag");
static const V lit44("minLag");
static const V lit45("noWheelDecayTau");
static const V lit46("noCarDecayTau");
static const V lit47("debugStoreInterval");
static const V lit48("state");
static const V lit49("wheels");
static const V lit50("slipAngle");
static const V lit51("slipRatio");
static const V lit52("rawSlipAngleLegacy");
static const V lit53("rawSlipRatioLegacy");
static const V lit54("load");
static const V lit55("omega");
static const V lit56("active");
static const V lit57("valid");
static const V lit58("status");
static const V lit59("INIT");
static const V lit60("updateCount");
static const V lit61("wheelsValid");
static const V lit62("speedMs");
static const V lit63("speedKmh");
static const V lit64("avgCombinedSlip");
static const V lit65("avgSlipEnergy");
static const V lit66("avgLoad");
static const V lit67("avgLag");
static const V lit68("activeCount");
static const V lit69("contactLinked");
static const V lit70("memoryLinked");
static const V lit71("complianceLinked");
static const V lit72("dynamicsLinked");
static const V lit73("hopLinked");
static const V lit74("armLinked");
static const V lit75("drivetrainLinked");
static const V lit76("lsdLinked");
static const V lit77("loadLinked");
static const V lit78("carcassLinked");
static const V lit79("recoveryLinked");
static const V lit80("roadLinked");
static const V lit81("loadPathLinked");
static const V lit82("thermalLinked");
static const V lit83("debugStoreTimer");
static const V lit84("debugStoreNow");
static const V lit85("filteredSlipAngle");
static const V lit86("filteredSlipRatio");
static const V lit87("rawSlipAngle");
static const V lit88("rawSlipRatio");
static const V lit89("effectiveSlipAngle");
static const V lit90("effectiveSlipRatio");
static const V lit91("combinedSlip");
static const V lit92("combinedSlipRaw");
static const V lit93("slipEnergy");
static const V lit94("loadScale");
static const V lit95("loadRelaxScale");
static const V lit96("loadSource");
static const V lit97("DEFAULT");
static const V lit98("normalLoad");
static const V lit99("wheelLoad");
static const V lit100("angularSpeed");
static const V lit101("lag");
static const V lit102("rubberLag");
static const V lit103("memory");
static const V lit104("memoryGrip");
static const V lit105("responseDelay");
static const V lit106("contactLoss");
static const V lit107("contactEnergy");
static const V lit108("contactQuality");
static const V lit109("tireLimit");
static const V lit110("tireGrip");
static const V lit111("hopEnergy");
static const V lit112("armCamber");
static const V lit113("armToe");
static const V lit114("driveTorque");
static const V lit115("driveTorqueNm");
static const V lit116("lsdLock");
static const V lit117("lsdDiff");
static const V lit118("shaftTwist");
static const V lit119("driveLash");
static const V lit120("carcassSupport");
static const V lit121("carcassDelay");
static const V lit122("carcassHysteresis");
static const V lit123("carcassRecoveryBias");
static const V lit124("slipRecoveryRate");
static const V lit125("dirtyReturn");
static const V lit126("snapRisk");
static const V lit127("roadSeverity");
static const V lit128("roadImpact");
static const V lit129("loadPathLoss");
static const V lit130("thermalStress");
static const V lit131("lateralRelaxLength");
static const V lit132("longitudinalRelaxLength");
static const V lit133("storeOnly");
static const V lit134("debug");
static const V lit135("huge");
static const V lit136("abs");
static const V lit137("safeLoadRaw");
static const V lit138("safeStore");
static const V lit139("safeField");
static const V lit140("getCar");
static const V lit141("#");
static const V lit142("max");
static const V lit143("ngp_tire_state_speed_kmh");
static const V lit144("loadK");
static const V lit145("AC_");
static const V lit146("upper");
static const V lit147("ngp_tire_load_input_");
static const V lit148("ngp_wheel_load_");
static const V lit149("ngp_load_wheel_");
static const V lit150("ngp_contact_load_");
static const V lit151("ngp_tire_carcass_load_");
static const V lit152("ngp_tire_force_load_");
static const V lit153("ngp_load_path_load_");
static const V lit154("ngp_lp_load_");
static const V lit155("ngp_sprung_load_");
static const V lit156("NGP_LOAD");
static const V lit157("ngp_dlt_load_");
static const V lit158("DLT");
static const V lit159("ngp_contact_slip_angle_");
static const V lit160("ngp_tire_carcass_slip_angle_");
static const V lit161("ngp_tire_force_effective_slip_angle_");
static const V lit162("ngp_tdyn_effective_slip_angle_");
static const V lit163("ngp_slip_recovery_slip_angle_");
static const V lit164("ngp_contact_slip_ratio_");
static const V lit165("ngp_tire_carcass_slip_ratio_");
static const V lit166("ngp_tire_force_effective_slip_ratio_");
static const V lit167("ngp_tdyn_effective_slip_ratio_");
static const V lit168("ngp_slip_recovery_slip_ratio_");
static const V lit169("ngp_wheel_omega_");
static const V lit170("ngp_hub_omega_");
static const V lit171("ngp_tire_omega_");
static const V lit172("ngp_rubber_lag_");
static const V lit173("ngp_tdyn_rubber_lag_");
static const V lit174("ngp_tire_force_lag_");
static const V lit175("ngp_memory_");
static const V lit176("ngp_rubber_memory_");
static const V lit177("ngp_tire_memory_");
static const V lit178("ngp_tyre_memory_");
static const V lit179("ngp_tm_memory_");
static const V lit180("ngp_memory_grip_");
static const V lit181("ngp_tire_memory_grip_");
static const V lit182("ngp_tyre_memory_grip_");
static const V lit183("ngp_tm_grip_");
static const V lit184("ngp_tire_response_delay");
static const V lit185("ngp_tyre_response_delay");
static const V lit186("ngp_tcomp_response_delay");
static const V lit187("ngp_tire_compliance_response_delay");
static const V lit188("ngp_tire_relax_scale_");
static const V lit189("ngp_tcr_relax_scale_");
static const V lit190("ngp_tcomp_relax_scale_");
static const V lit191("ngp_tire_contact_loss_");
static const V lit192("ngp_tcr_contact_loss_");
static const V lit193("ngp_contact_loss_");
static const V lit194("ngp_contact_hop_drop_");
static const V lit195("ngp_contact_quality_");
static const V lit196("ngp_tire_contact_quality_");
static const V lit197("ngp_tcr_quality_");
static const V lit198("ngp_tc_contact_");
static const V lit199("ngp_tcr_energy_push_");
static const V lit200("ngp_tc_energy_");
static const V lit201("ngp_tire_slip_energy_");
static const V lit202("ngp_tire_force_slip_energy_");
static const V lit203("ngp_tire_limit_");
static const V lit204("ngp_tyre_limit_");
static const V lit205("ngp_tire_force_limit_");
static const V lit206("ngp_td_limit_");
static const V lit207("ngp_tire_grip_");
static const V lit208("ngp_tyre_grip_");
static const V lit209("ngp_tire_force_grip_");
static const V lit210("ngp_td_grip_");
static const V lit211("ngp_tire_hop_energy_");
static const V lit212("ngp_tirehop_energy_");
static const V lit213("ngp_thop_energy_");
static const V lit214("ngp_control_arm_camber_");
static const V lit215("ngp_arm_camber_");
static const V lit216("ngp_compliance_camber_");
static const V lit217("ngp_uc_camber_");
static const V lit218("ngp_control_arm_toe_");
static const V lit219("ngp_arm_toe_");
static const V lit220("ngp_compliance_toe_");
static const V lit221("ngp_uc_toe_");
static const V lit222("ngp_carcass_support_");
static const V lit223("ngp_tire_carcass_support_");
static const V lit224("ngp_contact_carcass_support_");
static const V lit225("ngp_contact_delay_");
static const V lit226("ngp_tire_contact_delay_");
static const V lit227("ngp_carcass_contact_delay_");
static const V lit228("ngp_carcass_hysteresis_");
static const V lit229("ngp_tire_carcass_hysteresis_");
static const V lit230("ngp_contact_hysteresis_");
static const V lit231("ngp_carcass_recovery_bias_");
static const V lit232("ngp_contact_recovery_bias_");
static const V lit233("ngp_slip_recovery_rate_");
static const V lit234("ngp_recovery_rate_");
static const V lit235("ngp_sr_recovery_");
static const V lit236("ngp_slip_dirty_return_");
static const V lit237("ngp_dirty_return_");
static const V lit238("ngp_sr_dirty_return_");
static const V lit239("ngp_slip_snap_risk_");
static const V lit240("ngp_snap_risk_");
static const V lit241("ngp_sr_snap_risk_");
static const V lit242("ngp_road_input_severity_");
static const V lit243("ngp_rii_severity_");
static const V lit244("ngp_road_severity_");
static const V lit245("ngp_road_impact_");
static const V lit246("ngp_rii_impact_");
static const V lit247("ngp_impact_strength_");
static const V lit248("ngp_load_path_loss_");
static const V lit249("ngp_lp_loss_");
static const V lit250("ngp_road_path_loss_");
static const V lit251("ngp_thermal_stress_");
static const V lit252("ngp_tire_memory_heat_");
static const V lit253("ngp_memory_thermal_");
static const V lit254("ngp_tire_temp_grip_");
static const V lit255("ngp_drive_torque");
static const V lit256("ngp_drivetrain_torque");
static const V lit257("ngp_drive_torque_normalized_from_nm");
static const V lit258("ngp_drive_torque_nm");
static const V lit259("ngp_wheel_drive_torque_nm");
static const V lit260("ngp_diff_input_torque_nm");
static const V lit261("ngp_lsd_lock");
static const V lit262("ngp_diff_lock");
static const V lit263("ngp_lsd_diff");
static const V lit264("ngp_diff_diff");
static const V lit265("ngp_shaft_twist");
static const V lit266("ngp_windup_twist");
static const V lit267("ngp_driveline_windup_twist");
static const V lit268("ngp_drive_lash");
static const V lit269("ngp_driveline_lash");
static const V lit270("ngp_windup_lash");
static const V lit271("relaxScaleInput");
static const V lit272("min");
static const V lit273("exp");
static const V lit274("sqrt");
static const V lit275("UNKNOWN");
static const V lit276("NO CAR");
static const V lit277("ngp_slip_angle_");
static const V lit278("ngp_slip_ratio_");
static const V lit279("ngp_filtered_slip_angle_");
static const V lit280("ngp_filtered_slip_ratio_");
static const V lit281("ngp_tire_slip_angle_");
static const V lit282("ngp_tire_slip_ratio_");
static const V lit283("ngp_tire_filtered_slip_angle_");
static const V lit284("ngp_tire_filtered_slip_ratio_");
static const V lit285("ngp_tire_state_active_");
static const V lit286("ngp_tire_state_store_only_");
static const V lit287("ngp_tire_effective_slip_angle_");
static const V lit288("ngp_tire_effective_slip_ratio_");
static const V lit289("ngp_tire_combined_slip_");
static const V lit290("ngp_tire_combined_slip_raw_");
static const V lit291("ngp_tire_load_");
static const V lit292("ngp_ts_slip_angle_");
static const V lit293("ngp_ts_slip_ratio_");
static const V lit294("ngp_ts_combined_slip_");
static const V lit295("ngp_ts_slip_energy_");
static const V lit296("ngp_ts_load_");
static const V lit297("ngp_ts_lag_");
static const V lit298("ngp_raw_slip_angle_");
static const V lit299("ngp_raw_slip_ratio_");
static const V lit300("ngp_tire_raw_slip_angle_");
static const V lit301("ngp_tire_raw_slip_ratio_");
static const V lit302("ngp_tire_state_load_");
static const V lit303("ngp_tire_state_load_scale_");
static const V lit304("ngp_tire_state_load_relax_scale_");
static const V lit305("ngp_tire_state_load_source_");
static const V lit306("ngp_tire_relax_lat_");
static const V lit307("ngp_tire_relax_long_");
static const V lit308("ngp_tire_state_lag_");
static const V lit309("ngp_tire_state_contact_loss_");
static const V lit310("ngp_tire_state_contact_quality_");
static const V lit311("ngp_tire_state_hop_");
static const V lit312("ngp_tire_state_lsd_");
static const V lit313("ngp_tire_state_memory_");
static const V lit314("ngp_tire_state_memory_grip_");
static const V lit315("ngp_tire_state_response_delay_");
static const V lit316("ngp_tire_state_carcass_delay_");
static const V lit317("ngp_tire_state_recovery_rate_");
static const V lit318("ngp_tire_state_road_severity_");
static const V lit319("ngp_tire_state_status");
static const V lit320("ngp_tire_state_update_count");
static const V lit321("ngp_tire_state_wheels_valid");
static const V lit322("ngp_tire_state_valid");
static const V lit323("ngp_tire_state_speed_ms");
static const V lit324("ngp_tire_state_avg_combined_slip");
static const V lit325("ngp_tire_state_avg_slip_energy");
static const V lit326("ngp_tire_state_avg_load");
static const V lit327("ngp_tire_state_avg_lag");
static const V lit328("ngp_tire_state_active_count");
static const V lit329("ngp_ts_avg_combined_slip");
static const V lit330("ngp_ts_avg_slip_energy");
static const V lit331("ngp_ts_avg_load");
static const V lit332("ngp_ts_active_count");
static const V lit333("ngp_tire_state_contact_linked");
static const V lit334("ngp_tire_state_memory_linked");
static const V lit335("ngp_tire_state_compliance_linked");
static const V lit336("ngp_tire_state_dynamics_linked");
static const V lit337("ngp_tire_state_hop_linked");
static const V lit338("ngp_tire_state_arm_linked");
static const V lit339("ngp_tire_state_drivetrain_linked");
static const V lit340("ngp_tire_state_lsd_linked");
static const V lit341("ngp_tire_state_load_linked");
static const V lit342("ngp_tire_state_carcass_linked");
static const V lit343("ngp_tire_state_recovery_linked");
static const V lit344("ngp_tire_state_road_linked");
static const V lit345("ngp_tire_state_load_path_linked");
static const V lit346("ngp_tire_state_thermal_linked");
static const V lit347("init");
static const V lit348("update");
static const V lit349("BAD DT");
static const V lit350("RUNNING");
static const V lit351("NO WHEELS");
static const V lit352("getState");
static const V lit353("getSlipAngle");
static const V lit354("getSlipRatio");
static const V lit355("getRawSlipAngle");
static const V lit356("getRawSlipRatio");
static const V lit357("getCombinedSlip");
static const V lit358("getSlipEnergy");
static const V lit359("getLoad");
static const V lit360("debugStr");
static const V lit361("format");
static const V lit362("Status %s / Count %.0f\n");
static const V lit363("SA %.3f->%.3f SR %.3f->%.3f\n");
static const V lit364("Comb %.2f E %.2f Load %.0f/%s Lag %.3f\n");
static const V lit365("Mem %.3f Resp %.3f CT %.2f Hop %.2f LSD %.2f Store %s");
static const V lit366("NIL");
static const V lit367("YES");
static const V lit368("NO");
static const V lit369("Status %s / Count %.0f / Wheels %s / Active %.0f\n");
static const V lit370("SA FL %.3f FR %.3f RL %.3f RR %.3f\n");
static const V lit371("SR FL %.3f FR %.3f RL %.3f RR %.3f\n");
static const V lit372("Comb %.2f E %.2f Load %.0f Lag %.3f Speed %.1f\n");
static const V lit373("Links CT:%s MEM:%s CP:%s TD:%s HOP:%s ARM:%s DT:%s LSD:%s CAR:%s REC:%s");
static const V lit374("OK");
V load_tire_state(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(33);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.18));set(z,lit3,V(0.2));set(z,lit4,V(0.5));set(z,lit5,V(0.001));set(z,lit6,V(0.2));set(z,lit7,V(0.25));set(z,lit8,V(3000.0));set(z,lit9,V(3000.0));set(z,lit10,V(true));set(z,lit11,V(0.28));set(z,lit12,V(0.72));set(z,lit13,V(1.42));set(z,lit14,V(0.174533));set(z,lit15,V(0.12));set(z,lit16,V(1.0));set(z,lit17,V(1.0));set(z,lit18,V(0.12));set(z,lit19,V(0.7));set(z,lit20,V(0.55));set(z,lit21,V(3.0));set(z,lit22,V(2.5));set(z,lit23,V(0.18));set(z,lit24,V(0.12));set(z,lit25,V(0.08));set(z,lit26,V(0.14));set(z,lit27,V(0.06));set(z,lit28,V(0.16));set(z,lit29,V(0.06));set(z,lit30,V(0.08));set(z,lit31,V(0.04));set(z,lit32,V(0.1));set(z,lit33,V(0.08));set(z,lit34,V(0.06));set(z,lit35,V(0.06));set(z,lit36,V(0.14));set(z,lit37,V(0.08));set(z,lit38,V(0.06));set(z,lit39,V(0.08));set(z,lit40,V(0.08));set(z,lit41,V(0.05));set(z,lit42,V(0.06));set(z,lit43,V(2.0));set(z,lit44,V(-num(V(0.5))));set(z,lit45,V(0.16));set(z,lit46,V(0.32));set(z,lit47,V(0.25));return z;})();refs[0].put(std::move(t3));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit48)};V t4=([&](){V z=table();set(z,lit49,([&](){V z=table();return z;})());set(z,lit50,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit51,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit52,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit53,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit54,([&](){V z=table();set(z,V(0.0),V(3000.0));set(z,V(1.0),V(3000.0));set(z,V(2.0),V(3000.0));set(z,V(3.0),V(3000.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(false));set(z,V(1.0),V(false));set(z,V(2.0),V(false));set(z,V(3.0),V(false));return z;})());set(z,lit57,V(false));set(z,lit58,lit59);set(z,lit60,V(0.0));set(z,lit61,V(false));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(3000.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(false));set(z,lit70,V(false));set(z,lit71,V(false));set(z,lit72,V(false));set(z,lit73,V(false));set(z,lit74,V(false));set(z,lit75,V(false));set(z,lit76,V(false));set(z,lit77,V(false));set(z,lit78,V(false));set(z,lit79,V(false));set(z,lit80,V(false));set(z,lit81,V(false));set(z,lit82,V(false));set(z,lit83,V(999.0));set(z,lit84,V(true));return z;})();refs[0].put(std::move(t4));}
{double t5=num(V(0.0)),t6=num(V(3.0)),t7=num(V(1.0));for(double t8=t5;(t7>0?t8<=t6:t8>=t6);t8+=t7){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t8);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0))};V t9=([&](){V z=table();set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(1.0));set(z,lit95,V(1.0));set(z,lit96,lit97);set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit54,get(get(e->slot(1,1),lit1),lit8));set(z,lit98,get(get(e->slot(1,1),lit1),lit8));set(z,lit99,get(get(e->slot(1,1),lit1),lit8));set(z,lit55,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(1.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(1.0));set(z,lit109,V(0.0));set(z,lit110,V(1.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(1.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(0.0));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit130,V(0.0));set(z,lit131,get(get(e->slot(1,1),lit1),lit2));set(z,lit132,get(get(e->slot(1,1),lit1),lit3));set(z,lit56,V(false));set(z,lit133,V(false));return z;})();refs[0].put(std::move(t9));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),e->slot(0,0))};V t10=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));refs[0].put(std::move(t10));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t11=get(e->slot(0,1),lit48);refs[0].put(std::move(t11));}
e->slot(0,2)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=([&](){V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t13)?V(0.0):t13;})();refs[0].put(std::move(t12));}
if(truth(ne(e->slot(0,0),e->slot(0,0)))){return Args{e->slot(0,1)};
}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(([&](){V t15=([&](){V t16=([&](){V t17=eq(e->slot(0,2),V());return !truth(t17)?ne(e->slot(0,2),e->slot(0,2)):t17;})();return !truth(t16)?eq(e->slot(0,2),get(e->get("math"),lit135)):t16;})();return !truth(t15)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit135)))):t15;})())){return Args{([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit136),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t19=get(e->slot(0,0),lit137);e->slot(0,5)=std::move(t19);}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t20=first(call(e->slot(1,5),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t20);}
if(truth(eq(e->slot(0,2),V()))){if(truth(eq(e->slot(0,1),V()))){return Args{V()};
}
return Args{e->slot(0,1)};
}
return call(e->slot(1,3),Args{e->slot(0,2),e->slot(0,1)});
return Args{};});
{V t21=get(e->slot(0,0),lit138);e->slot(0,7)=std::move(t21);}
{V t22=get(e->slot(0,0),lit139);e->slot(0,8)=std::move(t22);}
e->slot(0,9)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(e->slot(0,0))){return Args{e->slot(0,0)};
}
if(truth(([&](){V t23=V(!truth(e->get("ac")));return !truth(t23)?V(!truth(get(e->get("ac"),lit140))):t23;})())){return Args{V()};
}
{Args t24=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit140),Args{V(0.0)});
return Args{};})});e->slot(0,1)=arg(t24,0);e->slot(0,2)=arg(t24,1);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return call(e->slot(1,8),Args{e->slot(0,0),lit49,V()});
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{([&](){V t25=first(call(e->slot(1,8),Args{e->slot(0,0),e->slot(0,1),V()}));return !truth(t25)?first(call(e->slot(1,8),Args{e->slot(0,0),add(e->slot(0,1),V(1.0)),V()})):t25;})()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t26=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t27=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t28=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t29=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t29));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t30=first(call(e->slot(1,2),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t30);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{double t31=num(V(1.0)),t32=num(first(call(e->get("select"),joined(Args{lit141},e->dots())))),t33=num(V(1.0));for(double t34=t31;(t33>0?t34<=t32:t34>=t32);t34+=t33){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t34);{V t35=first(call(e->get("select"),joined(Args{e->slot(0,0)},e->dots())));e->slot(0,1)=std::move(t35);}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t36=first(call(e->slot(3,5),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t36);}
if(truth(ne(e->slot(0,0),V()))){return Args{first(call(e->slot(3,3),Args{e->slot(0,0),([&](){V t37=e->slot(2,0);return !truth(t37)?V(0.0):t37;})()})),e->slot(1,1)};
}
}
}}
if(truth(eq(e->slot(0,0),V()))){return Args{V(),V()};
}
return Args{e->slot(0,0),V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit83)};V t38=add(([&](){V t39=get(get(e->slot(1,1),lit48),lit83);return !truth(t39)?V(0.0):t39;})(),([&](){V t40=e->slot(0,0);return !truth(t40)?V(0.0):t40;})());refs[0].put(std::move(t38));}
if(truth(ge(get(get(e->slot(1,1),lit48),lit83),get(get(e->slot(1,1),lit1),lit47)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit83)};V t41=V(0.0);refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit84)};V t42=V(true);refs[0].put(std::move(t42));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit84)};V t43=V(false);refs[0].put(std::move(t43));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit69)};V t44=V(false);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit70)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit71)};V t46=V(false);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit72)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit73)};V t48=V(false);refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit74)};V t49=V(false);refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit75)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit76)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit77)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit78)};V t53=V(false);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit79)};V t54=V(false);refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit80)};V t55=V(false);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit81)};V t56=V(false);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit82)};V t57=V(false);refs[0].put(std::move(t57));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t58=first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,0),lit63,V()})),V()}));e->slot(0,1)=std::move(t58);}
if(truth(ne(e->slot(0,1),V()))){return joined(Args{first(call(get(e->get("math"),lit142),Args{e->slot(0,1),V(0.0)}))},call(get(e->get("math"),lit142),Args{divv(e->slot(0,1),V(3.6)),V(0.0)}));
}
{V t59=first(call(e->slot(1,3),Args{V(),V()}));e->slot(0,2)=std::move(t59);}
if(truth(ne(e->slot(0,2),V()))){if(truth(le(first(call(get(e->get("math"),lit136),Args{e->slot(0,2)})),V(140.0)))){return joined(Args{first(call(get(e->get("math"),lit142),Args{mul(e->slot(0,2),V(3.6)),V(0.0)}))},call(get(e->get("math"),lit142),Args{e->slot(0,2),V(0.0)}));
}
return joined(Args{first(call(get(e->get("math"),lit142),Args{e->slot(0,2),V(0.0)}))},call(get(e->get("math"),lit142),Args{divv(e->slot(0,2),V(3.6)),V(0.0)}));
}
{V t60=first(call(e->slot(1,5),Args{lit143}));e->slot(0,3)=std::move(t60);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t61=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t61));}
return joined(Args{first(call(get(e->get("math"),lit142),Args{e->slot(0,3),V(0.0)}))},call(get(e->get("math"),lit142),Args{divv(e->slot(0,3),V(3.6)),V(0.0)}));
}
return Args{V(0.0),V(0.0)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t62=([&](){V z=table();set(z,V(1.0),lit54);set(z,V(2.0),lit144);return z;})();e->slot(0,1)=std::move(t62);}
{Args t63=call(e->get("ipairs"),Args{e->slot(0,1)});V t64=arg(t63,2);while(true){Args t65=call(arg(t63,0),Args{arg(t63,1),t64});t64=arg(t65,0);if(isnil(t64))break;auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=arg(t65,0);e->slot(0,1)=arg(t65,1);{V t66=first(call(e->slot(2,3),Args{first(call(e->slot(2,8),Args{e->slot(1,0),e->slot(0,1),V()})),V()}));e->slot(0,2)=std::move(t66);}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(get(e->get("math"),lit136),Args{e->slot(0,2)})),concat(lit145,first(call(get(e->get("string"),lit146),Args{e->slot(0,1)})))};
}
}}
return Args{V()};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t67=call(e->slot(1,13),Args{V(),concat(lit147,e->slot(0,0)),concat(lit148,e->slot(0,0)),concat(lit149,e->slot(0,0)),concat(lit150,e->slot(0,0)),concat(lit151,e->slot(0,0)),concat(lit152,e->slot(0,0)),concat(lit153,e->slot(0,0)),concat(lit154,e->slot(0,0)),concat(lit155,e->slot(0,0))});e->slot(0,1)=arg(t67,0);e->slot(0,2)=arg(t67,1);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit77)};V t68=V(true);refs[0].put(std::move(t68));}
return Args{first(call(get(e->get("math"),lit136),Args{e->slot(0,1)})),([&](){V t69=e->slot(0,2);return !truth(t69)?lit156:t69;})()};
}
{V t70=first(call(e->slot(1,5),Args{concat(lit157,e->slot(0,0))}));e->slot(0,3)=std::move(t70);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit77)};V t71=V(true);refs[0].put(std::move(t71));}
return Args{first(call(get(e->get("math"),lit142),Args{add(get(get(e->slot(1,1),lit1),lit8),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}))),V(0.0)})),lit158};
}
return Args{V(),V()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t72=call(e->slot(1,18),Args{e->slot(0,1)});e->slot(0,2)=arg(t72,0);e->slot(0,3)=arg(t72,1);}
{Args t73=call(e->slot(1,17),Args{e->slot(0,0)});e->slot(0,4)=arg(t73,0);e->slot(0,5)=arg(t73,1);}
if(truth(([&](){V t74=get(get(e->slot(1,1),lit1),lit10);return truth(t74)?ne(e->slot(0,2),V()):t74;})())){return Args{e->slot(0,2),e->slot(0,3)};
}
if(truth(ne(e->slot(0,4),V()))){return Args{e->slot(0,4),e->slot(0,5)};
}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2),e->slot(0,3)};
}
return Args{get(get(e->slot(1,1),lit1),lit8),lit97};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t75=first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,1),lit50,V()})),V()}));e->slot(0,3)=std::move(t75);}
{V t76=first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,1),lit51,V()})),V()}));e->slot(0,4)=std::move(t76);}
{V t77=V(false);e->slot(0,5)=std::move(t77);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t78=first(call(e->slot(1,13),Args{V(),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0)),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0)),concat(lit163,e->slot(0,0))}));refs[0].put(std::move(t78));}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t79=V(true);refs[0].put(std::move(t79));}
}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t80=first(call(e->slot(1,13),Args{V(),concat(lit164,e->slot(0,0)),concat(lit165,e->slot(0,0)),concat(lit166,e->slot(0,0)),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0))}));refs[0].put(std::move(t80));}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t81=V(true);refs[0].put(std::move(t81));}
}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t82=([&](){V t83=([&](){V t84=e->slot(0,2);return truth(t84)?get(e->slot(0,2),lit85):t84;})();return !truth(t83)?V(0.0):t83;})();refs[0].put(std::move(t82));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t85=([&](){V t86=([&](){V t87=e->slot(0,2);return truth(t87)?get(e->slot(0,2),lit86):t87;})();return !truth(t86)?V(0.0):t86;})();refs[0].put(std::move(t85));}
}
return Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})),e->slot(0,5)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t88=first(call(e->slot(1,3),Args{first(call(e->slot(1,8),Args{e->slot(0,1),lit100,V()})),V()}));e->slot(0,2)=std::move(t88);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t89=first(call(e->slot(1,3),Args{V(),V()}));refs[0].put(std::move(t89));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t90=first(call(e->slot(1,13),Args{V(0.0),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0)),concat(lit171,e->slot(0,0))}));refs[0].put(std::move(t90));}
}
return call(e->slot(1,3),Args{e->slot(0,2),V(0.0)});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,51);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t91=call(e->slot(1,13),Args{V(0.0),concat(lit172,e->slot(0,0)),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0))});e->slot(0,2)=arg(t91,0);e->slot(0,3)=arg(t91,1);}
{Args t92=call(e->slot(1,13),Args{V(),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0)),concat(lit178,e->slot(0,0)),concat(lit179,e->slot(0,0))});e->slot(0,4)=arg(t92,0);e->slot(0,5)=arg(t92,1);}
if(truth(e->slot(0,5))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit70)};V t93=V(true);refs[0].put(std::move(t93));}
}
{Args t94=call(e->slot(1,13),Args{V(1.0),concat(lit180,e->slot(0,0)),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0))});e->slot(0,6)=arg(t94,0);e->slot(0,7)=arg(t94,1);}
if(truth(e->slot(0,7))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit70)};V t95=V(true);refs[0].put(std::move(t95));}
}
{Args t96=call(e->slot(1,13),Args{V(),lit184,lit185,lit186,lit187});e->slot(0,8)=arg(t96,0);e->slot(0,9)=arg(t96,1);}
if(truth(e->slot(0,9))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit71)};V t97=V(true);refs[0].put(std::move(t97));}
}
{Args t98=call(e->slot(1,13),Args{V(),concat(lit188,e->slot(0,0)),concat(lit189,e->slot(0,0)),concat(lit190,e->slot(0,0))});e->slot(0,10)=arg(t98,0);e->slot(0,11)=arg(t98,1);}
if(truth(e->slot(0,11))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit71)};V t99=V(true);refs[0].put(std::move(t99));}
}
{Args t100=call(e->slot(1,13),Args{V(),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0)),concat(lit193,e->slot(0,0)),concat(lit194,e->slot(0,0))});e->slot(0,12)=arg(t100,0);e->slot(0,13)=arg(t100,1);}
{Args t101=call(e->slot(1,13),Args{V(),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0)),concat(lit197,e->slot(0,0)),concat(lit198,e->slot(0,0))});e->slot(0,14)=arg(t101,0);e->slot(0,15)=arg(t101,1);}
{Args t102=call(e->slot(1,13),Args{V(),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0)),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0))});e->slot(0,16)=arg(t102,0);e->slot(0,17)=arg(t102,1);}
if(truth(([&](){V t103=([&](){V t104=e->slot(0,13);return !truth(t104)?e->slot(0,15):t104;})();return !truth(t103)?e->slot(0,17):t103;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit69)};V t105=V(true);refs[0].put(std::move(t105));}
}
{Args t106=call(e->slot(1,13),Args{V(),concat(lit203,e->slot(0,0)),concat(lit204,e->slot(0,0)),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0))});e->slot(0,18)=arg(t106,0);e->slot(0,19)=arg(t106,1);}
{Args t107=call(e->slot(1,13),Args{V(),concat(lit207,e->slot(0,0)),concat(lit208,e->slot(0,0)),concat(lit209,e->slot(0,0)),concat(lit210,e->slot(0,0))});e->slot(0,20)=arg(t107,0);e->slot(0,21)=arg(t107,1);}
if(truth(([&](){V t108=e->slot(0,19);return !truth(t108)?e->slot(0,21):t108;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit72)};V t109=V(true);refs[0].put(std::move(t109));}
}
{Args t110=call(e->slot(1,13),Args{V(),concat(lit211,e->slot(0,0)),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0))});e->slot(0,22)=arg(t110,0);e->slot(0,23)=arg(t110,1);}
if(truth(e->slot(0,23))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit73)};V t111=V(true);refs[0].put(std::move(t111));}
}
{Args t112=call(e->slot(1,13),Args{V(),concat(lit214,e->slot(0,0)),concat(lit215,e->slot(0,0)),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0))});e->slot(0,24)=arg(t112,0);e->slot(0,25)=arg(t112,1);}
{Args t113=call(e->slot(1,13),Args{V(),concat(lit218,e->slot(0,0)),concat(lit219,e->slot(0,0)),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0))});e->slot(0,26)=arg(t113,0);e->slot(0,27)=arg(t113,1);}
if(truth(([&](){V t114=e->slot(0,25);return !truth(t114)?e->slot(0,27):t114;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit74)};V t115=V(true);refs[0].put(std::move(t115));}
}
{Args t116=call(e->slot(1,13),Args{V(),concat(lit222,e->slot(0,0)),concat(lit223,e->slot(0,0)),concat(lit224,e->slot(0,0))});e->slot(0,28)=arg(t116,0);e->slot(0,29)=arg(t116,1);}
{Args t117=call(e->slot(1,13),Args{V(),concat(lit225,e->slot(0,0)),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0))});e->slot(0,30)=arg(t117,0);e->slot(0,31)=arg(t117,1);}
{Args t118=call(e->slot(1,13),Args{V(),concat(lit228,e->slot(0,0)),concat(lit229,e->slot(0,0)),concat(lit230,e->slot(0,0))});e->slot(0,32)=arg(t118,0);e->slot(0,33)=arg(t118,1);}
{Args t119=call(e->slot(1,13),Args{V(),concat(lit231,e->slot(0,0)),concat(lit232,e->slot(0,0))});e->slot(0,34)=arg(t119,0);e->slot(0,35)=arg(t119,1);}
if(truth(([&](){V t120=([&](){V t121=([&](){V t122=e->slot(0,29);return !truth(t122)?e->slot(0,31):t122;})();return !truth(t121)?e->slot(0,33):t121;})();return !truth(t120)?e->slot(0,35):t120;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit78)};V t123=V(true);refs[0].put(std::move(t123));}
}
{Args t124=call(e->slot(1,13),Args{V(),concat(lit233,e->slot(0,0)),concat(lit234,e->slot(0,0)),concat(lit235,e->slot(0,0))});e->slot(0,36)=arg(t124,0);e->slot(0,37)=arg(t124,1);}
{Args t125=call(e->slot(1,13),Args{V(),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0))});e->slot(0,38)=arg(t125,0);e->slot(0,39)=arg(t125,1);}
{Args t126=call(e->slot(1,13),Args{V(),concat(lit239,e->slot(0,0)),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0))});e->slot(0,40)=arg(t126,0);e->slot(0,41)=arg(t126,1);}
if(truth(([&](){V t127=([&](){V t128=e->slot(0,37);return !truth(t128)?e->slot(0,39):t128;})();return !truth(t127)?e->slot(0,41):t127;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit79)};V t129=V(true);refs[0].put(std::move(t129));}
}
{Args t130=call(e->slot(1,13),Args{V(),concat(lit242,e->slot(0,0)),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0))});e->slot(0,42)=arg(t130,0);e->slot(0,43)=arg(t130,1);}
{Args t131=call(e->slot(1,13),Args{V(),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0)),concat(lit247,e->slot(0,0))});e->slot(0,44)=arg(t131,0);e->slot(0,45)=arg(t131,1);}
if(truth(([&](){V t132=e->slot(0,43);return !truth(t132)?e->slot(0,45):t132;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit80)};V t133=V(true);refs[0].put(std::move(t133));}
}
{Args t134=call(e->slot(1,13),Args{V(),concat(lit248,e->slot(0,0)),concat(lit249,e->slot(0,0)),concat(lit250,e->slot(0,0))});e->slot(0,46)=arg(t134,0);e->slot(0,47)=arg(t134,1);}
if(truth(e->slot(0,47))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit81)};V t135=V(true);refs[0].put(std::move(t135));}
}
{Args t136=call(e->slot(1,13),Args{V(),concat(lit251,e->slot(0,0)),concat(lit252,e->slot(0,0)),concat(lit253,e->slot(0,0)),concat(lit254,e->slot(0,0))});e->slot(0,48)=arg(t136,0);e->slot(0,49)=arg(t136,1);}
if(truth(e->slot(0,49))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit82)};V t137=V(true);refs[0].put(std::move(t137));}
}
if(truth(ge(e->slot(0,0),V(2.0)))){auto parent=e;Env storage(parent,false,12);auto e=&storage;{Args t138=call(e->slot(2,13),Args{V(),lit255,lit256,lit257});e->slot(0,0)=arg(t138,0);e->slot(0,1)=arg(t138,1);}
{Args t139=call(e->slot(2,13),Args{V(),lit258,lit259,lit260});e->slot(0,2)=arg(t139,0);e->slot(0,3)=arg(t139,1);}
{Args t140=call(e->slot(2,13),Args{V(),lit261,lit262});e->slot(0,4)=arg(t140,0);e->slot(0,5)=arg(t140,1);}
{Args t141=call(e->slot(2,13),Args{V(),lit263,lit264});e->slot(0,6)=arg(t141,0);e->slot(0,7)=arg(t141,1);}
{Args t142=call(e->slot(2,13),Args{V(),lit265,lit266,lit267});e->slot(0,8)=arg(t142,0);e->slot(0,9)=arg(t142,1);}
{Args t143=call(e->slot(2,13),Args{V(),lit268,lit269,lit270});e->slot(0,10)=arg(t143,0);e->slot(0,11)=arg(t143,1);}
if(truth(([&](){V t144=([&](){V t145=([&](){V t146=e->slot(0,1);return !truth(t146)?e->slot(0,3):t146;})();return !truth(t145)?e->slot(0,9):t145;})();return !truth(t144)?e->slot(0,11):t144;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit48),lit75)};V t147=V(true);refs[0].put(std::move(t147));}
}
if(truth(([&](){V t148=e->slot(0,5);return !truth(t148)?e->slot(0,7):t148;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit48),lit76)};V t149=V(true);refs[0].put(std::move(t149));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit114)};V t150=first(call(e->slot(2,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit115)};V t151=first(call(e->slot(2,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit116)};V t152=first(call(e->slot(2,2),Args{first(call(e->slot(2,3),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit117)};V t153=first(call(e->slot(2,3),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit118)};V t154=first(call(e->slot(2,3),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e->slot(1,1),lit119)};V t155=first(call(e->slot(2,3),Args{e->slot(0,10),V(0.0)}));refs[0].put(std::move(t155));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t156=V(0.0);refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit115)};V t157=V(0.0);refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit116)};V t158=V(0.0);refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit117)};V t159=V(0.0);refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t160=V(0.0);refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t161=V(0.0);refs[0].put(std::move(t161));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t162=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t163=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t164=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(1.0)})),V(0.45),V(1.15)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t165=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit271)};V t166=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,10),V(1.0)})),V(0.5),V(1.75)}));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t167=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t168=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,14),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t169=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,16),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t170=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,18),V(0.0)})),V(0.0),V(2.5)}));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t171=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,20),V(1.0)})),V(0.0),V(1.35)}));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t172=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,22),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t173=first(call(e->slot(1,3),Args{e->slot(0,24),V(0.0)}));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t174=first(call(e->slot(1,3),Args{e->slot(0,26),V(0.0)}));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit120)};V t175=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,28),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit121)};V t176=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,30),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit122)};V t177=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,32),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit123)};V t178=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,34),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t179=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,36),V(0.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t180=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,38),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t181=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,40),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t182=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,42),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t183=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,44),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t184=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,46),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t185=first(call(e->slot(1,2),Args{first(call(e->slot(1,3),Args{e->slot(0,48),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t185));}
{V t186=add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(add(get(e->slot(0,1),lit102),mul(get(e->slot(0,1),lit103),get(get(e->slot(1,1),lit1),lit6))),mul(get(e->slot(0,1),lit105),get(get(e->slot(1,1),lit1),lit7))),mul(first(call(get(e->get("math"),lit142),Args{sub(get(e->slot(0,1),lit271),V(1.0)),V(0.0)})),V(0.22))),mul(get(e->slot(0,1),lit106),get(get(e->slot(1,1),lit1),lit23))),mul(get(e->slot(0,1),lit107),get(get(e->slot(1,1),lit1),lit24))),mul(get(e->slot(0,1),lit109),get(get(e->slot(1,1),lit1),lit26))),mul(get(e->slot(0,1),lit111),get(get(e->slot(1,1),lit1),lit28))),mul(sub(V(1.0),first(call(e->slot(1,2),Args{get(e->slot(0,1),lit104),V(0.0),V(1.0)}))),V(0.16))),mul(get(e->slot(0,1),lit121),get(get(e->slot(1,1),lit1),lit36))),mul(get(e->slot(0,1),lit122),get(get(e->slot(1,1),lit1),lit37))),mul(get(e->slot(0,1),lit125),V(0.08))),mul(get(e->slot(0,1),lit126),V(0.08))),mul(get(e->slot(0,1),lit127),get(get(e->slot(1,1),lit1),lit40))),mul(get(e->slot(0,1),lit128),get(get(e->slot(1,1),lit1),lit40))),mul(get(e->slot(0,1),lit129),get(get(e->slot(1,1),lit1),lit41))),mul(first(call(get(e->get("math"),lit142),Args{sub(get(e->slot(0,1),lit130),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit42))),mul(add(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit112)})),first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit113)}))),get(get(e->slot(1,1),lit1),lit31)));e->slot(0,50)=std::move(t186);}
{std::array<Ref,1> refs{Ref(e,0,50)};V t187=sub(sub(sub(sub(sub(e->slot(0,50),mul(first(call(get(e->get("math"),lit142),Args{sub(get(e->slot(0,1),lit108),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit25))),mul(first(call(get(e->get("math"),lit142),Args{sub(get(e->slot(0,1),lit110),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit27))),mul(first(call(get(e->get("math"),lit142),Args{sub(get(e->slot(0,1),lit120),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit38))),mul(get(e->slot(0,1),lit123),get(get(e->slot(1,1),lit1),lit39))),mul(get(e->slot(0,1),lit124),get(get(e->slot(1,1),lit1),lit39)));refs[0].put(std::move(t187));}
if(truth(ge(e->slot(0,0),V(2.0)))){{std::array<Ref,1> refs{Ref(e,0,50)};V t188=add(add(add(add(add(add(e->slot(0,50),mul(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit114)})),get(get(e->slot(1,1),lit1),lit32))),mul(divv(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit115)})),V(3000.0)),get(get(e->slot(1,1),lit1),lit32))),mul(get(e->slot(0,1),lit116),get(get(e->slot(1,1),lit1),lit33))),mul(first(call(get(e->get("math"),lit272),Args{divv(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit117)})),V(8.0)),V(1.0)})),get(get(e->slot(1,1),lit1),lit33))),mul(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit118)})),get(get(e->slot(1,1),lit1),lit34))),mul(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,1),lit119)})),get(get(e->slot(1,1),lit1),lit35)));refs[0].put(std::move(t188));}
}
return call(e->slot(1,2),Args{e->slot(0,50),get(get(e->slot(1,1),lit1),lit44),get(get(e->slot(1,1),lit1),lit43)});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{std::array<Ref,1> refs{Ref(e,0,0)};V t189=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t190=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t191=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t192=first(call(e->slot(1,3),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit5)}));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t193=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t193));}
if(truth(lt(e->slot(0,2),get(get(e->slot(1,1),lit1),lit4)))){return Args{e->slot(0,1)};
}
{V t194=first(call(get(e->get("math"),lit142),Args{mul(e->slot(0,2),e->slot(0,4)),V(0.0)}));e->slot(0,5)=std::move(t194);}
{V t195=first(call(get(e->get("math"),lit142),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit5)}));e->slot(0,6)=std::move(t195);}
{V t196=sub(V(1.0),first(call(get(e->get("math"),lit273),Args{divv(V(-num(e->slot(0,5))),e->slot(0,6))})));e->slot(0,7)=std::move(t196);}
{std::array<Ref,1> refs{Ref(e,0,7)};V t197=first(call(e->slot(1,2),Args{e->slot(0,7),V(0.0),V(1.0)}));refs[0].put(std::move(t197));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,7)))};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t198=first(call(get(e->get("math"),lit142),Args{([&](){V t199=get(get(e->slot(1,1),lit1),lit9);return !truth(t199)?get(get(e->slot(1,1),lit1),lit8):t199;})(),V(1.0)}));e->slot(0,1)=std::move(t198);}
{V t200=first(call(e->slot(1,2),Args{divv(first(call(e->slot(1,3),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit8)})),e->slot(0,1)),V(0.1),V(3.0)}));e->slot(0,2)=std::move(t200);}
{V t201=add(V(1.0),mul(sub(e->slot(0,2),V(1.0)),get(get(e->slot(1,1),lit1),lit11)));e->slot(0,3)=std::move(t201);}
return joined(Args{e->slot(0,2)},call(e->slot(1,2),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)}));
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{V t202=divv(first(call(e->slot(1,4),Args{get(e->slot(0,0),lit85)})),first(call(get(e->get("math"),lit142),Args{get(get(e->slot(1,1),lit1),lit14),V(0.001)})));e->slot(0,1)=std::move(t202);}
{V t203=divv(first(call(e->slot(1,4),Args{get(e->slot(0,0),lit86)})),first(call(get(e->get("math"),lit142),Args{get(get(e->slot(1,1),lit1),lit15),V(0.001)})));e->slot(0,2)=std::move(t203);}
{V t204=first(call(get(e->get("math"),lit274),Args{add(mul(mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit17)),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit17))),mul(mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit16)),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit16))))}));e->slot(0,3)=std::move(t204);}
{V t205=first(call(get(e->get("math"),lit274),Args{add(mul(([&](){V t206=get(e->slot(0,0),lit85);return !truth(t206)?V(0.0):t206;})(),([&](){V t207=get(e->slot(0,0),lit85);return !truth(t207)?V(0.0):t207;})()),mul(([&](){V t208=get(e->slot(0,0),lit86);return !truth(t208)?V(0.0):t208;})(),([&](){V t209=get(e->slot(0,0),lit86);return !truth(t209)?V(0.0):t209;})()))}));e->slot(0,4)=std::move(t205);}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit91)};V t210=first(call(e->slot(1,2),Args{e->slot(0,3),V(0.0),get(get(e->slot(1,1),lit1),lit21)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit92)};V t211=first(call(e->slot(1,2),Args{e->slot(0,4),V(0.0),V(10.0)}));refs[0].put(std::move(t211));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);call(e->slot(1,25),Args{e->slot(0,0)});
{V t212=first(call(e->slot(1,2),Args{divv(first(call(get(e->get("math"),lit142),Args{e->slot(0,1),V(0.0)})),V(35.0)),V(0.0),V(1.25)}));e->slot(0,3)=std::move(t212);}
{V t213=first(call(get(e->get("math"),lit142),Args{sub(([&](){V t214=get(e->slot(0,0),lit91);return !truth(t214)?V(0.0):t214;})(),get(get(e->slot(1,1),lit1),lit20)),V(0.0)}));e->slot(0,4)=std::move(t213);}
{V t215=add(add(add(add(mul(mul(e->slot(0,4),get(get(e->slot(1,1),lit1),lit19)),add(V(0.35),mul(V(0.65),e->slot(0,3)))),mul(([&](){V t216=get(e->slot(0,0),lit107);return !truth(t216)?V(0.0):t216;})(),V(0.18))),mul(([&](){V t217=get(e->slot(0,0),lit109);return !truth(t217)?V(0.0):t217;})(),V(0.1))),mul(([&](){V t218=get(e->slot(0,0),lit111);return !truth(t218)?V(0.0):t218;})(),V(0.12))),mul(([&](){V t219=get(e->slot(0,0),lit128);return !truth(t219)?V(0.0):t219;})(),V(0.08)));e->slot(0,5)=std::move(t215);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t220=first(call(e->slot(1,2),Args{e->slot(0,5),V(0.0),get(get(e->slot(1,1),lit1),lit22)}));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit93)};V t221=first(call(e->slot(1,12),Args{([&](){V t222=get(e->slot(0,0),lit93);return !truth(t222)?V(0.0):t222;})(),e->slot(0,5),get(get(e->slot(1,1),lit1),lit18),e->slot(0,2)}));refs[0].put(std::move(t221));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t223=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t223);}
if(truth(V(!truth(e->slot(0,1))))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit50)};V t224=([&](){V t225=get(e->slot(0,1),lit85);return !truth(t225)?V(0.0):t225;})();refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit51)};V t226=([&](){V t227=get(e->slot(0,1),lit86);return !truth(t227)?V(0.0):t227;})();refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t228=([&](){V t229=get(e->slot(0,1),lit54);return !truth(t229)?get(get(e->slot(1,1),lit1),lit8):t229;})();refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit99)};V t230=([&](){V t231=get(e->slot(0,1),lit54);return !truth(t231)?get(get(e->slot(1,1),lit1),lit8):t231;})();refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t232=([&](){V t233=get(e->slot(0,1),lit55);return !truth(t233)?V(0.0):t233;})();refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit50),e->slot(0,0))};V t234=get(e->slot(0,1),lit50);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit51),e->slot(0,0))};V t235=get(e->slot(0,1),lit51);refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit52),e->slot(0,0))};V t236=([&](){V t237=get(e->slot(0,1),lit87);return !truth(t237)?V(0.0):t237;})();refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit53),e->slot(0,0))};V t238=([&](){V t239=get(e->slot(0,1),lit88);return !truth(t239)?V(0.0):t239;})();refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit54),e->slot(0,0))};V t240=([&](){V t241=get(e->slot(0,1),lit54);return !truth(t241)?get(get(e->slot(1,1),lit1),lit8):t241;})();refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit55),e->slot(0,0))};V t242=([&](){V t243=get(e->slot(0,1),lit55);return !truth(t243)?V(0.0):t243;})();refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit48),lit56),e->slot(0,0))};V t244=([&](){V t245=([&](){V t246=get(e->slot(0,1),lit56);return truth(t246)?V(true):t246;})();return !truth(t245)?V(false):t245;})();refs[0].put(std::move(t244));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t247=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,5)=std::move(t247);}
{Args t248=call(e->slot(1,19),Args{e->slot(0,1),e->slot(0,0)});e->slot(0,6)=arg(t248,0);e->slot(0,7)=arg(t248,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit54)};V t249=e->slot(0,6);refs[0].put(std::move(t249));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit96)};V t250=([&](){V t251=e->slot(0,7);return !truth(t251)?lit275:t251;})();refs[0].put(std::move(t250));}
{std::array<Ref,2> refs{Ref(e->slot(0,5),lit94),Ref(e->slot(0,5),lit95)};Args t252=call(e->slot(1,24),Args{get(e->slot(0,5),lit54)});refs[0].put(arg(t252,0));refs[1].put(arg(t252,1));}
{V t253=first(call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,5)}));e->slot(0,8)=std::move(t253);}
{Args t254=call(e->slot(1,20),Args{e->slot(0,0),e->slot(0,1),e->slot(0,5)});e->slot(0,9)=arg(t254,0);e->slot(0,10)=arg(t254,1);e->slot(0,11)=arg(t254,2);}
if(truth(e->slot(0,11))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit69)};V t255=V(true);refs[0].put(std::move(t255));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit87)};V t256=e->slot(0,9);refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit88)};V t257=e->slot(0,10);refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit55)};V t258=first(call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t258));}
{V t259=mul(get(get(e->slot(1,1),lit1),lit2),add(add(add(V(1.0),e->slot(0,8)),sub(get(e->slot(0,5),lit95),V(1.0))),mul(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,5),lit112)})),get(get(e->slot(1,1),lit1),lit29))));e->slot(0,12)=std::move(t259);}
{V t260=mul(get(get(e->slot(1,1),lit1),lit3),add(add(add(V(1.0),e->slot(0,8)),sub(get(e->slot(0,5),lit95),V(1.0))),mul(first(call(get(e->get("math"),lit136),Args{get(e->slot(0,5),lit113)})),get(get(e->slot(1,1),lit1),lit30))));e->slot(0,13)=std::move(t260);}
{std::array<Ref,1> refs{Ref(e,0,12)};V t261=first(call(get(e->get("math"),lit142),Args{e->slot(0,12),get(get(e->slot(1,1),lit1),lit5)}));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(e,0,13)};V t262=first(call(get(e->get("math"),lit142),Args{e->slot(0,13),get(get(e->slot(1,1),lit1),lit5)}));refs[0].put(std::move(t262));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit85)};V t263=first(call(e->slot(1,23),Args{get(e->slot(0,5),lit85),get(e->slot(0,5),lit87),e->slot(0,2),e->slot(0,12),e->slot(0,3)}));refs[0].put(std::move(t263));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit86)};V t264=first(call(e->slot(1,23),Args{get(e->slot(0,5),lit86),get(e->slot(0,5),lit88),e->slot(0,2),e->slot(0,13),e->slot(0,3)}));refs[0].put(std::move(t264));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit89)};V t265=get(e->slot(0,5),lit85);refs[0].put(std::move(t265));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit90)};V t266=get(e->slot(0,5),lit86);refs[0].put(std::move(t266));}
call(e->slot(1,26),Args{e->slot(0,5),e->slot(0,2),e->slot(0,3)});
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit101)};V t267=e->slot(0,8);refs[0].put(std::move(t267));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit131)};V t268=e->slot(0,12);refs[0].put(std::move(t268));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit132)};V t269=e->slot(0,13);refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit56)};V t270=V(!truth(V(!truth(e->slot(0,1)))));refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e->slot(0,5),lit133)};V t271=([&](){V t272=([&](){V t273=e->slot(0,4);return truth(t273)?V(true):t273;})();return !truth(t272)?V(false):t272;})();refs[0].put(std::move(t271));}
call(e->slot(1,27),Args{e->slot(0,0)});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t274=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,3)=std::move(t274);}
{V t275=([&](){V t276=([&](){V t277=eq(e->slot(0,2),lit276);return truth(t277)?get(get(e->slot(1,1),lit1),lit46):t277;})();return !truth(t276)?get(get(e->slot(1,1),lit1),lit45):t276;})();e->slot(0,4)=std::move(t275);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit87)};V t278=V(0.0);refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit88)};V t279=V(0.0);refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit85)};V t280=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit85),V(0.0),e->slot(0,4),e->slot(0,1)}));refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit86)};V t281=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit86),V(0.0),e->slot(0,4),e->slot(0,1)}));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit89)};V t282=get(e->slot(0,3),lit85);refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit90)};V t283=get(e->slot(0,3),lit86);refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit93)};V t284=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit93),V(0.0),e->slot(0,4),e->slot(0,1)}));refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit91)};V t285=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit91),V(0.0),e->slot(0,4),e->slot(0,1)}));refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit92)};V t286=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit92),V(0.0),e->slot(0,4),e->slot(0,1)}));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit55)};V t287=first(call(e->slot(1,12),Args{get(e->slot(0,3),lit55),V(0.0),e->slot(0,4),e->slot(0,1)}));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit56)};V t288=V(false);refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit133)};V t289=V(true);refs[0].put(std::move(t289));}
call(e->slot(1,27),Args{e->slot(0,0)});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t290=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t290);}
call(e->slot(1,7),Args{concat(lit277,e->slot(0,0)),([&](){V t291=get(e->slot(0,1),lit85);return !truth(t291)?V(0.0):t291;})()});
call(e->slot(1,7),Args{concat(lit278,e->slot(0,0)),([&](){V t292=get(e->slot(0,1),lit86);return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,7),Args{concat(lit279,e->slot(0,0)),([&](){V t293=get(e->slot(0,1),lit85);return !truth(t293)?V(0.0):t293;})()});
call(e->slot(1,7),Args{concat(lit280,e->slot(0,0)),([&](){V t294=get(e->slot(0,1),lit86);return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,7),Args{concat(lit281,e->slot(0,0)),([&](){V t295=get(e->slot(0,1),lit85);return !truth(t295)?V(0.0):t295;})()});
call(e->slot(1,7),Args{concat(lit282,e->slot(0,0)),([&](){V t296=get(e->slot(0,1),lit86);return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,7),Args{concat(lit283,e->slot(0,0)),([&](){V t297=get(e->slot(0,1),lit85);return !truth(t297)?V(0.0):t297;})()});
call(e->slot(1,7),Args{concat(lit284,e->slot(0,0)),([&](){V t298=get(e->slot(0,1),lit86);return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,7),Args{concat(lit285,e->slot(0,0)),([&](){V t299=([&](){V t300=get(e->slot(0,1),lit56);return truth(t300)?V(1.0):t300;})();return !truth(t299)?V(0.0):t299;})()});
call(e->slot(1,7),Args{concat(lit286,e->slot(0,0)),([&](){V t301=([&](){V t302=get(e->slot(0,1),lit133);return truth(t302)?V(1.0):t302;})();return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,7),Args{concat(lit287,e->slot(0,0)),([&](){V t303=get(e->slot(0,1),lit89);return !truth(t303)?V(0.0):t303;})()});
call(e->slot(1,7),Args{concat(lit288,e->slot(0,0)),([&](){V t304=get(e->slot(0,1),lit90);return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,7),Args{concat(lit289,e->slot(0,0)),([&](){V t305=get(e->slot(0,1),lit91);return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,7),Args{concat(lit290,e->slot(0,0)),([&](){V t306=get(e->slot(0,1),lit92);return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,7),Args{concat(lit201,e->slot(0,0)),([&](){V t307=get(e->slot(0,1),lit93);return !truth(t307)?V(0.0):t307;})()});
call(e->slot(1,7),Args{concat(lit291,e->slot(0,0)),([&](){V t308=get(e->slot(0,1),lit54);return !truth(t308)?get(get(e->slot(1,1),lit1),lit8):t308;})()});
call(e->slot(1,7),Args{concat(lit148,e->slot(0,0)),([&](){V t309=get(e->slot(0,1),lit54);return !truth(t309)?get(get(e->slot(1,1),lit1),lit8):t309;})()});
call(e->slot(1,7),Args{concat(lit169,e->slot(0,0)),([&](){V t310=get(e->slot(0,1),lit55);return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,7),Args{concat(lit292,e->slot(0,0)),([&](){V t311=get(e->slot(0,1),lit85);return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,7),Args{concat(lit293,e->slot(0,0)),([&](){V t312=get(e->slot(0,1),lit86);return !truth(t312)?V(0.0):t312;})()});
call(e->slot(1,7),Args{concat(lit294,e->slot(0,0)),([&](){V t313=get(e->slot(0,1),lit91);return !truth(t313)?V(0.0):t313;})()});
call(e->slot(1,7),Args{concat(lit295,e->slot(0,0)),([&](){V t314=get(e->slot(0,1),lit93);return !truth(t314)?V(0.0):t314;})()});
call(e->slot(1,7),Args{concat(lit296,e->slot(0,0)),([&](){V t315=get(e->slot(0,1),lit54);return !truth(t315)?get(get(e->slot(1,1),lit1),lit8):t315;})()});
call(e->slot(1,7),Args{concat(lit297,e->slot(0,0)),([&](){V t316=get(e->slot(0,1),lit101);return !truth(t316)?V(0.0):t316;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit48),lit84))))){return Args{};
}
call(e->slot(1,7),Args{concat(lit298,e->slot(0,0)),([&](){V t317=get(e->slot(0,1),lit87);return !truth(t317)?V(0.0):t317;})()});
call(e->slot(1,7),Args{concat(lit299,e->slot(0,0)),([&](){V t318=get(e->slot(0,1),lit88);return !truth(t318)?V(0.0):t318;})()});
call(e->slot(1,7),Args{concat(lit300,e->slot(0,0)),([&](){V t319=get(e->slot(0,1),lit87);return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,7),Args{concat(lit301,e->slot(0,0)),([&](){V t320=get(e->slot(0,1),lit88);return !truth(t320)?V(0.0):t320;})()});
call(e->slot(1,7),Args{concat(lit302,e->slot(0,0)),([&](){V t321=get(e->slot(0,1),lit54);return !truth(t321)?V(0.0):t321;})()});
call(e->slot(1,7),Args{concat(lit303,e->slot(0,0)),([&](){V t322=get(e->slot(0,1),lit94);return !truth(t322)?V(1.0):t322;})()});
call(e->slot(1,7),Args{concat(lit304,e->slot(0,0)),([&](){V t323=get(e->slot(0,1),lit95);return !truth(t323)?V(1.0):t323;})()});
call(e->slot(1,7),Args{concat(lit305,e->slot(0,0)),([&](){V t324=get(e->slot(0,1),lit96);return !truth(t324)?lit275:t324;})()});
call(e->slot(1,7),Args{concat(lit306,e->slot(0,0)),([&](){V t325=get(e->slot(0,1),lit131);return !truth(t325)?get(get(e->slot(1,1),lit1),lit2):t325;})()});
call(e->slot(1,7),Args{concat(lit307,e->slot(0,0)),([&](){V t326=get(e->slot(0,1),lit132);return !truth(t326)?get(get(e->slot(1,1),lit1),lit3):t326;})()});
call(e->slot(1,7),Args{concat(lit308,e->slot(0,0)),([&](){V t327=get(e->slot(0,1),lit101);return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,7),Args{concat(lit309,e->slot(0,0)),([&](){V t328=get(e->slot(0,1),lit106);return !truth(t328)?V(0.0):t328;})()});
call(e->slot(1,7),Args{concat(lit310,e->slot(0,0)),([&](){V t329=get(e->slot(0,1),lit108);return !truth(t329)?V(1.0):t329;})()});
call(e->slot(1,7),Args{concat(lit311,e->slot(0,0)),([&](){V t330=get(e->slot(0,1),lit111);return !truth(t330)?V(0.0):t330;})()});
call(e->slot(1,7),Args{concat(lit312,e->slot(0,0)),([&](){V t331=get(e->slot(0,1),lit116);return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,7),Args{concat(lit313,e->slot(0,0)),([&](){V t332=get(e->slot(0,1),lit103);return !truth(t332)?V(0.0):t332;})()});
call(e->slot(1,7),Args{concat(lit314,e->slot(0,0)),([&](){V t333=get(e->slot(0,1),lit104);return !truth(t333)?V(1.0):t333;})()});
call(e->slot(1,7),Args{concat(lit315,e->slot(0,0)),([&](){V t334=get(e->slot(0,1),lit105);return !truth(t334)?V(0.0):t334;})()});
call(e->slot(1,7),Args{concat(lit316,e->slot(0,0)),([&](){V t335=get(e->slot(0,1),lit121);return !truth(t335)?V(0.0):t335;})()});
call(e->slot(1,7),Args{concat(lit317,e->slot(0,0)),([&](){V t336=get(e->slot(0,1),lit124);return !truth(t336)?V(0.0):t336;})()});
call(e->slot(1,7),Args{concat(lit318,e->slot(0,0)),([&](){V t337=get(e->slot(0,1),lit127);return !truth(t337)?V(0.0):t337;})()});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,7),Args{lit319,([&](){V t338=get(get(e->slot(1,1),lit48),lit58);return !truth(t338)?lit275:t338;})()});
call(e->slot(1,7),Args{lit320,([&](){V t339=get(get(e->slot(1,1),lit48),lit60);return !truth(t339)?V(0.0):t339;})()});
call(e->slot(1,7),Args{lit321,([&](){V t340=([&](){V t341=get(get(e->slot(1,1),lit48),lit61);return truth(t341)?V(1.0):t341;})();return !truth(t340)?V(0.0):t340;})()});
call(e->slot(1,7),Args{lit322,([&](){V t342=([&](){V t343=get(get(e->slot(1,1),lit48),lit57);return truth(t343)?V(1.0):t343;})();return !truth(t342)?V(0.0):t342;})()});
call(e->slot(1,7),Args{lit323,([&](){V t344=get(get(e->slot(1,1),lit48),lit62);return !truth(t344)?V(0.0):t344;})()});
call(e->slot(1,7),Args{lit143,([&](){V t345=get(get(e->slot(1,1),lit48),lit63);return !truth(t345)?V(0.0):t345;})()});
call(e->slot(1,7),Args{lit324,([&](){V t346=get(get(e->slot(1,1),lit48),lit64);return !truth(t346)?V(0.0):t346;})()});
call(e->slot(1,7),Args{lit325,([&](){V t347=get(get(e->slot(1,1),lit48),lit65);return !truth(t347)?V(0.0):t347;})()});
call(e->slot(1,7),Args{lit326,([&](){V t348=get(get(e->slot(1,1),lit48),lit66);return !truth(t348)?get(get(e->slot(1,1),lit1),lit8):t348;})()});
call(e->slot(1,7),Args{lit327,([&](){V t349=get(get(e->slot(1,1),lit48),lit67);return !truth(t349)?V(0.0):t349;})()});
call(e->slot(1,7),Args{lit328,([&](){V t350=get(get(e->slot(1,1),lit48),lit68);return !truth(t350)?V(0.0):t350;})()});
call(e->slot(1,7),Args{lit329,([&](){V t351=get(get(e->slot(1,1),lit48),lit64);return !truth(t351)?V(0.0):t351;})()});
call(e->slot(1,7),Args{lit330,([&](){V t352=get(get(e->slot(1,1),lit48),lit65);return !truth(t352)?V(0.0):t352;})()});
call(e->slot(1,7),Args{lit331,([&](){V t353=get(get(e->slot(1,1),lit48),lit66);return !truth(t353)?get(get(e->slot(1,1),lit1),lit8):t353;})()});
call(e->slot(1,7),Args{lit332,([&](){V t354=get(get(e->slot(1,1),lit48),lit68);return !truth(t354)?V(0.0):t354;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit48),lit84))))){return Args{};
}
call(e->slot(1,7),Args{lit333,([&](){V t355=([&](){V t356=get(get(e->slot(1,1),lit48),lit69);return truth(t356)?V(1.0):t356;})();return !truth(t355)?V(0.0):t355;})()});
call(e->slot(1,7),Args{lit334,([&](){V t357=([&](){V t358=get(get(e->slot(1,1),lit48),lit70);return truth(t358)?V(1.0):t358;})();return !truth(t357)?V(0.0):t357;})()});
call(e->slot(1,7),Args{lit335,([&](){V t359=([&](){V t360=get(get(e->slot(1,1),lit48),lit71);return truth(t360)?V(1.0):t360;})();return !truth(t359)?V(0.0):t359;})()});
call(e->slot(1,7),Args{lit336,([&](){V t361=([&](){V t362=get(get(e->slot(1,1),lit48),lit72);return truth(t362)?V(1.0):t362;})();return !truth(t361)?V(0.0):t361;})()});
call(e->slot(1,7),Args{lit337,([&](){V t363=([&](){V t364=get(get(e->slot(1,1),lit48),lit73);return truth(t364)?V(1.0):t364;})();return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,7),Args{lit338,([&](){V t365=([&](){V t366=get(get(e->slot(1,1),lit48),lit74);return truth(t366)?V(1.0):t366;})();return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,7),Args{lit339,([&](){V t367=([&](){V t368=get(get(e->slot(1,1),lit48),lit75);return truth(t368)?V(1.0):t368;})();return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,7),Args{lit340,([&](){V t369=([&](){V t370=get(get(e->slot(1,1),lit48),lit76);return truth(t370)?V(1.0):t370;})();return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,7),Args{lit341,([&](){V t371=([&](){V t372=get(get(e->slot(1,1),lit48),lit77);return truth(t372)?V(1.0):t372;})();return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,7),Args{lit342,([&](){V t373=([&](){V t374=get(get(e->slot(1,1),lit48),lit78);return truth(t374)?V(1.0):t374;})();return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,7),Args{lit343,([&](){V t375=([&](){V t376=get(get(e->slot(1,1),lit48),lit79);return truth(t376)?V(1.0):t376;})();return !truth(t375)?V(0.0):t375;})()});
call(e->slot(1,7),Args{lit344,([&](){V t377=([&](){V t378=get(get(e->slot(1,1),lit48),lit80);return truth(t378)?V(1.0):t378;})();return !truth(t377)?V(0.0):t377;})()});
call(e->slot(1,7),Args{lit345,([&](){V t379=([&](){V t380=get(get(e->slot(1,1),lit48),lit81);return truth(t380)?V(1.0):t380;})();return !truth(t379)?V(0.0):t379;})()});
call(e->slot(1,7),Args{lit346,([&](){V t381=([&](){V t382=get(get(e->slot(1,1),lit48),lit82);return truth(t382)?V(1.0):t382;})();return !truth(t381)?V(0.0):t381;})()});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t383=num(V(0.0)),t384=num(V(3.0)),t385=num(V(1.0));for(double t386=t383;(t385>0?t386<=t384:t386>=t384);t386+=t385){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t386);call(e->slot(2,30),Args{e->slot(0,0)});
}}
call(e->slot(1,31),Args{});
return Args{};});
Ref(e->slot(0,1),lit347).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit58)};V t387=lit59;refs[0].put(std::move(t387));}
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit348).put(native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit60)};V t388=add(([&](){V t389=get(get(e->slot(1,1),lit48),lit60);return !truth(t389)?V(0.0):t389;})(),V(1.0));refs[0].put(std::move(t388));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t390=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t390));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit58)};V t391=lit349;refs[0].put(std::move(t391));}
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t392=first(call(e->slot(1,2),Args{e->slot(0,0),V(0.0001),V(0.1)}));refs[0].put(std::move(t392));}
call(e->slot(1,14),Args{e->slot(0,0)});
call(e->slot(1,15),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t393=first(call(e->slot(1,9),Args{e->slot(0,1)}));refs[0].put(std::move(t393));}
{V t394=first(call(e->slot(1,10),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t394);}
{Args t395=call(e->slot(1,16),Args{e->slot(0,1)});e->slot(0,4)=arg(t395,0);e->slot(0,5)=arg(t395,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit63)};V t396=e->slot(0,4);refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit62)};V t397=e->slot(0,5);refs[0].put(std::move(t397));}
{V t398=lit350;e->slot(0,6)=std::move(t398);}
{V t399=ne(e->slot(0,3),V());e->slot(0,7)=std::move(t399);}
{V t400=([&](){V t401=ne(e->slot(0,1),V());return truth(t401)?ne(e->slot(0,3),V()):t401;})();e->slot(0,8)=std::move(t400);}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,6)};V t402=lit276;refs[0].put(std::move(t402));}
}else if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e,0,6)};V t403=lit351;refs[0].put(std::move(t403));}
}

{V t404=V(0.0);e->slot(0,9)=std::move(t404);}
{V t405=V(0.0);e->slot(0,10)=std::move(t405);}
{V t406=V(0.0);e->slot(0,11)=std::move(t406);}
{V t407=V(0.0);e->slot(0,12)=std::move(t407);}
{V t408=V(0.0);e->slot(0,13)=std::move(t408);}
{double t409=num(V(0.0)),t410=num(V(3.0)),t411=num(V(1.0));for(double t412=t409;(t411>0?t412<=t410:t412>=t410);t412+=t411){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t412);{V t413=first(call(e->slot(2,11),Args{e->slot(1,3),e->slot(0,0)}));e->slot(0,1)=std::move(t413);}
if(truth(e->slot(0,1))){call(e->slot(2,28),Args{e->slot(0,0),e->slot(0,1),e->slot(1,5),e->slot(1,0),V(false)});
}else{auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t414=first(call(e->slot(3,18),Args{e->slot(1,0)}));e->slot(0,0)=std::move(t414);}
{V t415=first(call(e->slot(3,13),Args{V(),concat(lit159,e->slot(1,0)),concat(lit160,e->slot(1,0)),concat(lit161,e->slot(1,0))}));e->slot(0,1)=std::move(t415);}
if(truth(([&](){V t416=([&](){V t417=ne(e->slot(0,0),V());return !truth(t417)?ne(e->slot(0,1),V()):t417;})();return !truth(t416)?ne(e->slot(2,1),V()):t416;})())){call(e->slot(3,28),Args{e->slot(1,0),V(),e->slot(2,5),e->slot(2,0),V(true)});
}else{call(e->slot(3,29),Args{e->slot(1,0),e->slot(2,0),e->slot(2,6)});
}
}
{V t418=get(get(get(e->slot(2,1),lit48),lit49),e->slot(0,0));e->slot(0,2)=std::move(t418);}
if(truth(get(e->slot(0,2),lit56))){{std::array<Ref,1> refs{Ref(e,1,13)};V t419=add(e->slot(1,13),V(1.0));refs[0].put(std::move(t419));}
}
{std::array<Ref,1> refs{Ref(e,1,9)};V t420=add(e->slot(1,9),([&](){V t421=get(e->slot(0,2),lit91);return !truth(t421)?V(0.0):t421;})());refs[0].put(std::move(t420));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t422=add(e->slot(1,10),([&](){V t423=get(e->slot(0,2),lit93);return !truth(t423)?V(0.0):t423;})());refs[0].put(std::move(t422));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t424=add(e->slot(1,11),([&](){V t425=get(e->slot(0,2),lit54);return !truth(t425)?get(get(e->slot(2,1),lit1),lit8):t425;})());refs[0].put(std::move(t424));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t426=add(e->slot(1,12),([&](){V t427=get(e->slot(0,2),lit101);return !truth(t427)?V(0.0):t427;})());refs[0].put(std::move(t426));}
call(e->slot(2,30),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit64)};V t428=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t428));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit65)};V t429=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t429));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit66)};V t430=mul(e->slot(0,11),V(0.25));refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit67)};V t431=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t431));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit68)};V t432=e->slot(0,13);refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit58)};V t433=e->slot(0,6);refs[0].put(std::move(t433));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit61)};V t434=e->slot(0,7);refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit48),lit57)};V t435=e->slot(0,8);refs[0].put(std::move(t435));}
call(e->slot(1,31),Args{});
return Args{};}));
Ref(e->slot(0,1),lit352).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit48)};
}
return Args{get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit353).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t436=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t436);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t437=get(e->slot(0,1),lit85);return !truth(t437)?V(0.0):t437;})()};
return Args{};}));
Ref(e->slot(0,1),lit354).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t438=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t438);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t439=get(e->slot(0,1),lit86);return !truth(t439)?V(0.0):t439;})()};
return Args{};}));
Ref(e->slot(0,1),lit355).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t440=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t440);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t441=get(e->slot(0,1),lit87);return !truth(t441)?V(0.0):t441;})()};
return Args{};}));
Ref(e->slot(0,1),lit356).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t442=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t442);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t443=get(e->slot(0,1),lit88);return !truth(t443)?V(0.0):t443;})()};
return Args{};}));
Ref(e->slot(0,1),lit357).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t444=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t444);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t445=get(e->slot(0,1),lit91);return !truth(t445)?V(0.0):t445;})()};
return Args{};}));
Ref(e->slot(0,1),lit358).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t446=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t446);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t447=get(e->slot(0,1),lit93);return !truth(t447)?V(0.0):t447;})()};
return Args{};}));
Ref(e->slot(0,1),lit359).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t448=get(get(get(e->slot(1,1),lit48),lit49),e->slot(0,0));e->slot(0,1)=std::move(t448);}
if(truth(V(!truth(e->slot(0,1))))){return Args{get(get(e->slot(1,1),lit1),lit8)};
}
return Args{([&](){V t449=get(e->slot(0,1),lit54);return !truth(t449)?get(get(e->slot(1,1),lit1),lit8):t449;})()};
return Args{};}));
Ref(e->slot(0,1),lit360).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t450=([&](){V t451=get(get(get(e->slot(2,1),lit48),lit49),e->slot(1,0));return !truth(t451)?get(get(get(e->slot(2,1),lit48),lit49),V(0.0)):t451;})();e->slot(0,0)=std::move(t450);}
return call(get(e->get("string"),lit361),Args{concat(lit362,concat(lit363,concat(lit364,lit365))),first(call(e->get("tostring"),Args{get(get(e->slot(2,1),lit48),lit58)})),([&](){V t452=get(get(e->slot(2,1),lit48),lit60);return !truth(t452)?V(0.0):t452;})(),([&](){V t453=get(e->slot(0,0),lit87);return !truth(t453)?V(0.0):t453;})(),([&](){V t454=get(e->slot(0,0),lit85);return !truth(t454)?V(0.0):t454;})(),([&](){V t455=get(e->slot(0,0),lit88);return !truth(t455)?V(0.0):t455;})(),([&](){V t456=get(e->slot(0,0),lit86);return !truth(t456)?V(0.0):t456;})(),([&](){V t457=get(e->slot(0,0),lit91);return !truth(t457)?V(0.0):t457;})(),([&](){V t458=get(e->slot(0,0),lit93);return !truth(t458)?V(0.0):t458;})(),([&](){V t459=get(e->slot(0,0),lit54);return !truth(t459)?V(0.0):t459;})(),first(call(e->get("tostring"),Args{([&](){V t460=get(e->slot(0,0),lit96);return !truth(t460)?lit366:t460;})()})),([&](){V t461=get(e->slot(0,0),lit101);return !truth(t461)?V(0.0):t461;})(),([&](){V t462=get(e->slot(0,0),lit103);return !truth(t462)?V(0.0):t462;})(),([&](){V t463=get(e->slot(0,0),lit105);return !truth(t463)?V(0.0):t463;})(),([&](){V t464=get(e->slot(0,0),lit106);return !truth(t464)?V(0.0):t464;})(),([&](){V t465=get(e->slot(0,0),lit111);return !truth(t465)?V(0.0):t465;})(),([&](){V t466=get(e->slot(0,0),lit116);return !truth(t466)?V(0.0):t466;})(),([&](){V t467=([&](){V t468=get(e->slot(0,0),lit133);return truth(t468)?lit367:t468;})();return !truth(t467)?lit368:t467;})()});
}
return call(get(e->get("string"),lit361),Args{concat(lit369,concat(lit370,concat(lit371,concat(lit372,lit373)))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit48),lit58)})),([&](){V t469=get(get(e->slot(1,1),lit48),lit60);return !truth(t469)?V(0.0):t469;})(),([&](){V t470=([&](){V t471=get(get(e->slot(1,1),lit48),lit61);return truth(t471)?lit374:t471;})();return !truth(t470)?lit366:t470;})(),([&](){V t472=get(get(e->slot(1,1),lit48),lit68);return !truth(t472)?V(0.0):t472;})(),([&](){V t473=get(get(get(get(e->slot(1,1),lit48),lit49),V(0.0)),lit85);return !truth(t473)?V(0.0):t473;})(),([&](){V t474=get(get(get(get(e->slot(1,1),lit48),lit49),V(1.0)),lit85);return !truth(t474)?V(0.0):t474;})(),([&](){V t475=get(get(get(get(e->slot(1,1),lit48),lit49),V(2.0)),lit85);return !truth(t475)?V(0.0):t475;})(),([&](){V t476=get(get(get(get(e->slot(1,1),lit48),lit49),V(3.0)),lit85);return !truth(t476)?V(0.0):t476;})(),([&](){V t477=get(get(get(get(e->slot(1,1),lit48),lit49),V(0.0)),lit86);return !truth(t477)?V(0.0):t477;})(),([&](){V t478=get(get(get(get(e->slot(1,1),lit48),lit49),V(1.0)),lit86);return !truth(t478)?V(0.0):t478;})(),([&](){V t479=get(get(get(get(e->slot(1,1),lit48),lit49),V(2.0)),lit86);return !truth(t479)?V(0.0):t479;})(),([&](){V t480=get(get(get(get(e->slot(1,1),lit48),lit49),V(3.0)),lit86);return !truth(t480)?V(0.0):t480;})(),([&](){V t481=get(get(e->slot(1,1),lit48),lit64);return !truth(t481)?V(0.0):t481;})(),([&](){V t482=get(get(e->slot(1,1),lit48),lit65);return !truth(t482)?V(0.0):t482;})(),([&](){V t483=get(get(e->slot(1,1),lit48),lit66);return !truth(t483)?V(0.0):t483;})(),([&](){V t484=get(get(e->slot(1,1),lit48),lit67);return !truth(t484)?V(0.0):t484;})(),([&](){V t485=get(get(e->slot(1,1),lit48),lit63);return !truth(t485)?V(0.0):t485;})(),([&](){V t486=([&](){V t487=get(get(e->slot(1,1),lit48),lit69);return truth(t487)?lit374:t487;})();return !truth(t486)?lit366:t486;})(),([&](){V t488=([&](){V t489=get(get(e->slot(1,1),lit48),lit70);return truth(t489)?lit374:t489;})();return !truth(t488)?lit366:t488;})(),([&](){V t490=([&](){V t491=get(get(e->slot(1,1),lit48),lit71);return truth(t491)?lit374:t491;})();return !truth(t490)?lit366:t490;})(),([&](){V t492=([&](){V t493=get(get(e->slot(1,1),lit48),lit72);return truth(t493)?lit374:t493;})();return !truth(t492)?lit366:t492;})(),([&](){V t494=([&](){V t495=get(get(e->slot(1,1),lit48),lit73);return truth(t495)?lit374:t495;})();return !truth(t494)?lit366:t494;})(),([&](){V t496=([&](){V t497=get(get(e->slot(1,1),lit48),lit74);return truth(t497)?lit374:t497;})();return !truth(t496)?lit366:t496;})(),([&](){V t498=([&](){V t499=get(get(e->slot(1,1),lit48),lit75);return truth(t499)?lit374:t499;})();return !truth(t498)?lit366:t498;})(),([&](){V t500=([&](){V t501=get(get(e->slot(1,1),lit48),lit76);return truth(t501)?lit374:t501;})();return !truth(t500)?lit366:t500;})(),([&](){V t502=([&](){V t503=get(get(e->slot(1,1),lit48),lit78);return truth(t503)?lit374:t503;})();return !truth(t502)?lit366:t502;})(),([&](){V t504=([&](){V t505=get(get(e->slot(1,1),lit48),lit79);return truth(t505)?lit374:t505;})();return !truth(t504)?lit366:t504;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
