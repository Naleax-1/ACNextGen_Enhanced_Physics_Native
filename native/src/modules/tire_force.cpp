// Generated native C++ from pinned tire_force.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("lateralScale");
static const V lit3("longitudinalScale");
static const V lit4("maxForce");
static const V lit5("loadReference");
static const V lit6("defaultLoad");
static const V lit7("minLoad");
static const V lit8("minLoadScale");
static const V lit9("maxLoadScale");
static const V lit10("loadBlend");
static const V lit11("contactGripInfluence");
static const V lit12("dynamicsGripInfluence");
static const V lit13("contactLatInfluence");
static const V lit14("contactLongInfluence");
static const V lit15("complianceDelayGain");
static const V lit16("casterGripInfluence");
static const V lit17("tireLimitForceLoss");
static const V lit18("tireLagForceDelay");
static const V lit19("lsdRearLongGain");
static const V lit20("driveTorqueLongGain");
static const V lit21("shaftTwistLongGain");
static const V lit22("armToeLatLossGain");
static const V lit23("armCamberLatLossGain");
static const V lit24("contactQualityForceGain");
static const V lit25("contactLossForceDrop");
static const V lit26("hopForceDrop");
static const V lit27("rf2MuScaleInfluence");
static const V lit28("rf2SlidingForceDrop");
static const V lit29("ultraCamberInfluence");
static const V lit30("combinedSlipForceDrop");
static const V lit31("slipEnergyForceDrop");
static const V lit32("combinedSlipBalanceGain");
static const V lit33("maxCombinedSlip");
static const V lit34("maxSlipEnergy");
static const V lit35("diffInputTorqueReferenceNm");
static const V lit36("diffInputTorqueLongGain");
static const V lit37("driveTorqueNmLongGain");
static const V lit38("loadForceExponent");
static const V lit39("minEffectiveLoadScale");
static const V lit40("maxEffectiveLoadScale");
static const V lit41("roadInputForceReference");
static const V lit42("carcassSupportInfluence");
static const V lit43("carcassGripGateInfluence");
static const V lit44("carcassDeformationDrop");
static const V lit45("carcassDelayGain");
static const V lit46("recoveryGripGain");
static const V lit47("recoverySnapDrop");
static const V lit48("recoveryDirtyDrop");
static const V lit49("roadShockForceDrop");
static const V lit50("roadPathLossDrop");
static const V lit51("roadTireDeliveryGain");
static const V lit52("loadPathLossDrop");
static const V lit53("thermalStressDrop");
static const V lit54("forceTau");
static const V lit55("releaseTau");
static const V lit56("storeOnlyTau");
static const V lit57("maxDt");
static const V lit58("minDt");
static const V lit59("debugStoreInterval");
static const V lit60("FL");
static const V lit61("FR");
static const V lit62("RL");
static const V lit63("RR");
static const V lit64("lastForce");
static const V lit65("lateral");
static const V lit66("longitudinal");
static const V lit67("rawLateral");
static const V lit68("rawLongitudinal");
static const V lit69("slipAngle");
static const V lit70("slipRatio");
static const V lit71("filteredSlipAngle");
static const V lit72("filteredSlipRatio");
static const V lit73("dSlipAngle");
static const V lit74("dSlipRatio");
static const V lit75("load");
static const V lit76("loadScale");
static const V lit77("effectiveLoadScale");
static const V lit78("loadSource");
static const V lit79("INIT");
static const V lit80("effectiveSlipAngle");
static const V lit81("effectiveSlipRatio");
static const V lit82("combinedSlip");
static const V lit83("slipEnergy");
static const V lit84("contactGrip");
static const V lit85("contactLat");
static const V lit86("contactLong");
static const V lit87("contactQuality");
static const V lit88("contactLoss");
static const V lit89("casterGrip");
static const V lit90("tireGrip");
static const V lit91("tireLimit");
static const V lit92("tireLag");
static const V lit93("responseDelay");
static const V lit94("lsdLock");
static const V lit95("driveTorque");
static const V lit96("driveTorqueNm");
static const V lit97("diffInputTorqueNm");
static const V lit98("shaftTwist");
static const V lit99("driveLash");
static const V lit100("armCamber");
static const V lit101("armToe");
static const V lit102("hopEnergy");
static const V lit103("rf2MuScale");
static const V lit104("rf2Sliding");
static const V lit105("rf2Fy");
static const V lit106("ucMuCamber");
static const V lit107("ucCamber");
static const V lit108("ucToe");
static const V lit109("carcassSupport");
static const V lit110("carcassGripGate");
static const V lit111("carcassDeformation");
static const V lit112("carcassDelay");
static const V lit113("carcassEnergy");
static const V lit114("recoveryRate");
static const V lit115("gripReturn");
static const V lit116("snapRisk");
static const V lit117("dirtyReturn");
static const V lit118("roadSeverity");
static const V lit119("roadShock");
static const V lit120("roadPathLoss");
static const V lit121("roadTireDelivery");
static const V lit122("loadPathLoss");
static const V lit123("thermalStress");
static const V lit124("finalScale");
static const V lit125("forceMagnitude");
static const V lit126("roadInput");
static const V lit127("combinedBalance");
static const V lit128("active");
static const V lit129("state");
static const V lit130("force");
static const V lit131("tireStateLinked");
static const V lit132("contactLinked");
static const V lit133("dynamicsLinked");
static const V lit134("complianceLinked");
static const V lit135("casterLinked");
static const V lit136("drivetrainLinked");
static const V lit137("lsdLinked");
static const V lit138("armLinked");
static const V lit139("rf2Linked");
static const V lit140("ultraChassisLinked");
static const V lit141("carcassLinked");
static const V lit142("recoveryLinked");
static const V lit143("roadLinked");
static const V lit144("loadPathLinked");
static const V lit145("thermalLinked");
static const V lit146("wheelsValid");
static const V lit147("storeOnly");
static const V lit148("avgLatForce");
static const V lit149("avgLongForce");
static const V lit150("avgForceScale");
static const V lit151("avgCombinedSlip");
static const V lit152("avgSlipEnergy");
static const V lit153("avgRoadInput");
static const V lit154("maxForceMagnitude");
static const V lit155("maxRoadInput");
static const V lit156("activeCount");
static const V lit157("status");
static const V lit158("updateCount");
static const V lit159("debugStoreTimer");
static const V lit160("debugStoreNow");
static const V lit161("debug");
static const V lit162("huge");
static const V lit163("safeStore");
static const V lit164("safeLoadRaw");
static const V lit165("safeField");
static const V lit166("#");
static const V lit167("getCar");
static const V lit168("wheels");
static const V lit169("ngp_tire_slip_angle_");
static const V lit170("ngp_slip_angle_");
static const V lit171("ngp_contact_slip_angle_");
static const V lit172("ngp_tire_state_slip_angle_");
static const V lit173("ngp_tire_slip_ratio_");
static const V lit174("ngp_slip_ratio_");
static const V lit175("ngp_contact_slip_ratio_");
static const V lit176("ngp_tire_state_slip_ratio_");
static const V lit177("ngp_filtered_slip_angle_");
static const V lit178("ngp_tire_filtered_slip_angle_");
static const V lit179("ngp_tire_state_filtered_slip_angle_");
static const V lit180("ngp_filtered_slip_ratio_");
static const V lit181("ngp_tire_filtered_slip_ratio_");
static const V lit182("ngp_tire_state_filtered_slip_ratio_");
static const V lit183("sqrt");
static const V lit184("ngp_tire_effective_slip_angle_");
static const V lit185("ngp_tdyn_effective_slip_angle_");
static const V lit186("ngp_tire_dynamics_effective_slip_angle_");
static const V lit187("ngp_tire_effective_slip_ratio_");
static const V lit188("ngp_tdyn_effective_slip_ratio_");
static const V lit189("ngp_tire_dynamics_effective_slip_ratio_");
static const V lit190("ngp_tdyn_combined_slip_");
static const V lit191("ngp_tire_dynamics_combined_slip_");
static const V lit192("ngp_tire_combined_slip_");
static const V lit193("ngp_contact_combined_slip_");
static const V lit194("ngp_tdyn_slip_energy_");
static const V lit195("ngp_tire_dynamics_slip_energy_");
static const V lit196("ngp_tc_energy_");
static const V lit197("ngp_tire_slip_energy_");
static const V lit198("max");
static const V lit199("loadK");
static const V lit200("AC_");
static const V lit201("ngp_tire_load_input_");
static const V lit202("ngp_tdyn_load_");
static const V lit203("ngp_tc_load_");
static const V lit204("ngp_cp_load_");
static const V lit205("ngp_contact_load_");
static const V lit206("ngp_load_path_load_");
static const V lit207("ngp_wheel_load_");
static const V lit208("ngp_load_wheel_");
static const V lit209("ngp_dlt_load_");
static const V lit210("DLT");
static const V lit211("BLEND");
static const V lit212("STORE");
static const V lit213("AC_WHEEL");
static const V lit214("DEFAULT");
static const V lit215("ngp_tire_effective_grip_");
static const V lit216("ngp_tcr_effective_grip_");
static const V lit217("ngp_cp_grip_");
static const V lit218("ngp_tc_grip_");
static const V lit219("ngp_contact_grip_");
static const V lit220("ngp_cp_lat_");
static const V lit221("ngp_tcp_lat_");
static const V lit222("ngp_contact_patch_lat_");
static const V lit223("ngp_cp_long_");
static const V lit224("ngp_tcp_long_");
static const V lit225("ngp_contact_patch_long_");
static const V lit226("ngp_tire_contact_quality_");
static const V lit227("ngp_tcr_quality_");
static const V lit228("ngp_contact_quality_");
static const V lit229("ngp_tc_contact_");
static const V lit230("ngp_tire_contact_loss_");
static const V lit231("ngp_tcr_contact_loss_");
static const V lit232("ngp_contact_loss_");
static const V lit233("ngp_tcr_contact_drop_");
static const V lit234("ngp_tire_grip_");
static const V lit235("ngp_tyre_grip_");
static const V lit236("ngp_td_grip_");
static const V lit237("ngp_tire_limit_");
static const V lit238("ngp_tyre_limit_");
static const V lit239("ngp_td_limit_");
static const V lit240("ngp_rubber_lag_");
static const V lit241("ngp_tire_lag_");
static const V lit242("ngp_td_lag_");
static const V lit243("ngp_tire_response_delay");
static const V lit244("ngp_tyre_response_delay");
static const V lit245("ngp_tcomp_response_delay");
static const V lit246("ngp_tire_compliance_response_delay");
static const V lit247("ngp_tire_relax_scale_");
static const V lit248("ngp_tcr_relax_scale_");
static const V lit249("ngp_tire_response_scale_");
static const V lit250("ngp_tcomp_relax_scale_");
static const V lit251("ngp_caster_grip_");
static const V lit252("ngp_caster_effect_grip_");
static const V lit253("ngp_steer_caster_grip_");
static const V lit254("ngp_drive_torque_normalized_from_nm");
static const V lit255("ngp_drive_torque");
static const V lit256("ngp_drivetrain_torque");
static const V lit257("ngp_windup_transmitted");
static const V lit258("ngp_drive_torque_nm");
static const V lit259("ngp_wheel_drive_torque_nm");
static const V lit260("ngp_drivetrain_torque_nm");
static const V lit261("ngp_driveline_drive_torque");
static const V lit262("ngp_diff_input_torque_nm");
static const V lit263("ngp_lsd_input_torque_nm");
static const V lit264("ngp_lsd_torque_capacity_nm");
static const V lit265("ngp_shaft_twist");
static const V lit266("ngp_windup_shaft_twist");
static const V lit267("ngp_driveline_shaft_twist");
static const V lit268("ngp_drive_lash");
static const V lit269("ngp_drivetrain_lash");
static const V lit270("ngp_windup_lash");
static const V lit271("ngp_lsd_lock");
static const V lit272("ngp_diff_lock");
static const V lit273("ngp_control_arm_camber_");
static const V lit274("ngp_ca_camber_");
static const V lit275("ngp_arm_camber_");
static const V lit276("ngp_camber_");
static const V lit277("ngp_control_arm_toe_");
static const V lit278("ngp_ca_toe_");
static const V lit279("ngp_arm_toe_");
static const V lit280("ngp_toe_");
static const V lit281("ngp_tirehop_energy_");
static const V lit282("ngp_tire_hop_energy_");
static const V lit283("ngp_tire_hop_");
static const V lit284("ngp_susp_hop_");
static const V lit285("ngp_rf2_mu_scale_");
static const V lit286("ngp_rf2_sliding_");
static const V lit287("ngp_rf2_fy_");
static const V lit288("ngp_uc_mu_camber_");
static const V lit289("ngp_uc_camber_");
static const V lit290("ngp_uc_toe_");
static const V lit291("ngp_carcass_support_");
static const V lit292("ngp_tire_carcass_support_");
static const V lit293("ngp_carcass_grip_gate_");
static const V lit294("ngp_tc_grip_gate_");
static const V lit295("ngp_tire_deformation_");
static const V lit296("ngp_carcass_deformation_");
static const V lit297("ngp_tc_deformation_");
static const V lit298("ngp_tire_contact_delay_");
static const V lit299("ngp_contact_delay_");
static const V lit300("ngp_carcass_recovery_bias_");
static const V lit301("ngp_tire_sidewall_energy_");
static const V lit302("ngp_sidewall_energy_");
static const V lit303("ngp_carcass_hysteresis_");
static const V lit304("ngp_slip_recovery_rate_");
static const V lit305("ngp_recovery_rate_");
static const V lit306("ngp_sr_recovery_");
static const V lit307("ngp_slip_grip_return_");
static const V lit308("ngp_grip_return_");
static const V lit309("ngp_sr_grip_return_");
static const V lit310("ngp_slip_snap_risk_");
static const V lit311("ngp_snap_risk_");
static const V lit312("ngp_sr_snap_risk_");
static const V lit313("ngp_slip_dirty_return_");
static const V lit314("ngp_dirty_return_");
static const V lit315("ngp_road_input_severity_");
static const V lit316("ngp_rii_severity_");
static const V lit317("ngp_rbi_wheel_input_");
static const V lit318("ngp_road_impact_");
static const V lit319("ngp_rii_shock_");
static const V lit320("ngp_impact_wheel_");
static const V lit321("ngp_rii_path_loss_");
static const V lit322("ngp_road_path_loss_");
static const V lit323("ngp_lp_loss_");
static const V lit324("ngp_rii_tire_delivery_");
static const V lit325("ngp_road_tire_delivery_");
static const V lit326("ngp_load_path_loss_");
static const V lit327("ngp_lp_force_leak_");
static const V lit328("ngp_thermal_stress_");
static const V lit329("ngp_virtual_thermal_stress");
static const V lit330("ngp_brake_root_heat_avg");
static const V lit331("ngp_tire_force_lat_");
static const V lit332("ngp_tire_force_long_");
static const V lit333("ngp_tire_force_lateral_");
static const V lit334("ngp_tire_force_longitudinal_");
static const V lit335("ngp_tire_force_scale_");
static const V lit336("ngp_tf_lat_");
static const V lit337("ngp_tf_long_");
static const V lit338("ngp_tf_scale_");
static const V lit339("ngp_tire_force_combined_");
static const V lit340("ngp_tf_combined_");
static const V lit341("ngp_tire_force_road_input_");
static const V lit342("ngp_tf_road_input_");
static const V lit343("ngp_tire_force_combined_slip_");
static const V lit344("ngp_tire_force_slip_energy_");
static const V lit345("ngp_tf_combined_slip_");
static const V lit346("ngp_tf_slip_energy_");
static const V lit347("ngp_tforce_lat_");
static const V lit348("ngp_tforce_long_");
static const V lit349("ngp_tforce_road_");
static const V lit350("ngp_tire_force_raw_lat_");
static const V lit351("ngp_tire_force_raw_long_");
static const V lit352("ngp_tire_force_load_");
static const V lit353("ngp_tire_force_load_scale_");
static const V lit354("ngp_tire_force_effective_load_scale_");
static const V lit355("ngp_tire_force_load_source_");
static const V lit356("UNKNOWN");
static const V lit357("ngp_tire_force_effective_slip_angle_");
static const V lit358("ngp_tire_force_effective_slip_ratio_");
static const V lit359("ngp_tire_force_combined_balance_");
static const V lit360("ngp_tire_force_grip_");
static const V lit361("ngp_tire_force_limit_");
static const V lit362("ngp_tire_force_contact_quality_");
static const V lit363("ngp_tire_force_contact_loss_");
static const V lit364("ngp_tire_force_lsd_lock_");
static const V lit365("ngp_tire_force_drive_torque_");
static const V lit366("ngp_tire_force_drive_torque_nm_");
static const V lit367("ngp_tire_force_diff_input_torque_nm_");
static const V lit368("ngp_tire_force_arm_toe_");
static const V lit369("ngp_tire_force_arm_camber_");
static const V lit370("ngp_tire_force_hop_");
static const V lit371("ngp_tire_force_rf2_mu_scale_");
static const V lit372("ngp_tire_force_rf2_sliding_");
static const V lit373("ngp_tire_force_uc_mu_camber_");
static const V lit374("ngp_tire_force_uc_toe_");
static const V lit375("ngp_tire_force_carcass_support_");
static const V lit376("ngp_tire_force_carcass_deformation_");
static const V lit377("ngp_tire_force_recovery_rate_");
static const V lit378("ngp_tire_force_snap_risk_");
static const V lit379("ngp_tire_force_road_severity_");
static const V lit380("ngp_tire_force_thermal_stress_");
static const V lit381("ngp_tire_force_status");
static const V lit382("ngp_tire_force_update_count");
static const V lit383("ngp_tire_force_wheels_valid");
static const V lit384("ngp_tire_force_store_only");
static const V lit385("ngp_tire_force_avg_lat");
static const V lit386("ngp_tire_force_avg_long");
static const V lit387("ngp_tire_force_avg_scale");
static const V lit388("ngp_tire_force_avg_combined_slip");
static const V lit389("ngp_tire_force_avg_slip_energy");
static const V lit390("ngp_tire_force_avg_road_input");
static const V lit391("ngp_tire_force_max_magnitude");
static const V lit392("ngp_tire_force_max_road_input");
static const V lit393("ngp_tire_force_active_count");
static const V lit394("ngp_tforce_avg_lat");
static const V lit395("ngp_tforce_avg_long");
static const V lit396("ngp_tforce_avg_road");
static const V lit397("ngp_tire_force_tire_state_linked");
static const V lit398("ngp_tire_force_contact_linked");
static const V lit399("ngp_tire_force_dynamics_linked");
static const V lit400("ngp_tire_force_compliance_linked");
static const V lit401("ngp_tire_force_caster_linked");
static const V lit402("ngp_tire_force_drivetrain_linked");
static const V lit403("ngp_tire_force_lsd_linked");
static const V lit404("ngp_tire_force_arm_linked");
static const V lit405("ngp_tire_force_rf2_linked");
static const V lit406("ngp_tire_force_ultra_chassis_linked");
static const V lit407("ngp_tire_force_carcass_linked");
static const V lit408("ngp_tire_force_recovery_linked");
static const V lit409("ngp_tire_force_road_linked");
static const V lit410("ngp_tire_force_load_path_linked");
static const V lit411("ngp_tire_force_thermal_linked");
static const V lit412("init");
static const V lit413("responseScale");
static const V lit414("update");
static const V lit415("BAD DT");
static const V lit416("NO CAR");
static const V lit417("NO WHEELS");
static const V lit418("RUNNING");
static const V lit419("getForce");
static const V lit420("getLateral");
static const V lit421("getLongitudinal");
static const V lit422("getCombined");
static const V lit423("getRoadInput");
static const V lit424("getCombinedSlip");
static const V lit425("getSlipEnergy");
static const V lit426("getState");
static const V lit427("debugStr");
static const V lit428("tire_force wheel NIL");
static const V lit429("format");
static const V lit430("%s Lat %+.0f Long %+.0f Scale %.2f Road %.2f\n");
static const V lit431("SlipA %.3f SlipR %.3f EffA %.3f EffR %.3f\n");
static const V lit432("Comb %.2f Energy %.2f Load %.0f/%s Ls %.2f\n");
static const V lit433("Grip %.2f Limit %.2f Contact %.2f Caster %.2f\n");
static const V lit434("Drive %.3f Nm %.0f Tin %.0f LSD %.2f Hop %.3f\n");
static const V lit435("Carcass %.2f Def %.2f Recovery %.2f Snap %.2f");
static const V lit436("NIL");
static const V lit437("Status %s / Count %.0f / Wheels %s / StoreOnly %s\n");
static const V lit438("Lat %.0f %.0f %.0f %.0f / Long %.0f %.0f %.0f %.0f\n");
static const V lit439("Comb %.2f Energy %.2f Road %.2f MaxF %.0f\n");
static const V lit440("Links TS:%s CT:%s TD:%s CP:%s CA:%s DT:%s LSD:%s ARM:%s CAR:%s REC:%s");
static const V lit441("OK");
static const V lit442("YES");
static const V lit443("NO");
V load_tire_force(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(47);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(300.0));set(z,lit3,V(105.0));set(z,lit4,V(2500.0));set(z,lit5,V(4000.0));set(z,lit6,V(3000.0));set(z,lit7,V(80.0));set(z,lit8,V(0.0));set(z,lit9,V(1.5));set(z,lit10,V(0.35));set(z,lit11,V(0.2));set(z,lit12,V(0.15));set(z,lit13,V(0.3));set(z,lit14,V(0.3));set(z,lit15,V(0.35));set(z,lit16,V(1.0));set(z,lit17,V(0.18));set(z,lit18,V(0.12));set(z,lit19,V(0.1));set(z,lit20,V(0.18));set(z,lit21,V(0.08));set(z,lit22,V(0.08));set(z,lit23,V(0.06));set(z,lit24,V(0.16));set(z,lit25,V(0.18));set(z,lit26,V(0.12));set(z,lit27,V(0.15));set(z,lit28,V(0.05));set(z,lit29,V(0.08));set(z,lit30,V(0.22));set(z,lit31,V(0.16));set(z,lit32,V(0.35));set(z,lit33,V(2.5));set(z,lit34,V(1.0));set(z,lit35,V(3000.0));set(z,lit36,V(8.0));set(z,lit37,V(5.0));set(z,lit38,V(0.92));set(z,lit39,V(0.08));set(z,lit40,V(1.65));set(z,lit41,V(2200.0));set(z,lit42,V(0.2));set(z,lit43,V(0.18));set(z,lit44,V(0.12));set(z,lit45,V(0.16));set(z,lit46,V(0.1));set(z,lit47,V(0.08));set(z,lit48,V(0.05));set(z,lit49,V(0.08));set(z,lit50,V(0.08));set(z,lit51,V(0.1));set(z,lit52,V(0.1));set(z,lit53,V(0.05));set(z,lit54,V(0.03));set(z,lit55,V(0.055));set(z,lit56,V(0.085));set(z,lit57,V(0.1));set(z,lit58,V(0.0001));set(z,lit59,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit60);set(z,V(1.0),lit61);set(z,V(2.0),lit62);set(z,V(3.0),lit63);return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit64)};V t5=([&](){V z=table();return z;})();refs[0].put(std::move(t5));}
{double t6=num(V(0.0)),t7=num(V(3.0)),t8=num(V(1.0));for(double t9=t6;(t8>0?t9<=t7:t9>=t7);t9+=t8){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t9);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit64),e->slot(0,0))};V t10=([&](){V z=table();set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,get(get(e->slot(1,1),lit1),lit6));set(z,lit76,V(1.0));set(z,lit77,V(1.0));set(z,lit78,lit79);set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(1.0));set(z,lit85,V(1.0));set(z,lit86,V(1.0));set(z,lit87,V(1.0));set(z,lit88,V(0.0));set(z,lit89,V(1.0));set(z,lit90,V(1.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(1.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(1.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(1.0));set(z,lit110,V(1.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(1.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(1.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,V(1.0));set(z,lit128,V(false));return z;})();refs[0].put(std::move(t10));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit129)};V t11=([&](){V z=table();set(z,lit130,get(e->slot(0,1),lit64));set(z,lit131,V(false));set(z,lit132,V(false));set(z,lit133,V(false));set(z,lit134,V(false));set(z,lit135,V(false));set(z,lit136,V(false));set(z,lit137,V(false));set(z,lit138,V(false));set(z,lit139,V(false));set(z,lit140,V(false));set(z,lit141,V(false));set(z,lit142,V(false));set(z,lit143,V(false));set(z,lit144,V(false));set(z,lit145,V(false));set(z,lit146,V(false));set(z,lit147,V(false));set(z,lit148,V(0.0));set(z,lit149,V(0.0));set(z,lit150,V(1.0));set(z,lit151,V(0.0));set(z,lit152,V(0.0));set(z,lit153,V(0.0));set(z,lit154,V(0.0));set(z,lit155,V(0.0));set(z,lit156,V(0.0));set(z,lit157,lit79);set(z,lit158,V(0.0));set(z,lit159,V(999.0));set(z,lit160,V(true));return z;})();refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit161)};V t12=get(e->slot(0,1),lit129);refs[0].put(std::move(t12));}
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
{V t20=get(e->slot(0,0),lit163);e->slot(0,6)=std::move(t20);}
{V t21=get(e->slot(0,0),lit164);e->slot(0,7)=std::move(t21);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t22=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t22);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t23=e->slot(0,1);return !truth(t23)?V(0.0):t23;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t24=e->slot(0,1);return !truth(t24)?V(0.0):t24;})()});
return Args{};});
{V t25=get(e->slot(0,0),lit165);e->slot(0,9)=std::move(t25);}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t26=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t27=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t28=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t29=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t29));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t30=first(call(e->slot(1,4),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t30);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;e->extra=tail(a,0);{double t31=num(V(1.0)),t32=num(first(call(e->get("select"),joined(Args{lit166},e->dots())))),t33=num(V(1.0));for(double t34=t31;(t33>0?t34<=t32:t34>=t32);t34+=t33){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t34);{V t35=first(call(e->get("select"),joined(Args{e->slot(0,0)},e->dots())));e->slot(0,1)=std::move(t35);}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t36=first(call(e->slot(3,7),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t36);}
if(truth(ne(e->slot(0,0),V()))){return Args{e->slot(0,0),e->slot(1,1)};
}
}
}}
return Args{V(),V()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{Args t37=call(e->slot(1,11),e->dots());e->slot(0,1)=arg(t37,0);e->slot(0,2)=arg(t37,1);}
if(truth(eq(e->slot(0,1),V()))){return Args{e->slot(0,0),V()};
}
return Args{first(call(e->slot(1,3),Args{e->slot(0,1),e->slot(0,0)})),e->slot(0,2)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t38=V(!truth(e->get("ac")));return !truth(t38)?V(!truth(get(e->get("ac"),lit167))):t38;})())){return Args{V()};
}
{Args t39=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit167),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t39,0);e->slot(0,1)=arg(t39,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,9),Args{e->slot(0,0),lit168,V()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{([&](){V t40=first(call(e->slot(1,9),Args{e->slot(0,0),e->slot(0,1),V()}));return !truth(t40)?first(call(e->slot(1,9),Args{e->slot(0,0),add(e->slot(0,1),V(1.0)),V()})):t40;})()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit159)};V t41=add(([&](){V t42=get(get(e->slot(1,1),lit129),lit159);return !truth(t42)?V(0.0):t42;})(),([&](){V t43=e->slot(0,0);return !truth(t43)?V(0.0):t43;})());refs[0].put(std::move(t41));}
if(truth(ge(get(get(e->slot(1,1),lit129),lit159),get(get(e->slot(1,1),lit1),lit59)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit159)};V t44=V(0.0);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit160)};V t45=V(true);refs[0].put(std::move(t45));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit160)};V t46=V(false);refs[0].put(std::move(t46));}
}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t47=V(false);e->slot(0,2)=std::move(t47);}
{Args t48=call(e->slot(1,12),Args{V(),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0)),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0))});e->slot(0,3)=arg(t48,0);e->slot(0,4)=arg(t48,1);}
{Args t49=call(e->slot(1,12),Args{V(),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0))});e->slot(0,5)=arg(t49,0);e->slot(0,6)=arg(t49,1);}
{Args t50=call(e->slot(1,12),Args{V(),concat(lit177,e->slot(0,0)),concat(lit178,e->slot(0,0)),concat(lit179,e->slot(0,0))});e->slot(0,7)=arg(t50,0);e->slot(0,8)=arg(t50,1);}
{Args t51=call(e->slot(1,12),Args{V(),concat(lit180,e->slot(0,0)),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0))});e->slot(0,9)=arg(t51,0);e->slot(0,10)=arg(t51,1);}
if(truth(([&](){V t52=([&](){V t53=([&](){V t54=e->slot(0,4);return !truth(t54)?e->slot(0,6):t54;})();return !truth(t53)?e->slot(0,8):t53;})();return !truth(t52)?e->slot(0,10):t52;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t55=V(true);refs[0].put(std::move(t55));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t56=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,1),lit69,V(0.0)})),V(0.0)}));refs[0].put(std::move(t56));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t57=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,1),lit70,V(0.0)})),V(0.0)}));refs[0].put(std::move(t57));}
}
if(truth(eq(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e,0,7)};V t58=e->slot(0,3);refs[0].put(std::move(t58));}
}
if(truth(eq(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(e,0,9)};V t59=e->slot(0,5);refs[0].put(std::move(t59));}
}
return Args{e->slot(0,3),e->slot(0,5),e->slot(0,7),e->slot(0,9),e->slot(0,2)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t60=divv(first(call(e->slot(1,5),Args{e->slot(0,0)})),V(0.174533));e->slot(0,2)=std::move(t60);}
{V t61=divv(first(call(e->slot(1,5),Args{e->slot(0,1)})),V(0.12));e->slot(0,3)=std::move(t61);}
return call(get(e->get("math"),lit183),Args{add(mul(e->slot(0,2),e->slot(0,2)),mul(e->slot(0,3),e->slot(0,3)))});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t62=V(false);e->slot(0,3)=std::move(t62);}
{Args t63=call(e->slot(1,12),Args{V(),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0))});e->slot(0,4)=arg(t63,0);e->slot(0,5)=arg(t63,1);}
{Args t64=call(e->slot(1,12),Args{V(),concat(lit187,e->slot(0,0)),concat(lit188,e->slot(0,0)),concat(lit189,e->slot(0,0))});e->slot(0,6)=arg(t64,0);e->slot(0,7)=arg(t64,1);}
{Args t65=call(e->slot(1,12),Args{V(),concat(lit190,e->slot(0,0)),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0)),concat(lit193,e->slot(0,0))});e->slot(0,8)=arg(t65,0);e->slot(0,9)=arg(t65,1);}
{Args t66=call(e->slot(1,12),Args{V(),concat(lit194,e->slot(0,0)),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0)),concat(lit197,e->slot(0,0))});e->slot(0,10)=arg(t66,0);e->slot(0,11)=arg(t66,1);}
if(truth(([&](){V t67=([&](){V t68=([&](){V t69=e->slot(0,5);return !truth(t69)?e->slot(0,7):t69;})();return !truth(t68)?e->slot(0,9):t68;})();return !truth(t67)?e->slot(0,11):t67;})())){{std::array<Ref,1> refs{Ref(e,0,3)};V t70=V(true);refs[0].put(std::move(t70));}
}
{std::array<Ref,1> refs{Ref(e,0,4)};V t71=first(call(e->slot(1,3),Args{e->slot(0,4),([&](){V t72=e->slot(0,1);return !truth(t72)?V(0.0):t72;})()}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t73=first(call(e->slot(1,3),Args{e->slot(0,6),([&](){V t74=e->slot(0,2);return !truth(t74)?V(0.0):t74;})()}));refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e,0,8)};V t75=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),joined(Args{e->slot(0,8)},call(e->slot(1,18),Args{e->slot(0,4),e->slot(0,6)})))),V(0.0),get(get(e->slot(1,1),lit1),lit33)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e,0,10)};V t76=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),joined(Args{e->slot(0,10)},call(get(e->get("math"),lit198),Args{sub(e->slot(0,8),V(1.0)),V(0.0)})))),V(0.0),get(get(e->slot(1,1),lit1),lit34)}));refs[0].put(std::move(t76));}
return Args{e->slot(0,4),e->slot(0,6),e->slot(0,8),e->slot(0,10),e->slot(0,3)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t77=([&](){V z=table();set(z,V(1.0),lit75);set(z,V(2.0),lit199);return z;})();e->slot(0,1)=std::move(t77);}
{Args t78=call(e->get("ipairs"),Args{e->slot(0,1)});V t79=arg(t78,2);while(true){Args t80=call(arg(t78,0),Args{arg(t78,1),t79});t79=arg(t80,0);if(isnil(t79))break;auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=arg(t80,0);e->slot(0,1)=arg(t80,1);{V t81=first(call(e->slot(2,9),Args{e->slot(1,0),e->slot(0,1),V()}));e->slot(0,2)=std::move(t81);}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,2),get(get(e->slot(2,1),lit1),lit6)})),concat(lit200,e->slot(0,1))};
}
}}
return Args{V(),V()};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t82=call(e->slot(1,12),Args{V(),concat(lit201,e->slot(0,0)),concat(lit202,e->slot(0,0)),concat(lit203,e->slot(0,0)),concat(lit204,e->slot(0,0)),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0)),concat(lit207,e->slot(0,0)),concat(lit208,e->slot(0,0))});e->slot(0,1)=arg(t82,0);e->slot(0,2)=arg(t82,1);}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1),e->slot(0,2)};
}
{V t83=first(call(e->slot(1,7),Args{concat(lit209,e->slot(0,0))}));e->slot(0,3)=std::move(t83);}
if(truth(ne(e->slot(0,3),V()))){return Args{add(get(get(e->slot(1,1),lit1),lit6),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}))),lit210};
}
return Args{V(),V()};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t84=call(e->slot(1,21),Args{e->slot(0,1)});e->slot(0,2)=arg(t84,0);e->slot(0,3)=arg(t84,1);}
{Args t85=call(e->slot(1,20),Args{e->slot(0,0)});e->slot(0,4)=arg(t85,0);e->slot(0,5)=arg(t85,1);}
if(truth(([&](){V t86=ne(e->slot(0,2),V());return truth(t86)?ne(e->slot(0,4),V()):t86;})())){return Args{first(call(e->slot(1,4),Args{add(mul(e->slot(0,4),sub(V(1.0),get(get(e->slot(1,1),lit1),lit10))),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit10))),V(0.0),V(20000.0)})),lit211};
}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(20000.0)})),([&](){V t87=e->slot(0,3);return !truth(t87)?lit212:t87;})()};
}
if(truth(ne(e->slot(0,4),V()))){return Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(20000.0)})),([&](){V t88=e->slot(0,5);return !truth(t88)?lit213:t88;})()};
}
return Args{get(get(e->slot(1,1),lit1),lit6),lit214};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);{V t89=V(false);e->slot(0,1)=std::move(t89);}
{Args t90=call(e->slot(1,12),Args{V(),concat(lit215,e->slot(0,0)),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0)),concat(lit219,e->slot(0,0))});e->slot(0,2)=arg(t90,0);e->slot(0,3)=arg(t90,1);}
{Args t91=call(e->slot(1,12),Args{V(),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0)),concat(lit222,e->slot(0,0))});e->slot(0,4)=arg(t91,0);e->slot(0,5)=arg(t91,1);}
{Args t92=call(e->slot(1,12),Args{V(),concat(lit223,e->slot(0,0)),concat(lit224,e->slot(0,0)),concat(lit225,e->slot(0,0))});e->slot(0,6)=arg(t92,0);e->slot(0,7)=arg(t92,1);}
{Args t93=call(e->slot(1,12),Args{V(),concat(lit226,e->slot(0,0)),concat(lit227,e->slot(0,0)),concat(lit228,e->slot(0,0)),concat(lit229,e->slot(0,0))});e->slot(0,8)=arg(t93,0);e->slot(0,9)=arg(t93,1);}
{Args t94=call(e->slot(1,12),Args{V(),concat(lit230,e->slot(0,0)),concat(lit231,e->slot(0,0)),concat(lit232,e->slot(0,0)),concat(lit233,e->slot(0,0))});e->slot(0,10)=arg(t94,0);e->slot(0,11)=arg(t94,1);}
if(truth(([&](){V t95=([&](){V t96=([&](){V t97=([&](){V t98=e->slot(0,3);return !truth(t98)?e->slot(0,5):t98;})();return !truth(t97)?e->slot(0,7):t97;})();return !truth(t96)?e->slot(0,9):t96;})();return !truth(t95)?e->slot(0,11):t95;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t99=V(true);refs[0].put(std::move(t99));}
}
{std::array<Ref,1> refs{Ref(e,0,8)};V t100=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,8),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e,0,10)};V t101=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,10),sub(V(1.0),e->slot(0,8))})),V(0.0),V(1.0)}));refs[0].put(std::move(t101));}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)})),V(0.4),V(1.25)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(1.0)})),V(0.4),V(1.25)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(1.0)})),V(0.4),V(1.25)})),e->slot(0,8),e->slot(0,10),e->slot(0,1)};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t102=call(e->slot(1,12),Args{V(),concat(lit234,e->slot(0,0)),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0))});e->slot(0,1)=arg(t102,0);e->slot(0,2)=arg(t102,1);}
{Args t103=call(e->slot(1,12),Args{V(),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0)),concat(lit239,e->slot(0,0))});e->slot(0,3)=arg(t103,0);e->slot(0,4)=arg(t103,1);}
{Args t104=call(e->slot(1,12),Args{V(),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0))});e->slot(0,5)=arg(t104,0);e->slot(0,6)=arg(t104,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.35)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(2.5)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(-num(V(1.0))),V(2.0)})),([&](){V t105=([&](){V t106=ne(e->slot(0,2),V());return !truth(t106)?ne(e->slot(0,4),V()):t106;})();return !truth(t105)?ne(e->slot(0,6),V()):t105;})()};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t107=call(e->slot(1,12),Args{V(),lit243,lit244,lit245,lit246});e->slot(0,1)=arg(t107,0);e->slot(0,2)=arg(t107,1);}
{Args t108=call(e->slot(1,12),Args{V(),concat(lit247,e->slot(0,0)),concat(lit248,e->slot(0,0)),concat(lit249,e->slot(0,0)),concat(lit250,e->slot(0,0))});e->slot(0,3)=arg(t108,0);e->slot(0,4)=arg(t108,1);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t109=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t110=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(1.0)})),V(0.55),V(1.55)}));refs[0].put(std::move(t110));}
return Args{e->slot(0,1),e->slot(0,3),([&](){V t111=ne(e->slot(0,2),V());return !truth(t111)?ne(e->slot(0,4),V()):t111;})()};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t112=call(e->slot(1,12),Args{V(),concat(lit251,e->slot(0,0)),concat(lit252,e->slot(0,0)),concat(lit253,e->slot(0,0))});e->slot(0,1)=arg(t112,0);e->slot(0,2)=arg(t112,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.5),V(1.1)})),ne(e->slot(0,2),V())};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(lt(e->slot(0,0),V(2.0)))){return Args{V(0.0),V(0.0),V(0.0),V(false),V(0.0),V(0.0),V(0.0)};
}
{Args t113=call(e->slot(1,12),Args{V(),lit254,lit255,lit256,lit257});e->slot(0,1)=arg(t113,0);e->slot(0,2)=arg(t113,1);}
{Args t114=call(e->slot(1,12),Args{V(),lit258,lit259,lit260,lit261});e->slot(0,3)=arg(t114,0);e->slot(0,4)=arg(t114,1);}
{Args t115=call(e->slot(1,12),Args{V(),lit262,lit263,lit264});e->slot(0,5)=arg(t115,0);e->slot(0,6)=arg(t115,1);}
{Args t116=call(e->slot(1,12),Args{V(),lit265,lit266,lit267});e->slot(0,7)=arg(t116,0);e->slot(0,8)=arg(t116,1);}
{Args t117=call(e->slot(1,12),Args{V(),lit268,lit269,lit270});e->slot(0,9)=arg(t117,0);e->slot(0,10)=arg(t117,1);}
{Args t118=call(e->slot(1,12),Args{V(),lit271,lit272});e->slot(0,11)=arg(t118,0);e->slot(0,12)=arg(t118,1);}
{V t119=([&](){V t120=([&](){V t121=([&](){V t122=([&](){V t123=([&](){V t124=ne(e->slot(0,2),V());return !truth(t124)?ne(e->slot(0,4),V()):t124;})();return !truth(t123)?ne(e->slot(0,6),V()):t123;})();return !truth(t122)?ne(e->slot(0,8),V()):t122;})();return !truth(t121)?ne(e->slot(0,10),V()):t121;})();return !truth(t120)?ne(e->slot(0,12),V()):t120;})();e->slot(0,13)=std::move(t119);}
return joined(Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,7),V(0.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,13),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)}))},call(e->slot(1,3),Args{e->slot(0,9),V(0.0)}));
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t125=call(e->slot(1,12),Args{V(),concat(lit273,e->slot(0,0)),concat(lit274,e->slot(0,0)),concat(lit275,e->slot(0,0)),concat(lit276,e->slot(0,0))});e->slot(0,1)=arg(t125,0);e->slot(0,2)=arg(t125,1);}
{Args t126=call(e->slot(1,12),Args{V(),concat(lit277,e->slot(0,0)),concat(lit278,e->slot(0,0)),concat(lit279,e->slot(0,0)),concat(lit280,e->slot(0,0))});e->slot(0,3)=arg(t126,0);e->slot(0,4)=arg(t126,1);}
return Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),([&](){V t127=ne(e->slot(0,2),V());return !truth(t127)?ne(e->slot(0,4),V()):t127;})()};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t128=call(e->slot(1,12),Args{V(0.0),concat(lit281,e->slot(0,0)),concat(lit282,e->slot(0,0)),concat(lit283,e->slot(0,0)),concat(lit284,e->slot(0,0))});e->slot(0,1)=arg(t128,0);e->slot(0,2)=arg(t128,1);}
return Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.0)})),ne(e->slot(0,2),V())};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t129=call(e->slot(1,12),Args{V(),concat(lit285,e->slot(0,0))});e->slot(0,1)=arg(t129,0);e->slot(0,2)=arg(t129,1);}
{Args t130=call(e->slot(1,12),Args{V(),concat(lit286,e->slot(0,0))});e->slot(0,3)=arg(t130,0);e->slot(0,4)=arg(t130,1);}
{Args t131=call(e->slot(1,12),Args{V(),concat(lit287,e->slot(0,0))});e->slot(0,5)=arg(t131,0);e->slot(0,6)=arg(t131,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.35),V(1.2)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),([&](){V t132=([&](){V t133=ne(e->slot(0,2),V());return !truth(t133)?ne(e->slot(0,4),V()):t133;})();return !truth(t132)?ne(e->slot(0,6),V()):t132;})()};
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t134=call(e->slot(1,12),Args{V(),concat(lit288,e->slot(0,0))});e->slot(0,1)=arg(t134,0);e->slot(0,2)=arg(t134,1);}
{Args t135=call(e->slot(1,12),Args{V(),concat(lit289,e->slot(0,0))});e->slot(0,3)=arg(t135,0);e->slot(0,4)=arg(t135,1);}
{Args t136=call(e->slot(1,12),Args{V(),concat(lit290,e->slot(0,0))});e->slot(0,5)=arg(t136,0);e->slot(0,6)=arg(t136,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.75),V(1.05)})),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),([&](){V t137=([&](){V t138=ne(e->slot(0,2),V());return !truth(t138)?ne(e->slot(0,4),V()):t138;})();return !truth(t137)?ne(e->slot(0,6),V()):t137;})()};
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t139=call(e->slot(1,12),Args{V(),concat(lit291,e->slot(0,0)),concat(lit292,e->slot(0,0))});e->slot(0,1)=arg(t139,0);e->slot(0,2)=arg(t139,1);}
{Args t140=call(e->slot(1,12),Args{V(),concat(lit293,e->slot(0,0)),concat(lit294,e->slot(0,0))});e->slot(0,3)=arg(t140,0);e->slot(0,4)=arg(t140,1);}
{Args t141=call(e->slot(1,12),Args{V(),concat(lit295,e->slot(0,0)),concat(lit296,e->slot(0,0)),concat(lit297,e->slot(0,0))});e->slot(0,5)=arg(t141,0);e->slot(0,6)=arg(t141,1);}
{Args t142=call(e->slot(1,12),Args{V(),concat(lit298,e->slot(0,0)),concat(lit299,e->slot(0,0)),concat(lit300,e->slot(0,0))});e->slot(0,7)=arg(t142,0);e->slot(0,8)=arg(t142,1);}
{Args t143=call(e->slot(1,12),Args{V(),concat(lit301,e->slot(0,0)),concat(lit302,e->slot(0,0)),concat(lit303,e->slot(0,0))});e->slot(0,9)=arg(t143,0);e->slot(0,10)=arg(t143,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.2)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.2)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)})),([&](){V t144=([&](){V t145=([&](){V t146=([&](){V t147=ne(e->slot(0,2),V());return !truth(t147)?ne(e->slot(0,4),V()):t147;})();return !truth(t146)?ne(e->slot(0,6),V()):t146;})();return !truth(t145)?ne(e->slot(0,8),V()):t145;})();return !truth(t144)?ne(e->slot(0,10),V()):t144;})()};
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t148=call(e->slot(1,12),Args{V(),concat(lit304,e->slot(0,0)),concat(lit305,e->slot(0,0)),concat(lit306,e->slot(0,0))});e->slot(0,1)=arg(t148,0);e->slot(0,2)=arg(t148,1);}
{Args t149=call(e->slot(1,12),Args{V(),concat(lit307,e->slot(0,0)),concat(lit308,e->slot(0,0)),concat(lit309,e->slot(0,0))});e->slot(0,3)=arg(t149,0);e->slot(0,4)=arg(t149,1);}
{Args t150=call(e->slot(1,12),Args{V(),concat(lit310,e->slot(0,0)),concat(lit311,e->slot(0,0)),concat(lit312,e->slot(0,0))});e->slot(0,5)=arg(t150,0);e->slot(0,6)=arg(t150,1);}
{Args t151=call(e->slot(1,12),Args{V(),concat(lit313,e->slot(0,0)),concat(lit314,e->slot(0,0))});e->slot(0,7)=arg(t151,0);e->slot(0,8)=arg(t151,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)})),([&](){V t152=([&](){V t153=([&](){V t154=ne(e->slot(0,2),V());return !truth(t154)?ne(e->slot(0,4),V()):t154;})();return !truth(t153)?ne(e->slot(0,6),V()):t153;})();return !truth(t152)?ne(e->slot(0,8),V()):t152;})()};
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t155=call(e->slot(1,12),Args{V(),concat(lit315,e->slot(0,0)),concat(lit316,e->slot(0,0)),concat(lit317,e->slot(0,0))});e->slot(0,1)=arg(t155,0);e->slot(0,2)=arg(t155,1);}
{Args t156=call(e->slot(1,12),Args{V(),concat(lit318,e->slot(0,0)),concat(lit319,e->slot(0,0)),concat(lit320,e->slot(0,0))});e->slot(0,3)=arg(t156,0);e->slot(0,4)=arg(t156,1);}
{Args t157=call(e->slot(1,12),Args{V(),concat(lit321,e->slot(0,0)),concat(lit322,e->slot(0,0)),concat(lit323,e->slot(0,0))});e->slot(0,5)=arg(t157,0);e->slot(0,6)=arg(t157,1);}
{Args t158=call(e->slot(1,12),Args{V(),concat(lit324,e->slot(0,0)),concat(lit325,e->slot(0,0))});e->slot(0,7)=arg(t158,0);e->slot(0,8)=arg(t158,1);}
{Args t159=call(e->slot(1,12),Args{V(),concat(lit326,e->slot(0,0)),concat(lit327,e->slot(0,0)),concat(lit323,e->slot(0,0))});e->slot(0,9)=arg(t159,0);e->slot(0,10)=arg(t159,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.5)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.5)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,7),V(1.0)})),V(0.0),V(1.25)})),first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)})),([&](){V t160=([&](){V t161=([&](){V t162=ne(e->slot(0,2),V());return !truth(t162)?ne(e->slot(0,4),V()):t162;})();return !truth(t161)?ne(e->slot(0,6),V()):t161;})();return !truth(t160)?ne(e->slot(0,8),V()):t160;})(),ne(e->slot(0,10),V())};
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t163=call(e->slot(1,12),Args{V(),concat(lit328,e->slot(0,0)),lit329,lit330});e->slot(0,1)=arg(t163,0);e->slot(0,2)=arg(t163,1);}
return Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})),ne(e->slot(0,2),V())};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,4),Args{divv(first(call(e->slot(1,3),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit6)})),first(call(get(e->get("math"),lit198),Args{get(get(e->slot(1,1),lit1),lit5),V(1.0)}))),get(get(e->slot(1,1),lit1),lit8),get(get(e->slot(1,1),lit1),lit9)});
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t164=power(first(call(get(e->get("math"),lit198),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit38));e->slot(0,1)=std::move(t164);}
return call(e->slot(1,4),Args{e->slot(0,1),get(get(e->slot(1,1),lit1),lit39),get(get(e->slot(1,1),lit1),lit40)});
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t165=V(1.0);e->slot(0,1)=std::move(t165);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t166=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit84),V(1.0)),get(get(e->slot(1,1),lit1),lit11))));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t167=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit90),V(1.0)),get(get(e->slot(1,1),lit1),lit12))));refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t168=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit91),get(get(e->slot(1,1),lit1),lit17))));refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t169=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit93),get(get(e->slot(1,1),lit1),lit15))));refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t170=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit88),get(get(e->slot(1,1),lit1),lit25))));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t171=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit87),V(1.0)),get(get(e->slot(1,1),lit1),lit24))));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t172=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit102),get(get(e->slot(1,1),lit1),lit26))));refs[0].put(std::move(t172));}
{V t173=add(mul(first(call(e->slot(1,5),Args{get(e->slot(0,0),lit101)})),get(get(e->slot(1,1),lit1),lit22)),mul(first(call(e->slot(1,5),Args{get(e->slot(0,0),lit100)})),get(get(e->slot(1,1),lit1),lit23)));e->slot(0,2)=std::move(t173);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t174=mul(e->slot(0,1),sub(V(1.0),first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(0.35)}))));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t175=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit103),V(1.0)),get(get(e->slot(1,1),lit1),lit27))));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t176=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit104),get(get(e->slot(1,1),lit1),lit28))));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t177=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit106),V(1.0)),get(get(e->slot(1,1),lit1),lit29))));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t178=mul(e->slot(0,1),sub(V(1.0),mul(first(call(get(e->get("math"),lit198),Args{sub(([&](){V t179=get(e->slot(0,0),lit82);return !truth(t179)?V(0.0):t179;})(),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit30))));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t180=mul(e->slot(0,1),sub(V(1.0),mul(([&](){V t181=get(e->slot(0,0),lit83);return !truth(t181)?V(0.0):t181;})(),get(get(e->slot(1,1),lit1),lit31))));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t182=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit109),V(1.0)),get(get(e->slot(1,1),lit1),lit42))));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t183=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit110),V(1.0)),get(get(e->slot(1,1),lit1),lit43))));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t184=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit111),get(get(e->slot(1,1),lit1),lit44))));refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t185=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit119),get(get(e->slot(1,1),lit1),lit49))));refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t186=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit120),get(get(e->slot(1,1),lit1),lit50))));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t187=mul(e->slot(0,1),add(V(1.0),mul(sub(get(e->slot(0,0),lit121),V(1.0)),get(get(e->slot(1,1),lit1),lit51))));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t188=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit122),get(get(e->slot(1,1),lit1),lit52))));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t189=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit123),get(get(e->slot(1,1),lit1),lit53))));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t190=mul(e->slot(0,1),add(V(1.0),mul(get(e->slot(0,0),lit115),get(get(e->slot(1,1),lit1),lit46))));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t191=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit116),get(get(e->slot(1,1),lit1),lit47))));refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t192=mul(e->slot(0,1),sub(V(1.0),mul(get(e->slot(0,0),lit117),get(get(e->slot(1,1),lit1),lit48))));refs[0].put(std::move(t192));}
return call(e->slot(1,4),Args{e->slot(0,1),V(0.2),V(1.4)});
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t193=([&](){V t194=([&](){V t195=get(e->slot(0,1),lit77);return !truth(t195)?get(e->slot(0,1),lit76):t195;})();return !truth(t194)?V(1.0):t194;})();e->slot(0,3)=std::move(t193);}
{V t196=add(V(1.0),mul(sub(get(e->slot(0,1),lit85),V(1.0)),get(get(e->slot(1,1),lit1),lit13)));e->slot(0,4)=std::move(t196);}
{V t197=add(V(1.0),mul(sub(get(e->slot(0,1),lit86),V(1.0)),get(get(e->slot(1,1),lit1),lit14)));e->slot(0,5)=std::move(t197);}
{V t198=add(V(1.0),mul(sub(get(e->slot(0,1),lit89),V(1.0)),get(get(e->slot(1,1),lit1),lit16)));e->slot(0,6)=std::move(t198);}
{V t199=first(call(e->slot(1,38),Args{e->slot(0,1)}));e->slot(0,7)=std::move(t199);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit124)};V t200=e->slot(0,7);refs[0].put(std::move(t200));}
{V t201=V(0.0);e->slot(0,8)=std::move(t201);}
if(truth(ge(e->slot(0,0),V(2.0)))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t202=first(call(e->slot(2,4),Args{divv(([&](){V t203=get(e->slot(1,1),lit97);return !truth(t203)?V(0.0):t203;})(),first(call(get(e->get("math"),lit198),Args{get(get(e->slot(2,1),lit1),lit35),V(1.0)}))),V(-num(V(1.0))),V(1.0)}));e->slot(0,0)=std::move(t202);}
{V t204=first(call(e->slot(2,4),Args{divv(([&](){V t205=get(e->slot(1,1),lit96);return !truth(t205)?V(0.0):t205;})(),first(call(get(e->get("math"),lit198),Args{get(get(e->slot(2,1),lit1),lit35),V(1.0)}))),V(-num(V(1.0))),V(1.0)}));e->slot(0,1)=std::move(t204);}
{std::array<Ref,1> refs{Ref(e,1,8)};V t206=add(add(add(add(mul(get(e->slot(1,1),lit95),get(get(e->slot(2,1),lit1),lit20)),mul(e->slot(0,1),get(get(e->slot(2,1),lit1),lit37))),mul(e->slot(0,0),get(get(e->slot(2,1),lit1),lit36))),mul(get(e->slot(1,1),lit98),get(get(e->slot(2,1),lit1),lit21))),mul(get(e->slot(1,1),lit94),get(get(e->slot(2,1),lit1),lit19)));refs[0].put(std::move(t206));}
}
{V t207=([&](){V t208=([&](){V t209=get(e->slot(0,1),lit80);return !truth(t209)?get(e->slot(0,1),lit71):t209;})();return !truth(t208)?V(0.0):t208;})();e->slot(0,9)=std::move(t207);}
{V t210=([&](){V t211=([&](){V t212=get(e->slot(0,1),lit81);return !truth(t212)?get(e->slot(0,1),lit72):t212;})();return !truth(t211)?V(0.0):t211;})();e->slot(0,10)=std::move(t210);}
{V t213=V(1.0);e->slot(0,11)=std::move(t213);}
if(truth(gt(([&](){V t214=get(e->slot(0,1),lit82);return !truth(t214)?V(0.0):t214;})(),V(1.0)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t215=divv(V(1.0),add(V(1.0),mul(sub(([&](){V t216=get(e->slot(0,1),lit82);return !truth(t216)?V(0.0):t216;})(),V(1.0)),get(get(e->slot(1,1),lit1),lit32))));refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t217=first(call(e->slot(1,4),Args{e->slot(0,11),V(0.45),V(1.0)}));refs[0].put(std::move(t217));}
{V t218=mul(mul(mul(mul(mul(mul(e->slot(0,9),get(get(e->slot(1,1),lit1),lit2)),e->slot(0,3)),e->slot(0,4)),e->slot(0,6)),e->slot(0,7)),get(e->slot(0,1),lit127));e->slot(0,12)=std::move(t218);}
{V t219=mul(mul(mul(mul(add(mul(e->slot(0,10),get(get(e->slot(1,1),lit1),lit3)),e->slot(0,8)),e->slot(0,3)),e->slot(0,5)),e->slot(0,7)),get(e->slot(0,1),lit127));e->slot(0,13)=std::move(t219);}
{std::array<Ref,1> refs{Ref(e,0,12)};V t220=first(call(e->slot(1,4),Args{e->slot(0,12),V(-num(get(get(e->slot(1,1),lit1),lit4))),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e,0,13)};V t221=first(call(e->slot(1,4),Args{e->slot(0,13),V(-num(get(get(e->slot(1,1),lit1),lit4))),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit67)};V t222=e->slot(0,12);refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit68)};V t223=e->slot(0,13);refs[0].put(std::move(t223));}
{V t224=mul(get(get(e->slot(1,1),lit1),lit54),add(add(add(V(1.0),mul(first(call(e->slot(1,5),Args{get(e->slot(0,1),lit92)})),get(get(e->slot(1,1),lit1),lit18))),mul(([&](){V t225=get(e->slot(0,1),lit83);return !truth(t225)?V(0.0):t225;})(),V(0.18))),mul(([&](){V t226=get(e->slot(0,1),lit112);return !truth(t226)?V(0.0):t226;})(),get(get(e->slot(1,1),lit1),lit45))));e->slot(0,14)=std::move(t224);}
if(truth(lt(first(call(e->slot(1,5),Args{e->slot(0,12)})),first(call(e->slot(1,5),Args{get(e->slot(0,1),lit65)}))))){{std::array<Ref,1> refs{Ref(e,0,14)};V t227=get(get(e->slot(1,1),lit1),lit55);refs[0].put(std::move(t227));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit65)};V t228=first(call(e->slot(1,10),Args{get(e->slot(0,1),lit65),e->slot(0,12),e->slot(0,14),e->slot(0,2)}));refs[0].put(std::move(t228));}
{V t229=mul(get(get(e->slot(1,1),lit1),lit54),add(add(V(1.0),mul(([&](){V t230=get(e->slot(0,1),lit83);return !truth(t230)?V(0.0):t230;})(),V(0.12))),mul(first(call(e->slot(1,5),Args{([&](){V t231=get(e->slot(0,1),lit99);return !truth(t231)?V(0.0):t231;})()})),V(0.08))));e->slot(0,15)=std::move(t229);}
if(truth(lt(first(call(e->slot(1,5),Args{e->slot(0,13)})),first(call(e->slot(1,5),Args{get(e->slot(0,1),lit66)}))))){{std::array<Ref,1> refs{Ref(e,0,15)};V t232=get(get(e->slot(1,1),lit1),lit55);refs[0].put(std::move(t232));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit66)};V t233=first(call(e->slot(1,10),Args{get(e->slot(0,1),lit66),e->slot(0,13),e->slot(0,15),e->slot(0,2)}));refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit65)};V t234=first(call(e->slot(1,4),Args{get(e->slot(0,1),lit65),V(-num(get(get(e->slot(1,1),lit1),lit4))),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit66)};V t235=first(call(e->slot(1,4),Args{get(e->slot(0,1),lit66),V(-num(get(get(e->slot(1,1),lit1),lit4))),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t236=first(call(get(e->get("math"),lit183),Args{add(mul(get(e->slot(0,1),lit65),get(e->slot(0,1),lit65)),mul(get(e->slot(0,1),lit66),get(e->slot(0,1),lit66)))}));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t237=first(call(e->slot(1,4),Args{divv(get(e->slot(0,1),lit125),first(call(get(e->get("math"),lit198),Args{get(get(e->slot(1,1),lit1),lit41),V(1.0)}))),V(0.0),V(1.5)}));refs[0].put(std::move(t237));}
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t238=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,2)=std::move(t238);}
{V t239=get(get(e->slot(1,1),lit1),lit56);e->slot(0,3)=std::move(t239);}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit65)};V t240=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit65),V(0.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit66)};V t241=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit66),V(0.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t241));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit67)};V t242=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit67),V(0.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit68)};V t243=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit68),V(0.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit125)};V t244=first(call(get(e->get("math"),lit183),Args{add(mul(get(e->slot(0,2),lit65),get(e->slot(0,2),lit65)),mul(get(e->slot(0,2),lit66),get(e->slot(0,2),lit66)))}));refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit126)};V t245=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit126),V(0.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t245));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit124)};V t246=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit124),V(1.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit127)};V t247=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit127),V(1.0),e->slot(0,3),e->slot(0,1)}));refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit128)};V t248=V(false);refs[0].put(std::move(t248));}
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,6),Args{concat(lit331,e->slot(0,0)),([&](){V t249=get(e->slot(0,1),lit65);return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,6),Args{concat(lit332,e->slot(0,0)),([&](){V t250=get(e->slot(0,1),lit66);return !truth(t250)?V(0.0):t250;})()});
call(e->slot(1,6),Args{concat(lit333,e->slot(0,0)),([&](){V t251=get(e->slot(0,1),lit65);return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,6),Args{concat(lit334,e->slot(0,0)),([&](){V t252=get(e->slot(0,1),lit66);return !truth(t252)?V(0.0):t252;})()});
call(e->slot(1,6),Args{concat(lit335,e->slot(0,0)),([&](){V t253=get(e->slot(0,1),lit124);return !truth(t253)?V(1.0):t253;})()});
call(e->slot(1,6),Args{concat(lit336,e->slot(0,0)),([&](){V t254=get(e->slot(0,1),lit65);return !truth(t254)?V(0.0):t254;})()});
call(e->slot(1,6),Args{concat(lit337,e->slot(0,0)),([&](){V t255=get(e->slot(0,1),lit66);return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,6),Args{concat(lit338,e->slot(0,0)),([&](){V t256=get(e->slot(0,1),lit124);return !truth(t256)?V(1.0):t256;})()});
call(e->slot(1,6),Args{concat(lit339,e->slot(0,0)),([&](){V t257=get(e->slot(0,1),lit125);return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,6),Args{concat(lit340,e->slot(0,0)),([&](){V t258=get(e->slot(0,1),lit125);return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,6),Args{concat(lit341,e->slot(0,0)),([&](){V t259=get(e->slot(0,1),lit126);return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,6),Args{concat(lit342,e->slot(0,0)),([&](){V t260=get(e->slot(0,1),lit126);return !truth(t260)?V(0.0):t260;})()});
call(e->slot(1,6),Args{concat(lit343,e->slot(0,0)),([&](){V t261=get(e->slot(0,1),lit82);return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,6),Args{concat(lit344,e->slot(0,0)),([&](){V t262=get(e->slot(0,1),lit83);return !truth(t262)?V(0.0):t262;})()});
call(e->slot(1,6),Args{concat(lit345,e->slot(0,0)),([&](){V t263=get(e->slot(0,1),lit82);return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,6),Args{concat(lit346,e->slot(0,0)),([&](){V t264=get(e->slot(0,1),lit83);return !truth(t264)?V(0.0):t264;})()});
call(e->slot(1,6),Args{concat(lit347,e->slot(0,0)),([&](){V t265=get(e->slot(0,1),lit65);return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,6),Args{concat(lit348,e->slot(0,0)),([&](){V t266=get(e->slot(0,1),lit66);return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,6),Args{concat(lit349,e->slot(0,0)),([&](){V t267=get(e->slot(0,1),lit126);return !truth(t267)?V(0.0):t267;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit129),lit160))))){return Args{};
}
call(e->slot(1,6),Args{concat(lit350,e->slot(0,0)),([&](){V t268=get(e->slot(0,1),lit67);return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,6),Args{concat(lit351,e->slot(0,0)),([&](){V t269=get(e->slot(0,1),lit68);return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,6),Args{concat(lit352,e->slot(0,0)),([&](){V t270=get(e->slot(0,1),lit75);return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,6),Args{concat(lit353,e->slot(0,0)),([&](){V t271=get(e->slot(0,1),lit76);return !truth(t271)?V(0.0):t271;})()});
call(e->slot(1,6),Args{concat(lit354,e->slot(0,0)),([&](){V t272=([&](){V t273=get(e->slot(0,1),lit77);return !truth(t273)?get(e->slot(0,1),lit76):t273;})();return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,6),Args{concat(lit355,e->slot(0,0)),([&](){V t274=get(e->slot(0,1),lit78);return !truth(t274)?lit356:t274;})()});
call(e->slot(1,6),Args{concat(lit357,e->slot(0,0)),([&](){V t275=get(e->slot(0,1),lit80);return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,6),Args{concat(lit358,e->slot(0,0)),([&](){V t276=get(e->slot(0,1),lit81);return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,6),Args{concat(lit359,e->slot(0,0)),([&](){V t277=get(e->slot(0,1),lit127);return !truth(t277)?V(1.0):t277;})()});
call(e->slot(1,6),Args{concat(lit360,e->slot(0,0)),([&](){V t278=get(e->slot(0,1),lit90);return !truth(t278)?V(1.0):t278;})()});
call(e->slot(1,6),Args{concat(lit361,e->slot(0,0)),([&](){V t279=get(e->slot(0,1),lit91);return !truth(t279)?V(0.0):t279;})()});
call(e->slot(1,6),Args{concat(lit362,e->slot(0,0)),([&](){V t280=get(e->slot(0,1),lit87);return !truth(t280)?V(1.0):t280;})()});
call(e->slot(1,6),Args{concat(lit363,e->slot(0,0)),([&](){V t281=get(e->slot(0,1),lit88);return !truth(t281)?V(0.0):t281;})()});
call(e->slot(1,6),Args{concat(lit364,e->slot(0,0)),([&](){V t282=get(e->slot(0,1),lit94);return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,6),Args{concat(lit365,e->slot(0,0)),([&](){V t283=get(e->slot(0,1),lit95);return !truth(t283)?V(0.0):t283;})()});
call(e->slot(1,6),Args{concat(lit366,e->slot(0,0)),([&](){V t284=get(e->slot(0,1),lit96);return !truth(t284)?V(0.0):t284;})()});
call(e->slot(1,6),Args{concat(lit367,e->slot(0,0)),([&](){V t285=get(e->slot(0,1),lit97);return !truth(t285)?V(0.0):t285;})()});
call(e->slot(1,6),Args{concat(lit368,e->slot(0,0)),([&](){V t286=get(e->slot(0,1),lit101);return !truth(t286)?V(0.0):t286;})()});
call(e->slot(1,6),Args{concat(lit369,e->slot(0,0)),([&](){V t287=get(e->slot(0,1),lit100);return !truth(t287)?V(0.0):t287;})()});
call(e->slot(1,6),Args{concat(lit370,e->slot(0,0)),([&](){V t288=get(e->slot(0,1),lit102);return !truth(t288)?V(0.0):t288;})()});
call(e->slot(1,6),Args{concat(lit371,e->slot(0,0)),([&](){V t289=get(e->slot(0,1),lit103);return !truth(t289)?V(1.0):t289;})()});
call(e->slot(1,6),Args{concat(lit372,e->slot(0,0)),([&](){V t290=get(e->slot(0,1),lit104);return !truth(t290)?V(0.0):t290;})()});
call(e->slot(1,6),Args{concat(lit373,e->slot(0,0)),([&](){V t291=get(e->slot(0,1),lit106);return !truth(t291)?V(1.0):t291;})()});
call(e->slot(1,6),Args{concat(lit374,e->slot(0,0)),([&](){V t292=get(e->slot(0,1),lit108);return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,6),Args{concat(lit375,e->slot(0,0)),([&](){V t293=get(e->slot(0,1),lit109);return !truth(t293)?V(1.0):t293;})()});
call(e->slot(1,6),Args{concat(lit376,e->slot(0,0)),([&](){V t294=get(e->slot(0,1),lit111);return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,6),Args{concat(lit377,e->slot(0,0)),([&](){V t295=get(e->slot(0,1),lit114);return !truth(t295)?V(0.0):t295;})()});
call(e->slot(1,6),Args{concat(lit378,e->slot(0,0)),([&](){V t296=get(e->slot(0,1),lit116);return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,6),Args{concat(lit379,e->slot(0,0)),([&](){V t297=get(e->slot(0,1),lit118);return !truth(t297)?V(0.0):t297;})()});
call(e->slot(1,6),Args{concat(lit380,e->slot(0,0)),([&](){V t298=get(e->slot(0,1),lit123);return !truth(t298)?V(0.0):t298;})()});
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,6),Args{lit381,([&](){V t299=get(get(e->slot(1,1),lit129),lit157);return !truth(t299)?lit356:t299;})()});
call(e->slot(1,6),Args{lit382,([&](){V t300=get(get(e->slot(1,1),lit129),lit158);return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,6),Args{lit383,([&](){V t301=([&](){V t302=get(get(e->slot(1,1),lit129),lit146);return truth(t302)?V(1.0):t302;})();return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,6),Args{lit384,([&](){V t303=([&](){V t304=get(get(e->slot(1,1),lit129),lit147);return truth(t304)?V(1.0):t304;})();return !truth(t303)?V(0.0):t303;})()});
call(e->slot(1,6),Args{lit385,([&](){V t305=get(get(e->slot(1,1),lit129),lit148);return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,6),Args{lit386,([&](){V t306=get(get(e->slot(1,1),lit129),lit149);return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,6),Args{lit387,([&](){V t307=get(get(e->slot(1,1),lit129),lit150);return !truth(t307)?V(1.0):t307;})()});
call(e->slot(1,6),Args{lit388,([&](){V t308=get(get(e->slot(1,1),lit129),lit151);return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,6),Args{lit389,([&](){V t309=get(get(e->slot(1,1),lit129),lit152);return !truth(t309)?V(0.0):t309;})()});
call(e->slot(1,6),Args{lit390,([&](){V t310=get(get(e->slot(1,1),lit129),lit153);return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,6),Args{lit391,([&](){V t311=get(get(e->slot(1,1),lit129),lit154);return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,6),Args{lit392,([&](){V t312=get(get(e->slot(1,1),lit129),lit155);return !truth(t312)?V(0.0):t312;})()});
call(e->slot(1,6),Args{lit393,([&](){V t313=get(get(e->slot(1,1),lit129),lit156);return !truth(t313)?V(0.0):t313;})()});
call(e->slot(1,6),Args{lit394,([&](){V t314=get(get(e->slot(1,1),lit129),lit148);return !truth(t314)?V(0.0):t314;})()});
call(e->slot(1,6),Args{lit395,([&](){V t315=get(get(e->slot(1,1),lit129),lit149);return !truth(t315)?V(0.0):t315;})()});
call(e->slot(1,6),Args{lit396,([&](){V t316=get(get(e->slot(1,1),lit129),lit153);return !truth(t316)?V(0.0):t316;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit129),lit160))))){return Args{};
}
call(e->slot(1,6),Args{lit397,([&](){V t317=([&](){V t318=get(get(e->slot(1,1),lit129),lit131);return truth(t318)?V(1.0):t318;})();return !truth(t317)?V(0.0):t317;})()});
call(e->slot(1,6),Args{lit398,([&](){V t319=([&](){V t320=get(get(e->slot(1,1),lit129),lit132);return truth(t320)?V(1.0):t320;})();return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,6),Args{lit399,([&](){V t321=([&](){V t322=get(get(e->slot(1,1),lit129),lit133);return truth(t322)?V(1.0):t322;})();return !truth(t321)?V(0.0):t321;})()});
call(e->slot(1,6),Args{lit400,([&](){V t323=([&](){V t324=get(get(e->slot(1,1),lit129),lit134);return truth(t324)?V(1.0):t324;})();return !truth(t323)?V(0.0):t323;})()});
call(e->slot(1,6),Args{lit401,([&](){V t325=([&](){V t326=get(get(e->slot(1,1),lit129),lit135);return truth(t326)?V(1.0):t326;})();return !truth(t325)?V(0.0):t325;})()});
call(e->slot(1,6),Args{lit402,([&](){V t327=([&](){V t328=get(get(e->slot(1,1),lit129),lit136);return truth(t328)?V(1.0):t328;})();return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,6),Args{lit403,([&](){V t329=([&](){V t330=get(get(e->slot(1,1),lit129),lit137);return truth(t330)?V(1.0):t330;})();return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,6),Args{lit404,([&](){V t331=([&](){V t332=get(get(e->slot(1,1),lit129),lit138);return truth(t332)?V(1.0):t332;})();return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,6),Args{lit405,([&](){V t333=([&](){V t334=get(get(e->slot(1,1),lit129),lit139);return truth(t334)?V(1.0):t334;})();return !truth(t333)?V(0.0):t333;})()});
call(e->slot(1,6),Args{lit406,([&](){V t335=([&](){V t336=get(get(e->slot(1,1),lit129),lit140);return truth(t336)?V(1.0):t336;})();return !truth(t335)?V(0.0):t335;})()});
call(e->slot(1,6),Args{lit407,([&](){V t337=([&](){V t338=get(get(e->slot(1,1),lit129),lit141);return truth(t338)?V(1.0):t338;})();return !truth(t337)?V(0.0):t337;})()});
call(e->slot(1,6),Args{lit408,([&](){V t339=([&](){V t340=get(get(e->slot(1,1),lit129),lit142);return truth(t340)?V(1.0):t340;})();return !truth(t339)?V(0.0):t339;})()});
call(e->slot(1,6),Args{lit409,([&](){V t341=([&](){V t342=get(get(e->slot(1,1),lit129),lit143);return truth(t342)?V(1.0):t342;})();return !truth(t341)?V(0.0):t341;})()});
call(e->slot(1,6),Args{lit410,([&](){V t343=([&](){V t344=get(get(e->slot(1,1),lit129),lit144);return truth(t344)?V(1.0):t344;})();return !truth(t343)?V(0.0):t343;})()});
call(e->slot(1,6),Args{lit411,([&](){V t345=([&](){V t346=get(get(e->slot(1,1),lit129),lit145);return truth(t346)?V(1.0):t346;})();return !truth(t345)?V(0.0):t345;})()});
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t347=num(V(0.0)),t348=num(V(3.0)),t349=num(V(1.0));for(double t350=t347;(t349>0?t350<=t348:t350>=t348);t350+=t349){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t350);call(e->slot(2,41),Args{e->slot(0,0),get(get(e->slot(2,1),lit64),e->slot(0,0))});
}}
call(e->slot(1,42),Args{});
return Args{};});
Ref(e->slot(0,1),lit412).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit157)};V t351=lit79;refs[0].put(std::move(t351));}
call(e->slot(1,43),Args{});
return Args{};}));
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,71);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t352=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,3)=std::move(t352);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit128)};V t353=ne(e->slot(0,1),V());refs[0].put(std::move(t353));}
{Args t354=call(e->slot(1,17),Args{e->slot(0,0),e->slot(0,1)});e->slot(0,4)=arg(t354,0);e->slot(0,5)=arg(t354,1);e->slot(0,6)=arg(t354,2);e->slot(0,7)=arg(t354,3);e->slot(0,8)=arg(t354,4);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit69)};V t355=e->slot(0,4);refs[0].put(std::move(t355));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit70)};V t356=e->slot(0,5);refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit73)};V t357=sub(e->slot(0,6),([&](){V t358=get(e->slot(0,3),lit71);return !truth(t358)?V(0.0):t358;})());refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit74)};V t359=sub(e->slot(0,7),([&](){V t360=get(e->slot(0,3),lit72);return !truth(t360)?V(0.0):t360;})());refs[0].put(std::move(t359));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit71)};V t361=e->slot(0,6);refs[0].put(std::move(t361));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit72)};V t362=e->slot(0,7);refs[0].put(std::move(t362));}
{Args t363=call(e->slot(1,19),Args{e->slot(0,0),e->slot(0,6),e->slot(0,7)});e->slot(0,9)=arg(t363,0);e->slot(0,10)=arg(t363,1);e->slot(0,11)=arg(t363,2);e->slot(0,12)=arg(t363,3);e->slot(0,13)=arg(t363,4);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit80)};V t364=e->slot(0,9);refs[0].put(std::move(t364));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit81)};V t365=e->slot(0,10);refs[0].put(std::move(t365));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit82)};V t366=e->slot(0,11);refs[0].put(std::move(t366));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit83)};V t367=e->slot(0,12);refs[0].put(std::move(t367));}
{Args t368=call(e->slot(1,22),Args{e->slot(0,1),e->slot(0,0)});e->slot(0,14)=arg(t368,0);e->slot(0,15)=arg(t368,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit75)};V t369=e->slot(0,14);refs[0].put(std::move(t369));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit78)};V t370=e->slot(0,15);refs[0].put(std::move(t370));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit76)};V t371=first(call(e->slot(1,36),Args{e->slot(0,14)}));refs[0].put(std::move(t371));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit77)};V t372=first(call(e->slot(1,37),Args{get(e->slot(0,3),lit76)}));refs[0].put(std::move(t372));}
{Args t373=call(e->slot(1,23),Args{e->slot(0,0)});e->slot(0,16)=arg(t373,0);e->slot(0,17)=arg(t373,1);e->slot(0,18)=arg(t373,2);e->slot(0,19)=arg(t373,3);e->slot(0,20)=arg(t373,4);e->slot(0,21)=arg(t373,5);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit84)};V t374=e->slot(0,16);refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit85)};V t375=e->slot(0,17);refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit86)};V t376=e->slot(0,18);refs[0].put(std::move(t376));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit87)};V t377=e->slot(0,19);refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit88)};V t378=e->slot(0,20);refs[0].put(std::move(t378));}
{Args t379=call(e->slot(1,24),Args{e->slot(0,0)});e->slot(0,22)=arg(t379,0);e->slot(0,23)=arg(t379,1);e->slot(0,24)=arg(t379,2);e->slot(0,25)=arg(t379,3);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit90)};V t380=e->slot(0,22);refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit91)};V t381=e->slot(0,23);refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit92)};V t382=e->slot(0,24);refs[0].put(std::move(t382));}
{Args t383=call(e->slot(1,25),Args{e->slot(0,0)});e->slot(0,26)=arg(t383,0);e->slot(0,27)=arg(t383,1);e->slot(0,28)=arg(t383,2);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit93)};V t384=e->slot(0,26);refs[0].put(std::move(t384));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit413)};V t385=e->slot(0,27);refs[0].put(std::move(t385));}
{Args t386=call(e->slot(1,26),Args{e->slot(0,0)});e->slot(0,29)=arg(t386,0);e->slot(0,30)=arg(t386,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit89)};V t387=e->slot(0,29);refs[0].put(std::move(t387));}
{Args t388=call(e->slot(1,27),Args{e->slot(0,0)});e->slot(0,31)=arg(t388,0);e->slot(0,32)=arg(t388,1);e->slot(0,33)=arg(t388,2);e->slot(0,34)=arg(t388,3);e->slot(0,35)=arg(t388,4);e->slot(0,36)=arg(t388,5);e->slot(0,37)=arg(t388,6);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit95)};V t389=e->slot(0,31);refs[0].put(std::move(t389));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit96)};V t390=e->slot(0,35);refs[0].put(std::move(t390));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit97)};V t391=e->slot(0,36);refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit98)};V t392=e->slot(0,32);refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit94)};V t393=e->slot(0,33);refs[0].put(std::move(t393));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit99)};V t394=e->slot(0,37);refs[0].put(std::move(t394));}
{Args t395=call(e->slot(1,28),Args{e->slot(0,0)});e->slot(0,38)=arg(t395,0);e->slot(0,39)=arg(t395,1);e->slot(0,40)=arg(t395,2);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit100)};V t396=e->slot(0,38);refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit101)};V t397=e->slot(0,39);refs[0].put(std::move(t397));}
{Args t398=call(e->slot(1,29),Args{e->slot(0,0)});e->slot(0,41)=arg(t398,0);e->slot(0,42)=arg(t398,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit102)};V t399=e->slot(0,41);refs[0].put(std::move(t399));}
{Args t400=call(e->slot(1,30),Args{e->slot(0,0)});e->slot(0,43)=arg(t400,0);e->slot(0,44)=arg(t400,1);e->slot(0,45)=arg(t400,2);e->slot(0,46)=arg(t400,3);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit103)};V t401=e->slot(0,43);refs[0].put(std::move(t401));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit104)};V t402=e->slot(0,44);refs[0].put(std::move(t402));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit105)};V t403=e->slot(0,45);refs[0].put(std::move(t403));}
{Args t404=call(e->slot(1,31),Args{e->slot(0,0)});e->slot(0,47)=arg(t404,0);e->slot(0,48)=arg(t404,1);e->slot(0,49)=arg(t404,2);e->slot(0,50)=arg(t404,3);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit106)};V t405=e->slot(0,47);refs[0].put(std::move(t405));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit107)};V t406=e->slot(0,48);refs[0].put(std::move(t406));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit108)};V t407=e->slot(0,49);refs[0].put(std::move(t407));}
{Args t408=call(e->slot(1,32),Args{e->slot(0,0)});e->slot(0,51)=arg(t408,0);e->slot(0,52)=arg(t408,1);e->slot(0,53)=arg(t408,2);e->slot(0,54)=arg(t408,3);e->slot(0,55)=arg(t408,4);e->slot(0,56)=arg(t408,5);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit109)};V t409=e->slot(0,51);refs[0].put(std::move(t409));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit110)};V t410=e->slot(0,52);refs[0].put(std::move(t410));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit111)};V t411=e->slot(0,53);refs[0].put(std::move(t411));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit112)};V t412=e->slot(0,54);refs[0].put(std::move(t412));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit113)};V t413=e->slot(0,55);refs[0].put(std::move(t413));}
{Args t414=call(e->slot(1,33),Args{e->slot(0,0)});e->slot(0,57)=arg(t414,0);e->slot(0,58)=arg(t414,1);e->slot(0,59)=arg(t414,2);e->slot(0,60)=arg(t414,3);e->slot(0,61)=arg(t414,4);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit114)};V t415=e->slot(0,57);refs[0].put(std::move(t415));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit115)};V t416=e->slot(0,58);refs[0].put(std::move(t416));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit116)};V t417=e->slot(0,59);refs[0].put(std::move(t417));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit117)};V t418=e->slot(0,60);refs[0].put(std::move(t418));}
{Args t419=call(e->slot(1,34),Args{e->slot(0,0)});e->slot(0,62)=arg(t419,0);e->slot(0,63)=arg(t419,1);e->slot(0,64)=arg(t419,2);e->slot(0,65)=arg(t419,3);e->slot(0,66)=arg(t419,4);e->slot(0,67)=arg(t419,5);e->slot(0,68)=arg(t419,6);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit118)};V t420=e->slot(0,62);refs[0].put(std::move(t420));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit119)};V t421=e->slot(0,63);refs[0].put(std::move(t421));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit120)};V t422=e->slot(0,64);refs[0].put(std::move(t422));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit121)};V t423=e->slot(0,65);refs[0].put(std::move(t423));}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit122)};V t424=e->slot(0,66);refs[0].put(std::move(t424));}
{Args t425=call(e->slot(1,35),Args{e->slot(0,0)});e->slot(0,69)=arg(t425,0);e->slot(0,70)=arg(t425,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),lit123)};V t426=e->slot(0,69);refs[0].put(std::move(t426));}
call(e->slot(1,39),Args{e->slot(0,0),e->slot(0,3),e->slot(0,2)});
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit131)};V t427=([&](){V t428=([&](){V t429=get(get(e->slot(1,1),lit129),lit131);return !truth(t429)?e->slot(0,8):t429;})();return !truth(t428)?e->slot(0,13):t428;})();refs[0].put(std::move(t427));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit132)};V t430=([&](){V t431=get(get(e->slot(1,1),lit129),lit132);return !truth(t431)?e->slot(0,21):t431;})();refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit133)};V t432=([&](){V t433=get(get(e->slot(1,1),lit129),lit133);return !truth(t433)?e->slot(0,25):t433;})();refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit134)};V t434=([&](){V t435=get(get(e->slot(1,1),lit129),lit134);return !truth(t435)?e->slot(0,28):t435;})();refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit135)};V t436=([&](){V t437=get(get(e->slot(1,1),lit129),lit135);return !truth(t437)?e->slot(0,30):t437;})();refs[0].put(std::move(t436));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit136)};V t438=([&](){V t439=get(get(e->slot(1,1),lit129),lit136);return !truth(t439)?e->slot(0,34):t439;})();refs[0].put(std::move(t438));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit137)};V t440=([&](){V t441=get(get(e->slot(1,1),lit129),lit137);return !truth(t441)?ne(e->slot(0,33),V(0.0)):t441;})();refs[0].put(std::move(t440));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit138)};V t442=([&](){V t443=get(get(e->slot(1,1),lit129),lit138);return !truth(t443)?e->slot(0,40):t443;})();refs[0].put(std::move(t442));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit139)};V t444=([&](){V t445=get(get(e->slot(1,1),lit129),lit139);return !truth(t445)?e->slot(0,46):t445;})();refs[0].put(std::move(t444));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit140)};V t446=([&](){V t447=get(get(e->slot(1,1),lit129),lit140);return !truth(t447)?e->slot(0,50):t447;})();refs[0].put(std::move(t446));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit141)};V t448=([&](){V t449=get(get(e->slot(1,1),lit129),lit141);return !truth(t449)?e->slot(0,56):t449;})();refs[0].put(std::move(t448));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit142)};V t450=([&](){V t451=get(get(e->slot(1,1),lit129),lit142);return !truth(t451)?e->slot(0,61):t451;})();refs[0].put(std::move(t450));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit143)};V t452=([&](){V t453=get(get(e->slot(1,1),lit129),lit143);return !truth(t453)?e->slot(0,67):t453;})();refs[0].put(std::move(t452));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit144)};V t454=([&](){V t455=get(get(e->slot(1,1),lit129),lit144);return !truth(t455)?e->slot(0,68):t455;})();refs[0].put(std::move(t454));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit145)};V t456=([&](){V t457=get(get(e->slot(1,1),lit129),lit145);return !truth(t457)?e->slot(0,70):t457;})();refs[0].put(std::move(t456));}
return Args{};});
e->slot(0,45)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit131)};V t458=V(false);refs[0].put(std::move(t458));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit132)};V t459=V(false);refs[0].put(std::move(t459));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit133)};V t460=V(false);refs[0].put(std::move(t460));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit134)};V t461=V(false);refs[0].put(std::move(t461));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit135)};V t462=V(false);refs[0].put(std::move(t462));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit136)};V t463=V(false);refs[0].put(std::move(t463));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit137)};V t464=V(false);refs[0].put(std::move(t464));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit138)};V t465=V(false);refs[0].put(std::move(t465));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit139)};V t466=V(false);refs[0].put(std::move(t466));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit140)};V t467=V(false);refs[0].put(std::move(t467));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit141)};V t468=V(false);refs[0].put(std::move(t468));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit142)};V t469=V(false);refs[0].put(std::move(t469));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit143)};V t470=V(false);refs[0].put(std::move(t470));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit144)};V t471=V(false);refs[0].put(std::move(t471));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit145)};V t472=V(false);refs[0].put(std::move(t472));}
return Args{};});
e->slot(0,46)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;{V t473=V(0.0);e->slot(0,0)=std::move(t473);}
{V t474=V(0.0);e->slot(0,1)=std::move(t474);}
{V t475=V(0.0);e->slot(0,2)=std::move(t475);}
{V t476=V(0.0);e->slot(0,3)=std::move(t476);}
{V t477=V(0.0);e->slot(0,4)=std::move(t477);}
{V t478=V(0.0);e->slot(0,5)=std::move(t478);}
{V t479=V(0.0);e->slot(0,6)=std::move(t479);}
{V t480=V(0.0);e->slot(0,7)=std::move(t480);}
{V t481=V(0.0);e->slot(0,8)=std::move(t481);}
{double t482=num(V(0.0)),t483=num(V(3.0)),t484=num(V(1.0));for(double t485=t482;(t484>0?t485<=t483:t485>=t483);t485+=t484){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t485);{V t486=get(get(e->slot(2,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t486);}
{std::array<Ref,1> refs{Ref(e,1,0)};V t487=add(e->slot(1,0),first(call(e->slot(2,5),Args{get(e->slot(0,1),lit65)})));refs[0].put(std::move(t487));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t488=add(e->slot(1,1),first(call(e->slot(2,5),Args{get(e->slot(0,1),lit66)})));refs[0].put(std::move(t488));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t489=add(e->slot(1,2),([&](){V t490=get(e->slot(0,1),lit124);return !truth(t490)?V(1.0):t490;})());refs[0].put(std::move(t489));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t491=add(e->slot(1,3),([&](){V t492=get(e->slot(0,1),lit82);return !truth(t492)?V(0.0):t492;})());refs[0].put(std::move(t491));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t493=add(e->slot(1,4),([&](){V t494=get(e->slot(0,1),lit83);return !truth(t494)?V(0.0):t494;})());refs[0].put(std::move(t493));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t495=add(e->slot(1,5),([&](){V t496=get(e->slot(0,1),lit126);return !truth(t496)?V(0.0):t496;})());refs[0].put(std::move(t495));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t497=first(call(get(e->get("math"),lit198),Args{e->slot(1,6),([&](){V t498=get(e->slot(0,1),lit125);return !truth(t498)?V(0.0):t498;})()}));refs[0].put(std::move(t497));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t499=first(call(get(e->get("math"),lit198),Args{e->slot(1,7),([&](){V t500=get(e->slot(0,1),lit126);return !truth(t500)?V(0.0):t500;})()}));refs[0].put(std::move(t499));}
if(truth(get(e->slot(0,1),lit128))){{std::array<Ref,1> refs{Ref(e,1,8)};V t501=add(e->slot(1,8),V(1.0));refs[0].put(std::move(t501));}
}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit148)};V t502=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t502));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit149)};V t503=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t503));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit150)};V t504=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t504));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit151)};V t505=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t505));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit152)};V t506=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t506));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit153)};V t507=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t507));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit154)};V t508=e->slot(0,6);refs[0].put(std::move(t508));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit155)};V t509=e->slot(0,7);refs[0].put(std::move(t509));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit156)};V t510=e->slot(0,8);refs[0].put(std::move(t510));}
return Args{};});
Ref(e->slot(0,1),lit414).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit158)};V t511=add(([&](){V t512=get(get(e->slot(1,1),lit129),lit158);return !truth(t512)?V(0.0):t512;})(),V(1.0));refs[0].put(std::move(t511));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t513=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t513));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit157)};V t514=lit415;refs[0].put(std::move(t514));}
call(e->slot(1,42),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t515=first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit58),get(get(e->slot(1,1),lit1),lit57)}));refs[0].put(std::move(t515));}
call(e->slot(1,16),Args{e->slot(0,0)});
call(e->slot(1,45),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t516=([&](){V t517=e->slot(0,1);return !truth(t517)?first(call(e->slot(1,13),Args{})):t517;})();refs[0].put(std::move(t516));}
{V t518=first(call(e->slot(1,14),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t518);}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit157)};V t519=lit416;refs[0].put(std::move(t519));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit146)};V t520=V(false);refs[0].put(std::move(t520));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit147)};V t521=V(true);refs[0].put(std::move(t521));}
{double t522=num(V(0.0)),t523=num(V(3.0)),t524=num(V(1.0));for(double t525=t522;(t524>0?t525<=t523:t525>=t523);t525+=t524){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t525);call(e->slot(2,44),Args{e->slot(0,0),V(),e->slot(1,0)});
call(e->slot(2,40),Args{e->slot(0,0),e->slot(1,0)});
call(e->slot(2,41),Args{e->slot(0,0),get(get(e->slot(2,1),lit64),e->slot(0,0))});
}}
call(e->slot(1,46),Args{});
call(e->slot(1,42),Args{});
return Args{};
}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit157)};V t526=lit417;refs[0].put(std::move(t526));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit146)};V t527=V(false);refs[0].put(std::move(t527));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit147)};V t528=V(true);refs[0].put(std::move(t528));}
{double t529=num(V(0.0)),t530=num(V(3.0)),t531=num(V(1.0));for(double t532=t529;(t531>0?t532<=t530:t532>=t530);t532+=t531){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t532);call(e->slot(2,44),Args{e->slot(0,0),V(),e->slot(1,0)});
call(e->slot(2,40),Args{e->slot(0,0),e->slot(1,0)});
call(e->slot(2,41),Args{e->slot(0,0),get(get(e->slot(2,1),lit64),e->slot(0,0))});
}}
call(e->slot(1,46),Args{});
call(e->slot(1,42),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit157)};V t533=lit418;refs[0].put(std::move(t533));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit146)};V t534=V(true);refs[0].put(std::move(t534));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit129),lit147)};V t535=V(false);refs[0].put(std::move(t535));}
{double t536=num(V(0.0)),t537=num(V(3.0)),t538=num(V(1.0));for(double t539=t536;(t538>0?t539<=t537:t539>=t537);t539+=t538){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t539);{V t540=first(call(e->slot(2,15),Args{e->slot(1,3),e->slot(0,0)}));e->slot(0,1)=std::move(t540);}
if(truth(e->slot(0,1))){call(e->slot(2,44),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0)});
}else{call(e->slot(2,44),Args{e->slot(0,0),V(),e->slot(1,0)});
call(e->slot(2,40),Args{e->slot(0,0),e->slot(1,0)});
}
call(e->slot(2,41),Args{e->slot(0,0),get(get(e->slot(2,1),lit64),e->slot(0,0))});
}}
call(e->slot(1,46),Args{});
call(e->slot(1,42),Args{});
return Args{};}));
Ref(e->slot(0,1),lit419).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit64)};
}
return Args{get(get(e->slot(1,1),lit64),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit420).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t541=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t541);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t542=get(e->slot(0,1),lit65);return !truth(t542)?V(0.0):t542;})()};
return Args{};}));
Ref(e->slot(0,1),lit421).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t543=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t543);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t544=get(e->slot(0,1),lit66);return !truth(t544)?V(0.0):t544;})()};
return Args{};}));
Ref(e->slot(0,1),lit422).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t545=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t545);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t546=get(e->slot(0,1),lit125);return !truth(t546)?V(0.0):t546;})()};
return Args{};}));
Ref(e->slot(0,1),lit423).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t547=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t547);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t548=get(e->slot(0,1),lit126);return !truth(t548)?V(0.0):t548;})()};
return Args{};}));
Ref(e->slot(0,1),lit424).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t549=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t549);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t550=get(e->slot(0,1),lit82);return !truth(t550)?V(0.0):t550;})()};
return Args{};}));
Ref(e->slot(0,1),lit425).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t551=get(get(e->slot(1,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t551);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
return Args{([&](){V t552=get(e->slot(0,1),lit83);return !truth(t552)?V(0.0):t552;})()};
return Args{};}));
Ref(e->slot(0,1),lit426).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit129)};
}
return Args{get(get(e->slot(1,1),lit64),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit427).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t553=([&](){V t554=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t554)?V(0.0):t554;})();e->slot(0,0)=std::move(t553);}
{V t555=get(get(e->slot(2,1),lit64),e->slot(0,0));e->slot(0,1)=std::move(t555);}
if(truth(V(!truth(e->slot(0,1))))){return Args{lit428};
}
return call(get(e->get("string"),lit429),Args{concat(lit430,concat(lit431,concat(lit432,concat(lit433,concat(lit434,lit435))))),([&](){V t556=get(e->slot(2,2),e->slot(0,0));return !truth(t556)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t556;})(),([&](){V t557=get(e->slot(0,1),lit65);return !truth(t557)?V(0.0):t557;})(),([&](){V t558=get(e->slot(0,1),lit66);return !truth(t558)?V(0.0):t558;})(),([&](){V t559=get(e->slot(0,1),lit124);return !truth(t559)?V(1.0):t559;})(),([&](){V t560=get(e->slot(0,1),lit126);return !truth(t560)?V(0.0):t560;})(),([&](){V t561=get(e->slot(0,1),lit71);return !truth(t561)?V(0.0):t561;})(),([&](){V t562=get(e->slot(0,1),lit72);return !truth(t562)?V(0.0):t562;})(),([&](){V t563=get(e->slot(0,1),lit80);return !truth(t563)?V(0.0):t563;})(),([&](){V t564=get(e->slot(0,1),lit81);return !truth(t564)?V(0.0):t564;})(),([&](){V t565=get(e->slot(0,1),lit82);return !truth(t565)?V(0.0):t565;})(),([&](){V t566=get(e->slot(0,1),lit83);return !truth(t566)?V(0.0):t566;})(),([&](){V t567=get(e->slot(0,1),lit75);return !truth(t567)?V(0.0):t567;})(),first(call(e->get("tostring"),Args{([&](){V t568=get(e->slot(0,1),lit78);return !truth(t568)?lit436:t568;})()})),([&](){V t569=([&](){V t570=get(e->slot(0,1),lit77);return !truth(t570)?get(e->slot(0,1),lit76):t570;})();return !truth(t569)?V(0.0):t569;})(),([&](){V t571=get(e->slot(0,1),lit90);return !truth(t571)?V(1.0):t571;})(),([&](){V t572=get(e->slot(0,1),lit91);return !truth(t572)?V(0.0):t572;})(),([&](){V t573=get(e->slot(0,1),lit87);return !truth(t573)?V(1.0):t573;})(),([&](){V t574=get(e->slot(0,1),lit89);return !truth(t574)?V(1.0):t574;})(),([&](){V t575=get(e->slot(0,1),lit95);return !truth(t575)?V(0.0):t575;})(),([&](){V t576=get(e->slot(0,1),lit96);return !truth(t576)?V(0.0):t576;})(),([&](){V t577=get(e->slot(0,1),lit97);return !truth(t577)?V(0.0):t577;})(),([&](){V t578=get(e->slot(0,1),lit94);return !truth(t578)?V(0.0):t578;})(),([&](){V t579=get(e->slot(0,1),lit102);return !truth(t579)?V(0.0):t579;})(),([&](){V t580=get(e->slot(0,1),lit109);return !truth(t580)?V(1.0):t580;})(),([&](){V t581=get(e->slot(0,1),lit111);return !truth(t581)?V(0.0):t581;})(),([&](){V t582=get(e->slot(0,1),lit114);return !truth(t582)?V(0.0):t582;})(),([&](){V t583=get(e->slot(0,1),lit116);return !truth(t583)?V(0.0):t583;})()});
}
return call(get(e->get("string"),lit429),Args{concat(lit437,concat(lit438,concat(lit439,lit440))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit129),lit157)})),([&](){V t584=get(get(e->slot(1,1),lit129),lit158);return !truth(t584)?V(0.0):t584;})(),([&](){V t585=([&](){V t586=get(get(e->slot(1,1),lit129),lit146);return truth(t586)?lit441:t586;})();return !truth(t585)?lit436:t585;})(),([&](){V t587=([&](){V t588=get(get(e->slot(1,1),lit129),lit147);return truth(t588)?lit442:t588;})();return !truth(t587)?lit443:t587;})(),([&](){V t589=get(get(get(e->slot(1,1),lit64),V(0.0)),lit65);return !truth(t589)?V(0.0):t589;})(),([&](){V t590=get(get(get(e->slot(1,1),lit64),V(1.0)),lit65);return !truth(t590)?V(0.0):t590;})(),([&](){V t591=get(get(get(e->slot(1,1),lit64),V(2.0)),lit65);return !truth(t591)?V(0.0):t591;})(),([&](){V t592=get(get(get(e->slot(1,1),lit64),V(3.0)),lit65);return !truth(t592)?V(0.0):t592;})(),([&](){V t593=get(get(get(e->slot(1,1),lit64),V(0.0)),lit66);return !truth(t593)?V(0.0):t593;})(),([&](){V t594=get(get(get(e->slot(1,1),lit64),V(1.0)),lit66);return !truth(t594)?V(0.0):t594;})(),([&](){V t595=get(get(get(e->slot(1,1),lit64),V(2.0)),lit66);return !truth(t595)?V(0.0):t595;})(),([&](){V t596=get(get(get(e->slot(1,1),lit64),V(3.0)),lit66);return !truth(t596)?V(0.0):t596;})(),([&](){V t597=get(get(e->slot(1,1),lit129),lit151);return !truth(t597)?V(0.0):t597;})(),([&](){V t598=get(get(e->slot(1,1),lit129),lit152);return !truth(t598)?V(0.0):t598;})(),([&](){V t599=get(get(e->slot(1,1),lit129),lit153);return !truth(t599)?V(0.0):t599;})(),([&](){V t600=get(get(e->slot(1,1),lit129),lit154);return !truth(t600)?V(0.0):t600;})(),([&](){V t601=([&](){V t602=get(get(e->slot(1,1),lit129),lit131);return truth(t602)?lit441:t602;})();return !truth(t601)?lit436:t601;})(),([&](){V t603=([&](){V t604=get(get(e->slot(1,1),lit129),lit132);return truth(t604)?lit441:t604;})();return !truth(t603)?lit436:t603;})(),([&](){V t605=([&](){V t606=get(get(e->slot(1,1),lit129),lit133);return truth(t606)?lit441:t606;})();return !truth(t605)?lit436:t605;})(),([&](){V t607=([&](){V t608=get(get(e->slot(1,1),lit129),lit134);return truth(t608)?lit441:t608;})();return !truth(t607)?lit436:t607;})(),([&](){V t609=([&](){V t610=get(get(e->slot(1,1),lit129),lit135);return truth(t610)?lit441:t610;})();return !truth(t609)?lit436:t609;})(),([&](){V t611=([&](){V t612=get(get(e->slot(1,1),lit129),lit136);return truth(t612)?lit441:t612;})();return !truth(t611)?lit436:t611;})(),([&](){V t613=([&](){V t614=get(get(e->slot(1,1),lit129),lit137);return truth(t614)?lit441:t614;})();return !truth(t613)?lit436:t613;})(),([&](){V t615=([&](){V t616=get(get(e->slot(1,1),lit129),lit138);return truth(t616)?lit441:t616;})();return !truth(t615)?lit436:t615;})(),([&](){V t617=([&](){V t618=get(get(e->slot(1,1),lit129),lit141);return truth(t618)?lit441:t618;})();return !truth(t617)?lit436:t617;})(),([&](){V t619=([&](){V t620=get(get(e->slot(1,1),lit129),lit142);return truth(t620)?lit441:t620;})();return !truth(t619)?lit436:t619;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
