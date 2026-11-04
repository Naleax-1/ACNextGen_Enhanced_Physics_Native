// Generated native C++ from pinned tire_dynamics.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("slipRatioRef");
static const V lit3("slipAngleRef");
static const V lit4("slipAngleRefRad");
static const V lit5("combinedSlipLongWeight");
static const V lit6("combinedSlipLatWeight");
static const V lit7("postLimitGripDrop");
static const V lit8("gripAvailableBase");
static const V lit9("gripLimitSoftness");
static const V lit10("slipEnergyBuildStart");
static const V lit11("slipEnergyBuildGain");
static const V lit12("slipEnergyDecayGain");
static const V lit13("slipEnergyGripLoss");
static const V lit14("loadReference");
static const V lit15("defaultLoad");
static const V lit16("loadGripGain");
static const V lit17("minLoadGripScale");
static const V lit18("maxLoadGripScale");
static const V lit19("ambientTemp");
static const V lit20("warmTemp");
static const V lit21("optimumTemp");
static const V lit22("tempRange");
static const V lit23("coldGripBase");
static const V lit24("coldGripGain");
static const V lit25("optimumGrip");
static const V lit26("overheatGripLoss");
static const V lit27("minTempGrip");
static const V lit28("maxTempGrip");
static const V lit29("biasBase");
static const V lit30("memoryBuildStart");
static const V lit31("memoryBuildGain");
static const V lit32("memoryDecayGain");
static const V lit33("rubberMemoryGripLoss");
static const V lit34("rubberMemoryLimitGain");
static const V lit35("hopGripLoss");
static const V lit36("contactGripGain");
static const V lit37("contactLatGain");
static const V lit38("contactLongGain");
static const V lit39("contactQualityGripGain");
static const V lit40("contactLossLimitGain");
static const V lit41("responseScaleGripGain");
static const V lit42("responseScaleLimitGain");
static const V lit43("driveTorqueSlipGain");
static const V lit44("lsdLockRearLimitGain");
static const V lit45("lsdDiffRearLimitGain");
static const V lit46("shaftTwistDelayGain");
static const V lit47("driveLashDelayGain");
static const V lit48("armCamberGripLossGain");
static const V lit49("armToeGripLossGain");
static const V lit50("controlArmLimitGain");
static const V lit51("complianceDelayGripLoss");
static const V lit52("complianceDelayLimitLoss");
static const V lit53("carcassSupportGripGain");
static const V lit54("carcassGateGripGain");
static const V lit55("carcassDeformationLimitGain");
static const V lit56("carcassDelayGripLoss");
static const V lit57("recoveryBiasLimitGain");
static const V lit58("slipRecoveryGripGain");
static const V lit59("slipRecoverySnapLimitGain");
static const V lit60("roadSeverityLimitGain");
static const V lit61("roadShockGripLoss");
static const V lit62("loadPathLossGripLoss");
static const V lit63("thermalStressGripLoss");
static const V lit64("thermalStressLimitGain");
static const V lit65("maxGrip");
static const V lit66("maxLimit");
static const V lit67("minGrip");
static const V lit68("minDt");
static const V lit69("maxDt");
static const V lit70("decayTau");
static const V lit71("debugStoreInterval");
static const V lit72("FL");
static const V lit73("FR");
static const V lit74("RL");
static const V lit75("RR");
static const V lit76("state");
static const V lit77("wheels");
static const V lit78("status");
static const V lit79("INIT");
static const V lit80("updateCount");
static const V lit81("wheelsValid");
static const V lit82("storeOnly");
static const V lit83("avgGrip");
static const V lit84("avgLimit");
static const V lit85("avgMemory");
static const V lit86("avgResponseDelay");
static const V lit87("avgCombinedSlip");
static const V lit88("avgSlipEnergy");
static const V lit89("minGripLive");
static const V lit90("maxLimitLive");
static const V lit91("drivetrainLinked");
static const V lit92("lsdLinked");
static const V lit93("contactLinked");
static const V lit94("armLinked");
static const V lit95("complianceLinked");
static const V lit96("carcassLinked");
static const V lit97("recoveryLinked");
static const V lit98("roadLinked");
static const V lit99("loadPathLinked");
static const V lit100("thermalLinked");
static const V lit101("loadLinked");
static const V lit102("debugStoreTimer");
static const V lit103("debugStoreNow");
static const V lit104("grip");
static const V lit105("limit");
static const V lit106("memory");
static const V lit107("tempGrip");
static const V lit108("slipRatio");
static const V lit109("slipAngle");
static const V lit110("normalizedSlip");
static const V lit111("combinedSlip");
static const V lit112("slipEnergy");
static const V lit113("effectiveSlipRatio");
static const V lit114("effectiveSlipAngle");
static const V lit115("load");
static const V lit116("loadScale");
static const V lit117("bias");
static const V lit118("memoryGrip");
static const V lit119("hopEnergy");
static const V lit120("rubberLag");
static const V lit121("tyreTemp");
static const V lit122("tempNorm");
static const V lit123("contactGrip");
static const V lit124("contactLat");
static const V lit125("contactLong");
static const V lit126("contactQuality");
static const V lit127("effectiveGrip");
static const V lit128("contactLoss");
static const V lit129("responseScale");
static const V lit130("complianceDelay");
static const V lit131("complianceInput");
static const V lit132("complianceScale");
static const V lit133("driveTorque");
static const V lit134("lsdLock");
static const V lit135("lsdDiff");
static const V lit136("shaftTwist");
static const V lit137("driveLash");
static const V lit138("armCamber");
static const V lit139("armToe");
static const V lit140("geometryLoss");
static const V lit141("carcassSupport");
static const V lit142("carcassGripGate");
static const V lit143("carcassDeformation");
static const V lit144("carcassDelay");
static const V lit145("carcassRecoveryBias");
static const V lit146("carcassHeatSeed");
static const V lit147("recoveryGripReturn");
static const V lit148("recoveryRate");
static const V lit149("recoverySnapRisk");
static const V lit150("recoveryBite");
static const V lit151("recoveryDirtyReturn");
static const V lit152("recoveryTrust");
static const V lit153("roadSeverity");
static const V lit154("roadShock");
static const V lit155("roadSurfaceLimit");
static const V lit156("loadPathLoss");
static const V lit157("loadPathWork");
static const V lit158("thermalStress");
static const V lit159("finalGripRaw");
static const V lit160("active");
static const V lit161("debug");
static const V lit162("huge");
static const V lit163("safeLoadRaw");
static const V lit164("safeStore");
static const V lit165("safeField");
static const V lit166("getCar");
static const V lit167("ngp_contact_slip_ratio_");
static const V lit168("ngp_tire_state_slip_ratio_");
static const V lit169("ngp_tire_effective_slip_ratio_");
static const V lit170("ngp_tdyn_effective_slip_ratio_");
static const V lit171("ngp_slip_ratio_");
static const V lit172("ngp_filtered_slip_ratio_");
static const V lit173("ngp_contact_slip_angle_");
static const V lit174("ngp_tire_state_slip_angle_");
static const V lit175("ngp_tire_effective_slip_angle_");
static const V lit176("ngp_tdyn_effective_slip_angle_");
static const V lit177("ngp_slip_angle_");
static const V lit178("ngp_filtered_slip_angle_");
static const V lit179("ngp_contact_effective_slip_ratio_");
static const V lit180("ngp_contact_effective_slip_angle_");
static const V lit181("ngp_contact_combined_slip_");
static const V lit182("ngp_tire_state_combined_slip_");
static const V lit183("ngp_tdyn_combined_slip_");
static const V lit184("ngp_tire_dynamics_combined_slip_");
static const V lit185("ngp_tc_energy_");
static const V lit186("ngp_tcr_energy_push_");
static const V lit187("ngp_tire_slip_energy_");
static const V lit188("ngp_tire_carcass_heat_seed_");
static const V lit189("ngp_tyre_temp_");
static const V lit190("ngp_tire_temp_");
static const V lit191("ngp_thermal_tire_temp_");
static const V lit192("ngp_thermal_tyre_temp_");
static const V lit193("loadK");
static const V lit194("ngp_tire_load_input_");
static const V lit195("ngp_tdyn_load_");
static const V lit196("ngp_tc_load_");
static const V lit197("ngp_cp_load_");
static const V lit198("ngp_tcr_load_");
static const V lit199("ngp_wheel_load_");
static const V lit200("ngp_load_wheel_");
static const V lit201("ngp_tire_carcass_load_");
static const V lit202("ngp_lp_load_");
static const V lit203("ngp_load_path_load_");
static const V lit204("ngp_dlt_load_");
static const V lit205("max");
static const V lit206("ngp_load_front");
static const V lit207("ngp_front_bias");
static const V lit208("ngp_weight_front_bias");
static const V lit209("ngp_load_rear");
static const V lit210("ngp_rear_bias");
static const V lit211("ngp_weight_rear_bias");
static const V lit212("ngp_cp_grip_");
static const V lit213("ngp_tire_effective_grip_");
static const V lit214("ngp_tcr_effective_grip_");
static const V lit215("ngp_tc_grip_");
static const V lit216("ngp_cp_lat_");
static const V lit217("ngp_tire_contact_lat_");
static const V lit218("ngp_cp_long_");
static const V lit219("ngp_tire_contact_long_");
static const V lit220("ngp_tcr_quality_");
static const V lit221("ngp_tire_contact_quality_");
static const V lit222("ngp_contact_quality_");
static const V lit223("ngp_tc_contact_");
static const V lit224("ngp_tcr_contact_loss_");
static const V lit225("ngp_tire_contact_loss_");
static const V lit226("ngp_contact_loss_");
static const V lit227("ngp_tcr_relax_scale_");
static const V lit228("ngp_tire_response_scale_");
static const V lit229("ngp_tire_relax_scale_");
static const V lit230("ngp_tire_response_delay");
static const V lit231("ngp_tyre_response_delay");
static const V lit232("ngp_tcomp_response_delay");
static const V lit233("ngp_tire_compliance_response_delay");
static const V lit234("ngp_tcr_compliance_input_");
static const V lit235("ngp_compliance_contact_input_");
static const V lit236("ngp_tc_comp_input_");
static const V lit237("ngp_tcomp_input_");
static const V lit238("ngp_tire_compliance_");
static const V lit239("ngp_tcomp_compliance_");
static const V lit240("ngp_rubber_memory_");
static const V lit241("ngp_tire_memory_");
static const V lit242("ngp_memory_");
static const V lit243("ngp_memory_grip_");
static const V lit244("ngp_tire_memory_grip_");
static const V lit245("ngp_tirehop_energy_");
static const V lit246("ngp_tire_hop_energy_");
static const V lit247("ngp_tire_hop_");
static const V lit248("ngp_drive_torque");
static const V lit249("ngp_drivetrain_torque");
static const V lit250("ngp_dt_torque");
static const V lit251("ngp_diff_input_torque_nm");
static const V lit252("ngp_lsd_lock");
static const V lit253("ngp_diff_lock");
static const V lit254("ngp_lsd_diff");
static const V lit255("ngp_diff_diff");
static const V lit256("ngp_lsd_signed_diff");
static const V lit257("ngp_shaft_twist");
static const V lit258("ngp_windup_twist");
static const V lit259("ngp_driveline_twist");
static const V lit260("ngp_drive_lash");
static const V lit261("ngp_driveline_lash");
static const V lit262("ngp_windup_lash");
static const V lit263("ngp_control_arm_camber_");
static const V lit264("ngp_arm_camber_");
static const V lit265("ngp_ca_camber_");
static const V lit266("ngp_compliance_virtual_camber_");
static const V lit267("ngp_virtual_camber_");
static const V lit268("ngp_control_arm_toe_");
static const V lit269("ngp_arm_toe_");
static const V lit270("ngp_ca_toe_");
static const V lit271("ngp_compliance_virtual_toe_");
static const V lit272("ngp_virtual_toe_");
static const V lit273("ngp_carcass_support_");
static const V lit274("ngp_tire_carcass_support_");
static const V lit275("ngp_carcass_grip_gate_");
static const V lit276("ngp_tire_carcass_grip_gate_");
static const V lit277("ngp_tire_deformation_");
static const V lit278("ngp_tire_carcass_deformation_");
static const V lit279("ngp_carcass_deformation_");
static const V lit280("ngp_tire_contact_delay_");
static const V lit281("ngp_contact_delay_");
static const V lit282("ngp_carcass_recovery_bias_");
static const V lit283("ngp_tire_carcass_recovery_bias_");
static const V lit284("ngp_carcass_heat_seed_");
static const V lit285("ngp_slip_recovery_rate_");
static const V lit286("ngp_recovery_rate_");
static const V lit287("ngp_slip_grip_return_");
static const V lit288("ngp_grip_return_");
static const V lit289("ngp_slip_snap_risk_");
static const V lit290("ngp_snap_risk_");
static const V lit291("ngp_slip_bite_");
static const V lit292("ngp_recovery_bite_");
static const V lit293("ngp_slip_dirty_return_");
static const V lit294("ngp_dirty_return_");
static const V lit295("ngp_recovery_trust_");
static const V lit296("ngp_slip_recovery_trust_");
static const V lit297("ngp_road_input_severity_");
static const V lit298("ngp_rii_severity_");
static const V lit299("ngp_road_severity_");
static const V lit300("ngp_road_input_shock_");
static const V lit301("ngp_road_impact_");
static const V lit302("ngp_rii_shock_");
static const V lit303("ngp_road_surface_limit_");
static const V lit304("ngp_rii_surface_limit_");
static const V lit305("ngp_load_path_loss_");
static const V lit306("ngp_lp_path_loss_");
static const V lit307("ngp_lp_loss_");
static const V lit308("ngp_susp_path_loss_");
static const V lit309("ngp_load_path_work_");
static const V lit310("ngp_lp_work_");
static const V lit311("ngp_lp_vertical_work_");
static const V lit312("ngp_thermal_stress_");
static const V lit313("ngp_tire_thermal_stress_");
static const V lit314("ngp_virtual_thermal_stress");
static const V lit315("pi");
static const V lit316("sqrt");
static const V lit317("ngp_tire_grip_");
static const V lit318("ngp_tyre_grip_");
static const V lit319("ngp_tire_limit_");
static const V lit320("ngp_tyre_limit_");
static const V lit321("ngp_rubber_lag_");
static const V lit322("ngp_tire_norm_slip_");
static const V lit323("ngp_tdyn_slip_energy_");
static const V lit324("ngp_tire_dynamics_slip_energy_");
static const V lit325("ngp_td_grip_");
static const V lit326("ngp_td_limit_");
static const V lit327("ngp_td_combined_");
static const V lit328("ngp_td_energy_");
static const V lit329("ngp_td_lag_");
static const V lit330("ngp_tire_temp_grip_");
static const V lit331("ngp_tyre_temp_grip_");
static const V lit332("ngp_tire_slip_ratio_");
static const V lit333("ngp_tire_slip_angle_");
static const V lit334("ngp_tdyn_load_scale_");
static const V lit335("ngp_tire_memory_out_");
static const V lit336("ngp_tire_hop_energy_read_");
static const V lit337("ngp_tire_contact_grip_read_");
static const V lit338("ngp_tire_contact_lat_read_");
static const V lit339("ngp_tire_contact_long_read_");
static const V lit340("ngp_tdyn_contact_quality_");
static const V lit341("ngp_tdyn_effective_grip_");
static const V lit342("ngp_tdyn_contact_loss_");
static const V lit343("ngp_tdyn_response_scale_");
static const V lit344("ngp_tdyn_compliance_delay_");
static const V lit345("ngp_tdyn_drive_torque_");
static const V lit346("ngp_tdyn_lsd_lock_");
static const V lit347("ngp_tdyn_lsd_diff_");
static const V lit348("ngp_tdyn_arm_camber_");
static const V lit349("ngp_tdyn_arm_toe_");
static const V lit350("ngp_tdyn_geometry_loss_");
static const V lit351("ngp_tdyn_carcass_support_");
static const V lit352("ngp_tdyn_carcass_gate_");
static const V lit353("ngp_tdyn_recovery_snap_");
static const V lit354("ngp_tdyn_road_severity_");
static const V lit355("ngp_tdyn_load_path_loss_");
static const V lit356("ngp_tire_dynamics_status");
static const V lit357("UNKNOWN");
static const V lit358("ngp_tire_dynamics_update_count");
static const V lit359("ngp_tire_dynamics_wheels_valid");
static const V lit360("ngp_tire_dynamics_store_only");
static const V lit361("ngp_tire_dynamics_avg_grip");
static const V lit362("ngp_tire_dynamics_avg_limit");
static const V lit363("ngp_td_avg_grip");
static const V lit364("ngp_td_avg_limit");
static const V lit365("ngp_td_avg_combined");
static const V lit366("ngp_td_avg_energy");
static const V lit367("ngp_td_min_grip");
static const V lit368("ngp_td_max_limit");
static const V lit369("ngp_tire_dynamics_avg_memory");
static const V lit370("ngp_tire_dynamics_avg_response_delay");
static const V lit371("ngp_tire_dynamics_avg_combined_slip");
static const V lit372("ngp_tire_dynamics_avg_slip_energy");
static const V lit373("ngp_tire_dynamics_drivetrain_linked");
static const V lit374("ngp_tire_dynamics_lsd_linked");
static const V lit375("ngp_tire_dynamics_contact_linked");
static const V lit376("ngp_tire_dynamics_arm_linked");
static const V lit377("ngp_tire_dynamics_compliance_linked");
static const V lit378("ngp_tire_dynamics_carcass_linked");
static const V lit379("ngp_tire_dynamics_recovery_linked");
static const V lit380("ngp_tire_dynamics_road_linked");
static const V lit381("ngp_tire_dynamics_load_path_linked");
static const V lit382("ngp_tire_dynamics_thermal_linked");
static const V lit383("ngp_tire_dynamics_load_linked");
static const V lit384("init");
static const V lit385("update");
static const V lit386("BAD DT");
static const V lit387("STORE ONLY");
static const V lit388("NO WHEELS / STORE ONLY");
static const V lit389("RUNNING");
static const V lit390("getWheel");
static const V lit391("getGrip");
static const V lit392("getLimit");
static const V lit393("getMemory");
static const V lit394("getCombinedSlip");
static const V lit395("getSlipEnergy");
static const V lit396("getState");
static const V lit397("debugStr");
static const V lit398("format");
static const V lit399("Status %s / Count %.0f\n");
static const V lit400("W%d Grip %.3f Limit %.3f Mem %.3f TempGrip %.3f\n");
static const V lit401("SlipR %.3f SlipA %.3f Comb %.3f E %.3f\n");
static const V lit402("Load %.0f Scale %.2f Bias %.3f\n");
static const V lit403("ContactQ %.2f Eff %.2f Loss %.2f Resp %.2f\n");
static const V lit404("LSD %.2f Drive %.3f Arm C %.3f T %.3f Hop %.3f");
static const V lit405("Status %s / Count %.0f / Wheels %s / Store %s\n");
static const V lit406("Grip %.3f %.3f %.3f %.3f / Avg %.3f Min %.3f\n");
static const V lit407("Limit %.3f %.3f %.3f %.3f / Avg %.3f Max %.3f\n");
static const V lit408("Combined %.3f %.3f %.3f %.3f / E %.3f\n");
static const V lit409("Memory %.3f %.3f %.3f %.3f\n");
static const V lit410("Links DT:%s LSD:%s CT:%s ARM:%s CMP:%s CAR:%s REC:%s ROAD:%s");
static const V lit411("OK");
static const V lit412("NIL");
static const V lit413("YES");
static const V lit414("NO");
V load_tire_dynamics(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(41);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.12));set(z,lit3,V(10.0));set(z,lit4,V(0.174533));set(z,lit5,V(1.0));set(z,lit6,V(1.0));set(z,lit7,V(0.4));set(z,lit8,V(1.0));set(z,lit9,V(0.55));set(z,lit10,V(0.65));set(z,lit11,V(0.42));set(z,lit12,V(0.85));set(z,lit13,V(0.05));set(z,lit14,V(3500.0));set(z,lit15,V(3500.0));set(z,lit16,V(0.08));set(z,lit17,V(0.9));set(z,lit18,V(1.1));set(z,lit19,V(25.0));set(z,lit20,V(45.0));set(z,lit21,V(95.0));set(z,lit22,V(70.0));set(z,lit23,V(0.88));set(z,lit24,V(0.18));set(z,lit25,V(1.02));set(z,lit26,V(0.008));set(z,lit27,V(0.72));set(z,lit28,V(1.05));set(z,lit29,V(1.0));set(z,lit30,V(0.75));set(z,lit31,V(0.8));set(z,lit32,V(0.25));set(z,lit33,V(0.08));set(z,lit34,V(0.2));set(z,lit35,V(0.1));set(z,lit36,V(1.0));set(z,lit37,V(0.5));set(z,lit38,V(0.5));set(z,lit39,V(0.18));set(z,lit40,V(0.16));set(z,lit41,V(0.1));set(z,lit42,V(0.12));set(z,lit43,V(0.16));set(z,lit44,V(0.14));set(z,lit45,V(0.05));set(z,lit46,V(0.08));set(z,lit47,V(0.1));set(z,lit48,V(0.045));set(z,lit49,V(0.065));set(z,lit50,V(0.08));set(z,lit51,V(0.1));set(z,lit52,V(0.08));set(z,lit53,V(0.22));set(z,lit54,V(0.18));set(z,lit55,V(0.12));set(z,lit56,V(0.08));set(z,lit57,V(0.08));set(z,lit58,V(0.1));set(z,lit59,V(0.1));set(z,lit60,V(0.08));set(z,lit61,V(0.06));set(z,lit62,V(0.08));set(z,lit63,V(0.05));set(z,lit64,V(0.04));set(z,lit65,V(1.2));set(z,lit66,V(2.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0001));set(z,lit69,V(0.1));set(z,lit70,V(0.18));set(z,lit71,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit72);set(z,V(1.0),lit73);set(z,V(2.0),lit74);set(z,V(3.0),lit75);return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit76)};V t5=([&](){V z=table();set(z,lit77,([&](){V z=table();return z;})());set(z,lit78,lit79);set(z,lit80,V(0.0));set(z,lit81,V(false));set(z,lit82,V(false));set(z,lit83,V(1.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(1.0));set(z,lit90,V(0.0));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(999.0));set(z,lit103,V(true));return z;})();refs[0].put(std::move(t5));}
{double t6=num(V(0.0)),t7=num(V(3.0)),t8=num(V(1.0));for(double t9=t6;(t8>0?t9<=t7:t9>=t7);t9+=t8){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t9);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0))};V t10=([&](){V z=table();set(z,lit104,V(1.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(1.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,get(get(e->slot(1,1),lit1),lit15));set(z,lit116,V(1.0));set(z,lit117,V(0.5));set(z,lit118,V(1.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,get(get(e->slot(1,1),lit1),lit19));set(z,lit122,V(0.0));set(z,lit123,V(1.0));set(z,lit124,V(1.0));set(z,lit125,V(1.0));set(z,lit126,V(1.0));set(z,lit127,V(1.0));set(z,lit128,V(0.0));set(z,lit129,V(1.0));set(z,lit130,V(0.0));set(z,lit131,V(0.0));set(z,lit132,V(1.0));set(z,lit133,V(0.0));set(z,lit134,V(0.0));set(z,lit135,V(0.0));set(z,lit136,V(0.0));set(z,lit137,V(0.0));set(z,lit138,V(0.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(1.0));set(z,lit142,V(1.0));set(z,lit143,V(0.0));set(z,lit144,V(0.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(1.0));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(0.0));set(z,lit151,V(0.0));set(z,lit152,V(1.0));set(z,lit153,V(0.0));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,V(0.0));set(z,lit158,V(0.0));set(z,lit159,V(1.0));set(z,lit160,V(false));return z;})();refs[0].put(std::move(t10));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),e->slot(0,0))};V t11=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));refs[0].put(std::move(t11));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t12=get(e->slot(0,1),lit76);refs[0].put(std::move(t12));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t13=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t13);}
if(truth(([&](){V t14=([&](){V t15=([&](){V t16=eq(e->slot(0,2),V());return !truth(t16)?ne(e->slot(0,2),e->slot(0,2)):t16;})();return !truth(t15)?eq(e->slot(0,2),get(e->get("math"),lit162)):t15;})();return !truth(t14)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit162)))):t14;})())){return Args{([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,3),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t18));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t19=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t19));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(e->slot(0,0)))};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t21=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t22=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t23=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t23));}
if(truth(le(e->slot(0,2),V(1e-06)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
{V t24=get(e->slot(0,0),lit163);e->slot(0,7)=std::move(t24);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t25=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t25);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t26=e->slot(0,1);return !truth(t26)?V(0.0):t26;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t27=e->slot(0,1);return !truth(t27)?V(0.0):t27;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t28=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t28);}
{double t29=num(V(1.0)),t30=num(length(e->slot(0,1))),t31=num(V(1.0));for(double t32=t29;(t31>0?t32<=t30:t32>=t30);t32+=t31){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t32);{V t33=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t33);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t34=e->slot(1,0);return !truth(t34)?V(0.0):t34;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
if(truth(eq(e->slot(0,0),V()))){return Args{V(),V()};
}
return Args{e->slot(0,0),V()};
return Args{};});
{V t35=get(e->slot(0,0),lit164);e->slot(0,10)=std::move(t35);}
{V t36=get(e->slot(0,0),lit165);e->slot(0,11)=std::move(t36);}
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t37=V(!truth(e->get("ac")));return !truth(t37)?V(!truth(get(e->get("ac"),lit166))):t37;})())){return Args{V()};
}
{Args t38=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit166),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t38,0);e->slot(0,1)=arg(t38,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,11),Args{e->slot(0,0),lit77,V()});
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t39=first(call(e->slot(1,13),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t39);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{V t40=first(call(e->slot(1,11),Args{e->slot(0,2),e->slot(0,1),V()}));e->slot(0,3)=std::move(t40);}
if(truth(ne(e->slot(0,3),V()))){return Args{e->slot(0,3)};
}
return call(e->slot(1,11),Args{e->slot(0,2),add(e->slot(0,1),V(1.0)),V()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit102)};V t41=add(([&](){V t42=get(get(e->slot(1,1),lit76),lit102);return !truth(t42)?V(0.0):t42;})(),([&](){V t43=e->slot(0,0);return !truth(t43)?V(0.0):t43;})());refs[0].put(std::move(t41));}
if(truth(ge(get(get(e->slot(1,1),lit76),lit102),get(get(e->slot(1,1),lit1),lit71)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit102)};V t44=V(0.0);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit103)};V t45=V(true);refs[0].put(std::move(t45));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit103)};V t46=V(false);refs[0].put(std::move(t46));}
}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t47=call(e->slot(1,9),Args{V(),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0)),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0)),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0))});e->slot(0,2)=arg(t47,0);e->slot(0,3)=arg(t47,1);}
{Args t48=call(e->slot(1,9),Args{V(),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0)),concat(lit178,e->slot(0,0))});e->slot(0,4)=arg(t48,0);e->slot(0,5)=arg(t48,1);}
if(truth(([&](){V t49=eq(e->slot(0,2),V());return truth(t49)?e->slot(0,1):t49;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t50=first(call(e->slot(1,3),Args{first(call(e->slot(1,11),Args{e->slot(0,1),lit108,V(0.0)})),V(0.0)}));refs[0].put(std::move(t50));}
}
if(truth(([&](){V t51=eq(e->slot(0,4),V());return truth(t51)?e->slot(0,1):t51;})())){{std::array<Ref,1> refs{Ref(e,0,4)};V t52=first(call(e->slot(1,3),Args{first(call(e->slot(1,11),Args{e->slot(0,1),lit109,V(0.0)})),V(0.0)}));refs[0].put(std::move(t52));}
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t53=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t54=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t54));}
{V t55=first(call(e->slot(1,9),Args{e->slot(0,2),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0)),concat(lit179,e->slot(0,0))}));e->slot(0,6)=std::move(t55);}
{V t56=first(call(e->slot(1,9),Args{e->slot(0,4),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit180,e->slot(0,0))}));e->slot(0,7)=std::move(t56);}
{V t57=first(call(e->slot(1,9),Args{V(),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0)),concat(lit184,e->slot(0,0))}));e->slot(0,8)=std::move(t57);}
{V t58=first(call(e->slot(1,9),Args{V(),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0)),concat(lit188,e->slot(0,0))}));e->slot(0,9)=std::move(t58);}
return Args{first(call(e->slot(1,5),Args{e->slot(0,2)})),first(call(e->slot(1,5),Args{e->slot(0,4)})),first(call(e->slot(1,5),Args{e->slot(0,6)})),first(call(e->slot(1,5),Args{e->slot(0,7)})),e->slot(0,8),e->slot(0,9),([&](){V t59=ne(e->slot(0,3),V());return !truth(t59)?ne(e->slot(0,5),V()):t59;})()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t60=call(e->slot(1,9),Args{V(),concat(lit189,e->slot(0,0)),concat(lit190,e->slot(0,0)),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0))});e->slot(0,1)=arg(t60,0);e->slot(0,2)=arg(t60,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit100)};V t61=V(true);refs[0].put(std::move(t61));}
}
return call(e->slot(1,3),Args{e->slot(0,1),get(get(e->slot(1,1),lit1),lit19)});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t62=V();e->slot(0,2)=std::move(t62);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,0,2)};V t63=first(call(e->slot(1,11),Args{e->slot(0,1),lit115,V()}));refs[0].put(std::move(t63));}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t64=first(call(e->slot(1,11),Args{e->slot(0,1),lit193,V()}));refs[0].put(std::move(t64));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t65=V();refs[0].put(std::move(t65));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t66=V();refs[0].put(std::move(t66));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t67=V();refs[0].put(std::move(t67));}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t68=first(call(e->slot(1,5),call(e->slot(1,3),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit14)})));refs[0].put(std::move(t68));}
}
}
{Args t69=call(e->slot(1,9),Args{V(),concat(lit194,e->slot(0,0)),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0)),concat(lit197,e->slot(0,0)),concat(lit198,e->slot(0,0)),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0)),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0)),concat(lit203,e->slot(0,0))});e->slot(0,3)=arg(t69,0);e->slot(0,4)=arg(t69,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit101)};V t70=V(true);refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t71=first(call(e->slot(1,5),call(e->slot(1,3),Args{e->slot(0,3),([&](){V t72=e->slot(0,2);return !truth(t72)?get(get(e->slot(1,1),lit1),lit14):t72;})()})));refs[0].put(std::move(t71));}
if(truth(ne(e->slot(0,2),V()))){return Args{add(mul(e->slot(0,2),V(0.65)),mul(e->slot(0,3),V(0.35)))};
}
return Args{e->slot(0,3)};
}
{V t73=first(call(e->slot(1,7),Args{concat(lit204,e->slot(0,0))}));e->slot(0,5)=std::move(t73);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit101)};V t74=V(true);refs[0].put(std::move(t74));}
return call(get(e->get("math"),lit205),Args{V(0.0),add(get(get(e->slot(1,1),lit1),lit14),first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})))});
}
return Args{([&](){V t75=e->slot(0,2);return !truth(t75)?get(get(e->slot(1,1),lit1),lit14):t75;})()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(le(e->slot(0,0),V(1.0)))){return call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{V(0.5),lit206,lit207,lit208})),V(0.0),V(1.0)});
}
return call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{V(0.5),lit209,lit210,lit211})),V(0.0),V(1.0)});
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t76=call(e->slot(1,9),Args{V(),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit214,e->slot(0,0)),concat(lit215,e->slot(0,0))});e->slot(0,2)=arg(t76,0);e->slot(0,3)=arg(t76,1);}
{Args t77=call(e->slot(1,9),Args{V(),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0))});e->slot(0,4)=arg(t77,0);e->slot(0,5)=arg(t77,1);}
{Args t78=call(e->slot(1,9),Args{V(),concat(lit218,e->slot(0,0)),concat(lit219,e->slot(0,0))});e->slot(0,6)=arg(t78,0);e->slot(0,7)=arg(t78,1);}
if(truth(([&](){V t79=([&](){V t80=ne(e->slot(0,3),V());return !truth(t80)?ne(e->slot(0,5),V()):t80;})();return !truth(t79)?ne(e->slot(0,7),V()):t79;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit93)};V t81=V(true);refs[0].put(std::move(t81));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit123)};V t82=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)})),V(0.4),V(1.25)}));refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t83=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(1.0)})),V(0.4),V(1.2)}));refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t84=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(1.0)})),V(0.4),V(1.2)}));refs[0].put(std::move(t84));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t85=call(e->slot(1,9),Args{V(),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0)),concat(lit223,e->slot(0,0))});e->slot(0,2)=arg(t85,0);e->slot(0,3)=arg(t85,1);}
{Args t86=call(e->slot(1,9),Args{V(),concat(lit214,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit215,e->slot(0,0))});e->slot(0,4)=arg(t86,0);e->slot(0,5)=arg(t86,1);}
{Args t87=call(e->slot(1,9),Args{V(),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0)),concat(lit226,e->slot(0,0))});e->slot(0,6)=arg(t87,0);e->slot(0,7)=arg(t87,1);}
{Args t88=call(e->slot(1,9),Args{V(),concat(lit227,e->slot(0,0)),concat(lit228,e->slot(0,0)),concat(lit229,e->slot(0,0))});e->slot(0,8)=arg(t88,0);e->slot(0,9)=arg(t88,1);}
{Args t89=call(e->slot(1,9),Args{V(),lit230,lit231,lit232,lit233});e->slot(0,10)=arg(t89,0);e->slot(0,11)=arg(t89,1);}
{Args t90=call(e->slot(1,9),Args{V(),concat(lit234,e->slot(0,0)),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0))});e->slot(0,12)=arg(t90,0);e->slot(0,13)=arg(t90,1);}
if(truth(([&](){V t91=([&](){V t92=([&](){V t93=([&](){V t94=([&](){V t95=e->slot(0,3);return !truth(t95)?e->slot(0,5):t95;})();return !truth(t94)?e->slot(0,7):t94;})();return !truth(t93)?e->slot(0,9):t93;})();return !truth(t92)?e->slot(0,11):t92;})();return !truth(t91)?e->slot(0,13):t91;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit93)};V t96=V(true);refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit95)};V t97=([&](){V t98=([&](){V t99=get(get(e->slot(1,1),lit76),lit95);return !truth(t99)?ne(e->slot(0,11),V()):t99;})();return !truth(t98)?ne(e->slot(0,13),V()):t98;})();refs[0].put(std::move(t97));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t100=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t101=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(1.0)})),V(0.35),V(1.25)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t102=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),sub(V(1.0),get(e->slot(0,1),lit126))})),V(0.0),V(1.0)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t103=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,8),V(1.0)})),V(0.55),V(1.55)}));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit130)};V t104=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit131)};V t105=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit132)};V t106=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{V(1.0),concat(lit238,e->slot(0,0)),concat(lit239,e->slot(0,0))})),V(0.35),V(1.35)}));refs[0].put(std::move(t106));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t107=call(e->slot(1,9),Args{V(),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0))});e->slot(0,2)=arg(t107,0);e->slot(0,3)=arg(t107,1);}
{Args t108=call(e->slot(1,9),Args{V(),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0))});e->slot(0,4)=arg(t108,0);e->slot(0,5)=arg(t108,1);}
{Args t109=call(e->slot(1,9),Args{V(),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0)),concat(lit247,e->slot(0,0))});e->slot(0,6)=arg(t109,0);e->slot(0,7)=arg(t109,1);}
if(truth(([&](){V t110=ne(e->slot(0,3),V());return !truth(t110)?ne(e->slot(0,5),V()):t110;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit93)};V t111=([&](){V t112=get(get(e->slot(1,1),lit76),lit93);return !truth(t112)?V(false):t112;})();refs[0].put(std::move(t111));}
}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit93)};V t113=([&](){V t114=get(get(e->slot(1,1),lit76),lit93);return !truth(t114)?V(false):t114;})();refs[0].put(std::move(t113));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t115=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),([&](){V t116=get(e->slot(0,1),lit106);return !truth(t116)?V(0.0):t116;})()})),V(0.0),V(1.0)}));refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit118)};V t117=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),sub(V(1.0),mul(get(e->slot(0,1),lit106),V(0.12)))})),V(0.0),V(1.2)}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t118=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t118));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t119=ge(e->slot(0,0),V(2.0));e->slot(0,2)=std::move(t119);}
{Args t120=call(e->slot(1,9),Args{V(),lit248,lit249,lit250,lit251});e->slot(0,3)=arg(t120,0);e->slot(0,4)=arg(t120,1);}
{Args t121=call(e->slot(1,9),Args{V(),lit252,lit253});e->slot(0,5)=arg(t121,0);e->slot(0,6)=arg(t121,1);}
{Args t122=call(e->slot(1,9),Args{V(),lit254,lit255,lit256});e->slot(0,7)=arg(t122,0);e->slot(0,8)=arg(t122,1);}
{Args t123=call(e->slot(1,9),Args{V(),lit257,lit258,lit259});e->slot(0,9)=arg(t123,0);e->slot(0,10)=arg(t123,1);}
{Args t124=call(e->slot(1,9),Args{V(),lit260,lit261,lit262});e->slot(0,11)=arg(t124,0);e->slot(0,12)=arg(t124,1);}
if(truth(([&](){V t125=([&](){V t126=ne(e->slot(0,4),V());return !truth(t126)?ne(e->slot(0,10),V()):t126;})();return !truth(t125)?ne(e->slot(0,12),V()):t125;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit91)};V t127=V(true);refs[0].put(std::move(t127));}
}
if(truth(([&](){V t128=ne(e->slot(0,6),V());return !truth(t128)?ne(e->slot(0,8),V()):t128;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit92)};V t129=V(true);refs[0].put(std::move(t129));}
}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit133)};V t130=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t130));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t131=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t132=first(call(e->slot(1,5),call(e->slot(1,3),Args{e->slot(0,7),V(0.0)})));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit136)};V t133=first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)}));refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit137)};V t134=first(call(e->slot(1,3),Args{e->slot(0,11),V(0.0)}));refs[0].put(std::move(t134));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit133)};V t135=V(0.0);refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t136=V(0.0);refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t137=V(0.0);refs[0].put(std::move(t137));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit136)};V t138=V(0.0);refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit137)};V t139=V(0.0);refs[0].put(std::move(t139));}
}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t140=call(e->slot(1,9),Args{V(),concat(lit263,e->slot(0,0)),concat(lit264,e->slot(0,0)),concat(lit265,e->slot(0,0)),concat(lit266,e->slot(0,0)),concat(lit267,e->slot(0,0))});e->slot(0,2)=arg(t140,0);e->slot(0,3)=arg(t140,1);}
{Args t141=call(e->slot(1,9),Args{V(),concat(lit268,e->slot(0,0)),concat(lit269,e->slot(0,0)),concat(lit270,e->slot(0,0)),concat(lit271,e->slot(0,0)),concat(lit272,e->slot(0,0))});e->slot(0,4)=arg(t141,0);e->slot(0,5)=arg(t141,1);}
if(truth(([&](){V t142=ne(e->slot(0,3),V());return !truth(t142)?ne(e->slot(0,5),V()):t142;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit94)};V t143=V(true);refs[0].put(std::move(t143));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit138)};V t144=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t144));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit139)};V t145=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t145));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,38);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t146=call(e->slot(1,9),Args{V(),concat(lit273,e->slot(0,0)),concat(lit274,e->slot(0,0))});e->slot(0,2)=arg(t146,0);e->slot(0,3)=arg(t146,1);}
{Args t147=call(e->slot(1,9),Args{V(),concat(lit275,e->slot(0,0)),concat(lit276,e->slot(0,0))});e->slot(0,4)=arg(t147,0);e->slot(0,5)=arg(t147,1);}
{Args t148=call(e->slot(1,9),Args{V(),concat(lit277,e->slot(0,0)),concat(lit278,e->slot(0,0)),concat(lit279,e->slot(0,0))});e->slot(0,6)=arg(t148,0);e->slot(0,7)=arg(t148,1);}
{Args t149=call(e->slot(1,9),Args{V(),concat(lit280,e->slot(0,0)),concat(lit281,e->slot(0,0))});e->slot(0,8)=arg(t149,0);e->slot(0,9)=arg(t149,1);}
{Args t150=call(e->slot(1,9),Args{V(),concat(lit282,e->slot(0,0)),concat(lit283,e->slot(0,0))});e->slot(0,10)=arg(t150,0);e->slot(0,11)=arg(t150,1);}
{Args t151=call(e->slot(1,9),Args{V(),concat(lit284,e->slot(0,0)),concat(lit188,e->slot(0,0))});e->slot(0,12)=arg(t151,0);e->slot(0,13)=arg(t151,1);}
if(truth(([&](){V t152=([&](){V t153=([&](){V t154=([&](){V t155=([&](){V t156=e->slot(0,3);return !truth(t156)?e->slot(0,5):t156;})();return !truth(t155)?e->slot(0,7):t155;})();return !truth(t154)?e->slot(0,9):t154;})();return !truth(t153)?e->slot(0,11):t153;})();return !truth(t152)?e->slot(0,13):t152;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit96)};V t157=V(true);refs[0].put(std::move(t157));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit141)};V t158=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit142)};V t159=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit143)};V t160=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t161=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,8),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit145)};V t162=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit146)};V t163=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,12),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t163));}
{Args t164=call(e->slot(1,9),Args{V(),concat(lit285,e->slot(0,0)),concat(lit286,e->slot(0,0))});e->slot(0,14)=arg(t164,0);e->slot(0,15)=arg(t164,1);}
{Args t165=call(e->slot(1,9),Args{V(),concat(lit287,e->slot(0,0)),concat(lit288,e->slot(0,0))});e->slot(0,16)=arg(t165,0);e->slot(0,17)=arg(t165,1);}
{Args t166=call(e->slot(1,9),Args{V(),concat(lit289,e->slot(0,0)),concat(lit290,e->slot(0,0))});e->slot(0,18)=arg(t166,0);e->slot(0,19)=arg(t166,1);}
{Args t167=call(e->slot(1,9),Args{V(),concat(lit291,e->slot(0,0)),concat(lit292,e->slot(0,0))});e->slot(0,20)=arg(t167,0);e->slot(0,21)=arg(t167,1);}
{Args t168=call(e->slot(1,9),Args{V(),concat(lit293,e->slot(0,0)),concat(lit294,e->slot(0,0))});e->slot(0,22)=arg(t168,0);e->slot(0,23)=arg(t168,1);}
{Args t169=call(e->slot(1,9),Args{V(),concat(lit295,e->slot(0,0)),concat(lit296,e->slot(0,0))});e->slot(0,24)=arg(t169,0);e->slot(0,25)=arg(t169,1);}
if(truth(([&](){V t170=([&](){V t171=([&](){V t172=([&](){V t173=([&](){V t174=e->slot(0,15);return !truth(t174)?e->slot(0,17):t174;})();return !truth(t173)?e->slot(0,19):t173;})();return !truth(t172)?e->slot(0,21):t172;})();return !truth(t171)?e->slot(0,23):t171;})();return !truth(t170)?e->slot(0,25):t170;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit97)};V t175=V(true);refs[0].put(std::move(t175));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit148)};V t176=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit147)};V t177=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,16),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit149)};V t178=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,18),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit150)};V t179=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,20),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit151)};V t180=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,22),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit152)};V t181=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,24),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t181));}
{Args t182=call(e->slot(1,9),Args{V(),concat(lit297,e->slot(0,0)),concat(lit298,e->slot(0,0)),concat(lit299,e->slot(0,0))});e->slot(0,26)=arg(t182,0);e->slot(0,27)=arg(t182,1);}
{Args t183=call(e->slot(1,9),Args{V(),concat(lit300,e->slot(0,0)),concat(lit301,e->slot(0,0)),concat(lit302,e->slot(0,0))});e->slot(0,28)=arg(t183,0);e->slot(0,29)=arg(t183,1);}
{Args t184=call(e->slot(1,9),Args{V(),concat(lit303,e->slot(0,0)),concat(lit304,e->slot(0,0))});e->slot(0,30)=arg(t184,0);e->slot(0,31)=arg(t184,1);}
if(truth(([&](){V t185=([&](){V t186=e->slot(0,27);return !truth(t186)?e->slot(0,29):t186;})();return !truth(t185)?e->slot(0,31):t185;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit98)};V t187=V(true);refs[0].put(std::move(t187));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit153)};V t188=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,26),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit154)};V t189=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,28),V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit155)};V t190=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,30),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t190));}
{Args t191=call(e->slot(1,9),Args{V(),concat(lit305,e->slot(0,0)),concat(lit306,e->slot(0,0)),concat(lit307,e->slot(0,0)),concat(lit308,e->slot(0,0))});e->slot(0,32)=arg(t191,0);e->slot(0,33)=arg(t191,1);}
{Args t192=call(e->slot(1,9),Args{V(),concat(lit309,e->slot(0,0)),concat(lit310,e->slot(0,0)),concat(lit311,e->slot(0,0))});e->slot(0,34)=arg(t192,0);e->slot(0,35)=arg(t192,1);}
if(truth(([&](){V t193=e->slot(0,33);return !truth(t193)?e->slot(0,35):t193;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit99)};V t194=V(true);refs[0].put(std::move(t194));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit156)};V t195=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,32),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit157)};V t196=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,34),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t196));}
{Args t197=call(e->slot(1,9),Args{V(),concat(lit312,e->slot(0,0)),concat(lit313,e->slot(0,0)),lit314});e->slot(0,36)=arg(t197,0);e->slot(0,37)=arg(t197,1);}
if(truth(e->slot(0,37))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit100)};V t198=V(true);refs[0].put(std::move(t198));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit158)};V t199=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,36),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t199));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t200=first(call(e->slot(1,5),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t200);}
if(truth(le(e->slot(0,1),get(e->get("math"),lit315)))){return Args{divv(e->slot(0,1),first(call(get(e->get("math"),lit205),Args{get(get(e->slot(1,1),lit1),lit4),V(0.001)})))};
}
return Args{divv(e->slot(0,1),first(call(get(e->get("math"),lit205),Args{get(get(e->slot(1,1),lit1),lit3),V(0.001)})))};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t201=divv(first(call(e->slot(1,5),Args{e->slot(0,0)})),first(call(get(e->get("math"),lit205),Args{get(get(e->slot(1,1),lit1),lit2),V(0.001)})));e->slot(0,3)=std::move(t201);}
{V t202=first(call(e->slot(1,26),Args{e->slot(0,1)}));e->slot(0,4)=std::move(t202);}
{V t203=first(call(e->slot(1,3),Args{e->slot(0,2),V(-num(V(1.0)))}));e->slot(0,5)=std::move(t203);}
if(truth(lt(e->slot(0,5),V(0.0)))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t204=mul(e->slot(1,3),get(get(e->slot(2,1),lit1),lit5));e->slot(0,0)=std::move(t204);}
{V t205=mul(e->slot(1,4),get(get(e->slot(2,1),lit1),lit6));e->slot(0,1)=std::move(t205);}
{std::array<Ref,1> refs{Ref(e,1,5)};V t206=first(call(get(e->get("math"),lit316),Args{add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1)))}));refs[0].put(std::move(t206));}
}
{std::array<Ref,1> refs{Ref(e,0,5)};V t207=first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(3.0)}));refs[0].put(std::move(t207));}
{V t208=first(call(get(e->get("math"),lit205),Args{sub(e->slot(0,5),V(1.0)),V(0.0)}));e->slot(0,6)=std::move(t208);}
{V t209=sub(get(get(e->slot(1,1),lit1),lit8),divv(mul(e->slot(0,6),get(get(e->slot(1,1),lit1),lit7)),add(V(1.0),mul(e->slot(0,6),get(get(e->slot(1,1),lit1),lit9)))));e->slot(0,7)=std::move(t209);}
{std::array<Ref,1> refs{Ref(e,0,7)};V t210=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.45),V(1.08)}));refs[0].put(std::move(t210));}
{V t211=first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),get(get(e->slot(1,1),lit1),lit66)}));e->slot(0,8)=std::move(t211);}
{V t212=first(call(e->slot(1,4),Args{mul(add(e->slot(0,3),e->slot(0,4)),V(0.5)),V(0.0),V(3.0)}));e->slot(0,9)=std::move(t212);}
return Args{e->slot(0,7),e->slot(0,5),e->slot(0,8),e->slot(0,9),e->slot(0,3),e->slot(0,4)};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t213=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));e->slot(0,5)=std::move(t213);}
{V t214=mul(mul(first(call(get(e->get("math"),lit205),Args{sub(e->slot(0,1),get(get(e->slot(1,1),lit1),lit10)),V(0.0)})),e->slot(0,4)),get(get(e->slot(1,1),lit1),lit11));e->slot(0,6)=std::move(t214);}
{V t215=mul(mul(e->slot(0,5),e->slot(0,4)),get(get(e->slot(1,1),lit1),lit12));e->slot(0,7)=std::move(t215);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t216=sub(add(e->slot(0,5),e->slot(0,6)),e->slot(0,7));refs[0].put(std::move(t216));}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t217=first(call(get(e->get("math"),lit205),joined(Args{e->slot(0,5)},call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}))));refs[0].put(std::move(t217));}
}
{std::array<Ref,1> refs{Ref(e,0,5)};V t218=add(e->slot(0,5),mul(([&](){V t219=get(e->slot(0,3),lit146);return !truth(t219)?V(0.0):t219;})(),V(0.02)));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(e,0,5)};V t220=add(e->slot(0,5),mul(([&](){V t221=get(e->slot(0,3),lit154);return !truth(t221)?V(0.0):t221;})(),V(0.015)));refs[0].put(std::move(t220));}
return call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(1.0)});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t222=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t222);}
{V t223=add(add(mul(([&](){V t224=get(e->slot(0,3),lit112);return !truth(t224)?V(0.0):t224;})(),V(0.12)),mul(([&](){V t225=get(e->slot(0,3),lit143);return !truth(t225)?V(0.0):t225;})(),V(0.08))),mul(([&](){V t226=get(e->slot(0,3),lit158);return !truth(t226)?V(0.0):t226;})(),V(0.08)));e->slot(0,6)=std::move(t223);}
{V t227=add(mul(mul(first(call(get(e->get("math"),lit205),Args{sub(e->slot(0,2),get(get(e->slot(1,1),lit1),lit30)),V(0.0)})),e->slot(0,4)),get(get(e->slot(1,1),lit1),lit31)),mul(mul(e->slot(0,6),e->slot(0,4)),V(0.12)));e->slot(0,7)=std::move(t227);}
{V t228=mul(mul(mul(e->slot(0,5),e->slot(0,4)),get(get(e->slot(1,1),lit1),lit32)),first(call(e->slot(1,4),Args{([&](){V t229=get(e->slot(0,3),lit126);return !truth(t229)?V(1.0):t229;})(),V(0.25),V(1.0)})));e->slot(0,8)=std::move(t228);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t230=first(call(e->slot(1,4),Args{sub(add(e->slot(0,5),e->slot(0,7)),e->slot(0,8)),V(0.0),V(1.0)}));refs[0].put(std::move(t230));}
call(e->slot(1,10),Args{concat(lit240,e->slot(0,0)),e->slot(0,5)});
call(e->slot(1,10),Args{concat(lit241,e->slot(0,0)),e->slot(0,5)});
return Args{e->slot(0,5)};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t231=first(call(e->slot(1,4),Args{divv(sub(e->slot(0,0),get(get(e->slot(1,1),lit1),lit19)),first(call(get(e->get("math"),lit205),Args{get(get(e->slot(1,1),lit1),lit22),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t231);}
{V t232=V(1.0);e->slot(0,2)=std::move(t232);}
if(truth(lt(e->slot(0,0),get(get(e->slot(1,1),lit1),lit20)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t233=add(get(get(e->slot(1,1),lit1),lit23),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit24)));refs[0].put(std::move(t233));}
}else if(truth(lt(e->slot(0,0),get(get(e->slot(1,1),lit1),lit21)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t234=get(get(e->slot(1,1),lit1),lit25);refs[0].put(std::move(t234));}
}else{{std::array<Ref,1> refs{Ref(e,0,2)};V t235=sub(get(get(e->slot(1,1),lit1),lit25),mul(sub(e->slot(0,0),get(get(e->slot(1,1),lit1),lit21)),get(get(e->slot(1,1),lit1),lit26)));refs[0].put(std::move(t235));}
}

{std::array<Ref,1> refs{Ref(e,0,2)};V t236=mul(e->slot(0,2),sub(V(1.0),mul(first(call(e->slot(1,4),Args{divv(sub(e->slot(0,0),get(get(e->slot(1,1),lit1),lit21)),V(180.0)),V(0.0),V(1.0)})),mul(get(get(e->slot(1,1),lit1),lit63),V(0.5)))));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t237=first(call(e->slot(1,4),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit27),get(get(e->slot(1,1),lit1),lit28)}));refs[0].put(std::move(t237));}
return Args{e->slot(0,2),e->slot(0,1)};
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t238=first(call(e->slot(1,4),Args{divv(first(call(e->slot(1,3),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit14)})),first(call(get(e->get("math"),lit205),Args{get(get(e->slot(1,1),lit1),lit14),V(1.0)}))),V(0.0),V(2.0)}));e->slot(0,1)=std::move(t238);}
{V t239=add(V(1.0),mul(sub(e->slot(0,1),V(1.0)),get(get(e->slot(1,1),lit1),lit16)));e->slot(0,2)=std::move(t239);}
return Args{first(call(e->slot(1,4),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit17),get(get(e->slot(1,1),lit1),lit18)})),e->slot(0,1)};
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t240=mul(sub(add(V(0.85),mul(e->slot(0,0),V(0.3))),V(1.0)),V(0.15));e->slot(0,2)=std::move(t240);}
{V t241=add(mul(first(call(e->slot(1,5),Args{([&](){V t242=get(e->slot(0,1),lit136);return !truth(t242)?V(0.0):t242;})()})),get(get(e->slot(1,1),lit1),lit46)),mul(first(call(e->slot(1,5),Args{([&](){V t243=get(e->slot(0,1),lit137);return !truth(t243)?V(0.0):t243;})()})),get(get(e->slot(1,1),lit1),lit47)));e->slot(0,3)=std::move(t241);}
{V t244=add(add(add(mul(([&](){V t245=get(e->slot(0,1),lit130);return !truth(t245)?V(0.0):t245;})(),V(0.25)),mul(([&](){V t246=get(e->slot(0,1),lit144);return !truth(t246)?V(0.0):t246;})(),V(0.18))),mul(([&](){V t247=get(e->slot(0,1),lit145);return !truth(t247)?V(0.0):t247;})(),V(0.08))),mul(([&](){V t248=get(e->slot(0,1),lit151);return !truth(t248)?V(0.0):t248;})(),V(0.06)));e->slot(0,4)=std::move(t244);}
return call(e->slot(1,4),Args{add(add(e->slot(0,2),e->slot(0,3)),e->slot(0,4)),V(-num(V(0.5))),V(2.0)});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t249=add(V(1.0),mul(sub(get(e->slot(0,4),lit123),V(1.0)),get(get(e->slot(1,1),lit1),lit36)));e->slot(0,5)=std::move(t249);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t250=mul(mul(e->slot(0,5),sub(V(1.0),mul(sub(V(1.0),get(e->slot(0,4),lit124)),get(get(e->slot(1,1),lit1),lit37)))),sub(V(1.0),mul(sub(V(1.0),get(e->slot(0,4),lit125)),get(get(e->slot(1,1),lit1),lit38))));refs[0].put(std::move(t250));}
{V t251=sub(sub(sub(add(V(1.0),mul(sub(get(e->slot(0,4),lit129),V(1.0)),get(get(e->slot(1,1),lit1),lit41))),mul(get(e->slot(0,4),lit128),get(get(e->slot(1,1),lit1),lit39))),mul(get(e->slot(0,4),lit130),get(get(e->slot(1,1),lit1),lit51))),mul(get(e->slot(0,4),lit131),V(0.04)));e->slot(0,6)=std::move(t251);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t252=first(call(e->slot(1,4),Args{e->slot(0,6),V(0.7),V(1.12)}));refs[0].put(std::move(t252));}
{V t253=add(mul(first(call(e->slot(1,5),Args{([&](){V t254=get(e->slot(0,4),lit138);return !truth(t254)?V(0.0):t254;})()})),get(get(e->slot(1,1),lit1),lit48)),mul(first(call(e->slot(1,5),Args{([&](){V t255=get(e->slot(0,4),lit139);return !truth(t255)?V(0.0):t255;})()})),get(get(e->slot(1,1),lit1),lit49)));e->slot(0,7)=std::move(t253);}
{std::array<Ref,1> refs{Ref(e->slot(0,4),lit140)};V t256=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0),V(0.2)}));refs[0].put(std::move(t256));}
{V t257=sub(add(add(V(1.0),mul(sub(get(e->slot(0,4),lit141),V(1.0)),get(get(e->slot(1,1),lit1),lit53))),mul(sub(get(e->slot(0,4),lit142),V(1.0)),get(get(e->slot(1,1),lit1),lit54))),mul(get(e->slot(0,4),lit144),get(get(e->slot(1,1),lit1),lit56)));e->slot(0,8)=std::move(t257);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t258=first(call(e->slot(1,4),Args{e->slot(0,8),V(0.65),V(1.12)}));refs[0].put(std::move(t258));}
{V t259=sub(sub(add(V(1.0),mul(sub(get(e->slot(0,4),lit147),V(1.0)),get(get(e->slot(1,1),lit1),lit58))),mul(get(e->slot(0,4),lit149),V(0.05))),mul(get(e->slot(0,4),lit151),V(0.04)));e->slot(0,9)=std::move(t259);}
{std::array<Ref,1> refs{Ref(e,0,9)};V t260=first(call(e->slot(1,4),Args{e->slot(0,9),V(0.72),V(1.1)}));refs[0].put(std::move(t260));}
{V t261=sub(sub(sub(V(1.0),mul(get(e->slot(0,4),lit154),get(get(e->slot(1,1),lit1),lit61))),mul(get(e->slot(0,4),lit156),get(get(e->slot(1,1),lit1),lit62))),mul(get(e->slot(0,4),lit158),get(get(e->slot(1,1),lit1),lit63)));e->slot(0,10)=std::move(t261);}
{std::array<Ref,1> refs{Ref(e,0,10)};V t262=first(call(e->slot(1,4),Args{e->slot(0,10),V(0.72),V(1.05)}));refs[0].put(std::move(t262));}
{V t263=mul(mul(mul(mul(mul(mul(mul(mul(mul(mul(mul(mul(e->slot(0,1),get(e->slot(0,4),lit118)),e->slot(0,2)),e->slot(0,5)),get(e->slot(0,4),lit127)),e->slot(0,6)),e->slot(0,8)),e->slot(0,9)),e->slot(0,10)),sub(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit1),lit33)))),sub(V(1.0),mul(get(e->slot(0,4),lit119),get(get(e->slot(1,1),lit1),lit35)))),sub(V(1.0),get(e->slot(0,4),lit140))),sub(V(1.0),mul(([&](){V t264=get(e->slot(0,4),lit112);return !truth(t264)?V(0.0):t264;})(),get(get(e->slot(1,1),lit1),lit13))));e->slot(0,11)=std::move(t263);}
return Args{e->slot(0,11)};
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(lt(e->slot(0,0),V(2.0)))){return Args{e->slot(0,1)};
}
{V t265=add(add(add(mul(first(call(e->slot(1,5),Args{([&](){V t266=get(e->slot(0,2),lit133);return !truth(t266)?V(0.0):t266;})()})),get(get(e->slot(1,1),lit1),lit43)),mul(get(e->slot(0,2),lit134),get(get(e->slot(1,1),lit1),lit44))),mul(first(call(e->slot(1,4),Args{divv(get(e->slot(0,2),lit135),V(8.0)),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit1),lit45))),mul(first(call(e->slot(1,5),Args{([&](){V t267=get(e->slot(0,2),lit139);return !truth(t267)?V(0.0):t267;})()})),get(get(e->slot(1,1),lit1),lit50)));e->slot(0,3)=std::move(t265);}
return Args{add(e->slot(0,1),e->slot(0,3))};
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t268=add(add(add(add(add(add(add(add(mul(get(e->slot(0,1),lit128),get(get(e->slot(1,1),lit1),lit40)),mul(sub(get(e->slot(0,1),lit129),V(1.0)),get(get(e->slot(1,1),lit1),lit42))),mul(get(e->slot(0,1),lit130),get(get(e->slot(1,1),lit1),lit52))),mul(get(e->slot(0,1),lit143),get(get(e->slot(1,1),lit1),lit55))),mul(get(e->slot(0,1),lit145),get(get(e->slot(1,1),lit1),lit57))),mul(get(e->slot(0,1),lit149),get(get(e->slot(1,1),lit1),lit59))),mul(get(e->slot(0,1),lit153),get(get(e->slot(1,1),lit1),lit60))),mul(get(e->slot(0,1),lit155),V(0.05))),mul(get(e->slot(0,1),lit158),get(get(e->slot(1,1),lit1),lit64)));e->slot(0,2)=std::move(t268);}
return Args{add(e->slot(0,0),e->slot(0,2))};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t269=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,2)=std::move(t269);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit104)};V t270=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit104),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit105)};V t271=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit105),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit106)};V t272=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit106),V(0.0),mul(get(get(e->slot(1,1),lit1),lit70),V(4.0)),e->slot(0,1)}));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit107)};V t273=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit107),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit108)};V t274=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit108),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit109)};V t275=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit109),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit110)};V t276=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit110),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit111)};V t277=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit111),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit112)};V t278=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit112),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit113)};V t279=V(0.0);refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit114)};V t280=V(0.0);refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit115)};V t281=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit115),get(get(e->slot(1,1),lit1),lit15),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t281));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit116)};V t282=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit116),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit117)};V t283=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit117),V(0.5),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit118)};V t284=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit118),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit119)};V t285=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit119),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit120)};V t286=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit120),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t286));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit121)};V t287=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit121),get(get(e->slot(1,1),lit1),lit19),mul(get(get(e->slot(1,1),lit1),lit70),V(8.0)),e->slot(0,1)}));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit122)};V t288=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit122),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit123)};V t289=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit123),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit124)};V t290=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit124),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t290));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit125)};V t291=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit125),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t291));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit126)};V t292=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit126),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit127)};V t293=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit127),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit128)};V t294=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit128),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit129)};V t295=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit129),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit130)};V t296=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit130),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t296));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit131)};V t297=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit131),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit133)};V t298=V(0.0);refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit134)};V t299=V(0.0);refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit135)};V t300=V(0.0);refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit136)};V t301=V(0.0);refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit137)};V t302=V(0.0);refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit138)};V t303=V(0.0);refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit139)};V t304=V(0.0);refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit140)};V t305=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit140),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit141)};V t306=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit141),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit142)};V t307=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit142),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit143)};V t308=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit143),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t308));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit144)};V t309=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit144),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit147)};V t310=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit147),V(1.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit149)};V t311=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit149),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t311));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit153)};V t312=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit153),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t312));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit154)};V t313=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit154),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit156)};V t314=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit156),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit158)};V t315=first(call(e->slot(1,6),Args{get(e->slot(0,2),lit158),V(0.0),get(get(e->slot(1,1),lit1),lit70),e->slot(0,1)}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit159)};V t316=get(e->slot(0,2),lit104);refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit160)};V t317=V(false);refs[0].put(std::move(t317));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,26);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t318=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,3)=std::move(t318);}
{V t319=V(false);e->slot(0,4)=std::move(t319);}
call(e->slot(1,20),Args{e->slot(0,0),e->slot(0,3)});
call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,3)});
call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,3)});
call(e->slot(1,23),Args{e->slot(0,0),e->slot(0,3)});
call(e->slot(1,24),Args{e->slot(0,0),e->slot(0,3)});
call(e->slot(1,25),Args{e->slot(0,0),e->slot(0,3)});
{Args t320=call(e->slot(1,16),Args{e->slot(0,0),e->slot(0,1)});e->slot(0,5)=arg(t320,0);e->slot(0,6)=arg(t320,1);e->slot(0,7)=arg(t320,2);e->slot(0,8)=arg(t320,3);e->slot(0,9)=arg(t320,4);e->slot(0,10)=arg(t320,5);e->slot(0,11)=arg(t320,6);}
{V t321=first(call(e->slot(1,18),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,12)=std::move(t321);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t322=([&](){V t323=([&](){V t324=([&](){V t325=([&](){V t326=([&](){V t327=ne(e->slot(0,1),V());return !truth(t327)?e->slot(0,11):t327;})();return !truth(t326)?get(get(e->slot(1,1),lit76),lit93):t326;})();return !truth(t325)?get(get(e->slot(1,1),lit76),lit101):t325;})();return !truth(t324)?get(get(e->slot(1,1),lit76),lit96):t324;})();return !truth(t323)?get(get(e->slot(1,1),lit76),lit97):t323;})();refs[0].put(std::move(t322));}
if(truth(V(!truth(e->slot(0,4))))){call(e->slot(1,36),Args{e->slot(0,0),e->slot(0,2)});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit160)};V t328=([&](){V t329=ne(e->slot(0,1),V());return !truth(t329)?get(get(e->slot(1,1),lit76),lit82):t329;})();refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit108)};V t330=e->slot(0,5);refs[0].put(std::move(t330));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit109)};V t331=e->slot(0,6);refs[0].put(std::move(t331));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit113)};V t332=e->slot(0,7);refs[0].put(std::move(t332));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit114)};V t333=e->slot(0,8);refs[0].put(std::move(t333));}
{Args t334=call(e->slot(1,27),Args{e->slot(0,7),e->slot(0,8),e->slot(0,9)});e->slot(0,13)=arg(t334,0);e->slot(0,14)=arg(t334,1);e->slot(0,15)=arg(t334,2);e->slot(0,16)=arg(t334,3);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit110)};V t335=e->slot(0,16);refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit111)};V t336=e->slot(0,14);refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit112)};V t337=first(call(e->slot(1,28),Args{get(e->slot(0,3),lit112),e->slot(0,14),e->slot(0,10),e->slot(0,3),e->slot(0,2)}));refs[0].put(std::move(t337));}
{V t338=first(call(e->slot(1,19),Args{e->slot(0,0)}));e->slot(0,17)=std::move(t338);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit117)};V t339=e->slot(0,17);refs[0].put(std::move(t339));}
{Args t340=call(e->slot(1,31),Args{e->slot(0,12)});e->slot(0,18)=arg(t340,0);e->slot(0,19)=arg(t340,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit115)};V t341=e->slot(0,12);refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit116)};V t342=e->slot(0,19);refs[0].put(std::move(t342));}
{V t343=add(V(1.0),mul(sub(e->slot(0,17),V(0.5)),V(0.2)));e->slot(0,20)=std::move(t343);}
{std::array<Ref,1> refs{Ref(e,0,13)};V t344=mul(mul(e->slot(0,13),first(call(e->slot(1,4),Args{e->slot(0,20),V(0.84),V(1.16)}))),e->slot(0,18));refs[0].put(std::move(t344));}
{V t345=first(call(e->slot(1,29),Args{e->slot(0,0),get(e->slot(0,3),lit106),e->slot(0,15),e->slot(0,3),e->slot(0,2)}));e->slot(0,21)=std::move(t345);}
{V t346=first(call(e->slot(1,17),Args{e->slot(0,0)}));e->slot(0,22)=std::move(t346);}
{Args t347=call(e->slot(1,30),Args{e->slot(0,22)});e->slot(0,23)=arg(t347,0);e->slot(0,24)=arg(t347,1);}
{V t348=first(call(e->slot(1,33),Args{e->slot(0,0),e->slot(0,13),e->slot(0,23),e->slot(0,21),e->slot(0,3)}));e->slot(0,25)=std::move(t348);}
{std::array<Ref,1> refs{Ref(e,0,15)};V t349=mul(add(e->slot(0,15),mul(e->slot(0,21),get(get(e->slot(1,1),lit1),lit34))),first(call(e->slot(1,4),Args{add(V(0.85),mul(e->slot(0,24),V(0.3))),V(0.75),V(1.15)})));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e,0,15)};V t350=first(call(e->slot(1,34),Args{e->slot(0,0),e->slot(0,15),e->slot(0,3)}));refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(e,0,15)};V t351=first(call(e->slot(1,35),Args{e->slot(0,15),e->slot(0,3)}));refs[0].put(std::move(t351));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit159)};V t352=e->slot(0,25);refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit104)};V t353=first(call(e->slot(1,4),Args{e->slot(0,25),get(get(e->slot(1,1),lit1),lit67),get(get(e->slot(1,1),lit1),lit65)}));refs[0].put(std::move(t353));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t354=first(call(e->slot(1,4),Args{e->slot(0,15),V(0.0),get(get(e->slot(1,1),lit1),lit66)}));refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit106)};V t355=e->slot(0,21);refs[0].put(std::move(t355));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit107)};V t356=e->slot(0,23);refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit120)};V t357=first(call(e->slot(1,32),Args{e->slot(0,24),e->slot(0,3)}));refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit121)};V t358=e->slot(0,22);refs[0].put(std::move(t358));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit122)};V t359=e->slot(0,24);refs[0].put(std::move(t359));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,10),Args{concat(lit317,e->slot(0,0)),([&](){V t360=get(e->slot(0,1),lit104);return !truth(t360)?V(1.0):t360;})()});
call(e->slot(1,10),Args{concat(lit318,e->slot(0,0)),([&](){V t361=get(e->slot(0,1),lit104);return !truth(t361)?V(1.0):t361;})()});
call(e->slot(1,10),Args{concat(lit319,e->slot(0,0)),([&](){V t362=get(e->slot(0,1),lit105);return !truth(t362)?V(0.0):t362;})()});
call(e->slot(1,10),Args{concat(lit320,e->slot(0,0)),([&](){V t363=get(e->slot(0,1),lit105);return !truth(t363)?V(0.0):t363;})()});
call(e->slot(1,10),Args{concat(lit321,e->slot(0,0)),([&](){V t364=get(e->slot(0,1),lit120);return !truth(t364)?V(0.0):t364;})()});
call(e->slot(1,10),Args{concat(lit322,e->slot(0,0)),([&](){V t365=get(e->slot(0,1),lit110);return !truth(t365)?V(0.0):t365;})()});
call(e->slot(1,10),Args{concat(lit183,e->slot(0,0)),([&](){V t366=get(e->slot(0,1),lit111);return !truth(t366)?V(0.0):t366;})()});
call(e->slot(1,10),Args{concat(lit184,e->slot(0,0)),([&](){V t367=get(e->slot(0,1),lit111);return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,10),Args{concat(lit323,e->slot(0,0)),([&](){V t368=get(e->slot(0,1),lit112);return !truth(t368)?V(0.0):t368;})()});
call(e->slot(1,10),Args{concat(lit324,e->slot(0,0)),([&](){V t369=get(e->slot(0,1),lit112);return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,10),Args{concat(lit325,e->slot(0,0)),([&](){V t370=get(e->slot(0,1),lit104);return !truth(t370)?V(1.0):t370;})()});
call(e->slot(1,10),Args{concat(lit326,e->slot(0,0)),([&](){V t371=get(e->slot(0,1),lit105);return !truth(t371)?V(0.0):t371;})()});
call(e->slot(1,10),Args{concat(lit327,e->slot(0,0)),([&](){V t372=get(e->slot(0,1),lit111);return !truth(t372)?V(0.0):t372;})()});
call(e->slot(1,10),Args{concat(lit328,e->slot(0,0)),([&](){V t373=get(e->slot(0,1),lit112);return !truth(t373)?V(0.0):t373;})()});
call(e->slot(1,10),Args{concat(lit329,e->slot(0,0)),([&](){V t374=get(e->slot(0,1),lit120);return !truth(t374)?V(0.0):t374;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit76),lit103))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit330,e->slot(0,0)),([&](){V t375=get(e->slot(0,1),lit107);return !truth(t375)?V(1.0):t375;})()});
call(e->slot(1,10),Args{concat(lit331,e->slot(0,0)),([&](){V t376=get(e->slot(0,1),lit107);return !truth(t376)?V(1.0):t376;})()});
call(e->slot(1,10),Args{concat(lit332,e->slot(0,0)),([&](){V t377=get(e->slot(0,1),lit108);return !truth(t377)?V(0.0):t377;})()});
call(e->slot(1,10),Args{concat(lit333,e->slot(0,0)),([&](){V t378=get(e->slot(0,1),lit109);return !truth(t378)?V(0.0):t378;})()});
call(e->slot(1,10),Args{concat(lit170,e->slot(0,0)),([&](){V t379=get(e->slot(0,1),lit113);return !truth(t379)?V(0.0):t379;})()});
call(e->slot(1,10),Args{concat(lit176,e->slot(0,0)),([&](){V t380=get(e->slot(0,1),lit114);return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,10),Args{concat(lit169,e->slot(0,0)),([&](){V t381=get(e->slot(0,1),lit113);return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,10),Args{concat(lit175,e->slot(0,0)),([&](){V t382=get(e->slot(0,1),lit114);return !truth(t382)?V(0.0):t382;})()});
call(e->slot(1,10),Args{concat(lit195,e->slot(0,0)),([&](){V t383=get(e->slot(0,1),lit115);return !truth(t383)?get(get(e->slot(1,1),lit1),lit15):t383;})()});
call(e->slot(1,10),Args{concat(lit334,e->slot(0,0)),([&](){V t384=get(e->slot(0,1),lit116);return !truth(t384)?V(1.0):t384;})()});
call(e->slot(1,10),Args{concat(lit335,e->slot(0,0)),([&](){V t385=get(e->slot(0,1),lit106);return !truth(t385)?V(0.0):t385;})()});
call(e->slot(1,10),Args{concat(lit336,e->slot(0,0)),([&](){V t386=get(e->slot(0,1),lit119);return !truth(t386)?V(0.0):t386;})()});
call(e->slot(1,10),Args{concat(lit337,e->slot(0,0)),([&](){V t387=get(e->slot(0,1),lit123);return !truth(t387)?V(1.0):t387;})()});
call(e->slot(1,10),Args{concat(lit338,e->slot(0,0)),([&](){V t388=get(e->slot(0,1),lit124);return !truth(t388)?V(1.0):t388;})()});
call(e->slot(1,10),Args{concat(lit339,e->slot(0,0)),([&](){V t389=get(e->slot(0,1),lit125);return !truth(t389)?V(1.0):t389;})()});
call(e->slot(1,10),Args{concat(lit340,e->slot(0,0)),([&](){V t390=get(e->slot(0,1),lit126);return !truth(t390)?V(1.0):t390;})()});
call(e->slot(1,10),Args{concat(lit341,e->slot(0,0)),([&](){V t391=get(e->slot(0,1),lit127);return !truth(t391)?V(1.0):t391;})()});
call(e->slot(1,10),Args{concat(lit342,e->slot(0,0)),([&](){V t392=get(e->slot(0,1),lit128);return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,10),Args{concat(lit343,e->slot(0,0)),([&](){V t393=get(e->slot(0,1),lit129);return !truth(t393)?V(1.0):t393;})()});
call(e->slot(1,10),Args{concat(lit344,e->slot(0,0)),([&](){V t394=get(e->slot(0,1),lit130);return !truth(t394)?V(0.0):t394;})()});
call(e->slot(1,10),Args{concat(lit345,e->slot(0,0)),([&](){V t395=get(e->slot(0,1),lit133);return !truth(t395)?V(0.0):t395;})()});
call(e->slot(1,10),Args{concat(lit346,e->slot(0,0)),([&](){V t396=get(e->slot(0,1),lit134);return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,10),Args{concat(lit347,e->slot(0,0)),([&](){V t397=get(e->slot(0,1),lit135);return !truth(t397)?V(0.0):t397;})()});
call(e->slot(1,10),Args{concat(lit348,e->slot(0,0)),([&](){V t398=get(e->slot(0,1),lit138);return !truth(t398)?V(0.0):t398;})()});
call(e->slot(1,10),Args{concat(lit349,e->slot(0,0)),([&](){V t399=get(e->slot(0,1),lit139);return !truth(t399)?V(0.0):t399;})()});
call(e->slot(1,10),Args{concat(lit350,e->slot(0,0)),([&](){V t400=get(e->slot(0,1),lit140);return !truth(t400)?V(0.0):t400;})()});
call(e->slot(1,10),Args{concat(lit351,e->slot(0,0)),([&](){V t401=get(e->slot(0,1),lit141);return !truth(t401)?V(1.0):t401;})()});
call(e->slot(1,10),Args{concat(lit352,e->slot(0,0)),([&](){V t402=get(e->slot(0,1),lit142);return !truth(t402)?V(1.0):t402;})()});
call(e->slot(1,10),Args{concat(lit353,e->slot(0,0)),([&](){V t403=get(e->slot(0,1),lit149);return !truth(t403)?V(0.0):t403;})()});
call(e->slot(1,10),Args{concat(lit354,e->slot(0,0)),([&](){V t404=get(e->slot(0,1),lit153);return !truth(t404)?V(0.0):t404;})()});
call(e->slot(1,10),Args{concat(lit355,e->slot(0,0)),([&](){V t405=get(e->slot(0,1),lit156);return !truth(t405)?V(0.0):t405;})()});
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit356,([&](){V t406=get(get(e->slot(1,1),lit76),lit78);return !truth(t406)?lit357:t406;})()});
call(e->slot(1,10),Args{lit358,([&](){V t407=get(get(e->slot(1,1),lit76),lit80);return !truth(t407)?V(0.0):t407;})()});
call(e->slot(1,10),Args{lit359,([&](){V t408=([&](){V t409=get(get(e->slot(1,1),lit76),lit81);return truth(t409)?V(1.0):t409;})();return !truth(t408)?V(0.0):t408;})()});
call(e->slot(1,10),Args{lit360,([&](){V t410=([&](){V t411=get(get(e->slot(1,1),lit76),lit82);return truth(t411)?V(1.0):t411;})();return !truth(t410)?V(0.0):t410;})()});
call(e->slot(1,10),Args{lit361,([&](){V t412=get(get(e->slot(1,1),lit76),lit83);return !truth(t412)?V(1.0):t412;})()});
call(e->slot(1,10),Args{lit362,([&](){V t413=get(get(e->slot(1,1),lit76),lit84);return !truth(t413)?V(0.0):t413;})()});
call(e->slot(1,10),Args{lit363,([&](){V t414=get(get(e->slot(1,1),lit76),lit83);return !truth(t414)?V(1.0):t414;})()});
call(e->slot(1,10),Args{lit364,([&](){V t415=get(get(e->slot(1,1),lit76),lit84);return !truth(t415)?V(0.0):t415;})()});
call(e->slot(1,10),Args{lit365,([&](){V t416=get(get(e->slot(1,1),lit76),lit87);return !truth(t416)?V(0.0):t416;})()});
call(e->slot(1,10),Args{lit366,([&](){V t417=get(get(e->slot(1,1),lit76),lit88);return !truth(t417)?V(0.0):t417;})()});
call(e->slot(1,10),Args{lit367,([&](){V t418=get(get(e->slot(1,1),lit76),lit89);return !truth(t418)?V(1.0):t418;})()});
call(e->slot(1,10),Args{lit368,([&](){V t419=get(get(e->slot(1,1),lit76),lit90);return !truth(t419)?V(0.0):t419;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit76),lit103))))){return Args{};
}
call(e->slot(1,10),Args{lit369,([&](){V t420=get(get(e->slot(1,1),lit76),lit85);return !truth(t420)?V(0.0):t420;})()});
call(e->slot(1,10),Args{lit370,([&](){V t421=get(get(e->slot(1,1),lit76),lit86);return !truth(t421)?V(0.0):t421;})()});
call(e->slot(1,10),Args{lit371,([&](){V t422=get(get(e->slot(1,1),lit76),lit87);return !truth(t422)?V(0.0):t422;})()});
call(e->slot(1,10),Args{lit372,([&](){V t423=get(get(e->slot(1,1),lit76),lit88);return !truth(t423)?V(0.0):t423;})()});
call(e->slot(1,10),Args{lit373,([&](){V t424=([&](){V t425=get(get(e->slot(1,1),lit76),lit91);return truth(t425)?V(1.0):t425;})();return !truth(t424)?V(0.0):t424;})()});
call(e->slot(1,10),Args{lit374,([&](){V t426=([&](){V t427=get(get(e->slot(1,1),lit76),lit92);return truth(t427)?V(1.0):t427;})();return !truth(t426)?V(0.0):t426;})()});
call(e->slot(1,10),Args{lit375,([&](){V t428=([&](){V t429=get(get(e->slot(1,1),lit76),lit93);return truth(t429)?V(1.0):t429;})();return !truth(t428)?V(0.0):t428;})()});
call(e->slot(1,10),Args{lit376,([&](){V t430=([&](){V t431=get(get(e->slot(1,1),lit76),lit94);return truth(t431)?V(1.0):t431;})();return !truth(t430)?V(0.0):t430;})()});
call(e->slot(1,10),Args{lit377,([&](){V t432=([&](){V t433=get(get(e->slot(1,1),lit76),lit95);return truth(t433)?V(1.0):t433;})();return !truth(t432)?V(0.0):t432;})()});
call(e->slot(1,10),Args{lit378,([&](){V t434=([&](){V t435=get(get(e->slot(1,1),lit76),lit96);return truth(t435)?V(1.0):t435;})();return !truth(t434)?V(0.0):t434;})()});
call(e->slot(1,10),Args{lit379,([&](){V t436=([&](){V t437=get(get(e->slot(1,1),lit76),lit97);return truth(t437)?V(1.0):t437;})();return !truth(t436)?V(0.0):t436;})()});
call(e->slot(1,10),Args{lit380,([&](){V t438=([&](){V t439=get(get(e->slot(1,1),lit76),lit98);return truth(t439)?V(1.0):t439;})();return !truth(t438)?V(0.0):t438;})()});
call(e->slot(1,10),Args{lit381,([&](){V t440=([&](){V t441=get(get(e->slot(1,1),lit76),lit99);return truth(t441)?V(1.0):t441;})();return !truth(t440)?V(0.0):t440;})()});
call(e->slot(1,10),Args{lit382,([&](){V t442=([&](){V t443=get(get(e->slot(1,1),lit76),lit100);return truth(t443)?V(1.0):t443;})();return !truth(t442)?V(0.0):t442;})()});
call(e->slot(1,10),Args{lit383,([&](){V t444=([&](){V t445=get(get(e->slot(1,1),lit76),lit101);return truth(t445)?V(1.0):t445;})();return !truth(t444)?V(0.0):t444;})()});
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t446=num(V(0.0)),t447=num(V(3.0)),t448=num(V(1.0));for(double t449=t446;(t448>0?t449<=t447:t449>=t447);t449+=t448){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t449);call(e->slot(2,38),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit76),lit77),e->slot(0,0))});
}}
call(e->slot(1,39),Args{});
return Args{};});
Ref(e->slot(0,1),lit384).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit78)};V t450=lit79;refs[0].put(std::move(t450));}
call(e->slot(1,40),Args{});
return Args{};}));
Ref(e->slot(0,1),lit385).put(native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit80)};V t451=add(([&](){V t452=get(get(e->slot(1,1),lit76),lit80);return !truth(t452)?V(0.0):t452;})(),V(1.0));refs[0].put(std::move(t451));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t453=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t453));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit78)};V t454=lit386;refs[0].put(std::move(t454));}
call(e->slot(1,40),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t455=first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit68),get(get(e->slot(1,1),lit1),lit69)}));refs[0].put(std::move(t455));}
call(e->slot(1,15),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t456=([&](){V t457=e->slot(0,1);return !truth(t457)?first(call(e->slot(1,12),Args{})):t457;})();refs[0].put(std::move(t456));}
{V t458=first(call(e->slot(1,13),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t458);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit81)};V t459=ne(e->slot(0,3),V());refs[0].put(std::move(t459));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit82)};V t460=eq(e->slot(0,3),V());refs[0].put(std::move(t460));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit78)};V t461=lit387;refs[0].put(std::move(t461));}
}else if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit78)};V t462=lit388;refs[0].put(std::move(t462));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit78)};V t463=lit389;refs[0].put(std::move(t463));}
}

