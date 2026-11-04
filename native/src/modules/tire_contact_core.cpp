// Generated native C++ from pinned tire_contact_core.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("loadRef");
static const V lit7("minGroundLoad");
static const V lit8("contactLoadStart");
static const V lit9("contactLoadFull");
static const V lit10("slipRatioSoft");
static const V lit11("slipRatioHard");
static const V lit12("slipAngleSoft");
static const V lit13("slipAngleHard");
static const V lit14("contactRiseTau");
static const V lit15("contactFallTau");
static const V lit16("gripRiseTau");
static const V lit17("gripFallTau");
static const V lit18("energyBuildTau");
static const V lit19("energyDecayTau");
static const V lit20("loadTau");
static const V lit21("externalTau");
static const V lit22("minSpeedKmh");
static const V lit23("minRollingContact");
static const V lit24("driftGripFloor");
static const V lit25("integratedLoadInfluence");
static const V lit26("tireMemoryGripLoss");
static const V lit27("tireHopContactLoss");
static const V lit28("armGeometryContactLoss");
static const V lit29("lsdRearEnergyGain");
static const V lit30("driveRearEnergyGain");
static const V lit31("contactQualityInfluence");
static const V lit32("contactLossInfluence");
static const V lit33("contactTrustInfluence");
static const V lit34("carcassSupportInfluence");
static const V lit35("carcassGripGateInfluence");
static const V lit36("carcassDelayGripLoss");
static const V lit37("complianceDelayGripLoss");
static const V lit38("recoveryGripGain");
static const V lit39("snapGripLoss");
static const V lit40("roadShockEnergyGain");
static const V lit41("roadSurfaceGripLoss");
static const V lit42("loadPathLossGripLoss");
static const V lit43("thermalGripLoss");
static const V lit44("maxSlipEnergy");
static const V lit45("maxLoad");
static const V lit46("unavailableDecayTau");
static const V lit47("debugStoreInterval");
static const V lit48("contact");
static const V lit49("grip");
static const V lit50("load");
static const V lit51("loadN");
static const V lit52("slipRatio");
static const V lit53("slipAngle");
static const V lit54("slipState");
static const V lit55("patchEnergy");
static const V lit56("grounded");
static const V lit57("memory");
static const V lit58("hop");
static const V lit59("armCamber");
static const V lit60("armToe");
static const V lit61("contactQuality");
static const V lit62("contactTrust");
static const V lit63("contactLoss");
static const V lit64("carcassSupport");
static const V lit65("carcassGripGate");
static const V lit66("carcassDelay");
static const V lit67("carcassEnergy");
static const V lit68("tireCompliance");
static const V lit69("relaxScale");
static const V lit70("recovery");
static const V lit71("gripReturn");
static const V lit72("snapRisk");
static const V lit73("roadShock");
static const V lit74("surfaceLimit");
static const V lit75("pathLoss");
static const V lit76("tireDelivery");
static const V lit77("thermalStress");
static const V lit78("avgContact");
static const V lit79("avgGrip");
static const V lit80("avgEnergy");
static const V lit81("avgLoad");
static const V lit82("minGrip");
static const V lit83("maxEnergy");
static const V lit84("groundedCount");
static const V lit85("speedKmh");
static const V lit86("status");
static const V lit87("INIT");
static const V lit88("updateCount");
static const V lit89("wheelsValid");
static const V lit90("storeOnly");
static const V lit91("loadLinked");
static const V lit92("memoryLinked");
static const V lit93("hopLinked");
static const V lit94("armLinked");
static const V lit95("drivetrainLinked");
static const V lit96("lsdLinked");
static const V lit97("contactQualityLinked");
static const V lit98("carcassLinked");
static const V lit99("complianceLinked");
static const V lit100("recoveryLinked");
static const V lit101("roadLinked");
static const V lit102("loadPathLinked");
static const V lit103("thermalLinked");
static const V lit104("debugStoreTimer");
static const V lit105("debugStoreNow");
static const V lit106("state");
static const V lit107("debug");
static const V lit108("huge");
static const V lit109("abs");
static const V lit110("exp");
static const V lit111("safeLoadRaw");
static const V lit112("safeStore");
static const V lit113("safeField");
static const V lit114("getCar");
static const V lit115("wheels");
static const V lit116("ngp_hub_speed_kmh");
static const V lit117("ngp_speed_kmh");
static const V lit118("loadK");
static const V lit119("ngp_wheel_load_");
static const V lit120("ngp_load_wheel_");
static const V lit121("ngp_hub_wheel_load_");
static const V lit122("ngp_tire_load_input_");
static const V lit123("ngp_contact_load_");
static const V lit124("ngp_tire_state_load_");
static const V lit125("ngp_dlt_load_");
static const V lit126("ngp_contact_slip_ratio_");
static const V lit127("ngp_tire_slip_ratio_");
static const V lit128("ngp_slip_ratio_");
static const V lit129("ngp_filtered_slip_ratio_");
static const V lit130("ngp_memory_slip_ratio_");
static const V lit131("ngp_tire_carcass_slip_ratio_");
static const V lit132("ngp_contact_slip_angle_");
static const V lit133("ngp_tire_slip_angle_");
static const V lit134("ngp_slip_angle_");
static const V lit135("ngp_filtered_slip_angle_");
static const V lit136("ngp_memory_slip_angle_");
static const V lit137("ngp_tire_carcass_slip_angle_");
static const V lit138("ngp_tire_memory_");
static const V lit139("ngp_rubber_memory_");
static const V lit140("ngp_memory_");
static const V lit141("ngp_slide_memory_");
static const V lit142("ngp_slip_slide_memory_");
static const V lit143("ngp_tirehop_energy_");
static const V lit144("ngp_tire_hop_energy_");
static const V lit145("ngp_tire_hop_");
static const V lit146("ngp_road_input_hop_");
static const V lit147("ngp_control_arm_camber_");
static const V lit148("ngp_arm_camber_");
static const V lit149("ngp_compliance_virtual_camber_");
static const V lit150("ngp_virtual_camber_");
static const V lit151("ngp_control_arm_toe_");
static const V lit152("ngp_arm_toe_");
static const V lit153("ngp_compliance_virtual_toe_");
static const V lit154("ngp_virtual_toe_");
static const V lit155("ngp_contact_quality_");
static const V lit156("ngp_tire_contact_quality_");
static const V lit157("ngp_tcr_quality_");
static const V lit158("ngp_contact_trust_");
static const V lit159("ngp_contact_grip_gate_");
static const V lit160("ngp_recovery_trust_");
static const V lit161("ngp_contact_loss_");
static const V lit162("ngp_tire_contact_loss_");
static const V lit163("ngp_tcr_contact_loss_");
static const V lit164("ngp_carcass_support_");
static const V lit165("ngp_tire_carcass_support_");
static const V lit166("ngp_carcass_grip_gate_");
static const V lit167("ngp_slip_recovery_grip_gate_");
static const V lit168("ngp_tire_contact_delay_");
static const V lit169("ngp_contact_delay_");
static const V lit170("ngp_slip_recovery_carcass_delay_");
static const V lit171("ngp_tire_sidewall_energy_");
static const V lit172("ngp_sidewall_energy_");
static const V lit173("ngp_tire_carcass_avg_energy");
static const V lit174("ngp_tire_compliance_");
static const V lit175("ngp_tire_comp_front");
static const V lit176("ngp_tire_comp_rear");
static const V lit177("ngp_tyre_comp_front");
static const V lit178("ngp_tyre_comp_rear");
static const V lit179("ngp_tire_relax_scale_");
static const V lit180("ngp_tyre_relax_scale_");
static const V lit181("ngp_tire_response_delay");
static const V lit182("ngp_slip_recovery_rate_");
static const V lit183("ngp_recovery_rate_");
static const V lit184("ngp_slip_grip_return_");
static const V lit185("ngp_grip_return_");
static const V lit186("ngp_slip_snap_risk_");
static const V lit187("ngp_snap_risk_");
static const V lit188("ngp_road_shock_");
static const V lit189("ngp_rii_shock_");
static const V lit190("ngp_road_input_severity_");
static const V lit191("ngp_road_surface_limit_");
static const V lit192("ngp_rii_surface_limit_");
static const V lit193("ngp_load_path_loss_");
static const V lit194("ngp_road_path_loss_");
static const V lit195("ngp_rii_path_loss_");
static const V lit196("ngp_load_path_tire_delivery_");
static const V lit197("ngp_road_tire_delivery_");
static const V lit198("ngp_rii_avg_tire_delivery");
static const V lit199("ngp_tire_temp_");
static const V lit200("ngp_tyre_temp_");
static const V lit201("ngp_memory_virtual_temp_");
static const V lit202("ngp_drive_torque");
static const V lit203("ngp_drivetrain_torque");
static const V lit204("ngp_lsd_lock");
static const V lit205("ngp_diff_lock");
static const V lit206("max");
static const V lit207("ngp_tc_contact_");
static const V lit208("ngp_tc_grip_");
static const V lit209("ngp_tc_load_");
static const V lit210("ngp_tc_loadn_");
static const V lit211("ngp_tc_slip_");
static const V lit212("ngp_tc_energy_");
static const V lit213("ngp_tc_grounded_");
static const V lit214("ngp_tire_contact_");
static const V lit215("ngp_tire_grip_contact_");
static const V lit216("ngp_tire_slip_energy_");
static const V lit217("ngp_tcc_contact_");
static const V lit218("ngp_tcc_grip_");
static const V lit219("ngp_tcc_energy_");
static const V lit220("ngp_tcc_load_");
static const V lit221("ngp_tcc_quality_");
static const V lit222("ngp_tcc_loss_");
static const V lit223("ngp_tc_slip_ratio_");
static const V lit224("ngp_tc_slip_angle_");
static const V lit225("ngp_tc_memory_");
static const V lit226("ngp_tc_hop_");
static const V lit227("ngp_tc_contact_quality_");
static const V lit228("ngp_tc_contact_trust_");
static const V lit229("ngp_tc_contact_loss_");
static const V lit230("ngp_tc_carcass_support_");
static const V lit231("ngp_tc_carcass_grip_gate_");
static const V lit232("ngp_tc_recovery_");
static const V lit233("ngp_tc_road_shock_");
static const V lit234("ngp_tc_path_loss_");
static const V lit235("ngp_tc_status");
static const V lit236("UNKNOWN");
static const V lit237("ngp_tc_update_count");
static const V lit238("ngp_tc_wheels_valid");
static const V lit239("ngp_tc_store_only");
static const V lit240("ngp_tc_avg_contact");
static const V lit241("ngp_tc_avg_grip");
static const V lit242("ngp_tc_avg_energy");
static const V lit243("ngp_tc_avg_load");
static const V lit244("ngp_tc_min_grip");
static const V lit245("ngp_tc_max_energy");
static const V lit246("ngp_tc_grounded_count");
static const V lit247("ngp_tc_speed_kmh");
static const V lit248("ngp_tcc_avg_contact");
static const V lit249("ngp_tcc_avg_grip");
static const V lit250("ngp_tcc_avg_energy");
static const V lit251("ngp_tc_load_linked");
static const V lit252("ngp_tc_memory_linked");
static const V lit253("ngp_tc_hop_linked");
static const V lit254("ngp_tc_arm_linked");
static const V lit255("ngp_tc_drivetrain_linked");
static const V lit256("ngp_tc_lsd_linked");
static const V lit257("ngp_tc_contact_quality_linked");
static const V lit258("ngp_tc_carcass_linked");
static const V lit259("ngp_tc_compliance_linked");
static const V lit260("ngp_tc_recovery_linked");
static const V lit261("ngp_tc_road_linked");
static const V lit262("ngp_tc_load_path_linked");
static const V lit263("ngp_tc_thermal_linked");
static const V lit264("init");
static const V lit265("update");
static const V lit266("BAD DT");
static const V lit267("min");
static const V lit268("RUNNING");
static const V lit269("STORE ONLY");
static const V lit270("NO CAR");
static const V lit271("NO WHEELS");
static const V lit272("getContact");
static const V lit273("getGrip");
static const V lit274("getEnergy");
static const V lit275("getLoad");
static const V lit276("getState");
static const V lit277("name");
static const V lit278("energy");
static const V lit279("debugStr");
static const V lit280("format");
static const V lit281("%s Contact %.2f Grip %.2f Energy %.2f Load %.0f\n");
static const V lit282("SlipR %.3f SlipA %.3f Ground %s CQ %.2f Loss %.2f");
static const V lit283("YES");
static const V lit284("NO");
static const V lit285("Status %s / Count %.0f / Wheels %s / Store %s\n");
static const V lit286("Contact %.2f %.2f %.2f %.2f Avg %.2f\n");
static const V lit287("Grip    %.2f %.2f %.2f %.2f Avg %.2f Min %.2f\n");
static const V lit288("Energy  %.2f %.2f %.2f %.2f Avg %.2f Max %.2f\n");
static const V lit289("Links LD:%s MEM:%s HOP:%s ARM:%s DT:%s LSD:%s CQ:%s TC:%s SR:%s");
static const V lit290("OK");
static const V lit291("NIL");
V load_tire_contact_core(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(35);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(3200.0));set(z,lit7,V(80.0));set(z,lit8,V(80.0));set(z,lit9,V(1800.0));set(z,lit10,V(0.08));set(z,lit11,V(0.45));set(z,lit12,V(0.06));set(z,lit13,V(0.35));set(z,lit14,V(0.035));set(z,lit15,V(0.02));set(z,lit16,V(0.075));set(z,lit17,V(0.04));set(z,lit18,V(0.045));set(z,lit19,V(0.16));set(z,lit20,V(0.06));set(z,lit21,V(0.075));set(z,lit22,V(1.0));set(z,lit23,V(0.15));set(z,lit24,V(0.28));set(z,lit25,V(0.35));set(z,lit26,V(0.1));set(z,lit27,V(0.12));set(z,lit28,V(0.08));set(z,lit29,V(0.08));set(z,lit30,V(0.1));set(z,lit31,V(0.3));set(z,lit32,V(0.28));set(z,lit33,V(0.12));set(z,lit34,V(0.18));set(z,lit35,V(0.16));set(z,lit36,V(0.08));set(z,lit37,V(0.08));set(z,lit38,V(0.1));set(z,lit39,V(0.12));set(z,lit40,V(0.08));set(z,lit41,V(0.1));set(z,lit42,V(0.1));set(z,lit43,V(0.08));set(z,lit44,V(1.0));set(z,lit45,V(12000.0));set(z,lit46,V(0.3));set(z,lit47,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit48,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit49,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit50,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit51,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit52,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit53,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit54,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(false));set(z,V(1.0),V(false));set(z,V(2.0),V(false));set(z,V(3.0),V(false));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit77,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(1.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,lit87);set(z,lit88,V(0.0));set(z,lit89,V(false));set(z,lit90,V(false));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(false));set(z,lit103,V(false));set(z,lit104,V(999.0));set(z,lit105,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit108)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit108)))):t9;})())){if(truth(eq(e->slot(0,1),V()))){return Args{V()};
}
return Args{e->slot(0,1)};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,4),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit109),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,2)};V t13=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0),V(1.0)}));refs[0].put(std::move(t13));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,2)))};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t15=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t16=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t17=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.001)}));refs[0].put(std::move(t17));}
if(truth(le(e->slot(0,3),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t18=sub(V(1.0),first(call(get(e->get("math"),lit110),Args{divv(V(-num(e->slot(0,2))),e->slot(0,3))})));e->slot(0,4)=std::move(t18);}
return call(e->slot(1,7),Args{e->slot(0,0),e->slot(0,1),e->slot(0,4)});
return Args{};});
{V t19=get(e->slot(0,0),lit111);e->slot(0,9)=std::move(t19);}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t20=first(call(e->slot(1,9),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t20);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()});
return Args{};});
{V t23=get(e->slot(0,0),lit112);e->slot(0,11)=std::move(t23);}
{V t24=get(e->slot(0,0),lit113);e->slot(0,12)=std::move(t24);}
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t25=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t25);}
{double t26=num(V(1.0)),t27=num(length(e->slot(0,1))),t28=num(V(1.0));for(double t29=t26;(t28>0?t29<=t27:t29>=t27);t29+=t28){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t29);{V t30=first(call(e->slot(2,9),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t30);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t31=e->slot(1,0);return !truth(t31)?V(0.0):t31;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t32=add(([&](){V t33=get(e->slot(1,3),lit104);return !truth(t33)?V(0.0):t33;})(),([&](){V t34=e->slot(0,0);return !truth(t34)?V(0.0):t34;})());refs[0].put(std::move(t32));}
if(truth(ge(get(e->slot(1,3),lit104),get(get(e->slot(1,1),lit5),lit47)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t35=V(0.0);refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t36=V(true);refs[0].put(std::move(t36));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t37=V(false);refs[0].put(std::move(t37));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t38=V(!truth(e->get("ac")));return !truth(t38)?V(!truth(get(e->get("ac"),lit114))):t38;})())){return Args{V()};
}
{Args t39=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit114),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t39,0);e->slot(0,1)=arg(t39,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,12),Args{e->slot(0,0),lit115,V()});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t40=first(call(e->slot(1,16),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t40);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{V t41=first(call(e->slot(1,12),Args{e->slot(0,2),e->slot(0,1),V()}));e->slot(0,3)=std::move(t41);}
if(truth(ne(e->slot(0,3),V()))){return Args{e->slot(0,3)};
}
return call(e->slot(1,12),Args{e->slot(0,2),add(e->slot(0,1),V(1.0)),V()});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t42=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit85,V()})),V()}));e->slot(0,1)=std::move(t42);}
if(truth(ne(e->slot(0,1),V()))){return Args{e->slot(0,1)};
}
{V t43=first(call(e->slot(1,4),Args{V(),V()}));e->slot(0,2)=std::move(t43);}
if(truth(ne(e->slot(0,2),V()))){return Args{mul(e->slot(0,2),V(3.6))};
}
return call(e->slot(1,10),joined(Args{lit116},call(e->slot(1,10),Args{lit117,([&](){V t44=get(e->slot(1,3),lit85);return !truth(t44)?V(0.0):t44;})()})));
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t45=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t45);}
if(truth(([&](){V t46=ge(e->slot(0,1),mul(get(get(e->slot(1,1),lit5),lit6),V(0.65)));return truth(t46)?le(e->slot(0,1),get(get(e->slot(1,1),lit5),lit45)):t46;})())){return Args{e->slot(0,1)};
}
return Args{add(get(get(e->slot(1,1),lit5),lit6),e->slot(0,1))};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t47=V();e->slot(0,2)=std::move(t47);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,0,2)};V t48=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit50,V()})),V()}));refs[0].put(std::move(t48));}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t49=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit118,V()})),V()}));refs[0].put(std::move(t49));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t50=first(call(e->slot(1,4),Args{V(),V()}));refs[0].put(std::move(t50));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t51=first(call(e->slot(1,4),Args{V(),V()}));refs[0].put(std::move(t51));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t52=first(call(e->slot(1,4),Args{V(),V()}));refs[0].put(std::move(t52));}
}
}
{Args t53=call(e->slot(1,13),Args{V(),concat(lit119,e->slot(0,1)),concat(lit120,e->slot(0,1)),concat(lit121,e->slot(0,1)),concat(lit122,e->slot(0,1)),concat(lit123,e->slot(0,1)),concat(lit124,e->slot(0,1))});e->slot(0,3)=arg(t53,0);e->slot(0,4)=arg(t53,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t54=V(true);refs[0].put(std::move(t54));}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(1,5),Args{add(mul(e->slot(0,2),sub(V(1.0),get(get(e->slot(1,1),lit5),lit25))),mul(e->slot(0,3),get(get(e->slot(1,1),lit5),lit25))),V(0.0),get(get(e->slot(1,1),lit5),lit45)})),V(true)};
}
return Args{first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0),get(get(e->slot(1,1),lit5),lit45)})),V(true)};
}
{V t55=first(call(e->slot(1,9),Args{concat(lit125,e->slot(0,1))}));e->slot(0,5)=std::move(t55);}
if(truth(ne(e->slot(0,5),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(2,3),lit91)};V t56=V(true);refs[0].put(std::move(t56));}
{V t57=first(call(e->slot(2,19),Args{e->slot(1,5)}));e->slot(0,0)=std::move(t57);}
if(truth(ne(e->slot(1,2),V()))){return Args{first(call(e->slot(2,5),Args{add(mul(e->slot(1,2),sub(V(1.0),get(get(e->slot(2,1),lit5),lit25))),mul(e->slot(0,0),get(get(e->slot(2,1),lit5),lit25))),V(0.0),get(get(e->slot(2,1),lit5),lit45)})),V(true)};
}
return Args{first(call(e->slot(2,5),Args{e->slot(0,0),V(0.0),get(get(e->slot(2,1),lit5),lit45)})),V(true)};
}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0),get(get(e->slot(1,1),lit5),lit45)})),V(false)};
}
if(truth(get(e->slot(1,3),lit90))){return Args{first(call(e->slot(1,8),Args{([&](){V t58=get(get(e->slot(1,3),lit50),e->slot(0,1));return !truth(t58)?V(0.0):t58;})(),V(0.0),V(0.016),get(get(e->slot(1,1),lit5),lit46)})),V(false)};
}
return Args{get(get(e->slot(1,1),lit5),lit6),V(false)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t59=call(e->slot(1,13),Args{V(),concat(lit126,e->slot(0,1)),concat(lit127,e->slot(0,1)),concat(lit128,e->slot(0,1)),concat(lit129,e->slot(0,1)),concat(lit130,e->slot(0,1)),concat(lit131,e->slot(0,1))});e->slot(0,2)=arg(t59,0);e->slot(0,3)=arg(t59,1);}
{Args t60=call(e->slot(1,13),Args{V(),concat(lit132,e->slot(0,1)),concat(lit133,e->slot(0,1)),concat(lit134,e->slot(0,1)),concat(lit135,e->slot(0,1)),concat(lit136,e->slot(0,1)),concat(lit137,e->slot(0,1))});e->slot(0,4)=arg(t60,0);e->slot(0,5)=arg(t60,1);}
if(truth(([&](){V t61=eq(e->slot(0,2),V());return truth(t61)?e->slot(0,0):t61;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t62=first(call(e->slot(1,12),Args{e->slot(0,0),lit52,V(0.0)}));refs[0].put(std::move(t62));}
}
if(truth(([&](){V t63=eq(e->slot(0,4),V());return truth(t63)?e->slot(0,0):t63;})())){{std::array<Ref,1> refs{Ref(e,0,4)};V t64=first(call(e->slot(1,12),Args{e->slot(0,0),lit53,V(0.0)}));refs[0].put(std::move(t64));}
}
if(truth(([&](){V t65=ne(e->slot(0,3),V());return !truth(t65)?ne(e->slot(0,5),V()):t65;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t66=V(true);refs[0].put(std::move(t66));}
}
return joined(Args{first(call(e->slot(1,6),Args{e->slot(0,2)}))},call(e->slot(1,6),Args{e->slot(0,4)}));
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,45);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t67=call(e->slot(1,13),Args{V(),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0)),concat(lit140,e->slot(0,0)),concat(lit141,e->slot(0,0)),concat(lit142,e->slot(0,0))});e->slot(0,2)=arg(t67,0);e->slot(0,3)=arg(t67,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t68=V(true);refs[0].put(std::move(t68));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t69=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit57),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t69));}
{Args t70=call(e->slot(1,13),Args{V(),concat(lit143,e->slot(0,0)),concat(lit144,e->slot(0,0)),concat(lit145,e->slot(0,0)),concat(lit146,e->slot(0,0))});e->slot(0,4)=arg(t70,0);e->slot(0,5)=arg(t70,1);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t71=V(true);refs[0].put(std::move(t71));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t72=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit58),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t72));}
{Args t73=call(e->slot(1,13),Args{V(),concat(lit147,e->slot(0,0)),concat(lit148,e->slot(0,0)),concat(lit149,e->slot(0,0)),concat(lit150,e->slot(0,0))});e->slot(0,6)=arg(t73,0);e->slot(0,7)=arg(t73,1);}
{Args t74=call(e->slot(1,13),Args{V(),concat(lit151,e->slot(0,0)),concat(lit152,e->slot(0,0)),concat(lit153,e->slot(0,0)),concat(lit154,e->slot(0,0))});e->slot(0,8)=arg(t74,0);e->slot(0,9)=arg(t74,1);}
if(truth(([&](){V t75=ne(e->slot(0,7),V());return !truth(t75)?ne(e->slot(0,9),V()):t75;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t76=V(true);refs[0].put(std::move(t76));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t77=first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t78=first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t78));}
{Args t79=call(e->slot(1,13),Args{V(),concat(lit155,e->slot(0,0)),concat(lit156,e->slot(0,0)),concat(lit157,e->slot(0,0))});e->slot(0,10)=arg(t79,0);e->slot(0,11)=arg(t79,1);}
{Args t80=call(e->slot(1,13),Args{V(),concat(lit158,e->slot(0,0)),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0))});e->slot(0,12)=arg(t80,0);e->slot(0,13)=arg(t80,1);}
{Args t81=call(e->slot(1,13),Args{V(),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0)),concat(lit163,e->slot(0,0))});e->slot(0,14)=arg(t81,0);e->slot(0,15)=arg(t81,1);}
if(truth(([&](){V t82=([&](){V t83=ne(e->slot(0,11),V());return !truth(t83)?ne(e->slot(0,13),V()):t83;})();return !truth(t82)?ne(e->slot(0,15),V()):t82;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t84=V(true);refs[0].put(std::move(t84));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t85=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit61),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,10),V(1.0)})),V(0.0),V(1.2)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t86=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit62),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,12),get(get(e->slot(1,3),lit61),e->slot(0,0))})),V(0.0),V(1.2)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t87=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit63),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,14),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t87));}
{Args t88=call(e->slot(1,13),Args{V(),concat(lit164,e->slot(0,0)),concat(lit165,e->slot(0,0))});e->slot(0,16)=arg(t88,0);e->slot(0,17)=arg(t88,1);}
{Args t89=call(e->slot(1,13),Args{V(),concat(lit166,e->slot(0,0)),concat(lit167,e->slot(0,0))});e->slot(0,18)=arg(t89,0);e->slot(0,19)=arg(t89,1);}
{Args t90=call(e->slot(1,13),Args{V(),concat(lit168,e->slot(0,0)),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0))});e->slot(0,20)=arg(t90,0);e->slot(0,21)=arg(t90,1);}
{Args t91=call(e->slot(1,13),Args{V(),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0)),lit173});e->slot(0,22)=arg(t91,0);e->slot(0,23)=arg(t91,1);}
if(truth(([&](){V t92=([&](){V t93=([&](){V t94=ne(e->slot(0,17),V());return !truth(t94)?ne(e->slot(0,19),V()):t94;})();return !truth(t93)?ne(e->slot(0,21),V()):t93;})();return !truth(t92)?ne(e->slot(0,23),V()):t92;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t95=V(true);refs[0].put(std::move(t95));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t96=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit64),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,16),V(1.0)})),V(0.0),V(1.2)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t97=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit65),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,18),V(1.0)})),V(0.0),V(1.2)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t98=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit66),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,20),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t99=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit67),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,22),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t99));}
{Args t100=call(e->slot(1,13),Args{V(),concat(lit174,e->slot(0,0)),([&](){V t101=([&](){V t102=lt(e->slot(0,0),V(2.0));return truth(t102)?lit175:t102;})();return !truth(t101)?lit176:t101;})(),([&](){V t103=([&](){V t104=lt(e->slot(0,0),V(2.0));return truth(t104)?lit177:t104;})();return !truth(t103)?lit178:t103;})()});e->slot(0,24)=arg(t100,0);e->slot(0,25)=arg(t100,1);}
{Args t105=call(e->slot(1,13),Args{V(),concat(lit179,e->slot(0,0)),concat(lit180,e->slot(0,0)),lit181});e->slot(0,26)=arg(t105,0);e->slot(0,27)=arg(t105,1);}
if(truth(([&](){V t106=ne(e->slot(0,25),V());return !truth(t106)?ne(e->slot(0,27),V()):t106;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t107=V(true);refs[0].put(std::move(t107));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t108=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit68),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,24),V(1.0)})),V(0.4),V(1.4)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t108));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t109=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit69),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,26),V(1.0)})),V(0.8),V(1.8)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t109));}
{Args t110=call(e->slot(1,13),Args{V(),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0))});e->slot(0,28)=arg(t110,0);e->slot(0,29)=arg(t110,1);}
{Args t111=call(e->slot(1,13),Args{V(),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0))});e->slot(0,30)=arg(t111,0);e->slot(0,31)=arg(t111,1);}
{Args t112=call(e->slot(1,13),Args{V(),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0))});e->slot(0,32)=arg(t112,0);e->slot(0,33)=arg(t112,1);}
if(truth(([&](){V t113=([&](){V t114=ne(e->slot(0,29),V());return !truth(t114)?ne(e->slot(0,31),V()):t114;})();return !truth(t113)?ne(e->slot(0,33),V()):t113;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t115=V(true);refs[0].put(std::move(t115));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t116=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit70),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,28),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t117=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit71),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,30),V(1.0)})),V(0.0),V(1.2)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,0))};V t118=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit72),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,32),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t118));}
{Args t119=call(e->slot(1,13),Args{V(),concat(lit188,e->slot(0,0)),concat(lit189,e->slot(0,0)),concat(lit190,e->slot(0,0))});e->slot(0,34)=arg(t119,0);e->slot(0,35)=arg(t119,1);}
{Args t120=call(e->slot(1,13),Args{V(),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0))});e->slot(0,36)=arg(t120,0);e->slot(0,37)=arg(t120,1);}
if(truth(([&](){V t121=ne(e->slot(0,35),V());return !truth(t121)?ne(e->slot(0,37),V()):t121;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t122=V(true);refs[0].put(std::move(t122));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,0))};V t123=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit73),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,34),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t124=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit74),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,36),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t124));}
{Args t125=call(e->slot(1,13),Args{V(),concat(lit193,e->slot(0,0)),concat(lit194,e->slot(0,0)),concat(lit195,e->slot(0,0))});e->slot(0,38)=arg(t125,0);e->slot(0,39)=arg(t125,1);}
{Args t126=call(e->slot(1,13),Args{V(),concat(lit196,e->slot(0,0)),concat(lit197,e->slot(0,0)),lit198});e->slot(0,40)=arg(t126,0);e->slot(0,41)=arg(t126,1);}
if(truth(([&](){V t127=ne(e->slot(0,39),V());return !truth(t127)?ne(e->slot(0,41),V()):t127;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t128=V(true);refs[0].put(std::move(t128));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t129=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit75),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,38),V(0.0)})),V(0.0),V(1.0)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t130=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit76),e->slot(0,0)),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,40),V(1.0)})),V(0.0),V(1.2)})),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t130));}
{Args t131=call(e->slot(1,13),Args{V(),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0)),concat(lit201,e->slot(0,0))});e->slot(0,42)=arg(t131,0);e->slot(0,43)=arg(t131,1);}
if(truth(ne(e->slot(0,43),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t132=V(true);refs[0].put(std::move(t132));}
}
{V t133=V(0.0);e->slot(0,44)=std::move(t133);}
if(truth(ne(e->slot(0,42),V()))){{std::array<Ref,1> refs{Ref(e,0,44)};V t134=first(call(e->slot(1,5),Args{divv(sub(first(call(e->slot(1,4),Args{e->slot(0,42),V(25.0)})),V(85.0)),V(95.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t134));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit77),e->slot(0,0))};V t135=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit77),e->slot(0,0)),e->slot(0,44),e->slot(0,1),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t135));}
if(truth(ge(e->slot(0,0),V(2.0)))){if(truth(([&](){V t136=ne(first(call(e->slot(1,9),Args{lit202})),V());return !truth(t136)?ne(first(call(e->slot(1,9),Args{lit203})),V()):t136;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t137=V(true);refs[0].put(std::move(t137));}
}
if(truth(([&](){V t138=ne(first(call(e->slot(1,9),Args{lit204})),V());return !truth(t138)?ne(first(call(e->slot(1,9),Args{lit205})),V()):t138;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t139=V(true);refs[0].put(std::move(t139));}
}
}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t140=first(call(e->slot(1,5),Args{divv(sub(first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),e->slot(0,0)),first(call(get(e->get("math"),lit206),Args{sub(e->slot(0,1),e->slot(0,0)),V(0.0001)}))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t140);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t141=first(call(e->slot(1,23),Args{get(get(e->slot(1,1),lit5),lit8),get(get(e->slot(1,1),lit5),lit9),e->slot(0,0)}));e->slot(0,1)=std::move(t141);}
if(truth(gt(e->slot(0,0),get(get(e->slot(1,1),lit5),lit7)))){{std::array<Ref,1> refs{Ref(e,0,1)};V t142=first(call(get(e->get("math"),lit206),Args{e->slot(0,1),get(get(e->slot(1,1),lit5),lit23)}));refs[0].put(std::move(t142));}
}
return call(e->slot(1,5),Args{e->slot(0,1),V(0.0),V(1.0)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t143=first(call(e->slot(1,23),Args{get(get(e->slot(1,1),lit5),lit10),get(get(e->slot(1,1),lit5),lit11),e->slot(0,0)}));e->slot(0,2)=std::move(t143);}
{V t144=first(call(e->slot(1,23),Args{get(get(e->slot(1,1),lit5),lit12),get(get(e->slot(1,1),lit5),lit13),e->slot(0,1)}));e->slot(0,3)=std::move(t144);}
return call(e->slot(1,5),Args{first(call(get(e->get("math"),lit206),Args{e->slot(0,2),e->slot(0,3)})),V(0.0),get(get(e->slot(1,1),lit5),lit44)});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(lt(e->slot(0,0),V(2.0)))){return Args{e->slot(0,1)};
}
{V t145=mul(first(call(e->slot(1,6),call(e->slot(1,10),joined(Args{lit202},call(e->slot(1,10),Args{lit203,V(0.0)}))))),get(get(e->slot(1,1),lit5),lit30));e->slot(0,2)=std::move(t145);}
{V t146=mul(first(call(e->slot(1,10),joined(Args{lit204},call(e->slot(1,10),Args{lit205,V(0.0)})))),get(get(e->slot(1,1),lit5),lit29));e->slot(0,3)=std::move(t146);}
return call(e->slot(1,5),Args{add(add(e->slot(0,1),e->slot(0,2)),e->slot(0,3)),V(0.0),get(get(e->slot(1,1),lit5),lit44)});
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t147=get(get(e->slot(1,3),lit61),e->slot(0,0));e->slot(0,2)=std::move(t147);}
{V t148=get(get(e->slot(1,3),lit62),e->slot(0,0));e->slot(0,3)=std::move(t148);}
{V t149=get(get(e->slot(1,3),lit63),e->slot(0,0));e->slot(0,4)=std::move(t149);}
{V t150=get(get(e->slot(1,3),lit64),e->slot(0,0));e->slot(0,5)=std::move(t150);}
{V t151=e->slot(0,1);e->slot(0,6)=std::move(t151);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t152=mul(e->slot(0,6),add(V(1.0),mul(sub(e->slot(0,2),V(1.0)),get(get(e->slot(1,1),lit5),lit31))));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t153=mul(e->slot(0,6),add(V(1.0),mul(sub(e->slot(0,3),V(1.0)),get(get(e->slot(1,1),lit5),lit33))));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t154=mul(e->slot(0,6),add(V(1.0),mul(sub(e->slot(0,5),V(1.0)),get(get(e->slot(1,1),lit5),lit34))));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t155=mul(e->slot(0,6),sub(V(1.0),mul(e->slot(0,4),get(get(e->slot(1,1),lit5),lit32))));refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t156=mul(e->slot(0,6),sub(V(1.0),mul(mul(get(get(e->slot(1,3),lit74),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit41)),V(0.5))));refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e,0,6)};V t157=mul(e->slot(0,6),sub(V(1.0),mul(mul(get(get(e->slot(1,3),lit75),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit42)),V(0.5))));refs[0].put(std::move(t157));}
return call(e->slot(1,5),Args{e->slot(0,6),V(0.0),V(1.0)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t158=mul(e->slot(0,0),sub(V(1.0),mul(e->slot(0,1),V(0.72))));e->slot(0,3)=std::move(t158);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t159=first(call(get(e->get("math"),lit206),Args{e->slot(0,3),mul(get(get(e->slot(1,1),lit5),lit24),e->slot(0,0))}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t160=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit57),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit26))));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t161=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit58),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit27))));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t162=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit63),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit32))));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t163=mul(e->slot(0,3),add(V(1.0),mul(sub(get(get(e->slot(1,3),lit64),e->slot(0,2)),V(1.0)),get(get(e->slot(1,1),lit5),lit34))));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t164=mul(e->slot(0,3),add(V(1.0),mul(sub(get(get(e->slot(1,3),lit65),e->slot(0,2)),V(1.0)),get(get(e->slot(1,1),lit5),lit35))));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t165=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit66),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit36))));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t166=mul(e->slot(0,3),sub(V(1.0),mul(first(call(get(e->get("math"),lit206),Args{sub(V(1.0),get(get(e->slot(1,3),lit68),e->slot(0,2))),V(0.0)})),get(get(e->slot(1,1),lit5),lit37))));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t167=mul(e->slot(0,3),add(V(1.0),mul(first(call(get(e->get("math"),lit206),Args{sub(get(get(e->slot(1,3),lit71),e->slot(0,2)),V(1.0)),V(0.0)})),get(get(e->slot(1,1),lit5),lit38))));refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t168=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit72),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit39))));refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t169=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit74),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit41))));refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t170=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit75),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit42))));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t171=mul(e->slot(0,3),first(call(e->slot(1,5),Args{get(get(e->slot(1,3),lit76),e->slot(0,2)),V(0.0),V(1.2)})));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t172=mul(e->slot(0,3),sub(V(1.0),mul(get(get(e->slot(1,3),lit77),e->slot(0,2)),get(get(e->slot(1,1),lit5),lit43))));refs[0].put(std::move(t172));}
{V t173=mul(add(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit59),e->slot(0,2))})),first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit60),e->slot(0,2))}))),get(get(e->slot(1,1),lit5),lit28));e->slot(0,4)=std::move(t173);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t174=mul(e->slot(0,3),sub(V(1.0),first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0),V(0.2)}))));refs[0].put(std::move(t174));}
return call(e->slot(1,5),Args{e->slot(0,3),V(0.0),V(1.2)});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);call(e->slot(1,22),Args{e->slot(0,0),e->slot(0,2)});
{V t175=first(call(e->slot(1,20),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t175);}
{Args t176=call(e->slot(1,21),Args{e->slot(0,1),e->slot(0,0)});e->slot(0,4)=arg(t176,0);e->slot(0,5)=arg(t176,1);}
{V t177=first(call(e->slot(1,5),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit206),Args{get(get(e->slot(1,1),lit5),lit6),V(1.0)}))),V(0.0),V(2.0)}));e->slot(0,6)=std::move(t177);}
{V t178=first(call(e->slot(1,24),Args{e->slot(0,3)}));e->slot(0,7)=std::move(t178);}
if(truth(([&](){V t179=lt(get(e->slot(1,3),lit85),get(get(e->slot(1,1),lit5),lit22));return truth(t179)?gt(e->slot(0,3),get(get(e->slot(1,1),lit5),lit7)):t179;})())){{std::array<Ref,1> refs{Ref(e,0,7)};V t180=first(call(get(e->get("math"),lit206),Args{e->slot(0,7),get(get(e->slot(1,1),lit5),lit23)}));refs[0].put(std::move(t180));}
}
{V t181=first(call(e->slot(1,25),Args{e->slot(0,4),e->slot(0,5)}));e->slot(0,8)=std::move(t181);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t182=first(call(e->slot(1,26),Args{e->slot(0,0),e->slot(0,8)}));refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(e,0,8)};V t183=first(call(e->slot(1,5),Args{add(add(e->slot(0,8),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit40))),mul(get(get(e->slot(1,3),lit67),e->slot(0,0)),V(0.06))),V(0.0),get(get(e->slot(1,1),lit5),lit44)}));refs[0].put(std::move(t183));}
{V t184=first(call(e->slot(1,27),Args{e->slot(0,0),e->slot(0,7)}));e->slot(0,9)=std::move(t184);}
{V t185=([&](){V t186=([&](){V t187=gt(e->slot(0,9),get(get(e->slot(1,3),lit48),e->slot(0,0)));return truth(t187)?get(get(e->slot(1,1),lit5),lit14):t187;})();return !truth(t186)?get(get(e->slot(1,1),lit5),lit15):t186;})();e->slot(0,10)=std::move(t185);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit48),e->slot(0,0))};V t188=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit48),e->slot(0,0)),e->slot(0,9),e->slot(0,2),e->slot(0,10)})),V(0.0),V(1.2)}));refs[0].put(std::move(t188));}
{V t189=([&](){V t190=([&](){V t191=gt(e->slot(0,8),get(get(e->slot(1,3),lit55),e->slot(0,0)));return truth(t191)?get(get(e->slot(1,1),lit5),lit18):t191;})();return !truth(t190)?get(get(e->slot(1,1),lit5),lit19):t190;})();e->slot(0,11)=std::move(t189);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t192=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit55),e->slot(0,0)),e->slot(0,8),e->slot(0,2),e->slot(0,11)})),V(0.0),get(get(e->slot(1,1),lit5),lit44)}));refs[0].put(std::move(t192));}
{V t193=first(call(e->slot(1,28),Args{get(get(e->slot(1,3),lit48),e->slot(0,0)),get(get(e->slot(1,3),lit55),e->slot(0,0)),e->slot(0,0)}));e->slot(0,12)=std::move(t193);}
{V t194=([&](){V t195=([&](){V t196=gt(e->slot(0,12),get(get(e->slot(1,3),lit49),e->slot(0,0)));return truth(t196)?get(get(e->slot(1,1),lit5),lit16):t196;})();return !truth(t195)?get(get(e->slot(1,1),lit5),lit17):t195;})();e->slot(0,13)=std::move(t194);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit49),e->slot(0,0))};V t197=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit49),e->slot(0,0)),e->slot(0,12),e->slot(0,2),e->slot(0,13)})),V(0.0),V(1.2)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit50),e->slot(0,0))};V t198=first(call(e->slot(1,8),Args{([&](){V t199=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t199)?e->slot(0,3):t199;})(),e->slot(0,3),e->slot(0,2),get(get(e->slot(1,1),lit5),lit20)}));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit51),e->slot(0,0))};V t200=e->slot(0,6);refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit52),e->slot(0,0))};V t201=e->slot(0,4);refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit53),e->slot(0,0))};V t202=e->slot(0,5);refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t203=e->slot(0,8);refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t204=([&](){V t205=gt(e->slot(0,3),get(get(e->slot(1,1),lit5),lit7));return truth(t205)?gt(e->slot(0,9),V(0.02)):t205;})();refs[0].put(std::move(t204));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit48),e->slot(0,0))};V t206=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit48),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit49),e->slot(0,0))};V t207=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit49),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit50),e->slot(0,0))};V t208=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit50),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit51),e->slot(0,0))};V t209=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit51),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit52),e->slot(0,0))};V t210=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit52),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit53),e->slot(0,0))};V t211=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit53),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t212=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit54),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit46)}));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t213=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit55),e->slot(0,0)),V(0.0),e->slot(0,1),get(get(e->slot(1,1),lit5),lit19)}));refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t214=V(false);refs[0].put(std::move(t214));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,11),Args{concat(lit207,e->slot(0,0)),([&](){V t215=get(get(e->slot(1,3),lit48),e->slot(0,0));return !truth(t215)?V(0.0):t215;})()});
call(e->slot(1,11),Args{concat(lit208,e->slot(0,0)),([&](){V t216=get(get(e->slot(1,3),lit49),e->slot(0,0));return !truth(t216)?V(0.0):t216;})()});
call(e->slot(1,11),Args{concat(lit209,e->slot(0,0)),([&](){V t217=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t217)?V(0.0):t217;})()});
call(e->slot(1,11),Args{concat(lit210,e->slot(0,0)),([&](){V t218=get(get(e->slot(1,3),lit51),e->slot(0,0));return !truth(t218)?V(0.0):t218;})()});
call(e->slot(1,11),Args{concat(lit211,e->slot(0,0)),([&](){V t219=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t219)?V(0.0):t219;})()});
call(e->slot(1,11),Args{concat(lit212,e->slot(0,0)),([&](){V t220=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t220)?V(0.0):t220;})()});
call(e->slot(1,11),Args{concat(lit213,e->slot(0,0)),([&](){V t221=([&](){V t222=get(get(e->slot(1,3),lit56),e->slot(0,0));return truth(t222)?V(1.0):t222;})();return !truth(t221)?V(0.0):t221;})()});
call(e->slot(1,11),Args{concat(lit214,e->slot(0,0)),([&](){V t223=get(get(e->slot(1,3),lit48),e->slot(0,0));return !truth(t223)?V(0.0):t223;})()});
call(e->slot(1,11),Args{concat(lit215,e->slot(0,0)),([&](){V t224=get(get(e->slot(1,3),lit49),e->slot(0,0));return !truth(t224)?V(0.0):t224;})()});
call(e->slot(1,11),Args{concat(lit216,e->slot(0,0)),([&](){V t225=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t225)?V(0.0):t225;})()});
call(e->slot(1,11),Args{concat(lit217,e->slot(0,0)),([&](){V t226=get(get(e->slot(1,3),lit48),e->slot(0,0));return !truth(t226)?V(0.0):t226;})()});
call(e->slot(1,11),Args{concat(lit218,e->slot(0,0)),([&](){V t227=get(get(e->slot(1,3),lit49),e->slot(0,0));return !truth(t227)?V(0.0):t227;})()});
call(e->slot(1,11),Args{concat(lit219,e->slot(0,0)),([&](){V t228=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t228)?V(0.0):t228;})()});
call(e->slot(1,11),Args{concat(lit220,e->slot(0,0)),([&](){V t229=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t229)?V(0.0):t229;})()});
call(e->slot(1,11),Args{concat(lit221,e->slot(0,0)),([&](){V t230=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t230)?V(1.0):t230;})()});
call(e->slot(1,11),Args{concat(lit222,e->slot(0,0)),([&](){V t231=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t231)?V(0.0):t231;})()});
if(truth(V(!truth(get(e->slot(1,3),lit105))))){return Args{};
}
call(e->slot(1,11),Args{concat(lit223,e->slot(0,0)),([&](){V t232=get(get(e->slot(1,3),lit52),e->slot(0,0));return !truth(t232)?V(0.0):t232;})()});
call(e->slot(1,11),Args{concat(lit224,e->slot(0,0)),([&](){V t233=get(get(e->slot(1,3),lit53),e->slot(0,0));return !truth(t233)?V(0.0):t233;})()});
call(e->slot(1,11),Args{concat(lit225,e->slot(0,0)),([&](){V t234=get(get(e->slot(1,3),lit57),e->slot(0,0));return !truth(t234)?V(0.0):t234;})()});
call(e->slot(1,11),Args{concat(lit226,e->slot(0,0)),([&](){V t235=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t235)?V(0.0):t235;})()});
call(e->slot(1,11),Args{concat(lit227,e->slot(0,0)),([&](){V t236=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t236)?V(1.0):t236;})()});
call(e->slot(1,11),Args{concat(lit228,e->slot(0,0)),([&](){V t237=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t237)?V(1.0):t237;})()});
call(e->slot(1,11),Args{concat(lit229,e->slot(0,0)),([&](){V t238=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t238)?V(0.0):t238;})()});
call(e->slot(1,11),Args{concat(lit230,e->slot(0,0)),([&](){V t239=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t239)?V(1.0):t239;})()});
call(e->slot(1,11),Args{concat(lit231,e->slot(0,0)),([&](){V t240=get(get(e->slot(1,3),lit65),e->slot(0,0));return !truth(t240)?V(1.0):t240;})()});
call(e->slot(1,11),Args{concat(lit232,e->slot(0,0)),([&](){V t241=get(get(e->slot(1,3),lit70),e->slot(0,0));return !truth(t241)?V(0.0):t241;})()});
call(e->slot(1,11),Args{concat(lit233,e->slot(0,0)),([&](){V t242=get(get(e->slot(1,3),lit73),e->slot(0,0));return !truth(t242)?V(0.0):t242;})()});
call(e->slot(1,11),Args{concat(lit234,e->slot(0,0)),([&](){V t243=get(get(e->slot(1,3),lit75),e->slot(0,0));return !truth(t243)?V(0.0):t243;})()});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,11),Args{lit235,([&](){V t244=get(e->slot(1,3),lit86);return !truth(t244)?lit236:t244;})()});
call(e->slot(1,11),Args{lit237,([&](){V t245=get(e->slot(1,3),lit88);return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,11),Args{lit238,([&](){V t246=([&](){V t247=get(e->slot(1,3),lit89);return truth(t247)?V(1.0):t247;})();return !truth(t246)?V(0.0):t246;})()});
call(e->slot(1,11),Args{lit239,([&](){V t248=([&](){V t249=get(e->slot(1,3),lit90);return truth(t249)?V(1.0):t249;})();return !truth(t248)?V(0.0):t248;})()});
call(e->slot(1,11),Args{lit240,([&](){V t250=get(e->slot(1,3),lit78);return !truth(t250)?V(0.0):t250;})()});
call(e->slot(1,11),Args{lit241,([&](){V t251=get(e->slot(1,3),lit79);return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,11),Args{lit242,([&](){V t252=get(e->slot(1,3),lit80);return !truth(t252)?V(0.0):t252;})()});
call(e->slot(1,11),Args{lit243,([&](){V t253=get(e->slot(1,3),lit81);return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,11),Args{lit244,([&](){V t254=get(e->slot(1,3),lit82);return !truth(t254)?V(0.0):t254;})()});
call(e->slot(1,11),Args{lit245,([&](){V t255=get(e->slot(1,3),lit83);return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,11),Args{lit246,([&](){V t256=get(e->slot(1,3),lit84);return !truth(t256)?V(0.0):t256;})()});
call(e->slot(1,11),Args{lit247,([&](){V t257=get(e->slot(1,3),lit85);return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,11),Args{lit248,([&](){V t258=get(e->slot(1,3),lit78);return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,11),Args{lit249,([&](){V t259=get(e->slot(1,3),lit79);return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,11),Args{lit250,([&](){V t260=get(e->slot(1,3),lit80);return !truth(t260)?V(0.0):t260;})()});
if(truth(V(!truth(get(e->slot(1,3),lit105))))){return Args{};
}
call(e->slot(1,11),Args{lit251,([&](){V t261=([&](){V t262=get(e->slot(1,3),lit91);return truth(t262)?V(1.0):t262;})();return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,11),Args{lit252,([&](){V t263=([&](){V t264=get(e->slot(1,3),lit92);return truth(t264)?V(1.0):t264;})();return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,11),Args{lit253,([&](){V t265=([&](){V t266=get(e->slot(1,3),lit93);return truth(t266)?V(1.0):t266;})();return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,11),Args{lit254,([&](){V t267=([&](){V t268=get(e->slot(1,3),lit94);return truth(t268)?V(1.0):t268;})();return !truth(t267)?V(0.0):t267;})()});
call(e->slot(1,11),Args{lit255,([&](){V t269=([&](){V t270=get(e->slot(1,3),lit95);return truth(t270)?V(1.0):t270;})();return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,11),Args{lit256,([&](){V t271=([&](){V t272=get(e->slot(1,3),lit96);return truth(t272)?V(1.0):t272;})();return !truth(t271)?V(0.0):t271;})()});
call(e->slot(1,11),Args{lit257,([&](){V t273=([&](){V t274=get(e->slot(1,3),lit97);return truth(t274)?V(1.0):t274;})();return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,11),Args{lit258,([&](){V t275=([&](){V t276=get(e->slot(1,3),lit98);return truth(t276)?V(1.0):t276;})();return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,11),Args{lit259,([&](){V t277=([&](){V t278=get(e->slot(1,3),lit99);return truth(t278)?V(1.0):t278;})();return !truth(t277)?V(0.0):t277;})()});
call(e->slot(1,11),Args{lit260,([&](){V t279=([&](){V t280=get(e->slot(1,3),lit100);return truth(t280)?V(1.0):t280;})();return !truth(t279)?V(0.0):t279;})()});
call(e->slot(1,11),Args{lit261,([&](){V t281=([&](){V t282=get(e->slot(1,3),lit101);return truth(t282)?V(1.0):t282;})();return !truth(t281)?V(0.0):t281;})()});
call(e->slot(1,11),Args{lit262,([&](){V t283=([&](){V t284=get(e->slot(1,3),lit102);return truth(t284)?V(1.0):t284;})();return !truth(t283)?V(0.0):t283;})()});
call(e->slot(1,11),Args{lit263,([&](){V t285=([&](){V t286=get(e->slot(1,3),lit103);return truth(t286)?V(1.0):t286;})();return !truth(t285)?V(0.0):t285;})()});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t287=num(V(0.0)),t288=num(V(3.0)),t289=num(V(1.0));for(double t290=t287;(t289>0?t290<=t288:t290>=t288);t290+=t289){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t290);call(e->slot(2,31),Args{e->slot(0,0)});
}}
call(e->slot(1,32),Args{});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t291=V(false);refs[0].put(std::move(t291));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t292=V(false);refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t293=V(false);refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t294=V(false);refs[0].put(std::move(t294));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t295=V(false);refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t296=V(false);refs[0].put(std::move(t296));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t297=V(false);refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t298=V(false);refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t299=V(false);refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t300=V(false);refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t301=V(false);refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t302=V(false);refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t303=V(false);refs[0].put(std::move(t303));}
return Args{};});
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t304=lit87;refs[0].put(std::move(t304));}
call(e->slot(1,33),Args{});
return Args{};}));
Ref(e->slot(0,1),lit265).put(native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t305=add(([&](){V t306=get(e->slot(1,3),lit88);return !truth(t306)?V(0.0):t306;})(),V(1.0));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t307=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t307));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t308=lit266;refs[0].put(std::move(t308));}
call(e->slot(1,33),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t309=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0001),V(0.1)}));refs[0].put(std::move(t309));}
call(e->slot(1,14),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t310=([&](){V t311=e->slot(0,1);return !truth(t311)?first(call(e->slot(1,15),Args{})):t311;})();refs[0].put(std::move(t310));}
{V t312=first(call(e->slot(1,16),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t312);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit85)};V t313=first(call(e->slot(1,18),Args{e->slot(0,1)}));refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t314=ne(e->slot(0,3),V());refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit90)};V t315=V(!truth(get(e->slot(1,3),lit89)));refs[0].put(std::move(t315));}
call(e->slot(1,34),Args{});
{V t316=V(0.0);e->slot(0,4)=std::move(t316);}
{V t317=V(0.0);e->slot(0,5)=std::move(t317);}
{V t318=V(0.0);e->slot(0,6)=std::move(t318);}
{V t319=V(0.0);e->slot(0,7)=std::move(t319);}
{V t320=V(1.2);e->slot(0,8)=std::move(t320);}
{V t321=V(0.0);e->slot(0,9)=std::move(t321);}
{V t322=V(0.0);e->slot(0,10)=std::move(t322);}
{V t323=V(false);e->slot(0,11)=std::move(t323);}
{double t324=num(V(0.0)),t325=num(V(3.0)),t326=num(V(1.0));for(double t327=t324;(t326>0?t327<=t325:t327>=t325);t327+=t326){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t327);{V t328=first(call(e->slot(2,17),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t328);}
if(truth(([&](){V t329=e->slot(0,1);return !truth(t329)?get(e->slot(2,3),lit90):t329;})())){call(e->slot(2,29),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0)});
}else{call(e->slot(2,30),Args{e->slot(0,0),e->slot(1,0)});
}
if(truth(([&](){V t330=([&](){V t331=gt(get(get(e->slot(2,3),lit50),e->slot(0,0)),get(get(e->slot(2,1),lit5),lit7));return !truth(t331)?gt(get(get(e->slot(2,3),lit55),e->slot(0,0)),V(0.001)):t331;})();return !truth(t330)?gt(get(get(e->slot(2,3),lit48),e->slot(0,0)),V(0.001)):t330;})())){{std::array<Ref,1> refs{Ref(e,1,11)};V t332=V(true);refs[0].put(std::move(t332));}
}
if(truth(get(get(e->slot(2,3),lit56),e->slot(0,0)))){{std::array<Ref,1> refs{Ref(e,1,10)};V t333=add(e->slot(1,10),V(1.0));refs[0].put(std::move(t333));}
}
{std::array<Ref,1> refs{Ref(e,1,4)};V t334=add(e->slot(1,4),([&](){V t335=get(get(e->slot(2,3),lit48),e->slot(0,0));return !truth(t335)?V(0.0):t335;})());refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t336=add(e->slot(1,5),([&](){V t337=get(get(e->slot(2,3),lit49),e->slot(0,0));return !truth(t337)?V(0.0):t337;})());refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t338=add(e->slot(1,6),([&](){V t339=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t339)?V(0.0):t339;})());refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t340=add(e->slot(1,7),([&](){V t341=get(get(e->slot(2,3),lit50),e->slot(0,0));return !truth(t341)?V(0.0):t341;})());refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t342=first(call(get(e->get("math"),lit267),Args{e->slot(1,8),([&](){V t343=get(get(e->slot(2,3),lit49),e->slot(0,0));return !truth(t343)?V(0.0):t343;})()}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t344=first(call(get(e->get("math"),lit206),Args{e->slot(1,9),([&](){V t345=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t345)?V(0.0):t345;})()}));refs[0].put(std::move(t344));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit78)};V t346=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit79)};V t347=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t347));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit80)};V t348=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit81)};V t349=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit82)};V t350=e->slot(0,8);refs[0].put(std::move(t350));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit83)};V t351=e->slot(0,9);refs[0].put(std::move(t351));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit84)};V t352=e->slot(0,10);refs[0].put(std::move(t352));}
if(truth(get(e->slot(1,3),lit89))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t353=lit268;refs[0].put(std::move(t353));}
}else if(truth(e->slot(0,11))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t354=lit269;refs[0].put(std::move(t354));}
}else if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t355=lit270;refs[0].put(std::move(t355));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t356=lit271;refs[0].put(std::move(t356));}
}


