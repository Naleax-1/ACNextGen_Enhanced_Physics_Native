// Generated native C++ from pinned steering_dynamics.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("rackTau");
static const V lit3("tieRodTau");
static const V lit4("knuckleTau");
static const V lit5("tieRodGain");
static const V lit6("knuckleGain");
static const V lit7("friction");
static const V lit8("fxKnuckleMix");
static const V lit9("minFrictionRack");
static const V lit10("maxReaction");
static const V lit11("maxOutput");
static const V lit12("bodySteerInputGain");
static const V lit13("flexDelayGain");
static const V lit14("flexYawGain");
static const V lit15("flexRollGain");
static const V lit16("flexEnergyReactionGain");
static const V lit17("flexReleaseReturnGain");
static const V lit18("maxEffectiveInput");
static const V lit19("bodyReadInterval");
static const V lit20("bodyFlexRackTauGain");
static const V lit21("bodyTorsionRackTauGain");
static const V lit22("bodyDampingTauGain");
static const V lit23("bodyStiffRackTauLoss");
static const V lit24("bodyFlexReactionGain");
static const V lit25("bodyStiffReactionLoss");
static const V lit26("minBodyTauScale");
static const V lit27("maxBodyTauScale");
static const V lit28("minBodyReactionScale");
static const V lit29("maxBodyReactionScale");
static const V lit30("casterGripReactionGain");
static const V lit31("casterToeReactionGain");
static const V lit32("casterCamberReactionGain");
static const V lit33("casterGripFrictionGain");
static const V lit34("minCasterScale");
static const V lit35("maxCasterScale");
static const V lit36("frontAxisInputGain");
static const V lit37("frontAxisReactionGain");
static const V lit38("frontAxisFrictionGain");
static const V lit39("roadShockReactionGain");
static const V lit40("pathLossReactionLoss");
static const V lit41("noCarDecayTau");
static const V lit42("debugStoreInterval");
static const V lit43("input");
static const V lit44("effectiveInput");
static const V lit45("rack");
static const V lit46("tieRod");
static const V lit47("knuckle");
static const V lit48("reaction");
static const V lit49("output");
static const V lit50("fy");
static const V lit51("mz");
static const V lit52("fx");
static const V lit53("speedKmh");
static const V lit54("bodySteer");
static const V lit55("flexDelay");
static const V lit56("flexYaw");
static const V lit57("flexRoll");
static const V lit58("flexPitch");
static const V lit59("flexEnergy");
static const V lit60("flexRelease");
static const V lit61("bodyRigidity");
static const V lit62("bodyFlexFactor");
static const V lit63("bodyTorsionFactor");
static const V lit64("bodyBendingFactor");
static const V lit65("bodyDampingFactor");
static const V lit66("bodyTauScale");
static const V lit67("bodyReactionScale");
static const V lit68("bodyReadTimer");
static const V lit69("casterGripFL");
static const V lit70("casterGripFR");
static const V lit71("casterGripAvg");
static const V lit72("casterGripLoss");
static const V lit73("casterToeFL");
static const V lit74("casterToeFR");
static const V lit75("casterToeAbs");
static const V lit76("casterCamberFL");
static const V lit77("casterCamberFR");
static const V lit78("casterCamberAbs");
static const V lit79("casterScale");
static const V lit80("frontAxisAnchor");
static const V lit81("frontAxisAuthority");
static const V lit82("frontAxisYawResist");
static const V lit83("frontAxisSteerWeight");
static const V lit84("frontAxisSlipDamp");
static const V lit85("roadShock");
static const V lit86("roadSurfaceLimit");
static const V lit87("pathLoss");
static const V lit88("tireDelivery");
static const V lit89("wheelsValid");
static const V lit90("frontWheelsValid");
static const V lit91("bodyLinked");
static const V lit92("flexLinked");
static const V lit93("casterLinked");
static const V lit94("frontAxisLinked");
static const V lit95("roadLinked");
static const V lit96("forceLinked");
static const V lit97("status");
static const V lit98("INIT");
static const V lit99("updateCount");
static const V lit100("debugStoreTimer");
static const V lit101("debugStoreNow");
static const V lit102("state");
static const V lit103("debug");
static const V lit104("huge");
static const V lit105("max");
static const V lit106("safeField");
static const V lit107("safeLoadRaw");
static const V lit108("safeStore");
static const V lit109("getCar");
static const V lit110("wheels");
static const V lit111("velocity");
static const V lit112("x");
static const V lit113("y");
static const V lit114("z");
static const V lit115("sqrt");
static const V lit116("steer");
static const V lit117("ngp_driver_steer");
static const V lit118("Fy");
static const V lit119("lateralForce");
static const V lit120("forceY");
static const V lit121("ngp_hub_force_lat_");
static const V lit122("ngp_tire_lat_");
static const V lit123("ngp_lat_");
static const V lit124("ngp_cp_lat_");
static const V lit125("ngp_tire_force_lat_");
static const V lit126("Fx");
static const V lit127("longitudinalForce");
static const V lit128("forceX");
static const V lit129("ngp_hub_force_long_");
static const V lit130("ngp_tire_long_");
static const V lit131("ngp_long_");
static const V lit132("ngp_cp_long_");
static const V lit133("ngp_tire_force_long_");
static const V lit134("Mz");
static const V lit135("aligningTorque");
static const V lit136("aligningMoment");
static const V lit137("ngp_caster_aligning_torque_");
static const V lit138("ngp_aligning_torque_");
static const V lit139("ngp_tire_mz_");
static const V lit140("ngp_steer_mz_");
static const V lit141("ngp_tire_aligning_");
static const V lit142("ngp_body_steer");
static const V lit143("ngp_steer_body");
static const V lit144("ngp_chassis_body_steer");
static const V lit145("ngp_chassis_flex_delay");
static const V lit146("ngp_flex_delay");
static const V lit147("ngp_chassis_delay");
static const V lit148("ngp_chassis_flex_yaw");
static const V lit149("ngp_flex_yaw");
static const V lit150("ngp_yaw_deflection");
static const V lit151("ngp_chassis_flex_roll");
static const V lit152("ngp_flex_roll");
static const V lit153("ngp_body_roll");
static const V lit154("ngp_chassis_flex_pitch");
static const V lit155("ngp_flex_pitch");
static const V lit156("ngp_body_pitch");
static const V lit157("ngp_chassis_flex_energy");
static const V lit158("ngp_flex_energy");
static const V lit159("ngp_chassis_energy");
static const V lit160("ngp_chassis_flex_release");
static const V lit161("ngp_flex_release");
static const V lit162("ngp_chassis_release");
static const V lit163("ngp_body_rigidity_update_count");
static const V lit164("ngp_body_rigidity");
static const V lit165("ngp_body_flex_factor");
static const V lit166("ngp_body_torsion_factor");
static const V lit167("ngp_body_bending_factor");
static const V lit168("ngp_body_damping_factor");
static const V lit169("ngp_caster_grip_0");
static const V lit170("ngp_caster_effect_grip_0");
static const V lit171("ngp_caster_camber_grip_0");
static const V lit172("ngp_caster_grip_1");
static const V lit173("ngp_caster_effect_grip_1");
static const V lit174("ngp_caster_camber_grip_1");
static const V lit175("ngp_caster_total_toe_0");
static const V lit176("ngp_caster_toe_0");
static const V lit177("ngp_ca_toe_0");
static const V lit178("ngp_caster_total_toe_1");
static const V lit179("ngp_caster_toe_1");
static const V lit180("ngp_ca_toe_1");
static const V lit181("ngp_caster_total_camber_0");
static const V lit182("ngp_caster_camber_0");
static const V lit183("ngp_ca_camber_0");
static const V lit184("ngp_caster_total_camber_1");
static const V lit185("ngp_caster_camber_1");
static const V lit186("ngp_ca_camber_1");
static const V lit187("abs");
static const V lit188("ngp_front_axis_anchor");
static const V lit189("ngp_faa_anchor");
static const V lit190("ngp_front_axis_authority");
static const V lit191("ngp_faa_authority");
static const V lit192("ngp_front_axis_yaw_resist");
static const V lit193("ngp_faa_yaw_resist");
static const V lit194("ngp_front_axis_steer_weight");
static const V lit195("ngp_faa_steer_weight");
static const V lit196("ngp_front_axis_slip_damp");
static const V lit197("ngp_faa_slip_damp");
static const V lit198("ngp_road_shock");
static const V lit199("ngp_rii_avg_shock");
static const V lit200("ngp_road_input_avg_impact");
static const V lit201("ngp_road_surface_limit");
static const V lit202("ngp_rii_avg_surface_limit");
static const V lit203("ngp_load_path_avg_loss");
static const V lit204("ngp_lp_avg_loss");
static const V lit205("ngp_road_path_loss");
static const V lit206("ngp_load_path_front_delivery");
static const V lit207("ngp_lp_front_delivery");
static const V lit208("ngp_road_tire_delivery");
static const V lit209("ngp_steering_dynamics_status");
static const V lit210("UNKNOWN");
static const V lit211("ngp_steering_dynamics_update_count");
static const V lit212("ngp_steering_dynamics_wheels_valid");
static const V lit213("ngp_steer_mech");
static const V lit214("ngp_steer_reaction");
static const V lit215("ngp_steer_rack");
static const V lit216("ngp_steer_input");
static const V lit217("ngp_steer_effective_input");
static const V lit218("ngp_sd_output");
static const V lit219("ngp_sd_reaction");
static const V lit220("ngp_sd_rack");
static const V lit221("ngp_sd_input");
static const V lit222("ngp_sd_effective_input");
static const V lit223("ngp_sd_friction");
static const V lit224("ngp_steer_front_axis_anchor");
static const V lit225("ngp_steer_front_axis_authority");
static const V lit226("ngp_steer_front_axis_yaw_resist");
static const V lit227("ngp_steer_front_axis_slip_damp");
static const V lit228("ngp_steer_tierod");
static const V lit229("ngp_steer_knuckle");
static const V lit230("ngp_steer_friction");
static const V lit231("ngp_steer_fx");
static const V lit232("ngp_steer_fy");
static const V lit233("ngp_steer_mz");
static const V lit234("ngp_steer_speed");
static const V lit235("ngp_steer_body_linked");
static const V lit236("ngp_steer_flex_linked");
static const V lit237("ngp_steer_caster_linked");
static const V lit238("ngp_steer_front_axis_linked");
static const V lit239("ngp_steer_road_linked");
static const V lit240("ngp_steer_force_linked");
static const V lit241("ngp_steer_body_rigidity");
static const V lit242("ngp_steer_body_flex_factor");
static const V lit243("ngp_steer_body_tau_scale");
static const V lit244("ngp_steer_body_reaction_scale");
static const V lit245("ngp_steer_body_steer");
static const V lit246("ngp_steer_flex_delay");
static const V lit247("ngp_steer_flex_yaw");
static const V lit248("ngp_steer_flex_energy");
static const V lit249("ngp_steer_flex_release");
static const V lit250("ngp_steer_caster_grip_avg");
static const V lit251("ngp_steer_caster_grip_loss");
static const V lit252("ngp_steer_caster_scale");
static const V lit253("ngp_steer_road_shock");
static const V lit254("ngp_steer_path_loss");
static const V lit255("ngp_steer_tire_delivery");
static const V lit256("init");
static const V lit257("update");
static const V lit258("BAD DT");
static const V lit259("NO CAR");
static const V lit260("NO WHEELS");
static const V lit261("NO FRONT WHEELS");
static const V lit262("RUNNING");
static const V lit263("getOutput");
static const V lit264("getReaction");
static const V lit265("getRack");
static const V lit266("getTieRod");
static const V lit267("getKnuckle");
static const V lit268("getEffectiveInput");
static const V lit269("getFrontAxisAuthority");
static const V lit270("getState");
static const V lit271("debugStr");
static const V lit272("format");
static const V lit273("Status %s / Count %.0f / Wheels %s / Front %s\n");
static const V lit274("Input %.3f Eff %.3f Rack %.3f Out %.3f\n");
static const V lit275("Tie %.2f Knuckle %.2f React %.3f Fric %.3f\n");
static const V lit276("Body:%s Flex:%s Cast:%s FAA:%s Road:%s Force:%s\n");
static const V lit277("Tau %.2f ReactScale %.2f Cast %.2f FAA %.2f Shock %.2f");
static const V lit278("OK");
static const V lit279("NIL");
V load_steering_dynamics(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(38);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.045));set(z,lit3,V(0.03));set(z,lit4,V(0.04));set(z,lit5,V(8e-05));set(z,lit6,V(0.00035));set(z,lit7,V(0.08));set(z,lit8,V(0.075));set(z,lit9,V(0.01));set(z,lit10,V(1.5));set(z,lit11,V(2.0));set(z,lit12,V(0.32));set(z,lit13,V(0.28));set(z,lit14,V(0.22));set(z,lit15,V(0.08));set(z,lit16,V(0.18));set(z,lit17,V(0.22));set(z,lit18,V(1.6));set(z,lit19,V(0.25));set(z,lit20,V(0.36));set(z,lit21,V(0.22));set(z,lit22,V(0.12));set(z,lit23,V(0.08));set(z,lit24,V(0.1));set(z,lit25,V(0.06));set(z,lit26,V(0.82));set(z,lit27,V(1.32));set(z,lit28,V(0.84));set(z,lit29,V(1.18));set(z,lit30,V(0.16));set(z,lit31,V(0.018));set(z,lit32,V(0.01));set(z,lit33,V(0.12));set(z,lit34,V(0.86));set(z,lit35,V(1.14));set(z,lit36,V(0.055));set(z,lit37,V(0.16));set(z,lit38,V(0.08));set(z,lit39,V(0.07));set(z,lit40,V(0.08));set(z,lit41,V(0.12));set(z,lit42,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,V(0.0));set(z,lit46,V(0.0));set(z,lit47,V(0.0));set(z,lit48,V(0.0));set(z,lit7,V(0.0));set(z,lit49,V(0.0));set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(1.0));set(z,lit62,V(1.0));set(z,lit63,V(1.0));set(z,lit64,V(1.0));set(z,lit65,V(1.0));set(z,lit66,V(1.0));set(z,lit67,V(1.0));set(z,lit68,V(999.0));set(z,lit69,V(1.0));set(z,lit70,V(1.0));set(z,lit71,V(1.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(1.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(1.0));set(z,lit89,V(false));set(z,lit90,V(false));set(z,lit91,V(false));set(z,lit92,V(false));set(z,lit93,V(false));set(z,lit94,V(false));set(z,lit95,V(false));set(z,lit96,V(false));set(z,lit97,lit98);set(z,lit99,V(0.0));set(z,lit100,V(999.0));set(z,lit101,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit102)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit103)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit104)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit104)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t12=first(call(e->slot(1,3),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t12));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t13=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t13));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(V(1.0)))};
}
if(truth(gt(e->slot(0,0),V(0.0)))){return Args{V(1.0)};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t15=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t16=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t17=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t17));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit105),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
{V t18=get(e->slot(0,0),lit106);e->slot(0,7)=std::move(t18);}
{V t19=get(e->slot(0,0),lit107);e->slot(0,8)=std::move(t19);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t20=first(call(e->slot(1,8),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t20);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()});
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t23=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t23);}
{double t24=num(V(1.0)),t25=num(length(e->slot(0,1))),t26=num(V(1.0));for(double t27=t24;(t26>0?t27<=t25:t27>=t25);t27+=t26){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t27);{V t28=first(call(e->slot(2,8),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t28);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t29=e->slot(1,0);return !truth(t29)?V(0.0):t29;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t30=e->slot(0,0);return !truth(t30)?V(0.0):t30;})(),V()};
return Args{};});
{V t31=get(e->slot(0,0),lit108);e->slot(0,11)=std::move(t31);}
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t32=V(!truth(e->get("ac")));return !truth(t32)?V(!truth(get(e->get("ac"),lit109))):t32;})())){return Args{V()};
}
{Args t33=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit109),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t33,0);e->slot(0,1)=arg(t33,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t34=add(([&](){V t35=get(e->slot(1,2),lit100);return !truth(t35)?V(0.0):t35;})(),([&](){V t36=e->slot(0,0);return !truth(t36)?V(0.0):t36;})());refs[0].put(std::move(t34));}
if(truth(ge(get(e->slot(1,2),lit100),get(get(e->slot(1,1),lit1),lit42)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t37=V(0.0);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t38=V(true);refs[0].put(std::move(t38));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t39=V(false);refs[0].put(std::move(t39));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,7),Args{e->slot(0,0),lit110,V()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t40=first(call(e->slot(1,14),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t40);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t41=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t42=get(e->slot(1,2),e->slot(1,1));return !truth(t42)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t42;})()};
return Args{};})});e->slot(0,3)=arg(t41,0);e->slot(0,4)=arg(t41,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t43=first(call(e->slot(1,7),Args{e->slot(0,0),lit53,V()}));e->slot(0,1)=std::move(t43);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,3),Args{e->slot(0,1),V(0.0)});
}
{V t44=V();e->slot(0,2)=std::move(t44);}
if(truth(ne(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t45=first(call(e->slot(2,3),Args{e->slot(1,2),V(0.0)}));e->slot(0,0)=std::move(t45);}
if(truth(([&](){V t46=gt(e->slot(0,0),V(0.0));return truth(t46)?lt(e->slot(0,0),V(120.0)):t46;})())){return Args{mul(e->slot(0,0),V(3.6))};
}
return Args{e->slot(0,0)};
}
{V t47=first(call(e->slot(1,7),Args{e->slot(0,0),lit111,V()}));e->slot(0,3)=std::move(t47);}
if(truth(e->slot(0,3))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t48=first(call(e->slot(2,3),Args{first(call(e->slot(2,7),Args{e->slot(1,3),lit112,V(0.0)})),V(0.0)}));e->slot(0,0)=std::move(t48);}
{V t49=first(call(e->slot(2,3),Args{first(call(e->slot(2,7),Args{e->slot(1,3),lit113,V(0.0)})),V(0.0)}));e->slot(0,1)=std::move(t49);}
{V t50=first(call(e->slot(2,3),Args{first(call(e->slot(2,7),Args{e->slot(1,3),lit114,V(0.0)})),V(0.0)}));e->slot(0,2)=std::move(t50);}
return Args{mul(first(call(get(e->get("math"),lit115),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))})),V(3.6))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t51=first(call(e->slot(1,7),Args{e->slot(0,0),lit116,V()}));e->slot(0,1)=std::move(t51);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t52=V();refs[0].put(std::move(t52));}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t53=first(call(e->slot(1,8),Args{lit117}));refs[0].put(std::move(t53));}
}
return call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(1.5))),V(1.5)});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t54=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t54);}
{double t55=num(V(1.0)),t56=num(length(e->slot(0,1))),t57=num(V(1.0));for(double t58=t55;(t57>0?t58<=t56:t58>=t56);t58+=t57){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t58);{V t59=first(call(e->slot(2,7),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t59);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,3),Args{e->slot(0,1),V(0.0)});
}
}}
return Args{V()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t60=first(call(e->slot(1,18),Args{e->slot(0,1),lit50,lit118,lit119,lit120}));e->slot(0,2)=std::move(t60);}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
{V t61=first(call(e->slot(1,10),Args{V(0.0),concat(lit121,e->slot(0,0)),concat(lit122,e->slot(0,0)),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0)),concat(lit125,e->slot(0,0))}));e->slot(0,3)=std::move(t61);}
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t62=first(call(e->slot(1,18),Args{e->slot(0,1),lit52,lit126,lit127,lit128}));e->slot(0,2)=std::move(t62);}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
{V t63=first(call(e->slot(1,10),Args{V(0.0),concat(lit129,e->slot(0,0)),concat(lit130,e->slot(0,0)),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0)),concat(lit133,e->slot(0,0))}));e->slot(0,3)=std::move(t63);}
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t64=first(call(e->slot(1,18),Args{e->slot(0,1),lit51,lit134,lit135,lit136}));e->slot(0,2)=std::move(t64);}
if(truth(ne(e->slot(0,2),V()))){return Args{e->slot(0,2)};
}
{V t65=first(call(e->slot(1,10),Args{V(0.0),concat(lit137,e->slot(0,0)),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0)),concat(lit140,e->slot(0,0)),concat(lit141,e->slot(0,0))}));e->slot(0,3)=std::move(t65);}
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t66=first(call(e->slot(1,15),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t66);}
{V t67=first(call(e->slot(1,15),Args{e->slot(0,0),V(1.0)}));e->slot(0,2)=std::move(t67);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t68=([&](){V t69=ne(e->slot(0,1),V());return truth(t69)?ne(e->slot(0,2),V()):t69;})();refs[0].put(std::move(t68));}
{V t70=first(call(e->slot(1,19),Args{V(0.0),e->slot(0,1)}));e->slot(0,3)=std::move(t70);}
{V t71=first(call(e->slot(1,19),Args{V(1.0),e->slot(0,2)}));e->slot(0,4)=std::move(t71);}
{V t72=first(call(e->slot(1,20),Args{V(0.0),e->slot(0,1)}));e->slot(0,5)=std::move(t72);}
{V t73=first(call(e->slot(1,20),Args{V(1.0),e->slot(0,2)}));e->slot(0,6)=std::move(t73);}
{V t74=first(call(e->slot(1,21),Args{V(0.0),e->slot(0,1)}));e->slot(0,7)=std::move(t74);}
{V t75=first(call(e->slot(1,21),Args{V(1.0),e->slot(0,2)}));e->slot(0,8)=std::move(t75);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t76=([&](){V t77=([&](){V t78=([&](){V t79=([&](){V t80=([&](){V t81=ne(e->slot(0,3),V(0.0));return !truth(t81)?ne(e->slot(0,4),V(0.0)):t81;})();return !truth(t80)?ne(e->slot(0,5),V(0.0)):t80;})();return !truth(t79)?ne(e->slot(0,6),V(0.0)):t79;})();return !truth(t78)?ne(e->slot(0,7),V(0.0)):t78;})();return !truth(t77)?ne(e->slot(0,8),V(0.0)):t77;})();refs[0].put(std::move(t76));}
return Args{mul(add(e->slot(0,3),e->slot(0,4)),V(0.5)),mul(add(e->slot(0,7),e->slot(0,8)),V(0.5)),mul(add(e->slot(0,5),e->slot(0,6)),V(0.5))};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;{Args t82=call(e->slot(1,10),Args{V(0.0),lit142,lit143,lit144});e->slot(0,0)=arg(t82,0);e->slot(0,1)=arg(t82,1);}
{Args t83=call(e->slot(1,10),Args{V(0.0),lit145,lit146,lit147});e->slot(0,2)=arg(t83,0);e->slot(0,3)=arg(t83,1);}
{Args t84=call(e->slot(1,10),Args{V(0.0),lit148,lit149,lit150});e->slot(0,4)=arg(t84,0);e->slot(0,5)=arg(t84,1);}
{Args t85=call(e->slot(1,10),Args{V(0.0),lit151,lit152,lit153});e->slot(0,6)=arg(t85,0);e->slot(0,7)=arg(t85,1);}
{Args t86=call(e->slot(1,10),Args{V(0.0),lit154,lit155,lit156});e->slot(0,8)=arg(t86,0);e->slot(0,9)=arg(t86,1);}
{Args t87=call(e->slot(1,10),Args{V(0.0),lit157,lit158,lit159});e->slot(0,10)=arg(t87,0);e->slot(0,11)=arg(t87,1);}
{Args t88=call(e->slot(1,10),Args{V(0.0),lit160,lit161,lit162});e->slot(0,12)=arg(t88,0);e->slot(0,13)=arg(t88,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t89=([&](){V t90=([&](){V t91=([&](){V t92=([&](){V t93=([&](){V t94=([&](){V t95=ne(e->slot(0,1),V());return !truth(t95)?ne(e->slot(0,3),V()):t95;})();return !truth(t94)?ne(e->slot(0,5),V()):t94;})();return !truth(t93)?ne(e->slot(0,7),V()):t93;})();return !truth(t92)?ne(e->slot(0,9),V()):t92;})();return !truth(t91)?ne(e->slot(0,11),V()):t91;})();return !truth(t90)?ne(e->slot(0,13),V()):t90;})();refs[0].put(std::move(t89));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t96=first(call(e->slot(1,4),Args{e->slot(0,0),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t97=first(call(e->slot(1,4),Args{e->slot(0,2),V(-num(V(1.2))),V(1.2)}));refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t98=first(call(e->slot(1,4),Args{e->slot(0,4),V(-num(V(1.2))),V(1.2)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t99=first(call(e->slot(1,4),Args{e->slot(0,6),V(-num(V(1.2))),V(1.2)}));refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t100=first(call(e->slot(1,4),Args{e->slot(0,8),V(-num(V(1.2))),V(1.2)}));refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t101=first(call(e->slot(1,4),Args{e->slot(0,10),V(0.0),V(1.5)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t102=first(call(e->slot(1,4),Args{e->slot(0,12),V(0.0),V(1.5)}));refs[0].put(std::move(t102));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t103=add(([&](){V t104=get(e->slot(1,2),lit68);return !truth(t104)?V(999.0):t104;})(),([&](){V t105=e->slot(0,0);return !truth(t105)?V(0.0):t105;})());refs[0].put(std::move(t103));}
if(truth(([&](){V t106=get(e->slot(1,2),lit91);return truth(t106)?lt(get(e->slot(1,2),lit68),get(get(e->slot(1,1),lit1),lit19)):t106;})())){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t107=V(0.0);refs[0].put(std::move(t107));}
{V t108=first(call(e->slot(1,8),Args{lit163}));e->slot(0,1)=std::move(t108);}
{V t109=first(call(e->slot(1,8),Args{lit164}));e->slot(0,2)=std::move(t109);}
{V t110=first(call(e->slot(1,8),Args{lit165}));e->slot(0,3)=std::move(t110);}
{V t111=first(call(e->slot(1,8),Args{lit166}));e->slot(0,4)=std::move(t111);}
{V t112=first(call(e->slot(1,8),Args{lit167}));e->slot(0,5)=std::move(t112);}
{V t113=first(call(e->slot(1,8),Args{lit168}));e->slot(0,6)=std::move(t113);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t114=([&](){V t115=([&](){V t116=([&](){V t117=([&](){V t118=([&](){V t119=ne(e->slot(0,1),V());return !truth(t119)?ne(e->slot(0,2),V()):t119;})();return !truth(t118)?ne(e->slot(0,3),V()):t118;})();return !truth(t117)?ne(e->slot(0,4),V()):t117;})();return !truth(t116)?ne(e->slot(0,5),V()):t116;})();return !truth(t115)?ne(e->slot(0,6),V()):t115;})();refs[0].put(std::move(t114));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t120=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t120));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t121=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t121));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t122=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,4),V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t123=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,5),V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t124=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t124));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);{V t125=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t125);}
if(truth(V(!truth(get(e->slot(1,2),lit91))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t126=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit66),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t127=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit67),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t127));}
return Args{};
}
{V t128=first(call(e->slot(1,4),Args{sub(([&](){V t129=get(e->slot(1,2),lit62);return !truth(t129)?V(1.0):t129;})(),V(1.0)),V(0.0),V(0.8)}));e->slot(0,2)=std::move(t128);}
{V t130=first(call(e->slot(1,4),Args{sub(([&](){V t131=get(e->slot(1,2),lit63);return !truth(t131)?V(1.0):t131;})(),V(1.0)),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t130);}
{V t132=first(call(e->slot(1,4),Args{sub(([&](){V t133=get(e->slot(1,2),lit61);return !truth(t133)?V(1.0):t133;})(),V(1.0)),V(0.0),V(0.35)}));e->slot(0,4)=std::move(t132);}
{V t134=first(call(e->slot(1,4),Args{sub(([&](){V t135=get(e->slot(1,2),lit65);return !truth(t135)?V(1.0):t135;})(),V(1.0)),V(0.0),V(0.8)}));e->slot(0,5)=std::move(t134);}
{V t136=sub(add(add(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit20))),mul(e->slot(0,3),get(e->slot(0,1),lit21))),mul(e->slot(0,5),get(e->slot(0,1),lit22))),mul(e->slot(0,4),get(e->slot(0,1),lit23)));e->slot(0,6)=std::move(t136);}
{V t137=sub(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit24))),mul(e->slot(0,4),get(e->slot(0,1),lit25)));e->slot(0,7)=std::move(t137);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t138=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit66),first(call(e->slot(1,4),Args{e->slot(0,6),get(e->slot(0,1),lit26),get(e->slot(0,1),lit27)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t139=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit67),first(call(e->slot(1,4),Args{e->slot(0,7),get(e->slot(0,1),lit28),get(e->slot(0,1),lit29)})),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t139));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;{Args t140=call(e->slot(1,10),Args{V(1.0),lit169,lit170,lit171});e->slot(0,0)=arg(t140,0);e->slot(0,1)=arg(t140,1);}
{Args t141=call(e->slot(1,10),Args{V(1.0),lit172,lit173,lit174});e->slot(0,2)=arg(t141,0);e->slot(0,3)=arg(t141,1);}
{Args t142=call(e->slot(1,10),Args{V(0.0),lit175,lit176,lit177});e->slot(0,4)=arg(t142,0);e->slot(0,5)=arg(t142,1);}
{Args t143=call(e->slot(1,10),Args{V(0.0),lit178,lit179,lit180});e->slot(0,6)=arg(t143,0);e->slot(0,7)=arg(t143,1);}
{Args t144=call(e->slot(1,10),Args{V(0.0),lit181,lit182,lit183});e->slot(0,8)=arg(t144,0);e->slot(0,9)=arg(t144,1);}
{Args t145=call(e->slot(1,10),Args{V(0.0),lit184,lit185,lit186});e->slot(0,10)=arg(t145,0);e->slot(0,11)=arg(t145,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t146=([&](){V t147=([&](){V t148=([&](){V t149=([&](){V t150=([&](){V t151=ne(e->slot(0,1),V());return !truth(t151)?ne(e->slot(0,3),V()):t151;})();return !truth(t150)?ne(e->slot(0,5),V()):t150;})();return !truth(t149)?ne(e->slot(0,7),V()):t149;})();return !truth(t148)?ne(e->slot(0,9),V()):t148;})();return !truth(t147)?ne(e->slot(0,11),V()):t147;})();refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t152=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.4),V(1.1)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t153=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.4),V(1.1)}));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t154=mul(add(get(e->slot(1,2),lit69),get(e->slot(1,2),lit70)),V(0.5));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t155=first(call(e->slot(1,4),Args{sub(V(1.0),get(e->slot(1,2),lit71)),V(0.0),V(0.6)}));refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t156=e->slot(0,4);refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t157=e->slot(0,6);refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t158=mul(add(first(call(get(e->get("math"),lit187),Args{e->slot(0,4)})),first(call(get(e->get("math"),lit187),Args{e->slot(0,6)}))),V(0.5));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t159=e->slot(0,8);refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t160=e->slot(0,10);refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t161=mul(add(first(call(get(e->get("math"),lit187),Args{e->slot(0,8)})),first(call(get(e->get("math"),lit187),Args{e->slot(0,10)}))),V(0.5));refs[0].put(std::move(t161));}
{V t162=add(add(add(V(1.0),mul(get(e->slot(1,2),lit72),get(get(e->slot(1,1),lit1),lit30))),mul(get(e->slot(1,2),lit75),get(get(e->slot(1,1),lit1),lit31))),mul(get(e->slot(1,2),lit78),get(get(e->slot(1,1),lit1),lit32)));e->slot(0,12)=std::move(t162);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t163=first(call(e->slot(1,4),Args{e->slot(0,12),get(get(e->slot(1,1),lit1),lit34),get(get(e->slot(1,1),lit1),lit35)}));refs[0].put(std::move(t163));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;{Args t164=call(e->slot(1,10),Args{V(0.0),lit188,lit189});e->slot(0,0)=arg(t164,0);e->slot(0,1)=arg(t164,1);}
{Args t165=call(e->slot(1,10),Args{V(0.0),lit190,lit191});e->slot(0,2)=arg(t165,0);e->slot(0,3)=arg(t165,1);}
{Args t166=call(e->slot(1,10),Args{V(0.0),lit192,lit193});e->slot(0,4)=arg(t166,0);e->slot(0,5)=arg(t166,1);}
{Args t167=call(e->slot(1,10),Args{V(0.0),lit194,lit195});e->slot(0,6)=arg(t167,0);e->slot(0,7)=arg(t167,1);}
{Args t168=call(e->slot(1,10),Args{V(0.0),lit196,lit197});e->slot(0,8)=arg(t168,0);e->slot(0,9)=arg(t168,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t169=([&](){V t170=([&](){V t171=([&](){V t172=([&](){V t173=ne(e->slot(0,1),V());return !truth(t173)?ne(e->slot(0,3),V()):t173;})();return !truth(t172)?ne(e->slot(0,5),V()):t172;})();return !truth(t171)?ne(e->slot(0,7),V()):t171;})();return !truth(t170)?ne(e->slot(0,9),V()):t170;})();refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t174=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0),V(1.25)}));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t175=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(1.25)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t176=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.15)}));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t177=first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t178=first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0),V(1.0)}));refs[0].put(std::move(t178));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;{Args t179=call(e->slot(1,10),Args{V(0.0),lit198,lit199,lit200});e->slot(0,0)=arg(t179,0);e->slot(0,1)=arg(t179,1);}
{Args t180=call(e->slot(1,10),Args{V(0.0),lit201,lit202});e->slot(0,2)=arg(t180,0);e->slot(0,3)=arg(t180,1);}
{Args t181=call(e->slot(1,10),Args{V(0.0),lit203,lit204,lit205});e->slot(0,4)=arg(t181,0);e->slot(0,5)=arg(t181,1);}
{Args t182=call(e->slot(1,10),Args{V(1.0),lit206,lit207,lit208});e->slot(0,6)=arg(t182,0);e->slot(0,7)=arg(t182,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t183=([&](){V t184=([&](){V t185=([&](){V t186=ne(e->slot(0,1),V());return !truth(t186)?ne(e->slot(0,3),V()):t186;})();return !truth(t185)?ne(e->slot(0,5),V()):t185;})();return !truth(t184)?ne(e->slot(0,7),V()):t184;})();refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t187=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0),V(1.0)}));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t188=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(1.0)}));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t189=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t190=first(call(e->slot(1,4),Args{e->slot(0,6),V(0.0),V(1.2)}));refs[0].put(std::move(t190));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t191=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t191);}
{V t192=mul(mul(mul(get(e->slot(1,2),lit83),get(e->slot(1,2),lit81)),first(call(e->slot(1,5),Args{e->slot(0,0)}))),get(e->slot(0,1),lit36));e->slot(0,2)=std::move(t192);}
{V t193=add(add(add(sub(add(e->slot(0,0),mul(get(e->slot(1,2),lit54),get(e->slot(0,1),lit12))),mul(get(e->slot(1,2),lit55),get(e->slot(0,1),lit13))),mul(get(e->slot(1,2),lit56),get(e->slot(0,1),lit14))),mul(get(e->slot(1,2),lit57),get(e->slot(0,1),lit15))),e->slot(0,2));e->slot(0,3)=std::move(t193);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t194=mul(e->slot(0,3),sub(V(1.0),mul(get(e->slot(1,2),lit84),V(0.06))));refs[0].put(std::move(t194));}
return call(e->slot(1,4),Args{e->slot(0,3),V(-num(get(e->slot(0,1),lit18))),get(e->slot(0,1),lit18)});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t195=mul(([&](){V t196=get(e->slot(1,2),lit66);return !truth(t196)?V(1.0):t196;})(),add(add(V(1.0),mul(get(e->slot(1,2),lit84),V(0.06))),mul(get(e->slot(1,2),lit85),V(0.04))));e->slot(0,2)=std::move(t195);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t197=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit45),e->slot(0,0),mul(get(get(e->slot(1,1),lit1),lit2),e->slot(0,2)),e->slot(0,1)}));refs[0].put(std::move(t197));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t198=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit46),e->slot(0,0),get(get(e->slot(1,1),lit1),lit3),e->slot(0,1)}));refs[0].put(std::move(t198));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t199=add(e->slot(0,0),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit8)));e->slot(0,3)=std::move(t199);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t200=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit47),e->slot(0,3),get(get(e->slot(1,1),lit1),lit4),e->slot(0,2)}));refs[0].put(std::move(t200));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t201=add(mul(get(e->slot(1,2),lit46),get(get(e->slot(1,1),lit1),lit5)),mul(get(e->slot(1,2),lit47),get(get(e->slot(1,1),lit1),lit6)));e->slot(0,0)=std::move(t201);}
{V t202=mul(mul(mul(get(e->slot(1,2),lit82),get(e->slot(1,2),lit81)),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit45)}))),get(get(e->slot(1,1),lit1),lit37));e->slot(0,1)=std::move(t202);}
{V t203=mul(mul(get(e->slot(1,2),lit85),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit45)}))),get(get(e->slot(1,1),lit1),lit39));e->slot(0,2)=std::move(t203);}
{V t204=mul(mul(mul(add(add(e->slot(0,0),e->slot(0,1)),e->slot(0,2)),([&](){V t205=get(e->slot(1,2),lit67);return !truth(t205)?V(1.0):t205;})()),([&](){V t206=get(e->slot(1,2),lit79);return !truth(t206)?V(1.0):t206;})()),first(call(e->slot(1,4),Args{sub(add(V(0.84),mul(get(e->slot(1,2),lit88),V(0.16))),mul(get(e->slot(1,2),lit87),get(get(e->slot(1,1),lit1),lit40))),V(0.75),V(1.1)})));e->slot(0,3)=std::move(t204);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t207=sub(add(e->slot(0,3),mul(mul(get(e->slot(1,2),lit59),get(get(e->slot(1,1),lit1),lit16)),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit45)})))),mul(mul(get(e->slot(1,2),lit60),get(get(e->slot(1,1),lit1),lit17)),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit45)}))));refs[0].put(std::move(t207));}
return call(e->slot(1,4),Args{e->slot(0,3),V(-num(get(get(e->slot(1,1),lit1),lit10))),get(get(e->slot(1,1),lit1),lit10)});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(le(first(call(get(e->get("math"),lit187),Args{get(e->slot(1,2),lit45)})),get(get(e->slot(1,1),lit1),lit9)))){return Args{V(0.0)};
}
{V t208=add(V(1.0),mul(get(e->slot(1,2),lit72),get(get(e->slot(1,1),lit1),lit33)));e->slot(0,0)=std::move(t208);}
{V t209=add(V(1.0),mul(first(call(e->slot(1,4),Args{get(e->slot(1,2),lit59),V(0.0),V(1.0)})),V(0.06)));e->slot(0,1)=std::move(t209);}
{V t210=add(add(V(1.0),mul(get(e->slot(1,2),lit83),get(get(e->slot(1,1),lit1),lit38))),mul(get(e->slot(1,2),lit86),V(0.05)));e->slot(0,2)=std::move(t210);}
return Args{mul(mul(mul(mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit45)})),get(get(e->slot(1,1),lit1),lit7)),e->slot(0,0)),e->slot(0,1)),e->slot(0,2))};
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t211=sub(add(get(e->slot(1,2),lit45),get(e->slot(1,2),lit48)),get(e->slot(1,2),lit7));e->slot(0,0)=std::move(t211);}
return call(e->slot(1,4),Args{e->slot(0,0),V(-num(get(get(e->slot(1,1),lit1),lit11))),get(get(e->slot(1,1),lit1),lit11)});
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t212=get(get(e->slot(1,1),lit1),lit41);e->slot(0,1)=std::move(t212);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t213=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit43),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t214=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit44),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t215=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit45),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t216=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit46),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t217=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit47),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t218=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit48),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit7)};V t219=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit7),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t220=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit49),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t221=V(0.0);refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t222=V(0.0);refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t223=V(0.0);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t224=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit54),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t225=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit55),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t226=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit56),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t227=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit57),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t228=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit58),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t229=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit59),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t230=first(call(e->slot(1,6),Args{get(e->slot(1,2),lit60),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t230));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,11),Args{lit209,([&](){V t231=get(e->slot(1,2),lit97);return !truth(t231)?lit210:t231;})()});
call(e->slot(1,11),Args{lit211,([&](){V t232=get(e->slot(1,2),lit99);return !truth(t232)?V(0.0):t232;})()});
call(e->slot(1,11),Args{lit212,([&](){V t233=([&](){V t234=get(e->slot(1,2),lit89);return truth(t234)?V(1.0):t234;})();return !truth(t233)?V(0.0):t233;})()});
call(e->slot(1,11),Args{lit213,([&](){V t235=get(e->slot(1,2),lit49);return !truth(t235)?V(0.0):t235;})()});
call(e->slot(1,11),Args{lit214,([&](){V t236=get(e->slot(1,2),lit48);return !truth(t236)?V(0.0):t236;})()});
call(e->slot(1,11),Args{lit215,([&](){V t237=get(e->slot(1,2),lit45);return !truth(t237)?V(0.0):t237;})()});
call(e->slot(1,11),Args{lit216,([&](){V t238=get(e->slot(1,2),lit43);return !truth(t238)?V(0.0):t238;})()});
call(e->slot(1,11),Args{lit217,([&](){V t239=get(e->slot(1,2),lit44);return !truth(t239)?V(0.0):t239;})()});
call(e->slot(1,11),Args{lit218,([&](){V t240=get(e->slot(1,2),lit49);return !truth(t240)?V(0.0):t240;})()});
call(e->slot(1,11),Args{lit219,([&](){V t241=get(e->slot(1,2),lit48);return !truth(t241)?V(0.0):t241;})()});
call(e->slot(1,11),Args{lit220,([&](){V t242=get(e->slot(1,2),lit45);return !truth(t242)?V(0.0):t242;})()});
call(e->slot(1,11),Args{lit221,([&](){V t243=get(e->slot(1,2),lit43);return !truth(t243)?V(0.0):t243;})()});
call(e->slot(1,11),Args{lit222,([&](){V t244=get(e->slot(1,2),lit44);return !truth(t244)?V(0.0):t244;})()});
call(e->slot(1,11),Args{lit223,([&](){V t245=get(e->slot(1,2),lit7);return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,11),Args{lit224,([&](){V t246=get(e->slot(1,2),lit80);return !truth(t246)?V(0.0):t246;})()});
call(e->slot(1,11),Args{lit225,([&](){V t247=get(e->slot(1,2),lit81);return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,11),Args{lit226,([&](){V t248=get(e->slot(1,2),lit82);return !truth(t248)?V(0.0):t248;})()});
call(e->slot(1,11),Args{lit227,([&](){V t249=get(e->slot(1,2),lit84);return !truth(t249)?V(0.0):t249;})()});
if(truth(V(!truth(get(e->slot(1,2),lit101))))){return Args{};
}
call(e->slot(1,11),Args{lit228,([&](){V t250=get(e->slot(1,2),lit46);return !truth(t250)?V(0.0):t250;})()});
call(e->slot(1,11),Args{lit229,([&](){V t251=get(e->slot(1,2),lit47);return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,11),Args{lit230,([&](){V t252=get(e->slot(1,2),lit7);return !truth(t252)?V(0.0):t252;})()});
call(e->slot(1,11),Args{lit231,([&](){V t253=get(e->slot(1,2),lit52);return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,11),Args{lit232,([&](){V t254=get(e->slot(1,2),lit50);return !truth(t254)?V(0.0):t254;})()});
call(e->slot(1,11),Args{lit233,([&](){V t255=get(e->slot(1,2),lit51);return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,11),Args{lit234,([&](){V t256=get(e->slot(1,2),lit53);return !truth(t256)?V(0.0):t256;})()});
call(e->slot(1,11),Args{lit235,([&](){V t257=([&](){V t258=get(e->slot(1,2),lit91);return truth(t258)?V(1.0):t258;})();return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,11),Args{lit236,([&](){V t259=([&](){V t260=get(e->slot(1,2),lit92);return truth(t260)?V(1.0):t260;})();return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,11),Args{lit237,([&](){V t261=([&](){V t262=get(e->slot(1,2),lit93);return truth(t262)?V(1.0):t262;})();return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,11),Args{lit238,([&](){V t263=([&](){V t264=get(e->slot(1,2),lit94);return truth(t264)?V(1.0):t264;})();return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,11),Args{lit239,([&](){V t265=([&](){V t266=get(e->slot(1,2),lit95);return truth(t266)?V(1.0):t266;})();return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,11),Args{lit240,([&](){V t267=([&](){V t268=get(e->slot(1,2),lit96);return truth(t268)?V(1.0):t268;})();return !truth(t267)?V(0.0):t267;})()});
call(e->slot(1,11),Args{lit241,([&](){V t269=get(e->slot(1,2),lit61);return !truth(t269)?V(1.0):t269;})()});
call(e->slot(1,11),Args{lit242,([&](){V t270=get(e->slot(1,2),lit62);return !truth(t270)?V(1.0):t270;})()});
call(e->slot(1,11),Args{lit243,([&](){V t271=get(e->slot(1,2),lit66);return !truth(t271)?V(1.0):t271;})()});
call(e->slot(1,11),Args{lit244,([&](){V t272=get(e->slot(1,2),lit67);return !truth(t272)?V(1.0):t272;})()});
call(e->slot(1,11),Args{lit245,([&](){V t273=get(e->slot(1,2),lit54);return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,11),Args{lit246,([&](){V t274=get(e->slot(1,2),lit55);return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,11),Args{lit247,([&](){V t275=get(e->slot(1,2),lit56);return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,11),Args{lit248,([&](){V t276=get(e->slot(1,2),lit59);return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,11),Args{lit249,([&](){V t277=get(e->slot(1,2),lit60);return !truth(t277)?V(0.0):t277;})()});
call(e->slot(1,11),Args{lit250,([&](){V t278=get(e->slot(1,2),lit71);return !truth(t278)?V(1.0):t278;})()});
call(e->slot(1,11),Args{lit251,([&](){V t279=get(e->slot(1,2),lit72);return !truth(t279)?V(0.0):t279;})()});
call(e->slot(1,11),Args{lit252,([&](){V t280=get(e->slot(1,2),lit79);return !truth(t280)?V(1.0):t280;})()});
call(e->slot(1,11),Args{lit253,([&](){V t281=get(e->slot(1,2),lit85);return !truth(t281)?V(0.0):t281;})()});
call(e->slot(1,11),Args{lit254,([&](){V t282=get(e->slot(1,2),lit87);return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,11),Args{lit255,([&](){V t283=get(e->slot(1,2),lit88);return !truth(t283)?V(1.0):t283;})()});
return Args{};});
Ref(e->slot(0,1),lit256).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t284=lit98;refs[0].put(std::move(t284));}
call(e->slot(1,37),Args{});
return Args{};}));
Ref(e->slot(0,1),lit257).put(native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t285=add(([&](){V t286=get(e->slot(1,2),lit99);return !truth(t286)?V(0.0):t286;})(),V(1.0));refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t287=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t287));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t288=lit258;refs[0].put(std::move(t288));}
call(e->slot(1,37),Args{});
return Args{};
}
call(e->slot(1,13),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t289=([&](){V t290=e->slot(0,1);return !truth(t290)?first(call(e->slot(1,12),Args{})):t290;})();refs[0].put(std::move(t289));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t291=lit259;refs[0].put(std::move(t291));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t292=V(false);refs[0].put(std::move(t292));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t293=V(false);refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t294=V(0.0);refs[0].put(std::move(t294));}
call(e->slot(1,36),Args{e->slot(0,0)});
call(e->slot(1,37),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t295=first(call(e->slot(1,16),Args{e->slot(0,1)}));refs[0].put(std::move(t295));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t296=first(call(e->slot(1,17),Args{e->slot(0,1)}));refs[0].put(std::move(t296));}
{V t297=first(call(e->slot(1,14),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t297);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t298=lit260;refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t299=V(false);refs[0].put(std::move(t299));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t300=V(false);refs[0].put(std::move(t300));}
call(e->slot(1,36),Args{e->slot(0,0)});
call(e->slot(1,37),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t301=V(true);refs[0].put(std::move(t301));}
call(e->slot(1,23),Args{});
call(e->slot(1,24),Args{e->slot(0,0)});
call(e->slot(1,25),Args{e->slot(0,0)});
call(e->slot(1,26),Args{});
call(e->slot(1,27),Args{});
call(e->slot(1,28),Args{});
{Args t302=call(e->slot(1,22),Args{e->slot(0,1)});e->slot(0,4)=arg(t302,0);e->slot(0,5)=arg(t302,1);e->slot(0,6)=arg(t302,2);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t303=e->slot(0,4);refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t304=e->slot(0,5);refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t305=e->slot(0,6);refs[0].put(std::move(t305));}
if(truth(V(!truth(get(e->slot(1,2),lit90))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t306=lit261;refs[0].put(std::move(t306));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t307=lit262;refs[0].put(std::move(t307));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t308=first(call(e->slot(1,29),Args{get(e->slot(1,2),lit43)}));refs[0].put(std::move(t308));}
call(e->slot(1,30),Args{get(e->slot(1,2),lit44),e->slot(0,0)});
call(e->slot(1,31),Args{e->slot(0,4),e->slot(0,0)});
call(e->slot(1,32),Args{e->slot(0,5),e->slot(0,6),e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t309=first(call(e->slot(1,33),Args{}));refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit7)};V t310=first(call(e->slot(1,34),Args{}));refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t311=first(call(e->slot(1,35),Args{}));refs[0].put(std::move(t311));}
call(e->slot(1,37),Args{});
return Args{};}));
Ref(e->slot(0,1),lit263).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t312=get(e->slot(1,2),lit49);return !truth(t312)?V(0.0):t312;})()};
return Args{};}));
Ref(e->slot(0,1),lit264).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t313=get(e->slot(1,2),lit48);return !truth(t313)?V(0.0):t313;})()};
return Args{};}));
Ref(e->slot(0,1),lit265).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t314=get(e->slot(1,2),lit45);return !truth(t314)?V(0.0):t314;})()};
return Args{};}));
Ref(e->slot(0,1),lit266).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t315=get(e->slot(1,2),lit46);return !truth(t315)?V(0.0):t315;})()};
return Args{};}));
Ref(e->slot(0,1),lit267).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t316=get(e->slot(1,2),lit47);return !truth(t316)?V(0.0):t316;})()};
return Args{};}));
Ref(e->slot(0,1),lit268).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t317=get(e->slot(1,2),lit44);return !truth(t317)?V(0.0):t317;})()};
return Args{};}));
Ref(e->slot(0,1),lit269).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t318=get(e->slot(1,2),lit81);return !truth(t318)?V(0.0):t318;})()};
return Args{};}));
Ref(e->slot(0,1),lit270).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit271).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit272),Args{concat(lit273,concat(lit274,concat(lit275,concat(lit276,lit277)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit97)})),([&](){V t319=get(e->slot(1,2),lit99);return !truth(t319)?V(0.0):t319;})(),([&](){V t320=([&](){V t321=get(e->slot(1,2),lit89);return truth(t321)?lit278:t321;})();return !truth(t320)?lit279:t320;})(),([&](){V t322=([&](){V t323=get(e->slot(1,2),lit90);return truth(t323)?lit278:t323;})();return !truth(t322)?lit279:t322;})(),([&](){V t324=get(e->slot(1,2),lit43);return !truth(t324)?V(0.0):t324;})(),([&](){V t325=get(e->slot(1,2),lit44);return !truth(t325)?V(0.0):t325;})(),([&](){V t326=get(e->slot(1,2),lit45);return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(e->slot(1,2),lit49);return !truth(t327)?V(0.0):t327;})(),([&](){V t328=get(e->slot(1,2),lit46);return !truth(t328)?V(0.0):t328;})(),([&](){V t329=get(e->slot(1,2),lit47);return !truth(t329)?V(0.0):t329;})(),([&](){V t330=get(e->slot(1,2),lit48);return !truth(t330)?V(0.0):t330;})(),([&](){V t331=get(e->slot(1,2),lit7);return !truth(t331)?V(0.0):t331;})(),([&](){V t332=([&](){V t333=get(e->slot(1,2),lit91);return truth(t333)?lit278:t333;})();return !truth(t332)?lit279:t332;})(),([&](){V t334=([&](){V t335=get(e->slot(1,2),lit92);return truth(t335)?lit278:t335;})();return !truth(t334)?lit279:t334;})(),([&](){V t336=([&](){V t337=get(e->slot(1,2),lit93);return truth(t337)?lit278:t337;})();return !truth(t336)?lit279:t336;})(),([&](){V t338=([&](){V t339=get(e->slot(1,2),lit94);return truth(t339)?lit278:t339;})();return !truth(t338)?lit279:t338;})(),([&](){V t340=([&](){V t341=get(e->slot(1,2),lit95);return truth(t341)?lit278:t341;})();return !truth(t340)?lit279:t340;})(),([&](){V t342=([&](){V t343=get(e->slot(1,2),lit96);return truth(t343)?lit278:t343;})();return !truth(t342)?lit279:t342;})(),([&](){V t344=get(e->slot(1,2),lit66);return !truth(t344)?V(1.0):t344;})(),([&](){V t345=get(e->slot(1,2),lit67);return !truth(t345)?V(1.0):t345;})(),([&](){V t346=get(e->slot(1,2),lit79);return !truth(t346)?V(1.0):t346;})(),([&](){V t347=get(e->slot(1,2),lit81);return !truth(t347)?V(0.0):t347;})(),([&](){V t348=get(e->slot(1,2),lit85);return !truth(t348)?V(0.0):t348;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
