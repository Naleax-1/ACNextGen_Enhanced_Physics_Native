// Generated native C++ from pinned damage_state.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("minDamage");
static const V lit3("maxDamage");
static const V lit4("chassisGain");
static const V lit5("wheelGain");
static const V lit6("impactSensorGain");
static const V lit7("bodyRuntimeGain");
static const V lit8("brakeThermalGain");
static const V lit9("suspensionStressGain");
static const V lit10("tireContactGain");
static const V lit11("runtimeAccumulationScale");
static const V lit12("damageDecayWhenRepaired");
static const V lit13("maxRuntimeDamageAdd");
static const V lit14("minDt");
static const V lit15("maxDt");
static const V lit16("debugStoreInterval");
static const V lit17("chassis");
static const V lit18("wheel");
static const V lit19("totalDamage");
static const V lit20("wheelAvg");
static const V lit21("wheelMax");
static const V lit22("lastEventTotal");
static const V lit23("lastEventDelta");
static const V lit24("lastEventType");
static const V lit25("NONE");
static const V lit26("lastEventFront");
static const V lit27("lastEventRear");
static const V lit28("lastEventLeft");
static const V lit29("lastEventRight");
static const V lit30("lastRepairCount");
static const V lit31("impactSensorValue");
static const V lit32("runtimeDamageAdd");
static const V lit33("bodyRuntimePenalty");
static const V lit34("brakeThermalStress");
static const V lit35("suspensionStress");
static const V lit36("contactLossAvg");
static const V lit37("bodyLinked");
static const V lit38("brakeLinked");
static const V lit39("suspensionLinked");
static const V lit40("tireLinked");
static const V lit41("impactLinked");
static const V lit42("eventLinked");
static const V lit43("status");
static const V lit44("INIT");
static const V lit45("updateCount");
static const V lit46("debugStoreTimer");
static const V lit47("debugStoreNow");
static const V lit48("state");
static const V lit49("debug");
static const V lit50("huge");
static const V lit51("safeLoadRaw");
static const V lit52("");
static const V lit53("safeStore");
static const V lit54("getCar");
static const V lit55("ngp_impact_value");
static const V lit56("ngp_impact_strength");
static const V lit57("ngp_damage_event_last");
static const V lit58("ngp_damage_event_preserve_root");
static const V lit59("ngp_body_runtime_flex_penalty");
static const V lit60("ngp_chassis_flex_body_runtime_penalty");
static const V lit61("ngp_brake_root_heat_avg");
static const V lit62("ngp_brake_fade_root_add_avg");
static const V lit63("ngp_virtual_thermal_stress");
static const V lit64("ngp_chassis_roll_thermal_stress");
static const V lit65("ngp_weight_suspension_stress");
static const V lit66("ngp_chassis_flex_suspension_stress");
static const V lit67("ngp_chassis_roll_suspension_stress");
static const V lit68("ngp_tire_contact_loss_");
static const V lit69("ngp_tcr_contact_loss_");
static const V lit70("ngp_contact_loss_");
static const V lit71("ngp_damage_chassis");
static const V lit72("ngp_damage_total");
static const V lit73("ngp_damage_wheel_avg");
static const V lit74("ngp_damage_wheel_max");
static const V lit75("ngp_damage_wheel_");
static const V lit76("ngp_damage_state_status");
static const V lit77("UNKNOWN");
static const V lit78("ngp_damage_state_update_count");
static const V lit79("ngp_damage_state_event_total");
static const V lit80("ngp_damage_state_event_delta");
static const V lit81("ngp_damage_state_event_type");
static const V lit82("ngp_damage_runtime_add");
static const V lit83("ngp_damage_impact_sensor_value");
static const V lit84("ngp_damage_body_runtime");
static const V lit85("ngp_damage_brake_thermal");
static const V lit86("ngp_damage_suspension_stress");
static const V lit87("ngp_damage_contact_loss_avg");
static const V lit88("ngp_damage_body_linked");
static const V lit89("ngp_damage_brake_linked");
static const V lit90("ngp_damage_suspension_linked");
static const V lit91("ngp_damage_tire_linked");
static const V lit92("ngp_damage_impact_linked");
static const V lit93("ngp_damage_event_linked");
static const V lit94("ngp_condition_total");
static const V lit95("ngp_vehicle_condition_total");
static const V lit96("ngp_condition_chassis");
static const V lit97("ngp_vehicle_chassis_damage");
static const V lit98("ngp_condition_wheel_");
static const V lit99("ngp_vehicle_wheel_damage_");
static const V lit100("ngp_damage_front_delta");
static const V lit101("ngp_damage_rear_delta");
static const V lit102("ngp_damage_left_delta");
static const V lit103("ngp_damage_right_delta");
static const V lit104("VERTICAL");
static const V lit105("SIDE");
static const V lit106("FRONT/REAR");
static const V lit107("LONGITUDINAL");
static const V lit108("ngp_damage_event_repaired");
static const V lit109("reset");
static const V lit110("RESET BY EVENT");
static const V lit111("init");
static const V lit112("update");
static const V lit113("NO CAR");
static const V lit114("ngp_damage_event_total");
static const V lit115("ngp_damage_event_type");
static const V lit116("ngp_damage_event_front");
static const V lit117("ngp_damage_event_rear");
static const V lit118("ngp_damage_event_left");
static const V lit119("ngp_damage_event_right");
static const V lit120("EVENT RESET");
static const V lit121("RUNNING");
static const V lit122("max");
static const V lit123("damageChassis");
static const V lit124("damageWheel");
static const V lit125("setChassis");
static const V lit126("setWheel");
static const V lit127("RESET");
static const V lit128("get");
static const V lit129("getChassis");
static const V lit130("getWheel");
static const V lit131("getTotal");
static const V lit132("getRuntimeDamage");
static const V lit133("debugStr");
static const V lit134("format");
static const V lit135("Status %s / Count %.0f\n");
static const V lit136("Damage Total %.3f / Chassis %.3f / WAvg %.3f WMax %.3f\n");
static const V lit137("Wheel %.3f %.3f %.3f %.3f\n");
static const V lit138("EventTotal %.4f / Delta %.4f / Type %s\n");
static const V lit139("Runtime %.4f Impact %.3f Body %.3f Brake %.3f Susp %.3f Tire %.3f\n");
static const V lit140("Links Event:%s Impact:%s Body:%s Brake:%s Susp:%s Tire:%s");
static const V lit141("OK");
static const V lit142("NIL");
V load_damage_state(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(24);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.0));set(z,lit3,V(1.0));set(z,lit4,V(0.35));set(z,lit5,V(0.2));set(z,lit6,V(0.18));set(z,lit7,V(0.08));set(z,lit8,V(0.06));set(z,lit9,V(0.07));set(z,lit10,V(0.06));set(z,lit11,V(1.0));set(z,lit12,V(1.0));set(z,lit13,V(0.2));set(z,lit14,V(0.0001));set(z,lit15,V(0.05));set(z,lit16,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit17,V(0.0));set(z,lit18,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit19,V(0.0));set(z,lit20,V(0.0));set(z,lit21,V(0.0));set(z,lit22,V(0.0));set(z,lit23,V(0.0));set(z,lit24,lit25);set(z,lit26,V(0.0));set(z,lit27,V(0.0));set(z,lit28,V(0.0));set(z,lit29,V(0.0));set(z,lit30,V(0.0));set(z,lit31,V(0.0));set(z,lit32,V(0.0));set(z,lit33,V(0.0));set(z,lit34,V(0.0));set(z,lit35,V(0.0));set(z,lit36,V(0.0));set(z,lit37,V(false));set(z,lit38,V(false));set(z,lit39,V(false));set(z,lit40,V(false));set(z,lit41,V(false));set(z,lit42,V(false));set(z,lit43,lit44);set(z,lit45,V(0.0));set(z,lit46,V(999.0));set(z,lit47,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit48)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit49)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit50)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit50)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
return Args{([&](){V t15=([&](){V t16=lt(e->slot(0,0),V(0.0));return truth(t16)?V(-num(e->slot(0,0))):t16;})();return !truth(t15)?e->slot(0,0):t15;})()};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit2),get(get(e->slot(1,1),lit1),lit3)});
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t17=([&](){V t18=([&](){V t19=eq(e->slot(0,0),V(0.0));return !truth(t19)?eq(e->slot(0,0),V(1.0)):t19;})();return !truth(t18)?eq(e->slot(0,0),V(2.0)):t18;})();return !truth(t17)?eq(e->slot(0,0),V(3.0)):t17;})()};
return Args{};});
{V t20=get(e->slot(0,0),lit51);e->slot(0,8)=std::move(t20);}
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
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t32=first(call(e->slot(1,8),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t32);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t33=e->slot(0,1);return !truth(t33)?lit52:t33;})()};
}
return call(e->get("tostring"),Args{e->slot(0,2)});
return Args{};});
{V t34=get(e->slot(0,0),lit53);e->slot(0,12)=std::move(t34);}
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t35=V(!truth(e->get("ac")));return !truth(t35)?V(!truth(get(e->get("ac"),lit54))):t35;})())){return Args{V()};
}
{Args t36=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit54),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t36,0);e->slot(0,1)=arg(t36,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t37=add(([&](){V t38=get(e->slot(1,2),lit46);return !truth(t38)?V(0.0):t38;})(),([&](){V t39=e->slot(0,0);return !truth(t39)?V(0.0):t39;})());refs[0].put(std::move(t37));}
if(truth(ge(get(e->slot(1,2),lit46),get(get(e->slot(1,1),lit1),lit16)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t40=V(0.0);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t41=V(true);refs[0].put(std::move(t41));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t42=V(false);refs[0].put(std::move(t42));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t43=V(0.0);e->slot(0,0)=std::move(t43);}
{V t44=V(0.0);e->slot(0,1)=std::move(t44);}
{double t45=num(V(0.0)),t46=num(V(3.0)),t47=num(V(1.0));for(double t48=t45;(t47>0?t48<=t46:t48>=t46);t48+=t47){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t48);{V t49=first(call(e->slot(2,6),Args{([&](){V t50=get(get(e->slot(2,2),lit18),e->slot(0,0));return !truth(t50)?V(0.0):t50;})()}));e->slot(0,1)=std::move(t49);}
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit18),e->slot(0,0))};V t51=e->slot(0,1);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e,1,0)};V t52=add(e->slot(1,0),e->slot(0,1));refs[0].put(std::move(t52));}
if(truth(gt(e->slot(0,1),e->slot(1,1)))){{std::array<Ref,1> refs{Ref(e,1,1)};V t53=e->slot(0,1);refs[0].put(std::move(t53));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit17)};V t54=first(call(e->slot(1,6),Args{([&](){V t55=get(e->slot(1,2),lit17);return !truth(t55)?V(0.0):t55;})()}));refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit20)};V t56=first(call(e->slot(1,6),Args{mul(e->slot(0,0),V(0.25))}));refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit21)};V t57=first(call(e->slot(1,6),Args{e->slot(0,1)}));refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit19)};V t58=first(call(e->slot(1,6),Args{add(mul(get(e->slot(1,2),lit17),V(0.55)),mul(get(e->slot(1,2),lit20),V(0.45)))}));refs[0].put(std::move(t58));}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;{Args t59=call(e->slot(1,10),Args{V(0.0),lit55,lit56,lit57,lit58});e->slot(0,0)=arg(t59,0);e->slot(0,1)=arg(t59,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t60=ne(e->slot(0,1),V());refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit31)};V t61=first(call(e->slot(1,6),Args{e->slot(0,0)}));refs[0].put(std::move(t61));}
{Args t62=call(e->slot(1,10),Args{V(0.0),lit59,lit60});e->slot(0,2)=arg(t62,0);e->slot(0,3)=arg(t62,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t63=ne(e->slot(0,3),V());refs[0].put(std::move(t63));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t64=first(call(e->slot(1,6),Args{e->slot(0,2)}));refs[0].put(std::move(t64));}
{Args t65=call(e->slot(1,10),Args{V(0.0),lit61,lit62,lit63,lit64});e->slot(0,4)=arg(t65,0);e->slot(0,5)=arg(t65,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit38)};V t66=ne(e->slot(0,5),V());refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit34)};V t67=first(call(e->slot(1,6),Args{e->slot(0,4)}));refs[0].put(std::move(t67));}
{Args t68=call(e->slot(1,10),Args{V(0.0),lit65,lit66,lit67});e->slot(0,6)=arg(t68,0);e->slot(0,7)=arg(t68,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit39)};V t69=ne(e->slot(0,7),V());refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit35)};V t70=first(call(e->slot(1,6),Args{e->slot(0,6)}));refs[0].put(std::move(t70));}
{V t71=V(0.0);e->slot(0,8)=std::move(t71);}
{V t72=V(false);e->slot(0,9)=std::move(t72);}
{double t73=num(V(0.0)),t74=num(V(3.0)),t75=num(V(1.0));for(double t76=t73;(t75>0?t76<=t74:t76>=t74);t76+=t75){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t76);{Args t77=call(e->slot(2,10),Args{V(0.0),concat(lit68,e->slot(0,0)),concat(lit69,e->slot(0,0)),concat(lit70,e->slot(0,0))});e->slot(0,1)=arg(t77,0);e->slot(0,2)=arg(t77,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,1,9)};V t78=V(true);refs[0].put(std::move(t78));}
}
{std::array<Ref,1> refs{Ref(e,1,8)};V t79=add(e->slot(1,8),first(call(e->slot(2,6),Args{e->slot(0,1)})));refs[0].put(std::move(t79));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t80=e->slot(0,9);refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t81=first(call(e->slot(1,6),Args{mul(e->slot(0,8),V(0.25))}));refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t82=first(call(e->slot(1,6),Args{add(add(add(add(mul(get(e->slot(1,2),lit31),get(get(e->slot(1,1),lit1),lit6)),mul(get(e->slot(1,2),lit33),get(get(e->slot(1,1),lit1),lit7))),mul(get(e->slot(1,2),lit34),get(get(e->slot(1,1),lit1),lit8))),mul(get(e->slot(1,2),lit35),get(get(e->slot(1,1),lit1),lit9))),mul(get(e->slot(1,2),lit36),get(get(e->slot(1,1),lit1),lit10)))}));refs[0].put(std::move(t82));}
if(truth(gt(get(e->slot(1,2),lit32),get(get(e->slot(1,1),lit1),lit13)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t83=get(get(e->slot(1,1),lit1),lit13);refs[0].put(std::move(t83));}
}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,15),Args{});
call(e->slot(1,12),Args{lit71,get(e->slot(1,2),lit17)});
call(e->slot(1,12),Args{lit72,get(e->slot(1,2),lit19)});
call(e->slot(1,12),Args{lit73,get(e->slot(1,2),lit20)});
call(e->slot(1,12),Args{lit74,get(e->slot(1,2),lit21)});
{double t84=num(V(0.0)),t85=num(V(3.0)),t86=num(V(1.0));for(double t87=t84;(t86>0?t87<=t85:t87>=t85);t87+=t86){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t87);call(e->slot(2,12),Args{concat(lit75,e->slot(0,0)),([&](){V t88=get(get(e->slot(2,2),lit18),e->slot(0,0));return !truth(t88)?V(0.0):t88;})()});
}}
call(e->slot(1,12),Args{lit76,([&](){V t89=get(e->slot(1,2),lit43);return !truth(t89)?lit77:t89;})()});
call(e->slot(1,12),Args{lit78,([&](){V t90=get(e->slot(1,2),lit45);return !truth(t90)?V(0.0):t90;})()});
call(e->slot(1,12),Args{lit79,([&](){V t91=get(e->slot(1,2),lit22);return !truth(t91)?V(0.0):t91;})()});
call(e->slot(1,12),Args{lit80,([&](){V t92=get(e->slot(1,2),lit23);return !truth(t92)?V(0.0):t92;})()});
call(e->slot(1,12),Args{lit81,([&](){V t93=get(e->slot(1,2),lit24);return !truth(t93)?lit25:t93;})()});
call(e->slot(1,12),Args{lit82,([&](){V t94=get(e->slot(1,2),lit32);return !truth(t94)?V(0.0):t94;})()});
call(e->slot(1,12),Args{lit83,([&](){V t95=get(e->slot(1,2),lit31);return !truth(t95)?V(0.0):t95;})()});
call(e->slot(1,12),Args{lit84,([&](){V t96=get(e->slot(1,2),lit33);return !truth(t96)?V(0.0):t96;})()});
call(e->slot(1,12),Args{lit85,([&](){V t97=get(e->slot(1,2),lit34);return !truth(t97)?V(0.0):t97;})()});
call(e->slot(1,12),Args{lit86,([&](){V t98=get(e->slot(1,2),lit35);return !truth(t98)?V(0.0):t98;})()});
call(e->slot(1,12),Args{lit87,([&](){V t99=get(e->slot(1,2),lit36);return !truth(t99)?V(0.0):t99;})()});
call(e->slot(1,12),Args{lit88,([&](){V t100=([&](){V t101=get(e->slot(1,2),lit37);return truth(t101)?V(1.0):t101;})();return !truth(t100)?V(0.0):t100;})()});
call(e->slot(1,12),Args{lit89,([&](){V t102=([&](){V t103=get(e->slot(1,2),lit38);return truth(t103)?V(1.0):t103;})();return !truth(t102)?V(0.0):t102;})()});
call(e->slot(1,12),Args{lit90,([&](){V t104=([&](){V t105=get(e->slot(1,2),lit39);return truth(t105)?V(1.0):t105;})();return !truth(t104)?V(0.0):t104;})()});
call(e->slot(1,12),Args{lit91,([&](){V t106=([&](){V t107=get(e->slot(1,2),lit40);return truth(t107)?V(1.0):t107;})();return !truth(t106)?V(0.0):t106;})()});
call(e->slot(1,12),Args{lit92,([&](){V t108=([&](){V t109=get(e->slot(1,2),lit41);return truth(t109)?V(1.0):t109;})();return !truth(t108)?V(0.0):t108;})()});
call(e->slot(1,12),Args{lit93,([&](){V t110=([&](){V t111=get(e->slot(1,2),lit42);return truth(t111)?V(1.0):t111;})();return !truth(t110)?V(0.0):t110;})()});
call(e->slot(1,12),Args{lit94,get(e->slot(1,2),lit19)});
call(e->slot(1,12),Args{lit95,get(e->slot(1,2),lit19)});
call(e->slot(1,12),Args{lit96,get(e->slot(1,2),lit17)});
call(e->slot(1,12),Args{lit97,get(e->slot(1,2),lit17)});
{double t112=num(V(0.0)),t113=num(V(3.0)),t114=num(V(1.0));for(double t115=t112;(t114>0?t115<=t113:t115>=t113);t115+=t114){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t115);call(e->slot(2,12),Args{concat(lit98,e->slot(0,0)),([&](){V t116=get(get(e->slot(2,2),lit18),e->slot(0,0));return !truth(t116)?V(0.0):t116;})()});
call(e->slot(2,12),Args{concat(lit99,e->slot(0,0)),([&](){V t117=get(get(e->slot(2,2),lit18),e->slot(0,0));return !truth(t117)?V(0.0):t117;})()});
}}
call(e->slot(1,12),Args{lit100,([&](){V t118=get(e->slot(1,2),lit26);return !truth(t118)?V(0.0):t118;})()});
call(e->slot(1,12),Args{lit101,([&](){V t119=get(e->slot(1,2),lit27);return !truth(t119)?V(0.0):t119;})()});
call(e->slot(1,12),Args{lit102,([&](){V t120=get(e->slot(1,2),lit28);return !truth(t120)?V(0.0):t120;})()});
call(e->slot(1,12),Args{lit103,([&](){V t121=get(e->slot(1,2),lit29);return !truth(t121)?V(0.0):t121;})()});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit17)};V t122=first(call(e->slot(1,6),Args{add(([&](){V t123=get(e->slot(1,2),lit17);return !truth(t123)?V(0.0):t123;})(),first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})))}));refs[0].put(std::move(t122));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(first(call(e->slot(1,7),Args{e->slot(0,0)})))))){return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit18),e->slot(0,0))};V t124=first(call(e->slot(1,6),Args{add(([&](){V t125=get(get(e->slot(1,2),lit18),e->slot(0,0));return !truth(t125)?V(0.0):t125;})(),first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})))}));refs[0].put(std::move(t124));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t126=get(e->slot(1,1),lit1);e->slot(0,4)=std::move(t126);}
{V t127=V(false);e->slot(0,5)=std::move(t127);}
if(truth(gt(e->slot(0,0),V(0.0)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t128=mul(e->slot(1,0),get(e->slot(1,4),lit5));e->slot(0,0)=std::move(t128);}
call(e->slot(2,19),Args{V(0.0),mul(e->slot(0,0),V(0.5))});
call(e->slot(2,19),Args{V(1.0),mul(e->slot(0,0),V(0.5))});
{std::array<Ref,1> refs{Ref(e,1,5)};V t129=V(true);refs[0].put(std::move(t129));}
}
if(truth(gt(e->slot(0,1),V(0.0)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t130=mul(e->slot(1,1),get(e->slot(1,4),lit5));e->slot(0,0)=std::move(t130);}
call(e->slot(2,19),Args{V(2.0),mul(e->slot(0,0),V(0.5))});
call(e->slot(2,19),Args{V(3.0),mul(e->slot(0,0),V(0.5))});
{std::array<Ref,1> refs{Ref(e,1,5)};V t131=V(true);refs[0].put(std::move(t131));}
}
if(truth(gt(e->slot(0,2),V(0.0)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t132=mul(e->slot(1,2),get(e->slot(1,4),lit5));e->slot(0,0)=std::move(t132);}
call(e->slot(2,19),Args{V(0.0),mul(e->slot(0,0),V(0.5))});
call(e->slot(2,19),Args{V(2.0),mul(e->slot(0,0),V(0.5))});
{std::array<Ref,1> refs{Ref(e,1,5)};V t133=V(true);refs[0].put(std::move(t133));}
}
if(truth(gt(e->slot(0,3),V(0.0)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t134=mul(e->slot(1,3),get(e->slot(1,4),lit5));e->slot(0,0)=std::move(t134);}
call(e->slot(2,19),Args{V(1.0),mul(e->slot(0,0),V(0.5))});
call(e->slot(2,19),Args{V(3.0),mul(e->slot(0,0),V(0.5))});
{std::array<Ref,1> refs{Ref(e,1,5)};V t135=V(true);refs[0].put(std::move(t135));}
}
return Args{e->slot(0,5)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e,0,0)};V t136=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t136));}
if(truth(le(e->slot(0,0),V(0.0)))){return Args{};
}
call(e->slot(1,18),Args{mul(e->slot(0,0),get(get(e->slot(1,1),lit1),lit4))});
{V t137=mul(e->slot(0,0),get(get(e->slot(1,1),lit1),lit5));e->slot(0,2)=std::move(t137);}
if(truth(eq(e->slot(0,1),lit104))){{double t138=num(V(0.0)),t139=num(V(3.0)),t140=num(V(1.0));for(double t141=t138;(t140>0?t141<=t139:t141>=t139);t141+=t140){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t141);call(e->slot(2,19),Args{e->slot(0,0),mul(e->slot(1,2),V(0.25))});
}}
return Args{};
}
if(truth(eq(e->slot(0,1),lit105))){{double t142=num(V(0.0)),t143=num(V(3.0)),t144=num(V(1.0));for(double t145=t142;(t144>0?t145<=t143:t145>=t143);t145+=t144){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t145);call(e->slot(2,19),Args{e->slot(0,0),mul(e->slot(1,2),V(0.2))});
}}
return Args{};
}
if(truth(([&](){V t146=eq(e->slot(0,1),lit106);return !truth(t146)?eq(e->slot(0,1),lit107):t146;})())){{double t147=num(V(0.0)),t148=num(V(3.0)),t149=num(V(1.0));for(double t150=t147;(t149>0?t150<=t148:t150>=t148);t150+=t149){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t150);call(e->slot(2,19),Args{e->slot(0,0),mul(e->slot(1,2),V(0.2))});
}}
return Args{};
}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(le(get(e->slot(1,2),lit32),V(0.0)))){return Args{};
}
{V t151=mul(mul(get(e->slot(1,2),lit32),e->slot(0,0)),get(get(e->slot(1,1),lit1),lit11));e->slot(0,1)=std::move(t151);}
call(e->slot(1,18),Args{e->slot(0,1)});
{double t152=num(V(0.0)),t153=num(V(3.0)),t154=num(V(1.0));for(double t155=t152;(t154>0?t155<=t153:t155>=t153);t155+=t154){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t155);call(e->slot(2,19),Args{e->slot(0,0),mul(e->slot(1,1),V(0.25))});
}}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t156=first(call(e->slot(1,9),Args{lit108,V(0.0)}));e->slot(0,1)=std::move(t156);}
if(truth(([&](){V t157=gt(e->slot(0,1),get(e->slot(1,2),lit30));return truth(t157)?le(e->slot(0,0),V(0.0)):t157;})())){call(get(e->slot(1,1),lit109),Args{V(false)});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit30)};V t158=e->slot(0,1);refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t159=lit110;refs[0].put(std::move(t159));}
return Args{V(true)};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit30)};V t160=e->slot(0,1);refs[0].put(std::move(t160));}
return Args{V(false)};
return Args{};});
Ref(e->slot(0,1),lit111).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t161=lit44;refs[0].put(std::move(t161));}
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit112).put(native([up=e](const Args& a)->Args{Env storage(up,true,15);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t162=add(([&](){V t163=get(e->slot(1,2),lit45);return !truth(t163)?V(0.0):t163;})(),V(1.0));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t164=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit14),get(get(e->slot(1,1),lit1),lit15)}));refs[0].put(std::move(t164));}
call(e->slot(1,14),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t165=([&](){V t166=e->slot(0,1);return !truth(t166)?first(call(e->slot(1,13),Args{})):t166;})();refs[0].put(std::move(t165));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t167=lit113;refs[0].put(std::move(t167));}
call(e->slot(1,16),Args{});
call(e->slot(1,17),Args{});
return Args{};
}
call(e->slot(1,16),Args{});
{V t168=first(call(e->slot(1,8),Args{lit114}));e->slot(0,3)=std::move(t168);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t169=ne(e->slot(0,3),V());refs[0].put(std::move(t169));}
{V t170=first(call(e->slot(1,3),Args{e->slot(0,3),([&](){V t171=get(e->slot(1,2),lit22);return !truth(t171)?V(0.0):t171;})()}));e->slot(0,4)=std::move(t170);}
{V t172=first(call(e->slot(1,11),Args{lit115,lit25}));e->slot(0,5)=std::move(t172);}
{V t173=first(call(e->slot(1,9),Args{lit116,V(0.0)}));e->slot(0,6)=std::move(t173);}
{V t174=first(call(e->slot(1,9),Args{lit117,V(0.0)}));e->slot(0,7)=std::move(t174);}
{V t175=first(call(e->slot(1,9),Args{lit118,V(0.0)}));e->slot(0,8)=std::move(t175);}
{V t176=first(call(e->slot(1,9),Args{lit119,V(0.0)}));e->slot(0,9)=std::move(t176);}
if(truth(first(call(e->slot(1,23),Args{e->slot(0,4)})))){call(e->slot(1,17),Args{});
return Args{};
}
{V t177=sub(e->slot(0,4),([&](){V t178=get(e->slot(1,2),lit22);return !truth(t178)?V(0.0):t178;})());e->slot(0,10)=std::move(t177);}
if(truth(lt(e->slot(0,10),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,10)};V t179=V(0.0);refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t180=lit120;refs[0].put(std::move(t180));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t181=lit121;refs[0].put(std::move(t181));}
}
{V t182=first(call(get(e->get("math"),lit122),Args{sub(e->slot(0,6),([&](){V t183=get(e->slot(1,2),lit26);return !truth(t183)?V(0.0):t183;})()),V(0.0)}));e->slot(0,11)=std::move(t182);}
{V t184=first(call(get(e->get("math"),lit122),Args{sub(e->slot(0,7),([&](){V t185=get(e->slot(1,2),lit27);return !truth(t185)?V(0.0):t185;})()),V(0.0)}));e->slot(0,12)=std::move(t184);}
{V t186=first(call(get(e->get("math"),lit122),Args{sub(e->slot(0,8),([&](){V t187=get(e->slot(1,2),lit28);return !truth(t187)?V(0.0):t187;})()),V(0.0)}));e->slot(0,13)=std::move(t186);}
{V t188=first(call(get(e->get("math"),lit122),Args{sub(e->slot(0,9),([&](){V t189=get(e->slot(1,2),lit29);return !truth(t189)?V(0.0):t189;})()),V(0.0)}));e->slot(0,14)=std::move(t188);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit22)};V t190=e->slot(0,4);refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit23)};V t191=e->slot(0,10);refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t192=e->slot(0,5);refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t193=e->slot(0,6);refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t194=e->slot(0,7);refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit28)};V t195=e->slot(0,8);refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit29)};V t196=e->slot(0,9);refs[0].put(std::move(t196));}
if(truth(gt(e->slot(0,10),V(0.0)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t197=first(call(e->slot(2,20),Args{e->slot(1,11),e->slot(1,12),e->slot(1,13),e->slot(1,14)}));e->slot(0,0)=std::move(t197);}
if(truth(V(!truth(e->slot(0,0))))){call(e->slot(2,21),Args{e->slot(1,10),e->slot(1,5)});
}else{call(e->slot(2,18),Args{mul(e->slot(1,10),get(get(e->slot(2,1),lit1),lit4))});
}
}
call(e->slot(1,22),Args{e->slot(0,0)});
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit123).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,18),Args{e->slot(0,0)});
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit124).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);call(e->slot(1,19),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit125).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit17)};V t198=first(call(e->slot(1,6),Args{e->slot(0,0)}));refs[0].put(std::move(t198));}
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit126).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(first(call(e->slot(1,7),Args{e->slot(0,0)})))))){return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit18),e->slot(0,0))};V t199=first(call(e->slot(1,6),Args{e->slot(0,1)}));refs[0].put(std::move(t199));}
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit109).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit17)};V t200=V(0.0);refs[0].put(std::move(t200));}
{double t201=num(V(0.0)),t202=num(V(3.0)),t203=num(V(1.0));for(double t204=t201;(t203>0?t204<=t202:t204>=t202);t204+=t203){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t204);{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit18),e->slot(0,0))};V t205=V(0.0);refs[0].put(std::move(t205));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit19)};V t206=V(0.0);refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit20)};V t207=V(0.0);refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit21)};V t208=V(0.0);refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit22)};V t209=V(0.0);refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit23)};V t210=V(0.0);refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t211=lit25;refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t212=V(0.0);refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t213=V(0.0);refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit28)};V t214=V(0.0);refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit29)};V t215=V(0.0);refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t216=V(0.0);refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit31)};V t217=V(0.0);refs[0].put(std::move(t217));}
if(truth(V(!truth(e->slot(0,0))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit30)};V t218=first(call(e->slot(1,9),Args{lit108,([&](){V t219=get(e->slot(1,2),lit30);return !truth(t219)?V(0.0):t219;})()}));refs[0].put(std::move(t218));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t220=lit127;refs[0].put(std::move(t220));}
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit128).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit129).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t221=get(e->slot(1,2),lit17);return !truth(t221)?V(0.0):t221;})()};
return Args{};}));
Ref(e->slot(0,1),lit130).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(first(call(e->slot(1,7),Args{e->slot(0,0)})))))){return Args{V(0.0)};
}
return Args{([&](){V t222=get(get(e->slot(1,2),lit18),e->slot(0,0));return !truth(t222)?V(0.0):t222;})()};
return Args{};}));
Ref(e->slot(0,1),lit131).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t223=get(e->slot(1,2),lit19);return !truth(t223)?V(0.0):t223;})()};
return Args{};}));
Ref(e->slot(0,1),lit132).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t224=get(e->slot(1,2),lit32);return !truth(t224)?V(0.0):t224;})()};
return Args{};}));
Ref(e->slot(0,1),lit133).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit134),Args{concat(lit135,concat(lit136,concat(lit137,concat(lit138,concat(lit139,lit140))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit43)})),([&](){V t225=get(e->slot(1,2),lit45);return !truth(t225)?V(0.0):t225;})(),([&](){V t226=get(e->slot(1,2),lit19);return !truth(t226)?V(0.0):t226;})(),([&](){V t227=get(e->slot(1,2),lit17);return !truth(t227)?V(0.0):t227;})(),([&](){V t228=get(e->slot(1,2),lit20);return !truth(t228)?V(0.0):t228;})(),([&](){V t229=get(e->slot(1,2),lit21);return !truth(t229)?V(0.0):t229;})(),([&](){V t230=get(get(e->slot(1,2),lit18),V(0.0));return !truth(t230)?V(0.0):t230;})(),([&](){V t231=get(get(e->slot(1,2),lit18),V(1.0));return !truth(t231)?V(0.0):t231;})(),([&](){V t232=get(get(e->slot(1,2),lit18),V(2.0));return !truth(t232)?V(0.0):t232;})(),([&](){V t233=get(get(e->slot(1,2),lit18),V(3.0));return !truth(t233)?V(0.0):t233;})(),([&](){V t234=get(e->slot(1,2),lit22);return !truth(t234)?V(0.0):t234;})(),([&](){V t235=get(e->slot(1,2),lit23);return !truth(t235)?V(0.0):t235;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit24)})),([&](){V t236=get(e->slot(1,2),lit32);return !truth(t236)?V(0.0):t236;})(),([&](){V t237=get(e->slot(1,2),lit31);return !truth(t237)?V(0.0):t237;})(),([&](){V t238=get(e->slot(1,2),lit33);return !truth(t238)?V(0.0):t238;})(),([&](){V t239=get(e->slot(1,2),lit34);return !truth(t239)?V(0.0):t239;})(),([&](){V t240=get(e->slot(1,2),lit35);return !truth(t240)?V(0.0):t240;})(),([&](){V t241=get(e->slot(1,2),lit36);return !truth(t241)?V(0.0):t241;})(),([&](){V t242=([&](){V t243=get(e->slot(1,2),lit42);return truth(t243)?lit141:t243;})();return !truth(t242)?lit142:t242;})(),([&](){V t244=([&](){V t245=get(e->slot(1,2),lit41);return truth(t245)?lit141:t245;})();return !truth(t244)?lit142:t244;})(),([&](){V t246=([&](){V t247=get(e->slot(1,2),lit37);return truth(t247)?lit141:t247;})();return !truth(t246)?lit142:t246;})(),([&](){V t248=([&](){V t249=get(e->slot(1,2),lit38);return truth(t249)?lit141:t249;})();return !truth(t248)?lit142:t248;})(),([&](){V t250=([&](){V t251=get(e->slot(1,2),lit39);return truth(t251)?lit141:t251;})();return !truth(t250)?lit142:t250;})(),([&](){V t252=([&](){V t253=get(e->slot(1,2),lit40);return truth(t253)?lit141:t253;})();return !truth(t252)?lit142:t252;})()});
return Args{};}));
call(e->slot(0,17),Args{});
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