call(e->slot(1,33),Args{});
return Args{};}));
Ref(e->slot(0,1),lit272).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t357=get(get(e->slot(1,3),lit48),e->slot(0,0));return !truth(t357)?V(0.0):t357;})()};
return Args{};}));
Ref(e->slot(0,1),lit273).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t358=get(get(e->slot(1,3),lit49),e->slot(0,0));return !truth(t358)?V(0.0):t358;})()};
return Args{};}));
Ref(e->slot(0,1),lit274).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t359=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t359)?V(0.0):t359;})()};
return Args{};}));
Ref(e->slot(0,1),lit275).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t360=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t360)?V(0.0):t360;})()};
return Args{};}));
Ref(e->slot(0,1),lit276).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,3)};
}
return Args{([&](){V z=table();set(z,lit277,([&](){V t361=get(e->slot(1,2),e->slot(0,0));return !truth(t361)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t361;})());set(z,lit48,([&](){V t362=get(get(e->slot(1,3),lit48),e->slot(0,0));return !truth(t362)?V(0.0):t362;})());set(z,lit49,([&](){V t363=get(get(e->slot(1,3),lit49),e->slot(0,0));return !truth(t363)?V(0.0):t363;})());set(z,lit278,([&](){V t364=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t364)?V(0.0):t364;})());set(z,lit50,([&](){V t365=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t365)?V(0.0):t365;})());set(z,lit56,([&](){V t366=([&](){V t367=get(get(e->slot(1,3),lit56),e->slot(0,0));return truth(t367)?V(true):t367;})();return !truth(t366)?V(false):t366;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit279).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t368=([&](){V t369=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t369)?V(0.0):t369;})();e->slot(0,0)=std::move(t368);}
return call(get(e->get("string"),lit280),Args{concat(lit281,lit282),([&](){V t370=get(e->slot(2,2),e->slot(0,0));return !truth(t370)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t370;})(),([&](){V t371=get(get(e->slot(2,3),lit48),e->slot(0,0));return !truth(t371)?V(0.0):t371;})(),([&](){V t372=get(get(e->slot(2,3),lit49),e->slot(0,0));return !truth(t372)?V(0.0):t372;})(),([&](){V t373=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t373)?V(0.0):t373;})(),([&](){V t374=get(get(e->slot(2,3),lit50),e->slot(0,0));return !truth(t374)?V(0.0):t374;})(),([&](){V t375=get(get(e->slot(2,3),lit52),e->slot(0,0));return !truth(t375)?V(0.0):t375;})(),([&](){V t376=get(get(e->slot(2,3),lit53),e->slot(0,0));return !truth(t376)?V(0.0):t376;})(),([&](){V t377=([&](){V t378=get(get(e->slot(2,3),lit56),e->slot(0,0));return truth(t378)?lit283:t378;})();return !truth(t377)?lit284:t377;})(),([&](){V t379=get(get(e->slot(2,3),lit61),e->slot(0,0));return !truth(t379)?V(1.0):t379;})(),([&](){V t380=get(get(e->slot(2,3),lit63),e->slot(0,0));return !truth(t380)?V(0.0):t380;})()});
}
return call(get(e->get("string"),lit280),Args{concat(lit285,concat(lit286,concat(lit287,concat(lit288,lit289)))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit86)})),([&](){V t381=get(e->slot(1,3),lit88);return !truth(t381)?V(0.0):t381;})(),([&](){V t382=([&](){V t383=get(e->slot(1,3),lit89);return truth(t383)?lit290:t383;})();return !truth(t382)?lit291:t382;})(),([&](){V t384=([&](){V t385=get(e->slot(1,3),lit90);return truth(t385)?lit283:t385;})();return !truth(t384)?lit284:t384;})(),([&](){V t386=get(get(e->slot(1,3),lit48),V(0.0));return !truth(t386)?V(0.0):t386;})(),([&](){V t387=get(get(e->slot(1,3),lit48),V(1.0));return !truth(t387)?V(0.0):t387;})(),([&](){V t388=get(get(e->slot(1,3),lit48),V(2.0));return !truth(t388)?V(0.0):t388;})(),([&](){V t389=get(get(e->slot(1,3),lit48),V(3.0));return !truth(t389)?V(0.0):t389;})(),([&](){V t390=get(e->slot(1,3),lit78);return !truth(t390)?V(0.0):t390;})(),([&](){V t391=get(get(e->slot(1,3),lit49),V(0.0));return !truth(t391)?V(0.0):t391;})(),([&](){V t392=get(get(e->slot(1,3),lit49),V(1.0));return !truth(t392)?V(0.0):t392;})(),([&](){V t393=get(get(e->slot(1,3),lit49),V(2.0));return !truth(t393)?V(0.0):t393;})(),([&](){V t394=get(get(e->slot(1,3),lit49),V(3.0));return !truth(t394)?V(0.0):t394;})(),([&](){V t395=get(e->slot(1,3),lit79);return !truth(t395)?V(0.0):t395;})(),([&](){V t396=get(e->slot(1,3),lit82);return !truth(t396)?V(0.0):t396;})(),([&](){V t397=get(get(e->slot(1,3),lit55),V(0.0));return !truth(t397)?V(0.0):t397;})(),([&](){V t398=get(get(e->slot(1,3),lit55),V(1.0));return !truth(t398)?V(0.0):t398;})(),([&](){V t399=get(get(e->slot(1,3),lit55),V(2.0));return !truth(t399)?V(0.0):t399;})(),([&](){V t400=get(get(e->slot(1,3),lit55),V(3.0));return !truth(t400)?V(0.0):t400;})(),([&](){V t401=get(e->slot(1,3),lit80);return !truth(t401)?V(0.0):t401;})(),([&](){V t402=get(e->slot(1,3),lit83);return !truth(t402)?V(0.0):t402;})(),([&](){V t403=([&](){V t404=get(e->slot(1,3),lit91);return truth(t404)?lit290:t404;})();return !truth(t403)?lit291:t403;})(),([&](){V t405=([&](){V t406=get(e->slot(1,3),lit92);return truth(t406)?lit290:t406;})();return !truth(t405)?lit291:t405;})(),([&](){V t407=([&](){V t408=get(e->slot(1,3),lit93);return truth(t408)?lit290:t408;})();return !truth(t407)?lit291:t407;})(),([&](){V t409=([&](){V t410=get(e->slot(1,3),lit94);return truth(t410)?lit290:t410;})();return !truth(t409)?lit291:t409;})(),([&](){V t411=([&](){V t412=get(e->slot(1,3),lit95);return truth(t412)?lit290:t412;})();return !truth(t411)?lit291:t411;})(),([&](){V t413=([&](){V t414=get(e->slot(1,3),lit96);return truth(t414)?lit290:t414;})();return !truth(t413)?lit291:t413;})(),([&](){V t415=([&](){V t416=get(e->slot(1,3),lit97);return truth(t416)?lit290:t416;})();return !truth(t415)?lit291:t415;})(),([&](){V t417=([&](){V t418=get(e->slot(1,3),lit98);return truth(t418)?lit290:t418;})();return !truth(t417)?lit291:t417;})(),([&](){V t419=([&](){V t420=get(e->slot(1,3),lit100);return truth(t420)?lit290:t420;})();return !truth(t419)?lit291:t419;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
