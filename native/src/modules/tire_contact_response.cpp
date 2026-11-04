// Generated native C++ from pinned tire_contact_response.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("responseTau");
static const V lit7("lossTau");
static const V lit8("energyTau");
static const V lit9("relaxTau");
static const V lit10("complianceTau");
static const V lit11("contactLossGain");
static const V lit12("gripLossGain");
static const V lit13("energyPushGain");
static const V lit14("suspInputMin");
static const V lit15("suspInputMax");
static const V lit16("relaxMin");
static const V lit17("relaxMax");
static const V lit18("complianceGain");
static const V lit19("loadRef");
static const V lit20("loadInfluence");
static const V lit21("hopSuspPushGain");
static const V lit22("memoryRelaxGain");
static const V lit23("armComplianceGain");
static const V lit24("driveRearEnergyGain");
static const V lit25("lsdRearRelaxGain");
static const V lit26("carcassDelayLossGain");
static const V lit27("carcassReturnGripGain");
static const V lit28("carcassHysteresisRelaxGain");
static const V lit29("carcassSupportGain");
static const V lit30("recoveryGripGain");
static const V lit31("recoveryLossCutGain");
static const V lit32("snapLossGain");
static const V lit33("dirtyReturnLossGain");
static const V lit34("roadShockEnergyGain");
static const V lit35("roadSurfaceLossGain");
static const V lit36("loadPathLossGain");
static const V lit37("thermalLossGain");
static const V lit38("tireComplianceRelaxGain");
static const V lit39("tireDeflectionComplianceGain");
static const V lit40("minQuality");
static const V lit41("maxQuality");
static const V lit42("minEffectiveGrip");
static const V lit43("maxEffectiveGrip");
static const V lit44("maxLoss");
static const V lit45("maxEnergy");
static const V lit46("maxComplianceInput");
static const V lit47("minDt");
static const V lit48("maxDt");
static const V lit49("debugStoreInterval");
static const V lit50("contactQuality");
static const V lit51("effectiveGrip");
static const V lit52("contactLoss");
static const V lit53("gripLoss");
static const V lit54("energyPush");
static const V lit55("suspInputScale");
static const V lit56("tireRelaxScale");
static const V lit57("complianceInput");
static const V lit58("load");
static const V lit59("memory");
static const V lit60("hop");
static const V lit61("armCamber");
static const V lit62("armToe");
static const V lit63("carcassSupport");
static const V lit64("carcassGripGate");
static const V lit65("carcassDelay");
static const V lit66("carcassReturn");
static const V lit67("carcassHysteresis");
static const V lit68("recovery");
static const V lit69("snapRisk");
static const V lit70("dirtyReturn");
static const V lit71("roadShock");
static const V lit72("surfaceLimit");
static const V lit73("pathLoss");
static const V lit74("tireCompliance");
static const V lit75("tireDeflection");
static const V lit76("thermalStress");
static const V lit77("avgQuality");
static const V lit78("avgGrip");
static const V lit79("avgLoss");
static const V lit80("avgEnergy");
static const V lit81("avgSuspInput");
static const V lit82("avgRelaxScale");
static const V lit83("avgComplianceInput");
static const V lit84("minQualityLive");
static const V lit85("minGripLive");
static const V lit86("maxLossLive");
static const V lit87("maxEnergyLive");
static const V lit88("maxComplianceLive");
static const V lit89("status");
static const V lit90("INIT");
static const V lit91("updateCount");
static const V lit92("wheelsValid");
static const V lit93("storeOnly");
static const V lit94("coreLinked");
static const V lit95("contactQualityLinked");
static const V lit96("memoryLinked");
static const V lit97("hopLinked");
static const V lit98("armLinked");
static const V lit99("drivetrainLinked");
static const V lit100("lsdLinked");
static const V lit101("carcassLinked");
static const V lit102("recoveryLinked");
static const V lit103("roadLinked");
static const V lit104("loadPathLinked");
static const V lit105("complianceLinked");
static const V lit106("thermalLinked");
static const V lit107("debugStoreTimer");
static const V lit108("debugStoreNow");
static const V lit109("state");
static const V lit110("debug");
static const V lit111("huge");
static const V lit112("abs");
static const V lit113("exp");
static const V lit114("safeLoadRaw");
static const V lit115("safeStore");
static const V lit116("safeField");
static const V lit117("getCar");
static const V lit118("wheels");
static const V lit119("loadK");
static const V lit120("ngp_tc_load_");
static const V lit121("ngp_cp_load_");
static const V lit122("ngp_wheel_load_");
static const V lit123("ngp_load_wheel_");
static const V lit124("ngp_dlt_load_");
static const V lit125("ngp_tc_contact_");
static const V lit126("ngp_tc_grip_");
static const V lit127("ngp_tc_energy_");
static const V lit128("ngp_contact_quality_");
static const V lit129("ngp_contact_raw_");
static const V lit130("ngp_contact_grip_gate_");
static const V lit131("ngp_carcass_grip_gate_");
static const V lit132("ngp_cp_grip_");
static const V lit133("ngp_tire_slip_energy_");
static const V lit134("ngp_cp_slip_energy_");
static const V lit135("ngp_carcass_heat_seed_");
static const V lit136("ngp_tire_memory_");
static const V lit137("ngp_rubber_memory_");
static const V lit138("ngp_memory_");
static const V lit139("ngp_slide_memory_");
static const V lit140("ngp_tirehop_energy_");
static const V lit141("ngp_tire_hop_energy_");
static const V lit142("ngp_tire_hop_");
static const V lit143("ngp_control_arm_camber_");
static const V lit144("ngp_arm_camber_");
static const V lit145("ngp_compliance_virtual_camber_");
static const V lit146("ngp_control_arm_toe_");
static const V lit147("ngp_arm_toe_");
static const V lit148("ngp_compliance_virtual_toe_");
static const V lit149("ngp_carcass_support_");
static const V lit150("ngp_tire_contact_delay_");
static const V lit151("ngp_contact_delay_");
static const V lit152("ngp_tire_return_force_");
static const V lit153("ngp_return_force_");
static const V lit154("ngp_carcass_hysteresis_");
static const V lit155("ngp_slip_recovery_rate_");
static const V lit156("ngp_recovery_rate_");
static const V lit157("ngp_slip_snap_risk_");
static const V lit158("ngp_snap_risk_");
static const V lit159("ngp_slip_dirty_return_");
static const V lit160("ngp_dirty_return_");
static const V lit161("ngp_road_shock_");
static const V lit162("ngp_rii_shock_");
static const V lit163("ngp_road_impact_");
static const V lit164("ngp_road_surface_limit_");
static const V lit165("ngp_rii_surface_limit_");
static const V lit166("ngp_load_path_loss_");
static const V lit167("ngp_road_path_loss_");
static const V lit168("ngp_rii_path_loss_");
static const V lit169("ngp_tire_compliance_");
static const V lit170("ngp_tcomp_compliance_");
static const V lit171("ngp_tire_deflection_");
static const V lit172("ngp_tcomp_deflection_");
static const V lit173("ngp_slip_thermal_memory_");
static const V lit174("ngp_tire_memory_thermal_");
static const V lit175("ngp_thermal_stress_");
static const V lit176("ngp_thermal_stress");
static const V lit177("ngp_virtual_thermal_stress");
static const V lit178("ngp_drive_torque");
static const V lit179("ngp_drivetrain_torque");
static const V lit180("ngp_dt_torque");
static const V lit181("ngp_lsd_lock");
static const V lit182("ngp_diff_lock");
static const V lit183("max");
static const V lit184("ngp_tcr_quality_");
static const V lit185("ngp_tcr_effective_grip_");
static const V lit186("ngp_tcr_contact_loss_");
static const V lit187("ngp_tcr_grip_loss_");
static const V lit188("ngp_tcr_energy_push_");
static const V lit189("ngp_tcr_susp_input_");
static const V lit190("ngp_tcr_relax_scale_");
static const V lit191("ngp_tcr_compliance_input_");
static const V lit192("ngp_tire_contact_quality_");
static const V lit193("ngp_tire_effective_grip_");
static const V lit194("ngp_tire_contact_loss_");
static const V lit195("ngp_tire_response_scale_");
static const V lit196("ngp_susp_contact_input_");
static const V lit197("ngp_susp_contact_scale_");
static const V lit198("ngp_compliance_contact_input_");
static const V lit199("ngp_tcr_load_");
static const V lit200("ngp_tcr_memory_");
static const V lit201("ngp_tcr_hop_");
static const V lit202("ngp_tresp_quality_");
static const V lit203("ngp_tresp_grip_");
static const V lit204("ngp_tresp_loss_");
static const V lit205("ngp_tresp_energy_");
static const V lit206("ngp_tresp_relax_");
static const V lit207("ngp_tresp_compliance_");
static const V lit208("ngp_tcr_carcass_support_");
static const V lit209("ngp_tcr_carcass_gate_");
static const V lit210("ngp_tcr_carcass_delay_");
static const V lit211("ngp_tcr_carcass_return_");
static const V lit212("ngp_tcr_recovery_");
static const V lit213("ngp_tcr_snap_");
static const V lit214("ngp_tcr_road_shock_");
static const V lit215("ngp_tcr_path_loss_");
static const V lit216("ngp_tcr_thermal_");
static const V lit217("ngp_tcr_status");
static const V lit218("ngp_tcr_update_count");
static const V lit219("ngp_tcr_wheels_valid");
static const V lit220("ngp_tcr_store_only");
static const V lit221("ngp_tire_avg_quality");
static const V lit222("ngp_tire_avg_effective_grip");
static const V lit223("ngp_tire_avg_loss");
static const V lit224("ngp_tire_avg_response_energy");
static const V lit225("ngp_tcr_avg_susp_input");
static const V lit226("ngp_tcr_avg_relax_scale");
static const V lit227("ngp_tcr_avg_compliance_input");
static const V lit228("ngp_tcr_min_quality");
static const V lit229("ngp_tcr_min_grip");
static const V lit230("ngp_tcr_max_loss");
static const V lit231("ngp_tcr_max_energy");
static const V lit232("ngp_tcr_max_compliance");
static const V lit233("ngp_tresp_avg_quality");
static const V lit234("ngp_tresp_avg_grip");
static const V lit235("ngp_tresp_avg_loss");
static const V lit236("ngp_tresp_avg_energy");
static const V lit237("ngp_tcr_core_linked");
static const V lit238("ngp_tcr_contact_quality_linked");
static const V lit239("ngp_tcr_memory_linked");
static const V lit240("ngp_tcr_hop_linked");
static const V lit241("ngp_tcr_arm_linked");
static const V lit242("ngp_tcr_drivetrain_linked");
static const V lit243("ngp_tcr_lsd_linked");
static const V lit244("ngp_tcr_carcass_linked");
static const V lit245("ngp_tcr_recovery_linked");
static const V lit246("ngp_tcr_road_linked");
static const V lit247("ngp_tcr_load_path_linked");
static const V lit248("ngp_tcr_compliance_linked");
static const V lit249("ngp_tcr_thermal_linked");
static const V lit250("init");
static const V lit251("update");
static const V lit252("BAD DT");
static const V lit253("min");
static const V lit254("RUNNING");
static const V lit255("NO WHEELS");
static const V lit256("STORE ONLY");
static const V lit257("getQuality");
static const V lit258("getGrip");
static const V lit259("getLoss");
static const V lit260("getEnergy");
static const V lit261("getSuspInput");
static const V lit262("getRelaxScale");
static const V lit263("getComplianceInput");
static const V lit264("getState");
static const V lit265("quality");
static const V lit266("grip");
static const V lit267("loss");
static const V lit268("energy");
static const V lit269("suspInput");
static const V lit270("relaxScale");
static const V lit271("debugStr");
static const V lit272("format");
static const V lit273("%s Q %.2f Grip %.2f Loss %.2f Energy %.2f\n");
static const V lit274("Susp %.2f Relax %.2f Comp %.2f Load %.0f\n");
static const V lit275("Carc Sup %.2f Delay %.2f Ret %.2f Road %.2f Path %.2f");
static const V lit276("Status %s / Count %.0f / Wheels %s / StoreOnly %s\n");
static const V lit277("Quality %.2f Grip %.2f Loss %.2f Energy %.2f\n");
static const V lit278("Susp %.2f Relax %.2f Comp %.2f\n");
static const V lit279("Links Core:%s CQ:%s Carc:%s Rec:%s Road:%s LP:%s Comp:%s Therm:%s");
static const V lit280("OK");
static const V lit281("NIL");
static const V lit282("YES");
static const V lit283("NO");
V load_tire_contact_response(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(34);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(0.055));set(z,lit7,V(0.07));set(z,lit8,V(0.08));set(z,lit9,V(0.075));set(z,lit10,V(0.075));set(z,lit11,V(0.65));set(z,lit12,V(0.85));set(z,lit13,V(0.75));set(z,lit14,V(0.55));set(z,lit15,V(1.25));set(z,lit16,V(0.75));set(z,lit17,V(1.35));set(z,lit18,V(0.65));set(z,lit19,V(3200.0));set(z,lit20,V(0.2));set(z,lit21,V(0.16));set(z,lit22,V(0.1));set(z,lit23,V(0.08));set(z,lit24,V(0.08));set(z,lit25,V(0.06));set(z,lit26,V(0.14));set(z,lit27,V(0.08));set(z,lit28,V(0.08));set(z,lit29,V(0.12));set(z,lit30,V(0.1));set(z,lit31,V(0.08));set(z,lit32,V(0.16));set(z,lit33,V(0.08));set(z,lit34,V(0.1));set(z,lit35,V(0.08));set(z,lit36,V(0.1));set(z,lit37,V(0.08));set(z,lit38,V(0.08));set(z,lit39,V(0.1));set(z,lit40,V(0.0));set(z,lit41,V(1.2));set(z,lit42,V(0.35));set(z,lit43,V(1.2));set(z,lit44,V(1.0));set(z,lit45,V(1.0));set(z,lit46,V(1.0));set(z,lit47,V(0.0001));set(z,lit48,V(0.1));set(z,lit49,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit50,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit51,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit52,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit53,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit54,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,V(1.0));set(z,lit78,V(1.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(1.0));set(z,lit82,V(1.0));set(z,lit83,V(0.0));set(z,lit84,V(1.0));set(z,lit85,V(1.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,lit90);set(z,lit91,V(0.0));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(false));set(z,lit103,V(false));set(z,lit104,V(false));set(z,lit105,V(false));set(z,lit106,V(false));set(z,lit107,V(999.0));set(z,lit108,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit111)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit111)))):t9;})())){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t13=first(call(e->slot(1,4),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t13));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit112),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t15=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t16=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t17=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.001)}));refs[0].put(std::move(t17));}
if(truth(le(e->slot(0,3),V(0.0001)))){return Args{e->slot(0,1)};
}
return call(e->slot(1,7),Args{e->slot(0,0),e->slot(0,1),sub(V(1.0),first(call(get(e->get("math"),lit113),Args{divv(V(-num(e->slot(0,2))),e->slot(0,3))})))});
return Args{};});
{V t18=get(e->slot(0,0),lit114);e->slot(0,9)=std::move(t18);}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t19=first(call(e->slot(1,9),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t19);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()});
return Args{};});
{V t22=get(e->slot(0,0),lit115);e->slot(0,11)=std::move(t22);}
{V t23=get(e->slot(0,0),lit116);e->slot(0,12)=std::move(t23);}
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t24=V(!truth(e->get("ac")));return !truth(t24)?V(!truth(get(e->get("ac"),lit117))):t24;})())){return Args{V()};
}
{Args t25=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit117),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t25,0);e->slot(0,1)=arg(t25,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,12),Args{e->slot(0,0),lit118,V()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t26=first(call(e->slot(1,14),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t26);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
return Args{([&](){V t27=first(call(e->slot(1,12),Args{e->slot(0,2),e->slot(0,1),V()}));return !truth(t27)?first(call(e->slot(1,12),Args{e->slot(0,2),add(e->slot(0,1),V(1.0)),V()})):t27;})()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t28=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t28);}
{double t29=num(V(1.0)),t30=num(length(e->slot(0,1))),t31=num(V(1.0));for(double t32=t29;(t31>0?t32<=t30:t32>=t30);t32+=t31){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t32);{V t33=first(call(e->slot(2,9),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t33);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t34=e->slot(1,0);return !truth(t34)?V(0.0):t34;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{e->slot(0,0),V()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t35=add(([&](){V t36=get(e->slot(1,3),lit107);return !truth(t36)?V(0.0):t36;})(),([&](){V t37=e->slot(0,0);return !truth(t37)?V(0.0):t37;})());refs[0].put(std::move(t35));}
if(truth(ge(get(e->slot(1,3),lit107),get(get(e->slot(1,1),lit5),lit49)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t38=V(0.0);refs[0].put(std::move(t38));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t39=V(true);refs[0].put(std::move(t39));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t40=V(false);refs[0].put(std::move(t40));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t41=V();e->slot(0,2)=std::move(t41);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,0,2)};V t42=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),joined(Args{e->slot(0,1),lit58},call(e->slot(1,12),Args{e->slot(0,1),lit119,V()})))),V()}));refs[0].put(std::move(t42));}
}
{V t43=first(call(e->slot(1,9),Args{concat(lit120,e->slot(0,0))}));e->slot(0,3)=std::move(t43);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t44=first(call(e->slot(1,9),Args{concat(lit121,e->slot(0,0))}));refs[0].put(std::move(t44));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t45=first(call(e->slot(1,9),Args{concat(lit122,e->slot(0,0))}));refs[0].put(std::move(t45));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t46=first(call(e->slot(1,9),Args{concat(lit123,e->slot(0,0))}));refs[0].put(std::move(t46));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t47=V(true);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t48=first(call(e->slot(1,4),Args{e->slot(0,3),([&](){V t49=e->slot(0,2);return !truth(t49)?get(get(e->slot(1,1),lit5),lit19):t49;})()}));refs[0].put(std::move(t48));}
if(truth(ne(e->slot(0,2),V()))){return Args{add(mul(e->slot(0,2),V(0.65)),mul(e->slot(0,3),V(0.35)))};
}
return Args{e->slot(0,3)};
}
{V t50=first(call(e->slot(1,9),Args{concat(lit124,e->slot(0,0))}));e->slot(0,4)=std::move(t50);}
if(truth(ne(e->slot(0,4),V()))){return Args{add(get(get(e->slot(1,1),lit5),lit19),first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})))};
}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
return Args{get(get(e->slot(1,1),lit5),lit19)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t51=first(call(e->slot(1,9),Args{concat(lit125,e->slot(0,0))}));e->slot(0,2)=std::move(t51);}
{V t52=first(call(e->slot(1,9),Args{concat(lit126,e->slot(0,0))}));e->slot(0,3)=std::move(t52);}
{V t53=first(call(e->slot(1,9),Args{concat(lit127,e->slot(0,0))}));e->slot(0,4)=std::move(t53);}
{V t54=first(call(e->slot(1,9),Args{concat(lit120,e->slot(0,0))}));e->slot(0,5)=std::move(t54);}
if(truth(([&](){V t55=([&](){V t56=([&](){V t57=ne(e->slot(0,2),V());return !truth(t57)?ne(e->slot(0,3),V()):t57;})();return !truth(t56)?ne(e->slot(0,4),V()):t56;})();return !truth(t55)?ne(e->slot(0,5),V()):t55;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t58=V(true);refs[0].put(std::move(t58));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t59=first(call(e->slot(1,9),Args{concat(lit128,e->slot(0,0))}));refs[0].put(std::move(t59));}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t60=first(call(e->slot(1,9),Args{concat(lit129,e->slot(0,0))}));refs[0].put(std::move(t60));}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t61=V(true);refs[0].put(std::move(t61));}
}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t62=first(call(e->slot(1,9),Args{concat(lit130,e->slot(0,0))}));refs[0].put(std::move(t62));}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t63=first(call(e->slot(1,9),Args{concat(lit131,e->slot(0,0))}));refs[0].put(std::move(t63));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t64=first(call(e->slot(1,9),Args{concat(lit132,e->slot(0,0))}));refs[0].put(std::move(t64));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t65=V(true);refs[0].put(std::move(t65));}
}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t66=first(call(e->slot(1,9),Args{concat(lit133,e->slot(0,0))}));refs[0].put(std::move(t66));}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t67=first(call(e->slot(1,9),Args{concat(lit134,e->slot(0,0))}));refs[0].put(std::move(t67));}
}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t68=first(call(e->slot(1,9),Args{concat(lit135,e->slot(0,0))}));refs[0].put(std::move(t68));}
}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t69=first(call(e->slot(1,18),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t69));}
}
return joined(Args{first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)})),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(1.0)})),V(0.0),V(1.25)})),first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}))},call(e->slot(1,4),Args{e->slot(0,5),get(get(e->slot(1,1),lit5),lit19)}));
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t70=first(call(e->slot(1,9),Args{concat(lit136,e->slot(0,0))}));e->slot(0,1)=std::move(t70);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t71=first(call(e->slot(1,9),Args{concat(lit137,e->slot(0,0))}));refs[0].put(std::move(t71));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t72=first(call(e->slot(1,9),Args{concat(lit138,e->slot(0,0))}));refs[0].put(std::move(t72));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t73=first(call(e->slot(1,9),Args{concat(lit139,e->slot(0,0))}));refs[0].put(std::move(t73));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t74=V(true);refs[0].put(std::move(t74));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t75=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t75));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t76=first(call(e->slot(1,9),Args{concat(lit140,e->slot(0,0))}));e->slot(0,1)=std::move(t76);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t77=first(call(e->slot(1,9),Args{concat(lit141,e->slot(0,0))}));refs[0].put(std::move(t77));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t78=first(call(e->slot(1,9),Args{concat(lit142,e->slot(0,0))}));refs[0].put(std::move(t78));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t79=V(true);refs[0].put(std::move(t79));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t80=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t80));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t81=first(call(e->slot(1,9),Args{concat(lit143,e->slot(0,0))}));e->slot(0,1)=std::move(t81);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t82=first(call(e->slot(1,9),Args{concat(lit144,e->slot(0,0))}));refs[0].put(std::move(t82));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t83=first(call(e->slot(1,9),Args{concat(lit145,e->slot(0,0))}));refs[0].put(std::move(t83));}
}
{V t84=first(call(e->slot(1,9),Args{concat(lit146,e->slot(0,0))}));e->slot(0,2)=std::move(t84);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t85=first(call(e->slot(1,9),Args{concat(lit147,e->slot(0,0))}));refs[0].put(std::move(t85));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t86=first(call(e->slot(1,9),Args{concat(lit148,e->slot(0,0))}));refs[0].put(std::move(t86));}
}
if(truth(([&](){V t87=ne(e->slot(0,1),V());return !truth(t87)?ne(e->slot(0,2),V()):t87;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t88=V(true);refs[0].put(std::move(t88));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t89=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t89));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t90=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t90));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);{V t91=first(call(e->slot(1,9),Args{concat(lit149,e->slot(0,0))}));e->slot(0,1)=std::move(t91);}
{V t92=first(call(e->slot(1,9),Args{concat(lit131,e->slot(0,0))}));e->slot(0,2)=std::move(t92);}
{V t93=first(call(e->slot(1,9),Args{concat(lit150,e->slot(0,0))}));e->slot(0,3)=std::move(t93);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t94=first(call(e->slot(1,9),Args{concat(lit151,e->slot(0,0))}));refs[0].put(std::move(t94));}
}
{V t95=first(call(e->slot(1,9),Args{concat(lit152,e->slot(0,0))}));e->slot(0,4)=std::move(t95);}
if(truth(eq(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,4)};V t96=first(call(e->slot(1,9),Args{concat(lit153,e->slot(0,0))}));refs[0].put(std::move(t96));}
}
{V t97=first(call(e->slot(1,9),Args{concat(lit154,e->slot(0,0))}));e->slot(0,5)=std::move(t97);}
if(truth(([&](){V t98=([&](){V t99=([&](){V t100=([&](){V t101=ne(e->slot(0,1),V());return !truth(t101)?ne(e->slot(0,2),V()):t101;})();return !truth(t100)?ne(e->slot(0,3),V()):t100;})();return !truth(t99)?ne(e->slot(0,4),V()):t99;})();return !truth(t98)?ne(e->slot(0,5),V()):t98;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t102=V(true);refs[0].put(std::move(t102));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t103=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t104=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),get(get(e->slot(1,3),lit63),e->slot(0,0))})),V(0.0),V(1.2)}));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t105=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t106=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t106));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t107=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t107));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t108=first(call(e->slot(1,9),Args{concat(lit155,e->slot(0,0))}));e->slot(0,1)=std::move(t108);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t109=first(call(e->slot(1,9),Args{concat(lit156,e->slot(0,0))}));refs[0].put(std::move(t109));}
}
{V t110=first(call(e->slot(1,9),Args{concat(lit157,e->slot(0,0))}));e->slot(0,2)=std::move(t110);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t111=first(call(e->slot(1,9),Args{concat(lit158,e->slot(0,0))}));refs[0].put(std::move(t111));}
}
{V t112=first(call(e->slot(1,9),Args{concat(lit159,e->slot(0,0))}));e->slot(0,3)=std::move(t112);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t113=first(call(e->slot(1,9),Args{concat(lit160,e->slot(0,0))}));refs[0].put(std::move(t113));}
}
if(truth(([&](){V t114=([&](){V t115=ne(e->slot(0,1),V());return !truth(t115)?ne(e->slot(0,2),V()):t115;})();return !truth(t114)?ne(e->slot(0,3),V()):t114;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t116=V(true);refs[0].put(std::move(t116));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t117=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t118=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t119=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t119));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t120=first(call(e->slot(1,9),Args{concat(lit161,e->slot(0,0))}));e->slot(0,1)=std::move(t120);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t121=first(call(e->slot(1,9),Args{concat(lit162,e->slot(0,0))}));refs[0].put(std::move(t121));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t122=first(call(e->slot(1,9),Args{concat(lit163,e->slot(0,0))}));refs[0].put(std::move(t122));}
}
{V t123=first(call(e->slot(1,9),Args{concat(lit164,e->slot(0,0))}));e->slot(0,2)=std::move(t123);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t124=first(call(e->slot(1,9),Args{concat(lit165,e->slot(0,0))}));refs[0].put(std::move(t124));}
}
{V t125=first(call(e->slot(1,9),Args{concat(lit166,e->slot(0,0))}));e->slot(0,3)=std::move(t125);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t126=first(call(e->slot(1,9),Args{concat(lit167,e->slot(0,0))}));refs[0].put(std::move(t126));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t127=first(call(e->slot(1,9),Args{concat(lit168,e->slot(0,0))}));refs[0].put(std::move(t127));}
}
if(truth(([&](){V t128=ne(e->slot(0,1),V());return !truth(t128)?ne(e->slot(0,2),V()):t128;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t129=V(true);refs[0].put(std::move(t129));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t130=V(true);refs[0].put(std::move(t130));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t131=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit72),e->slot(0,0))};V t132=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit73),e->slot(0,0))};V t133=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t133));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t134=first(call(e->slot(1,9),Args{concat(lit169,e->slot(0,0))}));e->slot(0,1)=std::move(t134);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t135=first(call(e->slot(1,9),Args{concat(lit170,e->slot(0,0))}));refs[0].put(std::move(t135));}
}
{V t136=first(call(e->slot(1,9),Args{concat(lit171,e->slot(0,0))}));e->slot(0,2)=std::move(t136);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t137=first(call(e->slot(1,9),Args{concat(lit172,e->slot(0,0))}));refs[0].put(std::move(t137));}
}
if(truth(([&](){V t138=ne(e->slot(0,1),V());return !truth(t138)?ne(e->slot(0,2),V()):t138;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t139=V(true);refs[0].put(std::move(t139));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit74),e->slot(0,0))};V t140=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(1.0)})),V(0.35),V(1.25)}));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit75),e->slot(0,0))};V t141=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t141));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t142=first(call(e->slot(1,9),Args{concat(lit173,e->slot(0,0))}));e->slot(0,1)=std::move(t142);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t143=first(call(e->slot(1,9),Args{concat(lit174,e->slot(0,0))}));refs[0].put(std::move(t143));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t144=first(call(e->slot(1,9),Args{concat(lit175,e->slot(0,0))}));refs[0].put(std::move(t144));}
}
if(truth(eq(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t145=first(call(e->slot(2,9),Args{lit176}));e->slot(0,0)=std::move(t145);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t146=first(call(e->slot(2,9),Args{lit177}));refs[0].put(std::move(t146));}
}
{std::array<Ref,1> refs{Ref(e,1,1)};V t147=e->slot(0,0);refs[0].put(std::move(t147));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t148=V(true);refs[0].put(std::move(t148));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit76),e->slot(0,0))};V t149=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t149));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(lt(e->slot(0,0),V(2.0)))){return Args{V(0.0),V(0.0)};
}
{V t150=first(call(e->slot(1,9),Args{lit178}));e->slot(0,1)=std::move(t150);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t151=first(call(e->slot(1,9),Args{lit179}));refs[0].put(std::move(t151));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t152=first(call(e->slot(1,9),Args{lit180}));refs[0].put(std::move(t152));}
}
{V t153=first(call(e->slot(1,9),Args{lit181}));e->slot(0,2)=std::move(t153);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t154=first(call(e->slot(1,9),Args{lit182}));refs[0].put(std::move(t154));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t155=V(true);refs[0].put(std::move(t155));}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t156=V(true);refs[0].put(std::move(t156));}
}
return joined(Args{first(call(e->slot(1,6),Args{e->slot(0,1)}))},call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)}));
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,20),Args{e->slot(0,0)});
call(e->slot(1,21),Args{e->slot(0,0)});
call(e->slot(1,22),Args{e->slot(0,0)});
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,24),Args{e->slot(0,0)});
call(e->slot(1,25),Args{e->slot(0,0)});
call(e->slot(1,26),Args{e->slot(0,0)});
call(e->slot(1,27),Args{e->slot(0,0)});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,19);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{Args t157=call(e->slot(1,19),Args{e->slot(0,0),e->slot(0,2)});e->slot(0,3)=arg(t157,0);e->slot(0,4)=arg(t157,1);e->slot(0,5)=arg(t157,2);e->slot(0,6)=arg(t157,3);}
call(e->slot(1,29),Args{e->slot(0,0)});
{Args t158=call(e->slot(1,28),Args{e->slot(0,0)});e->slot(0,7)=arg(t158,0);e->slot(0,8)=arg(t158,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t159=e->slot(0,6);refs[0].put(std::move(t159));}
{V t160=mul(first(call(e->slot(1,5),Args{sub(divv(e->slot(0,6),first(call(get(e->get("math"),lit183),Args{get(get(e->slot(1,1),lit5),lit19),V(1.0)}))),V(1.0)),V(-num(V(1.0))),V(1.0)})),get(get(e->slot(1,1),lit5),lit20));e->slot(0,9)=std::move(t160);}
{V t161=get(get(e->slot(1,3),lit63),e->slot(0,0));e->slot(0,10)=std::move(t161);}
{V t162=get(get(e->slot(1,3),lit64),e->slot(0,0));e->slot(0,11)=std::move(t162);}
{V t163=first(call(e->slot(1,5),Args{sub(sub(sub(add(add(e->slot(0,3),e->slot(0,9)),mul(sub(e->slot(0,10),V(1.0)),get(get(e->slot(1,1),lit5),lit29))),mul(get(get(e->slot(1,3),lit72),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit35))),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit36))),mul(get(get(e->slot(1,3),lit76),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit37))),get(get(e->slot(1,1),lit5),lit40),get(get(e->slot(1,1),lit5),lit41)}));e->slot(0,12)=std::move(t163);}
{V t164=first(call(e->slot(1,5),Args{sub(add(add(add(add(add(add(add(add(mul(sub(V(1.0),e->slot(0,3)),get(get(e->slot(1,1),lit5),lit11)),mul(sub(V(1.0),e->slot(0,4)),get(get(e->slot(1,1),lit5),lit12))),mul(get(get(e->slot(1,3),lit60),e->slot(0,0)),V(0.08))),mul(get(get(e->slot(1,3),lit65),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit26))),mul(get(get(e->slot(1,3),lit69),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit32))),mul(get(get(e->slot(1,3),lit70),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit33))),mul(get(get(e->slot(1,3),lit72),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit35))),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit36))),mul(get(get(e->slot(1,3),lit76),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit37))),mul(get(get(e->slot(1,3),lit68),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit31))),V(0.0),get(get(e->slot(1,1),lit5),lit44)}));e->slot(0,13)=std::move(t164);}
{V t165=first(call(e->slot(1,5),Args{mul(mul(mul(mul(mul(e->slot(0,4),sub(V(1.0),mul(e->slot(0,13),V(0.35)))),add(V(0.84),mul(e->slot(0,11),V(0.16)))),add(V(1.0),mul(get(get(e->slot(1,3),lit66),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit27)))),add(V(1.0),mul(get(get(e->slot(1,3),lit68),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit30)))),sub(V(1.0),mul(get(get(e->slot(1,3),lit59),e->slot(0,0)),V(0.06)))),get(get(e->slot(1,1),lit5),lit42),get(get(e->slot(1,1),lit5),lit43)}));e->slot(0,14)=std::move(t165);}
{V t166=first(call(e->slot(1,5),Args{add(add(add(add(mul(e->slot(0,5),get(get(e->slot(1,1),lit5),lit13)),mul(get(get(e->slot(1,3),lit60),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit21))),mul(get(get(e->slot(1,3),lit71),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit34))),mul(get(get(e->slot(1,3),lit67),e->slot(0,0)),V(0.08))),mul(e->slot(0,7),get(get(e->slot(1,1),lit5),lit24))),V(0.0),get(get(e->slot(1,1),lit5),lit45)}));e->slot(0,15)=std::move(t166);}
{V t167=first(call(e->slot(1,5),Args{sub(add(add(V(1.0),mul(e->slot(0,15),V(0.35))),mul(get(get(e->slot(1,3),lit71),e->slot(0,0)),V(0.08))),mul(e->slot(0,13),V(0.22))),get(get(e->slot(1,1),lit5),lit14),get(get(e->slot(1,1),lit5),lit15)}));e->slot(0,16)=std::move(t167);}
{V t168=first(call(e->slot(1,5),Args{add(add(add(add(add(V(1.0),mul(e->slot(0,13),V(0.35))),mul(get(get(e->slot(1,3),lit59),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit22))),mul(get(get(e->slot(1,3),lit67),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit28))),mul(sub(V(1.0),get(get(e->slot(1,3),lit74),e->slot(0,0))),get(get(e->slot(1,1),lit5),lit38))),mul(e->slot(0,8),get(get(e->slot(1,1),lit5),lit25))),get(get(e->slot(1,1),lit5),lit16),get(get(e->slot(1,1),lit5),lit17)}));e->slot(0,17)=std::move(t168);}
{V t169=first(call(e->slot(1,5),Args{add(add(add(add(add(mul(e->slot(0,13),get(get(e->slot(1,1),lit5),lit18)),mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit61),e->slot(0,0))})),get(get(e->slot(1,1),lit5),lit23))),mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit62),e->slot(0,0))})),get(get(e->slot(1,1),lit5),lit23))),mul(get(get(e->slot(1,3),lit75),e->slot(0,0)),get(get(e->slot(1,1),lit5),lit39))),mul(get(get(e->slot(1,3),lit65),e->slot(0,0)),V(0.12))),mul(get(get(e->slot(1,3),lit73),e->slot(0,0)),V(0.08))),V(0.0),get(get(e->slot(1,1),lit5),lit46)}));e->slot(0,18)=std::move(t169);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit50),e->slot(0,0))};V t170=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit50),e->slot(0,0)),e->slot(0,12),e->slot(0,1),get(get(e->slot(1,1),lit5),lit6)}));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit51),e->slot(0,0))};V t171=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit51),e->slot(0,0)),e->slot(0,14),e->slot(0,1),get(get(e->slot(1,1),lit5),lit6)}));refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit52),e->slot(0,0))};V t172=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit52),e->slot(0,0)),e->slot(0,13),e->slot(0,1),get(get(e->slot(1,1),lit5),lit7)}));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit53),e->slot(0,0))};V t173=first(call(e->slot(1,5),Args{sub(V(1.0),get(get(e->slot(1,3),lit51),e->slot(0,0))),V(0.0),V(1.0)}));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t174=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit54),e->slot(0,0)),e->slot(0,15),e->slot(0,1),get(get(e->slot(1,1),lit5),lit8)}));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t175=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit55),e->slot(0,0)),e->slot(0,16),e->slot(0,1),get(get(e->slot(1,1),lit5),lit6)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t176=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit56),e->slot(0,0)),e->slot(0,17),e->slot(0,1),get(get(e->slot(1,1),lit5),lit9)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t177=first(call(e->slot(1,8),Args{get(get(e->slot(1,3),lit57),e->slot(0,0)),e->slot(0,18),e->slot(0,1),get(get(e->slot(1,1),lit5),lit10)}));refs[0].put(std::move(t177));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,11),Args{concat(lit184,e->slot(0,0)),get(get(e->slot(1,3),lit50),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit185,e->slot(0,0)),get(get(e->slot(1,3),lit51),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit186,e->slot(0,0)),get(get(e->slot(1,3),lit52),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit187,e->slot(0,0)),get(get(e->slot(1,3),lit53),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit188,e->slot(0,0)),get(get(e->slot(1,3),lit54),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit189,e->slot(0,0)),get(get(e->slot(1,3),lit55),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit190,e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit191,e->slot(0,0)),get(get(e->slot(1,3),lit57),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit192,e->slot(0,0)),get(get(e->slot(1,3),lit50),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit193,e->slot(0,0)),get(get(e->slot(1,3),lit51),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit194,e->slot(0,0)),get(get(e->slot(1,3),lit52),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit195,e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit196,e->slot(0,0)),get(get(e->slot(1,3),lit55),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit197,e->slot(0,0)),get(get(e->slot(1,3),lit55),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit198,e->slot(0,0)),get(get(e->slot(1,3),lit57),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit199,e->slot(0,0)),get(get(e->slot(1,3),lit58),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit200,e->slot(0,0)),get(get(e->slot(1,3),lit59),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit201,e->slot(0,0)),get(get(e->slot(1,3),lit60),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit202,e->slot(0,0)),get(get(e->slot(1,3),lit50),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit203,e->slot(0,0)),get(get(e->slot(1,3),lit51),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit204,e->slot(0,0)),get(get(e->slot(1,3),lit52),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit205,e->slot(0,0)),get(get(e->slot(1,3),lit54),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit206,e->slot(0,0)),get(get(e->slot(1,3),lit56),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit207,e->slot(0,0)),get(get(e->slot(1,3),lit57),e->slot(0,0))});
if(truth(V(!truth(get(e->slot(1,3),lit108))))){return Args{};
}
call(e->slot(1,11),Args{concat(lit208,e->slot(0,0)),get(get(e->slot(1,3),lit63),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit209,e->slot(0,0)),get(get(e->slot(1,3),lit64),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit210,e->slot(0,0)),get(get(e->slot(1,3),lit65),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit211,e->slot(0,0)),get(get(e->slot(1,3),lit66),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit212,e->slot(0,0)),get(get(e->slot(1,3),lit68),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit213,e->slot(0,0)),get(get(e->slot(1,3),lit69),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit214,e->slot(0,0)),get(get(e->slot(1,3),lit71),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit215,e->slot(0,0)),get(get(e->slot(1,3),lit73),e->slot(0,0))});
call(e->slot(1,11),Args{concat(lit216,e->slot(0,0)),get(get(e->slot(1,3),lit76),e->slot(0,0))});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,11),Args{lit217,get(e->slot(1,3),lit89)});
call(e->slot(1,11),Args{lit218,get(e->slot(1,3),lit91)});
call(e->slot(1,11),Args{lit219,([&](){V t178=([&](){V t179=get(e->slot(1,3),lit92);return truth(t179)?V(1.0):t179;})();return !truth(t178)?V(0.0):t178;})()});
call(e->slot(1,11),Args{lit220,([&](){V t180=([&](){V t181=get(e->slot(1,3),lit93);return truth(t181)?V(1.0):t181;})();return !truth(t180)?V(0.0):t180;})()});
call(e->slot(1,11),Args{lit221,get(e->slot(1,3),lit77)});
call(e->slot(1,11),Args{lit222,get(e->slot(1,3),lit78)});
call(e->slot(1,11),Args{lit223,get(e->slot(1,3),lit79)});
call(e->slot(1,11),Args{lit224,get(e->slot(1,3),lit80)});
call(e->slot(1,11),Args{lit225,get(e->slot(1,3),lit81)});
call(e->slot(1,11),Args{lit226,get(e->slot(1,3),lit82)});
call(e->slot(1,11),Args{lit227,get(e->slot(1,3),lit83)});
call(e->slot(1,11),Args{lit228,get(e->slot(1,3),lit84)});
call(e->slot(1,11),Args{lit229,get(e->slot(1,3),lit85)});
call(e->slot(1,11),Args{lit230,get(e->slot(1,3),lit86)});
call(e->slot(1,11),Args{lit231,get(e->slot(1,3),lit87)});
call(e->slot(1,11),Args{lit232,get(e->slot(1,3),lit88)});
call(e->slot(1,11),Args{lit233,get(e->slot(1,3),lit77)});
call(e->slot(1,11),Args{lit234,get(e->slot(1,3),lit78)});
call(e->slot(1,11),Args{lit235,get(e->slot(1,3),lit79)});
call(e->slot(1,11),Args{lit236,get(e->slot(1,3),lit80)});
if(truth(V(!truth(get(e->slot(1,3),lit108))))){return Args{};
}
call(e->slot(1,11),Args{lit237,([&](){V t182=([&](){V t183=get(e->slot(1,3),lit94);return truth(t183)?V(1.0):t183;})();return !truth(t182)?V(0.0):t182;})()});
call(e->slot(1,11),Args{lit238,([&](){V t184=([&](){V t185=get(e->slot(1,3),lit95);return truth(t185)?V(1.0):t185;})();return !truth(t184)?V(0.0):t184;})()});
call(e->slot(1,11),Args{lit239,([&](){V t186=([&](){V t187=get(e->slot(1,3),lit96);return truth(t187)?V(1.0):t187;})();return !truth(t186)?V(0.0):t186;})()});
call(e->slot(1,11),Args{lit240,([&](){V t188=([&](){V t189=get(e->slot(1,3),lit97);return truth(t189)?V(1.0):t189;})();return !truth(t188)?V(0.0):t188;})()});
call(e->slot(1,11),Args{lit241,([&](){V t190=([&](){V t191=get(e->slot(1,3),lit98);return truth(t191)?V(1.0):t191;})();return !truth(t190)?V(0.0):t190;})()});
call(e->slot(1,11),Args{lit242,([&](){V t192=([&](){V t193=get(e->slot(1,3),lit99);return truth(t193)?V(1.0):t193;})();return !truth(t192)?V(0.0):t192;})()});
call(e->slot(1,11),Args{lit243,([&](){V t194=([&](){V t195=get(e->slot(1,3),lit100);return truth(t195)?V(1.0):t195;})();return !truth(t194)?V(0.0):t194;})()});
call(e->slot(1,11),Args{lit244,([&](){V t196=([&](){V t197=get(e->slot(1,3),lit101);return truth(t197)?V(1.0):t197;})();return !truth(t196)?V(0.0):t196;})()});
call(e->slot(1,11),Args{lit245,([&](){V t198=([&](){V t199=get(e->slot(1,3),lit102);return truth(t199)?V(1.0):t199;})();return !truth(t198)?V(0.0):t198;})()});
call(e->slot(1,11),Args{lit246,([&](){V t200=([&](){V t201=get(e->slot(1,3),lit103);return truth(t201)?V(1.0):t201;})();return !truth(t200)?V(0.0):t200;})()});
call(e->slot(1,11),Args{lit247,([&](){V t202=([&](){V t203=get(e->slot(1,3),lit104);return truth(t203)?V(1.0):t203;})();return !truth(t202)?V(0.0):t202;})()});
call(e->slot(1,11),Args{lit248,([&](){V t204=([&](){V t205=get(e->slot(1,3),lit105);return truth(t205)?V(1.0):t205;})();return !truth(t204)?V(0.0):t204;})()});
call(e->slot(1,11),Args{lit249,([&](){V t206=([&](){V t207=get(e->slot(1,3),lit106);return truth(t207)?V(1.0):t207;})();return !truth(t206)?V(0.0):t206;})()});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t208=num(V(0.0)),t209=num(V(3.0)),t210=num(V(1.0));for(double t211=t208;(t210>0?t211<=t209:t211>=t209);t211+=t210){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t211);call(e->slot(2,31),Args{e->slot(0,0)});
}}
call(e->slot(1,32),Args{});
return Args{};});
Ref(e->slot(0,1),lit250).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t212=lit90;refs[0].put(std::move(t212));}
call(e->slot(1,33),Args{});
return Args{};}));
Ref(e->slot(0,1),lit251).put(native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t213=add(([&](){V t214=get(e->slot(1,3),lit91);return !truth(t214)?V(0.0):t214;})(),V(1.0));refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t215=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t215));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t216=lit252;refs[0].put(std::move(t216));}
call(e->slot(1,33),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t217=first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit5),lit47),get(get(e->slot(1,1),lit5),lit48)}));refs[0].put(std::move(t217));}
call(e->slot(1,17),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t218=first(call(e->slot(1,13),Args{}));refs[0].put(std::move(t218));}
}
{V t219=first(call(e->slot(1,14),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t219);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t220=ne(e->slot(0,3),V());refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t221=V(!truth(get(e->slot(1,3),lit92)));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t222=V(false);refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t223=V(false);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t224=V(false);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t225=V(false);refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t226=V(false);refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t227=V(false);refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t228=V(false);refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t229=V(false);refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t230=V(false);refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t231=V(false);refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t232=V(false);refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t233=V(false);refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t234=V(false);refs[0].put(std::move(t234));}
{V t235=V(0.0);e->slot(0,4)=std::move(t235);}
{V t236=V(0.0);e->slot(0,5)=std::move(t236);}
{V t237=V(0.0);e->slot(0,6)=std::move(t237);}
{V t238=V(0.0);e->slot(0,7)=std::move(t238);}
{V t239=V(0.0);e->slot(0,8)=std::move(t239);}
{V t240=V(0.0);e->slot(0,9)=std::move(t240);}
{V t241=V(0.0);e->slot(0,10)=std::move(t241);}
{V t242=V(1.2);e->slot(0,11)=std::move(t242);}
{V t243=V(1.2);e->slot(0,12)=std::move(t243);}
{V t244=V(0.0);e->slot(0,13)=std::move(t244);}
{V t245=V(0.0);e->slot(0,14)=std::move(t245);}
{V t246=V(0.0);e->slot(0,15)=std::move(t246);}
{double t247=num(V(0.0)),t248=num(V(3.0)),t249=num(V(1.0));for(double t250=t247;(t249>0?t250<=t248:t250>=t248);t250+=t249){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t250);call(e->slot(2,30),joined(Args{e->slot(0,0),e->slot(1,0)},call(e->slot(2,15),Args{e->slot(1,1),e->slot(0,0)})));
{std::array<Ref,1> refs{Ref(e,1,4)};V t251=add(e->slot(1,4),get(get(e->slot(2,3),lit50),e->slot(0,0)));refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t252=add(e->slot(1,5),get(get(e->slot(2,3),lit51),e->slot(0,0)));refs[0].put(std::move(t252));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t253=add(e->slot(1,6),get(get(e->slot(2,3),lit52),e->slot(0,0)));refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t254=add(e->slot(1,7),get(get(e->slot(2,3),lit54),e->slot(0,0)));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t255=add(e->slot(1,8),get(get(e->slot(2,3),lit55),e->slot(0,0)));refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t256=add(e->slot(1,9),get(get(e->slot(2,3),lit56),e->slot(0,0)));refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t257=add(e->slot(1,10),get(get(e->slot(2,3),lit57),e->slot(0,0)));refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t258=first(call(get(e->get("math"),lit253),Args{e->slot(1,11),get(get(e->slot(2,3),lit50),e->slot(0,0))}));refs[0].put(std::move(t258));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t259=first(call(get(e->get("math"),lit253),Args{e->slot(1,12),get(get(e->slot(2,3),lit51),e->slot(0,0))}));refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(e,1,13)};V t260=first(call(get(e->get("math"),lit183),Args{e->slot(1,13),get(get(e->slot(2,3),lit52),e->slot(0,0))}));refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e,1,14)};V t261=first(call(get(e->get("math"),lit183),Args{e->slot(1,14),get(get(e->slot(2,3),lit54),e->slot(0,0))}));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(e,1,15)};V t262=first(call(get(e->get("math"),lit183),Args{e->slot(1,15),get(get(e->slot(2,3),lit57),e->slot(0,0))}));refs[0].put(std::move(t262));}
call(e->slot(2,31),Args{e->slot(0,0)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit77)};V t263=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t263));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit78)};V t264=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t264));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit79)};V t265=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t265));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit80)};V t266=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t266));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit81)};V t267=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t267));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit82)};V t268=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t268));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit83)};V t269=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit84)};V t270=e->slot(0,11);refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit85)};V t271=e->slot(0,12);refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t272=e->slot(0,13);refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit87)};V t273=e->slot(0,14);refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t274=e->slot(0,15);refs[0].put(std::move(t274));}
if(truth(get(e->slot(1,3),lit92))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t275=lit254;refs[0].put(std::move(t275));}
}else if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t276=lit255;refs[0].put(std::move(t276));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t277=lit256;refs[0].put(std::move(t277));}
}

