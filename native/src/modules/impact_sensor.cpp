// Generated native C++ from pinned impact_sensor.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("gravity");
static const V lit3("impactThreshold");
static const V lit4("impactGain");
static const V lit5("verticalWeight");
static const V lit6("lateralWeight");
static const V lit7("longitudinalWeight");
static const V lit8("wheelDamageLoadThreshold");
static const V lit9("wheelDamageScale");
static const V lit10("tireHopImpactGain");
static const V lit11("tireHopLoadImpactGain");
static const V lit12("contactDropImpactGain");
static const V lit13("suspensionPulseImpactGain");
static const V lit14("chassisEnergyImpactGain");
static const V lit15("bodyRuntimeImpactGain");
static const V lit16("brakeLockImpactGain");
static const V lit17("thermalImpactGain");
static const V lit18("maxRootImpact");
static const V lit19("debugStoreInterval");
static const V lit20("modules.damage_state");
static const V lit21("modules/damage_state");
static const V lit22("g");
static const V lit23("verticalG");
static const V lit24("lateralG");
static const V lit25("longitudinalG");
static const V lit26("impact");
static const V lit27("rootImpact");
static const V lit28("type");
static const V lit29("NONE");
static const V lit30("damageLinked");
static const V lit31("ax");
static const V lit32("ay");
static const V lit33("az");
static const V lit34("wheelLoad");
static const V lit35("wheelDamaged");
static const V lit36("tireLinked");
static const V lit37("suspensionLinked");
static const V lit38("chassisLinked");
static const V lit39("bodyLinked");
static const V lit40("brakeLinked");
static const V lit41("thermalLinked");
static const V lit42("debugStoreTimer");
static const V lit43("debugStoreNow");
static const V lit44("status");
static const V lit45("INIT");
static const V lit46("updateCount");
static const V lit47("debug");
static const V lit48("safeLoadRaw");
static const V lit49("safeStore");
static const V lit50("function");
static const V lit51("acceleration");
static const V lit52("x");
static const V lit53("y");
static const V lit54("z");
static const V lit55("load");
static const V lit56("loadK");
static const V lit57("abs");
static const V lit58("max");
static const V lit59("VERTICAL");
static const V lit60("LATERAL");
static const V lit61("LONGITUDINAL");
static const V lit62("ngp_tire_hop_energy_");
static const V lit63("ngp_tire_hop_");
static const V lit64("ngp_tire_hop_loadpulse_");
static const V lit65("ngp_tirehop_");
static const V lit66("ngp_susp_contact_drop_");
static const V lit67("ngp_sci_drop_");
static const V lit68("ngp_susp_integrated_force_");
static const V lit69("ngp_susp_int_force_");
static const V lit70("ngp_susp_");
static const V lit71("min");
static const V lit72("ngp_chassis_energy");
static const V lit73("ngp_chassis_body_energy");
static const V lit74("ngp_body_runtime_flex_penalty");
static const V lit75("ngp_brake_lock_");
static const V lit76("ngp_brake_root_heat_avg");
static const V lit77("ngp_virtual_thermal_stress");
static const V lit78("NO DAMAGE_STATE");
static const V lit79("damageChassis");
static const V lit80("wheels");
static const V lit81("damageWheel");
static const V lit82("ngp_impact_status");
static const V lit83("UNKNOWN");
static const V lit84("ngp_impact_update_count");
static const V lit85("ngp_impact_g");
static const V lit86("ngp_impact_value");
static const V lit87("ngp_impact_root_value");
static const V lit88("ngp_impact_type");
static const V lit89("ngp_impact_vertical_g");
static const V lit90("ngp_impact_lateral_g");
static const V lit91("ngp_impact_longitudinal_g");
static const V lit92("ngp_impact_ax");
static const V lit93("ngp_impact_ay");
static const V lit94("ngp_impact_az");
static const V lit95("ngp_impact_damage_linked");
static const V lit96("ngp_impact_wheel_load_");
static const V lit97("ngp_impact_wheel_damaged_");
static const V lit98("ngp_impact_tire_linked");
static const V lit99("ngp_impact_suspension_linked");
static const V lit100("ngp_impact_chassis_linked");
static const V lit101("ngp_impact_body_linked");
static const V lit102("ngp_impact_brake_linked");
static const V lit103("ngp_impact_thermal_linked");
static const V lit104("update");
static const V lit105("BAD DT");
static const V lit106("getCar");
static const V lit107("NO CAR");
static const V lit108("RUNNING");
static const V lit109("ROOT");
static const V lit110("getImpact");
static const V lit111("getImpactG");
static const V lit112("getType");
static const V lit113("debugStr");
static const V lit114("format");
static const V lit115("Status %s / Count %.0f Damage:%s\n");
static const V lit116("Impact %.4f Root %.4f Type %s\n");
static const V lit117("G %.2f V/L/Long %.2f %.2f %.2f\n");
static const V lit118("Links Tire:%s Susp:%s Chassis:%s Body:%s Brake:%s Therm:%s");
static const V lit119("OK");
static const V lit120("NIL");
V load_impact_sensor(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(18);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(9.81));set(z,lit3,V(3.0));set(z,lit4,V(0.05));set(z,lit5,V(1.0));set(z,lit6,V(0.7));set(z,lit7,V(0.5));set(z,lit8,V(1000.0));set(z,lit9,V(0.5));set(z,lit10,V(0.08));set(z,lit11,V(3e-05));set(z,lit12,V(0.06));set(z,lit13,V(2.5e-05));set(z,lit14,V(0.06));set(z,lit15,V(0.06));set(z,lit16,V(0.05));set(z,lit17,V(0.04));set(z,lit18,V(0.45));set(z,lit19,V(0.25));return z;})();refs[0].put(std::move(t3));}
e->slot(0,2)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{Args t4=call(e->get("pcall"),Args{e->get("require"),lit20});e->slot(0,0)=arg(t4,0);e->slot(0,1)=arg(t4,1);}
if(truth(([&](){V t5=e->slot(0,0);return truth(t5)?e->slot(0,1):t5;})())){return Args{V(true),e->slot(0,1)};
}
{std::array<Ref,2> refs{Ref(e,0,0),Ref(e,0,1)};Args t6=call(e->get("pcall"),Args{e->get("require"),lit21});refs[0].put(arg(t6,0));refs[1].put(arg(t6,1));}
if(truth(([&](){V t7=e->slot(0,0);return truth(t7)?e->slot(0,1):t7;})())){return Args{V(true),e->slot(0,1)};
}
return Args{V(false),V()};
return Args{};});
{Args t8=call(e->slot(0,2),Args{});e->slot(0,3)=arg(t8,0);e->slot(0,4)=arg(t8,1);}
{V t9=([&](){V z=table();set(z,lit22,V(0.0));set(z,lit23,V(0.0));set(z,lit24,V(0.0));set(z,lit25,V(0.0));set(z,lit26,V(0.0));set(z,lit27,V(0.0));set(z,lit28,lit29);set(z,lit30,e->slot(0,3));set(z,lit31,V(0.0));set(z,lit32,V(0.0));set(z,lit33,V(0.0));set(z,lit34,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit35,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit36,V(false));set(z,lit37,V(false));set(z,lit38,V(false));set(z,lit39,V(false));set(z,lit40,V(false));set(z,lit41,V(false));set(z,lit42,V(999.0));set(z,lit43,V(true));set(z,lit44,lit45);set(z,lit46,V(0.0));return z;})();e->slot(0,5)=std::move(t9);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit47)};V t10=e->slot(0,5);refs[0].put(std::move(t10));}
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);return Args{([&](){V t11=([&](){V t12=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t12)?e->slot(0,1):t12;})();return !truth(t11)?V(0.0):t11;})()};
return Args{};});
{V t13=get(e->slot(0,0),lit48);e->slot(0,7)=std::move(t13);}
{V t14=get(e->slot(0,0),lit49);e->slot(0,8)=std::move(t14);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t15=first(call(e->slot(1,6),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t15));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,5),lit42)};V t16=add(([&](){V t17=get(e->slot(1,5),lit42);return !truth(t17)?V(0.0):t17;})(),([&](){V t18=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t18)?V(0.0):t18;})());refs[0].put(std::move(t16));}
if(truth(ge(get(e->slot(1,5),lit42),([&](){V t19=get(get(e->slot(1,1),lit1),lit19);return !truth(t19)?V(0.25):t19;})()))){{std::array<Ref,1> refs{Ref(e->slot(1,5),lit42)};V t20=V(0.0);refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit43)};V t21=V(true);refs[0].put(std::move(t21));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,5),lit43)};V t22=V(false);refs[0].put(std::move(t22));}
}
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);if(truth(ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit50))){return Args{V(false)};
}
{V t23=first(call(e->get("pcall"),joined(Args{e->slot(0,0)},e->dots())));e->slot(0,1)=std::move(t23);}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t24=V(0.0);e->slot(0,1)=std::move(t24);}
{V t25=V(0.0);e->slot(0,2)=std::move(t25);}
{V t26=V(0.0);e->slot(0,3)=std::move(t26);}
if(truth(([&](){V t27=e->slot(0,0);return truth(t27)?get(e->slot(0,0),lit51):t27;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t28=first(call(e->slot(1,6),Args{get(get(e->slot(0,0),lit51),lit52),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t29=first(call(e->slot(1,6),Args{get(get(e->slot(0,0),lit51),lit53),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t30=first(call(e->slot(1,6),Args{get(get(e->slot(0,0),lit51),lit54),V(0.0)}));refs[0].put(std::move(t30));}
}
return Args{e->slot(0,1),e->slot(0,2),e->slot(0,3)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
if(truth(ne(get(e->slot(0,0),lit55),V()))){return call(e->slot(1,6),Args{get(e->slot(0,0),lit55),V(0.0)});
}
if(truth(ne(get(e->slot(0,0),lit56),V()))){return call(e->slot(1,6),Args{get(e->slot(0,0),lit56),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t31=get(e->slot(1,1),lit1);e->slot(0,3)=std::move(t31);}
{V t32=first(call(get(e->get("math"),lit57),Args{divv(e->slot(0,2),get(e->slot(0,3),lit2))}));e->slot(0,4)=std::move(t32);}
{V t33=first(call(get(e->get("math"),lit57),Args{divv(e->slot(0,0),get(e->slot(0,3),lit2))}));e->slot(0,5)=std::move(t33);}
{V t34=first(call(get(e->get("math"),lit57),Args{divv(e->slot(0,1),get(e->slot(0,3),lit2))}));e->slot(0,6)=std::move(t34);}
{V t35=mul(e->slot(0,4),get(e->slot(0,3),lit5));e->slot(0,7)=std::move(t35);}
{V t36=mul(e->slot(0,5),get(e->slot(0,3),lit6));e->slot(0,8)=std::move(t36);}
{V t37=mul(e->slot(0,6),get(e->slot(0,3),lit7));e->slot(0,9)=std::move(t37);}
{V t38=first(call(get(e->get("math"),lit58),Args{e->slot(0,7),e->slot(0,8),e->slot(0,9)}));e->slot(0,10)=std::move(t38);}
{V t39=lit29;e->slot(0,11)=std::move(t39);}
if(truth(gt(e->slot(0,10),get(e->slot(0,3),lit3)))){if(truth(eq(e->slot(0,10),e->slot(0,7)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t40=lit59;refs[0].put(std::move(t40));}
}else if(truth(eq(e->slot(0,10),e->slot(0,8)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t41=lit60;refs[0].put(std::move(t41));}
}else if(truth(eq(e->slot(0,10),e->slot(0,9)))){{std::array<Ref,1> refs{Ref(e,0,11)};V t42=lit61;refs[0].put(std::move(t42));}
}


}
{V t43=V(0.0);e->slot(0,12)=std::move(t43);}
if(truth(gt(e->slot(0,10),get(e->slot(0,3),lit3)))){{std::array<Ref,1> refs{Ref(e,0,12)};V t44=mul(sub(e->slot(0,10),get(e->slot(0,3),lit3)),get(e->slot(0,3),lit4));refs[0].put(std::move(t44));}
}
return Args{e->slot(0,12),e->slot(0,10),e->slot(0,4),e->slot(0,5),e->slot(0,6),e->slot(0,11)};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;{V t45=V(0.0);e->slot(0,0)=std::move(t45);}
{V t46=V(false);e->slot(0,1)=std::move(t46);}
{V t47=V(false);e->slot(0,2)=std::move(t47);}
{double t48=num(V(0.0)),t49=num(V(3.0)),t50=num(V(1.0));for(double t51=t48;(t50>0?t51<=t49:t51>=t49);t51+=t50){auto parent=e;Env storage(parent,false,5);auto e=&storage;e->slot(0,0)=V(t51);{V t52=([&](){V t53=first(call(e->slot(2,7),Args{concat(lit62,e->slot(0,0))}));return !truth(t53)?first(call(e->slot(2,7),Args{concat(lit63,e->slot(0,0))})):t53;})();e->slot(0,1)=std::move(t52);}
{V t54=([&](){V t55=first(call(e->slot(2,7),Args{concat(lit64,e->slot(0,0))}));return !truth(t55)?first(call(e->slot(2,7),Args{concat(lit65,e->slot(0,0))})):t55;})();e->slot(0,2)=std::move(t54);}
{V t56=([&](){V t57=first(call(e->slot(2,7),Args{concat(lit66,e->slot(0,0))}));return !truth(t57)?first(call(e->slot(2,7),Args{concat(lit67,e->slot(0,0))})):t57;})();e->slot(0,3)=std::move(t56);}
{V t58=([&](){V t59=([&](){V t60=first(call(e->slot(2,7),Args{concat(lit68,e->slot(0,0))}));return !truth(t60)?first(call(e->slot(2,7),Args{concat(lit69,e->slot(0,0))})):t60;})();return !truth(t59)?first(call(e->slot(2,7),Args{concat(lit70,e->slot(0,0))})):t59;})();e->slot(0,4)=std::move(t58);}
if(truth(([&](){V t61=ne(e->slot(0,1),V());return !truth(t61)?ne(e->slot(0,2),V()):t61;})())){{std::array<Ref,1> refs{Ref(e,1,1)};V t62=V(true);refs[0].put(std::move(t62));}
}
if(truth(([&](){V t63=ne(e->slot(0,3),V());return !truth(t63)?ne(e->slot(0,4),V()):t63;})())){{std::array<Ref,1> refs{Ref(e,1,2)};V t64=V(true);refs[0].put(std::move(t64));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t65=add(add(add(add(e->slot(1,0),mul(first(call(e->slot(2,9),Args{first(call(e->slot(2,6),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})),get(get(e->slot(2,1),lit1),lit10))),first(call(get(e->get("math"),lit71),Args{mul(first(call(get(e->get("math"),lit57),call(e->slot(2,6),Args{e->slot(0,2),V(0.0)}))),get(get(e->slot(2,1),lit1),lit11)),V(0.2)}))),mul(first(call(e->slot(2,9),Args{first(call(e->slot(2,6),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)})),get(get(e->slot(2,1),lit1),lit12))),first(call(get(e->get("math"),lit71),Args{mul(first(call(get(e->get("math"),lit57),call(e->slot(2,6),Args{e->slot(0,4),V(0.0)}))),get(get(e->slot(2,1),lit1),lit13)),V(0.2)})));refs[0].put(std::move(t65));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit36)};V t66=e->slot(0,1);refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit37)};V t67=e->slot(0,2);refs[0].put(std::move(t67));}
{V t68=([&](){V t69=first(call(e->slot(1,7),Args{lit72}));return !truth(t69)?first(call(e->slot(1,7),Args{lit73})):t69;})();e->slot(0,3)=std::move(t68);}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit38)};V t70=ne(e->slot(0,3),V());refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t71=add(e->slot(0,0),mul(first(call(e->slot(1,9),Args{first(call(e->slot(1,6),Args{e->slot(0,3),V(0.0)})),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit1),lit14)));refs[0].put(std::move(t71));}
{V t72=first(call(e->slot(1,7),Args{lit74}));e->slot(0,4)=std::move(t72);}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit39)};V t73=ne(e->slot(0,4),V());refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t74=add(e->slot(0,0),mul(first(call(e->slot(1,9),Args{first(call(e->slot(1,6),Args{e->slot(0,4),V(0.0)})),V(0.0),V(0.55)})),get(get(e->slot(1,1),lit1),lit15)));refs[0].put(std::move(t74));}
{V t75=V(0.0);e->slot(0,5)=std::move(t75);}
{V t76=V(false);e->slot(0,6)=std::move(t76);}
{double t77=num(V(0.0)),t78=num(V(3.0)),t79=num(V(1.0));for(double t80=t77;(t79>0?t80<=t78:t80>=t78);t80+=t79){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t80);{V t81=first(call(e->slot(2,7),Args{concat(lit75,e->slot(0,0))}));e->slot(0,1)=std::move(t81);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,6)};V t82=V(true);refs[0].put(std::move(t82));}
}
{std::array<Ref,1> refs{Ref(e,1,5)};V t83=add(e->slot(1,5),first(call(e->slot(2,9),Args{first(call(e->slot(2,6),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t83));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit40)};V t84=e->slot(0,6);refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t85=add(e->slot(0,0),mul(mul(e->slot(0,5),V(0.25)),get(get(e->slot(1,1),lit1),lit16)));refs[0].put(std::move(t85));}
{V t86=([&](){V t87=first(call(e->slot(1,7),Args{lit76}));return !truth(t87)?first(call(e->slot(1,7),Args{lit77})):t87;})();e->slot(0,7)=std::move(t86);}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit41)};V t88=ne(e->slot(0,7),V());refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t89=add(e->slot(0,0),mul(first(call(e->slot(1,9),Args{first(call(e->slot(1,6),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)})),get(get(e->slot(1,1),lit1),lit17)));refs[0].put(std::move(t89));}
return call(e->slot(1,9),Args{e->slot(0,0),V(0.0),get(get(e->slot(1,1),lit1),lit18)});
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(le(e->slot(0,1),V(0.0)))){return Args{};
}
if(truth(([&](){V t90=V(!truth(e->slot(1,3)));return !truth(t90)?V(!truth(e->slot(1,4))):t90;})())){{std::array<Ref,1> refs{Ref(e->slot(1,5),lit44)};V t91=lit78;refs[0].put(std::move(t91));}
return Args{};
}
call(e->slot(1,11),Args{get(e->slot(1,4),lit79),e->slot(0,1)});
if(truth(V(!truth(get(e->slot(0,0),lit80))))){return Args{};
}
{double t92=num(V(0.0)),t93=num(V(3.0)),t94=num(V(1.0));for(double t95=t92;(t94>0?t95<=t93:t95>=t93);t95+=t94){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t95);{std::array<Ref,1> refs{Ref(get(e->slot(2,5),lit35),e->slot(0,0))};V t96=V(0.0);refs[0].put(std::move(t96));}
{V t97=get(get(e->slot(1,0),lit80),e->slot(0,0));e->slot(0,1)=std::move(t97);}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t98=first(call(e->slot(3,13),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t98);}
{std::array<Ref,1> refs{Ref(get(e->slot(3,5),lit34),e->slot(1,0))};V t99=e->slot(0,0);refs[0].put(std::move(t99));}
if(truth(gt(e->slot(0,0),get(get(e->slot(3,1),lit1),lit8)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t100=first(call(e->slot(4,11),Args{get(e->slot(4,4),lit81),e->slot(2,0),mul(e->slot(3,1),get(get(e->slot(4,1),lit1),lit9))}));e->slot(0,0)=std::move(t100);}
{std::array<Ref,1> refs{Ref(get(e->slot(4,5),lit35),e->slot(2,0))};V t101=([&](){V t102=([&](){V t103=e->slot(0,0);return truth(t103)?V(1.0):t103;})();return !truth(t102)?V(0.0):t102;})();refs[0].put(std::move(t101));}
}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(2,5),lit34),e->slot(0,0))};V t104=V(0.0);refs[0].put(std::move(t104));}
}
}}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(get(e->slot(1,0),lit49),Args{lit82,([&](){V t105=get(e->slot(1,5),lit44);return !truth(t105)?lit83:t105;})()});
call(get(e->slot(1,0),lit49),Args{lit84,([&](){V t106=get(e->slot(1,5),lit46);return !truth(t106)?V(0.0):t106;})()});
call(get(e->slot(1,0),lit49),Args{lit85,([&](){V t107=get(e->slot(1,5),lit22);return !truth(t107)?V(0.0):t107;})()});
call(get(e->slot(1,0),lit49),Args{lit86,([&](){V t108=get(e->slot(1,5),lit26);return !truth(t108)?V(0.0):t108;})()});
call(e->slot(1,8),Args{lit87,([&](){V t109=get(e->slot(1,5),lit27);return !truth(t109)?V(0.0):t109;})()});
call(get(e->slot(1,0),lit49),Args{lit88,([&](){V t110=get(e->slot(1,5),lit28);return !truth(t110)?lit29:t110;})()});
call(get(e->slot(1,0),lit49),Args{lit89,([&](){V t111=get(e->slot(1,5),lit23);return !truth(t111)?V(0.0):t111;})()});
call(get(e->slot(1,0),lit49),Args{lit90,([&](){V t112=get(e->slot(1,5),lit24);return !truth(t112)?V(0.0):t112;})()});
call(get(e->slot(1,0),lit49),Args{lit91,([&](){V t113=get(e->slot(1,5),lit25);return !truth(t113)?V(0.0):t113;})()});
call(get(e->slot(1,0),lit49),Args{lit92,([&](){V t114=get(e->slot(1,5),lit31);return !truth(t114)?V(0.0):t114;})()});
call(get(e->slot(1,0),lit49),Args{lit93,([&](){V t115=get(e->slot(1,5),lit32);return !truth(t115)?V(0.0):t115;})()});
call(get(e->slot(1,0),lit49),Args{lit94,([&](){V t116=get(e->slot(1,5),lit33);return !truth(t116)?V(0.0):t116;})()});
call(get(e->slot(1,0),lit49),Args{lit95,([&](){V t117=([&](){V t118=get(e->slot(1,5),lit30);return truth(t118)?V(1.0):t118;})();return !truth(t117)?V(0.0):t117;})()});
{double t119=num(V(0.0)),t120=num(V(3.0)),t121=num(V(1.0));for(double t122=t119;(t121>0?t122<=t120:t122>=t120);t122+=t121){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t122);call(get(e->slot(2,0),lit49),Args{concat(lit96,e->slot(0,0)),([&](){V t123=get(get(e->slot(2,5),lit34),e->slot(0,0));return !truth(t123)?V(0.0):t123;})()});
call(get(e->slot(2,0),lit49),Args{concat(lit97,e->slot(0,0)),([&](){V t124=get(get(e->slot(2,5),lit35),e->slot(0,0));return !truth(t124)?V(0.0):t124;})()});
}}
if(truth(V(!truth(get(e->slot(1,5),lit43))))){return Args{};
}
call(e->slot(1,8),Args{lit98,([&](){V t125=([&](){V t126=get(e->slot(1,5),lit36);return truth(t126)?V(1.0):t126;})();return !truth(t125)?V(0.0):t125;})()});
call(e->slot(1,8),Args{lit99,([&](){V t127=([&](){V t128=get(e->slot(1,5),lit37);return truth(t128)?V(1.0):t128;})();return !truth(t127)?V(0.0):t127;})()});
call(e->slot(1,8),Args{lit100,([&](){V t129=([&](){V t130=get(e->slot(1,5),lit38);return truth(t130)?V(1.0):t130;})();return !truth(t129)?V(0.0):t129;})()});
call(e->slot(1,8),Args{lit101,([&](){V t131=([&](){V t132=get(e->slot(1,5),lit39);return truth(t132)?V(1.0):t132;})();return !truth(t131)?V(0.0):t131;})()});
call(e->slot(1,8),Args{lit102,([&](){V t133=([&](){V t134=get(e->slot(1,5),lit40);return truth(t134)?V(1.0):t134;})();return !truth(t133)?V(0.0):t133;})()});
call(e->slot(1,8),Args{lit103,([&](){V t135=([&](){V t136=get(e->slot(1,5),lit41);return truth(t136)?V(1.0):t136;})();return !truth(t135)?V(0.0):t135;})()});
return Args{};});
Ref(e->slot(0,1),lit104).put(native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(1,5),lit46)};V t137=add(get(e->slot(1,5),lit46),V(1.0));refs[0].put(std::move(t137));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t138=([&](){V t139=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t139)?V(0.0):t139;})();refs[0].put(std::move(t138));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,5),lit44)};V t140=lit105;refs[0].put(std::move(t140));}
call(e->slot(1,17),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t141=([&](){V t142=e->slot(0,1);return !truth(t142)?first(call(get(e->get("ac"),lit106),Args{V(0.0)})):t142;})();refs[0].put(std::move(t141));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,5),lit44)};V t143=lit107;refs[0].put(std::move(t143));}
call(e->slot(1,17),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit44)};V t144=lit108;refs[0].put(std::move(t144));}
if(truth(([&](){V t145=V(!truth(e->slot(1,3)));return !truth(t145)?V(!truth(e->slot(1,4))):t145;})())){{std::array<Ref,2> refs{Ref(e,1,3),Ref(e,1,4)};Args t146=call(e->slot(1,2),Args{});refs[0].put(arg(t146,0));refs[1].put(arg(t146,1));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit30)};V t147=([&](){V t148=e->slot(1,3);return truth(t148)?ne(e->slot(1,4),V()):t148;})();refs[0].put(std::move(t147));}
{Args t149=call(e->slot(1,12),Args{e->slot(0,1)});e->slot(0,2)=arg(t149,0);e->slot(0,3)=arg(t149,1);e->slot(0,4)=arg(t149,2);}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit31)};V t150=e->slot(0,2);refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit32)};V t151=e->slot(0,3);refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit33)};V t152=e->slot(0,4);refs[0].put(std::move(t152));}
{Args t153=call(e->slot(1,14),Args{e->slot(0,2),e->slot(0,3),e->slot(0,4)});e->slot(0,5)=arg(t153,0);e->slot(0,6)=arg(t153,1);e->slot(0,7)=arg(t153,2);e->slot(0,8)=arg(t153,3);e->slot(0,9)=arg(t153,4);e->slot(0,10)=arg(t153,5);}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit22)};V t154=e->slot(0,6);refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit23)};V t155=e->slot(0,7);refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit24)};V t156=e->slot(0,8);refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit25)};V t157=e->slot(0,9);refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit27)};V t158=first(call(e->slot(1,15),Args{}));refs[0].put(std::move(t158));}
if(truth(gt(get(e->slot(1,5),lit27),e->slot(0,5)))){{std::array<Ref,1> refs{Ref(e,0,5)};V t159=get(e->slot(1,5),lit27);refs[0].put(std::move(t159));}
if(truth(eq(e->slot(0,10),lit29))){{std::array<Ref,1> refs{Ref(e,0,10)};V t160=lit109;refs[0].put(std::move(t160));}
}
}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit26)};V t161=e->slot(0,5);refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(1,5),lit28)};V t162=e->slot(0,10);refs[0].put(std::move(t162));}
call(e->slot(1,16),Args{e->slot(0,1),e->slot(0,5)});
call(e->slot(1,17),Args{});
return Args{};}));
Ref(e->slot(0,1),lit110).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t163=get(e->slot(1,5),lit26);return !truth(t163)?V(0.0):t163;})()};
return Args{};}));
Ref(e->slot(0,1),lit111).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t164=get(e->slot(1,5),lit22);return !truth(t164)?V(0.0):t164;})()};
return Args{};}));
Ref(e->slot(0,1),lit112).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t165=get(e->slot(1,5),lit28);return !truth(t165)?lit29:t165;})()};
return Args{};}));
Ref(e->slot(0,1),lit113).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit114),Args{concat(lit115,concat(lit116,concat(lit117,lit118))),first(call(e->get("tostring"),Args{get(e->slot(1,5),lit44)})),([&](){V t166=get(e->slot(1,5),lit46);return !truth(t166)?V(0.0):t166;})(),([&](){V t167=([&](){V t168=get(e->slot(1,5),lit30);return truth(t168)?lit119:t168;})();return !truth(t167)?lit120:t167;})(),([&](){V t169=get(e->slot(1,5),lit26);return !truth(t169)?V(0.0):t169;})(),([&](){V t170=get(e->slot(1,5),lit27);return !truth(t170)?V(0.0):t170;})(),first(call(e->get("tostring"),Args{get(e->slot(1,5),lit28)})),([&](){V t171=get(e->slot(1,5),lit22);return !truth(t171)?V(0.0):t171;})(),([&](){V t172=get(e->slot(1,5),lit23);return !truth(t172)?V(0.0):t172;})(),([&](){V t173=get(e->slot(1,5),lit24);return !truth(t173)?V(0.0):t173;})(),([&](){V t174=get(e->slot(1,5),lit25);return !truth(t174)?V(0.0):t174;})(),([&](){V t175=([&](){V t176=get(e->slot(1,5),lit36);return truth(t176)?lit119:t176;})();return !truth(t175)?lit120:t175;})(),([&](){V t177=([&](){V t178=get(e->slot(1,5),lit37);return truth(t178)?lit119:t178;})();return !truth(t177)?lit120:t177;})(),([&](){V t179=([&](){V t180=get(e->slot(1,5),lit38);return truth(t180)?lit119:t180;})();return !truth(t179)?lit120:t179;})(),([&](){V t181=([&](){V t182=get(e->slot(1,5),lit39);return truth(t182)?lit119:t182;})();return !truth(t181)?lit120:t181;})(),([&](){V t183=([&](){V t184=get(e->slot(1,5),lit40);return truth(t184)?lit119:t184;})();return !truth(t183)?lit120:t183;})(),([&](){V t185=([&](){V t186=get(e->slot(1,5),lit41);return truth(t186)?lit119:t186;})();return !truth(t185)?lit120:t185;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
