// Generated native C++ from pinned damper_hysteresis.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("INIT");
static const V lit6("HOLD");
static const V lit7("BUMP_LOW");
static const V lit8("REBOUND_LOW");
static const V lit9("BUMP_HIGH");
static const V lit10("REBOUND_HIGH");
static const V lit11("REVERSAL");
static const V lit12("IMPACT");
static const V lit13("UNLOADED");
static const V lit14("ROAD_MEMORY");
static const V lit15("HYSTERETIC");
static const V lit16("params");
static const V lit17("invertVelocity");
static const V lit18("deriveVelocityFromTravel");
static const V lit19("deadVelocity");
static const V lit20("lowSpeedVelocity");
static const V lit21("highSpeedVelocity");
static const V lit22("impactVelocity");
static const V lit23("accelRef");
static const V lit24("reversalVelocity");
static const V lit25("reversalHoldTime");
static const V lit26("lowSpeedBumpDamping");
static const V lit27("lowSpeedReboundDamping");
static const V lit28("highSpeedBumpDamping");
static const V lit29("highSpeedReboundDamping");
static const V lit30("hystereticVerticalGain");
static const V lit31("verticalDampingGain");
static const V lit32("ringLagGain");
static const V lit33("beltLagGain");
static const V lit34("ringTauRise");
static const V lit35("ringTauFall");
static const V lit36("beltTauRise");
static const V lit37("beltTauFall");
static const V lit38("heatBuildGain");
static const V lit39("heatCoolGain");
static const V lit40("roadMemoryGain");
static const V lit41("roadMemoryTauRise");
static const V lit42("roadMemoryTauFall");
static const V lit43("velocityTau");
static const V lit44("accelTau");
static const V lit45("bumpTau");
static const V lit46("reboundTau");
static const V lit47("impactTau");
static const V lit48("memoryTauRise");
static const V lit49("memoryTauFall");
static const V lit50("hystTauRise");
static const V lit51("hystTauFall");
static const V lit52("forceRef");
static const V lit53("workScale");
static const V lit54("velocityBuildGain");
static const V lit55("forceBuildGain");
static const V lit56("impactBuildGain");
static const V lit57("reversalBuildGain");
static const V lit58("contactLossBuildGain");
static const V lit59("roadInputBuildGain");
static const V lit60("memoryHystGain");
static const V lit61("energyHystGain");
static const V lit62("impactHystGain");
static const V lit63("reversalHystGain");
static const V lit64("heatHystGain");
static const V lit65("carcassHystGain");
static const V lit66("unloadedQuality");
static const V lit67("unloadedLoad");
static const V lit68("contactTrustGain");
static const V lit69("carcassSupportGain");
static const V lit70("carcassGripGateGain");
static const V lit71("carcassVerticalGain");
static const V lit72("carcassHysteresisReadGain");
static const V lit73("maxMemory");
static const V lit74("maxEnergy");
static const V lit75("maxHysteresis");
static const V lit76("maxHeat");
static const V lit77("loadRef");
static const V lit78("minDt");
static const V lit79("maxDt");
static const V lit80("outputEnabled");
static const V lit81("debugStoreInterval");
static const V lit82("active");
static const V lit83("initialized");
static const V lit84("travel");
static const V lit85("prevTravel");
static const V lit86("rawVelocity");
static const V lit87("velocity");
static const V lit88("prevVelocity");
static const V lit89("accel");
static const V lit90("force");
static const V lit91("proxyForce");
static const V lit92("absVelocity");
static const V lit93("bump");
static const V lit94("rebound");
static const V lit95("highSpeed");
static const V lit96("impact");
static const V lit97("reversal");
static const V lit98("reversalTimer");
static const V lit99("lowSpeedBand");
static const V lit100("highSpeedBand");
static const V lit101("lowSpeedDamping");
static const V lit102("highSpeedDamping");
static const V lit103("verticalDamping");
static const V lit104("hystereticDamping");
static const V lit105("ringLag");
static const V lit106("beltLag");
static const V lit107("verticalPulse");
static const V lit108("work");
static const V lit109("energy");
static const V lit110("memory");
static const V lit111("roadMemory");
static const V lit112("dampingHeat");
static const V lit113("hysteresis");
static const V lit114("bias");
static const V lit115("contactQuality");
static const V lit116("contactTrust");
static const V lit117("contactStability");
static const V lit118("contactSlip");
static const V lit119("roadInput");
static const V lit120("load");
static const V lit121("carcassSupport");
static const V lit122("carcassGripGate");
static const V lit123("carcassVerticalNorm");
static const V lit124("carcassHysteresis");
static const V lit125("carcassRecoveryBias");
static const V lit126("phaseId");
static const V lit127("phaseText");
static const V lit128("state");
static const V lit129("wheels");
static const V lit130("status");
static const V lit131("updateCount");
static const V lit132("wheelsValid");
static const V lit133("avgHysteresis");
static const V lit134("avgMemory");
static const V lit135("avgAbsVelocity");
static const V lit136("avgImpact");
static const V lit137("avgHeat");
static const V lit138("avgRoadMemory");
static const V lit139("avgVerticalPulse");
static const V lit140("avgVerticalDamping");
static const V lit141("frontBias");
static const V lit142("rearBias");
static const V lit143("leftBias");
static const V lit144("rightBias");
static const V lit145("maxImpact");
static const V lit146("maxAbsVelocity");
static const V lit147("damperLinked");
static const V lit148("contactLinked");
static const V lit149("carcassLinked");
static const V lit150("roadLinked");
static const V lit151("travelLinked");
static const V lit152("loadLinked");
static const V lit153("debugStoreTimer");
static const V lit154("debugStoreNow");
static const V lit155("debug");
static const V lit156("huge");
static const V lit157("abs");
static const V lit158("max");
static const V lit159("safeStore");
static const V lit160("safeLoadRaw");
static const V lit161("safeField");
static const V lit162("getCar");
static const V lit163("loadK");
static const V lit164("ngp_contact_load_");
static const V lit165("ngp_tire_state_load_");
static const V lit166("ngp_tire_carcass_load_");
static const V lit167("ngp_wheel_load_");
static const V lit168("ngp_dlt_load_");
static const V lit169("ngp_sprung_load_");
static const V lit170("ngp_damper_travel_");
static const V lit171("ngp_susp_damper_travel_");
static const V lit172("ngp_susp_travel_");
static const V lit173("damperTravel");
static const V lit174("suspensionTravel");
static const V lit175("suspensionLength");
static const V lit176("rideHeight");
static const V lit177("ngp_damper_velocity_");
static const V lit178("ngp_damper_vel_");
static const V lit179("ngp_susp_damper_velocity_");
static const V lit180("ngp_susp_velocity_");
static const V lit181("ngp_susp_speed_");
static const V lit182("ngp_damper_force_");
static const V lit183("ngp_susp_external_damper_");
static const V lit184("ngp_susp_int_damper_");
static const V lit185("ngp_susp_integrated_force_");
static const V lit186("ngp_susp_int_force_");
static const V lit187("ngp_contact_quality_");
static const V lit188("ngp_tire_contact_quality_");
static const V lit189("ngp_tcr_quality_");
static const V lit190("ngp_contact_trust_");
static const V lit191("ngp_contact_stability_score_");
static const V lit192("ngp_contact_combined_slip_");
static const V lit193("ngp_contact_loss_");
static const V lit194("ngp_tire_contact_loss_");
static const V lit195("ngp_tcr_contact_loss_");
static const V lit196("ngp_carcass_support_");
static const V lit197("ngp_tire_carcass_support_");
static const V lit198("ngp_contact_carcass_support_");
static const V lit199("ngp_carcass_grip_gate_");
static const V lit200("ngp_tire_carcass_grip_gate_");
static const V lit201("ngp_contact_grip_gate_");
static const V lit202("ngp_carcass_vertical_norm_");
static const V lit203("ngp_tire_carcass_vertical_norm_");
static const V lit204("ngp_carcass_vertical_deflect_");
static const V lit205("ngp_tire_carcass_crush_");
static const V lit206("ngp_damper_carcass_vertical_");
static const V lit207("ngp_contact_vertical_score_");
static const V lit208("ngp_carcass_hysteresis_");
static const V lit209("ngp_tire_carcass_hyst_");
static const V lit210("ngp_tire_carcass_hysteresis_");
static const V lit211("ngp_contact_hysteresis_");
static const V lit212("ngp_carcass_recovery_bias_");
static const V lit213("ngp_tire_return_force_");
static const V lit214("ngp_contact_recovery_bias_");
static const V lit215("ngp_sci_road_input_");
static const V lit216("ngp_susp_contact_input_");
static const V lit217("ngp_road_input_");
static const V lit218("ngp_road_input_wheel_");
static const V lit219("ngp_load_path_road_input_");
static const V lit220("ngp_body_heave_input");
static const V lit221("ngp_body_pitch_input");
static const V lit222("ngp_body_roll_input");
static const V lit223("NO WHEEL");
static const V lit224("ngp_damper_hyst_");
static const V lit225("ngp_damper_hyst_memory_");
static const V lit226("ngp_damper_hyst_velocity_");
static const V lit227("ngp_damper_hyst_abs_velocity_");
static const V lit228("ngp_damper_hyst_phase_id_");
static const V lit229("ngp_damper_hyst_bias_");
static const V lit230("ngp_damper_hyst_bump_");
static const V lit231("ngp_damper_hyst_rebound_");
static const V lit232("ngp_damper_hyst_impact_");
static const V lit233("ngp_damper_hyst_reversal_");
static const V lit234("ngp_damper_low_speed_");
static const V lit235("ngp_damper_high_speed_");
static const V lit236("ngp_damper_vertical_");
static const V lit237("ngp_damper_hysteretic_");
static const V lit238("ngp_damper_ring_lag_");
static const V lit239("ngp_damper_belt_lag_");
static const V lit240("ngp_damper_vertical_pulse_");
static const V lit241("ngp_damper_heat_");
static const V lit242("ngp_damper_road_memory_");
static const V lit243("ngp_hyst_damper_");
static const V lit244("ngp_road_vertical_pulse_");
static const V lit245("ngp_road_damper_memory_");
static const V lit246("ngp_vertical_damping_");
static const V lit247("ngp_hysteretic_damping_");
static const V lit248("ngp_damper_memory_");
static const V lit249("ngp_damper_energy_");
static const V lit250("ngp_damper_impact_");
static const V lit251("ngp_damper_phase_id_");
static const V lit252("ngp_damper_hyst_phase_");
static const V lit253("UNKNOWN");
static const V lit254("ngp_damper_hyst_raw_velocity_");
static const V lit255("ngp_damper_hyst_accel_");
static const V lit256("ngp_damper_hyst_force_");
static const V lit257("ngp_damper_proxy_force_");
static const V lit258("ngp_damper_hyst_work_");
static const V lit259("ngp_damper_hyst_energy_");
static const V lit260("ngp_damper_hyst_highspeed_");
static const V lit261("ngp_damper_low_band_");
static const V lit262("ngp_damper_high_band_");
static const V lit263("ngp_damper_hyst_contact_quality_");
static const V lit264("ngp_damper_hyst_contact_trust_");
static const V lit265("ngp_damper_hyst_contact_stability_");
static const V lit266("ngp_damper_hyst_road_input_");
static const V lit267("ngp_damper_hyst_load_");
static const V lit268("ngp_damper_carcass_hyst_");
static const V lit269("ngp_damper_hyst_status");
static const V lit270("ngp_damper_hyst_update_count");
static const V lit271("ngp_damper_hyst_wheels_valid");
static const V lit272("ngp_damper_hyst_avg");
static const V lit273("ngp_damper_hyst_avg_memory");
static const V lit274("ngp_damper_hyst_avg_abs_velocity");
static const V lit275("ngp_damper_hyst_avg_impact");
static const V lit276("ngp_damper_hyst_avg_heat");
static const V lit277("ngp_damper_hyst_avg_road_memory");
static const V lit278("ngp_damper_hyst_front_bias");
static const V lit279("ngp_damper_hyst_rear_bias");
static const V lit280("ngp_damper_hyst_left_bias");
static const V lit281("ngp_damper_hyst_right_bias");
static const V lit282("ngp_damper_avg_hysteresis");
static const V lit283("ngp_damper_avg_impact");
static const V lit284("ngp_damper_avg_heat");
static const V lit285("ngp_damper_avg_road_memory");
static const V lit286("ngp_damper_avg_vertical_pulse");
static const V lit287("ngp_damper_avg_vertical_damping");
static const V lit288("ngp_damper_max_impact");
static const V lit289("ngp_damper_max_abs_velocity");
static const V lit290("ngp_damper_hyst_damper_linked");
static const V lit291("ngp_damper_hyst_contact_linked");
static const V lit292("ngp_damper_hyst_carcass_linked");
static const V lit293("ngp_damper_hyst_road_linked");
static const V lit294("ngp_damper_hyst_travel_linked");
static const V lit295("ngp_damper_hyst_load_linked");
static const V lit296("init");
static const V lit297("update");
static const V lit298("BAD DT");
static const V lit299("RUNNING");
static const V lit300("NO CAR");
static const V lit301("NO WHEELS");
static const V lit302("getHysteresis");
static const V lit303("getMemory");
static const V lit304("getImpact");
static const V lit305("getVerticalPulse");
static const V lit306("getVerticalDamping");
static const V lit307("getRoadMemory");
static const V lit308("getPhase");
static const V lit309("getState");
static const V lit310("debugStr");
static const V lit311("floor");
static const V lit312("format");
static const V lit313("Status %s / Count %.0f / Wheels %s\n");
static const V lit314("Phase %s / Hyst %.3f / Mem %.3f / Heat %.3f\n");
static const V lit315("Vel %+.4f / Acc %+.3f / Force %+.0f\n");
static const V lit316("B %.2f R %.2f HS %.2f Imp %.2f Rev %.2f\n");
static const V lit317("VD %.2f HD %.2f Ring %.2f Belt %.2f Pulse %.2f\n");
static const V lit318("CQ %.2f Trust %.2f Road %.2f Load %.0f\n");
static const V lit319("Links DMP:%s CQ:%s TC:%s Road:%s Trav:%s Load:%s");
static const V lit320("OK");
static const V lit321("NIL");
static const V lit322("drawDebug");
static const V lit323("text");
static const V lit324("separator");
static const V lit325("=== DAMPER HYSTERESIS ===");
static const V lit326("Status %s / Avg %.3f / Mem %.3f / Vel %.4f / Heat %.3f");
static const V lit327("%s %s H %.2f M %.2f V %+.3f I %.2f P %.2f");
V load_damper_hysteresis(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(35);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,V(0.0),lit5);set(z,V(1.0),lit6);set(z,V(2.0),lit7);set(z,V(3.0),lit8);set(z,V(4.0),lit9);set(z,V(5.0),lit10);set(z,V(6.0),lit11);set(z,V(7.0),lit12);set(z,V(8.0),lit13);set(z,V(9.0),lit14);set(z,V(10.0),lit15);return z;})();e->slot(0,3)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit16)};V t5=([&](){V z=table();set(z,lit17,V(false));set(z,lit18,V(true));set(z,lit19,V(0.006));set(z,lit20,V(0.03));set(z,lit21,V(0.18));set(z,lit22,V(0.52));set(z,lit23,V(3.5));set(z,lit24,V(0.018));set(z,lit25,V(0.08));set(z,lit26,V(0.62));set(z,lit27,V(0.7));set(z,lit28,V(0.92));set(z,lit29,V(1.0));set(z,lit30,V(0.78));set(z,lit31,V(0.45));set(z,lit32,V(0.34));set(z,lit33,V(0.42));set(z,lit34,V(0.04));set(z,lit35,V(0.18));set(z,lit36,V(0.07));set(z,lit37,V(0.26));set(z,lit38,V(0.42));set(z,lit39,V(0.16));set(z,lit40,V(0.28));set(z,lit41,V(0.05));set(z,lit42,V(0.48));set(z,lit43,V(0.045));set(z,lit44,V(0.06));set(z,lit45,V(0.11));set(z,lit46,V(0.13));set(z,lit47,V(0.05));set(z,lit48,V(0.075));set(z,lit49,V(0.42));set(z,lit50,V(0.055));set(z,lit51,V(0.26));set(z,lit52,V(4500.0));set(z,lit53,V(2e-05));set(z,lit54,V(0.66));set(z,lit55,V(0.16));set(z,lit56,V(0.42));set(z,lit57,V(0.24));set(z,lit58,V(0.18));set(z,lit59,V(0.22));set(z,lit60,V(0.35));set(z,lit61,V(0.24));set(z,lit62,V(0.16));set(z,lit63,V(0.1));set(z,lit64,V(0.1));set(z,lit65,V(0.12));set(z,lit66,V(0.18));set(z,lit67,V(120.0));set(z,lit68,V(0.22));set(z,lit69,V(0.18));set(z,lit70,V(0.16));set(z,lit71,V(0.18));set(z,lit72,V(0.12));set(z,lit73,V(1.0));set(z,lit74,V(1.0));set(z,lit75,V(1.0));set(z,lit76,V(1.0));set(z,lit77,V(3000.0));set(z,lit78,V(5e-05));set(z,lit79,V(0.05));set(z,lit80,V(true));set(z,lit81,V(0.25));return z;})();refs[0].put(std::move(t5));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V z=table();set(z,lit82,V(false));set(z,lit83,V(false));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(1.0));set(z,lit116,V(1.0));set(z,lit117,V(1.0));set(z,lit118,V(0.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(1.0));set(z,lit122,V(1.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(0.0));set(z,lit127,lit5);return z;})()};
return Args{};});
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit128)};V t6=([&](){V z=table();set(z,lit129,([&](){V z=table();return z;})());set(z,lit130,lit5);set(z,lit131,V(0.0));set(z,lit132,V(false));set(z,lit133,V(0.0));set(z,lit134,V(0.0));set(z,lit135,V(0.0));set(z,lit136,V(0.0));set(z,lit137,V(0.0));set(z,lit138,V(0.0));set(z,lit139,V(0.0));set(z,lit140,V(0.0));set(z,lit141,V(0.0));set(z,lit142,V(0.0));set(z,lit143,V(0.0));set(z,lit144,V(0.0));set(z,lit145,V(0.0));set(z,lit146,V(0.0));set(z,lit147,V(false));set(z,lit148,V(false));set(z,lit149,V(false));set(z,lit150,V(false));set(z,lit151,V(false));set(z,lit152,V(false));set(z,lit153,V(999.0));set(z,lit154,V(true));return z;})();refs[0].put(std::move(t6));}
{double t7=num(V(0.0)),t8=num(V(3.0)),t9=num(V(1.0));for(double t10=t7;(t9>0?t10<=t8:t10>=t8);t10+=t9){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t10);{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0))};V t11=first(call(e->slot(1,4),Args{}));refs[0].put(std::move(t11));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),e->slot(0,0))};V t12=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));refs[0].put(std::move(t12));}
}}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit155)};V t13=get(e->slot(0,1),lit128);refs[0].put(std::move(t13));}
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(([&](){V t15=([&](){V t16=([&](){V t17=eq(e->slot(0,2),V());return !truth(t17)?ne(e->slot(0,2),e->slot(0,2)):t17;})();return !truth(t16)?eq(e->slot(0,2),get(e->get("math"),lit156)):t16;})();return !truth(t15)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit156)))):t15;})())){return Args{([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t19=first(call(e->slot(1,5),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t19));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit157),call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t20));}
if(truth(gt(e->slot(0,0),V(1e-06)))){return Args{V(1.0)};
}
if(truth(lt(e->slot(0,0),V(-num(V(1e-06)))))){return Args{V(-num(V(1.0)))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(eq(e->slot(0,0),e->slot(0,1)))){return Args{([&](){V t21=([&](){V t22=ge(e->slot(0,2),e->slot(0,1));return truth(t22)?V(1.0):t22;})();return !truth(t21)?V(0.0):t21;})()};
}
{V t23=first(call(e->slot(1,6),Args{divv(sub(first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)})),e->slot(0,0)),sub(e->slot(0,1),e->slot(0,0))),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t23);}
return Args{mul(mul(e->slot(0,3),e->slot(0,3)),sub(V(3.0),mul(V(2.0),e->slot(0,3))))};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t24=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t24));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t25=first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t25));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t26=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t26));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t27=first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t27));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,6),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit158),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{V t28=([&](){V t29=([&](){V t30=gt(e->slot(0,1),e->slot(0,0));return truth(t30)?e->slot(0,2):t30;})();return !truth(t29)?e->slot(0,3):t29;})();e->slot(0,5)=std::move(t28);}
return call(e->slot(1,10),Args{e->slot(0,0),e->slot(0,1),e->slot(0,5),e->slot(0,4)});
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(get(get(e->slot(1,1),lit16),lit80))))){return Args{};
}
return call(get(e->slot(1,0),lit159),Args{e->slot(0,0),e->slot(0,1)});
return Args{};});
{V t31=get(e->slot(0,0),lit160);e->slot(0,13)=std::move(t31);}
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t32=first(call(e->slot(1,13),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t32);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t33=e->slot(0,1);return !truth(t33)?V(0.0):t33;})()};
}
return call(e->slot(1,5),Args{e->slot(0,2),([&](){V t34=e->slot(0,1);return !truth(t34)?V(0.0):t34;})()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t35=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t35);}
{double t36=num(V(1.0)),t37=num(length(e->slot(0,1))),t38=num(V(1.0));for(double t39=t36;(t38>0?t39<=t37:t39>=t37);t39+=t38){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t39);{V t40=first(call(e->slot(2,13),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t40);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,5),Args{e->slot(0,1),([&](){V t41=e->slot(1,0);return !truth(t41)?V(0.0):t41;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t42=e->slot(0,0);return !truth(t42)?V(0.0):t42;})(),V()};
return Args{};});
{V t43=get(e->slot(0,0),lit161);e->slot(0,16)=std::move(t43);}
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t44=V(!truth(e->get("ac")));return !truth(t44)?V(!truth(get(e->get("ac"),lit162))):t44;})())){return Args{V()};
}
{Args t45=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit162),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t45,0);e->slot(0,1)=arg(t45,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t46=first(call(e->slot(1,16),Args{e->slot(0,0),lit129,V()}));e->slot(0,2)=std::move(t46);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t47=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t48=get(e->slot(1,2),e->slot(1,1));return !truth(t48)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t48;})()};
return Args{};})});e->slot(0,3)=arg(t47,0);e->slot(0,4)=arg(t47,1);}
if(truth(V(!truth(e->slot(0,3))))){return Args{V()};
}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit153)};V t49=add(([&](){V t50=get(get(e->slot(1,1),lit128),lit153);return !truth(t50)?V(0.0):t50;})(),([&](){V t51=e->slot(0,0);return !truth(t51)?V(0.0):t51;})());refs[0].put(std::move(t49));}
if(truth(ge(get(get(e->slot(1,1),lit128),lit153),get(get(e->slot(1,1),lit16),lit81)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit153)};V t52=V(0.0);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit154)};V t53=V(true);refs[0].put(std::move(t53));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit154)};V t54=V(false);refs[0].put(std::move(t54));}
}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit147)};V t55=V(false);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit148)};V t56=V(false);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit149)};V t57=V(false);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit150)};V t58=V(false);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit151)};V t59=V(false);refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t60=V(false);refs[0].put(std::move(t60));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t61=([&](){V t62=([&](){V t63=([&](){V t64=first(call(e->slot(2,16),Args{e->slot(1,0),lit120,V()}));return !truth(t64)?first(call(e->slot(2,16),Args{e->slot(1,0),lit163,V()})):t64;})();return !truth(t63)?V():t63;})();return !truth(t62)?V():t62;})();e->slot(0,0)=std::move(t61);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit128),lit152)};V t65=V(true);refs[0].put(std::move(t65));}
return call(e->slot(2,7),Args{e->slot(0,0)});
}
}
{V t66=first(call(e->slot(1,13),Args{concat(lit164,e->slot(0,1))}));e->slot(0,2)=std::move(t66);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit148)};V t67=V(true);refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t68=V(true);refs[0].put(std::move(t68));}
return call(e->slot(1,7),Args{e->slot(0,2)});
}
{V t69=first(call(e->slot(1,13),Args{concat(lit165,e->slot(0,1))}));e->slot(0,3)=std::move(t69);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t70=V(true);refs[0].put(std::move(t70));}
return call(e->slot(1,7),Args{e->slot(0,3)});
}
{V t71=first(call(e->slot(1,13),Args{concat(lit166,e->slot(0,1))}));e->slot(0,4)=std::move(t71);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit149)};V t72=V(true);refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t73=V(true);refs[0].put(std::move(t73));}
return call(e->slot(1,7),Args{e->slot(0,4)});
}
{V t74=first(call(e->slot(1,13),Args{concat(lit167,e->slot(0,1))}));e->slot(0,5)=std::move(t74);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t75=V(true);refs[0].put(std::move(t75));}
return call(e->slot(1,7),Args{e->slot(0,5)});
}
{V t76=first(call(e->slot(1,13),Args{concat(lit168,e->slot(0,1))}));e->slot(0,6)=std::move(t76);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t77=V(true);refs[0].put(std::move(t77));}
return call(get(e->get("math"),lit158),Args{V(0.0),add(get(get(e->slot(1,1),lit16),lit77),first(call(e->slot(1,5),Args{e->slot(0,6),V(0.0)})))});
}
{V t78=first(call(e->slot(1,13),Args{concat(lit169,e->slot(0,1))}));e->slot(0,7)=std::move(t78);}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit152)};V t79=V(true);refs[0].put(std::move(t79));}
return call(e->slot(1,7),Args{e->slot(0,7)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t80=call(e->slot(1,15),Args{V(0.0),concat(lit170,e->slot(0,1)),concat(lit171,e->slot(0,1)),concat(lit172,e->slot(0,1))});e->slot(0,2)=arg(t80,0);e->slot(0,3)=arg(t80,1);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit151)};V t81=V(true);refs[0].put(std::move(t81));}
return Args{e->slot(0,2)};
}
if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t82=([&](){V z=table();set(z,V(1.0),lit173);set(z,V(2.0),lit174);set(z,V(3.0),lit84);set(z,V(4.0),lit175);set(z,V(5.0),lit176);return z;})();e->slot(0,0)=std::move(t82);}
{double t83=num(V(1.0)),t84=num(length(e->slot(0,0))),t85=num(V(1.0));for(double t86=t83;(t85>0?t86<=t84:t86>=t84);t86+=t85){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t86);{V t87=first(call(e->slot(3,16),Args{e->slot(2,0),get(e->slot(1,0),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t87);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(3,1),lit128),lit151)};V t88=V(true);refs[0].put(std::move(t88));}
return call(e->slot(3,5),Args{e->slot(0,1),V(0.0)});
}
}}
}
return Args{V(0.0)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{Args t89=call(e->slot(1,15),Args{V(0.0),concat(lit177,e->slot(0,2)),concat(lit178,e->slot(0,2)),concat(lit179,e->slot(0,2)),concat(lit180,e->slot(0,2)),concat(lit181,e->slot(0,2))});e->slot(0,4)=arg(t89,0);e->slot(0,5)=arg(t89,1);}
if(truth(e->slot(0,5))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit147)};V t90=V(true);refs[0].put(std::move(t90));}
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t91=first(call(e->slot(2,22),Args{e->slot(1,1),e->slot(1,2)}));e->slot(0,0)=std::move(t91);}
{std::array<Ref,1> refs{Ref(e->slot(1,0),lit84)};V t92=e->slot(0,0);refs[0].put(std::move(t92));}
if(truth(([&](){V t93=get(get(e->slot(2,1),lit16),lit18);return truth(t93)?get(e->slot(1,0),lit83):t93;})())){{std::array<Ref,1> refs{Ref(e,1,4)};V t94=divv(sub(e->slot(0,0),([&](){V t95=get(e->slot(1,0),lit85);return !truth(t95)?e->slot(0,0):t95;})()),first(call(get(e->get("math"),lit158),Args{e->slot(1,3),V(0.001)})));refs[0].put(std::move(t94));}
}else{{std::array<Ref,1> refs{Ref(e,1,4)};V t96=V(0.0);refs[0].put(std::move(t96));}
}
}
if(truth(get(get(e->slot(1,1),lit16),lit17))){{std::array<Ref,1> refs{Ref(e,0,4)};V t97=V(-num(e->slot(0,4)));refs[0].put(std::move(t97));}
}
return call(e->slot(1,5),Args{e->slot(0,4),V(0.0)});
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t98=call(e->slot(1,15),Args{V(0.0),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0)),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0)),concat(lit186,e->slot(0,0))});e->slot(0,1)=arg(t98,0);e->slot(0,2)=arg(t98,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit147)};V t99=V(true);refs[0].put(std::move(t99));}
return Args{e->slot(0,1)};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t100=first(call(e->slot(1,13),Args{concat(lit187,e->slot(0,1))}));e->slot(0,2)=std::move(t100);}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t101=first(call(e->slot(1,13),Args{concat(lit188,e->slot(0,1))}));refs[0].put(std::move(t101));}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t102=first(call(e->slot(1,13),Args{concat(lit189,e->slot(0,1))}));refs[0].put(std::move(t102));}
}
{V t103=first(call(e->slot(1,13),Args{concat(lit190,e->slot(0,1))}));e->slot(0,3)=std::move(t103);}
{V t104=first(call(e->slot(1,13),Args{concat(lit191,e->slot(0,1))}));e->slot(0,4)=std::move(t104);}
{V t105=first(call(e->slot(1,13),Args{concat(lit192,e->slot(0,1))}));e->slot(0,5)=std::move(t105);}
{V t106=first(call(e->slot(1,13),Args{concat(lit193,e->slot(0,1))}));e->slot(0,6)=std::move(t106);}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t107=first(call(e->slot(1,13),Args{concat(lit194,e->slot(0,1))}));refs[0].put(std::move(t107));}
}
if(truth(eq(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t108=first(call(e->slot(1,13),Args{concat(lit195,e->slot(0,1))}));refs[0].put(std::move(t108));}
}
if(truth(([&](){V t109=([&](){V t110=([&](){V t111=([&](){V t112=ne(e->slot(0,2),V());return !truth(t112)?ne(e->slot(0,3),V()):t112;})();return !truth(t111)?ne(e->slot(0,4),V()):t111;})();return !truth(t110)?ne(e->slot(0,5),V()):t110;})();return !truth(t109)?ne(e->slot(0,6),V()):t109;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit148)};V t113=V(true);refs[0].put(std::move(t113));}
}
if(truth(([&](){V t114=eq(e->slot(0,2),V());return truth(t114)?ne(e->slot(0,6),V()):t114;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t115=sub(V(1.0),first(call(e->slot(1,5),Args{e->slot(0,6),V(0.0)})));refs[0].put(std::move(t115));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit115)};V t116=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,2),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit116)};V t117=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,3),get(e->slot(0,0),lit115)})),V(0.0),V(1.2)}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit117)};V t118=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,4),get(e->slot(0,0),lit116)})),V(0.0),V(1.0)}));refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit118)};V t119=first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(2.0)}));refs[0].put(std::move(t119));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t120=call(e->slot(1,15),Args{V(1.0),concat(lit196,e->slot(0,1)),concat(lit197,e->slot(0,1)),concat(lit198,e->slot(0,1))});e->slot(0,2)=arg(t120,0);e->slot(0,3)=arg(t120,1);}
{Args t121=call(e->slot(1,15),Args{V(1.0),concat(lit199,e->slot(0,1)),concat(lit200,e->slot(0,1)),concat(lit201,e->slot(0,1))});e->slot(0,4)=arg(t121,0);e->slot(0,5)=arg(t121,1);}
{Args t122=call(e->slot(1,15),Args{V(0.0),concat(lit202,e->slot(0,1)),concat(lit203,e->slot(0,1)),concat(lit204,e->slot(0,1)),concat(lit205,e->slot(0,1)),concat(lit206,e->slot(0,1))});e->slot(0,6)=arg(t122,0);e->slot(0,7)=arg(t122,1);}
if(truth(V(!truth(e->slot(0,7))))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t123=first(call(e->slot(2,13),Args{concat(lit207,e->slot(1,1))}));e->slot(0,0)=std::move(t123);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,6)};V t124=sub(V(1.0),first(call(e->slot(2,6),Args{first(call(e->slot(2,5),Args{e->slot(0,0),V(1.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t125=concat(lit207,e->slot(1,1));refs[0].put(std::move(t125));}
}
}
{Args t126=call(e->slot(1,15),Args{V(0.0),concat(lit208,e->slot(0,1)),concat(lit209,e->slot(0,1)),concat(lit210,e->slot(0,1)),concat(lit211,e->slot(0,1))});e->slot(0,8)=arg(t126,0);e->slot(0,9)=arg(t126,1);}
{Args t127=call(e->slot(1,15),Args{V(0.0),concat(lit212,e->slot(0,1)),concat(lit213,e->slot(0,1)),concat(lit214,e->slot(0,1))});e->slot(0,10)=arg(t127,0);e->slot(0,11)=arg(t127,1);}
if(truth(([&](){V t128=([&](){V t129=([&](){V t130=([&](){V t131=e->slot(0,3);return !truth(t131)?e->slot(0,5):t131;})();return !truth(t130)?e->slot(0,7):t130;})();return !truth(t129)?e->slot(0,9):t129;})();return !truth(t128)?e->slot(0,11):t128;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit149)};V t132=V(true);refs[0].put(std::move(t132));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit121)};V t133=first(call(e->slot(1,6),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit122)};V t134=first(call(e->slot(1,6),Args{e->slot(0,4),V(0.0),V(1.2)}));refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit123)};V t135=first(call(e->slot(1,6),Args{e->slot(0,6),V(0.0),V(1.5)}));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit124)};V t136=first(call(e->slot(1,6),Args{e->slot(0,8),V(0.0),V(1.2)}));refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(0,0),lit125)};V t137=first(call(e->slot(1,6),Args{e->slot(0,10),V(0.0),V(1.2)}));refs[0].put(std::move(t137));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t138=call(e->slot(1,15),Args{V(0.0),concat(lit215,e->slot(0,0)),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0)),concat(lit219,e->slot(0,0))});e->slot(0,1)=arg(t138,0);e->slot(0,2)=arg(t138,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit150)};V t139=V(true);refs[0].put(std::move(t139));}
return call(e->slot(1,6),Args{first(call(e->slot(1,7),Args{e->slot(0,1)})),V(0.0),V(1.0)});
}
{V t140=first(call(e->slot(1,7),call(e->slot(1,14),Args{lit220,V(0.0)})));e->slot(0,3)=std::move(t140);}
{V t141=first(call(e->slot(1,7),call(e->slot(1,14),Args{lit221,V(0.0)})));e->slot(0,4)=std::move(t141);}
{V t142=first(call(e->slot(1,7),call(e->slot(1,14),Args{lit222,V(0.0)})));e->slot(0,5)=std::move(t142);}
{V t143=first(call(e->slot(1,6),Args{add(add(e->slot(0,3),mul(e->slot(0,4),V(0.5))),mul(e->slot(0,5),V(0.5))),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t143);}
if(truth(gt(e->slot(0,6),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit150)};V t144=V(true);refs[0].put(std::move(t144));}
}
return Args{e->slot(0,6)};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(([&](){V t145=lt(get(e->slot(0,0),lit120),get(get(e->slot(1,1),lit16),lit67));return !truth(t145)?lt(get(e->slot(0,0),lit115),get(get(e->slot(1,1),lit16),lit66)):t145;})())){return Args{V(8.0),get(e->slot(1,3),V(8.0))};
}
if(truth(gt(get(e->slot(0,0),lit96),V(0.7)))){return Args{V(7.0),get(e->slot(1,3),V(7.0))};
}
if(truth(gt(get(e->slot(0,0),lit97),V(0.35)))){return Args{V(6.0),get(e->slot(1,3),V(6.0))};
}
if(truth(([&](){V t146=gt(get(e->slot(0,0),lit111),V(0.5));return truth(t146)?lt(get(e->slot(0,0),lit92),get(get(e->slot(1,1),lit16),lit21)):t146;})())){return Args{V(9.0),get(e->slot(1,3),V(9.0))};
}
if(truth(gt(get(e->slot(0,0),lit104),V(0.58)))){return Args{V(10.0),get(e->slot(1,3),V(10.0))};
}
if(truth(lt(get(e->slot(0,0),lit92),get(get(e->slot(1,1),lit16),lit19)))){return Args{V(1.0),get(e->slot(1,3),V(1.0))};
}
if(truth(ge(get(e->slot(0,0),lit87),get(get(e->slot(1,1),lit16),lit21)))){return Args{V(4.0),get(e->slot(1,3),V(4.0))};
}
if(truth(le(get(e->slot(0,0),lit87),V(-num(get(get(e->slot(1,1),lit16),lit21)))))){return Args{V(5.0),get(e->slot(1,3),V(5.0))};
}
if(truth(gt(get(e->slot(0,0),lit87),V(0.0)))){return Args{V(2.0),get(e->slot(1,3),V(2.0))};
}
return Args{V(3.0),get(e->slot(1,3),V(3.0))};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,37);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e->slot(0,1),lit82)};V t147=V(true);refs[0].put(std::move(t147));}
{V t148=first(call(e->slot(1,22),Args{e->slot(0,2),e->slot(0,0)}));e->slot(0,4)=std::move(t148);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit84)};V t149=e->slot(0,4);refs[0].put(std::move(t149));}
{V t150=first(call(e->slot(1,23),Args{e->slot(0,1),e->slot(0,2),e->slot(0,0),e->slot(0,3)}));e->slot(0,5)=std::move(t150);}
{V t151=first(call(e->slot(1,24),Args{e->slot(0,0)}));e->slot(0,6)=std::move(t151);}
call(e->slot(1,25),Args{e->slot(0,1),e->slot(0,0)});
call(e->slot(1,26),Args{e->slot(0,1),e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit119)};V t152=first(call(e->slot(1,27),Args{e->slot(0,0)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit120)};V t153=first(call(e->slot(1,21),Args{e->slot(0,2),e->slot(0,0)}));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit86)};V t154=e->slot(0,5);refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit87)};V t155=first(call(e->slot(1,10),Args{get(e->slot(0,1),lit87),e->slot(0,5),get(get(e->slot(1,1),lit16),lit43),e->slot(0,3)}));refs[0].put(std::move(t155));}
{V t156=divv(sub(get(e->slot(0,1),lit87),([&](){V t157=get(e->slot(0,1),lit88);return !truth(t157)?V(0.0):t157;})()),first(call(get(e->get("math"),lit158),Args{e->slot(0,3),V(0.001)})));e->slot(0,7)=std::move(t156);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit89)};V t158=first(call(e->slot(1,10),Args{get(e->slot(0,1),lit89),e->slot(0,7),get(get(e->slot(1,1),lit16),lit44),e->slot(0,3)}));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit90)};V t159=e->slot(0,6);refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit92)};V t160=first(call(e->slot(1,7),Args{get(e->slot(0,1),lit87)}));refs[0].put(std::move(t160));}
{V t161=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit88)}));e->slot(0,8)=std::move(t161);}
{V t162=first(call(e->slot(1,8),Args{get(e->slot(0,1),lit87)}));e->slot(0,9)=std::move(t162);}
{V t163=([&](){V t164=([&](){V t165=([&](){V t166=ne(e->slot(0,8),V(0.0));return truth(t166)?ne(e->slot(0,9),V(0.0)):t166;})();return truth(t165)?ne(e->slot(0,8),e->slot(0,9)):t165;})();return truth(t164)?gt(get(e->slot(0,1),lit92),get(get(e->slot(1,1),lit16),lit24)):t164;})();e->slot(0,10)=std::move(t163);}
if(truth(e->slot(0,10))){{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t167=get(get(e->slot(1,1),lit16),lit25);refs[0].put(std::move(t167));}
}else{{std::array<Ref,1> refs{Ref(e->slot(0,1),lit98)};V t168=first(call(get(e->get("math"),lit158),Args{V(0.0),sub(([&](){V t169=get(e->slot(0,1),lit98);return !truth(t169)?V(0.0):t169;})(),e->slot(0,3))}));refs[0].put(std::move(t168));}
}
{V t170=V(0.0);e->slot(0,11)=std::move(t170);}
if(truth(gt(get(e->slot(0,1),lit98),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t171=first(call(e->slot(1,6),Args{divv(get(e->slot(0,1),lit92),first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,1),lit16),lit21),V(0.001)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t171));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit97)};V t172=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit97),e->slot(0,11),V(0.025),V(0.14),e->slot(0,3)}));refs[0].put(std::move(t172));}
{V t173=V(0.0);e->slot(0,12)=std::move(t173);}
{V t174=V(0.0);e->slot(0,13)=std::move(t174);}
if(truth(gt(get(e->slot(0,1),lit87),get(get(e->slot(1,1),lit16),lit19)))){{std::array<Ref,1> refs{Ref(e,0,12)};V t175=first(call(e->slot(1,6),Args{divv(get(e->slot(0,1),lit87),first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,1),lit16),lit21),V(0.001)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t175));}
}else if(truth(lt(get(e->slot(0,1),lit87),V(-num(get(get(e->slot(1,1),lit16),lit19)))))){{std::array<Ref,1> refs{Ref(e,0,13)};V t176=first(call(e->slot(1,6),Args{divv(V(-num(get(e->slot(0,1),lit87))),first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,1),lit16),lit21),V(0.001)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t176));}
}

