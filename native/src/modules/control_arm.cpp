// Generated native C++ from pinned control_arm.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("frontTau");
static const V lit3("rearTau");
static const V lit4("frontFlex");
static const V lit5("rearFlex");
static const V lit6("maxDeflection");
static const V lit7("yawGain");
static const V lit8("armCamberGain");
static const V lit9("armToeGain");
static const V lit10("loadYawGain");
static const V lit11("contactYawGain");
static const V lit12("bodySteerGain");
static const V lit13("flexYawGain");
static const V lit14("flexRollGain");
static const V lit15("flexEnergyGain");
static const V lit16("flexReleaseReturnGain");
static const V lit17("complianceToeGain");
static const V lit18("complianceForceLeakGain");
static const V lit19("complianceLoadPathGain");
static const V lit20("bodyReadInterval");
static const V lit21("rootReadInterval");
static const V lit22("bodyFlexTauGain");
static const V lit23("bodyTorsionRearTauGain");
static const V lit24("bodyDampingTauGain");
static const V lit25("bodyStiffTauLoss");
static const V lit26("bodyFlexDeflectionGain");
static const V lit27("bodyTorsionRearDeflectionGain");
static const V lit28("bodyStiffDeflectionLoss");
static const V lit29("minBodyTauScale");
static const V lit30("maxBodyTauScale");
static const V lit31("minBodyDeflectionScale");
static const V lit32("maxBodyDeflectionScale");
static const V lit33("loadRef");
static const V lit34("maxGeometryOutput");
static const V lit35("debugStoreInterval");
static const V lit36("minDt");
static const V lit37("maxDt");
static const V lit38("rawYaw");
static const V lit39("rawInput");
static const V lit40("front");
static const V lit41("rear");
static const V lit42("frontDef");
static const V lit43("rearDef");
static const V lit44("total");
static const V lit45("armCamber");
static const V lit46("armToe");
static const V lit47("complianceToe");
static const V lit48("complianceCamber");
static const V lit49("forceLeak");
static const V lit50("loadPathLoss");
static const V lit51("load");
static const V lit52("contact");
static const V lit53("frontCamberAvg");
static const V lit54("rearCamberAvg");
static const V lit55("frontToeAvg");
static const V lit56("rearToeAvg");
static const V lit57("frontLoadDiff");
static const V lit58("rearLoadDiff");
static const V lit59("frontContactLoss");
static const V lit60("rearContactLoss");
static const V lit61("bodySteer");
static const V lit62("flexYaw");
static const V lit63("flexRoll");
static const V lit64("flexEnergy");
static const V lit65("flexRelease");
static const V lit66("bodyRigidity");
static const V lit67("bodyFlexFactor");
static const V lit68("bodyTorsionFactor");
static const V lit69("bodyDampingFactor");
static const V lit70("bodyFrontTauScale");
static const V lit71("bodyRearTauScale");
static const V lit72("bodyFrontDeflectionScale");
static const V lit73("bodyRearDeflectionScale");
static const V lit74("camberOutput");
static const V lit75("toeOutput");
static const V lit76("status");
static const V lit77("INIT");
static const V lit78("updateCount");
static const V lit79("wheelsValid");
static const V lit80("armLinked");
static const V lit81("loadLinked");
static const V lit82("contactLinked");
static const V lit83("flexLinked");
static const V lit84("bodyLinked");
static const V lit85("complianceLinked");
static const V lit86("bodyReadTimer");
static const V lit87("rootReadTimer");
static const V lit88("debugStoreTimer");
static const V lit89("debugStoreNow");
static const V lit90("state");
static const V lit91("debug");
static const V lit92("huge");
static const V lit93("safeField");
static const V lit94("safeLoadRaw");
static const V lit95("safeStore");
static const V lit96("getCar");
static const V lit97("localAngularVelocity");
static const V lit98("y");
static const V lit99("speedKmh");
static const V lit100("ngp_arm_camber_");
static const V lit101("ngp_compliance_arm_camber_");
static const V lit102("ngp_ultra_camber_");
static const V lit103("ngp_uc_camber_");
static const V lit104("ngp_arm_toe_");
static const V lit105("ngp_compliance_arm_toe_");
static const V lit106("ngp_ultra_toe_");
static const V lit107("ngp_uc_toe_");
static const V lit108("ngp_compliance_virtual_toe_");
static const V lit109("ngp_virtual_toe_");
static const V lit110("ngp_cs_toe_");
static const V lit111("ngp_compliance_virtual_camber_");
static const V lit112("ngp_virtual_camber_");
static const V lit113("ngp_cs_camber_");
static const V lit114("ngp_compliance_force_leak_");
static const V lit115("ngp_force_path_loss_");
static const V lit116("ngp_force_leak_");
static const V lit117("ngp_compliance_load_path_loss_");
static const V lit118("ngp_load_path_loss_");
static const V lit119("ngp_contact_load_");
static const V lit120("ngp_tire_state_load_");
static const V lit121("ngp_wheel_load_");
static const V lit122("ngp_load_wheel_");
static const V lit123("ngp_sprung_load_");
static const V lit124("ngp_load_path_wheel_load_");
static const V lit125("ngp_dlt_load_");
static const V lit126("ngp_contact_trust_");
static const V lit127("ngp_contact_quality_");
static const V lit128("ngp_tire_contact_quality_");
static const V lit129("ngp_tcr_quality_");
static const V lit130("ngp_tc_contact_");
static const V lit131("ngp_contact_loss_");
static const V lit132("ngp_tire_contact_loss_");
static const V lit133("ngp_tcr_contact_loss_");
static const V lit134("ngp_body_steer");
static const V lit135("ngp_chassis_flex_yaw");
static const V lit136("ngp_flex_yaw");
static const V lit137("ngp_chassis_flex_roll");
static const V lit138("ngp_flex_roll");
static const V lit139("ngp_chassis_flex_energy");
static const V lit140("ngp_flex_energy");
static const V lit141("ngp_chassis_flex_release");
static const V lit142("ngp_flex_release");
static const V lit143("ngp_body_rigidity");
static const V lit144("ngp_body_flex_factor");
static const V lit145("ngp_body_torsion_factor");
static const V lit146("ngp_body_damping_factor");
static const V lit147("ngp_body_rigidity_update_count");
static const V lit148("ngp_arm_front");
static const V lit149("ngp_arm_rear");
static const V lit150("ngp_arm_total");
static const V lit151("ngp_arm_raw_yaw");
static const V lit152("ngp_control_arm_front");
static const V lit153("ngp_control_arm_rear");
static const V lit154("ngp_control_arm_total");
static const V lit155("ngp_control_arm_raw_yaw");
static const V lit156("ngp_control_arm_status");
static const V lit157("ngp_control_arm_update_count");
static const V lit158("ngp_control_arm_wheels_valid");
static const V lit159("ngp_control_arm_body_linked");
static const V lit160("ngp_control_arm_camber_");
static const V lit161("ngp_control_arm_toe_");
static const V lit162("ngp_ca_camber_");
static const V lit163("ngp_ca_toe_");
static const V lit164("ngp_control_arm_raw_input");
static const V lit165("ngp_control_arm_front_tau_scale");
static const V lit166("ngp_control_arm_rear_tau_scale");
static const V lit167("ngp_control_arm_front_deflection_scale");
static const V lit168("ngp_control_arm_rear_deflection_scale");
static const V lit169("ngp_control_arm_front_toe_avg");
static const V lit170("ngp_control_arm_rear_toe_avg");
static const V lit171("ngp_control_arm_front_camber_avg");
static const V lit172("ngp_control_arm_rear_camber_avg");
static const V lit173("ngp_control_arm_front_load_diff");
static const V lit174("ngp_control_arm_rear_load_diff");
static const V lit175("ngp_control_arm_front_contact_loss");
static const V lit176("ngp_control_arm_rear_contact_loss");
static const V lit177("ngp_control_arm_flex_energy");
static const V lit178("ngp_control_arm_flex_release");
static const V lit179("ngp_control_arm_arm_linked");
static const V lit180("ngp_control_arm_load_linked");
static const V lit181("ngp_control_arm_contact_linked");
static const V lit182("ngp_control_arm_flex_linked");
static const V lit183("ngp_control_arm_compliance_linked");
static const V lit184("init");
static const V lit185("update");
static const V lit186("NO CAR");
static const V lit187("wheels");
static const V lit188("RUNNING");
static const V lit189("getFront");
static const V lit190("getRear");
static const V lit191("getTotal");
static const V lit192("getCamber");
static const V lit193("getToe");
static const V lit194("getState");
static const V lit195("debugStr");
static const V lit196("floor");
static const V lit197("format");
static const V lit198("ControlArm W%d Cam %.4f Toe %.4f\nArm C %.4f T %.4f / Comp C %.4f T %.4f\nLoad %.0f Contact %.2f Leak %.2f Loss %.2f");
static const V lit199("Status %s / Count %.0f / Wheels %s / Body %s\n");
static const V lit200("Arm Front %.4f Rear %.4f Total %.4f\n");
static const V lit201("RawYaw %.4f RawInput %.4f\n");
static const V lit202("Tau F %.2f R %.2f / Def F %.2f R %.2f\n");
static const V lit203("ToeAvg F %.4f R %.4f / Links Arm:%s Load:%s Contact:%s Flex:%s Comp:%s");
static const V lit204("OK");
static const V lit205("NIL");
V load_control_arm(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(29);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{Args t3=Args{V(0.0),V(1.0),V(2.0),V(3.0)};e->slot(0,2)=arg(t3,0);e->slot(0,3)=arg(t3,1);e->slot(0,4)=arg(t3,2);e->slot(0,5)=arg(t3,3);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t4=([&](){V z=table();set(z,lit2,V(0.07));set(z,lit3,V(0.11));set(z,lit4,V(0.35));set(z,lit5,V(0.55));set(z,lit6,V(0.25));set(z,lit7,V(1.0));set(z,lit8,V(0.85));set(z,lit9,V(0.95));set(z,lit10,V(3.5e-05));set(z,lit11,V(0.055));set(z,lit12,V(0.16));set(z,lit13,V(0.18));set(z,lit14,V(0.05));set(z,lit15,V(0.1));set(z,lit16,V(0.12));set(z,lit17,V(0.22));set(z,lit18,V(0.08));set(z,lit19,V(0.08));set(z,lit20,V(0.05));set(z,lit21,V(0.05));set(z,lit22,V(0.3));set(z,lit23,V(0.24));set(z,lit24,V(0.1));set(z,lit25,V(0.08));set(z,lit26,V(0.16));set(z,lit27,V(0.12));set(z,lit28,V(0.06));set(z,lit29,V(0.84));set(z,lit30,V(1.3));set(z,lit31,V(0.86));set(z,lit32,V(1.2));set(z,lit33,V(3000.0));set(z,lit34,V(0.12));set(z,lit35,V(0.25));set(z,lit36,V(5e-05));set(z,lit37,V(0.05));return z;})();refs[0].put(std::move(t4));}
{V t5=([&](){V z=table();set(z,lit38,V(0.0));set(z,lit39,V(0.0));set(z,lit40,V(0.0));set(z,lit41,V(0.0));set(z,lit42,V(0.0));set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit46,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit47,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit48,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit49,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit50,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit51,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit52,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(1.0));set(z,lit67,V(1.0));set(z,lit68,V(1.0));set(z,lit69,V(1.0));set(z,lit70,V(1.0));set(z,lit71,V(1.0));set(z,lit72,V(1.0));set(z,lit73,V(1.0));set(z,lit74,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit75,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit76,lit77);set(z,lit78,V(0.0));set(z,lit79,V(false));set(z,lit80,V(false));set(z,lit81,V(false));set(z,lit82,V(false));set(z,lit83,V(false));set(z,lit84,V(false));set(z,lit85,V(false));set(z,lit86,V(999.0));set(z,lit87,V(999.0));set(z,lit88,V(999.0));set(z,lit89,V(true));return z;})();e->slot(0,6)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit90)};V t6=e->slot(0,6);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit91)};V t7=e->slot(0,6);refs[0].put(std::move(t7));}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit92)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit92)))):t9;})())){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t13=first(call(e->slot(1,7),Args{e->slot(0,0),([&](){V t14=e->slot(0,1);return !truth(t14)?V(0.0):t14;})()}));refs[0].put(std::move(t13));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
{V t15=get(e->slot(0,0),lit93);e->slot(0,9)=std::move(t15);}
{V t16=get(e->slot(0,0),lit94);e->slot(0,10)=std::move(t16);}
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t17=first(call(e->slot(1,10),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t17);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t18=e->slot(0,1);return !truth(t18)?V(0.0):t18;})()};
}
return call(e->slot(1,7),Args{e->slot(0,2),([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()});
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t20=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t20);}
{double t21=num(V(1.0)),t22=num(length(e->slot(0,1))),t23=num(V(1.0));for(double t24=t21;(t23>0?t24<=t22:t24>=t22);t24+=t23){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t24);{V t25=first(call(e->slot(2,10),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t25);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,7),Args{e->slot(0,1),([&](){V t26=e->slot(1,0);return !truth(t26)?V(0.0):t26;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t27=e->slot(0,0);return !truth(t27)?V(0.0):t27;})(),V()};
return Args{};});
{V t28=get(e->slot(0,0),lit95);e->slot(0,13)=std::move(t28);}
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t29=V(!truth(e->get("ac")));return !truth(t29)?V(!truth(get(e->get("ac"),lit96))):t29;})())){return Args{V()};
}
{Args t30=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit96),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t30,0);e->slot(0,1)=arg(t30,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t31=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t32=first(call(e->slot(1,7),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t32));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t33=first(call(e->slot(1,7),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t34=first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t34));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t35=first(call(e->slot(1,8),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t35);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t36=first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t36));}
return Args{([&](){V t37=([&](){V t38=lt(e->slot(0,0),V(0.0));return truth(t38)?V(-num(e->slot(0,0))):t38;})();return !truth(t37)?e->slot(0,0):t37;})()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit88)};V t39=add(([&](){V t40=get(e->slot(1,6),lit88);return !truth(t40)?V(0.0):t40;})(),([&](){V t41=e->slot(0,0);return !truth(t41)?V(0.0):t41;})());refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit89)};V t42=ge(get(e->slot(1,6),lit88),get(get(e->slot(1,1),lit1),lit35));refs[0].put(std::move(t42));}
if(truth(get(e->slot(1,6),lit89))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit88)};V t43=V(0.0);refs[0].put(std::move(t43));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t44=first(call(e->slot(1,9),Args{e->slot(0,0),lit97,V()}));e->slot(0,1)=std::move(t44);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V(0.0)};
}
{V t45=first(call(e->slot(1,7),Args{get(e->slot(0,1),lit98),V(0.0)}));e->slot(0,2)=std::move(t45);}
{V t46=first(call(e->slot(1,7),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit99,V(0.0)})),V(0.0)}));e->slot(0,3)=std::move(t46);}
return Args{mul(e->slot(0,2),divv(e->slot(0,3),V(3.6)))};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,6),lit80)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit85)};V t48=V(false);refs[0].put(std::move(t48));}
{double t49=num(V(0.0)),t50=num(V(3.0)),t51=num(V(1.0));for(double t52=t49;(t51>0?t52<=t50:t52>=t50);t52+=t51){auto parent=e;Env storage(parent,false,13);auto e=&storage;e->slot(0,0)=V(t52);{Args t53=call(e->slot(2,12),Args{V(0.0),concat(lit100,e->slot(0,0)),concat(lit101,e->slot(0,0)),concat(lit102,e->slot(0,0)),concat(lit103,e->slot(0,0))});e->slot(0,1)=arg(t53,0);e->slot(0,2)=arg(t53,1);}
{Args t54=call(e->slot(2,12),Args{V(0.0),concat(lit104,e->slot(0,0)),concat(lit105,e->slot(0,0)),concat(lit106,e->slot(0,0)),concat(lit107,e->slot(0,0))});e->slot(0,3)=arg(t54,0);e->slot(0,4)=arg(t54,1);}
if(truth(([&](){V t55=e->slot(0,2);return !truth(t55)?e->slot(0,4):t55;})())){{std::array<Ref,1> refs{Ref(e->slot(2,6),lit80)};V t56=V(true);refs[0].put(std::move(t56));}
}
{Args t57=call(e->slot(2,12),Args{V(0.0),concat(lit108,e->slot(0,0)),concat(lit109,e->slot(0,0)),concat(lit110,e->slot(0,0))});e->slot(0,5)=arg(t57,0);e->slot(0,6)=arg(t57,1);}
{Args t58=call(e->slot(2,12),Args{V(0.0),concat(lit111,e->slot(0,0)),concat(lit112,e->slot(0,0)),concat(lit113,e->slot(0,0))});e->slot(0,7)=arg(t58,0);e->slot(0,8)=arg(t58,1);}
{Args t59=call(e->slot(2,12),Args{V(0.0),concat(lit114,e->slot(0,0)),concat(lit115,e->slot(0,0)),concat(lit116,e->slot(0,0))});e->slot(0,9)=arg(t59,0);e->slot(0,10)=arg(t59,1);}
{Args t60=call(e->slot(2,12),Args{V(0.0),concat(lit117,e->slot(0,0)),concat(lit118,e->slot(0,0))});e->slot(0,11)=arg(t60,0);e->slot(0,12)=arg(t60,1);}
if(truth(([&](){V t61=([&](){V t62=([&](){V t63=e->slot(0,6);return !truth(t63)?e->slot(0,8):t63;})();return !truth(t62)?e->slot(0,10):t62;})();return !truth(t61)?e->slot(0,12):t61;})())){{std::array<Ref,1> refs{Ref(e->slot(2,6),lit85)};V t64=V(true);refs[0].put(std::move(t64));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit45),e->slot(0,0))};V t65=first(call(e->slot(2,8),Args{e->slot(0,1),V(-num(get(get(e->slot(2,1),lit1),lit34))),get(get(e->slot(2,1),lit1),lit34)}));refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit46),e->slot(0,0))};V t66=first(call(e->slot(2,8),Args{e->slot(0,3),V(-num(get(get(e->slot(2,1),lit1),lit34))),get(get(e->slot(2,1),lit1),lit34)}));refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit47),e->slot(0,0))};V t67=first(call(e->slot(2,8),Args{e->slot(0,5),V(-num(get(get(e->slot(2,1),lit1),lit34))),get(get(e->slot(2,1),lit1),lit34)}));refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit48),e->slot(0,0))};V t68=first(call(e->slot(2,8),Args{e->slot(0,7),V(-num(get(get(e->slot(2,1),lit1),lit34))),get(get(e->slot(2,1),lit1),lit34)}));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit49),e->slot(0,0))};V t69=first(call(e->slot(2,8),Args{e->slot(0,9),V(0.0),V(1.0)}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit50),e->slot(0,0))};V t70=first(call(e->slot(2,8),Args{e->slot(0,11),V(0.0),V(1.0)}));refs[0].put(std::move(t70));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit53)};V t71=mul(add(get(get(e->slot(1,6),lit45),e->slot(1,2)),get(get(e->slot(1,6),lit45),e->slot(1,3))),V(0.5));refs[0].put(std::move(t71));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit54)};V t72=mul(add(get(get(e->slot(1,6),lit45),e->slot(1,4)),get(get(e->slot(1,6),lit45),e->slot(1,5))),V(0.5));refs[0].put(std::move(t72));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit55)};V t73=mul(add(get(get(e->slot(1,6),lit46),e->slot(1,2)),get(get(e->slot(1,6),lit46),e->slot(1,3))),V(0.5));refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit56)};V t74=mul(add(get(get(e->slot(1,6),lit46),e->slot(1,4)),get(get(e->slot(1,6),lit46),e->slot(1,5))),V(0.5));refs[0].put(std::move(t74));}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t75=call(e->slot(1,12),Args{V(),concat(lit119,e->slot(0,0)),concat(lit120,e->slot(0,0)),concat(lit121,e->slot(0,0)),concat(lit122,e->slot(0,0)),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0))});e->slot(0,1)=arg(t75,0);e->slot(0,2)=arg(t75,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit81)};V t76=V(true);refs[0].put(std::move(t76));}
return call(e->slot(1,8),Args{e->slot(0,1),V(0.0),V(15000.0)});
}
{V t77=first(call(e->slot(1,10),Args{concat(lit125,e->slot(0,0))}));e->slot(0,3)=std::move(t77);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit81)};V t78=V(true);refs[0].put(std::move(t78));}
return call(e->slot(1,8),Args{add(get(get(e->slot(1,1),lit1),lit33),first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)}))),V(0.0),V(15000.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t79=call(e->slot(1,12),Args{V(),concat(lit126,e->slot(0,0)),concat(lit127,e->slot(0,0)),concat(lit128,e->slot(0,0)),concat(lit129,e->slot(0,0)),concat(lit130,e->slot(0,0))});e->slot(0,1)=arg(t79,0);e->slot(0,2)=arg(t79,1);}
if(truth(e->slot(0,2))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit82)};V t80=V(true);refs[0].put(std::move(t80));}
return call(e->slot(1,8),Args{e->slot(0,1),V(0.0),V(1.2)});
}
{V t81=([&](){V t82=([&](){V t83=first(call(e->slot(1,10),Args{concat(lit131,e->slot(0,0))}));return !truth(t83)?first(call(e->slot(1,10),Args{concat(lit132,e->slot(0,0))})):t83;})();return !truth(t82)?first(call(e->slot(1,10),Args{concat(lit133,e->slot(0,0))})):t82;})();e->slot(0,3)=std::move(t81);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit82)};V t84=V(true);refs[0].put(std::move(t84));}
return call(e->slot(1,8),Args{sub(V(1.0),first(call(e->slot(1,7),Args{e->slot(0,3),V(0.0)}))),V(0.0),V(1.2)});
}
return Args{V(1.0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit87)};V t85=add(([&](){V t86=get(e->slot(1,6),lit87);return !truth(t86)?V(0.0):t86;})(),([&](){V t87=e->slot(0,0);return !truth(t87)?V(0.0):t87;})());refs[0].put(std::move(t85));}
if(truth(lt(get(e->slot(1,6),lit87),get(get(e->slot(1,1),lit1),lit21)))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit87)};V t88=V(0.0);refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit81)};V t89=V(false);refs[0].put(std::move(t89));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit82)};V t90=V(false);refs[0].put(std::move(t90));}
{double t91=num(V(0.0)),t92=num(V(3.0)),t93=num(V(1.0));for(double t94=t91;(t93>0?t94<=t92:t94>=t92);t94+=t93){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t94);{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit51),e->slot(0,0))};V t95=first(call(e->slot(2,20),Args{e->slot(0,0)}));refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit52),e->slot(0,0))};V t96=first(call(e->slot(2,21),Args{e->slot(0,0)}));refs[0].put(std::move(t96));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit57)};V t97=sub(get(get(e->slot(1,6),lit51),e->slot(1,3)),get(get(e->slot(1,6),lit51),e->slot(1,2)));refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit58)};V t98=sub(get(get(e->slot(1,6),lit51),e->slot(1,5)),get(get(e->slot(1,6),lit51),e->slot(1,4)));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit59)};V t99=first(call(e->slot(1,8),Args{sub(V(1.0),mul(add(get(get(e->slot(1,6),lit52),e->slot(1,2)),get(get(e->slot(1,6),lit52),e->slot(1,3))),V(0.5))),V(0.0),V(1.0)}));refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit60)};V t100=first(call(e->slot(1,8),Args{sub(V(1.0),mul(add(get(get(e->slot(1,6),lit52),e->slot(1,4)),get(get(e->slot(1,6),lit52),e->slot(1,5))),V(0.5))),V(0.0),V(1.0)}));refs[0].put(std::move(t100));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,6),lit61)};V t101=first(call(e->slot(1,11),Args{lit134,V(0.0)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit62)};V t102=first(call(e->slot(1,11),joined(Args{lit135},call(e->slot(1,11),Args{lit136,V(0.0)}))));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit63)};V t103=first(call(e->slot(1,11),joined(Args{lit137},call(e->slot(1,11),Args{lit138,V(0.0)}))));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit64)};V t104=first(call(e->slot(1,11),joined(Args{lit139},call(e->slot(1,11),Args{lit140,V(0.0)}))));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit65)};V t105=first(call(e->slot(1,11),joined(Args{lit141},call(e->slot(1,11),Args{lit142,V(0.0)}))));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit83)};V t106=([&](){V t107=([&](){V t108=ne(first(call(e->slot(1,10),Args{lit134})),V());return !truth(t108)?ne(first(call(e->slot(1,10),Args{lit135})),V()):t108;})();return !truth(t107)?ne(first(call(e->slot(1,10),Args{lit139})),V()):t107;})();refs[0].put(std::move(t106));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit86)};V t109=add(([&](){V t110=get(e->slot(1,6),lit86);return !truth(t110)?V(0.0):t110;})(),([&](){V t111=e->slot(0,0);return !truth(t111)?V(0.0):t111;})());refs[0].put(std::move(t109));}
if(truth(lt(get(e->slot(1,6),lit86),get(get(e->slot(1,1),lit1),lit20)))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit86)};V t112=V(0.0);refs[0].put(std::move(t112));}
{V t113=first(call(e->slot(1,10),Args{lit143}));e->slot(0,1)=std::move(t113);}
{V t114=first(call(e->slot(1,10),Args{lit144}));e->slot(0,2)=std::move(t114);}
{V t115=first(call(e->slot(1,10),Args{lit145}));e->slot(0,3)=std::move(t115);}
{V t116=first(call(e->slot(1,10),Args{lit146}));e->slot(0,4)=std::move(t116);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit84)};V t117=([&](){V t118=([&](){V t119=([&](){V t120=([&](){V t121=ne(e->slot(0,1),V());return !truth(t121)?ne(e->slot(0,2),V()):t121;})();return !truth(t120)?ne(e->slot(0,3),V()):t120;})();return !truth(t119)?ne(e->slot(0,4),V()):t119;})();return !truth(t118)?gt(first(call(e->slot(1,11),Args{lit147,V(0.0)})),V(0.0)):t118;})();refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit66)};V t122=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,1),V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit67)};V t123=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,2),V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit68)};V t124=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,3),V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit69)};V t125=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,4),V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t125));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t126=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t126);}
if(truth(V(!truth(get(e->slot(1,6),lit84))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit70)};V t127=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit70),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t128=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit71),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit72)};V t129=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit72),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t130=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit73),V(1.0),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t130));}
return Args{};
}
{V t131=first(call(e->slot(1,8),Args{sub(get(e->slot(1,6),lit67),V(1.0)),V(0.0),V(0.8)}));e->slot(0,2)=std::move(t131);}
{V t132=first(call(e->slot(1,8),Args{sub(get(e->slot(1,6),lit68),V(1.0)),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t132);}
{V t133=first(call(e->slot(1,8),Args{sub(get(e->slot(1,6),lit69),V(1.0)),V(0.0),V(0.8)}));e->slot(0,4)=std::move(t133);}
{V t134=first(call(e->slot(1,8),Args{sub(get(e->slot(1,6),lit66),V(1.0)),V(0.0),V(0.35)}));e->slot(0,5)=std::move(t134);}
{V t135=first(call(e->slot(1,8),Args{sub(add(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit22))),mul(e->slot(0,4),get(e->slot(0,1),lit24))),mul(e->slot(0,5),get(e->slot(0,1),lit25))),get(e->slot(0,1),lit29),get(e->slot(0,1),lit30)}));e->slot(0,6)=std::move(t135);}
{V t136=first(call(e->slot(1,8),Args{sub(add(add(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit22))),mul(e->slot(0,3),get(e->slot(0,1),lit23))),mul(e->slot(0,4),get(e->slot(0,1),lit24))),mul(e->slot(0,5),get(e->slot(0,1),lit25))),get(e->slot(0,1),lit29),get(e->slot(0,1),lit30)}));e->slot(0,7)=std::move(t136);}
{V t137=first(call(e->slot(1,8),Args{sub(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit26))),mul(e->slot(0,5),get(e->slot(0,1),lit28))),get(e->slot(0,1),lit31),get(e->slot(0,1),lit32)}));e->slot(0,8)=std::move(t137);}
{V t138=first(call(e->slot(1,8),Args{sub(add(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,1),lit26))),mul(e->slot(0,3),get(e->slot(0,1),lit27))),mul(e->slot(0,5),get(e->slot(0,1),lit28))),get(e->slot(0,1),lit31),get(e->slot(0,1),lit32)}));e->slot(0,9)=std::move(t138);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit70)};V t139=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit70),e->slot(0,6),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit71)};V t140=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit71),e->slot(0,7),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit72)};V t141=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit72),e->slot(0,8),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit73)};V t142=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit73),e->slot(0,9),V(0.08),e->slot(0,0)}));refs[0].put(std::move(t142));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;e->slot(0,0)=arg(a,0);{V t143=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t143);}
{V t144=mul(first(call(e->slot(1,18),Args{e->slot(0,0)})),get(e->slot(0,1),lit7));e->slot(0,2)=std::move(t144);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit38)};V t145=e->slot(0,2);refs[0].put(std::move(t145));}
{V t146=add(mul(sub(get(e->slot(1,6),lit55),get(e->slot(1,6),lit56)),get(e->slot(0,1),lit9)),mul(sub(get(e->slot(1,6),lit53),get(e->slot(1,6),lit54)),get(e->slot(0,1),lit8)));e->slot(0,3)=std::move(t146);}
{V t147=mul(add(mul(get(e->slot(1,6),lit57),V(0.45)),mul(get(e->slot(1,6),lit58),V(0.55))),get(e->slot(0,1),lit10));e->slot(0,4)=std::move(t147);}
{V t148=mul(add(mul(get(e->slot(1,6),lit59),V(0.4)),mul(get(e->slot(1,6),lit60),V(0.6))),get(e->slot(0,1),lit11));e->slot(0,5)=std::move(t148);}
{V t149=sub(add(add(add(mul(get(e->slot(1,6),lit61),get(e->slot(0,1),lit12)),mul(get(e->slot(1,6),lit62),get(e->slot(0,1),lit13))),mul(get(e->slot(1,6),lit63),get(e->slot(0,1),lit14))),mul(get(e->slot(1,6),lit64),get(e->slot(0,1),lit15))),mul(get(e->slot(1,6),lit65),get(e->slot(0,1),lit16)));e->slot(0,6)=std::move(t149);}
{V t150=mul(add(first(call(e->slot(1,16),Args{get(get(e->slot(1,6),lit47),e->slot(1,2))})),first(call(e->slot(1,16),Args{get(get(e->slot(1,6),lit47),e->slot(1,3))}))),V(0.5));e->slot(0,7)=std::move(t150);}
{V t151=mul(add(first(call(e->slot(1,16),Args{get(get(e->slot(1,6),lit47),e->slot(1,4))})),first(call(e->slot(1,16),Args{get(get(e->slot(1,6),lit47),e->slot(1,5))}))),V(0.5));e->slot(0,8)=std::move(t151);}
{V t152=mul(add(get(get(e->slot(1,6),lit49),e->slot(1,2)),get(get(e->slot(1,6),lit49),e->slot(1,3))),V(0.5));e->slot(0,9)=std::move(t152);}
{V t153=mul(add(get(get(e->slot(1,6),lit50),e->slot(1,4)),get(get(e->slot(1,6),lit50),e->slot(1,5))),V(0.5));e->slot(0,10)=std::move(t153);}
{V t154=add(add(mul(sub(e->slot(0,7),e->slot(0,8)),get(e->slot(0,1),lit17)),mul(e->slot(0,9),get(e->slot(0,1),lit18))),mul(e->slot(0,10),get(e->slot(0,1),lit19)));e->slot(0,11)=std::move(t154);}
{V t155=add(add(add(add(add(e->slot(0,2),e->slot(0,3)),e->slot(0,4)),e->slot(0,5)),e->slot(0,6)),e->slot(0,11));e->slot(0,12)=std::move(t155);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit39)};V t156=e->slot(0,12);refs[0].put(std::move(t156));}
return call(e->slot(1,8),Args{e->slot(0,12),V(-num(get(e->slot(0,1),lit6))),get(e->slot(0,1),lit6)});
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t157=get(e->slot(1,1),lit1);e->slot(0,2)=std::move(t157);}
{V t158=mul(get(e->slot(0,2),lit2),([&](){V t159=get(e->slot(1,6),lit70);return !truth(t159)?V(1.0):t159;})());e->slot(0,3)=std::move(t158);}
{V t160=mul(get(e->slot(0,2),lit3),([&](){V t161=get(e->slot(1,6),lit71);return !truth(t161)?V(1.0):t161;})());e->slot(0,4)=std::move(t160);}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit40)};V t162=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit40),e->slot(0,1),e->slot(0,3),e->slot(0,0)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit41)};V t163=first(call(e->slot(1,15),Args{get(e->slot(1,6),lit41),get(e->slot(1,6),lit40),e->slot(0,4),e->slot(0,0)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit40)};V t164=first(call(e->slot(1,8),Args{get(e->slot(1,6),lit40),V(-num(get(e->slot(0,2),lit6))),get(e->slot(0,2),lit6)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit41)};V t165=first(call(e->slot(1,8),Args{get(e->slot(1,6),lit41),V(-num(get(e->slot(0,2),lit6))),get(e->slot(0,2),lit6)}));refs[0].put(std::move(t165));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit42)};V t166=mul(mul(get(e->slot(1,6),lit40),get(e->slot(0,2),lit4)),([&](){V t167=get(e->slot(1,6),lit72);return !truth(t167)?V(1.0):t167;})());refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit43)};V t168=mul(mul(get(e->slot(1,6),lit41),get(e->slot(0,2),lit5)),([&](){V t169=get(e->slot(1,6),lit73);return !truth(t169)?V(1.0):t169;})());refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit44)};V t170=add(get(e->slot(1,6),lit42),get(e->slot(1,6),lit43));refs[0].put(std::move(t170));}
{V t171=first(call(e->slot(1,8),Args{mul(get(e->slot(1,6),lit42),V(0.18)),V(-num(get(e->slot(0,2),lit34))),get(e->slot(0,2),lit34)}));e->slot(0,5)=std::move(t171);}
{V t172=first(call(e->slot(1,8),Args{mul(get(e->slot(1,6),lit43),V(0.22)),V(-num(get(e->slot(0,2),lit34))),get(e->slot(0,2),lit34)}));e->slot(0,6)=std::move(t172);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit74),e->slot(1,2))};V t173=add(add(get(get(e->slot(1,6),lit45),e->slot(1,2)),get(get(e->slot(1,6),lit48),e->slot(1,2))),e->slot(0,5));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit74),e->slot(1,3))};V t174=sub(add(get(get(e->slot(1,6),lit45),e->slot(1,3)),get(get(e->slot(1,6),lit48),e->slot(1,3))),e->slot(0,5));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit74),e->slot(1,4))};V t175=add(add(get(get(e->slot(1,6),lit45),e->slot(1,4)),get(get(e->slot(1,6),lit48),e->slot(1,4))),e->slot(0,6));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit74),e->slot(1,5))};V t176=sub(add(get(get(e->slot(1,6),lit45),e->slot(1,5)),get(get(e->slot(1,6),lit48),e->slot(1,5))),e->slot(0,6));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit75),e->slot(1,2))};V t177=add(add(get(get(e->slot(1,6),lit46),e->slot(1,2)),get(get(e->slot(1,6),lit47),e->slot(1,2))),mul(e->slot(0,5),V(0.55)));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit75),e->slot(1,3))};V t178=sub(add(get(get(e->slot(1,6),lit46),e->slot(1,3)),get(get(e->slot(1,6),lit47),e->slot(1,3))),mul(e->slot(0,5),V(0.55)));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit75),e->slot(1,4))};V t179=add(add(get(get(e->slot(1,6),lit46),e->slot(1,4)),get(get(e->slot(1,6),lit47),e->slot(1,4))),mul(e->slot(0,6),V(0.7)));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,6),lit75),e->slot(1,5))};V t180=sub(add(get(get(e->slot(1,6),lit46),e->slot(1,5)),get(get(e->slot(1,6),lit47),e->slot(1,5))),mul(e->slot(0,6),V(0.7)));refs[0].put(std::move(t180));}
{double t181=num(V(0.0)),t182=num(V(3.0)),t183=num(V(1.0));for(double t184=t181;(t183>0?t184<=t182:t184>=t182);t184+=t183){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t184);{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit74),e->slot(0,0))};V t185=first(call(e->slot(2,8),Args{get(get(e->slot(2,6),lit74),e->slot(0,0)),V(-num(get(e->slot(1,2),lit34))),get(e->slot(1,2),lit34)}));refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,6),lit75),e->slot(0,0))};V t186=first(call(e->slot(2,8),Args{get(get(e->slot(2,6),lit75),e->slot(0,0)),V(-num(get(e->slot(1,2),lit34))),get(e->slot(1,2),lit34)}));refs[0].put(std::move(t186));}
}}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,13),Args{lit148,get(e->slot(1,6),lit42)});
call(e->slot(1,13),Args{lit149,get(e->slot(1,6),lit43)});
call(e->slot(1,13),Args{lit150,get(e->slot(1,6),lit44)});
call(e->slot(1,13),Args{lit151,get(e->slot(1,6),lit38)});
call(e->slot(1,13),Args{lit152,get(e->slot(1,6),lit42)});
call(e->slot(1,13),Args{lit153,get(e->slot(1,6),lit43)});
call(e->slot(1,13),Args{lit154,get(e->slot(1,6),lit44)});
call(e->slot(1,13),Args{lit155,get(e->slot(1,6),lit38)});
call(e->slot(1,13),Args{lit156,get(e->slot(1,6),lit76)});
call(e->slot(1,13),Args{lit157,get(e->slot(1,6),lit78)});
call(e->slot(1,13),Args{lit158,([&](){V t187=([&](){V t188=get(e->slot(1,6),lit79);return truth(t188)?V(1.0):t188;})();return !truth(t187)?V(0.0):t187;})()});
call(e->slot(1,13),Args{lit159,([&](){V t189=([&](){V t190=get(e->slot(1,6),lit84);return truth(t190)?V(1.0):t190;})();return !truth(t189)?V(0.0):t189;})()});
{double t191=num(V(0.0)),t192=num(V(3.0)),t193=num(V(1.0));for(double t194=t191;(t193>0?t194<=t192:t194>=t192);t194+=t193){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t194);call(e->slot(2,13),Args{concat(lit160,e->slot(0,0)),get(get(e->slot(2,6),lit74),e->slot(0,0))});
call(e->slot(2,13),Args{concat(lit161,e->slot(0,0)),get(get(e->slot(2,6),lit75),e->slot(0,0))});
call(e->slot(2,13),Args{concat(lit162,e->slot(0,0)),get(get(e->slot(2,6),lit74),e->slot(0,0))});
call(e->slot(2,13),Args{concat(lit163,e->slot(0,0)),get(get(e->slot(2,6),lit75),e->slot(0,0))});
}}
if(truth(V(!truth(get(e->slot(1,6),lit89))))){return Args{};
}
call(e->slot(1,13),Args{lit164,get(e->slot(1,6),lit39)});
call(e->slot(1,13),Args{lit165,get(e->slot(1,6),lit70)});
call(e->slot(1,13),Args{lit166,get(e->slot(1,6),lit71)});
call(e->slot(1,13),Args{lit167,get(e->slot(1,6),lit72)});
call(e->slot(1,13),Args{lit168,get(e->slot(1,6),lit73)});
call(e->slot(1,13),Args{lit169,get(e->slot(1,6),lit55)});
call(e->slot(1,13),Args{lit170,get(e->slot(1,6),lit56)});
call(e->slot(1,13),Args{lit171,get(e->slot(1,6),lit53)});
call(e->slot(1,13),Args{lit172,get(e->slot(1,6),lit54)});
call(e->slot(1,13),Args{lit173,get(e->slot(1,6),lit57)});
call(e->slot(1,13),Args{lit174,get(e->slot(1,6),lit58)});
call(e->slot(1,13),Args{lit175,get(e->slot(1,6),lit59)});
call(e->slot(1,13),Args{lit176,get(e->slot(1,6),lit60)});
call(e->slot(1,13),Args{lit177,get(e->slot(1,6),lit64)});
call(e->slot(1,13),Args{lit178,get(e->slot(1,6),lit65)});
call(e->slot(1,13),Args{lit179,([&](){V t195=([&](){V t196=get(e->slot(1,6),lit80);return truth(t196)?V(1.0):t196;})();return !truth(t195)?V(0.0):t195;})()});
call(e->slot(1,13),Args{lit180,([&](){V t197=([&](){V t198=get(e->slot(1,6),lit81);return truth(t198)?V(1.0):t198;})();return !truth(t197)?V(0.0):t197;})()});
call(e->slot(1,13),Args{lit181,([&](){V t199=([&](){V t200=get(e->slot(1,6),lit82);return truth(t200)?V(1.0):t200;})();return !truth(t199)?V(0.0):t199;})()});
call(e->slot(1,13),Args{lit182,([&](){V t201=([&](){V t202=get(e->slot(1,6),lit83);return truth(t202)?V(1.0):t202;})();return !truth(t201)?V(0.0):t201;})()});
call(e->slot(1,13),Args{lit183,([&](){V t203=([&](){V t204=get(e->slot(1,6),lit85);return truth(t204)?V(1.0):t204;})();return !truth(t203)?V(0.0):t203;})()});
return Args{};});
Ref(e->slot(0,1),lit184).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,6),lit76)};V t205=lit77;refs[0].put(std::move(t205));}
call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit185).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,6),lit78)};V t206=add(([&](){V t207=get(e->slot(1,6),lit78);return !truth(t207)?V(0.0):t207;})(),V(1.0));refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t208=first(call(e->slot(1,8),Args{first(call(e->slot(1,7),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit36),get(get(e->slot(1,1),lit1),lit37)}));refs[0].put(std::move(t208));}
call(e->slot(1,17),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t209=([&](){V t210=e->slot(0,1);return !truth(t210)?first(call(e->slot(1,14),Args{})):t210;})();refs[0].put(std::move(t209));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,6),lit76)};V t211=lit186;refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit79)};V t212=V(false);refs[0].put(std::move(t212));}
call(e->slot(1,28),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit79)};V t213=ne(first(call(e->slot(1,9),Args{e->slot(0,1),lit187,V()})),V());refs[0].put(std::move(t213));}
call(e->slot(1,19),Args{});
call(e->slot(1,22),Args{e->slot(0,0)});
call(e->slot(1,23),Args{});
call(e->slot(1,24),Args{e->slot(0,0)});
call(e->slot(1,25),Args{e->slot(0,0)});
{V t214=first(call(e->slot(1,26),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t214);}
call(e->slot(1,27),Args{e->slot(0,0),e->slot(0,3)});
{std::array<Ref,1> refs{Ref(e->slot(1,6),lit76)};V t215=lit188;refs[0].put(std::move(t215));}
call(e->slot(1,28),Args{});
return Args{};}));
Ref(e->slot(0,1),lit189).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t216=get(e->slot(1,6),lit42);return !truth(t216)?V(0.0):t216;})()};
return Args{};}));
Ref(e->slot(0,1),lit190).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t217=get(e->slot(1,6),lit43);return !truth(t217)?V(0.0):t217;})()};
return Args{};}));
Ref(e->slot(0,1),lit191).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t218=get(e->slot(1,6),lit44);return !truth(t218)?V(0.0):t218;})()};
return Args{};}));
Ref(e->slot(0,1),lit192).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t219=get(get(e->slot(1,6),lit74),e->slot(0,0));return !truth(t219)?V(0.0):t219;})()};
return Args{};}));
Ref(e->slot(0,1),lit193).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t220=get(get(e->slot(1,6),lit75),e->slot(0,0));return !truth(t220)?V(0.0):t220;})()};
return Args{};}));
Ref(e->slot(0,1),lit194).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,6)};
return Args{};}));
Ref(e->slot(0,1),lit195).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t221=e->slot(0,0);e->slot(0,1)=std::move(t221);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t222=first(call(get(e->get("math"),lit196),call(e->slot(1,8),Args{e->slot(0,1),V(0.0),V(3.0)})));refs[0].put(std::move(t222));}
return call(get(e->get("string"),lit197),Args{lit198,e->slot(0,1),([&](){V t223=get(get(e->slot(1,6),lit74),e->slot(0,1));return !truth(t223)?V(0.0):t223;})(),([&](){V t224=get(get(e->slot(1,6),lit75),e->slot(0,1));return !truth(t224)?V(0.0):t224;})(),([&](){V t225=get(get(e->slot(1,6),lit45),e->slot(0,1));return !truth(t225)?V(0.0):t225;})(),([&](){V t226=get(get(e->slot(1,6),lit46),e->slot(0,1));return !truth(t226)?V(0.0):t226;})(),([&](){V t227=get(get(e->slot(1,6),lit48),e->slot(0,1));return !truth(t227)?V(0.0):t227;})(),([&](){V t228=get(get(e->slot(1,6),lit47),e->slot(0,1));return !truth(t228)?V(0.0):t228;})(),([&](){V t229=get(get(e->slot(1,6),lit51),e->slot(0,1));return !truth(t229)?V(0.0):t229;})(),([&](){V t230=get(get(e->slot(1,6),lit52),e->slot(0,1));return !truth(t230)?V(0.0):t230;})(),([&](){V t231=get(get(e->slot(1,6),lit49),e->slot(0,1));return !truth(t231)?V(0.0):t231;})(),([&](){V t232=get(get(e->slot(1,6),lit50),e->slot(0,1));return !truth(t232)?V(0.0):t232;})()});
}
return call(get(e->get("string"),lit197),Args{concat(lit199,concat(lit200,concat(lit201,concat(lit202,lit203)))),first(call(e->get("tostring"),Args{get(e->slot(1,6),lit76)})),([&](){V t233=get(e->slot(1,6),lit78);return !truth(t233)?V(0.0):t233;})(),([&](){V t234=([&](){V t235=get(e->slot(1,6),lit79);return truth(t235)?lit204:t235;})();return !truth(t234)?lit205:t234;})(),([&](){V t236=([&](){V t237=get(e->slot(1,6),lit84);return truth(t237)?lit204:t237;})();return !truth(t236)?lit205:t236;})(),([&](){V t238=get(e->slot(1,6),lit42);return !truth(t238)?V(0.0):t238;})(),([&](){V t239=get(e->slot(1,6),lit43);return !truth(t239)?V(0.0):t239;})(),([&](){V t240=get(e->slot(1,6),lit44);return !truth(t240)?V(0.0):t240;})(),([&](){V t241=get(e->slot(1,6),lit38);return !truth(t241)?V(0.0):t241;})(),([&](){V t242=get(e->slot(1,6),lit39);return !truth(t242)?V(0.0):t242;})(),([&](){V t243=get(e->slot(1,6),lit70);return !truth(t243)?V(1.0):t243;})(),([&](){V t244=get(e->slot(1,6),lit71);return !truth(t244)?V(1.0):t244;})(),([&](){V t245=get(e->slot(1,6),lit72);return !truth(t245)?V(1.0):t245;})(),([&](){V t246=get(e->slot(1,6),lit73);return !truth(t246)?V(1.0):t246;})(),([&](){V t247=get(e->slot(1,6),lit55);return !truth(t247)?V(0.0):t247;})(),([&](){V t248=get(e->slot(1,6),lit56);return !truth(t248)?V(0.0):t248;})(),([&](){V t249=([&](){V t250=get(e->slot(1,6),lit80);return truth(t250)?lit204:t250;})();return !truth(t249)?lit205:t249;})(),([&](){V t251=([&](){V t252=get(e->slot(1,6),lit81);return truth(t252)?lit204:t252;})();return !truth(t251)?lit205:t251;})(),([&](){V t253=([&](){V t254=get(e->slot(1,6),lit82);return truth(t254)?lit204:t254;})();return !truth(t253)?lit205:t253;})(),([&](){V t255=([&](){V t256=get(e->slot(1,6),lit83);return truth(t256)?lit204:t256;})();return !truth(t255)?lit205:t255;})(),([&](){V t257=([&](){V t258=get(e->slot(1,6),lit85);return truth(t258)?lit204:t258;})();return !truth(t257)?lit205:t257;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
