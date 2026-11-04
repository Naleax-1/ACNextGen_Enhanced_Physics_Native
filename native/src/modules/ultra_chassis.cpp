// Generated native C++ from pinned ultra_chassis.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("dCamber_dRoll");
static const V lit3("dCamber_dSteer");
static const V lit4("dToe_dRoll");
static const V lit5("dToe_dSteer");
static const V lit6("staticCamberFront");
static const V lit7("pi");
static const V lit8("staticCamberRear");
static const V lit9("staticToeFront");
static const V lit10("staticToeRear");
static const V lit11("maxSteerDeg");
static const V lit12("ackermannScale");
static const V lit13("steerCamberScale");
static const V lit14("travelReference");
static const V lit15("travelToeScale");
static const V lit16("travelCamberScale");
static const V lit17("rollInputScale");
static const V lit18("loadPathCamberGain");
static const V lit19("loadPathToeGain");
static const V lit20("roadInputToeGain");
static const V lit21("tireForceToeGain");
static const V lit22("contactLossToeGain");
static const V lit23("contactLossCamberGain");
static const V lit24("maxCamberRad");
static const V lit25("maxToeRad");
static const V lit26("maxAlphaOffsetRad");
static const V lit27("minMuCamber");
static const V lit28("maxMuCamber");
static const V lit29("camberTau");
static const V lit30("toeTau");
static const V lit31("rollTau");
static const V lit32("minDt");
static const V lit33("maxDt");
static const V lit34("debugStoreInterval");
static const V lit35("FL");
static const V lit36("FR");
static const V lit37("RL");
static const V lit38("RR");
static const V lit39("state");
static const V lit40("camber");
static const V lit41("toe");
static const V lit42("targetCamber");
static const V lit43("targetToe");
static const V lit44("muCamber");
static const V lit45("alphaOffset");
static const V lit46("travel");
static const V lit47("travelNorm");
static const V lit48("loadPath");
static const V lit49("roadInput");
static const V lit50("contactLoss");
static const V lit51("tireForceLat");
static const V lit52("steerInput");
static const V lit53("steerDeg");
static const V lit54("roll");
static const V lit55("rollFiltered");
static const V lit56("avgCamberAbs");
static const V lit57("avgToeAbs");
static const V lit58("avgMuCamber");
static const V lit59("maxAlphaOffset");
static const V lit60("activeCount");
static const V lit61("status");
static const V lit62("INIT");
static const V lit63("updateCount");
static const V lit64("wheelsValid");
static const V lit65("suspensionLinked");
static const V lit66("rollLinked");
static const V lit67("steerLinked");
static const V lit68("loadPathLinked");
static const V lit69("roadLinked");
static const V lit70("contactLinked");
static const V lit71("tireForceLinked");
static const V lit72("debugStoreTimer");
static const V lit73("debugStoreNow");
static const V lit74("debug");
static const V lit75("huge");
static const V lit76("safeLoadRaw");
static const V lit77("safeStore");
static const V lit78("safeField");
static const V lit79("getCar");
static const V lit80("wheels");
static const V lit81("steer");
static const V lit82("CAR");
static const V lit83("ngp_steer_body");
static const V lit84("ngp_steer_input");
static const V lit85("ngp_steering_input");
static const V lit86("ngp_raw_steer");
static const V lit87("ngp_driver_steer");
static const V lit88("ngp_observer_steer");
static const V lit89("suspensionTravel");
static const V lit90("suspensionPosition");
static const V lit91("damperTravel");
static const V lit92("suspensionCompression");
static const V lit93("ngp_susp_travel_");
static const V lit94("ngp_suspension_travel_");
static const V lit95("ngp_damper_travel_");
static const V lit96("ngp_damper_deflection_");
static const V lit97("ngp_spring_travel_");
static const V lit98("ngp_road_body_travel_");
static const V lit99("WHEEL");
static const V lit100("max");
static const V lit101("ngp_roll_cg");
static const V lit102("ngp_sprung_roll_cg");
static const V lit103("ngp_body_roll_input");
static const V lit104("ngp_body_roll");
static const V lit105("ngp_chassis_roll");
static const V lit106("ngp_chassis_roll_energy");
static const V lit107("ngp_load_transfer_roll");
static const V lit108("ngp_dlt_roll");
static const V lit109("ngp_roll_front");
static const V lit110("ngp_roll_rear");
static const V lit111("ROLL_AXLE");
static const V lit112("localAngularVelocity");
static const V lit113("z");
static const V lit114("ngp_load_path_vertical_flow_");
static const V lit115("ngp_lp_vertical_flow_");
static const V lit116("ngp_load_path_work_");
static const V lit117("ngp_lp_work_");
static const V lit118("ngp_tire_force_road_input_");
static const V lit119("ngp_tf_road_input_");
static const V lit120("ngp_rii_road_input_");
static const V lit121("ngp_road_input_");
static const V lit122("ngp_rbi_wheel_input_");
static const V lit123("ngp_tire_contact_loss_");
static const V lit124("ngp_tcr_contact_loss_");
static const V lit125("ngp_contact_loss_");
static const V lit126("ngp_contact_hop_drop_");
static const V lit127("ngp_tire_force_lat_");
static const V lit128("ngp_tire_force_lateral_");
static const V lit129("ngp_tf_lat_");
static const V lit130("ngp_rf2_fy_");
static const V lit131("abs");
static const V lit132("cos");
static const V lit133("ngp_uc_camber_");
static const V lit134("ngp_uc_toe_");
static const V lit135("ngp_uc_mu_camber_");
static const V lit136("ngp_uc_alpha_offset_");
static const V lit137("ngp_uc_travel_");
static const V lit138("ngp_ultra_chassis_camber_");
static const V lit139("ngp_ultra_chassis_toe_");
static const V lit140("ngp_ultra_chassis_mu_camber_");
static const V lit141("ngp_ultra_chassis_alpha_offset_");
static const V lit142("ngp_uc_load_path_");
static const V lit143("ngp_uc_road_input_");
static const V lit144("ngp_uc_target_camber_");
static const V lit145("ngp_uc_target_toe_");
static const V lit146("ngp_uc_travel_norm_");
static const V lit147("ngp_uc_contact_loss_");
static const V lit148("ngp_uc_tire_force_lat_");
static const V lit149("ngp_ultra_chassis_status");
static const V lit150("UNKNOWN");
static const V lit151("ngp_ultra_chassis_update_count");
static const V lit152("ngp_ultra_chassis_wheels_valid");
static const V lit153("ngp_ultra_chassis_suspension_linked");
static const V lit154("ngp_ultra_chassis_roll_linked");
static const V lit155("ngp_ultra_chassis_steer_linked");
static const V lit156("ngp_uc_steer_deg");
static const V lit157("ngp_uc_roll");
static const V lit158("ngp_uc_avg_camber_abs");
static const V lit159("ngp_uc_avg_toe_abs");
static const V lit160("ngp_uc_avg_mu_camber");
static const V lit161("ngp_uc_max_alpha_offset");
static const V lit162("ngp_uc_active_count");
static const V lit163("ngp_uc_load_path_linked");
static const V lit164("ngp_uc_road_linked");
static const V lit165("ngp_uc_contact_linked");
static const V lit166("ngp_uc_tire_force_linked");
static const V lit167("init");
static const V lit168("update");
static const V lit169("RUNNING");
static const V lit170("NO WHEELS");
static const V lit171("STORE ONLY");
static const V lit172("getCamber");
static const V lit173("getToe");
static const V lit174("getMuCamber");
static const V lit175("getAlphaOffset");
static const V lit176("getTravel");
static const V lit177("getState");
static const V lit178("debugStr");
static const V lit179("format");
static const V lit180("%s UC / Cam %.3f / Toe %.3f\n");
static const V lit181("MuCam %.3f / AOff %.3f / Trav %.3f Norm %.2f\n");
static const V lit182("Target C %.3f / T %.3f / Road %.2f / CL %.2f");
static const V lit183("Status %s / Count %.0f / Wheels %s\n");
static const V lit184("Steer %.2f deg / Roll %.3f\n");
static const V lit185("Avg Cam %.3f Toe %.3f Mu %.3f AOff %.3f\n");
static const V lit186("Links Susp:%s Roll:%s Steer:%s LP:%s Road:%s CT:%s TF:%s\n");
static const V lit187("Camber %.3f %.3f %.3f %.3f\n");
static const V lit188("Toe    %.3f %.3f %.3f %.3f");
static const V lit189("OK");
static const V lit190("NIL");
static const V lit191("drawDebug");
static const V lit192("text");
static const V lit193("=== ULTRA CHASSIS ===");
V load_ultra_chassis(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(26);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(-num(V(0.45))));set(z,lit3,V(-num(V(0.015))));set(z,lit4,V(0.085));set(z,lit5,V(0.12));set(z,lit6,divv(mul(V(-num(V(1.2))),get(e->get("math"),lit7)),V(180.0)));set(z,lit8,divv(mul(V(-num(V(0.8))),get(e->get("math"),lit7)),V(180.0)));set(z,lit9,divv(mul(V(0.0),get(e->get("math"),lit7)),V(180.0)));set(z,lit10,divv(mul(V(0.05),get(e->get("math"),lit7)),V(180.0)));set(z,lit11,V(35.0));set(z,lit12,V(0.00035));set(z,lit13,V(0.12));set(z,lit14,V(0.08));set(z,lit15,V(0.75));set(z,lit16,V(0.35));set(z,lit17,V(1.0));set(z,lit18,V(0.018));set(z,lit19,V(0.01));set(z,lit20,V(0.012));set(z,lit21,V(1.5e-05));set(z,lit22,V(0.012));set(z,lit23,V(0.01));set(z,lit24,V(0.25));set(z,lit25,V(0.15));set(z,lit26,V(0.2));set(z,lit27,V(0.82));set(z,lit28,V(1.03));set(z,lit29,V(0.07));set(z,lit30,V(0.06));set(z,lit31,V(0.08));set(z,lit32,V(5e-05));set(z,lit33,V(0.03));set(z,lit34,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit35);set(z,V(1.0),lit36);set(z,V(2.0),lit37);set(z,V(3.0),lit38);return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit39)};V t5=([&](){V z=table();set(z,lit40,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit41,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit42,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit43,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit44,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit45,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit46,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit47,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit48,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit49,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit50,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit51,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(1.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,lit62);set(z,lit63,V(0.0));set(z,lit64,V(false));set(z,lit65,V(false));set(z,lit66,V(false));set(z,lit67,V(false));set(z,lit68,V(false));set(z,lit69,V(false));set(z,lit70,V(false));set(z,lit71,V(false));set(z,lit72,V(999.0));set(z,lit73,V(true));return z;})();refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit74)};V t6=get(e->slot(0,1),lit39);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit75)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit75)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
{V t14=get(e->slot(0,0),lit76);e->slot(0,6)=std::move(t14);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t15=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t15);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t17=e->slot(0,1);return !truth(t17)?V(0.0):t17;})()});
return Args{};});
{V t18=get(e->slot(0,0),lit77);e->slot(0,8)=std::move(t18);}
{V t19=get(e->slot(0,0),lit78);e->slot(0,9)=std::move(t19);}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t20=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t21=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t22=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t23=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t23));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t24=divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3)));e->slot(0,4)=std::move(t24);}
{std::array<Ref,1> refs{Ref(e,0,4)};V t25=first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t25));}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit72)};V t26=add(([&](){V t27=get(get(e->slot(1,1),lit39),lit72);return !truth(t27)?V(0.0):t27;})(),([&](){V t28=e->slot(0,0);return !truth(t28)?V(0.0):t28;})());refs[0].put(std::move(t26));}
if(truth(ge(get(get(e->slot(1,1),lit39),lit72),get(get(e->slot(1,1),lit1),lit34)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit72)};V t29=V(0.0);refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit73)};V t30=V(true);refs[0].put(std::move(t30));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit73)};V t31=V(false);refs[0].put(std::move(t31));}
}
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t32=V(!truth(e->get("ac")));return !truth(t32)?V(!truth(get(e->get("ac"),lit79))):t32;})())){return Args{V()};
}
{Args t33=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit79),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t33,0);e->slot(0,1)=arg(t33,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t34=first(call(e->slot(1,9),Args{e->slot(0,0),lit80,V()}));e->slot(0,2)=std::move(t34);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t35=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t36=get(e->slot(1,2),e->slot(1,1));return !truth(t36)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t36;})()};
return Args{};})});e->slot(0,3)=arg(t35,0);e->slot(0,4)=arg(t35,1);}
if(truth(V(!truth(e->slot(0,3))))){return Args{V()};
}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t37=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t37);}
{double t38=num(V(1.0)),t39=num(length(e->slot(0,1))),t40=num(V(1.0));for(double t41=t38;(t40>0?t41<=t39:t41>=t39);t41+=t40){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t41);{V t42=first(call(e->slot(2,6),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t42);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t43=e->slot(1,0);return !truth(t43)?V(0.0):t43;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t44=e->slot(0,0);return !truth(t44)?V(0.0):t44;})(),V()};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t45=V();e->slot(0,1)=std::move(t45);}
{V t46=V();e->slot(0,2)=std::move(t46);}
if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t47=first(call(e->slot(2,9),Args{e->slot(1,0),lit81,V()}));e->slot(0,0)=std::move(t47);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t48=first(call(e->slot(2,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t49=lit82;refs[0].put(std::move(t49));}
}
}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,2> refs{Ref(e,0,1),Ref(e,0,2)};Args t50=call(e->slot(1,14),Args{V(0.0),lit83,lit84,lit85,lit86,lit87,lit88});refs[0].put(arg(t50,0));refs[1].put(arg(t50,1));}
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t51=first(call(e->slot(1,4),Args{e->slot(0,1),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit67)};V t52=([&](){V t53=([&](){V t54=ne(e->slot(0,2),V());return truth(t54)?V(true):t54;})();return !truth(t53)?V(false):t53;})();refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit52)};V t55=e->slot(0,1);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit53)};V t56=mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit11));refs[0].put(std::move(t56));}
return Args{e->slot(0,1),get(get(e->slot(1,1),lit39),lit53)};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t57=([&](){V z=table();set(z,V(1.0),lit89);set(z,V(2.0),lit90);set(z,V(3.0),lit91);set(z,V(4.0),lit46);set(z,V(5.0),lit92);return z;})();e->slot(0,1)=std::move(t57);}
{double t58=num(V(1.0)),t59=num(length(e->slot(0,1))),t60=num(V(1.0));for(double t61=t58;(t60>0?t61<=t59:t61>=t59);t61+=t60){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t61);{V t62=first(call(e->slot(2,9),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t62);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(2,3),Args{e->slot(0,1),V(0.0)});
}
}}
return Args{V()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t63=call(e->slot(1,14),Args{V(),concat(lit93,e->slot(0,0)),concat(lit94,e->slot(0,0)),concat(lit95,e->slot(0,0)),concat(lit96,e->slot(0,0)),concat(lit97,e->slot(0,0)),concat(lit98,e->slot(0,0))});e->slot(0,2)=arg(t63,0);e->slot(0,3)=arg(t63,1);}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t64=first(call(e->slot(1,16),Args{e->slot(0,1)}));refs[0].put(std::move(t64));}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t65=lit99;refs[0].put(std::move(t65));}
}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t66=V(0.0);refs[0].put(std::move(t66));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit65)};V t67=V(true);refs[0].put(std::move(t67));}
}
{V t68=first(call(e->slot(1,4),Args{e->slot(0,2),V(-num(V(0.25))),V(0.25)}));e->slot(0,4)=std::move(t68);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit46),e->slot(0,0))};V t69=e->slot(0,4);refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit47),e->slot(0,0))};V t70=first(call(e->slot(1,4),Args{divv(e->slot(0,4),first(call(get(e->get("math"),lit100),Args{get(get(e->slot(1,1),lit1),lit14),V(0.001)}))),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t70));}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t71=call(e->slot(1,14),Args{V(),lit101,lit102,lit103,lit104,lit105,lit106,lit107,lit108});e->slot(0,1)=arg(t71,0);e->slot(0,2)=arg(t71,1);}
if(truth(eq(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t72=first(call(e->slot(2,6),Args{lit109}));e->slot(0,0)=std::move(t72);}
{V t73=first(call(e->slot(2,6),Args{lit110}));e->slot(0,1)=std::move(t73);}
if(truth(([&](){V t74=ne(e->slot(0,0),V());return !truth(t74)?ne(e->slot(0,1),V()):t74;})())){{std::array<Ref,1> refs{Ref(e,1,1)};V t75=mul(add(first(call(e->slot(2,3),Args{e->slot(0,0),V(0.0)})),first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)}))),V(0.5));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t76=lit111;refs[0].put(std::move(t76));}
}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit66)};V t77=V(true);refs[0].put(std::move(t77));}
return call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(0.35))),V(0.35)});
}
{V t78=first(call(e->slot(1,9),Args{e->slot(0,0),lit112,V()}));e->slot(0,3)=std::move(t78);}
if(truth(([&](){V t79=e->slot(0,3);return truth(t79)?ne(get(e->slot(0,3),lit113),V()):t79;})())){return call(e->slot(1,4),Args{mul(first(call(e->slot(1,3),Args{get(e->slot(0,3),lit113),V(0.0)})),V(0.035)),V(-num(V(0.25))),V(0.25)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t80=call(e->slot(1,14),Args{V(0.0),concat(lit114,e->slot(0,0)),concat(lit115,e->slot(0,0)),concat(lit116,e->slot(0,0)),concat(lit117,e->slot(0,0))});e->slot(0,1)=arg(t80,0);e->slot(0,2)=arg(t80,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit68)};V t81=V(true);refs[0].put(std::move(t81));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit48),e->slot(0,0))};V t82=first(call(e->slot(1,4),Args{e->slot(0,1),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t82));}
{Args t83=call(e->slot(1,14),Args{V(0.0),concat(lit118,e->slot(0,0)),concat(lit119,e->slot(0,0)),concat(lit120,e->slot(0,0)),concat(lit121,e->slot(0,0)),concat(lit122,e->slot(0,0))});e->slot(0,3)=arg(t83,0);e->slot(0,4)=arg(t83,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit69)};V t84=V(true);refs[0].put(std::move(t84));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit49),e->slot(0,0))};V t85=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(2.0)}));refs[0].put(std::move(t85));}
{Args t86=call(e->slot(1,14),Args{V(0.0),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0)),concat(lit125,e->slot(0,0)),concat(lit126,e->slot(0,0))});e->slot(0,5)=arg(t86,0);e->slot(0,6)=arg(t86,1);}
if(truth(ne(e->slot(0,6),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit70)};V t87=V(true);refs[0].put(std::move(t87));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit50),e->slot(0,0))};V t88=first(call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(1.0)}));refs[0].put(std::move(t88));}
{Args t89=call(e->slot(1,14),Args{V(0.0),concat(lit127,e->slot(0,0)),concat(lit128,e->slot(0,0)),concat(lit129,e->slot(0,0)),concat(lit130,e->slot(0,0))});e->slot(0,7)=arg(t89,0);e->slot(0,8)=arg(t89,1);}
if(truth(ne(e->slot(0,8),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit71)};V t90=V(true);refs[0].put(std::move(t90));}
}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit51),e->slot(0,0))};V t91=first(call(e->slot(1,4),Args{e->slot(0,7),V(-num(V(6000.0))),V(6000.0)}));refs[0].put(std::move(t91));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,29);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t92=get(e->slot(1,1),lit1);e->slot(0,3)=std::move(t92);}
{V t93=lt(e->slot(0,0),V(2.0));e->slot(0,4)=std::move(t93);}
{V t94=([&](){V t95=eq(e->slot(0,0),V(1.0));return !truth(t95)?eq(e->slot(0,0),V(3.0)):t95;})();e->slot(0,5)=std::move(t94);}
{V t96=([&](){V t97=([&](){V t98=e->slot(0,5);return truth(t98)?V(1.0):t98;})();return !truth(t97)?V(-num(V(1.0))):t97;})();e->slot(0,6)=std::move(t96);}
{V t99=([&](){V t100=([&](){V t101=e->slot(0,4);return truth(t101)?get(e->slot(0,3),lit6):t101;})();return !truth(t100)?get(e->slot(0,3),lit8):t100;})();e->slot(0,7)=std::move(t99);}
{V t102=([&](){V t103=([&](){V t104=e->slot(0,4);return truth(t104)?get(e->slot(0,3),lit9):t104;})();return !truth(t103)?get(e->slot(0,3),lit10):t103;})();e->slot(0,8)=std::move(t102);}
{V t105=([&](){V t106=get(get(get(e->slot(1,1),lit39),lit46),e->slot(0,0));return !truth(t106)?V(0.0):t106;})();e->slot(0,9)=std::move(t105);}
{V t107=([&](){V t108=get(get(get(e->slot(1,1),lit39),lit47),e->slot(0,0));return !truth(t108)?V(0.0):t108;})();e->slot(0,10)=std::move(t107);}
{V t109=([&](){V t110=get(get(get(e->slot(1,1),lit39),lit48),e->slot(0,0));return !truth(t110)?V(0.0):t110;})();e->slot(0,11)=std::move(t109);}
{V t111=([&](){V t112=get(get(get(e->slot(1,1),lit39),lit49),e->slot(0,0));return !truth(t112)?V(0.0):t112;})();e->slot(0,12)=std::move(t111);}
{V t113=([&](){V t114=get(get(get(e->slot(1,1),lit39),lit50),e->slot(0,0));return !truth(t114)?V(0.0):t114;})();e->slot(0,13)=std::move(t113);}
{V t115=([&](){V t116=get(get(get(e->slot(1,1),lit39),lit51),e->slot(0,0));return !truth(t116)?V(0.0):t116;})();e->slot(0,14)=std::move(t115);}
{V t117=mul(mul(mul(get(e->slot(0,3),lit2),e->slot(0,2)),e->slot(0,6)),get(e->slot(0,3),lit17));e->slot(0,15)=std::move(t117);}
{V t118=V(0.0);e->slot(0,16)=std::move(t118);}
if(truth(e->slot(0,4))){{std::array<Ref,1> refs{Ref(e,0,16)};V t119=divv(mul(mul(mul(get(e->slot(0,3),lit3),first(call(get(e->get("math"),lit131),Args{e->slot(0,1)}))),get(e->slot(0,3),lit13)),get(e->get("math"),lit7)),V(180.0));refs[0].put(std::move(t119));}
}
{V t120=mul(mul(V(-num(e->slot(0,10))),get(e->slot(0,3),lit16)),V(0.035));e->slot(0,17)=std::move(t120);}
{V t121=mul(mul(first(call(e->slot(1,4),Args{e->slot(0,11),V(-num(V(1.5))),V(1.5)})),get(e->slot(0,3),lit18)),e->slot(0,6));e->slot(0,18)=std::move(t121);}
{V t122=mul(mul(V(-num(e->slot(0,13))),get(e->slot(0,3),lit23)),e->slot(0,6));e->slot(0,19)=std::move(t122);}
{V t123=add(add(add(add(add(e->slot(0,7),e->slot(0,15)),e->slot(0,16)),e->slot(0,17)),e->slot(0,18)),e->slot(0,19));e->slot(0,20)=std::move(t123);}
{V t124=V(0.0);e->slot(0,21)=std::move(t124);}
if(truth(e->slot(0,4))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{std::array<Ref,1> refs{Ref(e,1,21)};V t125=divv(mul(mul(mul(mul(mul(get(e->slot(1,3),lit5),e->slot(1,1)),e->slot(1,1)),first(call(e->slot(2,5),Args{e->slot(1,1)}))),get(e->slot(1,3),lit12)),get(e->get("math"),lit7)),V(180.0));refs[0].put(std::move(t125));}
{V t126=gt(e->slot(1,1),V(0.0));e->slot(0,0)=std::move(t126);}
{V t127=([&](){V t128=([&](){V t129=e->slot(0,0);return truth(t129)?e->slot(1,5):t129;})();return !truth(t128)?([&](){V t130=V(!truth(e->slot(0,0)));return truth(t130)?V(!truth(e->slot(1,5))):t130;})():t128;})();e->slot(0,1)=std::move(t127);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,1,21)};V t131=mul(e->slot(1,21),V(1.18));refs[0].put(std::move(t131));}
}else{{std::array<Ref,1> refs{Ref(e,1,21)};V t132=mul(e->slot(1,21),V(0.82));refs[0].put(std::move(t132));}
}
}
{V t133=mul(mul(get(e->slot(0,3),lit4),e->slot(0,9)),get(e->slot(0,3),lit15));e->slot(0,22)=std::move(t133);}
{V t134=mul(mul(mul(get(e->slot(0,3),lit4),e->slot(0,2)),e->slot(0,6)),V(0.25));e->slot(0,23)=std::move(t134);}
{V t135=mul(mul(first(call(e->slot(1,4),Args{e->slot(0,11),V(-num(V(1.5))),V(1.5)})),get(e->slot(0,3),lit19)),e->slot(0,6));e->slot(0,24)=std::move(t135);}
{V t136=mul(mul(e->slot(0,12),get(e->slot(0,3),lit20)),e->slot(0,6));e->slot(0,25)=std::move(t136);}
{V t137=first(call(e->slot(1,4),Args{mul(e->slot(0,14),get(e->slot(0,3),lit21)),V(-num(V(0.035))),V(0.035)}));e->slot(0,26)=std::move(t137);}
{V t138=mul(mul(e->slot(0,13),get(e->slot(0,3),lit22)),e->slot(0,6));e->slot(0,27)=std::move(t138);}
{V t139=add(add(add(add(add(add(add(e->slot(0,8),e->slot(0,21)),e->slot(0,22)),e->slot(0,23)),e->slot(0,24)),e->slot(0,25)),e->slot(0,26)),e->slot(0,27));e->slot(0,28)=std::move(t139);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit42),e->slot(0,0))};V t140=first(call(e->slot(1,4),Args{e->slot(0,20),V(-num(get(e->slot(0,3),lit24))),get(e->slot(0,3),lit24)}));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit43),e->slot(0,0))};V t141=first(call(e->slot(1,4),Args{e->slot(0,28),V(-num(get(e->slot(0,3),lit25))),get(e->slot(0,3),lit25)}));refs[0].put(std::move(t141));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t142=get(e->slot(1,1),lit1);e->slot(0,2)=std::move(t142);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0))};V t143=first(call(e->slot(1,10),Args{([&](){V t144=get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0));return !truth(t144)?V(0.0):t144;})(),([&](){V t145=get(get(get(e->slot(1,1),lit39),lit42),e->slot(0,0));return !truth(t145)?V(0.0):t145;})(),get(e->slot(0,2),lit29),e->slot(0,1)}));refs[0].put(std::move(t143));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0))};V t146=first(call(e->slot(1,10),Args{([&](){V t147=get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0));return !truth(t147)?V(0.0):t147;})(),([&](){V t148=get(get(get(e->slot(1,1),lit39),lit43),e->slot(0,0));return !truth(t148)?V(0.0):t148;})(),get(e->slot(0,2),lit30),e->slot(0,1)}));refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0))};V t149=first(call(e->slot(1,4),Args{get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0)),V(-num(get(e->slot(0,2),lit24))),get(e->slot(0,2),lit24)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0))};V t150=first(call(e->slot(1,4),Args{get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0)),V(-num(get(e->slot(0,2),lit25))),get(e->slot(0,2),lit25)}));refs[0].put(std::move(t150));}
{V t151=first(call(get(e->get("math"),lit132),call(get(e->get("math"),lit131),Args{([&](){V t152=get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0));return !truth(t152)?V(0.0):t152;})()})));e->slot(0,3)=std::move(t151);}
{std::array<Ref,1> refs{Ref(e,0,3)};V t153=mul(e->slot(0,3),sub(V(1.0),mul(([&](){V t154=get(get(get(e->slot(1,1),lit39),lit50),e->slot(0,0));return !truth(t154)?V(0.0):t154;})(),V(0.015))));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit44),e->slot(0,0))};V t155=first(call(e->slot(1,4),Args{e->slot(0,3),get(e->slot(0,2),lit27),get(e->slot(0,2),lit28)}));refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit39),lit45),e->slot(0,0))};V t156=first(call(e->slot(1,4),Args{([&](){V t157=get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0));return !truth(t157)?V(0.0):t157;})(),V(-num(get(e->slot(0,2),lit26))),get(e->slot(0,2),lit26)}));refs[0].put(std::move(t156));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,8),Args{concat(lit133,e->slot(0,0)),([&](){V t158=get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0));return !truth(t158)?V(0.0):t158;})()});
call(e->slot(1,8),Args{concat(lit134,e->slot(0,0)),([&](){V t159=get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0));return !truth(t159)?V(0.0):t159;})()});
call(e->slot(1,8),Args{concat(lit135,e->slot(0,0)),([&](){V t160=get(get(get(e->slot(1,1),lit39),lit44),e->slot(0,0));return !truth(t160)?V(1.0):t160;})()});
call(e->slot(1,8),Args{concat(lit136,e->slot(0,0)),([&](){V t161=get(get(get(e->slot(1,1),lit39),lit45),e->slot(0,0));return !truth(t161)?V(0.0):t161;})()});
call(e->slot(1,8),Args{concat(lit137,e->slot(0,0)),([&](){V t162=get(get(get(e->slot(1,1),lit39),lit46),e->slot(0,0));return !truth(t162)?V(0.0):t162;})()});
call(e->slot(1,8),Args{concat(lit138,e->slot(0,0)),([&](){V t163=get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0));return !truth(t163)?V(0.0):t163;})()});
call(e->slot(1,8),Args{concat(lit139,e->slot(0,0)),([&](){V t164=get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0));return !truth(t164)?V(0.0):t164;})()});
call(e->slot(1,8),Args{concat(lit140,e->slot(0,0)),([&](){V t165=get(get(get(e->slot(1,1),lit39),lit44),e->slot(0,0));return !truth(t165)?V(1.0):t165;})()});
call(e->slot(1,8),Args{concat(lit141,e->slot(0,0)),([&](){V t166=get(get(get(e->slot(1,1),lit39),lit45),e->slot(0,0));return !truth(t166)?V(0.0):t166;})()});
call(e->slot(1,8),Args{concat(lit142,e->slot(0,0)),([&](){V t167=get(get(get(e->slot(1,1),lit39),lit48),e->slot(0,0));return !truth(t167)?V(0.0):t167;})()});
call(e->slot(1,8),Args{concat(lit143,e->slot(0,0)),([&](){V t168=get(get(get(e->slot(1,1),lit39),lit49),e->slot(0,0));return !truth(t168)?V(0.0):t168;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit39),lit73))))){return Args{};
}
call(e->slot(1,8),Args{concat(lit144,e->slot(0,0)),([&](){V t169=get(get(get(e->slot(1,1),lit39),lit42),e->slot(0,0));return !truth(t169)?V(0.0):t169;})()});
call(e->slot(1,8),Args{concat(lit145,e->slot(0,0)),([&](){V t170=get(get(get(e->slot(1,1),lit39),lit43),e->slot(0,0));return !truth(t170)?V(0.0):t170;})()});
call(e->slot(1,8),Args{concat(lit146,e->slot(0,0)),([&](){V t171=get(get(get(e->slot(1,1),lit39),lit47),e->slot(0,0));return !truth(t171)?V(0.0):t171;})()});
call(e->slot(1,8),Args{concat(lit147,e->slot(0,0)),([&](){V t172=get(get(get(e->slot(1,1),lit39),lit50),e->slot(0,0));return !truth(t172)?V(0.0):t172;})()});
call(e->slot(1,8),Args{concat(lit148,e->slot(0,0)),([&](){V t173=get(get(get(e->slot(1,1),lit39),lit51),e->slot(0,0));return !truth(t173)?V(0.0):t173;})()});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,8),Args{lit149,([&](){V t174=get(get(e->slot(1,1),lit39),lit61);return !truth(t174)?lit150:t174;})()});
call(e->slot(1,8),Args{lit151,([&](){V t175=get(get(e->slot(1,1),lit39),lit63);return !truth(t175)?V(0.0):t175;})()});
call(e->slot(1,8),Args{lit152,([&](){V t176=([&](){V t177=get(get(e->slot(1,1),lit39),lit64);return truth(t177)?V(1.0):t177;})();return !truth(t176)?V(0.0):t176;})()});
call(e->slot(1,8),Args{lit153,([&](){V t178=([&](){V t179=get(get(e->slot(1,1),lit39),lit65);return truth(t179)?V(1.0):t179;})();return !truth(t178)?V(0.0):t178;})()});
call(e->slot(1,8),Args{lit154,([&](){V t180=([&](){V t181=get(get(e->slot(1,1),lit39),lit66);return truth(t181)?V(1.0):t181;})();return !truth(t180)?V(0.0):t180;})()});
call(e->slot(1,8),Args{lit155,([&](){V t182=([&](){V t183=get(get(e->slot(1,1),lit39),lit67);return truth(t183)?V(1.0):t183;})();return !truth(t182)?V(0.0):t182;})()});
call(e->slot(1,8),Args{lit156,([&](){V t184=get(get(e->slot(1,1),lit39),lit53);return !truth(t184)?V(0.0):t184;})()});
call(e->slot(1,8),Args{lit157,([&](){V t185=get(get(e->slot(1,1),lit39),lit55);return !truth(t185)?V(0.0):t185;})()});
call(e->slot(1,8),Args{lit158,([&](){V t186=get(get(e->slot(1,1),lit39),lit56);return !truth(t186)?V(0.0):t186;})()});
call(e->slot(1,8),Args{lit159,([&](){V t187=get(get(e->slot(1,1),lit39),lit57);return !truth(t187)?V(0.0):t187;})()});
call(e->slot(1,8),Args{lit160,([&](){V t188=get(get(e->slot(1,1),lit39),lit58);return !truth(t188)?V(1.0):t188;})()});
call(e->slot(1,8),Args{lit161,([&](){V t189=get(get(e->slot(1,1),lit39),lit59);return !truth(t189)?V(0.0):t189;})()});
call(e->slot(1,8),Args{lit162,([&](){V t190=get(get(e->slot(1,1),lit39),lit60);return !truth(t190)?V(0.0):t190;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit39),lit73))))){return Args{};
}
call(e->slot(1,8),Args{lit163,([&](){V t191=([&](){V t192=get(get(e->slot(1,1),lit39),lit68);return truth(t192)?V(1.0):t192;})();return !truth(t191)?V(0.0):t191;})()});
call(e->slot(1,8),Args{lit164,([&](){V t193=([&](){V t194=get(get(e->slot(1,1),lit39),lit69);return truth(t194)?V(1.0):t194;})();return !truth(t193)?V(0.0):t193;})()});
call(e->slot(1,8),Args{lit165,([&](){V t195=([&](){V t196=get(get(e->slot(1,1),lit39),lit70);return truth(t196)?V(1.0):t196;})();return !truth(t195)?V(0.0):t195;})()});
call(e->slot(1,8),Args{lit166,([&](){V t197=([&](){V t198=get(get(e->slot(1,1),lit39),lit71);return truth(t198)?V(1.0):t198;})();return !truth(t197)?V(0.0):t197;})()});
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t199=num(V(0.0)),t200=num(V(3.0)),t201=num(V(1.0));for(double t202=t199;(t201>0?t202<=t200:t202>=t200);t202+=t201){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t202);call(e->slot(2,22),Args{e->slot(0,0)});
}}
call(e->slot(1,23),Args{});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t203=V(0.0);e->slot(0,0)=std::move(t203);}
{V t204=V(0.0);e->slot(0,1)=std::move(t204);}
{V t205=V(0.0);e->slot(0,2)=std::move(t205);}
{V t206=V(0.0);e->slot(0,3)=std::move(t206);}
{V t207=V(0.0);e->slot(0,4)=std::move(t207);}
{double t208=num(V(0.0)),t209=num(V(3.0)),t210=num(V(1.0));for(double t211=t208;(t210>0?t211<=t209:t211>=t209);t211+=t210){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t211);{std::array<Ref,1> refs{Ref(e,1,0)};V t212=add(e->slot(1,0),first(call(get(e->get("math"),lit131),Args{([&](){V t213=get(get(get(e->slot(2,1),lit39),lit40),e->slot(0,0));return !truth(t213)?V(0.0):t213;})()})));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t214=add(e->slot(1,1),first(call(get(e->get("math"),lit131),Args{([&](){V t215=get(get(get(e->slot(2,1),lit39),lit41),e->slot(0,0));return !truth(t215)?V(0.0):t215;})()})));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t216=add(e->slot(1,2),([&](){V t217=get(get(get(e->slot(2,1),lit39),lit44),e->slot(0,0));return !truth(t217)?V(1.0):t217;})());refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t218=first(call(get(e->get("math"),lit100),joined(Args{e->slot(1,3)},call(get(e->get("math"),lit131),Args{([&](){V t219=get(get(get(e->slot(2,1),lit39),lit45),e->slot(0,0));return !truth(t219)?V(0.0):t219;})()}))));refs[0].put(std::move(t218));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t220=add(e->slot(1,4),V(1.0));refs[0].put(std::move(t220));}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit56)};V t221=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit57)};V t222=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit58)};V t223=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit59)};V t224=e->slot(0,3);refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit60)};V t225=e->slot(0,4);refs[0].put(std::move(t225));}
return Args{};});
Ref(e->slot(0,1),lit167).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit61)};V t226=lit62;refs[0].put(std::move(t226));}
call(e->slot(1,24),Args{});
return Args{};}));
Ref(e->slot(0,1),lit168).put(native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t227=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit32),get(get(e->slot(1,1),lit1),lit33)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit63)};V t228=add(([&](){V t229=get(get(e->slot(1,1),lit39),lit63);return !truth(t229)?V(0.0):t229;})(),V(1.0));refs[0].put(std::move(t228));}
call(e->slot(1,11),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t230=first(call(e->slot(1,12),Args{}));refs[0].put(std::move(t230));}
}
{V t231=ne(e->slot(0,1),V());e->slot(0,3)=std::move(t231);}
{V t232=([&](){V t233=e->slot(0,3);return truth(t233)?ne(first(call(e->slot(1,9),Args{e->slot(0,1),lit80,V()})),V()):t233;})();e->slot(0,4)=std::move(t232);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit65)};V t234=V(false);refs[0].put(std::move(t234));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit66)};V t235=V(false);refs[0].put(std::move(t235));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit67)};V t236=V(false);refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit68)};V t237=V(false);refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit69)};V t238=V(false);refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit70)};V t239=V(false);refs[0].put(std::move(t239));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit71)};V t240=V(false);refs[0].put(std::move(t240));}
if(truth(([&](){V t241=e->slot(0,3);return truth(t241)?e->slot(0,4):t241;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit61)};V t242=lit169;refs[0].put(std::move(t242));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit64)};V t243=V(true);refs[0].put(std::move(t243));}
}else if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit61)};V t244=lit170;refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit64)};V t245=V(false);refs[0].put(std::move(t245));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit61)};V t246=lit171;refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit64)};V t247=V(false);refs[0].put(std::move(t247));}
}

