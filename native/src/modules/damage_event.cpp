// Generated native C++ from pinned damage_event.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("gravity");
static const V lit3("impactThreshold");
static const V lit4("impactGain");
static const V lit5("pitRepairSpeed");
static const V lit6("minDt");
static const V lit7("maxDt");
static const V lit8("signedDirection");
static const V lit9("directionDeadbandG");
static const V lit10("debugStoreInterval");
static const V lit11("total");
static const V lit12("lastImpact");
static const V lit13("lastG");
static const V lit14("peakG");
static const V lit15("lastType");
static const V lit16("NONE");
static const V lit17("lastDirection");
static const V lit18("lateralG");
static const V lit19("longitudinalG");
static const V lit20("verticalG");
static const V lit21("signedLateralG");
static const V lit22("signedLongitudinalG");
static const V lit23("signedVerticalG");
static const V lit24("front");
static const V lit25("rear");
static const V lit26("left");
static const V lit27("right");
static const V lit28("speedKmh");
static const V lit29("inPit");
static const V lit30("repaired");
static const V lit31("wasInPitRepair");
static const V lit32("impactActive");
static const V lit33("status");
static const V lit34("INIT");
static const V lit35("updateCount");
static const V lit36("debugStoreTimer");
static const V lit37("debugStoreNow");
static const V lit38("state");
static const V lit39("debug");
static const V lit40("huge");
static const V lit41("safeField");
static const V lit42("safeStore");
static const V lit43("getCar");
static const V lit44("acceleration");
static const V lit45("x");
static const V lit46("y");
static const V lit47("z");
static const V lit48("max");
static const V lit49("VERTICAL");
static const V lit50("SIDE");
static const V lit51("FRONT/REAR");
static const V lit52("UP");
static const V lit53("DOWN");
static const V lit54("RIGHT");
static const V lit55("LEFT");
static const V lit56("FRONT");
static const V lit57("REAR");
static const V lit58("ngp_damage_event_total");
static const V lit59("ngp_damage_event_last");
static const V lit60("ngp_damage_event_g");
static const V lit61("ngp_damage_event_peak_g");
static const V lit62("ngp_damage_event_type");
static const V lit63("ngp_damage_event_direction");
static const V lit64("ngp_damage_event_repaired");
static const V lit65("ngp_damage_event_front");
static const V lit66("ngp_damage_event_rear");
static const V lit67("ngp_damage_event_left");
static const V lit68("ngp_damage_event_right");
static const V lit69("ngp_damage_event_lateral_g");
static const V lit70("ngp_damage_event_longitudinal_g");
static const V lit71("ngp_damage_event_vertical_g");
static const V lit72("ngp_damage_event_signed_lateral_g");
static const V lit73("ngp_damage_event_signed_longitudinal_g");
static const V lit74("ngp_damage_event_signed_vertical_g");
static const V lit75("ngp_damage_event_speed");
static const V lit76("ngp_damage_event_in_pit");
static const V lit77("ngp_damage_event_active");
static const V lit78("ngp_damage_event_status");
static const V lit79("UNKNOWN");
static const V lit80("ngp_damage_event_update_count");
static const V lit81("ngp_impact_total");
static const V lit82("ngp_impact_last");
static const V lit83("ngp_impact_g");
static const V lit84("ngp_impact_peak_g");
static const V lit85("ngp_impact_type");
static const V lit86("ngp_impact_direction");
static const V lit87("ngp_damage_event_threshold");
static const V lit88("ngp_damage_event_lateral_total");
static const V lit89("ngp_damage_event_longitudinal_total");
static const V lit90("init");
static const V lit91("update");
static const V lit92("NO CAR");
static const V lit93("isInPit");
static const V lit94("reset");
static const V lit95("PIT REPAIR");
static const V lit96("RUNNING");
static const V lit97("RESET");
static const V lit98("get");
static const V lit99("getTotal");
static const V lit100("getLastImpact");
static const V lit101("getLastType");
static const V lit102("getLastDirection");
static const V lit103("getPeakG");
static const V lit104("debugStr");
static const V lit105("format");
static const V lit106("Status %s / Count %.0f / Active %s\n");
static const V lit107("ImpactG %.2f Peak %.2f / Last %.4f / Type %s / Dir %s\n");
static const V lit108("LatG %.2f LongG %.2f VertG %.2f\n");
static const V lit109("Total %.4f / F %.4f R %.4f L %.4f Rt %.4f\n");
static const V lit110("Pit %s Speed %.1f / Repaired %d");
static const V lit111("YES");
static const V lit112("NO");
V load_damage_event(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(16);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(9.81));set(z,lit3,V(4.0));set(z,lit4,V(1.0));set(z,lit5,V(5.0));set(z,lit6,V(0.0001));set(z,lit7,V(0.05));set(z,lit8,V(true));set(z,lit9,V(0.08));set(z,lit10,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit11,V(0.0));set(z,lit12,V(0.0));set(z,lit13,V(0.0));set(z,lit14,V(0.0));set(z,lit15,lit16);set(z,lit17,lit16);set(z,lit18,V(0.0));set(z,lit19,V(0.0));set(z,lit20,V(0.0));set(z,lit21,V(0.0));set(z,lit22,V(0.0));set(z,lit23,V(0.0));set(z,lit24,V(0.0));set(z,lit25,V(0.0));set(z,lit26,V(0.0));set(z,lit27,V(0.0));set(z,lit28,V(0.0));set(z,lit29,V(false));set(z,lit30,V(0.0));set(z,lit31,V(false));set(z,lit32,V(false));set(z,lit33,lit34);set(z,lit35,V(0.0));set(z,lit36,V(999.0));set(z,lit37,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit38)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit39)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=eq(e->slot(0,2),V());return !truth(t8)?ne(e->slot(0,2),e->slot(0,2)):t8;})())){return Args{([&](){V t9=e->slot(0,1);return !truth(t9)?V(0.0):t9;})()};
}
if(truth(([&](){V t10=eq(e->slot(0,2),get(e->get("math"),lit40));return !truth(t10)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit40)))):t10;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
return Args{([&](){V t14=([&](){V t15=lt(e->slot(0,0),V(0.0));return truth(t15)?V(-num(e->slot(0,0))):t15;})();return !truth(t14)?e->slot(0,0):t14;})()};
return Args{};});
{V t16=get(e->slot(0,0),lit41);e->slot(0,6)=std::move(t16);}
{V t17=get(e->slot(0,0),lit42);e->slot(0,7)=std::move(t17);}
e->slot(0,8)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t18=V(!truth(e->get("ac")));return !truth(t18)?V(!truth(get(e->get("ac"),lit43))):t18;})())){return Args{V()};
}
{Args t19=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit43),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t19,0);e->slot(0,1)=arg(t19,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t20=add(([&](){V t21=get(e->slot(1,2),lit36);return !truth(t21)?V(0.0):t21;})(),([&](){V t22=e->slot(0,0);return !truth(t22)?V(0.0):t22;})());refs[0].put(std::move(t20));}
if(truth(ge(get(e->slot(1,2),lit36),get(get(e->slot(1,1),lit1),lit10)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit36)};V t23=V(0.0);refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t24=V(true);refs[0].put(std::move(t24));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit37)};V t25=V(false);refs[0].put(std::move(t25));}
}
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{V t26=first(call(e->slot(1,6),Args{e->slot(0,0),e->slot(0,1),V(0.0)}));e->slot(0,2)=std::move(t26);}
return call(e->slot(1,3),Args{e->slot(0,2),V(0.0)});
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t27=first(call(e->slot(1,6),Args{e->slot(0,0),lit44,V()}));e->slot(0,1)=std::move(t27);}
{V t28=first(call(e->slot(1,10),Args{e->slot(0,1),lit45}));e->slot(0,2)=std::move(t28);}
{V t29=first(call(e->slot(1,10),Args{e->slot(0,1),lit46}));e->slot(0,3)=std::move(t29);}
{V t30=first(call(e->slot(1,10),Args{e->slot(0,1),lit47}));e->slot(0,4)=std::move(t30);}
{V t31=first(call(get(e->get("math"),lit48),Args{get(get(e->slot(1,1),lit1),lit2),V(0.001)}));e->slot(0,5)=std::move(t31);}
{V t32=divv(e->slot(0,2),e->slot(0,5));e->slot(0,6)=std::move(t32);}
{V t33=divv(e->slot(0,3),e->slot(0,5));e->slot(0,7)=std::move(t33);}
{V t34=divv(e->slot(0,4),e->slot(0,5));e->slot(0,8)=std::move(t34);}
return Args{first(call(e->slot(1,5),Args{e->slot(0,6)})),first(call(e->slot(1,5),Args{e->slot(0,7)})),first(call(e->slot(1,5),Args{e->slot(0,8)})),e->slot(0,6),e->slot(0,7),e->slot(0,8)};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(([&](){V t35=ge(e->slot(0,2),e->slot(0,0));return truth(t35)?ge(e->slot(0,2),e->slot(0,1)):t35;})())){return Args{lit49};
}
if(truth(gt(e->slot(0,0),e->slot(0,1)))){return Args{lit50};
}
return Args{lit51};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t36=([&](){V t37=get(get(e->slot(1,1),lit1),lit9);return !truth(t37)?V(0.08):t37;})();e->slot(0,4)=std::move(t36);}
if(truth(eq(e->slot(0,0),lit49))){if(truth(gt(e->slot(0,3),e->slot(0,4)))){return Args{lit52};
}
if(truth(lt(e->slot(0,3),V(-num(e->slot(0,4)))))){return Args{lit53};
}
return Args{lit49};
}
if(truth(eq(e->slot(0,0),lit50))){if(truth(gt(e->slot(0,1),e->slot(0,4)))){return Args{lit54};
}
if(truth(lt(e->slot(0,1),V(-num(e->slot(0,4)))))){return Args{lit55};
}
return Args{lit50};
}
if(truth(eq(e->slot(0,0),lit51))){if(truth(gt(e->slot(0,2),e->slot(0,4)))){return Args{lit56};
}
if(truth(lt(e->slot(0,2),V(-num(e->slot(0,4)))))){return Args{lit57};
}
return Args{lit51};
}
return Args{lit16};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,2)};V t38=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t38));}
if(truth(eq(e->slot(0,0),lit49))){return Args{};
}
if(truth(V(!truth(get(get(e->slot(1,1),lit1),lit8))))){if(truth(eq(e->slot(0,0),lit50))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t39=add(get(e->slot(1,2),lit26),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t40=add(get(e->slot(1,2),lit27),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t40));}
return Args{};
}
if(truth(eq(e->slot(0,0),lit51))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t41=add(get(e->slot(1,2),lit24),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit25)};V t42=add(get(e->slot(1,2),lit25),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t42));}
return Args{};
}
}
if(truth(eq(e->slot(0,1),lit55))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t43=add(get(e->slot(1,2),lit26),e->slot(0,2));refs[0].put(std::move(t43));}
return Args{};
}
if(truth(eq(e->slot(0,1),lit54))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t44=add(get(e->slot(1,2),lit27),e->slot(0,2));refs[0].put(std::move(t44));}
return Args{};
}
if(truth(eq(e->slot(0,1),lit56))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t45=add(get(e->slot(1,2),lit24),e->slot(0,2));refs[0].put(std::move(t45));}
return Args{};
}
if(truth(eq(e->slot(0,1),lit57))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit25)};V t46=add(get(e->slot(1,2),lit25),e->slot(0,2));refs[0].put(std::move(t46));}
return Args{};
}
if(truth(eq(e->slot(0,0),lit50))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t47=add(get(e->slot(1,2),lit26),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t48=add(get(e->slot(1,2),lit27),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t48));}
return Args{};
}
if(truth(eq(e->slot(0,0),lit51))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t49=add(get(e->slot(1,2),lit24),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit25)};V t50=add(get(e->slot(1,2),lit25),mul(e->slot(0,2),V(0.5)));refs[0].put(std::move(t50));}
}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,7),Args{lit58,([&](){V t51=get(e->slot(1,2),lit11);return !truth(t51)?V(0.0):t51;})()});
call(e->slot(1,7),Args{lit59,([&](){V t52=get(e->slot(1,2),lit12);return !truth(t52)?V(0.0):t52;})()});
call(e->slot(1,7),Args{lit60,([&](){V t53=get(e->slot(1,2),lit13);return !truth(t53)?V(0.0):t53;})()});
call(e->slot(1,7),Args{lit61,([&](){V t54=get(e->slot(1,2),lit14);return !truth(t54)?V(0.0):t54;})()});
call(e->slot(1,7),Args{lit62,([&](){V t55=get(e->slot(1,2),lit15);return !truth(t55)?lit16:t55;})()});
call(e->slot(1,7),Args{lit63,([&](){V t56=get(e->slot(1,2),lit17);return !truth(t56)?lit16:t56;})()});
call(e->slot(1,7),Args{lit64,([&](){V t57=get(e->slot(1,2),lit30);return !truth(t57)?V(0.0):t57;})()});
call(e->slot(1,7),Args{lit65,([&](){V t58=get(e->slot(1,2),lit24);return !truth(t58)?V(0.0):t58;})()});
call(e->slot(1,7),Args{lit66,([&](){V t59=get(e->slot(1,2),lit25);return !truth(t59)?V(0.0):t59;})()});
call(e->slot(1,7),Args{lit67,([&](){V t60=get(e->slot(1,2),lit26);return !truth(t60)?V(0.0):t60;})()});
call(e->slot(1,7),Args{lit68,([&](){V t61=get(e->slot(1,2),lit27);return !truth(t61)?V(0.0):t61;})()});
call(e->slot(1,7),Args{lit69,([&](){V t62=get(e->slot(1,2),lit18);return !truth(t62)?V(0.0):t62;})()});
call(e->slot(1,7),Args{lit70,([&](){V t63=get(e->slot(1,2),lit19);return !truth(t63)?V(0.0):t63;})()});
call(e->slot(1,7),Args{lit71,([&](){V t64=get(e->slot(1,2),lit20);return !truth(t64)?V(0.0):t64;})()});
call(e->slot(1,7),Args{lit72,([&](){V t65=get(e->slot(1,2),lit21);return !truth(t65)?V(0.0):t65;})()});
call(e->slot(1,7),Args{lit73,([&](){V t66=get(e->slot(1,2),lit22);return !truth(t66)?V(0.0):t66;})()});
call(e->slot(1,7),Args{lit74,([&](){V t67=get(e->slot(1,2),lit23);return !truth(t67)?V(0.0):t67;})()});
call(e->slot(1,7),Args{lit75,([&](){V t68=get(e->slot(1,2),lit28);return !truth(t68)?V(0.0):t68;})()});
call(e->slot(1,7),Args{lit76,([&](){V t69=([&](){V t70=get(e->slot(1,2),lit29);return truth(t70)?V(1.0):t70;})();return !truth(t69)?V(0.0):t69;})()});
call(e->slot(1,7),Args{lit77,([&](){V t71=([&](){V t72=get(e->slot(1,2),lit32);return truth(t72)?V(1.0):t72;})();return !truth(t71)?V(0.0):t71;})()});
call(e->slot(1,7),Args{lit78,([&](){V t73=get(e->slot(1,2),lit33);return !truth(t73)?lit79:t73;})()});
call(e->slot(1,7),Args{lit80,([&](){V t74=get(e->slot(1,2),lit35);return !truth(t74)?V(0.0):t74;})()});
call(e->slot(1,7),Args{lit81,([&](){V t75=get(e->slot(1,2),lit11);return !truth(t75)?V(0.0):t75;})()});
call(e->slot(1,7),Args{lit82,([&](){V t76=get(e->slot(1,2),lit12);return !truth(t76)?V(0.0):t76;})()});
call(e->slot(1,7),Args{lit83,([&](){V t77=get(e->slot(1,2),lit13);return !truth(t77)?V(0.0):t77;})()});
call(e->slot(1,7),Args{lit84,([&](){V t78=get(e->slot(1,2),lit14);return !truth(t78)?V(0.0):t78;})()});
call(e->slot(1,7),Args{lit85,([&](){V t79=get(e->slot(1,2),lit15);return !truth(t79)?lit16:t79;})()});
call(e->slot(1,7),Args{lit86,([&](){V t80=get(e->slot(1,2),lit17);return !truth(t80)?lit16:t80;})()});
if(truth(V(!truth(get(e->slot(1,2),lit37))))){return Args{};
}
call(e->slot(1,7),Args{lit87,get(get(e->slot(1,1),lit1),lit3)});
call(e->slot(1,7),Args{lit88,add(([&](){V t81=get(e->slot(1,2),lit26);return !truth(t81)?V(0.0):t81;})(),([&](){V t82=get(e->slot(1,2),lit27);return !truth(t82)?V(0.0):t82;})())});
call(e->slot(1,7),Args{lit89,add(([&](){V t83=get(e->slot(1,2),lit24);return !truth(t83)?V(0.0):t83;})(),([&](){V t84=get(e->slot(1,2),lit25);return !truth(t84)?V(0.0):t84;})())});
return Args{};});
Ref(e->slot(0,1),lit90).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t85=lit34;refs[0].put(std::move(t85));}
call(e->slot(1,15),Args{});
return Args{};}));
Ref(e->slot(0,1),lit91).put(native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit35)};V t86=add(([&](){V t87=get(e->slot(1,2),lit35);return !truth(t87)?V(0.0):t87;})(),V(1.0));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t88=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t88));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,0)};V t89=get(get(e->slot(1,1),lit1),lit6);refs[0].put(std::move(t89));}
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t90=first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit6),get(get(e->slot(1,1),lit1),lit7)}));refs[0].put(std::move(t90));}
call(e->slot(1,9),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t91=([&](){V t92=e->slot(0,1);return !truth(t92)?first(call(e->slot(1,8),Args{})):t92;})();refs[0].put(std::move(t91));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t93=lit92;refs[0].put(std::move(t93));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit28)};V t94=V(0.0);refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit29)};V t95=V(false);refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t96=V(false);refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit12)};V t97=V(0.0);refs[0].put(std::move(t97));}
call(e->slot(1,15),Args{});
return Args{};
}
{V t98=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),Args{e->slot(0,1),lit28,V(0.0)})),V(0.0)}));e->slot(0,3)=std::move(t98);}
{V t99=([&](){V t100=([&](){V t101=first(call(e->slot(1,6),Args{e->slot(0,1),lit93,V(false)}));return truth(t101)?V(true):t101;})();return !truth(t100)?V(false):t100;})();e->slot(0,4)=std::move(t99);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit28)};V t102=e->slot(0,3);refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit29)};V t103=e->slot(0,4);refs[0].put(std::move(t103));}
{V t104=([&](){V t105=e->slot(0,4);return truth(t105)?lt(e->slot(0,3),get(get(e->slot(1,1),lit1),lit5)):t105;})();e->slot(0,5)=std::move(t104);}
if(truth(([&](){V t106=e->slot(0,5);return truth(t106)?V(!truth(get(e->slot(1,2),lit31))):t106;})())){call(get(e->slot(1,1),lit94),Args{lit95});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit31)};V t107=V(true);refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t108=lit95;refs[0].put(std::move(t108));}
call(e->slot(1,15),Args{});
return Args{};
}
if(truth(V(!truth(e->slot(0,5))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit31)};V t109=V(false);refs[0].put(std::move(t109));}
}
{Args t110=call(e->slot(1,11),Args{e->slot(0,1)});e->slot(0,6)=arg(t110,0);e->slot(0,7)=arg(t110,1);e->slot(0,8)=arg(t110,2);e->slot(0,9)=arg(t110,3);e->slot(0,10)=arg(t110,4);e->slot(0,11)=arg(t110,5);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit18)};V t111=e->slot(0,6);refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit19)};V t112=e->slot(0,7);refs[0].put(std::move(t112));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit20)};V t113=e->slot(0,8);refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit21)};V t114=e->slot(0,9);refs[0].put(std::move(t114));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit22)};V t115=e->slot(0,10);refs[0].put(std::move(t115));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit23)};V t116=e->slot(0,11);refs[0].put(std::move(t116));}
{V t117=first(call(get(e->get("math"),lit48),Args{e->slot(0,6),e->slot(0,7),e->slot(0,8)}));e->slot(0,12)=std::move(t117);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit13)};V t118=e->slot(0,12);refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit14)};V t119=first(call(get(e->get("math"),lit48),Args{([&](){V t120=get(e->slot(1,2),lit14);return !truth(t120)?V(0.0):t120;})(),e->slot(0,12)}));refs[0].put(std::move(t119));}
if(truth(gt(e->slot(0,12),get(get(e->slot(1,1),lit1),lit3)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t121=mul(mul(sub(e->slot(1,12),get(get(e->slot(2,1),lit1),lit3)),e->slot(1,0)),get(get(e->slot(2,1),lit1),lit4));e->slot(0,0)=std::move(t121);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit12)};V t122=e->slot(0,0);refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit11)};V t123=add(([&](){V t124=get(e->slot(2,2),lit11);return !truth(t124)?V(0.0):t124;})(),e->slot(0,0));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit15)};V t125=first(call(e->slot(2,12),Args{e->slot(1,6),e->slot(1,7),e->slot(1,8)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit17)};V t126=first(call(e->slot(2,13),Args{get(e->slot(2,2),lit15),e->slot(1,9),e->slot(1,10),e->slot(1,11)}));refs[0].put(std::move(t126));}
call(e->slot(2,14),Args{get(e->slot(2,2),lit15),get(e->slot(2,2),lit17),e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit32)};V t127=V(true);refs[0].put(std::move(t127));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit12)};V t128=V(0.0);refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t129=V(false);refs[0].put(std::move(t129));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t130=lit96;refs[0].put(std::move(t130));}
call(e->slot(1,15),Args{});
return Args{};}));
Ref(e->slot(0,1),lit94).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit11)};V t131=V(0.0);refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit12)};V t132=V(0.0);refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit13)};V t133=V(0.0);refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit14)};V t134=V(0.0);refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit15)};V t135=lit16;refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit17)};V t136=lit16;refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit18)};V t137=V(0.0);refs[0].put(std::move(t137));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit19)};V t138=V(0.0);refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit20)};V t139=V(0.0);refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit21)};V t140=V(0.0);refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit22)};V t141=V(0.0);refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit23)};V t142=V(0.0);refs[0].put(std::move(t142));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit24)};V t143=V(0.0);refs[0].put(std::move(t143));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit25)};V t144=V(0.0);refs[0].put(std::move(t144));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit26)};V t145=V(0.0);refs[0].put(std::move(t145));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit27)};V t146=V(0.0);refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit32)};V t147=V(false);refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit30)};V t148=add(([&](){V t149=get(e->slot(1,2),lit30);return !truth(t149)?V(0.0):t149;})(),V(1.0));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit33)};V t150=first(call(e->get("tostring"),Args{([&](){V t151=e->slot(0,0);return !truth(t151)?lit97:t151;})()}));refs[0].put(std::move(t150));}
call(e->slot(1,15),Args{});
return Args{};}));
Ref(e->slot(0,1),lit98).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit99).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t152=get(e->slot(1,2),lit11);return !truth(t152)?V(0.0):t152;})()};
return Args{};}));
Ref(e->slot(0,1),lit100).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t153=get(e->slot(1,2),lit12);return !truth(t153)?V(0.0):t153;})()};
return Args{};}));
Ref(e->slot(0,1),lit101).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t154=get(e->slot(1,2),lit15);return !truth(t154)?lit16:t154;})()};
return Args{};}));
Ref(e->slot(0,1),lit102).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t155=get(e->slot(1,2),lit17);return !truth(t155)?lit16:t155;})()};
return Args{};}));
Ref(e->slot(0,1),lit103).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t156=get(e->slot(1,2),lit14);return !truth(t156)?V(0.0):t156;})()};
return Args{};}));
Ref(e->slot(0,1),lit104).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit105),Args{concat(lit106,concat(lit107,concat(lit108,concat(lit109,lit110)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit33)})),([&](){V t157=get(e->slot(1,2),lit35);return !truth(t157)?V(0.0):t157;})(),([&](){V t158=([&](){V t159=get(e->slot(1,2),lit32);return truth(t159)?lit111:t159;})();return !truth(t158)?lit112:t158;})(),([&](){V t160=get(e->slot(1,2),lit13);return !truth(t160)?V(0.0):t160;})(),([&](){V t161=get(e->slot(1,2),lit14);return !truth(t161)?V(0.0):t161;})(),([&](){V t162=get(e->slot(1,2),lit12);return !truth(t162)?V(0.0):t162;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit15)})),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit17)})),([&](){V t163=get(e->slot(1,2),lit18);return !truth(t163)?V(0.0):t163;})(),([&](){V t164=get(e->slot(1,2),lit19);return !truth(t164)?V(0.0):t164;})(),([&](){V t165=get(e->slot(1,2),lit20);return !truth(t165)?V(0.0):t165;})(),([&](){V t166=get(e->slot(1,2),lit11);return !truth(t166)?V(0.0):t166;})(),([&](){V t167=get(e->slot(1,2),lit24);return !truth(t167)?V(0.0):t167;})(),([&](){V t168=get(e->slot(1,2),lit25);return !truth(t168)?V(0.0):t168;})(),([&](){V t169=get(e->slot(1,2),lit26);return !truth(t169)?V(0.0):t169;})(),([&](){V t170=get(e->slot(1,2),lit27);return !truth(t170)?V(0.0):t170;})(),([&](){V t171=([&](){V t172=get(e->slot(1,2),lit29);return truth(t172)?lit111:t172;})();return !truth(t171)?lit112:t171;})(),([&](){V t173=get(e->slot(1,2),lit28);return !truth(t173)?V(0.0):t173;})(),([&](){V t174=get(e->slot(1,2),lit30);return !truth(t174)?V(0.0):t174;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