call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit257).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t278=get(e->slot(1,3),lit77);return !truth(t278)?V(1.0):t278;})()};
}
return Args{([&](){V t279=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t279)?V(1.0):t279;})()};
return Args{};}));
Ref(e->slot(0,1),lit258).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t280=get(e->slot(1,3),lit78);return !truth(t280)?V(1.0):t280;})()};
}
return Args{([&](){V t281=get(get(e->slot(1,3),lit51),e->slot(0,0));return !truth(t281)?V(1.0):t281;})()};
return Args{};}));
Ref(e->slot(0,1),lit259).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t282=get(e->slot(1,3),lit79);return !truth(t282)?V(0.0):t282;})()};
}
return Args{([&](){V t283=get(get(e->slot(1,3),lit52),e->slot(0,0));return !truth(t283)?V(0.0):t283;})()};
return Args{};}));
Ref(e->slot(0,1),lit260).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t284=get(e->slot(1,3),lit80);return !truth(t284)?V(0.0):t284;})()};
}
return Args{([&](){V t285=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t285)?V(0.0):t285;})()};
return Args{};}));
Ref(e->slot(0,1),lit261).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t286=get(e->slot(1,3),lit81);return !truth(t286)?V(1.0):t286;})()};
}
return Args{([&](){V t287=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t287)?V(1.0):t287;})()};
return Args{};}));
Ref(e->slot(0,1),lit262).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t288=get(e->slot(1,3),lit82);return !truth(t288)?V(1.0):t288;})()};
}
return Args{([&](){V t289=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t289)?V(1.0):t289;})()};
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t290=get(e->slot(1,3),lit83);return !truth(t290)?V(0.0):t290;})()};
}
return Args{([&](){V t291=get(get(e->slot(1,3),lit57),e->slot(0,0));return !truth(t291)?V(0.0):t291;})()};
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{e->slot(1,3)};
}
return Args{([&](){V z=table();set(z,lit265,([&](){V t292=get(get(e->slot(1,3),lit50),e->slot(0,0));return !truth(t292)?V(1.0):t292;})());set(z,lit266,([&](){V t293=get(get(e->slot(1,3),lit51),e->slot(0,0));return !truth(t293)?V(1.0):t293;})());set(z,lit267,([&](){V t294=get(get(e->slot(1,3),lit52),e->slot(0,0));return !truth(t294)?V(0.0):t294;})());set(z,lit268,([&](){V t295=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t295)?V(0.0):t295;})());set(z,lit269,([&](){V t296=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t296)?V(1.0):t296;})());set(z,lit270,([&](){V t297=get(get(e->slot(1,3),lit56),e->slot(0,0));return !truth(t297)?V(1.0):t297;})());set(z,lit57,([&](){V t298=get(get(e->slot(1,3),lit57),e->slot(0,0));return !truth(t298)?V(0.0):t298;})());set(z,lit58,([&](){V t299=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t299)?V(0.0):t299;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit271).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t300=([&](){V t301=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t301)?V(0.0):t301;})();e->slot(0,0)=std::move(t300);}
return call(get(e->get("string"),lit272),Args{concat(lit273,concat(lit274,lit275)),([&](){V t302=get(e->slot(2,2),e->slot(0,0));return !truth(t302)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t302;})(),([&](){V t303=get(get(e->slot(2,3),lit50),e->slot(0,0));return !truth(t303)?V(1.0):t303;})(),([&](){V t304=get(get(e->slot(2,3),lit51),e->slot(0,0));return !truth(t304)?V(1.0):t304;})(),([&](){V t305=get(get(e->slot(2,3),lit52),e->slot(0,0));return !truth(t305)?V(0.0):t305;})(),([&](){V t306=get(get(e->slot(2,3),lit54),e->slot(0,0));return !truth(t306)?V(0.0):t306;})(),([&](){V t307=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t307)?V(1.0):t307;})(),([&](){V t308=get(get(e->slot(2,3),lit56),e->slot(0,0));return !truth(t308)?V(1.0):t308;})(),([&](){V t309=get(get(e->slot(2,3),lit57),e->slot(0,0));return !truth(t309)?V(0.0):t309;})(),([&](){V t310=get(get(e->slot(2,3),lit58),e->slot(0,0));return !truth(t310)?V(0.0):t310;})(),([&](){V t311=get(get(e->slot(2,3),lit63),e->slot(0,0));return !truth(t311)?V(1.0):t311;})(),([&](){V t312=get(get(e->slot(2,3),lit65),e->slot(0,0));return !truth(t312)?V(0.0):t312;})(),([&](){V t313=get(get(e->slot(2,3),lit66),e->slot(0,0));return !truth(t313)?V(0.0):t313;})(),([&](){V t314=get(get(e->slot(2,3),lit71),e->slot(0,0));return !truth(t314)?V(0.0):t314;})(),([&](){V t315=get(get(e->slot(2,3),lit73),e->slot(0,0));return !truth(t315)?V(0.0):t315;})()});
}
return call(get(e->get("string"),lit272),Args{concat(lit276,concat(lit277,concat(lit278,lit279))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit89)})),([&](){V t316=get(e->slot(1,3),lit91);return !truth(t316)?V(0.0):t316;})(),([&](){V t317=([&](){V t318=get(e->slot(1,3),lit92);return truth(t318)?lit280:t318;})();return !truth(t317)?lit281:t317;})(),([&](){V t319=([&](){V t320=get(e->slot(1,3),lit93);return truth(t320)?lit282:t320;})();return !truth(t319)?lit283:t319;})(),([&](){V t321=get(e->slot(1,3),lit77);return !truth(t321)?V(1.0):t321;})(),([&](){V t322=get(e->slot(1,3),lit78);return !truth(t322)?V(1.0):t322;})(),([&](){V t323=get(e->slot(1,3),lit79);return !truth(t323)?V(0.0):t323;})(),([&](){V t324=get(e->slot(1,3),lit80);return !truth(t324)?V(0.0):t324;})(),([&](){V t325=get(e->slot(1,3),lit81);return !truth(t325)?V(1.0):t325;})(),([&](){V t326=get(e->slot(1,3),lit82);return !truth(t326)?V(1.0):t326;})(),([&](){V t327=get(e->slot(1,3),lit83);return !truth(t327)?V(0.0):t327;})(),([&](){V t328=([&](){V t329=get(e->slot(1,3),lit94);return truth(t329)?lit280:t329;})();return !truth(t328)?lit281:t328;})(),([&](){V t330=([&](){V t331=get(e->slot(1,3),lit95);return truth(t331)?lit280:t331;})();return !truth(t330)?lit281:t330;})(),([&](){V t332=([&](){V t333=get(e->slot(1,3),lit101);return truth(t333)?lit280:t333;})();return !truth(t332)?lit281:t332;})(),([&](){V t334=([&](){V t335=get(e->slot(1,3),lit102);return truth(t335)?lit280:t335;})();return !truth(t334)?lit281:t334;})(),([&](){V t336=([&](){V t337=get(e->slot(1,3),lit103);return truth(t337)?lit280:t337;})();return !truth(t336)?lit281:t336;})(),([&](){V t338=([&](){V t339=get(e->slot(1,3),lit104);return truth(t339)?lit280:t339;})();return !truth(t338)?lit281:t338;})(),([&](){V t340=([&](){V t341=get(e->slot(1,3),lit105);return truth(t341)?lit280:t341;})();return !truth(t340)?lit281:t340;})(),([&](){V t342=([&](){V t343=get(e->slot(1,3),lit106);return truth(t343)?lit280:t343;})();return !truth(t342)?lit281:t342;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