{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit91)};V t464=V(false);refs[0].put(std::move(t464));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit92)};V t465=V(false);refs[0].put(std::move(t465));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit93)};V t466=V(false);refs[0].put(std::move(t466));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit94)};V t467=V(false);refs[0].put(std::move(t467));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit95)};V t468=V(false);refs[0].put(std::move(t468));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit96)};V t469=V(false);refs[0].put(std::move(t469));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit97)};V t470=V(false);refs[0].put(std::move(t470));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit98)};V t471=V(false);refs[0].put(std::move(t471));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit99)};V t472=V(false);refs[0].put(std::move(t472));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit100)};V t473=V(false);refs[0].put(std::move(t473));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit101)};V t474=V(false);refs[0].put(std::move(t474));}
{V t475=V(0.0);e->slot(0,4)=std::move(t475);}
{V t476=V(0.0);e->slot(0,5)=std::move(t476);}
{V t477=V(0.0);e->slot(0,6)=std::move(t477);}
{V t478=V(0.0);e->slot(0,7)=std::move(t478);}
{V t479=V(0.0);e->slot(0,8)=std::move(t479);}
{V t480=V(0.0);e->slot(0,9)=std::move(t480);}
{V t481=V(999.0);e->slot(0,10)=std::move(t481);}
{V t482=V(0.0);e->slot(0,11)=std::move(t482);}
{double t483=num(V(0.0)),t484=num(V(3.0)),t485=num(V(1.0));for(double t486=t483;(t485>0?t486<=t484:t486>=t484);t486+=t485){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t486);{V t487=first(call(e->slot(2,14),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t487);}
call(e->slot(2,37),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0)});
{V t488=get(get(get(e->slot(2,1),lit76),lit77),e->slot(0,0));e->slot(0,2)=std::move(t488);}
{std::array<Ref,1> refs{Ref(e,1,4)};V t489=add(e->slot(1,4),([&](){V t490=get(e->slot(0,2),lit104);return !truth(t490)?V(1.0):t490;})());refs[0].put(std::move(t489));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t491=add(e->slot(1,5),([&](){V t492=get(e->slot(0,2),lit105);return !truth(t492)?V(0.0):t492;})());refs[0].put(std::move(t491));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t493=add(e->slot(1,6),([&](){V t494=get(e->slot(0,2),lit106);return !truth(t494)?V(0.0):t494;})());refs[0].put(std::move(t493));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t495=add(e->slot(1,7),([&](){V t496=get(e->slot(0,2),lit130);return !truth(t496)?V(0.0):t496;})());refs[0].put(std::move(t495));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t497=add(e->slot(1,8),([&](){V t498=get(e->slot(0,2),lit111);return !truth(t498)?V(0.0):t498;})());refs[0].put(std::move(t497));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t499=add(e->slot(1,9),([&](){V t500=get(e->slot(0,2),lit112);return !truth(t500)?V(0.0):t500;})());refs[0].put(std::move(t499));}
if(truth(lt(([&](){V t501=get(e->slot(0,2),lit104);return !truth(t501)?V(1.0):t501;})(),e->slot(1,10)))){{std::array<Ref,1> refs{Ref(e,1,10)};V t502=([&](){V t503=get(e->slot(0,2),lit104);return !truth(t503)?V(1.0):t503;})();refs[0].put(std::move(t502));}
}
if(truth(gt(([&](){V t504=get(e->slot(0,2),lit105);return !truth(t504)?V(0.0):t504;})(),e->slot(1,11)))){{std::array<Ref,1> refs{Ref(e,1,11)};V t505=([&](){V t506=get(e->slot(0,2),lit105);return !truth(t506)?V(0.0):t506;})();refs[0].put(std::move(t505));}
}
call(e->slot(2,38),Args{e->slot(0,0),e->slot(0,2)});
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit83)};V t507=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t507));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit84)};V t508=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t508));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit85)};V t509=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t509));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit86)};V t510=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t510));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit87)};V t511=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t511));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit88)};V t512=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t512));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit89)};V t513=([&](){V t514=([&](){V t515=eq(e->slot(0,10),V(999.0));return truth(t515)?V(1.0):t515;})();return !truth(t514)?e->slot(0,10):t514;})();refs[0].put(std::move(t513));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit76),lit90)};V t516=e->slot(0,11);refs[0].put(std::move(t516));}
call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit390).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(get(e->slot(1,1),lit76),lit77)};
}
return Args{get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit391).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t517=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,1)=std::move(t517);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(1.0)};
}
return Args{([&](){V t518=get(e->slot(0,1),lit104);return !truth(t518)?V(1.0):t518;})()};
return Args{};}));
Ref(e->slot(0,1),lit392).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t519=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,1)=std::move(t519);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t520=get(e->slot(0,1),lit105);return !truth(t520)?V(0.0):t520;})()};
return Args{};}));
Ref(e->slot(0,1),lit393).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t521=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,1)=std::move(t521);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t522=get(e->slot(0,1),lit106);return !truth(t522)?V(0.0):t522;})()};
return Args{};}));
Ref(e->slot(0,1),lit394).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t523=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,1)=std::move(t523);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t524=get(e->slot(0,1),lit111);return !truth(t524)?V(0.0):t524;})()};
return Args{};}));
Ref(e->slot(0,1),lit395).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t525=get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0));e->slot(0,1)=std::move(t525);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t526=get(e->slot(0,1),lit112);return !truth(t526)?V(0.0):t526;})()};
return Args{};}));
Ref(e->slot(0,1),lit396).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit76)};
}
return Args{get(get(get(e->slot(1,1),lit76),lit77),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit397).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t527=([&](){V t528=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t528)?V(0.0):t528;})();e->slot(0,0)=std::move(t527);}
{V t529=([&](){V t530=get(get(get(e->slot(2,1),lit76),lit77),e->slot(0,0));return !truth(t530)?get(get(get(e->slot(2,1),lit76),lit77),V(0.0)):t530;})();e->slot(0,1)=std::move(t529);}
return call(get(e->get("string"),lit398),Args{concat(lit399,concat(lit400,concat(lit401,concat(lit402,concat(lit403,lit404))))),first(call(e->get("tostring"),Args{get(get(e->slot(2,1),lit76),lit78)})),([&](){V t531=get(get(e->slot(2,1),lit76),lit80);return !truth(t531)?V(0.0):t531;})(),e->slot(0,0),([&](){V t532=get(e->slot(0,1),lit104);return !truth(t532)?V(1.0):t532;})(),([&](){V t533=get(e->slot(0,1),lit105);return !truth(t533)?V(0.0):t533;})(),([&](){V t534=get(e->slot(0,1),lit106);return !truth(t534)?V(0.0):t534;})(),([&](){V t535=get(e->slot(0,1),lit107);return !truth(t535)?V(1.0):t535;})(),([&](){V t536=get(e->slot(0,1),lit108);return !truth(t536)?V(0.0):t536;})(),([&](){V t537=get(e->slot(0,1),lit109);return !truth(t537)?V(0.0):t537;})(),([&](){V t538=get(e->slot(0,1),lit111);return !truth(t538)?V(0.0):t538;})(),([&](){V t539=get(e->slot(0,1),lit112);return !truth(t539)?V(0.0):t539;})(),([&](){V t540=get(e->slot(0,1),lit115);return !truth(t540)?V(0.0):t540;})(),([&](){V t541=get(e->slot(0,1),lit116);return !truth(t541)?V(1.0):t541;})(),([&](){V t542=get(e->slot(0,1),lit117);return !truth(t542)?V(0.5):t542;})(),([&](){V t543=get(e->slot(0,1),lit126);return !truth(t543)?V(1.0):t543;})(),([&](){V t544=get(e->slot(0,1),lit127);return !truth(t544)?V(1.0):t544;})(),([&](){V t545=get(e->slot(0,1),lit128);return !truth(t545)?V(0.0):t545;})(),([&](){V t546=get(e->slot(0,1),lit129);return !truth(t546)?V(1.0):t546;})(),([&](){V t547=get(e->slot(0,1),lit134);return !truth(t547)?V(0.0):t547;})(),([&](){V t548=get(e->slot(0,1),lit133);return !truth(t548)?V(0.0):t548;})(),([&](){V t549=get(e->slot(0,1),lit138);return !truth(t549)?V(0.0):t549;})(),([&](){V t550=get(e->slot(0,1),lit139);return !truth(t550)?V(0.0):t550;})(),([&](){V t551=get(e->slot(0,1),lit119);return !truth(t551)?V(0.0):t551;})()});
}
return call(get(e->get("string"),lit398),Args{concat(lit405,concat(lit406,concat(lit407,concat(lit408,concat(lit409,lit410))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit76),lit78)})),([&](){V t552=get(get(e->slot(1,1),lit76),lit80);return !truth(t552)?V(0.0):t552;})(),([&](){V t553=([&](){V t554=get(get(e->slot(1,1),lit76),lit81);return truth(t554)?lit411:t554;})();return !truth(t553)?lit412:t553;})(),([&](){V t555=([&](){V t556=get(get(e->slot(1,1),lit76),lit82);return truth(t556)?lit413:t556;})();return !truth(t555)?lit414:t555;})(),([&](){V t557=get(get(get(get(e->slot(1,1),lit76),lit77),V(0.0)),lit104);return !truth(t557)?V(1.0):t557;})(),([&](){V t558=get(get(get(get(e->slot(1,1),lit76),lit77),V(1.0)),lit104);return !truth(t558)?V(1.0):t558;})(),([&](){V t559=get(get(get(get(e->slot(1,1),lit76),lit77),V(2.0)),lit104);return !truth(t559)?V(1.0):t559;})(),([&](){V t560=get(get(get(get(e->slot(1,1),lit76),lit77),V(3.0)),lit104);return !truth(t560)?V(1.0):t560;})(),([&](){V t561=get(get(e->slot(1,1),lit76),lit83);return !truth(t561)?V(1.0):t561;})(),([&](){V t562=get(get(e->slot(1,1),lit76),lit89);return !truth(t562)?V(1.0):t562;})(),([&](){V t563=get(get(get(get(e->slot(1,1),lit76),lit77),V(0.0)),lit105);return !truth(t563)?V(0.0):t563;})(),([&](){V t564=get(get(get(get(e->slot(1,1),lit76),lit77),V(1.0)),lit105);return !truth(t564)?V(0.0):t564;})(),([&](){V t565=get(get(get(get(e->slot(1,1),lit76),lit77),V(2.0)),lit105);return !truth(t565)?V(0.0):t565;})(),([&](){V t566=get(get(get(get(e->slot(1,1),lit76),lit77),V(3.0)),lit105);return !truth(t566)?V(0.0):t566;})(),([&](){V t567=get(get(e->slot(1,1),lit76),lit84);return !truth(t567)?V(0.0):t567;})(),([&](){V t568=get(get(e->slot(1,1),lit76),lit90);return !truth(t568)?V(0.0):t568;})(),([&](){V t569=get(get(get(get(e->slot(1,1),lit76),lit77),V(0.0)),lit111);return !truth(t569)?V(0.0):t569;})(),([&](){V t570=get(get(get(get(e->slot(1,1),lit76),lit77),V(1.0)),lit111);return !truth(t570)?V(0.0):t570;})(),([&](){V t571=get(get(get(get(e->slot(1,1),lit76),lit77),V(2.0)),lit111);return !truth(t571)?V(0.0):t571;})(),([&](){V t572=get(get(get(get(e->slot(1,1),lit76),lit77),V(3.0)),lit111);return !truth(t572)?V(0.0):t572;})(),([&](){V t573=get(get(e->slot(1,1),lit76),lit88);return !truth(t573)?V(0.0):t573;})(),([&](){V t574=get(get(get(get(e->slot(1,1),lit76),lit77),V(0.0)),lit106);return !truth(t574)?V(0.0):t574;})(),([&](){V t575=get(get(get(get(e->slot(1,1),lit76),lit77),V(1.0)),lit106);return !truth(t575)?V(0.0):t575;})(),([&](){V t576=get(get(get(get(e->slot(1,1),lit76),lit77),V(2.0)),lit106);return !truth(t576)?V(0.0):t576;})(),([&](){V t577=get(get(get(get(e->slot(1,1),lit76),lit77),V(3.0)),lit106);return !truth(t577)?V(0.0):t577;})(),([&](){V t578=([&](){V t579=get(get(e->slot(1,1),lit76),lit91);return truth(t579)?lit411:t579;})();return !truth(t578)?lit412:t578;})(),([&](){V t580=([&](){V t581=get(get(e->slot(1,1),lit76),lit92);return truth(t581)?lit411:t581;})();return !truth(t580)?lit412:t580;})(),([&](){V t582=([&](){V t583=get(get(e->slot(1,1),lit76),lit93);return truth(t583)?lit411:t583;})();return !truth(t582)?lit412:t582;})(),([&](){V t584=([&](){V t585=get(get(e->slot(1,1),lit76),lit94);return truth(t585)?lit411:t585;})();return !truth(t584)?lit412:t584;})(),([&](){V t586=([&](){V t587=get(get(e->slot(1,1),lit76),lit95);return truth(t587)?lit411:t587;})();return !truth(t586)?lit412:t586;})(),([&](){V t588=([&](){V t589=get(get(e->slot(1,1),lit76),lit96);return truth(t589)?lit411:t589;})();return !truth(t588)?lit412:t588;})(),([&](){V t590=([&](){V t591=get(get(e->slot(1,1),lit76),lit97);return truth(t591)?lit411:t591;})();return !truth(t590)?lit412:t590;})(),([&](){V t592=([&](){V t593=get(get(e->slot(1,1),lit76),lit98);return truth(t593)?lit411:t593;})();return !truth(t592)?lit412:t592;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
