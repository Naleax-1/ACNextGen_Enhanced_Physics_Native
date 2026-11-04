// Generated native C++ from pinned steering_mechanism.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("mzScale");
static const V lit3("fxScale");
static const V lit4("fyScale");
static const V lit5("bumpScale");
static const V lit6("dampingScale");
static const V lit7("maxSpeedFactor");
static const V lit8("maxFFB");
static const V lit9("minFFB");
static const V lit10("minSpeed");
static const V lit11("knuckleTau");
static const V lit12("ffbTau");
static const V lit13("decayTau");
static const V lit14("mzLimit");
static const V lit15("fxLimit");
static const V lit16("fyLimit");
static const V lit17("bumpLimit");
static const V lit18("dampLimit");
static const V lit19("frontAxisReactionGain");
static const V lit20("frontAxisFrictionGain");
static const V lit21("steerDynamicsGain");
static const V lit22("roadShockGain");
static const V lit23("roadSurfaceLossGain");
static const V lit24("loadPathLossGain");
static const V lit25("tireDeliveryGain");
static const V lit26("casterReactionGain");
static const V lit27("bodyFlexGain");
static const V lit28("minDt");
static const V lit29("maxDt");
static const V lit30("applyFFB");
static const V lit31("debugStoreInterval");
static const V lit32("prevSteer");
static const V lit33("prevSusp");
static const V lit34("knuckle");
static const V lit35("fx");
static const V lit36("fy");
static const V lit37("mz");
static const V lit38("mzForce");
static const V lit39("fxForce");
static const V lit40("fyForce");
static const V lit41("bumpForce");
static const V lit42("dampForce");
static const V lit43("finalFFB");
static const V lit44("rawFFB");
static const V lit45("knuckleFX");
static const V lit46("knuckleFY");
static const V lit47("knuckleMZ");
static const V lit48("speedKmh");
static const V lit49("speedFactor");
static const V lit50("steer");
static const V lit51("frontAxisAnchor");
static const V lit52("frontAxisAuthority");
static const V lit53("frontAxisYawResist");
static const V lit54("frontAxisSteerWeight");
static const V lit55("frontAxisSlipDamp");
static const V lit56("steerDynamicsMech");
static const V lit57("steerDynamicsReaction");
static const V lit58("steerDynamicsRack");
static const V lit59("roadShock");
static const V lit60("roadSurfaceLimit");
static const V lit61("loadPathLoss");
static const V lit62("tireDelivery");
static const V lit63("casterScale");
static const V lit64("casterGripLoss");
static const V lit65("bodyFlex");
static const V lit66("active");
static const V lit67("ffbApplied");
static const V lit68("initialized");
static const V lit69("wheelsValid");
static const V lit70("carLinked");
static const V lit71("forceLinked");
static const V lit72("suspensionLinked");
static const V lit73("steeringDynamicsLinked");
static const V lit74("frontAxisLinked");
static const V lit75("roadLinked");
static const V lit76("loadPathLinked");
static const V lit77("casterLinked");
static const V lit78("bodyLinked");
static const V lit79("status");
static const V lit80("INIT");
static const V lit81("updateCount");
static const V lit82("debugStoreTimer");
static const V lit83("debugStoreNow");
static const V lit84("state");
static const V lit85("debug");
static const V lit86("huge");
static const V lit87("abs");
static const V lit88("max");
static const V lit89("safeLoadRaw");
static const V lit90("safeStore");
static const V lit91("safeField");
static const V lit92("getCar");
static const V lit93("setSteeringFFB");
static const V lit94("wheels");
static const V lit95("ngp_tire_long_");
static const V lit96("ngp_long_");
static const V lit97("ngp_cp_long_");
static const V lit98("ngp_hub_force_long_");
static const V lit99("ngp_force_long_");
static const V lit100("ngp_wheel_fx_");
static const V lit101("ngp_tire_lat_");
static const V lit102("ngp_lat_");
static const V lit103("ngp_cp_lat_");
static const V lit104("ngp_hub_force_lat_");
static const V lit105("ngp_force_lat_");
static const V lit106("ngp_wheel_fy_");
static const V lit107("ngp_tire_mz_");
static const V lit108("ngp_aligning_moment_");
static const V lit109("ngp_caster_aligning_hint_");
static const V lit110("ngp_steer_mz_");
static const V lit111("ngp_wheel_mz_");
static const V lit112("longitudinalForce");
static const V lit113("longitudinalForceN");
static const V lit114("lateralForce");
static const V lit115("lateralForceN");
static const V lit116("aligningMoment");
static const V lit117("selfAligningTorque");
static const V lit118("aligningTorque");
static const V lit119("suspensionTravel");
static const V lit120("suspensionTravelM");
static const V lit121("suspensionLength");
static const V lit122("travel");
static const V lit123("damperTravel");
static const V lit124("suspensionPosition");
static const V lit125("ngp_spring_travel_");
static const V lit126("ngp_spring_effective_travel_");
static const V lit127("ngp_damper_hyst_travel_");
static const V lit128("ngp_damper_travel_");
static const V lit129("ngp_susp_travel_");
static const V lit130("ngp_hub_speed");
static const V lit131("ngp_steer_input");
static const V lit132("ngp_front_axis_anchor");
static const V lit133("ngp_mass_front_axis_anchor");
static const V lit134("ngp_front_axis_authority");
static const V lit135("ngp_steer_front_authority");
static const V lit136("ngp_front_axis_yaw_resist");
static const V lit137("ngp_front_axis_steer_weight");
static const V lit138("ngp_front_axis_slip_damp");
static const V lit139("ngp_steer_mech");
static const V lit140("ngp_sd_output");
static const V lit141("ngp_steer_reaction");
static const V lit142("ngp_sd_reaction");
static const V lit143("ngp_steer_rack");
static const V lit144("ngp_sd_rack");
static const V lit145("ngp_steering_dynamics_update_count");
static const V lit146("ngp_road_shock");
static const V lit147("ngp_road_input_avg_impact");
static const V lit148("ngp_road_surface_limit");
static const V lit149("ngp_road_input_update_count");
static const V lit150("ngp_load_path_avg_loss");
static const V lit151("ngp_road_path_loss");
static const V lit152("ngp_load_path_avg_tire_delivery");
static const V lit153("ngp_road_tire_delivery");
static const V lit154("ngp_load_path_update_count");
static const V lit155("ngp_steer_caster_scale");
static const V lit156("ngp_steer_caster_grip_loss");
static const V lit157("ngp_caster_grip_0");
static const V lit158("ngp_body_flex_factor");
static const V lit159("ngp_steer_body_flex_factor");
static const V lit160("ngp_body_rigidity_update_count");
static const V lit161("DECAY");
static const V lit162("ngp_steering_mechanism_status");
static const V lit163("UNKNOWN");
static const V lit164("ngp_steering_mechanism_update_count");
static const V lit165("ngp_steering_ffb");
static const V lit166("ngp_steering_mz_force");
static const V lit167("ngp_steering_fx_force");
static const V lit168("ngp_steering_fy_force");
static const V lit169("ngp_steering_bump_force");
static const V lit170("ngp_steering_damp_force");
static const V lit171("ngp_steering_knuckle_fx");
static const V lit172("ngp_steering_knuckle_fy");
static const V lit173("ngp_steering_knuckle_mz");
static const V lit174("ngp_steering_speed_factor");
static const V lit175("ngp_steering_speed");
static const V lit176("ngp_steering_input");
static const V lit177("ngp_steering_active");
static const V lit178("ngp_steering_ffb_applied");
static const V lit179("ngp_sm_ffb");
static const V lit180("ngp_sm_reaction");
static const V lit181("ngp_sm_bump");
static const V lit182("ngp_sm_damp");
static const V lit183("ngp_sm_knuckle_mz");
static const V lit184("ngp_sm_force_linked");
static const V lit185("ngp_sm_wheels_valid");
static const V lit186("ngp_steering_raw_ffb");
static const V lit187("ngp_steering_front_axis_linked");
static const V lit188("ngp_steering_dynamics_linked");
static const V lit189("ngp_steering_road_linked");
static const V lit190("ngp_steering_load_path_linked");
static const V lit191("ngp_steering_caster_linked");
static const V lit192("ngp_steering_body_linked");
static const V lit193("ngp_steering_suspension_linked");
static const V lit194("ngp_steering_front_axis_authority");
static const V lit195("ngp_steering_front_axis_yaw_resist");
static const V lit196("ngp_steering_road_shock");
static const V lit197("ngp_steering_load_path_loss");
static const V lit198("ngp_steering_tire_delivery");
static const V lit199("ngp_steering_caster_grip_loss");
static const V lit200("init");
static const V lit201("update");
static const V lit202("NO CAR");
static const V lit203("LOW SPEED");
static const V lit204("NO FRONT WHEELS");
static const V lit205("RUNNING");
static const V lit206("getFFB");
static const V lit207("getMZForce");
static const V lit208("getFXForce");
static const V lit209("getFYForce");
static const V lit210("getBumpForce");
static const V lit211("getDampForce");
static const V lit212("getKnuckle");
static const V lit213("getState");
static const V lit214("debugStr");
static const V lit215("format");
static const V lit216("Status %s / Count %.0f / Wheels %s\n");
static const V lit217("FFB %.3f Raw %.3f Active:%s Applied:%s\n");
static const V lit218("MZ %.3f FX %.3f FY %.3f\n");
static const V lit219("Bump %.3f Damp %.3f\n");
static const V lit220("Speed %.1f Factor %.3f Steer %.3f\n");
static const V lit221("Links Force:%s Susp:%s SD:%s FA:%s Road:%s LP:%s");
static const V lit222("OK");
static const V lit223("NIL");
static const V lit224("YES");
static const V lit225("NO");
V load_steering_mechanism(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(35);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.00065));set(z,lit3,V(0.0002));set(z,lit4,V(0.0002));set(z,lit5,V(0.25));set(z,lit6,V(0.3));set(z,lit7,V(1.8));set(z,lit8,V(2.5));set(z,lit9,V(-num(V(2.5))));set(z,lit10,V(3.0));set(z,lit11,V(0.05));set(z,lit12,V(0.045));set(z,lit13,V(0.16));set(z,lit14,V(1.2));set(z,lit15,V(0.8));set(z,lit16,V(1.0));set(z,lit17,V(0.5));set(z,lit18,V(0.8));set(z,lit19,V(0.18));set(z,lit20,V(0.1));set(z,lit21,V(0.2));set(z,lit22,V(0.1));set(z,lit23,V(0.08));set(z,lit24,V(0.08));set(z,lit25,V(0.1));set(z,lit26,V(0.08));set(z,lit27,V(0.06));set(z,lit28,V(5e-05));set(z,lit29,V(0.05));set(z,lit30,V(false));set(z,lit31,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit32,V(0.0));set(z,lit33,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));return z;})());set(z,lit34,([&](){V z=table();set(z,lit35,V(0.0));set(z,lit36,V(0.0));set(z,lit37,V(0.0));return z;})());set(z,lit38,V(0.0));set(z,lit39,V(0.0));set(z,lit40,V(0.0));set(z,lit41,V(0.0));set(z,lit42,V(0.0));set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,V(0.0));set(z,lit46,V(0.0));set(z,lit47,V(0.0));set(z,lit48,V(0.0));set(z,lit49,V(0.0));set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(1.0));set(z,lit63,V(1.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(false));set(z,lit67,V(false));set(z,lit68,V(false));set(z,lit69,V(false));set(z,lit70,V(false));set(z,lit71,V(false));set(z,lit72,V(false));set(z,lit73,V(false));set(z,lit74,V(false));set(z,lit75,V(false));set(z,lit76,V(false));set(z,lit77,V(false));set(z,lit78,V(false));set(z,lit79,lit80);set(z,lit81,V(0.0));set(z,lit82,V(999.0));set(z,lit83,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit84)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit85)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit86)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit86)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit87),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(V(1.0)))};
}
if(truth(gt(e->slot(0,0),V(0.0)))){return Args{V(1.0)};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t15=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t16=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t17=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t18=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t18));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t19=first(call(e->slot(1,4),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit88),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t19);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
{V t20=get(e->slot(0,0),lit89);e->slot(0,8)=std::move(t20);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t21=first(call(e->slot(1,8),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t21);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t23=e->slot(0,1);return !truth(t23)?V(0.0):t23;})()});
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t24=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t24);}
{double t25=num(V(1.0)),t26=num(length(e->slot(0,1))),t27=num(V(1.0));for(double t28=t25;(t27>0?t28<=t26:t28>=t26);t28+=t27){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t28);{V t29=first(call(e->slot(2,8),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t29);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t30=e->slot(1,0);return !truth(t30)?V(0.0):t30;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t31=e->slot(0,0);return !truth(t31)?V(0.0):t31;})(),V()};
return Args{};});
{V t32=get(e->slot(0,0),lit90);e->slot(0,11)=std::move(t32);}
{V t33=get(e->slot(0,0),lit91);e->slot(0,12)=std::move(t33);}
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t34=V(!truth(e->get("ac")));return !truth(t34)?V(!truth(get(e->get("ac"),lit92))):t34;})())){return Args{V()};
}
{Args t35=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit92),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t35,0);e->slot(0,1)=arg(t35,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);e->slot(0,0)=arg(a,0);if(truth(([&](){V t36=V(!truth(e->get("ac")));return !truth(t36)?V(!truth(get(e->get("ac"),lit93))):t36;})())){return Args{V(false)};
}
{V t37=first(call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(get(e->get("ac"),lit93),Args{e->slot(1,0)});
return Args{};})}));e->slot(0,1)=std::move(t37);}
return Args{([&](){V t38=([&](){V t39=e->slot(0,1);return truth(t39)?V(true):t39;})();return !truth(t38)?V(false):t38;})()};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t40=add(([&](){V t41=get(e->slot(1,2),lit82);return !truth(t41)?V(0.0):t41;})(),([&](){V t42=e->slot(0,0);return !truth(t42)?V(0.0):t42;})());refs[0].put(std::move(t40));}
if(truth(ge(get(e->slot(1,2),lit82),get(get(e->slot(1,1),lit1),lit31)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t43=V(0.0);refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t44=V(true);refs[0].put(std::move(t44));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t45=V(false);refs[0].put(std::move(t45));}
}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return call(e->slot(1,12),Args{e->slot(0,0),lit94,V()});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,7);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t46=first(call(e->slot(1,16),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t46);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t47=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),e->slot(1,1))};
return Args{};})});e->slot(0,3)=arg(t47,0);e->slot(0,4)=arg(t47,1);}
if(truth(([&](){V t48=e->slot(0,3);return truth(t48)?e->slot(0,4):t48;})())){return Args{e->slot(0,4)};
}
{Args t49=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),add(e->slot(1,1),V(1.0)))};
return Args{};})});e->slot(0,5)=arg(t49,0);e->slot(0,6)=arg(t49,1);}
if(truth(([&](){V t50=e->slot(0,5);return truth(t50)?e->slot(0,6):t50;})())){return Args{e->slot(0,6)};
}
return Args{V()};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t51=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t51);}
{double t52=num(V(1.0)),t53=num(length(e->slot(0,1))),t54=num(V(1.0));for(double t55=t52;(t54>0?t55<=t53:t55>=t53);t55+=t54){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t55);{V t56=first(call(e->slot(2,12),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t56);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{V(),V()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(eq(e->slot(0,1),lit35))){return call(e->slot(1,10),Args{V(),concat(lit95,e->slot(0,0)),concat(lit96,e->slot(0,0)),concat(lit97,e->slot(0,0)),concat(lit98,e->slot(0,0)),concat(lit99,e->slot(0,0)),concat(lit100,e->slot(0,0))});
}else if(truth(eq(e->slot(0,1),lit36))){return call(e->slot(1,10),Args{V(),concat(lit101,e->slot(0,0)),concat(lit102,e->slot(0,0)),concat(lit103,e->slot(0,0)),concat(lit104,e->slot(0,0)),concat(lit105,e->slot(0,0)),concat(lit106,e->slot(0,0))});
}else{return call(e->slot(1,10),Args{V(),concat(lit107,e->slot(0,0)),concat(lit108,e->slot(0,0)),concat(lit109,e->slot(0,0)),concat(lit110,e->slot(0,0)),concat(lit111,e->slot(0,0))});
}

return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{Args t57=Args{V(),V()};e->slot(0,3)=arg(t57,0);e->slot(0,4)=arg(t57,1);}
if(truth(eq(e->slot(0,2),lit35))){{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t58=call(e->slot(1,18),Args{e->slot(0,1),lit35,lit112,lit113});refs[0].put(arg(t58,0));refs[1].put(arg(t58,1));}
}else if(truth(eq(e->slot(0,2),lit36))){{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t59=call(e->slot(1,18),Args{e->slot(0,1),lit36,lit114,lit115});refs[0].put(arg(t59,0));refs[1].put(arg(t59,1));}
}else{{std::array<Ref,2> refs{Ref(e,0,3),Ref(e,0,4)};Args t60=call(e->slot(1,18),Args{e->slot(0,1),lit37,lit116,lit117,lit118});refs[0].put(arg(t60,0));refs[1].put(arg(t60,1));}
}

if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t61=V(true);refs[0].put(std::move(t61));}
return Args{e->slot(0,3)};
}
{Args t62=call(e->slot(1,19),Args{e->slot(0,0),e->slot(0,2)});e->slot(0,5)=arg(t62,0);e->slot(0,6)=arg(t62,1);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t63=V(true);refs[0].put(std::move(t63));}
return Args{e->slot(0,5)};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t64=first(call(e->slot(1,17),Args{e->slot(0,0),V(0.0)}));e->slot(0,1)=std::move(t64);}
{V t65=first(call(e->slot(1,17),Args{e->slot(0,0),V(1.0)}));e->slot(0,2)=std::move(t65);}
return Args{e->slot(0,1),e->slot(0,2)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t66=mul(add(first(call(e->slot(1,20),Args{V(0.0),e->slot(0,0),lit35})),first(call(e->slot(1,20),Args{V(1.0),e->slot(0,1),lit35}))),V(0.5));e->slot(0,2)=std::move(t66);}
{V t67=mul(add(first(call(e->slot(1,20),Args{V(0.0),e->slot(0,0),lit36})),first(call(e->slot(1,20),Args{V(1.0),e->slot(0,1),lit36}))),V(0.5));e->slot(0,3)=std::move(t67);}
{V t68=mul(add(first(call(e->slot(1,20),Args{V(0.0),e->slot(0,0),lit37})),first(call(e->slot(1,20),Args{V(1.0),e->slot(0,1),lit37}))),V(0.5));e->slot(0,4)=std::move(t68);}
return Args{e->slot(0,2),e->slot(0,3),e->slot(0,4)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t69=V();e->slot(0,3)=std::move(t69);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,0,3)};V t70=first(call(e->get("select"),joined(Args{V(1.0)},call(e->slot(1,18),Args{e->slot(0,1),lit119,lit120,lit121,lit122,lit123,lit124}))));refs[0].put(std::move(t70));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t71=V(true);refs[0].put(std::move(t71));}
return call(e->slot(1,4),Args{e->slot(0,3),V(-num(V(2.0))),V(2.0)});
}
{Args t72=call(e->slot(1,10),Args{V(),concat(lit125,e->slot(0,0)),concat(lit126,e->slot(0,0)),concat(lit127,e->slot(0,0)),concat(lit128,e->slot(0,0)),concat(lit129,e->slot(0,0))});e->slot(0,4)=arg(t72,0);e->slot(0,5)=arg(t72,1);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t73=V(true);refs[0].put(std::move(t73));}
return call(e->slot(1,4),Args{e->slot(0,4),V(-num(V(2.0))),V(2.0)});
}
return Args{([&](){V t74=e->slot(0,2);return !truth(t74)?V(0.0):t74;})()};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t75=first(call(e->slot(1,12),Args{e->slot(0,0),lit48,V()}));e->slot(0,1)=std::move(t75);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,3),Args{e->slot(0,1),V(0.0)});
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t76=V();refs[0].put(std::move(t76));}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t77=first(call(e->slot(2,3),Args{e->slot(1,1),V(0.0)}));e->slot(0,0)=std::move(t77);}
if(truth(lt(e->slot(0,0),V(90.0)))){return Args{mul(e->slot(0,0),V(3.6))};
}
return Args{e->slot(0,0)};
}
return call(e->slot(1,9),Args{lit130,V(0.0)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t78=first(call(e->slot(1,12),Args{e->slot(0,0),lit50,V()}));e->slot(0,1)=std::move(t78);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(1.5))),V(1.5)});
}
return call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit131,V(0.0)})),V(-num(V(1.5))),V(1.5)});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{Args t79=Args{};e->slot(0,0)=arg(t79,0);e->slot(0,1)=arg(t79,1);}
{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t80=call(e->slot(1,10),Args{V(0.0),lit132,lit133});refs[0].put(arg(t80,0));refs[1].put(arg(t80,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t81=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0),V(1.5)}));refs[0].put(std::move(t81));}
{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t82=call(e->slot(1,10),Args{V(0.0),lit134,lit135});refs[0].put(arg(t82,0));refs[1].put(arg(t82,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t83=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0),V(1.5)}));refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t84=([&](){V t85=ne(e->slot(0,1),V());return !truth(t85)?ne(first(call(e->slot(1,8),Args{lit136})),V()):t85;})();refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t86=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit136,V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t87=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit137,V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t88=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit138,V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t88));}
{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t89=call(e->slot(1,10),Args{V(0.0),lit139,lit140});refs[0].put(arg(t89,0));refs[1].put(arg(t89,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t90=first(call(e->slot(1,4),Args{e->slot(0,0),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t90));}
{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t91=call(e->slot(1,10),Args{V(0.0),lit141,lit142});refs[0].put(arg(t91,0));refs[1].put(arg(t91,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t92=first(call(e->slot(1,4),Args{e->slot(0,0),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t92));}
{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t93=call(e->slot(1,10),Args{V(0.0),lit143,lit144});refs[0].put(arg(t93,0));refs[1].put(arg(t93,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t94=first(call(e->slot(1,4),Args{e->slot(0,0),V(-num(V(2.5))),V(2.5)}));refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t95=([&](){V t96=ne(first(call(e->slot(1,8),Args{lit145})),V());return !truth(t96)?ne(first(call(e->slot(1,8),Args{lit139})),V()):t96;})();refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t97=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),joined(Args{lit146},call(e->slot(1,9),Args{lit147,V(0.0)})))),V(0.0),V(1.5)}));refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t98=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit148,V(0.0)})),V(0.0),V(1.5)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t99=([&](){V t100=ne(first(call(e->slot(1,8),Args{lit149})),V());return !truth(t100)?ne(first(call(e->slot(1,8),Args{lit146})),V()):t100;})();refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t101=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),joined(Args{lit150},call(e->slot(1,9),Args{lit151,V(0.0)})))),V(0.0),V(1.5)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t102=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),joined(Args{lit152},call(e->slot(1,9),Args{lit153,V(1.0)})))),V(0.0),V(1.2)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t103=([&](){V t104=ne(first(call(e->slot(1,8),Args{lit154})),V());return !truth(t104)?ne(first(call(e->slot(1,8),Args{lit150})),V()):t104;})();refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t105=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit155,V(1.0)})),V(0.75),V(1.3)}));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t106=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{lit156,V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t106));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t107=([&](){V t108=ne(first(call(e->slot(1,8),Args{lit157})),V());return !truth(t108)?ne(first(call(e->slot(1,8),Args{lit155})),V()):t108;})();refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t109=first(call(e->slot(1,4),Args{sub(first(call(e->slot(1,9),joined(Args{lit158},call(e->slot(1,9),Args{lit159,V(1.0)})))),V(1.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t110=([&](){V t111=ne(first(call(e->slot(1,8),Args{lit160})),V());return !truth(t111)?ne(first(call(e->slot(1,8),Args{lit159})),V()):t111;})();refs[0].put(std::move(t110));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),lit35)};V t112=first(call(e->slot(1,7),Args{get(get(e->slot(1,2),lit34),lit35),e->slot(0,0),get(get(e->slot(1,1),lit1),lit11),e->slot(0,3)}));refs[0].put(std::move(t112));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),lit36)};V t113=first(call(e->slot(1,7),Args{get(get(e->slot(1,2),lit34),lit36),e->slot(0,1),get(get(e->slot(1,1),lit1),lit11),e->slot(0,3)}));refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),lit37)};V t114=first(call(e->slot(1,7),Args{get(get(e->slot(1,2),lit34),lit37),e->slot(0,2),get(get(e->slot(1,1),lit1),lit11),e->slot(0,3)}));refs[0].put(std::move(t114));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{V t115=add(V(1.0),mul(get(e->slot(1,2),lit52),get(get(e->slot(1,1),lit1),lit19)));e->slot(0,1)=std::move(t115);}
{V t116=add(V(1.0),mul(get(e->slot(1,2),lit64),get(get(e->slot(1,1),lit1),lit26)));e->slot(0,2)=std::move(t116);}
{V t117=sub(V(1.0),first(call(e->slot(1,4),Args{mul(sub(V(1.0),get(e->slot(1,2),lit62)),get(get(e->slot(1,1),lit1),lit25)),V(0.0),V(0.25)})));e->slot(0,3)=std::move(t117);}
{V t118=first(call(e->slot(1,4),Args{mul(mul(mul(mul(get(get(e->slot(1,2),lit34),lit37),get(get(e->slot(1,1),lit1),lit2)),e->slot(0,1)),e->slot(0,2)),e->slot(0,3)),V(-num(get(get(e->slot(1,1),lit1),lit14))),get(get(e->slot(1,1),lit1),lit14)}));e->slot(0,4)=std::move(t118);}
{V t119=first(call(e->slot(1,4),Args{mul(mul(get(get(e->slot(1,2),lit34),lit35),get(get(e->slot(1,1),lit1),lit3)),first(call(e->slot(1,5),Args{add(e->slot(0,0),V(0.01))}))),V(-num(get(get(e->slot(1,1),lit1),lit15))),get(get(e->slot(1,1),lit1),lit15)}));e->slot(0,5)=std::move(t119);}
{V t120=first(call(e->slot(1,4),Args{mul(mul(mul(V(-num(get(get(e->slot(1,2),lit34),lit36))),get(get(e->slot(1,1),lit1),lit4)),e->slot(0,1)),e->slot(0,3)),V(-num(get(get(e->slot(1,1),lit1),lit16))),get(get(e->slot(1,1),lit1),lit16)}));e->slot(0,6)=std::move(t120);}
return Args{e->slot(0,4),e->slot(0,5),e->slot(0,6)};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t121=first(call(e->slot(1,23),Args{V(0.0),e->slot(0,0),get(get(e->slot(1,2),lit33),V(0.0))}));e->slot(0,3)=std::move(t121);}
{V t122=first(call(e->slot(1,23),Args{V(1.0),e->slot(0,1),get(get(e->slot(1,2),lit33),V(1.0))}));e->slot(0,4)=std::move(t122);}
if(truth(V(!truth(get(e->slot(1,2),lit68))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit33),V(0.0))};V t123=e->slot(0,3);refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit33),V(1.0))};V t124=e->slot(0,4);refs[0].put(std::move(t124));}
return Args{V(0.0)};
}
{V t125=divv(sub(e->slot(0,3),([&](){V t126=get(get(e->slot(1,2),lit33),V(0.0));return !truth(t126)?e->slot(0,3):t126;})()),first(call(get(e->get("math"),lit88),Args{e->slot(0,2),V(0.001)})));e->slot(0,5)=std::move(t125);}
{V t127=divv(sub(e->slot(0,4),([&](){V t128=get(get(e->slot(1,2),lit33),V(1.0));return !truth(t128)?e->slot(0,4):t128;})()),first(call(get(e->get("math"),lit88),Args{e->slot(0,2),V(0.001)})));e->slot(0,6)=std::move(t127);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit33),V(0.0))};V t129=e->slot(0,3);refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit33),V(1.0))};V t130=e->slot(0,4);refs[0].put(std::move(t130));}
{V t131=mul(mul(mul(add(e->slot(0,5),e->slot(0,6)),V(0.5)),get(get(e->slot(1,1),lit1),lit5)),V(0.1));e->slot(0,7)=std::move(t131);}
{std::array<Ref,1> refs{Ref(e,0,7)};V t132=add(e->slot(0,7),mul(get(e->slot(1,2),lit59),get(get(e->slot(1,1),lit1),lit22)));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e,0,7)};V t133=sub(e->slot(0,7),mul(mul(get(e->slot(1,2),lit60),get(get(e->slot(1,1),lit1),lit23)),first(call(e->slot(1,6),Args{e->slot(0,7)}))));refs[0].put(std::move(t133));}
return call(e->slot(1,4),Args{e->slot(0,7),V(-num(get(get(e->slot(1,1),lit1),lit17))),get(get(e->slot(1,1),lit1),lit17)});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(get(e->slot(1,2),lit68))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t134=e->slot(0,0);refs[0].put(std::move(t134));}
return Args{V(0.0)};
}
{V t135=divv(sub(e->slot(0,0),([&](){V t136=get(e->slot(1,2),lit32);return !truth(t136)?e->slot(0,0):t136;})()),first(call(get(e->get("math"),lit88),Args{e->slot(0,1),V(0.001)})));e->slot(0,2)=std::move(t135);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t137=e->slot(0,0);refs[0].put(std::move(t137));}
{V t138=add(add(add(V(1.0),mul(get(e->slot(1,2),lit55),get(get(e->slot(1,1),lit1),lit20))),mul(get(e->slot(1,2),lit61),get(get(e->slot(1,1),lit1),lit24))),mul(get(e->slot(1,2),lit65),get(get(e->slot(1,1),lit1),lit27)));e->slot(0,3)=std::move(t138);}
{V t139=mul(mul(V(-num(e->slot(0,2))),get(get(e->slot(1,1),lit1),lit6)),e->slot(0,3));e->slot(0,4)=std::move(t139);}
return call(e->slot(1,4),Args{e->slot(0,4),V(-num(get(get(e->slot(1,1),lit1),lit18))),get(get(e->slot(1,1),lit1),lit18)});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(lt(e->slot(0,0),get(get(e->slot(1,1),lit1),lit10)))){return Args{V(0.0)};
}
{V t140=divv(e->slot(0,0),V(3.6));e->slot(0,1)=std::move(t140);}
return call(e->slot(1,4),Args{mul(e->slot(0,1),V(0.03)),V(0.0),get(get(e->slot(1,1),lit1),lit7)});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);e->slot(0,5)=arg(a,5);{V t141=mul(add(get(e->slot(1,2),lit57),mul(get(e->slot(1,2),lit56),V(0.35))),get(get(e->slot(1,1),lit1),lit21));e->slot(0,6)=std::move(t141);}
{V t142=mul(mul(get(e->slot(1,2),lit53),first(call(e->slot(1,6),Args{get(e->slot(1,2),lit50)}))),get(get(e->slot(1,1),lit1),lit19));e->slot(0,7)=std::move(t142);}
{V t143=mul(add(add(add(add(add(add(e->slot(0,0),e->slot(0,1)),e->slot(0,2)),e->slot(0,3)),e->slot(0,4)),e->slot(0,6)),e->slot(0,7)),e->slot(0,5));e->slot(0,8)=std::move(t143);}
return call(e->slot(1,4),Args{e->slot(0,8),get(get(e->slot(1,1),lit1),lit9),get(get(e->slot(1,1),lit1),lit8)});
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t144=([&](){V t145=e->slot(0,1);return !truth(t145)?lit161:t145;})();refs[0].put(std::move(t144));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t146=V(false);refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t147=V(false);refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),lit35)};V t148=first(call(e->slot(1,7),Args{get(get(e->slot(1,2),lit34),lit35),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),lit36)};V t149=first(call(e->slot(1,7),Args{get(get(e->slot(1,2),lit34),lit36),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit34),lit37)};V t150=first(call(e->slot(1,7),Args{get(get(e->slot(1,2),lit34),lit37),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t151=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit38),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t152=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit39),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t153=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit40),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t154=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit41),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t155=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit42),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t156=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit44),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t157=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit43),V(0.0),get(get(e->slot(1,1),lit1),lit13),e->slot(0,0)}));refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t158=get(get(e->slot(1,2),lit34),lit35);refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t159=get(get(e->slot(1,2),lit34),lit36);refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t160=get(get(e->slot(1,2),lit34),lit37);refs[0].put(std::move(t160));}
if(truth(get(get(e->slot(1,1),lit1),lit30))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t161=first(call(e->slot(1,14),Args{V(0.0)}));refs[0].put(std::move(t161));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t162=V(false);refs[0].put(std::move(t162));}
}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,11),Args{lit162,([&](){V t163=get(e->slot(1,2),lit79);return !truth(t163)?lit163:t163;})()});
call(e->slot(1,11),Args{lit164,([&](){V t164=get(e->slot(1,2),lit81);return !truth(t164)?V(0.0):t164;})()});
call(e->slot(1,11),Args{lit165,([&](){V t165=get(e->slot(1,2),lit43);return !truth(t165)?V(0.0):t165;})()});
call(e->slot(1,11),Args{lit166,([&](){V t166=get(e->slot(1,2),lit38);return !truth(t166)?V(0.0):t166;})()});
call(e->slot(1,11),Args{lit167,([&](){V t167=get(e->slot(1,2),lit39);return !truth(t167)?V(0.0):t167;})()});
call(e->slot(1,11),Args{lit168,([&](){V t168=get(e->slot(1,2),lit40);return !truth(t168)?V(0.0):t168;})()});
call(e->slot(1,11),Args{lit169,([&](){V t169=get(e->slot(1,2),lit41);return !truth(t169)?V(0.0):t169;})()});
call(e->slot(1,11),Args{lit170,([&](){V t170=get(e->slot(1,2),lit42);return !truth(t170)?V(0.0):t170;})()});
call(e->slot(1,11),Args{lit171,([&](){V t171=get(e->slot(1,2),lit45);return !truth(t171)?V(0.0):t171;})()});
call(e->slot(1,11),Args{lit172,([&](){V t172=get(e->slot(1,2),lit46);return !truth(t172)?V(0.0):t172;})()});
call(e->slot(1,11),Args{lit173,([&](){V t173=get(e->slot(1,2),lit47);return !truth(t173)?V(0.0):t173;})()});
call(e->slot(1,11),Args{lit174,([&](){V t174=get(e->slot(1,2),lit49);return !truth(t174)?V(0.0):t174;})()});
call(e->slot(1,11),Args{lit175,([&](){V t175=get(e->slot(1,2),lit48);return !truth(t175)?V(0.0):t175;})()});
call(e->slot(1,11),Args{lit176,([&](){V t176=get(e->slot(1,2),lit50);return !truth(t176)?V(0.0):t176;})()});
call(e->slot(1,11),Args{lit177,([&](){V t177=([&](){V t178=get(e->slot(1,2),lit66);return truth(t178)?V(1.0):t178;})();return !truth(t177)?V(0.0):t177;})()});
call(e->slot(1,11),Args{lit178,([&](){V t179=([&](){V t180=get(e->slot(1,2),lit67);return truth(t180)?V(1.0):t180;})();return !truth(t179)?V(0.0):t179;})()});
call(e->slot(1,11),Args{lit179,([&](){V t181=get(e->slot(1,2),lit43);return !truth(t181)?V(0.0):t181;})()});
call(e->slot(1,11),Args{lit180,add(([&](){V t182=get(e->slot(1,2),lit38);return !truth(t182)?V(0.0):t182;})(),([&](){V t183=get(e->slot(1,2),lit40);return !truth(t183)?V(0.0):t183;})())});
call(e->slot(1,11),Args{lit181,([&](){V t184=get(e->slot(1,2),lit41);return !truth(t184)?V(0.0):t184;})()});
call(e->slot(1,11),Args{lit182,([&](){V t185=get(e->slot(1,2),lit42);return !truth(t185)?V(0.0):t185;})()});
call(e->slot(1,11),Args{lit183,([&](){V t186=get(e->slot(1,2),lit47);return !truth(t186)?V(0.0):t186;})()});
call(e->slot(1,11),Args{lit184,([&](){V t187=([&](){V t188=get(e->slot(1,2),lit71);return truth(t188)?V(1.0):t188;})();return !truth(t187)?V(0.0):t187;})()});
call(e->slot(1,11),Args{lit185,([&](){V t189=([&](){V t190=get(e->slot(1,2),lit69);return truth(t190)?V(1.0):t190;})();return !truth(t189)?V(0.0):t189;})()});
if(truth(V(!truth(get(e->slot(1,2),lit83))))){return Args{};
}
call(e->slot(1,11),Args{lit186,([&](){V t191=get(e->slot(1,2),lit44);return !truth(t191)?V(0.0):t191;})()});
call(e->slot(1,11),Args{lit187,([&](){V t192=([&](){V t193=get(e->slot(1,2),lit74);return truth(t193)?V(1.0):t193;})();return !truth(t192)?V(0.0):t192;})()});
call(e->slot(1,11),Args{lit188,([&](){V t194=([&](){V t195=get(e->slot(1,2),lit73);return truth(t195)?V(1.0):t195;})();return !truth(t194)?V(0.0):t194;})()});
call(e->slot(1,11),Args{lit189,([&](){V t196=([&](){V t197=get(e->slot(1,2),lit75);return truth(t197)?V(1.0):t197;})();return !truth(t196)?V(0.0):t196;})()});
call(e->slot(1,11),Args{lit190,([&](){V t198=([&](){V t199=get(e->slot(1,2),lit76);return truth(t199)?V(1.0):t199;})();return !truth(t198)?V(0.0):t198;})()});
call(e->slot(1,11),Args{lit191,([&](){V t200=([&](){V t201=get(e->slot(1,2),lit77);return truth(t201)?V(1.0):t201;})();return !truth(t200)?V(0.0):t200;})()});
call(e->slot(1,11),Args{lit192,([&](){V t202=([&](){V t203=get(e->slot(1,2),lit78);return truth(t203)?V(1.0):t203;})();return !truth(t202)?V(0.0):t202;})()});
call(e->slot(1,11),Args{lit193,([&](){V t204=([&](){V t205=get(e->slot(1,2),lit72);return truth(t205)?V(1.0):t205;})();return !truth(t204)?V(0.0):t204;})()});
call(e->slot(1,11),Args{lit194,([&](){V t206=get(e->slot(1,2),lit52);return !truth(t206)?V(0.0):t206;})()});
call(e->slot(1,11),Args{lit195,([&](){V t207=get(e->slot(1,2),lit53);return !truth(t207)?V(0.0):t207;})()});
call(e->slot(1,11),Args{lit196,([&](){V t208=get(e->slot(1,2),lit59);return !truth(t208)?V(0.0):t208;})()});
call(e->slot(1,11),Args{lit197,([&](){V t209=get(e->slot(1,2),lit61);return !truth(t209)?V(0.0):t209;})()});
call(e->slot(1,11),Args{lit198,([&](){V t210=get(e->slot(1,2),lit62);return !truth(t210)?V(1.0):t210;})()});
call(e->slot(1,11),Args{lit199,([&](){V t211=get(e->slot(1,2),lit64);return !truth(t211)?V(0.0):t211;})()});
return Args{};});
Ref(e->slot(0,1),lit200).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t212=lit80;refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t213=V(false);refs[0].put(std::move(t213));}
call(e->slot(1,34),Args{});
return Args{};}));
Ref(e->slot(0,1),lit201).put(native([up=e](const Args& a)->Args{Env storage(up,true,15);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t214=add(([&](){V t215=get(e->slot(1,2),lit81);return !truth(t215)?V(0.0):t215;})(),V(1.0));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t216=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit28),get(get(e->slot(1,1),lit1),lit29)}));refs[0].put(std::move(t216));}
call(e->slot(1,15),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t217=V(false);refs[0].put(std::move(t217));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t218=V(false);refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t219=V(false);refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t220=V(false);refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t221=V(false);refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t222=V(false);refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t223=V(false);refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t224=V(false);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t225=V(false);refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t226=([&](){V t227=e->slot(0,1);return !truth(t227)?first(call(e->slot(1,13),Args{})):t227;})();refs[0].put(std::move(t226));}
call(e->slot(1,26),Args{});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t228=V(0.0);refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t229=V(0.0);refs[0].put(std::move(t229));}
call(e->slot(1,33),Args{e->slot(0,0),lit202});
call(e->slot(1,34),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t230=V(true);refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t231=first(call(e->slot(1,24),Args{e->slot(0,1)}));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t232=first(call(e->slot(1,25),Args{e->slot(0,1)}));refs[0].put(std::move(t232));}
{Args t233=call(e->slot(1,21),Args{e->slot(0,1)});e->slot(0,3)=arg(t233,0);e->slot(0,4)=arg(t233,1);}
if(truth(lt(get(e->slot(1,2),lit48),get(get(e->slot(1,1),lit1),lit10)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t234=V(0.0);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t235=get(e->slot(1,2),lit50);refs[0].put(std::move(t235));}
call(e->slot(1,33),Args{e->slot(0,0),lit203});
call(e->slot(1,34),Args{});
return Args{};
}
if(truth(([&](){V t236=V(!truth(e->slot(0,3)));return !truth(t236)?V(!truth(e->slot(0,4))):t236;})())){call(e->slot(1,33),Args{e->slot(0,0),lit204});
call(e->slot(1,34),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t237=lit205;refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t238=V(true);refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t239=V(true);refs[0].put(std::move(t239));}
{Args t240=call(e->slot(1,22),Args{e->slot(0,3),e->slot(0,4)});e->slot(0,5)=arg(t240,0);e->slot(0,6)=arg(t240,1);e->slot(0,7)=arg(t240,2);}
call(e->slot(1,27),Args{e->slot(0,5),e->slot(0,6),e->slot(0,7),e->slot(0,0)});
{Args t241=call(e->slot(1,28),Args{get(e->slot(1,2),lit50)});e->slot(0,8)=arg(t241,0);e->slot(0,9)=arg(t241,1);e->slot(0,10)=arg(t241,2);}
{V t242=first(call(e->slot(1,29),Args{e->slot(0,3),e->slot(0,4),e->slot(0,0)}));e->slot(0,11)=std::move(t242);}
{V t243=first(call(e->slot(1,30),Args{get(e->slot(1,2),lit50),e->slot(0,0)}));e->slot(0,12)=std::move(t243);}
{V t244=first(call(e->slot(1,31),Args{get(e->slot(1,2),lit48)}));e->slot(0,13)=std::move(t244);}
{V t245=first(call(e->slot(1,32),Args{e->slot(0,8),e->slot(0,9),e->slot(0,10),e->slot(0,11),e->slot(0,12),e->slot(0,13)}));e->slot(0,14)=std::move(t245);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t246=e->slot(0,8);refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t247=e->slot(0,9);refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t248=e->slot(0,10);refs[0].put(std::move(t248));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t249=e->slot(0,11);refs[0].put(std::move(t249));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t250=e->slot(0,12);refs[0].put(std::move(t250));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t251=e->slot(0,14);refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t252=first(call(e->slot(1,7),Args{get(e->slot(1,2),lit43),e->slot(0,14),get(get(e->slot(1,1),lit1),lit12),e->slot(0,0)}));refs[0].put(std::move(t252));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t253=get(get(e->slot(1,2),lit34),lit35);refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t254=get(get(e->slot(1,2),lit34),lit36);refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t255=get(get(e->slot(1,2),lit34),lit37);refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t256=e->slot(0,13);refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t257=V(true);refs[0].put(std::move(t257));}
if(truth(get(get(e->slot(1,1),lit1),lit30))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t258=first(call(e->slot(1,14),Args{get(e->slot(1,2),lit43)}));refs[0].put(std::move(t258));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t259=V(false);refs[0].put(std::move(t259));}
}
call(e->slot(1,34),Args{});
return Args{};}));
Ref(e->slot(0,1),lit206).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t260=get(e->slot(1,2),lit43);return !truth(t260)?V(0.0):t260;})()};
return Args{};}));
Ref(e->slot(0,1),lit207).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t261=get(e->slot(1,2),lit38);return !truth(t261)?V(0.0):t261;})()};
return Args{};}));
Ref(e->slot(0,1),lit208).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t262=get(e->slot(1,2),lit39);return !truth(t262)?V(0.0):t262;})()};
return Args{};}));
Ref(e->slot(0,1),lit209).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t263=get(e->slot(1,2),lit40);return !truth(t263)?V(0.0):t263;})()};
return Args{};}));
Ref(e->slot(0,1),lit210).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t264=get(e->slot(1,2),lit41);return !truth(t264)?V(0.0):t264;})()};
return Args{};}));
Ref(e->slot(0,1),lit211).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t265=get(e->slot(1,2),lit42);return !truth(t265)?V(0.0):t265;})()};
return Args{};}));
Ref(e->slot(0,1),lit212).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,2),lit34)};
return Args{};}));
Ref(e->slot(0,1),lit213).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit214).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit215),Args{concat(lit216,concat(lit217,concat(lit218,concat(lit219,concat(lit220,lit221))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit79)})),([&](){V t266=get(e->slot(1,2),lit81);return !truth(t266)?V(0.0):t266;})(),([&](){V t267=([&](){V t268=get(e->slot(1,2),lit69);return truth(t268)?lit222:t268;})();return !truth(t267)?lit223:t267;})(),([&](){V t269=get(e->slot(1,2),lit43);return !truth(t269)?V(0.0):t269;})(),([&](){V t270=get(e->slot(1,2),lit44);return !truth(t270)?V(0.0):t270;})(),([&](){V t271=([&](){V t272=get(e->slot(1,2),lit66);return truth(t272)?lit224:t272;})();return !truth(t271)?lit225:t271;})(),([&](){V t273=([&](){V t274=get(e->slot(1,2),lit67);return truth(t274)?lit224:t274;})();return !truth(t273)?lit225:t273;})(),([&](){V t275=get(e->slot(1,2),lit38);return !truth(t275)?V(0.0):t275;})(),([&](){V t276=get(e->slot(1,2),lit39);return !truth(t276)?V(0.0):t276;})(),([&](){V t277=get(e->slot(1,2),lit40);return !truth(t277)?V(0.0):t277;})(),([&](){V t278=get(e->slot(1,2),lit41);return !truth(t278)?V(0.0):t278;})(),([&](){V t279=get(e->slot(1,2),lit42);return !truth(t279)?V(0.0):t279;})(),([&](){V t280=get(e->slot(1,2),lit48);return !truth(t280)?V(0.0):t280;})(),([&](){V t281=get(e->slot(1,2),lit49);return !truth(t281)?V(0.0):t281;})(),([&](){V t282=get(e->slot(1,2),lit50);return !truth(t282)?V(0.0):t282;})(),([&](){V t283=([&](){V t284=get(e->slot(1,2),lit71);return truth(t284)?lit222:t284;})();return !truth(t283)?lit223:t283;})(),([&](){V t285=([&](){V t286=get(e->slot(1,2),lit72);return truth(t286)?lit222:t286;})();return !truth(t285)?lit223:t285;})(),([&](){V t287=([&](){V t288=get(e->slot(1,2),lit73);return truth(t288)?lit222:t288;})();return !truth(t287)?lit223:t287;})(),([&](){V t289=([&](){V t290=get(e->slot(1,2),lit74);return truth(t290)?lit222:t290;})();return !truth(t289)?lit223:t289;})(),([&](){V t291=([&](){V t292=get(e->slot(1,2),lit75);return truth(t292)?lit222:t292;})();return !truth(t291)?lit223:t291;})(),([&](){V t293=([&](){V t294=get(e->slot(1,2),lit76);return truth(t294)?lit222:t294;})();return !truth(t293)?lit223:t293;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
