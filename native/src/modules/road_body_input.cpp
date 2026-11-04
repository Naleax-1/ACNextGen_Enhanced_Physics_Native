// Generated native C++ from pinned road_body_input.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("inputTau");
static const V lit7("heaveTau");
static const V lit8("pitchTau");
static const V lit9("rollTau");
static const V lit10("yawTau");
static const V lit11("wheelLoadRef");
static const V lit12("loadInputGain");
static const V lit13("loadNormGain");
static const V lit14("loadRateGain");
static const V lit15("loadRateRef");
static const V lit16("suspForceGain");
static const V lit17("damperGain");
static const V lit18("springGain");
static const V lit19("contactGain");
static const V lit20("impulseGain");
static const V lit21("dropGain");
static const V lit22("contactLossGain");
static const V lit23("contactQualityGain");
static const V lit24("damperPulseGain");
static const V lit25("damperRoadMemoryGain");
static const V lit26("loadPathRoadGain");
static const V lit27("verticalFlowGain");
static const V lit28("impactGain");
static const V lit29("drivelineYawGain");
static const V lit30("heaveGain");
static const V lit31("pitchGain");
static const V lit32("rollGain");
static const V lit33("yawGain");
static const V lit34("maxWheelInput");
static const V lit35("maxHeave");
static const V lit36("maxPitch");
static const V lit37("maxRoll");
static const V lit38("maxYaw");
static const V lit39("bodyRigidityInfluence");
static const V lit40("bodyFlexInputLoss");
static const V lit41("bodyTorsionRollLoss");
static const V lit42("bodyBendingPitchLoss");
static const V lit43("bodyHeaveSoftening");
static const V lit44("bodyStiffInputGain");
static const V lit45("bodyFlexTauGain");
static const V lit46("bodyStiffTauGain");
static const V lit47("minBodyInputScale");
static const V lit48("maxBodyInputScale");
static const V lit49("decayTau");
static const V lit50("minDt");
static const V lit51("maxDt");
static const V lit52("debugStoreInterval");
static const V lit53("wheelInput");
static const V lit54("rawWheelInput");
static const V lit55("wheelLoad");
static const V lit56("prevWheelLoad");
static const V lit57("wheelLoadRate");
static const V lit58("wheelLoadNorm");
static const V lit59("suspForce");
static const V lit60("damperForce");
static const V lit61("springForce");
static const V lit62("contactInput");
static const V lit63("impulse");
static const V lit64("drop");
static const V lit65("contactQuality");
static const V lit66("contactTrust");
static const V lit67("contactLoss");
static const V lit68("damperPulse");
static const V lit69("roadMemory");
static const V lit70("loadPathRoad");
static const V lit71("verticalFlow");
static const V lit72("heaveInput");
static const V lit73("pitchInput");
static const V lit74("rollInput");
static const V lit75("yawHint");
static const V lit76("rawHeave");
static const V lit77("rawPitch");
static const V lit78("rawRoll");
static const V lit79("rawYaw");
static const V lit80("frontInput");
static const V lit81("rearInput");
static const V lit82("leftInput");
static const V lit83("rightInput");
static const V lit84("avgWheelInput");
static const V lit85("maxWheelInputLive");
static const V lit86("bodyRigidity");
static const V lit87("bodyFlexFactor");
static const V lit88("bodyTorsionFactor");
static const V lit89("bodyBendingFactor");
static const V lit90("bodyDampingFactor");
static const V lit91("bodyHeaveScale");
static const V lit92("bodyPitchScale");
static const V lit93("bodyRollScale");
static const V lit94("bodyYawScale");
static const V lit95("bodyInputTau");
static const V lit96("status");
static const V lit97("INIT");
static const V lit98("updateCount");
static const V lit99("wheelsValid");
static const V lit100("bodyRigidityLinked");
static const V lit101("loadLinked");
static const V lit102("suspensionLinked");
static const V lit103("contactLinked");
static const V lit104("damperLinked");
static const V lit105("springLinked");
static const V lit106("loadPathLinked");
static const V lit107("impactLinked");
static const V lit108("drivelineLinked");
static const V lit109("carLinked");
static const V lit110("debugStoreTimer");
static const V lit111("debugStoreNow");
static const V lit112("state");
static const V lit113("debug");
static const V lit114("huge");
static const V lit115("abs");
static const V lit116("safeLoadRaw");
static const V lit117("safeStore");
static const V lit118("safeField");
static const V lit119("getCar");
static const V lit120("wheels");
static const V lit121("load");
static const V lit122("loadK");
static const V lit123("ngp_body_rigidity_update_count");
static const V lit124("ngp_body_rigidity");
static const V lit125("ngp_body_flex_factor");
static const V lit126("ngp_body_torsion_factor");
static const V lit127("ngp_body_bending_factor");
static const V lit128("ngp_body_damping_factor");
static const V lit129("max");
static const V lit130("ngp_wheel_load_");
static const V lit131("ngp_load_wheel_");
static const V lit132("ngp_tire_load_input_");
static const V lit133("ngp_load_path_load_");
static const V lit134("ngp_contact_load_");
static const V lit135("ngp_tire_state_load_");
static const V lit136("ngp_dlt_load_");
static const V lit137("ngp_wheel_load_norm_");
static const V lit138("ngp_load_path_load_norm_");
static const V lit139("ngp_lp_load_norm_");
static const V lit140("ngp_susp_integrated_force_");
static const V lit141("ngp_susp_int_force_");
static const V lit142("ngp_susp_");
static const V lit143("ngp_damper_");
static const V lit144("ngp_damper_force_");
static const V lit145("ngp_damper_hyst_force_");
static const V lit146("ngp_progressive_spring_");
static const V lit147("ngp_spring_force_");
static const V lit148("ngp_susp_contact_input_");
static const V lit149("ngp_susp_int_contact_");
static const V lit150("ngp_sci_input_");
static const V lit151("ngp_susp_road_impulse_");
static const V lit152("ngp_susp_int_impulse_");
static const V lit153("ngp_sci_impulse_");
static const V lit154("ngp_susp_contact_drop_");
static const V lit155("ngp_susp_int_drop_");
static const V lit156("ngp_sci_drop_");
static const V lit157("ngp_contact_quality_");
static const V lit158("ngp_tire_contact_quality_");
static const V lit159("ngp_tcr_quality_");
static const V lit160("ngp_tc_contact_");
static const V lit161("ngp_contact_trust_");
static const V lit162("ngp_tire_contact_trust_");
static const V lit163("ngp_contact_loss_");
static const V lit164("ngp_tire_contact_loss_");
static const V lit165("ngp_tcr_contact_loss_");
static const V lit166("ngp_damper_vertical_pulse_");
static const V lit167("ngp_road_vertical_pulse_");
static const V lit168("ngp_damper_hyst_impact_");
static const V lit169("ngp_damper_road_memory_");
static const V lit170("ngp_road_damper_memory_");
static const V lit171("ngp_load_path_road_");
static const V lit172("ngp_lp_road_");
static const V lit173("ngp_load_path_vertical_flow_");
static const V lit174("ngp_lp_vertical_flow_");
static const V lit175("ngp_impact_value");
static const V lit176("ngp_impact_root_value");
static const V lit177("ngp_damage_event_last");
static const V lit178("ngp_driveline_yaw_hint");
static const V lit179("ngp_drive_soft_yaw");
static const V lit180("ngp_windup_yaw_hint");
static const V lit181("ngp_rbi_wheel_input_");
static const V lit182("ngp_body_wheel_input_");
static const V lit183("ngp_road_body_wheel_input_");
static const V lit184("ngp_rbi_raw_wheel_input_");
static const V lit185("ngp_rbi_wheel_load_");
static const V lit186("ngp_rbi_wheel_load_norm_");
static const V lit187("ngp_rbi_wheel_load_rate_");
static const V lit188("ngp_rbi_susp_force_");
static const V lit189("ngp_rbi_damper_force_");
static const V lit190("ngp_rbi_spring_force_");
static const V lit191("ngp_rbi_contact_input_");
static const V lit192("ngp_rbi_impulse_");
static const V lit193("ngp_rbi_drop_");
static const V lit194("ngp_rbi_contact_loss_");
static const V lit195("ngp_rbi_vertical_flow_");
static const V lit196("ngp_rbi_status");
static const V lit197("UNKNOWN");
static const V lit198("ngp_rbi_update_count");
static const V lit199("ngp_rbi_wheels_valid");
static const V lit200("ngp_body_road_input_front");
static const V lit201("ngp_body_road_input_rear");
static const V lit202("ngp_body_road_input_left");
static const V lit203("ngp_body_road_input_right");
static const V lit204("ngp_body_heave_input");
static const V lit205("ngp_body_pitch_input");
static const V lit206("ngp_body_roll_input");
static const V lit207("ngp_body_yaw_hint");
static const V lit208("ngp_body_road_avg");
static const V lit209("ngp_road_body_heave");
static const V lit210("ngp_road_body_pitch");
static const V lit211("ngp_road_body_roll");
static const V lit212("ngp_road_body_yaw");
static const V lit213("ngp_rbi_heave");
static const V lit214("ngp_rbi_pitch");
static const V lit215("ngp_rbi_roll");
static const V lit216("ngp_rbi_yaw");
static const V lit217("ngp_rbi_avg_wheel_input");
static const V lit218("ngp_rbi_max_wheel_input");
static const V lit219("ngp_rbi_body_rigidity_linked");
static const V lit220("ngp_rbi_body_rigidity");
static const V lit221("ngp_rbi_body_flex_factor");
static const V lit222("ngp_rbi_body_heave_scale");
static const V lit223("ngp_rbi_body_pitch_scale");
static const V lit224("ngp_rbi_body_roll_scale");
static const V lit225("ngp_rbi_body_yaw_scale");
static const V lit226("ngp_rbi_body_input_tau");
static const V lit227("ngp_rbi_load_linked");
static const V lit228("ngp_rbi_suspension_linked");
static const V lit229("ngp_rbi_contact_linked");
static const V lit230("ngp_rbi_damper_linked");
static const V lit231("ngp_rbi_spring_linked");
static const V lit232("ngp_rbi_load_path_linked");
static const V lit233("ngp_rbi_impact_linked");
static const V lit234("ngp_rbi_driveline_linked");
static const V lit235("ngp_rbi_car_linked");
static const V lit236("ngp_rbi_raw_heave");
static const V lit237("ngp_rbi_raw_pitch");
static const V lit238("ngp_rbi_raw_roll");
static const V lit239("ngp_rbi_raw_yaw");
static const V lit240("init");
static const V lit241("update");
static const V lit242("NO AC");
static const V lit243("NO CAR");
static const V lit244("NO WHEELS");
static const V lit245("RUNNING");
static const V lit246("ROOT ONLY");
static const V lit247("getHeave");
static const V lit248("getPitch");
static const V lit249("getRoll");
static const V lit250("getYawHint");
static const V lit251("getWheelInput");
static const V lit252("getState");
static const V lit253("debugStr");
static const V lit254("format");
static const V lit255("%s WI %.3f Raw %.3f Load %.0f N %.2f Rate %+.0f\n");
static const V lit256("Susp %+.0f Damp %+.0f Spring %+.0f C %.2f Imp %.2f Drop %.2f");
static const V lit257("Status %s / Count %.0f / Wheels %s\n");
static const V lit258("H %.3f P %+.3f R %+.3f Y %+.3f / Avg %.3f Max %.3f\n");
static const V lit259("F %.3f R %.3f L %.3f Rt %.3f\n");
static const V lit260("Body:%s Scales H/P/R/Y %.2f %.2f %.2f %.2f\n");
static const V lit261("Links Load:%s Susp:%s Contact:%s Damper:%s Spring:%s LP:%s Impact:%s Drive:%s");
static const V lit262("OK");
static const V lit263("NIL");
static const V lit264("drawDebug");
static const V lit265("text");
static const V lit266("=== ROAD BODY INPUT ===");
V load_road_body_input(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(29);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,2)=std::move(t3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t4=([&](){V z=table();set(z,lit6,V(0.07));set(z,lit7,V(0.09));set(z,lit8,V(0.1));set(z,lit9,V(0.085));set(z,lit10,V(0.12));set(z,lit11,V(3500.0));set(z,lit12,V(0.38));set(z,lit13,V(0.26));set(z,lit14,V(0.06));set(z,lit15,V(85000.0));set(z,lit16,V(0.00018));set(z,lit17,V(0.0001));set(z,lit18,V(6e-05));set(z,lit19,V(0.45));set(z,lit20,V(0.55));set(z,lit21,V(0.6));set(z,lit22,V(0.3));set(z,lit23,V(0.18));set(z,lit24,V(0.3));set(z,lit25,V(0.18));set(z,lit26,V(0.24));set(z,lit27,V(0.2));set(z,lit28,V(0.22));set(z,lit29,V(0.18));set(z,lit30,V(1.0));set(z,lit31,V(1.0));set(z,lit32,V(1.0));set(z,lit33,V(0.35));set(z,lit34,V(1.0));set(z,lit35,V(1.0));set(z,lit36,V(1.0));set(z,lit37,V(1.0));set(z,lit38,V(1.0));set(z,lit39,V(0.16));set(z,lit40,V(0.1));set(z,lit41,V(0.08));set(z,lit42,V(0.08));set(z,lit43,V(0.06));set(z,lit44,V(0.05));set(z,lit45,V(0.4));set(z,lit46,V(0.1));set(z,lit47,V(0.86));set(z,lit48,V(1.1));set(z,lit49,V(0.18));set(z,lit50,V(5e-05));set(z,lit51,V(0.05));set(z,lit52,V(0.25));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit53,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit54,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit55,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit56,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit57,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit58,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit59,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit60,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit61,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit62,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit63,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit64,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit65,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit66,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit67,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit68,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit69,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit70,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit71,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(1.0));set(z,lit87,V(1.0));set(z,lit88,V(1.0));set(z,lit89,V(1.0));set(z,lit90,V(1.0));set(z,lit91,V(1.0));set(z,lit92,V(1.0));set(z,lit93,V(1.0));set(z,lit94,V(1.0));set(z,lit95,V(0.07));set(z,lit96,lit97);set(z,lit98,V(0.0));set(z,lit99,V(false));set(z,lit100,V(false));set(z,lit101,V(false));set(z,lit102,V(false));set(z,lit103,V(false));set(z,lit104,V(false));set(z,lit105,V(false));set(z,lit106,V(false));set(z,lit107,V(false));set(z,lit108,V(false));set(z,lit109,V(false));set(z,lit110,V(999.0));set(z,lit111,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit112)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit113)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit114)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit114)))):t9;})())){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
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
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit115),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t14=get(e->slot(0,0),lit116);e->slot(0,7)=std::move(t14);}
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t15=first(call(e->slot(1,7),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t15);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()});
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t18=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t18);}
{double t19=num(V(1.0)),t20=num(length(e->slot(0,1))),t21=num(V(1.0));for(double t22=t19;(t21>0?t22<=t20:t22>=t20);t22+=t21){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t22);{V t23=first(call(e->slot(2,7),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t23);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t24=e->slot(1,0);return !truth(t24)?V(0.0):t24;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t25=e->slot(0,0);return !truth(t25)?V(0.0):t25;})(),V()};
return Args{};});
{V t26=get(e->slot(0,0),lit117);e->slot(0,10)=std::move(t26);}
{V t27=get(e->slot(0,0),lit118);e->slot(0,11)=std::move(t27);}
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t28=V(!truth(e->get("ac")));return !truth(t28)?V(!truth(get(e->get("ac"),lit119))):t28;})())){return Args{V()};
}
{Args t29=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit119),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t29,0);e->slot(0,1)=arg(t29,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t30=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t31=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t32=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t33=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t33));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t34=add(([&](){V t35=get(e->slot(1,3),lit110);return !truth(t35)?V(0.0):t35;})(),([&](){V t36=e->slot(0,0);return !truth(t36)?V(0.0):t36;})());refs[0].put(std::move(t34));}
if(truth(ge(get(e->slot(1,3),lit110),get(get(e->slot(1,1),lit5),lit52)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit110)};V t37=V(0.0);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t38=V(true);refs[0].put(std::move(t38));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit111)};V t39=V(false);refs[0].put(std::move(t39));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t40=first(call(e->slot(1,11),Args{e->slot(0,0),lit120,V()}));e->slot(0,2)=std::move(t40);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t41=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t42=get(e->slot(1,2),e->slot(1,1));return !truth(t42)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t42;})()};
return Args{};})});e->slot(0,3)=arg(t41,0);e->slot(0,4)=arg(t41,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t43=([&](){V z=table();set(z,V(1.0),lit121);set(z,V(2.0),lit122);return z;})();e->slot(0,1)=std::move(t43);}
{double t44=num(V(1.0)),t45=num(length(e->slot(0,1))),t46=num(V(1.0));for(double t47=t44;(t46>0?t47<=t45:t47>=t45);t47+=t46){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t47);{V t48=first(call(e->slot(2,11),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t48);}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t49=first(call(e->slot(3,4),Args{e->slot(1,1),V()}));e->slot(0,0)=std::move(t49);}
if(truth(([&](){V t50=ne(e->slot(0,0),V());return truth(t50)?gt(e->slot(0,0),V(0.0)):t50;})())){return Args{e->slot(0,0)};
}
}
}}
return Args{V()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(false)};
}
{V t51=first(call(e->slot(1,11),Args{e->slot(0,0),lit120,V()}));e->slot(0,1)=std::move(t51);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(false)};
}
return Args{([&](){V t52=([&](){V t53=([&](){V t54=ne(first(call(e->slot(1,15),Args{e->slot(0,0),V(0.0)})),V());return !truth(t54)?ne(first(call(e->slot(1,15),Args{e->slot(0,0),V(1.0)})),V()):t54;})();return !truth(t53)?ne(first(call(e->slot(1,15),Args{e->slot(0,0),V(2.0)})),V()):t53;})();return !truth(t52)?ne(first(call(e->slot(1,15),Args{e->slot(0,0),V(3.0)})),V()):t52;})()};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t55=V(false);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t56=V(false);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t57=V(false);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t58=V(false);refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t59=V(false);refs[0].put(std::move(t59));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t60=V(false);refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t61=V(false);refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t62=V(false);refs[0].put(std::move(t62));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t63=first(call(e->slot(1,7),Args{lit123}));e->slot(0,0)=std::move(t63);}
{V t64=first(call(e->slot(1,7),Args{lit124}));e->slot(0,1)=std::move(t64);}
{V t65=first(call(e->slot(1,7),Args{lit125}));e->slot(0,2)=std::move(t65);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t66=([&](){V t67=([&](){V t68=ne(e->slot(0,0),V());return !truth(t68)?ne(e->slot(0,1),V()):t68;})();return !truth(t67)?ne(e->slot(0,2),V()):t67;})();refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t69=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit87)};V t70=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{lit125,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t71=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{lit126,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t72=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{lit127,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit90)};V t73=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{lit128,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t73));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);{V t74=get(e->slot(1,1),lit5);e->slot(0,1)=std::move(t74);}
if(truth(V(!truth(get(e->slot(1,3),lit100))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t75=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit91),V(1.0),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t76=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit92),V(1.0),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t77=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit93),V(1.0),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t78=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit94),V(1.0),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t79=get(e->slot(0,1),lit6);refs[0].put(std::move(t79));}
return Args{};
}
{V t80=first(call(e->slot(1,5),Args{([&](){V t81=get(e->slot(1,3),lit86);return !truth(t81)?V(1.0):t81;})(),V(0.2),V(1.35)}));e->slot(0,2)=std::move(t80);}
{V t82=first(call(e->slot(1,5),Args{([&](){V t83=get(e->slot(1,3),lit87);return !truth(t83)?V(1.0):t83;})(),V(0.25),V(1.8)}));e->slot(0,3)=std::move(t82);}
{V t84=first(call(e->slot(1,5),Args{([&](){V t85=get(e->slot(1,3),lit88);return !truth(t85)?V(1.0):t85;})(),V(0.35),V(2.0)}));e->slot(0,4)=std::move(t84);}
{V t86=first(call(e->slot(1,5),Args{([&](){V t87=get(e->slot(1,3),lit89);return !truth(t87)?V(1.0):t87;})(),V(0.35),V(2.0)}));e->slot(0,5)=std::move(t86);}
{V t88=first(call(e->slot(1,5),Args{([&](){V t89=get(e->slot(1,3),lit90);return !truth(t89)?V(1.0):t89;})(),V(0.5),V(1.8)}));e->slot(0,6)=std::move(t88);}
{V t90=first(call(e->slot(1,5),Args{sub(e->slot(0,3),V(1.0)),V(0.0),V(0.8)}));e->slot(0,7)=std::move(t90);}
{V t91=first(call(e->slot(1,5),Args{sub(e->slot(0,2),V(1.0)),V(0.0),V(0.35)}));e->slot(0,8)=std::move(t91);}
{V t92=first(call(e->slot(1,5),Args{sub(e->slot(0,4),V(1.0)),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t92);}
{V t93=first(call(e->slot(1,5),Args{sub(e->slot(0,5),V(1.0)),V(0.0),V(1.0)}));e->slot(0,10)=std::move(t93);}
{V t94=add(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit43))),mul(e->slot(0,8),get(e->slot(0,1),lit44)));e->slot(0,11)=std::move(t94);}
{V t95=add(sub(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit40))),mul(e->slot(0,10),get(e->slot(0,1),lit42))),mul(e->slot(0,8),get(e->slot(0,1),lit44)));e->slot(0,12)=std::move(t95);}
{V t96=add(sub(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit40))),mul(e->slot(0,9),get(e->slot(0,1),lit41))),mul(e->slot(0,8),get(e->slot(0,1),lit44)));e->slot(0,13)=std::move(t96);}
{V t97=add(sub(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit40))),mul(mul(e->slot(0,9),get(e->slot(0,1),lit41)),V(0.75))),mul(e->slot(0,8),get(e->slot(0,1),lit44)));e->slot(0,14)=std::move(t97);}
{std::array<Ref,1> refs{Ref(e,0,11)};V t98=first(call(e->slot(1,5),Args{e->slot(0,11),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e,0,12)};V t99=first(call(e->slot(1,5),Args{e->slot(0,12),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)}));refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e,0,13)};V t100=first(call(e->slot(1,5),Args{e->slot(0,13),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)}));refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e,0,14)};V t101=first(call(e->slot(1,5),Args{e->slot(0,14),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t102=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit91),e->slot(0,11),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t103=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit92),e->slot(0,12),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t104=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit93),e->slot(0,13),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t105=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit94),e->slot(0,14),get(e->slot(0,1),lit6),e->slot(0,0)}));refs[0].put(std::move(t105));}
{V t106=divv(mul(get(e->slot(0,1),lit6),add(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit45)))),add(V(1.0),mul(e->slot(0,8),get(e->slot(0,1),lit46))));e->slot(0,15)=std::move(t106);}
{std::array<Ref,1> refs{Ref(e,0,15)};V t107=divv(e->slot(0,15),first(call(get(e->get("math"),lit129),Args{e->slot(0,6),V(0.5)})));refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t108=first(call(e->slot(1,5),Args{e->slot(0,15),V(0.025),V(0.09)}));refs[0].put(std::move(t108));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t109=call(e->slot(1,9),Args{V(),concat(lit130,e->slot(0,0)),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0)),concat(lit133,e->slot(0,0)),concat(lit134,e->slot(0,0)),concat(lit135,e->slot(0,0))});e->slot(0,2)=arg(t109,0);e->slot(0,3)=arg(t109,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t110=V(true);refs[0].put(std::move(t110));}
}
if(truth(eq(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t111=first(call(e->slot(2,7),Args{concat(lit136,e->slot(1,0))}));e->slot(0,0)=std::move(t111);}
if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(3,3),lit101)};V t112=V(true);refs[0].put(std::move(t112));}
{V t113=first(call(e->slot(3,4),Args{e->slot(1,0),V(0.0)}));e->slot(0,0)=std::move(t113);}
if(truth(gt(first(call(e->slot(3,6),Args{e->slot(0,0)})),V(900.0)))){{std::array<Ref,1> refs{Ref(e,2,2)};V t114=first(call(e->slot(3,6),Args{e->slot(0,0)}));refs[0].put(std::move(t114));}
}else{{std::array<Ref,1> refs{Ref(e,2,2)};V t115=add(get(get(e->slot(3,1),lit5),lit11),e->slot(0,0));refs[0].put(std::move(t115));}
}
}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t116=first(call(e->slot(1,16),Args{e->slot(0,1)}));refs[0].put(std::move(t116));}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t117=V(true);refs[0].put(std::move(t117));}
}
}
return call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,2),get(get(e->slot(1,1),lit5),lit11)})),V(0.0),V(12000.0)});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,34);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t118=get(e->slot(1,1),lit5);e->slot(0,3)=std::move(t118);}
{V t119=first(call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,4)=std::move(t119);}
{V t120=([&](){V t121=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t121)?e->slot(0,4):t121;})();e->slot(0,5)=std::move(t120);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit56),e->slot(0,0))};V t122=e->slot(0,5);refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit55),e->slot(0,0))};V t123=e->slot(0,4);refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit57),e->slot(0,0))};V t124=divv(sub(e->slot(0,4),e->slot(0,5)),first(call(get(e->get("math"),lit129),Args{e->slot(0,2),V(0.001)})));refs[0].put(std::move(t124));}
{Args t125=call(e->slot(1,9),Args{V(),concat(lit137,e->slot(0,0)),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0))});e->slot(0,6)=arg(t125,0);e->slot(0,7)=arg(t125,1);}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit101)};V t126=V(true);refs[0].put(std::move(t126));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit58),e->slot(0,0))};V t127=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,6),divv(e->slot(0,4),first(call(get(e->get("math"),lit129),Args{get(e->slot(0,3),lit11),V(1.0)})))})),V(0.0),V(2.5)}));refs[0].put(std::move(t127));}
{Args t128=call(e->slot(1,9),Args{V(0.0),concat(lit140,e->slot(0,0)),concat(lit141,e->slot(0,0)),concat(lit142,e->slot(0,0))});e->slot(0,8)=arg(t128,0);e->slot(0,9)=arg(t128,1);}
{Args t129=call(e->slot(1,9),Args{V(0.0),concat(lit143,e->slot(0,0)),concat(lit144,e->slot(0,0)),concat(lit145,e->slot(0,0))});e->slot(0,10)=arg(t129,0);e->slot(0,11)=arg(t129,1);}
{Args t130=call(e->slot(1,9),Args{V(0.0),concat(lit146,e->slot(0,0)),concat(lit147,e->slot(0,0))});e->slot(0,12)=arg(t130,0);e->slot(0,13)=arg(t130,1);}
if(truth(ne(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t131=V(true);refs[0].put(std::move(t131));}
}
if(truth(ne(e->slot(0,11),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t132=V(true);refs[0].put(std::move(t132));}
}
if(truth(ne(e->slot(0,13),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t133=V(true);refs[0].put(std::move(t133));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit59),e->slot(0,0))};V t134=e->slot(0,8);refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit60),e->slot(0,0))};V t135=e->slot(0,10);refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit61),e->slot(0,0))};V t136=e->slot(0,12);refs[0].put(std::move(t136));}
{Args t137=call(e->slot(1,9),Args{V(0.0),concat(lit148,e->slot(0,0)),concat(lit149,e->slot(0,0)),concat(lit150,e->slot(0,0))});e->slot(0,14)=arg(t137,0);e->slot(0,15)=arg(t137,1);}
{Args t138=call(e->slot(1,9),Args{V(0.0),concat(lit151,e->slot(0,0)),concat(lit152,e->slot(0,0)),concat(lit153,e->slot(0,0))});e->slot(0,16)=arg(t138,0);e->slot(0,17)=arg(t138,1);}
{Args t139=call(e->slot(1,9),Args{V(0.0),concat(lit154,e->slot(0,0)),concat(lit155,e->slot(0,0)),concat(lit156,e->slot(0,0))});e->slot(0,18)=arg(t139,0);e->slot(0,19)=arg(t139,1);}
if(truth(([&](){V t140=([&](){V t141=ne(e->slot(0,15),V());return !truth(t141)?ne(e->slot(0,17),V()):t141;})();return !truth(t140)?ne(e->slot(0,19),V()):t140;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t142=V(true);refs[0].put(std::move(t142));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit62),e->slot(0,0))};V t143=first(call(e->slot(1,5),Args{e->slot(0,14),V(0.0),V(1.5)}));refs[0].put(std::move(t143));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit63),e->slot(0,0))};V t144=first(call(e->slot(1,5),Args{e->slot(0,16),V(0.0),V(1.5)}));refs[0].put(std::move(t144));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit64),e->slot(0,0))};V t145=first(call(e->slot(1,5),Args{e->slot(0,18),V(0.0),V(1.0)}));refs[0].put(std::move(t145));}
{Args t146=call(e->slot(1,9),Args{V(1.0),concat(lit157,e->slot(0,0)),concat(lit158,e->slot(0,0)),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0))});e->slot(0,20)=arg(t146,0);e->slot(0,21)=arg(t146,1);}
{Args t147=call(e->slot(1,9),Args{e->slot(0,20),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0))});e->slot(0,22)=arg(t147,0);e->slot(0,23)=arg(t147,1);}
{Args t148=call(e->slot(1,9),Args{V(),concat(lit163,e->slot(0,0)),concat(lit164,e->slot(0,0)),concat(lit165,e->slot(0,0))});e->slot(0,24)=arg(t148,0);e->slot(0,25)=arg(t148,1);}
if(truth(([&](){V t149=([&](){V t150=ne(e->slot(0,21),V());return !truth(t150)?ne(e->slot(0,23),V()):t150;})();return !truth(t149)?ne(e->slot(0,25),V()):t149;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t151=V(true);refs[0].put(std::move(t151));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit65),e->slot(0,0))};V t152=first(call(e->slot(1,5),Args{e->slot(0,20),V(0.0),V(1.2)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit66),e->slot(0,0))};V t153=first(call(e->slot(1,5),Args{e->slot(0,22),V(0.0),V(1.2)}));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit67),e->slot(0,0))};V t154=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,24),sub(V(1.0),first(call(e->slot(1,5),Args{get(get(e->slot(1,3),lit65),e->slot(0,0)),V(0.0),V(1.0)})))})),V(0.0),V(1.0)}));refs[0].put(std::move(t154));}
{Args t155=call(e->slot(1,9),Args{V(0.0),concat(lit166,e->slot(0,0)),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0))});e->slot(0,26)=arg(t155,0);e->slot(0,27)=arg(t155,1);}
{Args t156=call(e->slot(1,9),Args{V(0.0),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0))});e->slot(0,28)=arg(t156,0);e->slot(0,29)=arg(t156,1);}
if(truth(([&](){V t157=ne(e->slot(0,27),V());return !truth(t157)?ne(e->slot(0,29),V()):t157;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t158=V(true);refs[0].put(std::move(t158));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit68),e->slot(0,0))};V t159=first(call(e->slot(1,5),Args{e->slot(0,26),V(0.0),V(1.5)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit69),e->slot(0,0))};V t160=first(call(e->slot(1,5),Args{e->slot(0,28),V(0.0),V(1.5)}));refs[0].put(std::move(t160));}
{Args t161=call(e->slot(1,9),Args{V(0.0),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0))});e->slot(0,30)=arg(t161,0);e->slot(0,31)=arg(t161,1);}
{Args t162=call(e->slot(1,9),Args{V(0.0),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0))});e->slot(0,32)=arg(t162,0);e->slot(0,33)=arg(t162,1);}
if(truth(([&](){V t163=ne(e->slot(0,31),V());return !truth(t163)?ne(e->slot(0,33),V()):t163;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit106)};V t164=V(true);refs[0].put(std::move(t164));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit70),e->slot(0,0))};V t165=first(call(e->slot(1,5),Args{e->slot(0,30),V(0.0),V(1.5)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit71),e->slot(0,0))};V t166=first(call(e->slot(1,5),Args{e->slot(0,32),V(0.0),V(1.5)}));refs[0].put(std::move(t166));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t167=get(e->slot(1,1),lit5);e->slot(0,2)=std::move(t167);}
{V t168=first(call(e->slot(1,5),Args{mul(first(call(e->slot(1,6),Args{sub(get(get(e->slot(1,3),lit58),e->slot(0,0)),V(1.0))})),get(e->slot(0,2),lit13)),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t168);}
{V t169=first(call(e->slot(1,5),Args{mul(divv(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit57),e->slot(0,0))})),first(call(get(e->get("math"),lit129),Args{get(e->slot(0,2),lit15),V(1.0)}))),get(e->slot(0,2),lit14)),V(0.0),V(0.35)}));e->slot(0,4)=std::move(t169);}
{V t170=add(add(mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit59),e->slot(0,0))})),get(e->slot(0,2),lit16)),mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit60),e->slot(0,0))})),get(e->slot(0,2),lit17))),mul(first(call(e->slot(1,6),Args{get(get(e->slot(1,3),lit61),e->slot(0,0))})),get(e->slot(0,2),lit18)));e->slot(0,5)=std::move(t170);}
{V t171=add(add(sub(add(mul(get(get(e->slot(1,3),lit62),e->slot(0,0)),get(e->slot(0,2),lit19)),mul(get(get(e->slot(1,3),lit63),e->slot(0,0)),get(e->slot(0,2),lit20))),mul(get(get(e->slot(1,3),lit64),e->slot(0,0)),get(e->slot(0,2),lit21))),mul(get(get(e->slot(1,3),lit67),e->slot(0,0)),get(e->slot(0,2),lit22))),mul(first(call(e->slot(1,5),Args{sub(V(1.0),get(get(e->slot(1,3),lit66),e->slot(0,0))),V(0.0),V(1.0)})),get(e->slot(0,2),lit23)));e->slot(0,6)=std::move(t171);}
{V t172=add(add(add(mul(get(get(e->slot(1,3),lit68),e->slot(0,0)),get(e->slot(0,2),lit24)),mul(get(get(e->slot(1,3),lit69),e->slot(0,0)),get(e->slot(0,2),lit25))),mul(get(get(e->slot(1,3),lit70),e->slot(0,0)),get(e->slot(0,2),lit26))),mul(get(get(e->slot(1,3),lit71),e->slot(0,0)),get(e->slot(0,2),lit27)));e->slot(0,7)=std::move(t172);}
{V t173=first(call(e->slot(1,5),Args{add(add(add(add(e->slot(0,3),e->slot(0,4)),e->slot(0,5)),e->slot(0,6)),e->slot(0,7)),V(0.0),get(e->slot(0,2),lit34)}));e->slot(0,8)=std::move(t173);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit54),e->slot(0,0))};V t174=e->slot(0,8);refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit53),e->slot(0,0))};V t175=first(call(e->slot(1,13),Args{get(get(e->slot(1,3),lit53),e->slot(0,0)),e->slot(0,8),get(e->slot(0,2),lit6),e->slot(0,1)}));refs[0].put(std::move(t175));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{Args t176=call(e->slot(1,9),Args{V(0.0),lit175,lit176,lit177});e->slot(0,0)=arg(t176,0);e->slot(0,1)=arg(t176,1);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t177=V(true);refs[0].put(std::move(t177));}
}
{Args t178=call(e->slot(1,9),Args{V(0.0),lit178,lit179,lit180});e->slot(0,2)=arg(t178,0);e->slot(0,3)=arg(t178,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit108)};V t179=V(true);refs[0].put(std::move(t179));}
}
return joined(Args{first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0),V(1.0)}))},call(e->slot(1,5),Args{e->slot(0,2),V(-num(V(1.0))),V(1.0)}));
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;e->slot(0,0)=arg(a,0);{V t180=get(e->slot(1,1),lit5);e->slot(0,1)=std::move(t180);}
{V t181=([&](){V t182=get(get(e->slot(1,3),lit53),V(0.0));return !truth(t182)?V(0.0):t182;})();e->slot(0,2)=std::move(t181);}
{V t183=([&](){V t184=get(get(e->slot(1,3),lit53),V(1.0));return !truth(t184)?V(0.0):t184;})();e->slot(0,3)=std::move(t183);}
{V t185=([&](){V t186=get(get(e->slot(1,3),lit53),V(2.0));return !truth(t186)?V(0.0):t186;})();e->slot(0,4)=std::move(t185);}
{V t187=([&](){V t188=get(get(e->slot(1,3),lit53),V(3.0));return !truth(t188)?V(0.0):t188;})();e->slot(0,5)=std::move(t187);}
{V t189=mul(add(e->slot(0,2),e->slot(0,3)),V(0.5));e->slot(0,6)=std::move(t189);}
{V t190=mul(add(e->slot(0,4),e->slot(0,5)),V(0.5));e->slot(0,7)=std::move(t190);}
{V t191=mul(add(e->slot(0,2),e->slot(0,4)),V(0.5));e->slot(0,8)=std::move(t191);}
{V t192=mul(add(e->slot(0,3),e->slot(0,5)),V(0.5));e->slot(0,9)=std::move(t192);}
{Args t193=call(e->slot(1,24),Args{});e->slot(0,10)=arg(t193,0);e->slot(0,11)=arg(t193,1);}
{V t194=first(call(e->slot(1,5),Args{add(mul(mul(add(add(add(e->slot(0,2),e->slot(0,3)),e->slot(0,4)),e->slot(0,5)),V(0.25)),get(e->slot(0,1),lit30)),mul(e->slot(0,10),get(e->slot(0,1),lit28))),V(0.0),get(e->slot(0,1),lit35)}));e->slot(0,12)=std::move(t194);}
{V t195=first(call(e->slot(1,5),Args{mul(sub(e->slot(0,6),e->slot(0,7)),get(e->slot(0,1),lit31)),V(-num(get(e->slot(0,1),lit36))),get(e->slot(0,1),lit36)}));e->slot(0,13)=std::move(t195);}
{V t196=first(call(e->slot(1,5),Args{mul(sub(e->slot(0,9),e->slot(0,8)),get(e->slot(0,1),lit32)),V(-num(get(e->slot(0,1),lit37))),get(e->slot(0,1),lit37)}));e->slot(0,14)=std::move(t196);}
{V t197=first(call(e->slot(1,5),Args{add(mul(mul(sub(add(e->slot(0,3),e->slot(0,4)),add(e->slot(0,2),e->slot(0,5))),V(0.5)),get(e->slot(0,1),lit33)),mul(e->slot(0,11),get(e->slot(0,1),lit29))),V(-num(get(e->slot(0,1),lit38))),get(e->slot(0,1),lit38)}));e->slot(0,15)=std::move(t197);}
call(e->slot(1,20),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit76)};V t198=e->slot(0,12);refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit77)};V t199=e->slot(0,13);refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit78)};V t200=e->slot(0,14);refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit79)};V t201=e->slot(0,15);refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e,0,12)};V t202=first(call(e->slot(1,5),Args{mul(e->slot(0,12),get(e->slot(1,3),lit91)),V(0.0),get(e->slot(0,1),lit35)}));refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e,0,13)};V t203=first(call(e->slot(1,5),Args{mul(e->slot(0,13),get(e->slot(1,3),lit92)),V(-num(get(e->slot(0,1),lit36))),get(e->slot(0,1),lit36)}));refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(e,0,14)};V t204=first(call(e->slot(1,5),Args{mul(e->slot(0,14),get(e->slot(1,3),lit93)),V(-num(get(e->slot(0,1),lit37))),get(e->slot(0,1),lit37)}));refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e,0,15)};V t205=first(call(e->slot(1,5),Args{mul(e->slot(0,15),get(e->slot(1,3),lit94)),V(-num(get(e->slot(0,1),lit38))),get(e->slot(0,1),lit38)}));refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit80)};V t206=e->slot(0,6);refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit81)};V t207=e->slot(0,7);refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit82)};V t208=e->slot(0,8);refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit83)};V t209=e->slot(0,9);refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit84)};V t210=e->slot(0,12);refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit85)};V t211=first(call(get(e->get("math"),lit129),Args{e->slot(0,2),e->slot(0,3),e->slot(0,4),e->slot(0,5)}));refs[0].put(std::move(t211));}
{V t212=([&](){V t213=get(e->slot(1,3),lit95);return !truth(t213)?get(e->slot(0,1),lit6):t213;})();e->slot(0,16)=std::move(t212);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit72)};V t214=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit72),e->slot(0,12),first(call(get(e->get("math"),lit129),Args{get(e->slot(0,1),lit7),e->slot(0,16)})),e->slot(0,0)}));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit73)};V t215=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit73),e->slot(0,13),first(call(get(e->get("math"),lit129),Args{get(e->slot(0,1),lit8),e->slot(0,16)})),e->slot(0,0)}));refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit74)};V t216=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit74),e->slot(0,14),first(call(get(e->get("math"),lit129),Args{get(e->slot(0,1),lit9),e->slot(0,16)})),e->slot(0,0)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit75)};V t217=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit75),e->slot(0,15),first(call(get(e->get("math"),lit129),Args{get(e->slot(0,1),lit10),e->slot(0,16)})),e->slot(0,0)}));refs[0].put(std::move(t217));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t218=num(V(0.0)),t219=num(V(3.0)),t220=num(V(1.0));for(double t221=t218;(t220>0?t221<=t219:t221>=t219);t221+=t220){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t221);{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit53),e->slot(0,0))};V t222=first(call(e->slot(2,13),Args{get(get(e->slot(2,3),lit53),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit5),lit49),e->slot(1,0)}));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit54),e->slot(0,0))};V t223=V(0.0);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit55),e->slot(0,0))};V t224=first(call(e->slot(2,13),Args{get(get(e->slot(2,3),lit55),e->slot(0,0)),get(get(e->slot(2,1),lit5),lit11),get(get(e->slot(2,1),lit5),lit49),e->slot(1,0)}));refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit58),e->slot(0,0))};V t225=first(call(e->slot(2,13),Args{get(get(e->slot(2,3),lit58),e->slot(0,0)),V(1.0),get(get(e->slot(2,1),lit5),lit49),e->slot(1,0)}));refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit57),e->slot(0,0))};V t226=first(call(e->slot(2,13),Args{get(get(e->slot(2,3),lit57),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit5),lit49),e->slot(1,0)}));refs[0].put(std::move(t226));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit72)};V t227=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit72),V(0.0),get(get(e->slot(1,1),lit5),lit49),e->slot(0,0)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit73)};V t228=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit73),V(0.0),get(get(e->slot(1,1),lit5),lit49),e->slot(0,0)}));refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit74)};V t229=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit74),V(0.0),get(get(e->slot(1,1),lit5),lit49),e->slot(0,0)}));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit75)};V t230=first(call(e->slot(1,13),Args{get(e->slot(1,3),lit75),V(0.0),get(get(e->slot(1,1),lit5),lit49),e->slot(0,0)}));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit80)};V t231=V(0.0);refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit81)};V t232=V(0.0);refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit82)};V t233=V(0.0);refs[0].put(std::move(t233));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit83)};V t234=V(0.0);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit84)};V t235=V(0.0);refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit85)};V t236=V(0.0);refs[0].put(std::move(t236));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,10),Args{concat(lit181,e->slot(0,0)),([&](){V t237=get(get(e->slot(1,3),lit53),e->slot(0,0));return !truth(t237)?V(0.0):t237;})()});
call(e->slot(1,10),Args{concat(lit182,e->slot(0,0)),([&](){V t238=get(get(e->slot(1,3),lit53),e->slot(0,0));return !truth(t238)?V(0.0):t238;})()});
call(e->slot(1,10),Args{concat(lit183,e->slot(0,0)),([&](){V t239=get(get(e->slot(1,3),lit53),e->slot(0,0));return !truth(t239)?V(0.0):t239;})()});
call(e->slot(1,10),Args{concat(lit184,e->slot(0,0)),([&](){V t240=get(get(e->slot(1,3),lit54),e->slot(0,0));return !truth(t240)?V(0.0):t240;})()});
call(e->slot(1,10),Args{concat(lit185,e->slot(0,0)),([&](){V t241=get(get(e->slot(1,3),lit55),e->slot(0,0));return !truth(t241)?get(get(e->slot(1,1),lit5),lit11):t241;})()});
call(e->slot(1,10),Args{concat(lit186,e->slot(0,0)),([&](){V t242=get(get(e->slot(1,3),lit58),e->slot(0,0));return !truth(t242)?V(1.0):t242;})()});
call(e->slot(1,10),Args{concat(lit187,e->slot(0,0)),([&](){V t243=get(get(e->slot(1,3),lit57),e->slot(0,0));return !truth(t243)?V(0.0):t243;})()});
if(truth(get(e->slot(1,3),lit111))){call(e->slot(1,10),Args{concat(lit188,e->slot(0,0)),([&](){V t244=get(get(e->slot(1,3),lit59),e->slot(0,0));return !truth(t244)?V(0.0):t244;})()});
call(e->slot(1,10),Args{concat(lit189,e->slot(0,0)),([&](){V t245=get(get(e->slot(1,3),lit60),e->slot(0,0));return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,10),Args{concat(lit190,e->slot(0,0)),([&](){V t246=get(get(e->slot(1,3),lit61),e->slot(0,0));return !truth(t246)?V(0.0):t246;})()});
call(e->slot(1,10),Args{concat(lit191,e->slot(0,0)),([&](){V t247=get(get(e->slot(1,3),lit62),e->slot(0,0));return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,10),Args{concat(lit192,e->slot(0,0)),([&](){V t248=get(get(e->slot(1,3),lit63),e->slot(0,0));return !truth(t248)?V(0.0):t248;})()});
call(e->slot(1,10),Args{concat(lit193,e->slot(0,0)),([&](){V t249=get(get(e->slot(1,3),lit64),e->slot(0,0));return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,10),Args{concat(lit194,e->slot(0,0)),([&](){V t250=get(get(e->slot(1,3),lit67),e->slot(0,0));return !truth(t250)?V(0.0):t250;})()});
call(e->slot(1,10),Args{concat(lit195,e->slot(0,0)),([&](){V t251=get(get(e->slot(1,3),lit71),e->slot(0,0));return !truth(t251)?V(0.0):t251;})()});
}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,10),Args{lit196,([&](){V t252=get(e->slot(1,3),lit96);return !truth(t252)?lit197:t252;})()});
call(e->slot(1,10),Args{lit198,([&](){V t253=get(e->slot(1,3),lit98);return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,10),Args{lit199,([&](){V t254=([&](){V t255=get(e->slot(1,3),lit99);return truth(t255)?V(1.0):t255;})();return !truth(t254)?V(0.0):t254;})()});
call(e->slot(1,10),Args{lit200,([&](){V t256=get(e->slot(1,3),lit80);return !truth(t256)?V(0.0):t256;})()});
call(e->slot(1,10),Args{lit201,([&](){V t257=get(e->slot(1,3),lit81);return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,10),Args{lit202,([&](){V t258=get(e->slot(1,3),lit82);return !truth(t258)?V(0.0):t258;})()});
call(e->slot(1,10),Args{lit203,([&](){V t259=get(e->slot(1,3),lit83);return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,10),Args{lit204,([&](){V t260=get(e->slot(1,3),lit72);return !truth(t260)?V(0.0):t260;})()});
call(e->slot(1,10),Args{lit205,([&](){V t261=get(e->slot(1,3),lit73);return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,10),Args{lit206,([&](){V t262=get(e->slot(1,3),lit74);return !truth(t262)?V(0.0):t262;})()});
call(e->slot(1,10),Args{lit207,([&](){V t263=get(e->slot(1,3),lit75);return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,10),Args{lit208,([&](){V t264=get(e->slot(1,3),lit84);return !truth(t264)?V(0.0):t264;})()});
call(e->slot(1,10),Args{lit209,([&](){V t265=get(e->slot(1,3),lit72);return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,10),Args{lit210,([&](){V t266=get(e->slot(1,3),lit73);return !truth(t266)?V(0.0):t266;})()});
call(e->slot(1,10),Args{lit211,([&](){V t267=get(e->slot(1,3),lit74);return !truth(t267)?V(0.0):t267;})()});
call(e->slot(1,10),Args{lit212,([&](){V t268=get(e->slot(1,3),lit75);return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,10),Args{lit213,([&](){V t269=get(e->slot(1,3),lit72);return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,10),Args{lit214,([&](){V t270=get(e->slot(1,3),lit73);return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,10),Args{lit215,([&](){V t271=get(e->slot(1,3),lit74);return !truth(t271)?V(0.0):t271;})()});
call(e->slot(1,10),Args{lit216,([&](){V t272=get(e->slot(1,3),lit75);return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,10),Args{lit217,([&](){V t273=get(e->slot(1,3),lit84);return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,10),Args{lit218,([&](){V t274=get(e->slot(1,3),lit85);return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,10),Args{lit219,([&](){V t275=([&](){V t276=get(e->slot(1,3),lit100);return truth(t276)?V(1.0):t276;})();return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,10),Args{lit220,([&](){V t277=get(e->slot(1,3),lit86);return !truth(t277)?V(1.0):t277;})()});
call(e->slot(1,10),Args{lit221,([&](){V t278=get(e->slot(1,3),lit87);return !truth(t278)?V(1.0):t278;})()});
call(e->slot(1,10),Args{lit222,([&](){V t279=get(e->slot(1,3),lit91);return !truth(t279)?V(1.0):t279;})()});
call(e->slot(1,10),Args{lit223,([&](){V t280=get(e->slot(1,3),lit92);return !truth(t280)?V(1.0):t280;})()});
call(e->slot(1,10),Args{lit224,([&](){V t281=get(e->slot(1,3),lit93);return !truth(t281)?V(1.0):t281;})()});
call(e->slot(1,10),Args{lit225,([&](){V t282=get(e->slot(1,3),lit94);return !truth(t282)?V(1.0):t282;})()});
call(e->slot(1,10),Args{lit226,([&](){V t283=get(e->slot(1,3),lit95);return !truth(t283)?get(get(e->slot(1,1),lit5),lit6):t283;})()});
{double t284=num(V(0.0)),t285=num(V(3.0)),t286=num(V(1.0));for(double t287=t284;(t286>0?t287<=t285:t287>=t285);t287+=t286){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t287);call(e->slot(2,27),Args{e->slot(0,0)});
}}
if(truth(get(e->slot(1,3),lit111))){call(e->slot(1,10),Args{lit227,([&](){V t288=([&](){V t289=get(e->slot(1,3),lit101);return truth(t289)?V(1.0):t289;})();return !truth(t288)?V(0.0):t288;})()});
call(e->slot(1,10),Args{lit228,([&](){V t290=([&](){V t291=get(e->slot(1,3),lit102);return truth(t291)?V(1.0):t291;})();return !truth(t290)?V(0.0):t290;})()});
call(e->slot(1,10),Args{lit229,([&](){V t292=([&](){V t293=get(e->slot(1,3),lit103);return truth(t293)?V(1.0):t293;})();return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,10),Args{lit230,([&](){V t294=([&](){V t295=get(e->slot(1,3),lit104);return truth(t295)?V(1.0):t295;})();return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,10),Args{lit231,([&](){V t296=([&](){V t297=get(e->slot(1,3),lit105);return truth(t297)?V(1.0):t297;})();return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,10),Args{lit232,([&](){V t298=([&](){V t299=get(e->slot(1,3),lit106);return truth(t299)?V(1.0):t299;})();return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,10),Args{lit233,([&](){V t300=([&](){V t301=get(e->slot(1,3),lit107);return truth(t301)?V(1.0):t301;})();return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,10),Args{lit234,([&](){V t302=([&](){V t303=get(e->slot(1,3),lit108);return truth(t303)?V(1.0):t303;})();return !truth(t302)?V(0.0):t302;})()});
call(e->slot(1,10),Args{lit235,([&](){V t304=([&](){V t305=get(e->slot(1,3),lit109);return truth(t305)?V(1.0):t305;})();return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,10),Args{lit236,([&](){V t306=get(e->slot(1,3),lit76);return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,10),Args{lit237,([&](){V t307=get(e->slot(1,3),lit77);return !truth(t307)?V(0.0):t307;})()});
call(e->slot(1,10),Args{lit238,([&](){V t308=get(e->slot(1,3),lit78);return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,10),Args{lit239,([&](){V t309=get(e->slot(1,3),lit79);return !truth(t309)?V(0.0):t309;})()});
}
return Args{};});
Ref(e->slot(0,1),lit240).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t310=lit97;refs[0].put(std::move(t310));}
call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit241).put(native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t311=add(([&](){V t312=get(e->slot(1,3),lit98);return !truth(t312)?V(0.0):t312;})(),V(1.0));refs[0].put(std::move(t311));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t313=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit5),lit50),get(get(e->slot(1,1),lit5),lit51)}));refs[0].put(std::move(t313));}
call(e->slot(1,14),Args{e->slot(0,0)});
call(e->slot(1,18),Args{});
call(e->slot(1,19),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t314=([&](){V t315=e->slot(0,1);return !truth(t315)?first(call(e->slot(1,12),Args{})):t315;})();refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit109)};V t316=ne(e->slot(0,1),V());refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t317=first(call(e->slot(1,17),Args{e->slot(0,1)}));refs[0].put(std::move(t317));}
if(truth(([&](){V t318=V(!truth(e->slot(0,1)));return truth(t318)?V(!truth(e->get("ac"))):t318;})())){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t319=lit242;refs[0].put(std::move(t319));}
call(e->slot(1,26),Args{e->slot(0,0)});
call(e->slot(1,28),Args{});
return Args{};
}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t320=lit243;refs[0].put(std::move(t320));}
}else if(truth(V(!truth(get(e->slot(1,3),lit99))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t321=lit244;refs[0].put(std::move(t321));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t322=lit245;refs[0].put(std::move(t322));}
}

{double t323=num(V(0.0)),t324=num(V(3.0)),t325=num(V(1.0));for(double t326=t323;(t325>0?t326<=t324:t326>=t324);t326+=t325){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t326);{V t327=first(call(e->slot(2,15),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t327);}
call(e->slot(2,22),Args{e->slot(0,0),e->slot(0,1),e->slot(1,0)});
call(e->slot(2,23),Args{e->slot(0,0),e->slot(1,0)});
}}
call(e->slot(1,25),Args{e->slot(0,0)});
if(truth(([&](){V t328=V(!truth(e->slot(0,1)));return truth(t328)?V(!truth(([&](){V t329=([&](){V t330=([&](){V t331=get(e->slot(1,3),lit101);return !truth(t331)?get(e->slot(1,3),lit102):t331;})();return !truth(t330)?get(e->slot(1,3),lit103):t330;})();return !truth(t329)?get(e->slot(1,3),lit106):t329;})())):t328;})())){call(e->slot(1,26),Args{e->slot(0,0)});
}else if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit96)};V t332=lit246;refs[0].put(std::move(t332));}
}

call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit247).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t333=get(e->slot(1,3),lit72);return !truth(t333)?V(0.0):t333;})()};
return Args{};}));
Ref(e->slot(0,1),lit248).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t334=get(e->slot(1,3),lit73);return !truth(t334)?V(0.0):t334;})()};
return Args{};}));
Ref(e->slot(0,1),lit249).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t335=get(e->slot(1,3),lit74);return !truth(t335)?V(0.0):t335;})()};
return Args{};}));
Ref(e->slot(0,1),lit250).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t336=get(e->slot(1,3),lit75);return !truth(t336)?V(0.0):t336;})()};
return Args{};}));
Ref(e->slot(0,1),lit251).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t337=get(get(e->slot(1,3),lit53),e->slot(0,0));return !truth(t337)?V(0.0):t337;})()};
return Args{};}));
Ref(e->slot(0,1),lit252).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,3)};
return Args{};}));
Ref(e->slot(0,1),lit253).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t338=([&](){V t339=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t339)?V(0.0):t339;})();e->slot(0,0)=std::move(t338);}
return call(get(e->get("string"),lit254),Args{concat(lit255,lit256),first(call(e->get("tostring"),Args{([&](){V t340=get(e->slot(2,2),e->slot(0,0));return !truth(t340)?e->slot(0,0):t340;})()})),([&](){V t341=get(get(e->slot(2,3),lit53),e->slot(0,0));return !truth(t341)?V(0.0):t341;})(),([&](){V t342=get(get(e->slot(2,3),lit54),e->slot(0,0));return !truth(t342)?V(0.0):t342;})(),([&](){V t343=get(get(e->slot(2,3),lit55),e->slot(0,0));return !truth(t343)?V(0.0):t343;})(),([&](){V t344=get(get(e->slot(2,3),lit58),e->slot(0,0));return !truth(t344)?V(1.0):t344;})(),([&](){V t345=get(get(e->slot(2,3),lit57),e->slot(0,0));return !truth(t345)?V(0.0):t345;})(),([&](){V t346=get(get(e->slot(2,3),lit59),e->slot(0,0));return !truth(t346)?V(0.0):t346;})(),([&](){V t347=get(get(e->slot(2,3),lit60),e->slot(0,0));return !truth(t347)?V(0.0):t347;})(),([&](){V t348=get(get(e->slot(2,3),lit61),e->slot(0,0));return !truth(t348)?V(0.0):t348;})(),([&](){V t349=get(get(e->slot(2,3),lit62),e->slot(0,0));return !truth(t349)?V(0.0):t349;})(),([&](){V t350=get(get(e->slot(2,3),lit63),e->slot(0,0));return !truth(t350)?V(0.0):t350;})(),([&](){V t351=get(get(e->slot(2,3),lit64),e->slot(0,0));return !truth(t351)?V(0.0):t351;})()});
}
return call(get(e->get("string"),lit254),Args{concat(lit257,concat(lit258,concat(lit259,concat(lit260,lit261)))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit96)})),([&](){V t352=get(e->slot(1,3),lit98);return !truth(t352)?V(0.0):t352;})(),([&](){V t353=([&](){V t354=get(e->slot(1,3),lit99);return truth(t354)?lit262:t354;})();return !truth(t353)?lit263:t353;})(),([&](){V t355=get(e->slot(1,3),lit72);return !truth(t355)?V(0.0):t355;})(),([&](){V t356=get(e->slot(1,3),lit73);return !truth(t356)?V(0.0):t356;})(),([&](){V t357=get(e->slot(1,3),lit74);return !truth(t357)?V(0.0):t357;})(),([&](){V t358=get(e->slot(1,3),lit75);return !truth(t358)?V(0.0):t358;})(),([&](){V t359=get(e->slot(1,3),lit84);return !truth(t359)?V(0.0):t359;})(),([&](){V t360=get(e->slot(1,3),lit85);return !truth(t360)?V(0.0):t360;})(),([&](){V t361=get(e->slot(1,3),lit80);return !truth(t361)?V(0.0):t361;})(),([&](){V t362=get(e->slot(1,3),lit81);return !truth(t362)?V(0.0):t362;})(),([&](){V t363=get(e->slot(1,3),lit82);return !truth(t363)?V(0.0):t363;})(),([&](){V t364=get(e->slot(1,3),lit83);return !truth(t364)?V(0.0):t364;})(),([&](){V t365=([&](){V t366=get(e->slot(1,3),lit100);return truth(t366)?lit262:t366;})();return !truth(t365)?lit263:t365;})(),([&](){V t367=get(e->slot(1,3),lit91);return !truth(t367)?V(1.0):t367;})(),([&](){V t368=get(e->slot(1,3),lit92);return !truth(t368)?V(1.0):t368;})(),([&](){V t369=get(e->slot(1,3),lit93);return !truth(t369)?V(1.0):t369;})(),([&](){V t370=get(e->slot(1,3),lit94);return !truth(t370)?V(1.0):t370;})(),([&](){V t371=([&](){V t372=get(e->slot(1,3),lit101);return truth(t372)?lit262:t372;})();return !truth(t371)?lit263:t371;})(),([&](){V t373=([&](){V t374=get(e->slot(1,3),lit102);return truth(t374)?lit262:t374;})();return !truth(t373)?lit263:t373;})(),([&](){V t375=([&](){V t376=get(e->slot(1,3),lit103);return truth(t376)?lit262:t376;})();return !truth(t375)?lit263:t375;})(),([&](){V t377=([&](){V t378=get(e->slot(1,3),lit104);return truth(t378)?lit262:t378;})();return !truth(t377)?lit263:t377;})(),([&](){V t379=([&](){V t380=get(e->slot(1,3),lit105);return truth(t380)?lit262:t380;})();return !truth(t379)?lit263:t379;})(),([&](){V t381=([&](){V t382=get(e->slot(1,3),lit106);return truth(t382)?lit262:t382;})();return !truth(t381)?lit263:t381;})(),([&](){V t383=([&](){V t384=get(e->slot(1,3),lit107);return truth(t384)?lit262:t384;})();return !truth(t383)?lit263:t383;})(),([&](){V t385=([&](){V t386=get(e->slot(1,3),lit108);return truth(t386)?lit262:t386;})();return !truth(t385)?lit263:t385;})()});
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit265),Args{lit266});
call(get(e->get("ui"),lit265),call(get(e->slot(1,1),lit253),Args{}));
{double t387=num(V(0.0)),t388=num(V(3.0)),t389=num(V(1.0));for(double t390=t387;(t389>0?t390<=t388:t390>=t388);t390+=t389){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t390);call(get(e->get("ui"),lit265),call(get(e->slot(2,1),lit253),Args{e->slot(0,0)}));
}}
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