{std::array<Ref,1> refs{Ref(e->slot(0,1),lit93)};V t177=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit93),e->slot(0,12),get(get(e->slot(1,1),lit16),lit45),mul(get(get(e->slot(1,1),lit16),lit45),V(1.4)),e->slot(0,3)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t178=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit94),e->slot(0,13),get(get(e->slot(1,1),lit16),lit46),mul(get(get(e->slot(1,1),lit16),lit46),V(1.4)),e->slot(0,3)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit95)};V t179=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit16),lit21),get(get(e->slot(1,1),lit16),lit22),get(e->slot(0,1),lit92)}));refs[0].put(std::move(t179));}
{V t180=first(call(e->slot(1,9),joined(Args{get(get(e->slot(1,1),lit16),lit23),mul(get(get(e->slot(1,1),lit16),lit23),V(2.5))},call(e->slot(1,7),Args{get(e->slot(0,1),lit89)}))));e->slot(0,14)=std::move(t180);}
{V t181=first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit16),lit21),get(get(e->slot(1,1),lit16),lit22),get(e->slot(0,1),lit92)}));e->slot(0,15)=std::move(t181);}
{V t182=sub(V(1.0),get(e->slot(0,1),lit117));e->slot(0,16)=std::move(t182);}
{V t183=sub(V(1.0),first(call(e->slot(1,6),Args{get(e->slot(0,1),lit115),V(0.0),V(1.0)})));e->slot(0,17)=std::move(t183);}
{V t184=first(call(e->slot(1,6),Args{add(add(add(add(mul(e->slot(0,15),V(0.42)),mul(e->slot(0,14),V(0.28))),mul(e->slot(0,16),V(0.14))),mul(get(e->slot(0,1),lit119),V(0.1))),mul(get(e->slot(0,1),lit123),V(0.08))),V(0.0),V(1.0)}));e->slot(0,18)=std::move(t184);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit96)};V t185=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit96),e->slot(0,18),get(get(e->slot(1,1),lit16),lit47),mul(get(get(e->slot(1,1),lit16),lit47),V(3.0)),e->slot(0,3)}));refs[0].put(std::move(t185));}
{V t186=first(call(e->slot(1,6),Args{divv(get(e->slot(0,1),lit92),first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,1),lit16),lit21),V(0.001)}))),V(0.0),V(1.0)}));e->slot(0,19)=std::move(t186);}
{V t187=first(call(e->slot(1,6),Args{divv(first(call(e->slot(1,7),Args{get(e->slot(0,1),lit90)})),first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,1),lit16),lit52),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,20)=std::move(t187);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit99)};V t188=first(call(e->slot(1,6),Args{sub(V(1.0),first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit16),lit20),get(get(e->slot(1,1),lit16),lit21),get(e->slot(0,1),lit92)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit100)};V t189=first(call(e->slot(1,6),Args{first(call(e->slot(1,9),Args{get(get(e->slot(1,1),lit16),lit20),get(get(e->slot(1,1),lit16),lit22),get(e->slot(0,1),lit92)})),V(0.0),V(1.0)}));refs[0].put(std::move(t189));}
{V t190=add(mul(get(e->slot(0,1),lit99),get(get(e->slot(1,1),lit16),lit26)),mul(get(e->slot(0,1),lit100),get(get(e->slot(1,1),lit16),lit28)));e->slot(0,21)=std::move(t190);}
{V t191=add(mul(get(e->slot(0,1),lit99),get(get(e->slot(1,1),lit16),lit27)),mul(get(e->slot(0,1),lit100),get(get(e->slot(1,1),lit16),lit29)));e->slot(0,22)=std::move(t191);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t192=first(call(e->slot(1,6),Args{mul(mul(get(e->slot(0,1),lit99),add(get(e->slot(0,1),lit93),get(e->slot(0,1),lit94))),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t193=first(call(e->slot(1,6),Args{mul(mul(get(e->slot(0,1),lit100),add(get(e->slot(0,1),lit93),get(e->slot(0,1),lit94))),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t193));}
{V t194=([&](){V t195=([&](){V t196=ge(get(e->slot(0,1),lit87),V(0.0));return truth(t196)?e->slot(0,21):t196;})();return !truth(t195)?e->slot(0,22):t195;})();e->slot(0,23)=std::move(t194);}
{V t197=first(call(e->slot(1,6),Args{add(add(add(mul(e->slot(0,19),get(get(e->slot(1,1),lit16),lit31)),mul(e->slot(0,23),V(0.34))),mul(get(e->slot(0,1),lit102),V(0.24))),mul(get(e->slot(0,1),lit123),get(get(e->slot(1,1),lit16),lit71))),V(0.0),V(1.0)}));e->slot(0,24)=std::move(t197);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t198=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit103),e->slot(0,24),V(0.05),V(0.18),e->slot(0,3)}));refs[0].put(std::move(t198));}
{V t199=first(call(e->slot(1,6),Args{add(add(add(mul(get(e->slot(0,1),lit95),get(get(e->slot(1,1),lit16),lit32)),mul(get(e->slot(0,1),lit97),V(0.2))),mul(get(e->slot(0,1),lit96),V(0.28))),mul(get(e->slot(0,1),lit119),V(0.14))),V(0.0),V(1.0)}));e->slot(0,25)=std::move(t199);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit105)};V t200=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit105),e->slot(0,25),get(get(e->slot(1,1),lit16),lit34),get(get(e->slot(1,1),lit16),lit35),e->slot(0,3)}));refs[0].put(std::move(t200));}
{V t201=first(call(e->slot(1,6),Args{add(add(add(mul(get(e->slot(0,1),lit103),get(get(e->slot(1,1),lit16),lit33)),mul(get(e->slot(0,1),lit96),V(0.24))),mul(get(e->slot(0,1),lit124),V(0.26))),mul(get(e->slot(0,1),lit111),V(0.18))),V(0.0),V(1.0)}));e->slot(0,26)=std::move(t201);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit106)};V t202=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit106),e->slot(0,26),get(get(e->slot(1,1),lit16),lit36),get(get(e->slot(1,1),lit16),lit37),e->slot(0,3)}));refs[0].put(std::move(t202));}
{V t203=first(call(e->slot(1,6),Args{add(add(add(mul(get(e->slot(0,1),lit119),get(get(e->slot(1,1),lit16),lit40)),mul(get(e->slot(0,1),lit96),V(0.26))),mul(get(e->slot(0,1),lit102),V(0.18))),mul(e->slot(0,17),V(0.12))),V(0.0),V(1.0)}));e->slot(0,27)=std::move(t203);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit111)};V t204=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit111),e->slot(0,27),get(get(e->slot(1,1),lit16),lit41),get(get(e->slot(1,1),lit16),lit42),e->slot(0,3)}));refs[0].put(std::move(t204));}
{V t205=first(call(e->slot(1,6),Args{add(add(add(mul(first(call(e->slot(1,7),Args{mul(get(e->slot(0,1),lit87),e->slot(0,23))})),get(get(e->slot(1,1),lit16),lit38)),mul(get(e->slot(0,1),lit108),V(0.2))),mul(get(e->slot(0,1),lit96),V(0.18))),mul(get(e->slot(0,1),lit111),V(0.1))),V(0.0),get(get(e->slot(1,1),lit16),lit76)}));e->slot(0,28)=std::move(t205);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t206=first(call(e->slot(1,6),Args{add(get(e->slot(0,1),lit112),mul(sub(mul(e->slot(0,28),get(get(e->slot(1,1),lit16),lit38)),mul(get(get(e->slot(1,1),lit16),lit39),add(V(0.2),get(e->slot(0,1),lit112)))),e->slot(0,3))),V(0.0),get(get(e->slot(1,1),lit16),lit76)}));refs[0].put(std::move(t206));}
{V t207=first(call(e->slot(1,6),Args{add(add(add(add(add(mul(get(e->slot(0,1),lit103),V(0.32)),mul(get(e->slot(0,1),lit105),V(0.2))),mul(get(e->slot(0,1),lit106),V(0.22))),mul(get(e->slot(0,1),lit97),V(0.12))),mul(get(e->slot(0,1),lit124),get(get(e->slot(1,1),lit16),lit72))),mul(e->slot(0,17),V(0.1))),V(0.0),V(1.0)}));e->slot(0,29)=std::move(t207);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit104)};V t208=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit104),e->slot(0,29),get(get(e->slot(1,1),lit16),lit50),get(get(e->slot(1,1),lit16),lit51),e->slot(0,3)}));refs[0].put(std::move(t208));}
{V t209=mul(mul(e->slot(0,23),get(e->slot(0,1),lit87)),get(get(e->slot(1,1),lit16),lit52));e->slot(0,30)=std::move(t209);}
if(truth(ne(get(e->slot(0,1),lit90),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,30)};V t210=get(e->slot(0,1),lit90);refs[0].put(std::move(t210));}
}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit91)};V t211=e->slot(0,30);refs[0].put(std::move(t211));}
{V t212=mul(first(call(e->slot(1,7),Args{mul(e->slot(0,30),get(e->slot(0,1),lit87))})),get(get(e->slot(1,1),lit16),lit53));e->slot(0,31)=std::move(t212);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit108)};V t213=first(call(e->slot(1,6),Args{e->slot(0,31),V(0.0),V(1.0)}));refs[0].put(std::move(t213));}
{V t214=first(call(e->slot(1,6),Args{add(add(add(add(add(mul(e->slot(0,19),V(0.38)),mul(e->slot(0,20),V(0.16))),mul(get(e->slot(0,1),lit103),V(0.16))),mul(get(e->slot(0,1),lit96),V(0.16))),mul(get(e->slot(0,1),lit119),V(0.08))),mul(e->slot(0,17),V(0.06))),V(0.0),V(1.0)}));e->slot(0,32)=std::move(t214);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit109)};V t215=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit109),e->slot(0,32),V(0.07),V(0.26),e->slot(0,3)}));refs[0].put(std::move(t215));}
{V t216=first(call(e->slot(1,6),Args{add(add(add(add(add(add(add(mul(e->slot(0,19),get(get(e->slot(1,1),lit16),lit54)),mul(e->slot(0,20),get(get(e->slot(1,1),lit16),lit55))),mul(get(e->slot(0,1),lit96),get(get(e->slot(1,1),lit16),lit56))),mul(get(e->slot(0,1),lit97),get(get(e->slot(1,1),lit16),lit57))),mul(e->slot(0,17),get(get(e->slot(1,1),lit16),lit58))),mul(get(e->slot(0,1),lit119),get(get(e->slot(1,1),lit16),lit59))),mul(get(e->slot(0,1),lit104),V(0.22))),mul(get(e->slot(0,1),lit112),V(0.16))),V(0.0),get(get(e->slot(1,1),lit16),lit73)}));e->slot(0,33)=std::move(t216);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit110)};V t217=first(call(e->slot(1,11),Args{get(e->slot(0,1),lit110),e->slot(0,33),get(get(e->slot(1,1),lit16),lit48),get(get(e->slot(1,1),lit16),lit49),e->slot(0,3)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit114)};V t218=first(call(e->slot(1,6),Args{sub(get(e->slot(0,1),lit93),get(e->slot(0,1),lit94)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t218));}
{V t219=add(add(mul(first(call(e->slot(1,6),Args{get(e->slot(0,1),lit116),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit16),lit68)),mul(first(call(e->slot(1,6),Args{get(e->slot(0,1),lit121),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit16),lit69))),mul(first(call(e->slot(1,6),Args{get(e->slot(0,1),lit122),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit16),lit70)));e->slot(0,34)=std::move(t219);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit107)};V t220=mul(first(call(e->slot(1,6),Args{add(add(add(mul(get(e->slot(0,1),lit96),V(0.42)),mul(get(e->slot(0,1),lit102),V(0.22))),mul(get(e->slot(0,1),lit97),V(0.16))),mul(get(e->slot(0,1),lit111),V(0.2))),V(0.0),V(1.0)})),first(call(e->slot(1,6),Args{add(V(0.6),e->slot(0,34)),V(0.0),V(1.0)})));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t221=first(call(e->slot(1,6),Args{add(add(add(add(add(mul(get(e->slot(0,1),lit110),get(get(e->slot(1,1),lit16),lit60)),mul(first(call(e->slot(1,7),Args{get(e->slot(0,1),lit114)})),get(get(e->slot(1,1),lit16),lit61))),mul(get(e->slot(0,1),lit96),get(get(e->slot(1,1),lit16),lit62))),mul(get(e->slot(0,1),lit97),get(get(e->slot(1,1),lit16),lit63))),mul(get(e->slot(0,1),lit112),get(get(e->slot(1,1),lit16),lit64))),mul(get(e->slot(0,1),lit124),get(get(e->slot(1,1),lit16),lit65))),V(0.0),get(get(e->slot(1,1),lit16),lit75)}));refs[0].put(std::move(t221));}
{Args t222=call(e->slot(1,28),Args{e->slot(0,1)});e->slot(0,35)=arg(t222,0);e->slot(0,36)=arg(t222,1);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t223=e->slot(0,35);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit127)};V t224=e->slot(0,36);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit88)};V t225=get(e->slot(0,1),lit87);refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit85)};V t226=get(e->slot(0,1),lit84);refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit83)};V t227=V(true);refs[0].put(std::move(t227));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t228=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,2)=std::move(t228);}
if(truth(V(!truth(e->slot(0,2))))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit82)};V t229=V(false);refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit86)};V t230=V(0.0);refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit87)};V t231=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit87),V(0.0),V(0.12),e->slot(0,1)}));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit89)};V t232=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit89),V(0.0),V(0.12),e->slot(0,1)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit90)};V t233=V(0.0);refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit91)};V t234=V(0.0);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit92)};V t235=first(call(e->slot(1,7),Args{get(e->slot(0,2),lit87)}));refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit93)};V t236=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit93),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit94)};V t237=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit94),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit95)};V t238=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit95),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit96)};V t239=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit96),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t239));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit97)};V t240=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit97),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t240));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit101)};V t241=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit101),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t241));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit102)};V t242=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit102),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit103)};V t243=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit103),V(0.0),V(0.22),e->slot(0,1)}));refs[0].put(std::move(t243));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit104)};V t244=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit104),V(0.0),V(0.26),e->slot(0,1)}));refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit105)};V t245=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit105),V(0.0),V(0.22),e->slot(0,1)}));refs[0].put(std::move(t245));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit106)};V t246=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit106),V(0.0),V(0.26),e->slot(0,1)}));refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit107)};V t247=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit107),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit109)};V t248=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit109),V(0.0),V(0.26),e->slot(0,1)}));refs[0].put(std::move(t248));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit110)};V t249=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit110),V(0.0),V(0.42),e->slot(0,1)}));refs[0].put(std::move(t249));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit111)};V t250=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit111),V(0.0),V(0.48),e->slot(0,1)}));refs[0].put(std::move(t250));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit112)};V t251=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit112),V(0.0),V(0.6),e->slot(0,1)}));refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit113)};V t252=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit113),V(0.0),V(0.26),e->slot(0,1)}));refs[0].put(std::move(t252));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit115)};V t253=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit115),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit116)};V t254=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit116),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit120)};V t255=first(call(e->slot(1,10),Args{get(e->slot(0,2),lit120),V(0.0),V(0.18),e->slot(0,1)}));refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit126)};V t256=V(0.0);refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),lit127)};V t257=lit223;refs[0].put(std::move(t257));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,12),Args{concat(lit224,e->slot(0,0)),([&](){V t258=get(e->slot(0,1),lit113);return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,12),Args{concat(lit225,e->slot(0,0)),([&](){V t259=get(e->slot(0,1),lit110);return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,12),Args{concat(lit226,e->slot(0,0)),([&](){V t260=get(e->slot(0,1),lit87);return !truth(t260)?V(0.0):t260;})()});
call(e->slot(1,12),Args{concat(lit227,e->slot(0,0)),([&](){V t261=get(e->slot(0,1),lit92);return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,12),Args{concat(lit228,e->slot(0,0)),([&](){V t262=get(e->slot(0,1),lit126);return !truth(t262)?V(0.0):t262;})()});
call(e->slot(1,12),Args{concat(lit229,e->slot(0,0)),([&](){V t263=get(e->slot(0,1),lit114);return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,12),Args{concat(lit230,e->slot(0,0)),([&](){V t264=get(e->slot(0,1),lit93);return !truth(t264)?V(0.0):t264;})()});
call(e->slot(1,12),Args{concat(lit231,e->slot(0,0)),([&](){V t265=get(e->slot(0,1),lit94);return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,12),Args{concat(lit232,e->slot(0,0)),([&](){V t266=get(e->slot(0,1),lit96);return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,12),Args{concat(lit233,e->slot(0,0)),([&](){V t267=get(e->slot(0,1),lit97);return !truth(t267)?V(0.0):t267;})()});
call(e->slot(1,12),Args{concat(lit234,e->slot(0,0)),([&](){V t268=get(e->slot(0,1),lit101);return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,12),Args{concat(lit235,e->slot(0,0)),([&](){V t269=get(e->slot(0,1),lit102);return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,12),Args{concat(lit236,e->slot(0,0)),([&](){V t270=get(e->slot(0,1),lit103);return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,12),Args{concat(lit237,e->slot(0,0)),([&](){V t271=get(e->slot(0,1),lit104);return !truth(t271)?V(0.0):t271;})()});
call(e->slot(1,12),Args{concat(lit238,e->slot(0,0)),([&](){V t272=get(e->slot(0,1),lit105);return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,12),Args{concat(lit239,e->slot(0,0)),([&](){V t273=get(e->slot(0,1),lit106);return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,12),Args{concat(lit240,e->slot(0,0)),([&](){V t274=get(e->slot(0,1),lit107);return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,12),Args{concat(lit241,e->slot(0,0)),([&](){V t275=get(e->slot(0,1),lit112);return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,12),Args{concat(lit242,e->slot(0,0)),([&](){V t276=get(e->slot(0,1),lit111);return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,12),Args{concat(lit243,e->slot(0,0)),([&](){V t277=get(e->slot(0,1),lit113);return !truth(t277)?V(0.0):t277;})()});
call(e->slot(1,12),Args{concat(lit244,e->slot(0,0)),([&](){V t278=get(e->slot(0,1),lit107);return !truth(t278)?V(0.0):t278;})()});
call(e->slot(1,12),Args{concat(lit245,e->slot(0,0)),([&](){V t279=get(e->slot(0,1),lit111);return !truth(t279)?V(0.0):t279;})()});
call(e->slot(1,12),Args{concat(lit246,e->slot(0,0)),([&](){V t280=get(e->slot(0,1),lit103);return !truth(t280)?V(0.0):t280;})()});
call(e->slot(1,12),Args{concat(lit247,e->slot(0,0)),([&](){V t281=get(e->slot(0,1),lit104);return !truth(t281)?V(0.0):t281;})()});
call(e->slot(1,12),Args{concat(lit248,e->slot(0,0)),([&](){V t282=get(e->slot(0,1),lit110);return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,12),Args{concat(lit249,e->slot(0,0)),([&](){V t283=get(e->slot(0,1),lit109);return !truth(t283)?V(0.0):t283;})()});
call(e->slot(1,12),Args{concat(lit250,e->slot(0,0)),([&](){V t284=get(e->slot(0,1),lit96);return !truth(t284)?V(0.0):t284;})()});
call(e->slot(1,12),Args{concat(lit251,e->slot(0,0)),([&](){V t285=get(e->slot(0,1),lit126);return !truth(t285)?V(0.0):t285;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit128),lit154))))){return Args{};
}
call(e->slot(1,12),Args{concat(lit252,e->slot(0,0)),([&](){V t286=get(e->slot(0,1),lit127);return !truth(t286)?lit253:t286;})()});
call(e->slot(1,12),Args{concat(lit254,e->slot(0,0)),([&](){V t287=get(e->slot(0,1),lit86);return !truth(t287)?V(0.0):t287;})()});
call(e->slot(1,12),Args{concat(lit255,e->slot(0,0)),([&](){V t288=get(e->slot(0,1),lit89);return !truth(t288)?V(0.0):t288;})()});
call(e->slot(1,12),Args{concat(lit256,e->slot(0,0)),([&](){V t289=get(e->slot(0,1),lit90);return !truth(t289)?V(0.0):t289;})()});
call(e->slot(1,12),Args{concat(lit257,e->slot(0,0)),([&](){V t290=get(e->slot(0,1),lit91);return !truth(t290)?V(0.0):t290;})()});
call(e->slot(1,12),Args{concat(lit258,e->slot(0,0)),([&](){V t291=get(e->slot(0,1),lit108);return !truth(t291)?V(0.0):t291;})()});
call(e->slot(1,12),Args{concat(lit259,e->slot(0,0)),([&](){V t292=get(e->slot(0,1),lit109);return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,12),Args{concat(lit260,e->slot(0,0)),([&](){V t293=get(e->slot(0,1),lit95);return !truth(t293)?V(0.0):t293;})()});
call(e->slot(1,12),Args{concat(lit261,e->slot(0,0)),([&](){V t294=get(e->slot(0,1),lit99);return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,12),Args{concat(lit262,e->slot(0,0)),([&](){V t295=get(e->slot(0,1),lit100);return !truth(t295)?V(0.0):t295;})()});
call(e->slot(1,12),Args{concat(lit263,e->slot(0,0)),([&](){V t296=get(e->slot(0,1),lit115);return !truth(t296)?V(1.0):t296;})()});
call(e->slot(1,12),Args{concat(lit264,e->slot(0,0)),([&](){V t297=get(e->slot(0,1),lit116);return !truth(t297)?V(1.0):t297;})()});
call(e->slot(1,12),Args{concat(lit265,e->slot(0,0)),([&](){V t298=get(e->slot(0,1),lit117);return !truth(t298)?V(1.0):t298;})()});
call(e->slot(1,12),Args{concat(lit266,e->slot(0,0)),([&](){V t299=get(e->slot(0,1),lit119);return !truth(t299)?V(0.0):t299;})()});
call(e->slot(1,12),Args{concat(lit267,e->slot(0,0)),([&](){V t300=get(e->slot(0,1),lit120);return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,12),Args{concat(lit206,e->slot(0,0)),([&](){V t301=get(e->slot(0,1),lit123);return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,12),Args{concat(lit268,e->slot(0,0)),([&](){V t302=get(e->slot(0,1),lit124);return !truth(t302)?V(0.0):t302;})()});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,12),Args{lit269,([&](){V t303=get(get(e->slot(1,1),lit128),lit130);return !truth(t303)?lit253:t303;})()});
call(e->slot(1,12),Args{lit270,([&](){V t304=get(get(e->slot(1,1),lit128),lit131);return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,12),Args{lit271,([&](){V t305=([&](){V t306=get(get(e->slot(1,1),lit128),lit132);return truth(t306)?V(1.0):t306;})();return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,12),Args{lit272,([&](){V t307=get(get(e->slot(1,1),lit128),lit133);return !truth(t307)?V(0.0):t307;})()});
call(e->slot(1,12),Args{lit273,([&](){V t308=get(get(e->slot(1,1),lit128),lit134);return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,12),Args{lit274,([&](){V t309=get(get(e->slot(1,1),lit128),lit135);return !truth(t309)?V(0.0):t309;})()});
call(e->slot(1,12),Args{lit275,([&](){V t310=get(get(e->slot(1,1),lit128),lit136);return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,12),Args{lit276,([&](){V t311=get(get(e->slot(1,1),lit128),lit137);return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,12),Args{lit277,([&](){V t312=get(get(e->slot(1,1),lit128),lit138);return !truth(t312)?V(0.0):t312;})()});
call(e->slot(1,12),Args{lit278,([&](){V t313=get(get(e->slot(1,1),lit128),lit141);return !truth(t313)?V(0.0):t313;})()});
call(e->slot(1,12),Args{lit279,([&](){V t314=get(get(e->slot(1,1),lit128),lit142);return !truth(t314)?V(0.0):t314;})()});
call(e->slot(1,12),Args{lit280,([&](){V t315=get(get(e->slot(1,1),lit128),lit143);return !truth(t315)?V(0.0):t315;})()});
call(e->slot(1,12),Args{lit281,([&](){V t316=get(get(e->slot(1,1),lit128),lit144);return !truth(t316)?V(0.0):t316;})()});
call(e->slot(1,12),Args{lit282,([&](){V t317=get(get(e->slot(1,1),lit128),lit133);return !truth(t317)?V(0.0):t317;})()});
call(e->slot(1,12),Args{lit283,([&](){V t318=get(get(e->slot(1,1),lit128),lit136);return !truth(t318)?V(0.0):t318;})()});
call(e->slot(1,12),Args{lit284,([&](){V t319=get(get(e->slot(1,1),lit128),lit137);return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,12),Args{lit285,([&](){V t320=get(get(e->slot(1,1),lit128),lit138);return !truth(t320)?V(0.0):t320;})()});
call(e->slot(1,12),Args{lit286,([&](){V t321=get(get(e->slot(1,1),lit128),lit139);return !truth(t321)?V(0.0):t321;})()});
call(e->slot(1,12),Args{lit287,([&](){V t322=get(get(e->slot(1,1),lit128),lit140);return !truth(t322)?V(0.0):t322;})()});
call(e->slot(1,12),Args{lit288,([&](){V t323=get(get(e->slot(1,1),lit128),lit145);return !truth(t323)?V(0.0):t323;})()});
call(e->slot(1,12),Args{lit289,([&](){V t324=get(get(e->slot(1,1),lit128),lit146);return !truth(t324)?V(0.0):t324;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit128),lit154))))){return Args{};
}
call(e->slot(1,12),Args{lit290,([&](){V t325=([&](){V t326=get(get(e->slot(1,1),lit128),lit147);return truth(t326)?V(1.0):t326;})();return !truth(t325)?V(0.0):t325;})()});
call(e->slot(1,12),Args{lit291,([&](){V t327=([&](){V t328=get(get(e->slot(1,1),lit128),lit148);return truth(t328)?V(1.0):t328;})();return !truth(t327)?V(0.0):t327;})()});
call(e->slot(1,12),Args{lit292,([&](){V t329=([&](){V t330=get(get(e->slot(1,1),lit128),lit149);return truth(t330)?V(1.0):t330;})();return !truth(t329)?V(0.0):t329;})()});
call(e->slot(1,12),Args{lit293,([&](){V t331=([&](){V t332=get(get(e->slot(1,1),lit128),lit150);return truth(t332)?V(1.0):t332;})();return !truth(t331)?V(0.0):t331;})()});
call(e->slot(1,12),Args{lit294,([&](){V t333=([&](){V t334=get(get(e->slot(1,1),lit128),lit151);return truth(t334)?V(1.0):t334;})();return !truth(t333)?V(0.0):t333;})()});
call(e->slot(1,12),Args{lit295,([&](){V t335=([&](){V t336=get(get(e->slot(1,1),lit128),lit152);return truth(t336)?V(1.0):t336;})();return !truth(t335)?V(0.0):t335;})()});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t337=num(V(0.0)),t338=num(V(3.0)),t339=num(V(1.0));for(double t340=t337;(t339>0?t340<=t338:t340>=t338);t340+=t339){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t340);call(e->slot(2,31),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit128),lit129),e->slot(0,0))});
}}
call(e->slot(1,32),Args{});
return Args{};});
Ref(e->slot(0,1),lit296).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit130)};V t341=lit5;refs[0].put(std::move(t341));}
call(e->slot(1,33),Args{});
return Args{};}));
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t342=get(get(get(e->slot(1,1),lit128),lit129),V(0.0));e->slot(0,0)=std::move(t342);}
{V t343=get(get(get(e->slot(1,1),lit128),lit129),V(1.0));e->slot(0,1)=std::move(t343);}
{V t344=get(get(get(e->slot(1,1),lit128),lit129),V(2.0));e->slot(0,2)=std::move(t344);}
{V t345=get(get(get(e->slot(1,1),lit128),lit129),V(3.0));e->slot(0,3)=std::move(t345);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit141)};V t346=mul(add(([&](){V t347=get(e->slot(0,0),lit114);return !truth(t347)?V(0.0):t347;})(),([&](){V t348=get(e->slot(0,1),lit114);return !truth(t348)?V(0.0):t348;})()),V(0.5));refs[0].put(std::move(t346));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit142)};V t349=mul(add(([&](){V t350=get(e->slot(0,2),lit114);return !truth(t350)?V(0.0):t350;})(),([&](){V t351=get(e->slot(0,3),lit114);return !truth(t351)?V(0.0):t351;})()),V(0.5));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit143)};V t352=mul(add(([&](){V t353=get(e->slot(0,0),lit114);return !truth(t353)?V(0.0):t353;})(),([&](){V t354=get(e->slot(0,2),lit114);return !truth(t354)?V(0.0):t354;})()),V(0.5));refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit144)};V t355=mul(add(([&](){V t356=get(e->slot(0,1),lit114);return !truth(t356)?V(0.0):t356;})(),([&](){V t357=get(e->slot(0,3),lit114);return !truth(t357)?V(0.0):t357;})()),V(0.5));refs[0].put(std::move(t355));}
return Args{};});
Ref(e->slot(0,1),lit297).put(native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit131)};V t358=add(([&](){V t359=get(get(e->slot(1,1),lit128),lit131);return !truth(t359)?V(0.0):t359;})(),V(1.0));refs[0].put(std::move(t358));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t360=first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit16),lit78)}));refs[0].put(std::move(t360));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,0)};V t361=get(get(e->slot(1,1),lit16),lit78);refs[0].put(std::move(t361));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit130)};V t362=lit298;refs[0].put(std::move(t362));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit130)};V t363=lit299;refs[0].put(std::move(t363));}
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t364=first(call(e->slot(1,6),Args{e->slot(0,0),get(get(e->slot(1,1),lit16),lit78),get(get(e->slot(1,1),lit16),lit79)}));refs[0].put(std::move(t364));}
call(e->slot(1,19),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t365=([&](){V t366=e->slot(0,1);return !truth(t366)?first(call(e->slot(1,17),Args{})):t366;})();refs[0].put(std::move(t365));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit130)};V t367=lit300;refs[0].put(std::move(t367));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit132)};V t368=V(false);refs[0].put(std::move(t368));}
call(e->slot(1,20),Args{});
{double t369=num(V(0.0)),t370=num(V(3.0)),t371=num(V(1.0));for(double t372=t369;(t371>0?t372<=t370:t372>=t370);t372+=t371){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t372);call(e->slot(2,30),Args{e->slot(0,0),e->slot(1,0)});
call(e->slot(2,31),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit128),lit129),e->slot(0,0))});
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit133)};V t373=V(0.0);refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit134)};V t374=V(0.0);refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit135)};V t375=V(0.0);refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit136)};V t376=V(0.0);refs[0].put(std::move(t376));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit137)};V t377=V(0.0);refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit138)};V t378=V(0.0);refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit139)};V t379=V(0.0);refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit140)};V t380=V(0.0);refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit145)};V t381=V(0.0);refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit146)};V t382=V(0.0);refs[0].put(std::move(t382));}
call(e->slot(1,32),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,16),Args{e->slot(0,1),lit129,V()})))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit130)};V t383=lit301;refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit132)};V t384=V(false);refs[0].put(std::move(t384));}
call(e->slot(1,20),Args{});
{double t385=num(V(0.0)),t386=num(V(3.0)),t387=num(V(1.0));for(double t388=t385;(t387>0?t388<=t386:t388>=t386);t388+=t387){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t388);call(e->slot(2,30),Args{e->slot(0,0),e->slot(1,0)});
call(e->slot(2,31),Args{e->slot(0,0),get(get(get(e->slot(2,1),lit128),lit129),e->slot(0,0))});
}}
call(e->slot(1,32),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit132)};V t389=V(true);refs[0].put(std::move(t389));}
call(e->slot(1,20),Args{});
{V t390=V(0.0);e->slot(0,3)=std::move(t390);}
{V t391=V(0.0);e->slot(0,4)=std::move(t391);}
{V t392=V(0.0);e->slot(0,5)=std::move(t392);}
{V t393=V(0.0);e->slot(0,6)=std::move(t393);}
{V t394=V(0.0);e->slot(0,7)=std::move(t394);}
{V t395=V(0.0);e->slot(0,8)=std::move(t395);}
{V t396=V(0.0);e->slot(0,9)=std::move(t396);}
{V t397=V(0.0);e->slot(0,10)=std::move(t397);}
{V t398=V(0.0);e->slot(0,11)=std::move(t398);}
{V t399=V(0.0);e->slot(0,12)=std::move(t399);}
{double t400=num(V(0.0)),t401=num(V(3.0)),t402=num(V(1.0));for(double t403=t400;(t402>0?t403<=t401:t403>=t401);t403+=t402){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t403);{V t404=first(call(e->slot(2,18),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t404);}
{V t405=get(get(get(e->slot(2,1),lit128),lit129),e->slot(0,0));e->slot(0,2)=std::move(t405);}
if(truth(e->slot(0,1))){call(e->slot(2,29),Args{e->slot(0,0),e->slot(0,2),e->slot(0,1),e->slot(1,0)});
}else{call(e->slot(2,30),Args{e->slot(0,0),e->slot(1,0)});
}
{std::array<Ref,1> refs{Ref(e,1,3)};V t406=add(e->slot(1,3),([&](){V t407=get(e->slot(0,2),lit113);return !truth(t407)?V(0.0):t407;})());refs[0].put(std::move(t406));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t408=add(e->slot(1,4),([&](){V t409=get(e->slot(0,2),lit110);return !truth(t409)?V(0.0):t409;})());refs[0].put(std::move(t408));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t410=add(e->slot(1,5),([&](){V t411=get(e->slot(0,2),lit92);return !truth(t411)?V(0.0):t411;})());refs[0].put(std::move(t410));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t412=add(e->slot(1,6),([&](){V t413=get(e->slot(0,2),lit96);return !truth(t413)?V(0.0):t413;})());refs[0].put(std::move(t412));}
{std::array<Ref,1> refs{Ref(e,1,7)};V t414=add(e->slot(1,7),([&](){V t415=get(e->slot(0,2),lit112);return !truth(t415)?V(0.0):t415;})());refs[0].put(std::move(t414));}
{std::array<Ref,1> refs{Ref(e,1,8)};V t416=add(e->slot(1,8),([&](){V t417=get(e->slot(0,2),lit111);return !truth(t417)?V(0.0):t417;})());refs[0].put(std::move(t416));}
{std::array<Ref,1> refs{Ref(e,1,9)};V t418=add(e->slot(1,9),([&](){V t419=get(e->slot(0,2),lit107);return !truth(t419)?V(0.0):t419;})());refs[0].put(std::move(t418));}
{std::array<Ref,1> refs{Ref(e,1,10)};V t420=add(e->slot(1,10),([&](){V t421=get(e->slot(0,2),lit103);return !truth(t421)?V(0.0):t421;})());refs[0].put(std::move(t420));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t422=first(call(get(e->get("math"),lit158),Args{e->slot(1,11),([&](){V t423=get(e->slot(0,2),lit96);return !truth(t423)?V(0.0):t423;})()}));refs[0].put(std::move(t422));}
{std::array<Ref,1> refs{Ref(e,1,12)};V t424=first(call(get(e->get("math"),lit158),Args{e->slot(1,12),([&](){V t425=get(e->slot(0,2),lit92);return !truth(t425)?V(0.0):t425;})()}));refs[0].put(std::move(t424));}
call(e->slot(2,31),Args{e->slot(0,0),e->slot(0,2)});
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit133)};V t426=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t426));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit134)};V t427=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t427));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit135)};V t428=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t428));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit136)};V t429=mul(e->slot(0,6),V(0.25));refs[0].put(std::move(t429));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit137)};V t430=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t430));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit138)};V t431=mul(e->slot(0,8),V(0.25));refs[0].put(std::move(t431));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit139)};V t432=mul(e->slot(0,9),V(0.25));refs[0].put(std::move(t432));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit140)};V t433=mul(e->slot(0,10),V(0.25));refs[0].put(std::move(t433));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit145)};V t434=e->slot(0,11);refs[0].put(std::move(t434));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit128),lit146)};V t435=e->slot(0,12);refs[0].put(std::move(t435));}
call(e->slot(1,34),Args{});
call(e->slot(1,32),Args{});
return Args{};}));
Ref(e->slot(0,1),lit302).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t436=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t436);}
return Args{([&](){V t437=([&](){V t438=e->slot(0,1);return truth(t438)?get(e->slot(0,1),lit113):t438;})();return !truth(t437)?V(0.0):t437;})()};
return Args{};}));
Ref(e->slot(0,1),lit303).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t439=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t439);}
return Args{([&](){V t440=([&](){V t441=e->slot(0,1);return truth(t441)?get(e->slot(0,1),lit110):t441;})();return !truth(t440)?V(0.0):t440;})()};
return Args{};}));
Ref(e->slot(0,1),lit304).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t442=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t442);}
return Args{([&](){V t443=([&](){V t444=e->slot(0,1);return truth(t444)?get(e->slot(0,1),lit96):t444;})();return !truth(t443)?V(0.0):t443;})()};
return Args{};}));
Ref(e->slot(0,1),lit305).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t445=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t445);}
return Args{([&](){V t446=([&](){V t447=e->slot(0,1);return truth(t447)?get(e->slot(0,1),lit107):t447;})();return !truth(t446)?V(0.0):t446;})()};
return Args{};}));
Ref(e->slot(0,1),lit306).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t448=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t448);}
return Args{([&](){V t449=([&](){V t450=e->slot(0,1);return truth(t450)?get(e->slot(0,1),lit103):t450;})();return !truth(t449)?V(0.0):t449;})()};
return Args{};}));
Ref(e->slot(0,1),lit307).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t451=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t451);}
return Args{([&](){V t452=([&](){V t453=e->slot(0,1);return truth(t453)?get(e->slot(0,1),lit111):t453;})();return !truth(t452)?V(0.0):t452;})()};
return Args{};}));
Ref(e->slot(0,1),lit308).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t454=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t454);}
return Args{([&](){V t455=([&](){V t456=e->slot(0,1);return truth(t456)?get(e->slot(0,1),lit127):t456;})();return !truth(t455)?lit253:t455;})()};
return Args{};}));
Ref(e->slot(0,1),lit309).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit128)};
}
return Args{get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,0))};
return Args{};}));
Ref(e->slot(0,1),lit310).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t457=first(call(get(e->get("math"),lit311),call(e->slot(1,6),Args{([&](){V t458=e->slot(0,0);return !truth(t458)?V(0.0):t458;})(),V(0.0),V(3.0)})));e->slot(0,1)=std::move(t457);}
{V t459=([&](){V t460=get(get(get(e->slot(1,1),lit128),lit129),e->slot(0,1));return !truth(t460)?get(get(get(e->slot(1,1),lit128),lit129),V(0.0)):t460;})();e->slot(0,2)=std::move(t459);}
return call(get(e->get("string"),lit312),Args{concat(lit313,concat(lit314,concat(lit315,concat(lit316,concat(lit317,concat(lit318,lit319)))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit128),lit130)})),([&](){V t461=get(get(e->slot(1,1),lit128),lit131);return !truth(t461)?V(0.0):t461;})(),([&](){V t462=([&](){V t463=get(get(e->slot(1,1),lit128),lit132);return truth(t463)?lit320:t463;})();return !truth(t462)?lit321:t462;})(),first(call(e->get("tostring"),Args{([&](){V t464=get(e->slot(0,2),lit127);return !truth(t464)?lit253:t464;})()})),([&](){V t465=get(e->slot(0,2),lit113);return !truth(t465)?V(0.0):t465;})(),([&](){V t466=get(e->slot(0,2),lit110);return !truth(t466)?V(0.0):t466;})(),([&](){V t467=get(e->slot(0,2),lit112);return !truth(t467)?V(0.0):t467;})(),([&](){V t468=get(e->slot(0,2),lit87);return !truth(t468)?V(0.0):t468;})(),([&](){V t469=get(e->slot(0,2),lit89);return !truth(t469)?V(0.0):t469;})(),([&](){V t470=get(e->slot(0,2),lit90);return !truth(t470)?V(0.0):t470;})(),([&](){V t471=get(e->slot(0,2),lit93);return !truth(t471)?V(0.0):t471;})(),([&](){V t472=get(e->slot(0,2),lit94);return !truth(t472)?V(0.0):t472;})(),([&](){V t473=get(e->slot(0,2),lit95);return !truth(t473)?V(0.0):t473;})(),([&](){V t474=get(e->slot(0,2),lit96);return !truth(t474)?V(0.0):t474;})(),([&](){V t475=get(e->slot(0,2),lit97);return !truth(t475)?V(0.0):t475;})(),([&](){V t476=get(e->slot(0,2),lit103);return !truth(t476)?V(0.0):t476;})(),([&](){V t477=get(e->slot(0,2),lit104);return !truth(t477)?V(0.0):t477;})(),([&](){V t478=get(e->slot(0,2),lit105);return !truth(t478)?V(0.0):t478;})(),([&](){V t479=get(e->slot(0,2),lit106);return !truth(t479)?V(0.0):t479;})(),([&](){V t480=get(e->slot(0,2),lit107);return !truth(t480)?V(0.0):t480;})(),([&](){V t481=get(e->slot(0,2),lit115);return !truth(t481)?V(1.0):t481;})(),([&](){V t482=get(e->slot(0,2),lit116);return !truth(t482)?V(1.0):t482;})(),([&](){V t483=get(e->slot(0,2),lit119);return !truth(t483)?V(0.0):t483;})(),([&](){V t484=get(e->slot(0,2),lit120);return !truth(t484)?V(0.0):t484;})(),([&](){V t485=([&](){V t486=get(get(e->slot(1,1),lit128),lit147);return truth(t486)?lit320:t486;})();return !truth(t485)?lit321:t485;})(),([&](){V t487=([&](){V t488=get(get(e->slot(1,1),lit128),lit148);return truth(t488)?lit320:t488;})();return !truth(t487)?lit321:t487;})(),([&](){V t489=([&](){V t490=get(get(e->slot(1,1),lit128),lit149);return truth(t490)?lit320:t490;})();return !truth(t489)?lit321:t489;})(),([&](){V t491=([&](){V t492=get(get(e->slot(1,1),lit128),lit150);return truth(t492)?lit320:t492;})();return !truth(t491)?lit321:t491;})(),([&](){V t493=([&](){V t494=get(get(e->slot(1,1),lit128),lit151);return truth(t494)?lit320:t494;})();return !truth(t493)?lit321:t493;})(),([&](){V t495=([&](){V t496=get(get(e->slot(1,1),lit128),lit152);return truth(t496)?lit320:t496;})();return !truth(t495)?lit321:t495;})()});
return Args{};}));
Ref(e->slot(0,1),lit322).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(([&](){V t497=V(!truth(e->get("ui")));return !truth(t497)?V(!truth(get(e->get("ui"),lit323))):t497;})())){return Args{};
}
call(get(e->get("ui"),lit324),Args{});
call(get(e->get("ui"),lit323),Args{lit325});
call(get(e->get("ui"),lit323),call(get(e->get("string"),lit312),Args{lit326,first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit128),lit130)})),([&](){V t498=get(get(e->slot(1,1),lit128),lit133);return !truth(t498)?V(0.0):t498;})(),([&](){V t499=get(get(e->slot(1,1),lit128),lit134);return !truth(t499)?V(0.0):t499;})(),([&](){V t500=get(get(e->slot(1,1),lit128),lit135);return !truth(t500)?V(0.0):t500;})(),([&](){V t501=get(get(e->slot(1,1),lit128),lit137);return !truth(t501)?V(0.0):t501;})()}));
{double t502=num(V(0.0)),t503=num(V(3.0)),t504=num(V(1.0));for(double t505=t502;(t504>0?t505<=t503:t505>=t503);t505+=t504){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t505);{V t506=get(get(get(e->slot(2,1),lit128),lit129),e->slot(0,0));e->slot(0,1)=std::move(t506);}
call(get(e->get("ui"),lit323),call(get(e->get("string"),lit312),Args{lit327,([&](){V t507=get(e->slot(2,2),e->slot(0,0));return !truth(t507)?first(call(e->get("tostring"),Args{e->slot(0,0)})):t507;})(),first(call(e->get("tostring"),Args{([&](){V t508=get(e->slot(0,1),lit127);return !truth(t508)?lit253:t508;})()})),([&](){V t509=get(e->slot(0,1),lit113);return !truth(t509)?V(0.0):t509;})(),([&](){V t510=get(e->slot(0,1),lit110);return !truth(t510)?V(0.0):t510;})(),([&](){V t511=get(e->slot(0,1),lit87);return !truth(t511)?V(0.0):t511;})(),([&](){V t512=get(e->slot(0,1),lit96);return !truth(t512)?V(0.0):t512;})(),([&](){V t513=get(e->slot(0,1),lit107);return !truth(t513)?V(0.0):t513;})()}));
}}
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