{Args t248=call(e->slot(1,15),Args{e->slot(0,1)});e->slot(0,5)=arg(t248,0);e->slot(0,6)=arg(t248,1);}
{V t249=first(call(e->slot(1,18),Args{e->slot(0,1)}));e->slot(0,7)=std::move(t249);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit54)};V t250=e->slot(0,7);refs[0].put(std::move(t250));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit39),lit55)};V t251=first(call(e->slot(1,10),Args{([&](){V t252=get(get(e->slot(1,1),lit39),lit55);return !truth(t252)?V(0.0):t252;})(),e->slot(0,7),get(get(e->slot(1,1),lit1),lit31),e->slot(0,0)}));refs[0].put(std::move(t251));}
{double t253=num(V(0.0)),t254=num(V(3.0)),t255=num(V(1.0));for(double t256=t253;(t255>0?t256<=t254:t256>=t254);t256+=t255){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t256);{V t257=first(call(e->slot(2,13),Args{e->slot(1,1),e->slot(0,0)}));e->slot(0,1)=std::move(t257);}
call(e->slot(2,17),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(2,19),Args{e->slot(0,0)});
call(e->slot(2,20),Args{e->slot(0,0),e->slot(1,6),get(get(e->slot(2,1),lit39),lit55)});
call(e->slot(2,21),Args{e->slot(0,0),e->slot(1,0)});
}}
call(e->slot(1,25),Args{});
call(e->slot(1,24),Args{});
return Args{};}));
Ref(e->slot(0,1),lit172).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t258=get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0));return !truth(t258)?V(0.0):t258;})()};
return Args{};}));
Ref(e->slot(0,1),lit173).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t259=get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0));return !truth(t259)?V(0.0):t259;})()};
return Args{};}));
Ref(e->slot(0,1),lit174).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t260=get(get(get(e->slot(1,1),lit39),lit44),e->slot(0,0));return !truth(t260)?V(1.0):t260;})()};
return Args{};}));
Ref(e->slot(0,1),lit175).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t261=get(get(get(e->slot(1,1),lit39),lit45),e->slot(0,0));return !truth(t261)?V(0.0):t261;})()};
return Args{};}));
Ref(e->slot(0,1),lit176).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t262=get(get(get(e->slot(1,1),lit39),lit46),e->slot(0,0));return !truth(t262)?V(0.0):t262;})()};
return Args{};}));
Ref(e->slot(0,1),lit177).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{get(e->slot(1,1),lit39)};
}
return Args{([&](){V z=table();set(z,lit40,([&](){V t263=get(get(get(e->slot(1,1),lit39),lit40),e->slot(0,0));return !truth(t263)?V(0.0):t263;})());set(z,lit41,([&](){V t264=get(get(get(e->slot(1,1),lit39),lit41),e->slot(0,0));return !truth(t264)?V(0.0):t264;})());set(z,lit44,([&](){V t265=get(get(get(e->slot(1,1),lit39),lit44),e->slot(0,0));return !truth(t265)?V(1.0):t265;})());set(z,lit45,([&](){V t266=get(get(get(e->slot(1,1),lit39),lit45),e->slot(0,0));return !truth(t266)?V(0.0):t266;})());set(z,lit46,([&](){V t267=get(get(get(e->slot(1,1),lit39),lit46),e->slot(0,0));return !truth(t267)?V(0.0):t267;})());set(z,lit47,([&](){V t268=get(get(get(e->slot(1,1),lit39),lit47),e->slot(0,0));return !truth(t268)?V(0.0):t268;})());set(z,lit49,([&](){V t269=get(get(get(e->slot(1,1),lit39),lit49),e->slot(0,0));return !truth(t269)?V(0.0):t269;})());set(z,lit50,([&](){V t270=get(get(get(e->slot(1,1),lit39),lit50),e->slot(0,0));return !truth(t270)?V(0.0):t270;})());return z;})()};
return Args{};}));
Ref(e->slot(0,1),lit178).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t271=([&](){V t272=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t272)?V(0.0):t272;})();e->slot(0,0)=std::move(t271);}
return call(get(e->get("string"),lit179),Args{concat(lit180,concat(lit181,lit182)),first(call(e->get("tostring"),Args{([&](){V t273=get(e->slot(2,2),e->slot(0,0));return !truth(t273)?e->slot(0,0):t273;})()})),([&](){V t274=get(get(get(e->slot(2,1),lit39),lit40),e->slot(0,0));return !truth(t274)?V(0.0):t274;})(),([&](){V t275=get(get(get(e->slot(2,1),lit39),lit41),e->slot(0,0));return !truth(t275)?V(0.0):t275;})(),([&](){V t276=get(get(get(e->slot(2,1),lit39),lit44),e->slot(0,0));return !truth(t276)?V(1.0):t276;})(),([&](){V t277=get(get(get(e->slot(2,1),lit39),lit45),e->slot(0,0));return !truth(t277)?V(0.0):t277;})(),([&](){V t278=get(get(get(e->slot(2,1),lit39),lit46),e->slot(0,0));return !truth(t278)?V(0.0):t278;})(),([&](){V t279=get(get(get(e->slot(2,1),lit39),lit47),e->slot(0,0));return !truth(t279)?V(0.0):t279;})(),([&](){V t280=get(get(get(e->slot(2,1),lit39),lit42),e->slot(0,0));return !truth(t280)?V(0.0):t280;})(),([&](){V t281=get(get(get(e->slot(2,1),lit39),lit43),e->slot(0,0));return !truth(t281)?V(0.0):t281;})(),([&](){V t282=get(get(get(e->slot(2,1),lit39),lit49),e->slot(0,0));return !truth(t282)?V(0.0):t282;})(),([&](){V t283=get(get(get(e->slot(2,1),lit39),lit50),e->slot(0,0));return !truth(t283)?V(0.0):t283;})()});
}
return call(get(e->get("string"),lit179),Args{concat(lit183,concat(lit184,concat(lit185,concat(lit186,concat(lit187,lit188))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit39),lit61)})),([&](){V t284=get(get(e->slot(1,1),lit39),lit63);return !truth(t284)?V(0.0):t284;})(),([&](){V t285=([&](){V t286=get(get(e->slot(1,1),lit39),lit64);return truth(t286)?lit189:t286;})();return !truth(t285)?lit190:t285;})(),([&](){V t287=get(get(e->slot(1,1),lit39),lit53);return !truth(t287)?V(0.0):t287;})(),([&](){V t288=get(get(e->slot(1,1),lit39),lit55);return !truth(t288)?V(0.0):t288;})(),([&](){V t289=get(get(e->slot(1,1),lit39),lit56);return !truth(t289)?V(0.0):t289;})(),([&](){V t290=get(get(e->slot(1,1),lit39),lit57);return !truth(t290)?V(0.0):t290;})(),([&](){V t291=get(get(e->slot(1,1),lit39),lit58);return !truth(t291)?V(1.0):t291;})(),([&](){V t292=get(get(e->slot(1,1),lit39),lit59);return !truth(t292)?V(0.0):t292;})(),([&](){V t293=([&](){V t294=get(get(e->slot(1,1),lit39),lit65);return truth(t294)?lit189:t294;})();return !truth(t293)?lit190:t293;})(),([&](){V t295=([&](){V t296=get(get(e->slot(1,1),lit39),lit66);return truth(t296)?lit189:t296;})();return !truth(t295)?lit190:t295;})(),([&](){V t297=([&](){V t298=get(get(e->slot(1,1),lit39),lit67);return truth(t298)?lit189:t298;})();return !truth(t297)?lit190:t297;})(),([&](){V t299=([&](){V t300=get(get(e->slot(1,1),lit39),lit68);return truth(t300)?lit189:t300;})();return !truth(t299)?lit190:t299;})(),([&](){V t301=([&](){V t302=get(get(e->slot(1,1),lit39),lit69);return truth(t302)?lit189:t302;})();return !truth(t301)?lit190:t301;})(),([&](){V t303=([&](){V t304=get(get(e->slot(1,1),lit39),lit70);return truth(t304)?lit189:t304;})();return !truth(t303)?lit190:t303;})(),([&](){V t305=([&](){V t306=get(get(e->slot(1,1),lit39),lit71);return truth(t306)?lit189:t306;})();return !truth(t305)?lit190:t305;})(),([&](){V t307=get(get(get(e->slot(1,1),lit39),lit40),V(0.0));return !truth(t307)?V(0.0):t307;})(),([&](){V t308=get(get(get(e->slot(1,1),lit39),lit40),V(1.0));return !truth(t308)?V(0.0):t308;})(),([&](){V t309=get(get(get(e->slot(1,1),lit39),lit40),V(2.0));return !truth(t309)?V(0.0):t309;})(),([&](){V t310=get(get(get(e->slot(1,1),lit39),lit40),V(3.0));return !truth(t310)?V(0.0):t310;})(),([&](){V t311=get(get(get(e->slot(1,1),lit39),lit41),V(0.0));return !truth(t311)?V(0.0):t311;})(),([&](){V t312=get(get(get(e->slot(1,1),lit39),lit41),V(1.0));return !truth(t312)?V(0.0):t312;})(),([&](){V t313=get(get(get(e->slot(1,1),lit39),lit41),V(2.0));return !truth(t313)?V(0.0):t313;})(),([&](){V t314=get(get(get(e->slot(1,1),lit39),lit41),V(3.0));return !truth(t314)?V(0.0):t314;})()});
return Args{};}));
Ref(e->slot(0,1),lit191).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit192),Args{lit193});
call(get(e->get("ui"),lit192),call(get(e->slot(1,1),lit178),Args{}));
{double t315=num(V(0.0)),t316=num(V(3.0)),t317=num(V(1.0));for(double t318=t315;(t317>0?t318<=t316:t318>=t316);t318+=t317){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t318);call(get(e->get("ui"),lit192),call(get(e->slot(2,1),lit178),Args{e->slot(0,0)}));
}}
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
