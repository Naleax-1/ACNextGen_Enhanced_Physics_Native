// Generated native C++ from pinned tire_compliance.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("complianceTau");
static const V lit3("deflectionTau");
static const V lit4("responseTau");
static const V lit5("loadReference");
static const V lit6("loadLow");
static const V lit7("frontGain");
static const V lit8("rearGain");
static const V lit9("maxDeflection");
static const V lit10("maxComplianceDrop");
static const V lit11("loadDropGain");
static const V lit12("minCompliance");
static const V lit13("maxCompliance");
static const V lit14("contactInputGain");
static const V lit15("contactFlexGain");
static const V lit16("contactTau");
static const V lit17("contactLossDropGain");
static const V lit18("contactQualityRecoverGain");
static const V lit19("energyComplianceDropGain");
static const V lit20("memoryDropGain");
static const V lit21("hopDropGain");
static const V lit22("armCamberDropGain");
static const V lit23("armToeDropGain");
static const V lit24("driveRearDropGain");
static const V lit25("lsdRearDelayGain");
static const V lit26("shaftDelayGain");
static const V lit27("carcassDelayGain");
static const V lit28("carcassDeformationGain");
static const V lit29("carcassSupportGain");
static const V lit30("slipRecoveryDelayGain");
static const V lit31("roadShockDelayGain");
static const V lit32("pathLossDelayGain");
static const V lit33("thermalDelayGain");
static const V lit34("tireDeliveryRecoverGain");
static const V lit35("gripGateRecoverGain");
static const V lit36("minResponseDelay");
static const V lit37("maxResponseDelay");
static const V lit38("dtMin");
static const V lit39("dtMax");
static const V lit40("debugStoreInterval");
static const V lit41("FL");
static const V lit42("FR");
static const V lit43("RL");
static const V lit44("RR");
static const V lit45("state");
static const V lit46("frontCompliance");
static const V lit47("rearCompliance");
static const V lit48("frontDeflection");
static const V lit49("rearDeflection");
static const V lit50("responseDelay");
static const V lit51("targetResponseDelay");
static const V lit52("frontLoad");
static const V lit53("rearLoad");
static const V lit54("targetFrontCompliance");
static const V lit55("targetRearCompliance");
static const V lit56("frontDrop");
static const V lit57("rearDrop");
static const V lit58("avgContactInput");
static const V lit59("avgContactLoss");
static const V lit60("avgCarcassDelay");
static const V lit61("avgRoadShock");
static const V lit62("avgPathLoss");
static const V lit63("load");
static const V lit64("contactInput");
static const V lit65("contactFlex");
static const V lit66("contactLoss");
static const V lit67("contactQuality");
static const V lit68("memory");
static const V lit69("hop");
static const V lit70("armCamber");
static const V lit71("armToe");
static const V lit72("carcassDelay");
static const V lit73("carcassDeformation");
static const V lit74("carcassSupport");
static const V lit75("carcassGripGate");
static const V lit76("carcassReturn");
static const V lit77("recoveryRate");
static const V lit78("snapRisk");
static const V lit79("gripReturn");
static const V lit80("roadShock");
static const V lit81("pathLoss");
static const V lit82("tireDelivery");
static const V lit83("thermalStress");
static const V lit84("compliance");
static const V lit85("deflection");
static const V lit86("relaxScale");
static const V lit87("loadLinked");
static const V lit88("contactLinked");
static const V lit89("memoryLinked");
static const V lit90("hopLinked");
static const V lit91("armLinked");
static const V lit92("drivetrainLinked");
static const V lit93("lsdLinked");
static const V lit94("carcassLinked");
static const V lit95("recoveryLinked");
static const V lit96("roadLinked");
static const V lit97("loadPathLinked");
static const V lit98("thermalLinked");
static const V lit99("wheelsValid");
static const V lit100("storeOnly");
static const V lit101("status");
static const V lit102("INIT");
static const V lit103("updateCount");
static const V lit104("debugStoreTimer");
static const V lit105("debugStoreNow");
static const V lit106("debug");
static const V lit107("huge");
static const V lit108("abs");
static const V lit109("max");
static const V lit110("safeLoadRaw");
static const V lit111("safeStore");
static const V lit112("safeField");
static const V lit113("getCar");
static const V lit114("wheels");
static const V lit115("loadK");
static const V lit116("ngp_contact_load_");
static const V lit117("ngp_wheel_load_");
static const V lit118("ngp_load_wheel_");
static const V lit119("ngp_tire_load_");
static const V lit120("ngp_tire_carcass_load_");
static const V lit121("ngp_load_path_load_");
static const V lit122("ngp_dlt_load_");
static const V lit123("ngp_compliance_contact_input_");
static const V lit124("ngp_tcr_compliance_input_");
static const V lit125("ngp_susp_contact_input_");
static const V lit126("ngp_sci_input_");
static const V lit127("ngp_road_module_hint_");
static const V lit128("ngp_rii_hint_");
static const V lit129("ngp_contact_quality_");
static const V lit130("ngp_tire_contact_quality_");
static const V lit131("ngp_tcr_quality_");
static const V lit132("ngp_contact_raw_quality_");
static const V lit133("ngp_contact_loss_");
static const V lit134("ngp_tire_contact_loss_");
static const V lit135("ngp_tcr_contact_loss_");
static const V lit136("ngp_contact_drop_");
static const V lit137("ngp_susp_contact_drop_");
static const V lit138("ngp_tire_memory_");
static const V lit139("ngp_tyre_memory_");
static const V lit140("ngp_rubber_memory_");
static const V lit141("ngp_memory_");
static const V lit142("ngp_slide_memory_");
static const V lit143("ngp_tirehop_energy_");
static const V lit144("ngp_tire_hop_energy_");
static const V lit145("ngp_tire_hop_");
static const V lit146("ngp_hop_risk_");
static const V lit147("ngp_control_arm_camber_");
static const V lit148("ngp_arm_camber_");
static const V lit149("ngp_ca_camber_");
static const V lit150("ngp_compliance_virtual_camber_");
static const V lit151("ngp_virtual_camber_");
static const V lit152("ngp_control_arm_toe_");
static const V lit153("ngp_arm_toe_");
static const V lit154("ngp_ca_toe_");
static const V lit155("ngp_compliance_virtual_toe_");
static const V lit156("ngp_virtual_toe_");
static const V lit157("ngp_tire_contact_delay_");
static const V lit158("ngp_contact_delay_");
static const V lit159("ngp_carcass_delay_");
static const V lit160("ngp_tire_deformation_");
static const V lit161("ngp_carcass_deformation_");
static const V lit162("ngp_tire_carcass_deformation_");
static const V lit163("ngp_carcass_support_");
static const V lit164("ngp_tire_carcass_support_");
static const V lit165("ngp_carcass_grip_gate_");
static const V lit166("ngp_recovery_trust_");
static const V lit167("ngp_tire_return_force_");
static const V lit168("ngp_return_force_");
static const V lit169("ngp_slip_recovery_rate_");
static const V lit170("ngp_recovery_rate_");
static const V lit171("ngp_slip_snap_risk_");
static const V lit172("ngp_snap_risk_");
static const V lit173("ngp_slip_grip_return_");
static const V lit174("ngp_grip_return_");
static const V lit175("ngp_road_shock_");
static const V lit176("ngp_rii_shock_");
static const V lit177("ngp_road_impact_");
static const V lit178("ngp_rii_impact_");
static const V lit179("ngp_road_path_loss_");
static const V lit180("ngp_rii_path_loss_");
static const V lit181("ngp_load_path_loss_");
static const V lit182("ngp_lp_loss_");
static const V lit183("ngp_road_tire_delivery_");
static const V lit184("ngp_load_path_tire_delivery_");
static const V lit185("ngp_lp_tire_delivery_");
static const V lit186("ngp_slip_thermal_memory_");
static const V lit187("ngp_tire_memory_thermal_");
static const V lit188("ngp_thermal_stress");
static const V lit189("ngp_virtual_thermal_stress");
static const V lit190("ngp_drive_torque");
static const V lit191("ngp_drivetrain_torque");
static const V lit192("ngp_dt_torque");
static const V lit193("ngp_lsd_lock");
static const V lit194("ngp_diff_lock");
static const V lit195("min");
static const V lit196("ngp_shaft_twist");
static const V lit197("ngp_windup_shaft_twist");
static const V lit198("ngp_tc_comp_input_");
static const V lit199("ngp_tc_comp_flex_");
static const V lit200("ngp_tire_relax_scale_");
static const V lit201("ngp_tire_compliance_");
static const V lit202("ngp_tire_deflection_");
static const V lit203("ngp_tire_compliance_local_");
static const V lit204("ngp_tire_deflection_local_");
static const V lit205("ngp_tcomp_compliance_");
static const V lit206("ngp_tcomp_deflection_");
static const V lit207("ngp_tcomp_relax_");
static const V lit208("ngp_tire_compliance_contact_quality_");
static const V lit209("ngp_tire_compliance_contact_loss_");
static const V lit210("ngp_tire_compliance_memory_");
static const V lit211("ngp_tire_compliance_hop_");
static const V lit212("ngp_tire_compliance_carcass_delay_");
static const V lit213("ngp_tire_compliance_path_loss_");
static const V lit214("ngp_tire_compliance_road_shock_");
static const V lit215("ngp_tire_compliance_tire_delivery_");
static const V lit216("ngp_tire_compliance_status");
static const V lit217("UNKNOWN");
static const V lit218("ngp_tire_compliance_update_count");
static const V lit219("ngp_tire_compliance_wheels_valid");
static const V lit220("ngp_tire_compliance_store_only");
static const V lit221("ngp_tire_compliance_load_linked");
static const V lit222("ngp_tire_comp_front");
static const V lit223("ngp_tire_comp_rear");
static const V lit224("ngp_tire_def_front");
static const V lit225("ngp_tire_def_rear");
static const V lit226("ngp_tire_response_delay");
static const V lit227("ngp_tire_front_load");
static const V lit228("ngp_tire_rear_load");
static const V lit229("ngp_tire_target_comp_front");
static const V lit230("ngp_tire_target_comp_rear");
static const V lit231("ngp_tyre_comp_front");
static const V lit232("ngp_tyre_comp_rear");
static const V lit233("ngp_tyre_response_delay");
static const V lit234("ngp_tcomp_front");
static const V lit235("ngp_tcomp_rear");
static const V lit236("ngp_tcomp_delay");
static const V lit237("ngp_tcomp_front_def");
static const V lit238("ngp_tcomp_rear_def");
static const V lit239("ngp_tire_compliance_front_drop");
static const V lit240("ngp_tire_compliance_rear_drop");
static const V lit241("ngp_tire_compliance_avg_contact");
static const V lit242("ngp_tire_compliance_avg_loss");
static const V lit243("ngp_tire_compliance_avg_carcass_delay");
static const V lit244("ngp_tire_compliance_avg_path_loss");
static const V lit245("ngp_tire_compliance_contact_linked");
static const V lit246("ngp_tire_compliance_memory_linked");
static const V lit247("ngp_tire_compliance_hop_linked");
static const V lit248("ngp_tire_compliance_arm_linked");
static const V lit249("ngp_tire_compliance_drivetrain_linked");
static const V lit250("ngp_tire_compliance_lsd_linked");
static const V lit251("ngp_tire_compliance_carcass_linked");
static const V lit252("ngp_tire_compliance_recovery_linked");
static const V lit253("ngp_tire_compliance_road_linked");
static const V lit254("ngp_tire_compliance_load_path_linked");
static const V lit255("ngp_tire_compliance_thermal_linked");
static const V lit256("init");
static const V lit257("update");
static const V lit258("BAD DT");
static const V lit259("STORE ONLY");
static const V lit260("NO WHEELS");
static const V lit261("RUNNING");
static const V lit262("getFrontCompliance");
static const V lit263("getRearCompliance");
static const V lit264("getResponseDelay");
static const V lit265("getFrontDeflection");
static const V lit266("getRearDeflection");
static const V lit267("getCompliance");
static const V lit268("front");
static const V lit269("rear");
static const V lit270("getDeflection");
static const V lit271("getLoad");
static const V lit272("getState");
static const V lit273("name");
static const V lit274("debugStr");
static const V lit275("format");
static const V lit276("Status %s / Count %.0f / Wheels %s / Store %s\n");
static const V lit277("FrontLoad %.0f Comp %.3f Target %.3f Def %.3f Drop %.3f\n");
static const V lit278("RearLoad  %.0f Comp %.3f Target %.3f Def %.3f Drop %.3f\n");
static const V lit279("Delay %.3f Target %.3f Contact %.3f Loss %.3f Path %.3f\n");
static const V lit280("Links CT:%s MEM:%s HOP:%s ARM:%s DT:%s LSD:%s CAR:%s SR:%s ROAD:%s LP:%s TH:%s");
static const V lit281("OK");
static const V lit282("NIL");
static const V lit283("YES");
static const V lit284("NO");
V load_tire_compliance(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(34);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.12));set(z,lit3,V(0.1));set(z,lit4,V(0.09));set(z,lit5,V(3500.0));set(z,lit6,V(250.0));set(z,lit7,V(1.0));set(z,lit8,V(1.0));set(z,lit9,V(1.0));set(z,lit10,V(0.42));set(z,lit11,V(0.35));set(z,lit12,V(0.5));set(z,lit13,V(1.2));set(z,lit14,V(0.55));set(z,lit15,V(0.035));set(z,lit16,V(0.07));set(z,lit17,V(0.18));set(z,lit18,V(0.1));set(z,lit19,V(0.12));set(z,lit20,V(0.08));set(z,lit21,V(0.1));set(z,lit22,V(0.035));set(z,lit23,V(0.05));set(z,lit24,V(0.08));set(z,lit25,V(0.06));set(z,lit26,V(0.05));set(z,lit27,V(0.16));set(z,lit28,V(0.16));set(z,lit29,V(0.14));set(z,lit30,V(0.12));set(z,lit31,V(0.1));set(z,lit32,V(0.12));set(z,lit33,V(0.08));set(z,lit34,V(0.08));set(z,lit35,V(0.08));set(z,lit36,V(0.0));set(z,lit37,V(1.0));set(z,lit38,V(0.0001));set(z,lit39,V(0.1));set(z,lit40,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit41);set(z,V(1.0),lit42);set(z,V(2.0),lit43);set(z,V(3.0),lit44);return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit45)};V t5=([&](){V z=table();set(z,lit46,V(1.0));set(z,lit47,V(1.0));set(z,lit48,V(0.0));set(z,lit49,V(0.0));set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(1.0));set(z,lit55,V(1.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit73,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit74,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit76,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit77,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit78,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit79,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit80,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit81,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit82,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit83,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit84,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit85,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit86,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit87,V(false));set(z,lit88,V(false));set(z,lit89,V(false));set(z,lit90,V(false));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,V(false));set(z,lit98,V(false));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,lit102);set(z,lit103,V(0.0));set(z,lit104,V(999.0));set(z,lit105,V(true));return z;})();refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t6=get(e->slot(0,1),lit45);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit107)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit107)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,3),Args{e->slot(0,0),([&](){V t13=e->slot(0,1);return !truth(t13)?V(0.0):t13;})()}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit108),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t15=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t16=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t17=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t17));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit109),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
{V t18=get(e->slot(0,0),lit110);e->slot(0,7)=std::move(t18);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t19=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t19);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t22=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t22);}
{double t23=num(V(1.0)),t24=num(length(e->slot(0,1))),t25=num(V(1.0));for(double t26=t23;(t25>0?t26<=t24:t26>=t24);t26+=t25){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t26);{V t27=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t27);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t28=e->slot(1,0);return !truth(t28)?V(0.0):t28;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t29=e->slot(0,0);return !truth(t29)?V(0.0):t29;})(),V()};
return Args{};});
{V t30=get(e->slot(0,0),lit111);e->slot(0,10)=std::move(t30);}
{V t31=get(e->slot(0,0),lit112);e->slot(0,11)=std::move(t31);}
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t32=V(!truth(e->get("ac")));return !truth(t32)?V(!truth(get(e->get("ac"),lit113))):t32;})())){return Args{V()};
}
{Args t33=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit113),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t33,0);e->slot(0,1)=arg(t33,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,11),Args{e->slot(0,0),lit114,V()});
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t34=first(call(e->slot(1,13),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t34);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t35=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t36=get(e->slot(1,2),e->slot(1,1));return !truth(t36)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t36;})()};
return Args{};})});e->slot(0,3)=arg(t35,0);e->slot(0,4)=arg(t35,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t37=([&](){V z=table();set(z,V(1.0),lit63);set(z,V(2.0),lit115);return z;})();e->slot(0,1)=std::move(t37);}
{double t38=num(V(1.0)),t39=num(length(e->slot(0,1))),t40=num(V(1.0));for(double t41=t38;(t40>0?t41<=t39:t41>=t39);t41+=t40){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t41);{V t42=first(call(e->slot(2,11),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t42);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,3),Args{e->slot(0,1),V()});
}
}}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t43=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t43));}
if(truth(gt(e->slot(0,0),mul(get(get(e->slot(1,1),lit1),lit5),V(0.55))))){return Args{e->slot(0,0)};
}
return Args{add(get(get(e->slot(1,1),lit1),lit5),e->slot(0,0))};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit104)};V t44=add(([&](){V t45=get(get(e->slot(1,1),lit45),lit104);return !truth(t45)?V(0.0):t45;})(),([&](){V t46=e->slot(0,0);return !truth(t46)?V(0.0):t46;})());refs[0].put(std::move(t44));}
if(truth(ge(get(get(e->slot(1,1),lit45),lit104),get(get(e->slot(1,1),lit1),lit40)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit104)};V t47=V(0.0);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit105)};V t48=V(true);refs[0].put(std::move(t48));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit105)};V t49=V(false);refs[0].put(std::move(t49));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit87)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit88)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit89)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit90)};V t53=V(false);refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit91)};V t54=V(false);refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit92)};V t55=V(false);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit93)};V t56=V(false);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit94)};V t57=V(false);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit95)};V t58=V(false);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit96)};V t59=V(false);refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit97)};V t60=V(false);refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit98)};V t61=V(false);refs[0].put(std::move(t61));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t62=first(call(e->slot(1,14),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,2)=std::move(t62);}
{V t63=first(call(e->slot(1,15),Args{e->slot(0,2)}));e->slot(0,3)=std::move(t63);}
if(truth(ne(e->slot(0,3),V()))){return Args{first(call(get(e->get("math"),lit109),Args{V(0.0),e->slot(0,3)})),V(false)};
}
{V t64=first(call(e->slot(1,7),Args{concat(lit116,e->slot(0,1))}));e->slot(0,4)=std::move(t64);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit88)};V t65=V(true);refs[0].put(std::move(t65));}
return Args{first(call(get(e->get("math"),lit109),joined(Args{V(0.0)},call(e->slot(1,3),Args{e->slot(0,4),get(get(e->slot(1,1),lit1),lit5)})))),V(true)};
}
{V t66=first(call(e->slot(1,7),Args{concat(lit117,e->slot(0,1))}));e->slot(0,5)=std::move(t66);}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t67=first(call(e->slot(1,7),Args{concat(lit118,e->slot(0,1))}));refs[0].put(std::move(t67));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t68=first(call(e->slot(1,7),Args{concat(lit119,e->slot(0,1))}));refs[0].put(std::move(t68));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t69=first(call(e->slot(1,7),Args{concat(lit120,e->slot(0,1))}));refs[0].put(std::move(t69));}
}
if(truth(eq(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t70=first(call(e->slot(1,7),Args{concat(lit121,e->slot(0,1))}));refs[0].put(std::move(t70));}
}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit87)};V t71=V(true);refs[0].put(std::move(t71));}
return Args{first(call(get(e->get("math"),lit109),joined(Args{V(0.0)},call(e->slot(1,3),Args{e->slot(0,5),get(get(e->slot(1,1),lit1),lit5)})))),V(true)};
}
{V t72=first(call(e->slot(1,7),Args{concat(lit122,e->slot(0,1))}));e->slot(0,6)=std::move(t72);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit87)};V t73=V(true);refs[0].put(std::move(t73));}
return Args{first(call(get(e->get("math"),lit109),joined(Args{V(0.0)},call(e->slot(1,16),Args{e->slot(0,6)})))),V(true)};
}
return Args{get(get(e->slot(1,1),lit1),lit5),V(true)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{V t74=first(call(e->slot(1,19),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t74);}
{V t75=first(call(e->slot(1,19),Args{e->slot(0,0),V(1.0)}));e->slot(0,2)=std::move(t75);}
{V t76=first(call(e->slot(1,19),Args{e->slot(0,0),V(2.0)}));e->slot(0,3)=std::move(t76);}
{V t77=first(call(e->slot(1,19),Args{e->slot(0,0),V(3.0)}));e->slot(0,4)=std::move(t77);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit63),V(0.0))};V t78=e->slot(0,1);refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit63),V(1.0))};V t79=e->slot(0,2);refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit63),V(2.0))};V t80=e->slot(0,3);refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit63),V(3.0))};V t81=e->slot(0,4);refs[0].put(std::move(t81));}
{V t82=mul(add(e->slot(0,1),e->slot(0,2)),V(0.5));e->slot(0,5)=std::move(t82);}
{V t83=mul(add(e->slot(0,3),e->slot(0,4)),V(0.5));e->slot(0,6)=std::move(t83);}
return Args{e->slot(0,5),e->slot(0,6)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t84=call(e->slot(1,9),Args{V(0.0),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0)),concat(lit125,e->slot(0,0)),concat(lit126,e->slot(0,0)),concat(lit127,e->slot(0,0)),concat(lit128,e->slot(0,0))});e->slot(0,2)=arg(t84,0);e->slot(0,3)=arg(t84,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit88)};V t85=V(true);refs[0].put(std::move(t85));}
}
{Args t86=call(e->slot(1,9),Args{V(1.0),concat(lit129,e->slot(0,0)),concat(lit130,e->slot(0,0)),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0))});e->slot(0,4)=arg(t86,0);e->slot(0,5)=arg(t86,1);}
{Args t87=call(e->slot(1,9),Args{first(call(e->slot(1,4),Args{sub(V(1.0),e->slot(0,4)),V(0.0),V(1.0)})),concat(lit133,e->slot(0,0)),concat(lit134,e->slot(0,0)),concat(lit135,e->slot(0,0)),concat(lit136,e->slot(0,0)),concat(lit137,e->slot(0,0))});e->slot(0,6)=arg(t87,0);e->slot(0,7)=arg(t87,1);}
if(truth(([&](){V t88=ne(e->slot(0,5),V());return !truth(t88)?ne(e->slot(0,7),V()):t88;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit88)};V t89=V(true);refs[0].put(std::move(t89));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit64),e->slot(0,0))};V t90=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t90));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit67),e->slot(0,0))};V t91=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit66),e->slot(0,0))};V t92=first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0),V(1.0)}));refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit65),e->slot(0,0))};V t93=first(call(e->slot(1,6),Args{get(get(get(e->slot(1,1),lit45),lit65),e->slot(0,0)),get(get(get(e->slot(1,1),lit45),lit64),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit16),e->slot(0,1)}));refs[0].put(std::move(t93));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t94=call(e->slot(1,9),Args{V(0.0),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0)),concat(lit140,e->slot(0,0)),concat(lit141,e->slot(0,0)),concat(lit142,e->slot(0,0))});e->slot(0,1)=arg(t94,0);e->slot(0,2)=arg(t94,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit89)};V t95=V(true);refs[0].put(std::move(t95));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit68),e->slot(0,0))};V t96=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.0)}));refs[0].put(std::move(t96));}
{Args t97=call(e->slot(1,9),Args{V(0.0),concat(lit143,e->slot(0,0)),concat(lit144,e->slot(0,0)),concat(lit145,e->slot(0,0)),concat(lit146,e->slot(0,0))});e->slot(0,3)=arg(t97,0);e->slot(0,4)=arg(t97,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit90)};V t98=V(true);refs[0].put(std::move(t98));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit69),e->slot(0,0))};V t99=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.0)}));refs[0].put(std::move(t99));}
{Args t100=call(e->slot(1,9),Args{V(0.0),concat(lit147,e->slot(0,0)),concat(lit148,e->slot(0,0)),concat(lit149,e->slot(0,0)),concat(lit150,e->slot(0,0)),concat(lit151,e->slot(0,0))});e->slot(0,5)=arg(t100,0);e->slot(0,6)=arg(t100,1);}
{Args t101=call(e->slot(1,9),Args{V(0.0),concat(lit152,e->slot(0,0)),concat(lit153,e->slot(0,0)),concat(lit154,e->slot(0,0)),concat(lit155,e->slot(0,0)),concat(lit156,e->slot(0,0))});e->slot(0,7)=arg(t101,0);e->slot(0,8)=arg(t101,1);}
if(truth(([&](){V t102=ne(e->slot(0,6),V());return !truth(t102)?ne(e->slot(0,8),V()):t102;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit91)};V t103=V(true);refs[0].put(std::move(t103));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit70),e->slot(0,0))};V t104=first(call(e->slot(1,3),Args{e->slot(0,5),V(0.0)}));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit71),e->slot(0,0))};V t105=first(call(e->slot(1,3),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t105));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,25);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t106=call(e->slot(1,9),Args{V(0.0),concat(lit157,e->slot(0,0)),concat(lit158,e->slot(0,0)),concat(lit159,e->slot(0,0))});e->slot(0,1)=arg(t106,0);e->slot(0,2)=arg(t106,1);}
{Args t107=call(e->slot(1,9),Args{V(0.0),concat(lit160,e->slot(0,0)),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0))});e->slot(0,3)=arg(t107,0);e->slot(0,4)=arg(t107,1);}
{Args t108=call(e->slot(1,9),Args{V(1.0),concat(lit163,e->slot(0,0)),concat(lit164,e->slot(0,0))});e->slot(0,5)=arg(t108,0);e->slot(0,6)=arg(t108,1);}
{Args t109=call(e->slot(1,9),Args{V(1.0),concat(lit165,e->slot(0,0)),concat(lit166,e->slot(0,0))});e->slot(0,7)=arg(t109,0);e->slot(0,8)=arg(t109,1);}
{Args t110=call(e->slot(1,9),Args{V(0.0),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0))});e->slot(0,9)=arg(t110,0);e->slot(0,10)=arg(t110,1);}
if(truth(([&](){V t111=([&](){V t112=([&](){V t113=([&](){V t114=ne(e->slot(0,2),V());return !truth(t114)?ne(e->slot(0,4),V()):t114;})();return !truth(t113)?ne(e->slot(0,6),V()):t113;})();return !truth(t112)?ne(e->slot(0,8),V()):t112;})();return !truth(t111)?ne(e->slot(0,10),V()):t111;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit94)};V t115=V(true);refs[0].put(std::move(t115));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit72),e->slot(0,0))};V t116=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.2)}));refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit73),e->slot(0,0))};V t117=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.2)}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit74),e->slot(0,0))};V t118=first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(1.2)}));refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit75),e->slot(0,0))};V t119=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0),V(1.2)}));refs[0].put(std::move(t119));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit76),e->slot(0,0))};V t120=first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0),V(1.2)}));refs[0].put(std::move(t120));}
{Args t121=call(e->slot(1,9),Args{V(0.0),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0))});e->slot(0,11)=arg(t121,0);e->slot(0,12)=arg(t121,1);}
{Args t122=call(e->slot(1,9),Args{V(0.0),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0))});e->slot(0,13)=arg(t122,0);e->slot(0,14)=arg(t122,1);}
{Args t123=call(e->slot(1,9),Args{V(1.0),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0))});e->slot(0,15)=arg(t123,0);e->slot(0,16)=arg(t123,1);}
if(truth(([&](){V t124=([&](){V t125=ne(e->slot(0,12),V());return !truth(t125)?ne(e->slot(0,14),V()):t125;})();return !truth(t124)?ne(e->slot(0,16),V()):t124;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit95)};V t126=V(true);refs[0].put(std::move(t126));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit77),e->slot(0,0))};V t127=first(call(e->slot(1,4),Args{e->slot(0,11),V(0.0),V(1.2)}));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit78),e->slot(0,0))};V t128=first(call(e->slot(1,4),Args{e->slot(0,13),V(0.0),V(1.2)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit79),e->slot(0,0))};V t129=first(call(e->slot(1,4),Args{e->slot(0,15),V(0.0),V(1.2)}));refs[0].put(std::move(t129));}
{Args t130=call(e->slot(1,9),Args{V(0.0),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0)),concat(lit178,e->slot(0,0))});e->slot(0,17)=arg(t130,0);e->slot(0,18)=arg(t130,1);}
{Args t131=call(e->slot(1,9),Args{V(0.0),concat(lit179,e->slot(0,0)),concat(lit180,e->slot(0,0)),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0))});e->slot(0,19)=arg(t131,0);e->slot(0,20)=arg(t131,1);}
{Args t132=call(e->slot(1,9),Args{V(1.0),concat(lit183,e->slot(0,0)),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0))});e->slot(0,21)=arg(t132,0);e->slot(0,22)=arg(t132,1);}
if(truth(ne(e->slot(0,18),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit96)};V t133=V(true);refs[0].put(std::move(t133));}
}
if(truth(([&](){V t134=ne(e->slot(0,20),V());return !truth(t134)?ne(e->slot(0,22),V()):t134;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit97)};V t135=V(true);refs[0].put(std::move(t135));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit80),e->slot(0,0))};V t136=first(call(e->slot(1,4),Args{e->slot(0,17),V(0.0),V(1.2)}));refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit81),e->slot(0,0))};V t137=first(call(e->slot(1,4),Args{e->slot(0,19),V(0.0),V(1.2)}));refs[0].put(std::move(t137));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit82),e->slot(0,0))};V t138=first(call(e->slot(1,4),Args{e->slot(0,21),V(0.0),V(1.2)}));refs[0].put(std::move(t138));}
{Args t139=call(e->slot(1,9),Args{V(0.0),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0)),lit188,lit189});e->slot(0,23)=arg(t139,0);e->slot(0,24)=arg(t139,1);}
if(truth(ne(e->slot(0,24),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit98)};V t140=V(true);refs[0].put(std::move(t140));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit45),lit83),e->slot(0,0))};V t141=first(call(e->slot(1,4),Args{e->slot(0,23),V(0.0),V(1.2)}));refs[0].put(std::move(t141));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t142=first(call(e->slot(1,7),Args{lit190}));e->slot(0,0)=std::move(t142);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t143=first(call(e->slot(1,7),Args{lit191}));refs[0].put(std::move(t143));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t144=first(call(e->slot(1,7),Args{lit192}));refs[0].put(std::move(t144));}
}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit92)};V t145=V(true);refs[0].put(std::move(t145));}
}
{V t146=first(call(e->slot(1,7),Args{lit193}));e->slot(0,1)=std::move(t146);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t147=first(call(e->slot(1,7),Args{lit194}));refs[0].put(std::move(t147));}
}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit93)};V t148=V(true);refs[0].put(std::move(t148));}
}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,22),Args{e->slot(0,0)});
call(e->slot(1,23),Args{e->slot(0,0)});
if(truth(ge(e->slot(0,0),V(2.0)))){call(e->slot(1,24),Args{});
}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t149=divv(e->slot(0,1),first(call(get(e->get("math"),lit109),Args{get(get(e->slot(1,1),lit1),lit5),V(1.0)})));e->slot(0,3)=std::move(t149);}
{V t150=first(call(get(e->get("math"),lit109),Args{V(0.0),sub(e->slot(0,3),V(1.0))}));e->slot(0,4)=std::move(t150);}
{V t151=first(call(e->slot(1,4),Args{sub(V(1.0),divv(e->slot(0,1),first(call(get(e->get("math"),lit109),Args{get(get(e->slot(1,1),lit1),lit6),V(1.0)})))),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t151);}
{V t152=mul(mul(e->slot(0,4),get(get(e->slot(1,1),lit1),lit11)),e->slot(0,2));e->slot(0,6)=std::move(t152);}
{std::array<Ref,1> refs{Ref(e,0,6)};V t153=add(e->slot(0,6),mul(e->slot(0,5),V(0.08)));refs[0].put(std::move(t153));}
{V t154=V(0.0);e->slot(0,7)=std::move(t154);}
{double t155=num(V(0.0)),t156=num(V(1.0)),t157=num(V(1.0));for(double t158=t155;(t157>0?t158<=t156:t158>=t156);t158+=t157){auto parent=e;Env storage(parent,false,5);auto e=&storage;e->slot(0,0)=V(t158);{V t159=add(e->slot(1,0),e->slot(0,0));e->slot(0,1)=std::move(t159);}
{V t160=first(call(e->slot(2,4),Args{sub(V(1.0),first(call(get(e->get("math"),lit195),Args{get(get(get(e->slot(2,1),lit45),lit74),e->slot(0,1)),get(get(get(e->slot(2,1),lit45),lit75),e->slot(0,1))}))),V(0.0),V(1.0)}));e->slot(0,2)=std::move(t160);}
{V t161=first(call(e->slot(2,4),Args{sub(V(1.0),get(get(get(e->slot(2,1),lit45),lit82),e->slot(0,1))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t161);}
{V t162=first(call(e->slot(2,4),Args{sub(V(1.0),get(get(get(e->slot(2,1),lit45),lit79),e->slot(0,1))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t162);}
{std::array<Ref,1> refs{Ref(e,1,7)};V t163=sub(sub(sub(sub(add(add(add(add(add(add(add(add(add(add(add(add(add(sub(add(add(e->slot(1,7),mul(get(get(get(e->slot(2,1),lit45),lit64),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit14))),mul(get(get(get(e->slot(2,1),lit45),lit66),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit17))),mul(sub(get(get(get(e->slot(2,1),lit45),lit67),e->slot(0,1)),V(1.0)),get(get(e->slot(2,1),lit1),lit18))),mul(get(get(get(e->slot(2,1),lit45),lit68),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit20))),mul(get(get(get(e->slot(2,1),lit45),lit69),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit21))),mul(first(call(e->slot(2,5),Args{get(get(get(e->slot(2,1),lit45),lit70),e->slot(0,1))})),get(get(e->slot(2,1),lit1),lit22))),mul(first(call(e->slot(2,5),Args{get(get(get(e->slot(2,1),lit45),lit71),e->slot(0,1))})),get(get(e->slot(2,1),lit1),lit23))),mul(get(get(get(e->slot(2,1),lit45),lit72),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit27))),mul(get(get(get(e->slot(2,1),lit45),lit73),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit28))),mul(e->slot(0,2),get(get(e->slot(2,1),lit1),lit29))),mul(get(get(get(e->slot(2,1),lit45),lit78),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit30))),mul(get(get(get(e->slot(2,1),lit45),lit80),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit31))),mul(get(get(get(e->slot(2,1),lit45),lit81),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit32))),mul(get(get(get(e->slot(2,1),lit45),lit83),e->slot(0,1)),get(get(e->slot(2,1),lit1),lit33))),mul(e->slot(0,3),V(0.1))),mul(e->slot(0,4),V(0.08))),mul(first(call(get(e->get("math"),lit109),Args{get(get(get(e->slot(2,1),lit45),lit76),e->slot(0,1)),V(0.0)})),V(0.04))),mul(first(call(get(e->get("math"),lit109),Args{get(get(get(e->slot(2,1),lit45),lit77),e->slot(0,1)),V(0.0)})),V(0.035))),mul(first(call(get(e->get("math"),lit109),Args{sub(get(get(get(e->slot(2,1),lit45),lit82),e->slot(0,1)),V(1.0)),V(0.0)})),get(get(e->slot(2,1),lit1),lit34))),mul(first(call(get(e->get("math"),lit109),Args{sub(get(get(get(e->slot(2,1),lit45),lit75),e->slot(0,1)),V(1.0)),V(0.0)})),get(get(e->slot(2,1),lit1),lit35)));refs[0].put(std::move(t163));}
}}
{std::array<Ref,1> refs{Ref(e,0,6)};V t164=add(e->slot(0,6),mul(e->slot(0,7),V(0.5)));refs[0].put(std::move(t164));}
return call(e->slot(1,4),Args{e->slot(0,6),V(0.0),get(get(e->slot(1,1),lit1),lit10)});
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t165=([&](){V t166=([&](){V t167=eq(e->slot(0,2),V(0.0));return truth(t167)?V(0.0):t167;})();return !truth(t166)?V(2.0):t166;})();e->slot(0,3)=std::move(t165);}
{V t168=first(call(e->slot(1,26),Args{e->slot(0,3),e->slot(0,0),e->slot(0,1)}));e->slot(0,4)=std::move(t168);}
if(truth(eq(e->slot(0,2),V(1.0)))){{std::array<Ref,1> refs{Ref(e,0,4)};V t169=add(add(e->slot(0,4),mul(first(call(e->slot(1,5),call(e->slot(1,8),joined(Args{lit190},call(e->slot(1,8),Args{lit191,V(0.0)}))))),get(get(e->slot(1,1),lit1),lit24))),mul(mul(first(call(e->slot(1,8),joined(Args{lit193},call(e->slot(1,8),Args{lit194,V(0.0)})))),get(get(e->slot(1,1),lit1),lit25)),V(0.3)));refs[0].put(std::move(t169));}
}
{std::array<Ref,1> refs{Ref(e,0,4)};V t170=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),get(get(e->slot(1,1),lit1),lit10)}));refs[0].put(std::move(t170));}
if(truth(eq(e->slot(0,2),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit56)};V t171=e->slot(0,4);refs[0].put(std::move(t171));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit57)};V t172=e->slot(0,4);refs[0].put(std::move(t172));}
}
{V t173=sub(V(1.0),e->slot(0,4));e->slot(0,5)=std::move(t173);}
return call(e->slot(1,4),Args{e->slot(0,5),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);{V t174=first(call(e->slot(1,4),Args{mul(sub(V(1.0),get(get(e->slot(1,1),lit45),lit46)),get(get(e->slot(1,1),lit1),lit7)),V(0.0),get(get(e->slot(1,1),lit1),lit9)}));e->slot(0,1)=std::move(t174);}
{V t175=first(call(e->slot(1,4),Args{mul(sub(V(1.0),get(get(e->slot(1,1),lit45),lit47)),get(get(e->slot(1,1),lit1),lit8)),V(0.0),get(get(e->slot(1,1),lit1),lit9)}));e->slot(0,2)=std::move(t175);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit48)};V t176=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit48),e->slot(0,1),get(get(e->slot(1,1),lit1),lit3),e->slot(0,0)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit49)};V t177=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit49),e->slot(0,2),get(get(e->slot(1,1),lit1),lit3),e->slot(0,0)}));refs[0].put(std::move(t177));}
{V t178=add(add(mul(first(call(e->slot(1,5),call(e->slot(1,8),joined(Args{lit190},call(e->slot(1,8),Args{lit191,V(0.0)}))))),get(get(e->slot(1,1),lit1),lit24)),mul(first(call(e->slot(1,8),joined(Args{lit193},call(e->slot(1,8),Args{lit194,V(0.0)})))),get(get(e->slot(1,1),lit1),lit25))),mul(first(call(e->slot(1,5),call(e->slot(1,8),joined(Args{lit196},call(e->slot(1,8),Args{lit197,V(0.0)}))))),get(get(e->slot(1,1),lit1),lit26)));e->slot(0,3)=std::move(t178);}
{V t179=mul(add(add(add(get(get(get(e->slot(1,1),lit45),lit72),V(0.0)),get(get(get(e->slot(1,1),lit45),lit72),V(1.0))),get(get(get(e->slot(1,1),lit45),lit72),V(2.0))),get(get(get(e->slot(1,1),lit45),lit72),V(3.0))),V(0.25));e->slot(0,4)=std::move(t179);}
{V t180=mul(add(add(add(get(get(get(e->slot(1,1),lit45),lit80),V(0.0)),get(get(get(e->slot(1,1),lit45),lit80),V(1.0))),get(get(get(e->slot(1,1),lit45),lit80),V(2.0))),get(get(get(e->slot(1,1),lit45),lit80),V(3.0))),V(0.25));e->slot(0,5)=std::move(t180);}
{V t181=mul(add(add(add(get(get(get(e->slot(1,1),lit45),lit81),V(0.0)),get(get(get(e->slot(1,1),lit45),lit81),V(1.0))),get(get(get(e->slot(1,1),lit45),lit81),V(2.0))),get(get(get(e->slot(1,1),lit45),lit81),V(3.0))),V(0.25));e->slot(0,6)=std::move(t181);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit60)};V t182=e->slot(0,4);refs[0].put(std::move(t182));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit61)};V t183=e->slot(0,5);refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit62)};V t184=e->slot(0,6);refs[0].put(std::move(t184));}
{V t185=add(add(add(add(mul(add(get(get(e->slot(1,1),lit45),lit48),get(get(e->slot(1,1),lit45),lit49)),V(0.5)),e->slot(0,3)),mul(e->slot(0,4),get(get(e->slot(1,1),lit1),lit27))),mul(e->slot(0,5),get(get(e->slot(1,1),lit1),lit31))),mul(e->slot(0,6),get(get(e->slot(1,1),lit1),lit32)));e->slot(0,7)=std::move(t185);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit51)};V t186=first(call(e->slot(1,4),Args{e->slot(0,7),get(get(e->slot(1,1),lit1),lit36),get(get(e->slot(1,1),lit1),lit37)}));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit50)};V t187=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit50),get(get(e->slot(1,1),lit45),lit51),get(get(e->slot(1,1),lit1),lit4),e->slot(0,0)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit50)};V t188=first(call(e->slot(1,4),Args{get(get(e->slot(1,1),lit45),lit50),get(get(e->slot(1,1),lit1),lit36),get(get(e->slot(1,1),lit1),lit37)}));refs[0].put(std::move(t188));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t189=num(V(0.0)),t190=num(V(3.0)),t191=num(V(1.0));for(double t192=t189;(t191>0?t192<=t190:t192>=t190);t192+=t191){auto parent=e;Env storage(parent,false,4);auto e=&storage;e->slot(0,0)=V(t192);{V t193=([&](){V t194=([&](){V t195=lt(e->slot(0,0),V(2.0));return truth(t195)?get(get(e->slot(2,1),lit45),lit46):t195;})();return !truth(t194)?get(get(e->slot(2,1),lit45),lit47):t194;})();e->slot(0,1)=std::move(t193);}
{V t196=([&](){V t197=([&](){V t198=lt(e->slot(0,0),V(2.0));return truth(t198)?get(get(e->slot(2,1),lit45),lit48):t198;})();return !truth(t197)?get(get(e->slot(2,1),lit45),lit49):t197;})();e->slot(0,2)=std::move(t196);}
{V t199=add(add(mul(get(get(get(e->slot(2,1),lit45),lit65),e->slot(0,0)),get(get(e->slot(2,1),lit1),lit15)),mul(get(get(get(e->slot(2,1),lit45),lit72),e->slot(0,0)),V(0.035))),mul(get(get(get(e->slot(2,1),lit45),lit81),e->slot(0,0)),V(0.025)));e->slot(0,3)=std::move(t199);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit84),e->slot(0,0))};V t200=first(call(e->slot(2,4),Args{sub(e->slot(0,1),e->slot(0,3)),get(get(e->slot(2,1),lit1),lit12),get(get(e->slot(2,1),lit1),lit13)}));refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit85),e->slot(0,0))};V t201=first(call(e->slot(2,4),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0),get(get(e->slot(2,1),lit1),lit9)}));refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit86),e->slot(0,0))};V t202=first(call(e->slot(2,4),Args{add(add(add(V(1.0),mul(get(get(e->slot(2,1),lit45),lit50),V(0.25))),mul(get(get(get(e->slot(2,1),lit45),lit72),e->slot(0,0)),V(0.08))),mul(get(get(get(e->slot(2,1),lit45),lit80),e->slot(0,0)),V(0.04))),V(0.75),V(1.45)}));refs[0].put(std::move(t202));}
}}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit46)};V t203=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit46),V(1.0),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit47)};V t204=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit47),V(1.0),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit54)};V t205=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit54),V(1.0),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit55)};V t206=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit55),V(1.0),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t206));}
{double t207=num(V(0.0)),t208=num(V(3.0)),t209=num(V(1.0));for(double t210=t207;(t209>0?t210<=t208:t210>=t208);t210+=t209){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t210);{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit64),e->slot(0,0))};V t211=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit64),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit16),e->slot(1,0)}));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit65),e->slot(0,0))};V t212=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit65),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit16),e->slot(1,0)}));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit66),e->slot(0,0))};V t213=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit66),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit16),e->slot(1,0)}));refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit67),e->slot(0,0))};V t214=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit67),e->slot(0,0)),V(1.0),get(get(e->slot(2,1),lit1),lit16),e->slot(1,0)}));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit68),e->slot(0,0))};V t215=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit68),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit69),e->slot(0,0))};V t216=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit69),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit72),e->slot(0,0))};V t217=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit72),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit73),e->slot(0,0))};V t218=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit73),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit80),e->slot(0,0))};V t219=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit80),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit81),e->slot(0,0))};V t220=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit81),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit45),lit82),e->slot(0,0))};V t221=first(call(e->slot(2,6),Args{get(get(get(e->slot(2,1),lit45),lit82),e->slot(0,0)),V(1.0),get(get(e->slot(2,1),lit1),lit2),e->slot(1,0)}));refs[0].put(std::move(t221));}
}}
call(e->slot(1,28),Args{e->slot(0,0)});
call(e->slot(1,29),Args{});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t222=([&](){V t223=([&](){V t224=lt(e->slot(0,0),V(2.0));return truth(t224)?get(get(e->slot(1,1),lit45),lit46):t224;})();return !truth(t223)?get(get(e->slot(1,1),lit45),lit47):t223;})();e->slot(0,1)=std::move(t222);}
{V t225=([&](){V t226=([&](){V t227=lt(e->slot(0,0),V(2.0));return truth(t227)?get(get(e->slot(1,1),lit45),lit48):t227;})();return !truth(t226)?get(get(e->slot(1,1),lit45),lit49):t226;})();e->slot(0,2)=std::move(t225);}
call(e->slot(1,10),Args{concat(lit119,e->slot(0,0)),([&](){V t228=get(get(get(e->slot(1,1),lit45),lit63),e->slot(0,0));return !truth(t228)?V(0.0):t228;})()});
call(e->slot(1,10),Args{concat(lit198,e->slot(0,0)),([&](){V t229=get(get(get(e->slot(1,1),lit45),lit64),e->slot(0,0));return !truth(t229)?V(0.0):t229;})()});
call(e->slot(1,10),Args{concat(lit199,e->slot(0,0)),([&](){V t230=get(get(get(e->slot(1,1),lit45),lit65),e->slot(0,0));return !truth(t230)?V(0.0):t230;})()});
call(e->slot(1,10),Args{concat(lit200,e->slot(0,0)),([&](){V t231=get(get(get(e->slot(1,1),lit45),lit86),e->slot(0,0));return !truth(t231)?V(1.0):t231;})()});
call(e->slot(1,10),Args{concat(lit201,e->slot(0,0)),([&](){V t232=e->slot(0,1);return !truth(t232)?V(1.0):t232;})()});
call(e->slot(1,10),Args{concat(lit202,e->slot(0,0)),([&](){V t233=e->slot(0,2);return !truth(t233)?V(0.0):t233;})()});
call(e->slot(1,10),Args{concat(lit203,e->slot(0,0)),([&](){V t234=get(get(get(e->slot(1,1),lit45),lit84),e->slot(0,0));return !truth(t234)?V(1.0):t234;})()});
call(e->slot(1,10),Args{concat(lit204,e->slot(0,0)),([&](){V t235=get(get(get(e->slot(1,1),lit45),lit85),e->slot(0,0));return !truth(t235)?V(0.0):t235;})()});
call(e->slot(1,10),Args{concat(lit205,e->slot(0,0)),([&](){V t236=get(get(get(e->slot(1,1),lit45),lit84),e->slot(0,0));return !truth(t236)?V(1.0):t236;})()});
call(e->slot(1,10),Args{concat(lit206,e->slot(0,0)),([&](){V t237=get(get(get(e->slot(1,1),lit45),lit85),e->slot(0,0));return !truth(t237)?V(0.0):t237;})()});
call(e->slot(1,10),Args{concat(lit207,e->slot(0,0)),([&](){V t238=get(get(get(e->slot(1,1),lit45),lit86),e->slot(0,0));return !truth(t238)?V(1.0):t238;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit45),lit105))))){return Args{};
}
call(e->slot(1,10),Args{concat(lit208,e->slot(0,0)),([&](){V t239=get(get(get(e->slot(1,1),lit45),lit67),e->slot(0,0));return !truth(t239)?V(1.0):t239;})()});
call(e->slot(1,10),Args{concat(lit209,e->slot(0,0)),([&](){V t240=get(get(get(e->slot(1,1),lit45),lit66),e->slot(0,0));return !truth(t240)?V(0.0):t240;})()});
call(e->slot(1,10),Args{concat(lit210,e->slot(0,0)),([&](){V t241=get(get(get(e->slot(1,1),lit45),lit68),e->slot(0,0));return !truth(t241)?V(0.0):t241;})()});
call(e->slot(1,10),Args{concat(lit211,e->slot(0,0)),([&](){V t242=get(get(get(e->slot(1,1),lit45),lit69),e->slot(0,0));return !truth(t242)?V(0.0):t242;})()});
call(e->slot(1,10),Args{concat(lit212,e->slot(0,0)),([&](){V t243=get(get(get(e->slot(1,1),lit45),lit72),e->slot(0,0));return !truth(t243)?V(0.0):t243;})()});
call(e->slot(1,10),Args{concat(lit213,e->slot(0,0)),([&](){V t244=get(get(get(e->slot(1,1),lit45),lit81),e->slot(0,0));return !truth(t244)?V(0.0):t244;})()});
call(e->slot(1,10),Args{concat(lit214,e->slot(0,0)),([&](){V t245=get(get(get(e->slot(1,1),lit45),lit80),e->slot(0,0));return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,10),Args{concat(lit215,e->slot(0,0)),([&](){V t246=get(get(get(e->slot(1,1),lit45),lit82),e->slot(0,0));return !truth(t246)?V(1.0):t246;})()});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit216,([&](){V t247=get(get(e->slot(1,1),lit45),lit101);return !truth(t247)?lit217:t247;})()});
call(e->slot(1,10),Args{lit218,([&](){V t248=get(get(e->slot(1,1),lit45),lit103);return !truth(t248)?V(0.0):t248;})()});
call(e->slot(1,10),Args{lit219,([&](){V t249=([&](){V t250=get(get(e->slot(1,1),lit45),lit99);return truth(t250)?V(1.0):t250;})();return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,10),Args{lit220,([&](){V t251=([&](){V t252=get(get(e->slot(1,1),lit45),lit100);return truth(t252)?V(1.0):t252;})();return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,10),Args{lit221,([&](){V t253=([&](){V t254=get(get(e->slot(1,1),lit45),lit87);return truth(t254)?V(1.0):t254;})();return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,10),Args{lit222,([&](){V t255=get(get(e->slot(1,1),lit45),lit46);return !truth(t255)?V(1.0):t255;})()});
call(e->slot(1,10),Args{lit223,([&](){V t256=get(get(e->slot(1,1),lit45),lit47);return !truth(t256)?V(1.0):t256;})()});
call(e->slot(1,10),Args{lit224,([&](){V t257=get(get(e->slot(1,1),lit45),lit48);return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,10),Args{lit225,([&](){V t258=get(get(e->slot(1,1),lit45),lit49);return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,10),Args{lit226,([&](){V t259=get(get(e->slot(1,1),lit45),lit50);return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,10),Args{lit227,([&](){V t260=get(get(e->slot(1,1),lit45),lit52);return !truth(t260)?V(0.0):t260;})()});
call(e->slot(1,10),Args{lit228,([&](){V t261=get(get(e->slot(1,1),lit45),lit53);return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,10),Args{lit229,([&](){V t262=get(get(e->slot(1,1),lit45),lit54);return !truth(t262)?V(1.0):t262;})()});
call(e->slot(1,10),Args{lit230,([&](){V t263=get(get(e->slot(1,1),lit45),lit55);return !truth(t263)?V(1.0):t263;})()});
call(e->slot(1,10),Args{lit231,([&](){V t264=get(get(e->slot(1,1),lit45),lit46);return !truth(t264)?V(1.0):t264;})()});
call(e->slot(1,10),Args{lit232,([&](){V t265=get(get(e->slot(1,1),lit45),lit47);return !truth(t265)?V(1.0):t265;})()});
call(e->slot(1,10),Args{lit233,([&](){V t266=get(get(e->slot(1,1),lit45),lit50);return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,10),Args{lit234,([&](){V t267=get(get(e->slot(1,1),lit45),lit46);return !truth(t267)?V(1.0):t267;})()});
call(e->slot(1,10),Args{lit235,([&](){V t268=get(get(e->slot(1,1),lit45),lit47);return !truth(t268)?V(1.0):t268;})()});
call(e->slot(1,10),Args{lit236,([&](){V t269=get(get(e->slot(1,1),lit45),lit50);return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,10),Args{lit237,([&](){V t270=get(get(e->slot(1,1),lit45),lit48);return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,10),Args{lit238,([&](){V t271=get(get(e->slot(1,1),lit45),lit49);return !truth(t271)?V(0.0):t271;})()});
call(e->slot(1,10),Args{lit239,([&](){V t272=get(get(e->slot(1,1),lit45),lit56);return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,10),Args{lit240,([&](){V t273=get(get(e->slot(1,1),lit45),lit57);return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,10),Args{lit241,([&](){V t274=get(get(e->slot(1,1),lit45),lit58);return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,10),Args{lit242,([&](){V t275=get(get(e->slot(1,1),lit45),lit59);return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,10),Args{lit243,([&](){V t276=get(get(e->slot(1,1),lit45),lit60);return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,10),Args{lit244,([&](){V t277=get(get(e->slot(1,1),lit45),lit62);return !truth(t277)?V(0.0):t277;})()});
{double t278=num(V(0.0)),t279=num(V(3.0)),t280=num(V(1.0));for(double t281=t278;(t280>0?t281<=t279:t281>=t279);t281+=t280){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t281);call(e->slot(2,31),Args{e->slot(0,0)});
}}
if(truth(V(!truth(get(get(e->slot(1,1),lit45),lit105))))){return Args{};
}
call(e->slot(1,10),Args{lit245,([&](){V t282=([&](){V t283=get(get(e->slot(1,1),lit45),lit88);return truth(t283)?V(1.0):t283;})();return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,10),Args{lit246,([&](){V t284=([&](){V t285=get(get(e->slot(1,1),lit45),lit89);return truth(t285)?V(1.0):t285;})();return !truth(t284)?V(0.0):t284;})()});
call(e->slot(1,10),Args{lit247,([&](){V t286=([&](){V t287=get(get(e->slot(1,1),lit45),lit90);return truth(t287)?V(1.0):t287;})();return !truth(t286)?V(0.0):t286;})()});
call(e->slot(1,10),Args{lit248,([&](){V t288=([&](){V t289=get(get(e->slot(1,1),lit45),lit91);return truth(t289)?V(1.0):t289;})();return !truth(t288)?V(0.0):t288;})()});
call(e->slot(1,10),Args{lit249,([&](){V t290=([&](){V t291=get(get(e->slot(1,1),lit45),lit92);return truth(t291)?V(1.0):t291;})();return !truth(t290)?V(0.0):t290;})()});
call(e->slot(1,10),Args{lit250,([&](){V t292=([&](){V t293=get(get(e->slot(1,1),lit45),lit93);return truth(t293)?V(1.0):t293;})();return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,10),Args{lit251,([&](){V t294=([&](){V t295=get(get(e->slot(1,1),lit45),lit94);return truth(t295)?V(1.0):t295;})();return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,10),Args{lit252,([&](){V t296=([&](){V t297=get(get(e->slot(1,1),lit45),lit95);return truth(t297)?V(1.0):t297;})();return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,10),Args{lit253,([&](){V t298=([&](){V t299=get(get(e->slot(1,1),lit45),lit96);return truth(t299)?V(1.0):t299;})();return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,10),Args{lit254,([&](){V t300=([&](){V t301=get(get(e->slot(1,1),lit45),lit97);return truth(t301)?V(1.0):t301;})();return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,10),Args{lit255,([&](){V t302=([&](){V t303=get(get(e->slot(1,1),lit45),lit98);return truth(t303)?V(1.0):t303;})();return !truth(t302)?V(0.0):t302;})()});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,18),Args{});
{double t304=num(V(0.0)),t305=num(V(3.0)),t306=num(V(1.0));for(double t307=t304;(t306>0?t307<=t305:t307>=t305);t307+=t306){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t307);call(e->slot(2,25),Args{e->slot(0,0),e->slot(1,0)});
}}
{Args t308=call(e->slot(1,20),Args{e->slot(0,1)});e->slot(0,2)=arg(t308,0);e->slot(0,3)=arg(t308,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit52)};V t309=e->slot(0,2);refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit53)};V t310=e->slot(0,3);refs[0].put(std::move(t310));}
{V t311=first(call(e->slot(1,27),Args{e->slot(0,2),get(get(e->slot(1,1),lit1),lit7),V(0.0)}));e->slot(0,4)=std::move(t311);}
{V t312=first(call(e->slot(1,27),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit8),V(1.0)}));e->slot(0,5)=std::move(t312);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit54)};V t313=e->slot(0,4);refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit55)};V t314=e->slot(0,5);refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit46)};V t315=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit46),e->slot(0,4),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit47)};V t316=first(call(e->slot(1,6),Args{get(get(e->slot(1,1),lit45),lit47),e->slot(0,5),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit46)};V t317=first(call(e->slot(1,4),Args{get(get(e->slot(1,1),lit45),lit46),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)}));refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit47)};V t318=first(call(e->slot(1,4),Args{get(get(e->slot(1,1),lit45),lit47),get(get(e->slot(1,1),lit1),lit12),get(get(e->slot(1,1),lit1),lit13)}));refs[0].put(std::move(t318));}
{V t319=V(0.0);e->slot(0,6)=std::move(t319);}
{V t320=V(0.0);e->slot(0,7)=std::move(t320);}
{double t321=num(V(0.0)),t322=num(V(3.0)),t323=num(V(1.0));for(double t324=t321;(t323>0?t324<=t322:t324>=t322);t324+=t323){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t324);{std::array<Ref,1> refs{Ref(e,1,6)};V t325=add(e->slot(1,6),([&](){V t326=get(get(get(e->slot(2,1),lit45),lit64),e->slot(0,0));return !truth(t326)?V(0.0):t326;})());refs[0].put(std::move(t325));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t327=add(e->slot(1,7),([&](){V t328=get(get(get(e->slot(2,1),lit45),lit66),e->slot(0,0));return !truth(t328)?V(0.0):t328;})());refs[0].put(std::move(t327));}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit58)};V t329=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t329));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit59)};V t330=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t330));}
call(e->slot(1,28),Args{e->slot(0,0)});
call(e->slot(1,29),Args{});
return Args{};});
Ref(e->slot(0,1),lit256).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit101)};V t331=lit102;refs[0].put(std::move(t331));}
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit257).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit103)};V t332=add(([&](){V t333=get(get(e->slot(1,1),lit45),lit103);return !truth(t333)?V(0.0):t333;})(),V(1.0));refs[0].put(std::move(t332));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t334=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t334));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit101)};V t335=lit258;refs[0].put(std::move(t335));}
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t336=first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit38),get(get(e->slot(1,1),lit1),lit39)}));refs[0].put(std::move(t336));}
call(e->slot(1,17),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t337=first(call(e->slot(1,12),Args{}));refs[0].put(std::move(t337));}
}
{V t338=first(call(e->slot(1,13),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t338);}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit101)};V t339=lit259;refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit99)};V t340=V(false);refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit100)};V t341=V(true);refs[0].put(std::move(t341));}
call(e->slot(1,33),Args{e->slot(0,0),V()});
call(e->slot(1,32),Args{});
return Args{};
}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit101)};V t342=lit260;refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit99)};V t343=V(false);refs[0].put(std::move(t343));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit100)};V t344=V(true);refs[0].put(std::move(t344));}
call(e->slot(1,33),Args{e->slot(0,0),V()});
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit101)};V t345=lit261;refs[0].put(std::move(t345));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit99)};V t346=V(true);refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit45),lit100)};V t347=V(false);refs[0].put(std::move(t347));}
call(e->slot(1,33),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit262).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t348=get(get(e->slot(1,1),lit45),lit46);return !truth(t348)?V(1.0):t348;})()};
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t349=get(get(e->slot(1,1),lit45),lit47);return !truth(t349)?V(1.0):t349;})()};
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t350=get(get(e->slot(1,1),lit45),lit50);return !truth(t350)?V(0.0):t350;})()};
return Args{};}));
Ref(e->slot(0,1),lit265).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t351=get(get(e->slot(1,1),lit45),lit48);return !truth(t351)?V(0.0):t351;})()};
return Args{};}));
Ref(e->slot(0,1),lit266).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t352=get(get(e->slot(1,1),lit45),lit49);return !truth(t352)?V(0.0):t352;})()};
return Args{};}));
Ref(e->slot(0,1),lit267).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V z=table();set(z,lit268,([&](){V t353=get(get(e->slot(1,1),lit45),lit46);return !truth(t353)?V(1.0):t353;})());set(z,lit269,([&](){V t354=get(get(e->slot(1,1),lit45),lit47);return !truth(t354)?V(1.0):t354;})());return z;})()};
}
return Args{([&](){V t355=([&](){V t356=get(get(get(e->slot(1,1),lit45),lit84),e->slot(0,0));return !truth(t356)?([&](){V t357=([&](){V t358=lt(e->slot(0,0),V(2.0));return truth(t358)?get(get(e->slot(1,1),lit45),lit46):t358;})();return !truth(t357)?get(get(e->slot(1,1),lit45),lit47):t357;})():t356;})();return !truth(t355)?V(1.0):t355;})()};
return Args{};}));
Ref(e->slot(0,1),lit270).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V z=table();set(z,lit268,([&](){V t359=get(get(e->slot(1,1),lit45),lit48);return !truth(t359)?V(0.0):t359;})());set(z,lit269,([&](){V t360=get(get(e->slot(1,1),lit45),lit49);return !truth(t360)?V(0.0):t360;})());return z;})()};
}
return Args{([&](){V t361=([&](){V t362=get(get(get(e->slot(1,1),lit45),lit85),e->slot(0,0));return !truth(t362)?([&](){V t363=([&](){V t364=lt(e->slot(0,0),V(2.0));return truth(t364)?get(get(e->slot(1,1),lit45),lit48):t364;})();return !truth(t363)?get(get(e->slot(1,1),lit45),lit49):t363;})():t362;})();return !truth(t361)?V(0.0):t361;})()};
return Args{};}));
Ref(e->slot(0,1),lit271).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{([&](){V t365=get(get(e->slot(1,1),lit45),lit52);return !truth(t365)?V(0.0):t365;})(),([&](){V t366=get(get(e->slot(1,1),lit45),lit53);return !truth(t366)?V(0.0):t366;})()};
}
return Args{([&](){V t367=get(get(get(e->slot(1,1),lit45),lit63),e->slot(0,0));return !truth(t367)?V(0.0):t367;})()};
return Args{};}));
Ref(e->slot(0,1),lit272).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit45)};
}
return Args{([&](){V z=table();set(z,lit273,([&](){V t368=get(e->slot(1,2),e->slot(0,0));return !truth(t368)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t368;})());set(z,lit63,([&](){V t369=get(get(get(e->slot(1,1),lit45),lit63),e->slot(0,0));return !truth(t369)?V(0.0):t369;})());set(z,lit64,([&](){V t370=get(get(get(e->slot(1,1),lit45),lit64),e->slot(0,0));return !truth(t370)?V(0.0):t370;})());set(z,lit65,([&](){V t371=get(get(get(e->slot(1,1),lit45),lit65),e->slot(0,0));return !truth(t371)?V(0.0):t371;})());set(z,lit66,([&](){V t372=get(get(get(e->slot(1,1),lit45),lit66),e->slot(0,0));return !truth(t372)?V(0.0):t372;})());set(z,lit67,([&](){V t373=get(get(get(e->slot(1,1),lit45),lit67),e->slot(0,0));return !truth(t373)?V(1.0):t373;})());set(z,lit84,([&](){V t374=get(get(get(e->slot(1,1),lit45),lit84),e->slot(0,0));return !truth(t374)?V(1.0):t374;})());set(z,lit85,([&](){V t375=get(get(get(e->slot(1,1),lit45),lit85),e->slot(0,0));return !truth(t375)?V(0.0):t375;})());set(z,lit86,([&](){V t376=get(get(get(e->slot(1,1),lit45),lit86),e->slot(0,0));return !truth(t376)?V(1.0):t376;})());set(z,lit72,([&](){V t377=get(get(get(e->slot(1,1),lit45),lit72),e->slot(0,0));return !truth(t377)?V(0.0):t377;})());set(z,lit81,([&](){V t378=get(get(get(e->slot(1,1),lit45),lit81),e->slot(0,0));return !truth(t378)?V(0.0):t378;})());set(z,lit80,([&](){V t379=get(get(get(e->slot(1,1),lit45),lit80),e->slot(0,0));return !truth(t379)?V(0.0):t379;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit274).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit275),Args{concat(lit276,concat(lit277,concat(lit278,concat(lit279,lit280)))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit45),lit101)})),([&](){V t380=get(get(e->slot(1,1),lit45),lit103);return !truth(t380)?V(0.0):t380;})(),([&](){V t381=([&](){V t382=get(get(e->slot(1,1),lit45),lit99);return truth(t382)?lit281:t382;})();return !truth(t381)?lit282:t381;})(),([&](){V t383=([&](){V t384=get(get(e->slot(1,1),lit45),lit100);return truth(t384)?lit283:t384;})();return !truth(t383)?lit284:t383;})(),([&](){V t385=get(get(e->slot(1,1),lit45),lit52);return !truth(t385)?V(0.0):t385;})(),([&](){V t386=get(get(e->slot(1,1),lit45),lit46);return !truth(t386)?V(1.0):t386;})(),([&](){V t387=get(get(e->slot(1,1),lit45),lit54);return !truth(t387)?V(1.0):t387;})(),([&](){V t388=get(get(e->slot(1,1),lit45),lit48);return !truth(t388)?V(0.0):t388;})(),([&](){V t389=get(get(e->slot(1,1),lit45),lit56);return !truth(t389)?V(0.0):t389;})(),([&](){V t390=get(get(e->slot(1,1),lit45),lit53);return !truth(t390)?V(0.0):t390;})(),([&](){V t391=get(get(e->slot(1,1),lit45),lit47);return !truth(t391)?V(1.0):t391;})(),([&](){V t392=get(get(e->slot(1,1),lit45),lit55);return !truth(t392)?V(1.0):t392;})(),([&](){V t393=get(get(e->slot(1,1),lit45),lit49);return !truth(t393)?V(0.0):t393;})(),([&](){V t394=get(get(e->slot(1,1),lit45),lit57);return !truth(t394)?V(0.0):t394;})(),([&](){V t395=get(get(e->slot(1,1),lit45),lit50);return !truth(t395)?V(0.0):t395;})(),([&](){V t396=get(get(e->slot(1,1),lit45),lit51);return !truth(t396)?V(0.0):t396;})(),([&](){V t397=get(get(e->slot(1,1),lit45),lit58);return !truth(t397)?V(0.0):t397;})(),([&](){V t398=get(get(e->slot(1,1),lit45),lit59);return !truth(t398)?V(0.0):t398;})(),([&](){V t399=get(get(e->slot(1,1),lit45),lit62);return !truth(t399)?V(0.0):t399;})(),([&](){V t400=([&](){V t401=get(get(e->slot(1,1),lit45),lit88);return truth(t401)?lit281:t401;})();return !truth(t400)?lit282:t400;})(),([&](){V t402=([&](){V t403=get(get(e->slot(1,1),lit45),lit89);return truth(t403)?lit281:t403;})();return !truth(t402)?lit282:t402;})(),([&](){V t404=([&](){V t405=get(get(e->slot(1,1),lit45),lit90);return truth(t405)?lit281:t405;})();return !truth(t404)?lit282:t404;})(),([&](){V t406=([&](){V t407=get(get(e->slot(1,1),lit45),lit91);return truth(t407)?lit281:t407;})();return !truth(t406)?lit282:t406;})(),([&](){V t408=([&](){V t409=get(get(e->slot(1,1),lit45),lit92);return truth(t409)?lit281:t409;})();return !truth(t408)?lit282:t408;})(),([&](){V t410=([&](){V t411=get(get(e->slot(1,1),lit45),lit93);return truth(t411)?lit281:t411;})();return !truth(t410)?lit282:t410;})(),([&](){V t412=([&](){V t413=get(get(e->slot(1,1),lit45),lit94);return truth(t413)?lit281:t413;})();return !truth(t412)?lit282:t412;})(),([&](){V t414=([&](){V t415=get(get(e->slot(1,1),lit45),lit95);return truth(t415)?lit281:t415;})();return !truth(t414)?lit282:t414;})(),([&](){V t416=([&](){V t417=get(get(e->slot(1,1),lit45),lit96);return truth(t417)?lit281:t417;})();return !truth(t416)?lit282:t416;})(),([&](){V t418=([&](){V t419=get(get(e->slot(1,1),lit45),lit97);return truth(t419)?lit281:t419;})();return !truth(t418)?lit282:t418;})(),([&](){V t420=([&](){V t421=get(get(e->slot(1,1),lit45),lit98);return truth(t421)?lit281:t421;})();return !truth(t420)?lit282:t420;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
