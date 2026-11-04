// Generated native C++ from pinned mass_balance.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("FL");
static const V lit2("FR");
static const V lit3("RL");
static const V lit4("RR");
static const V lit5("params");
static const V lit6("baseMass");
static const V lit7("frontLoadReference");
static const V lit8("wheelLoadReference");
static const V lit9("minLoadForAxis");
static const V lit10("loadCoherenceGain");
static const V lit11("contactCoherenceGain");
static const V lit12("slipLossGain");
static const V lit13("yawResistGain");
static const V lit14("steerWeightGain");
static const V lit15("authorityGain");
static const V lit16("maxSlipAngle");
static const V lit17("maxSlipRatio");
static const V lit18("yawRateScale");
static const V lit19("steerScale");
static const V lit20("minAnchor");
static const V lit21("maxAnchor");
static const V lit22("minAuthority");
static const V lit23("maxAuthority");
static const V lit24("minYawResist");
static const V lit25("maxYawResist");
static const V lit26("minSteerWeight");
static const V lit27("maxSteerWeight");
static const V lit28("minSlipDamp");
static const V lit29("maxSlipDamp");
static const V lit30("anchorTau");
static const V lit31("authorityTau");
static const V lit32("yawResistTau");
static const V lit33("steerWeightTau");
static const V lit34("slipDampTau");
static const V lit35("noCarReturnTau");
static const V lit36("minDt");
static const V lit37("maxDt");
static const V lit38("dltAbsoluteThreshold");
static const V lit39("debugStoreInterval");
static const V lit40("massScale");
static const V lit41("totalMassEstimate");
static const V lit42("load");
static const V lit43("contact");
static const V lit44("slipAngle");
static const V lit45("slipRatio");
static const V lit46("loadSource");
static const V lit47("NONE");
static const V lit48("contactSource");
static const V lit49("slipSource");
static const V lit50("steer");
static const V lit51("yawRate");
static const V lit52("speedKmh");
static const V lit53("frontLoadAvg");
static const V lit54("frontLoadTotal");
static const V lit55("frontLoadDiff");
static const V lit56("frontLoadBalance");
static const V lit57("frontLoadCoherence");
static const V lit58("frontContactAvg");
static const V lit59("frontContactDiff");
static const V lit60("frontContactBalance");
static const V lit61("frontSlipAvg");
static const V lit62("frontSlipLoss");
static const V lit63("steerYawCoherence");
static const V lit64("frontAxisAnchor");
static const V lit65("frontAxisAuthority");
static const V lit66("frontAxisYawResist");
static const V lit67("frontAxisSteerWeight");
static const V lit68("frontAxisSlipDamp");
static const V lit69("targetAnchor");
static const V lit70("targetAuthority");
static const V lit71("targetYawResist");
static const V lit72("targetSteerWeight");
static const V lit73("targetSlipDamp");
static const V lit74("frontAxisReserve");
static const V lit75("frontAxisLoadQuality");
static const V lit76("frontAxisContactQuality");
static const V lit77("loadLinked");
static const V lit78("contactLinked");
static const V lit79("tireStateLinked");
static const V lit80("carLinked");
static const V lit81("wheelsValid");
static const V lit82("status");
static const V lit83("INIT");
static const V lit84("updateCount");
static const V lit85("initCount");
static const V lit86("debugStoreTimer");
static const V lit87("debugStoreNow");
static const V lit88("state");
static const V lit89("debug");
static const V lit90("huge");
static const V lit91("abs");
static const V lit92("safeStore");
static const V lit93("safeLoadRaw");
static const V lit94("safeField");
static const V lit95("max");
static const V lit96("getCar");
static const V lit97("wheels");
static const V lit98("length");
static const V lit99("function");
static const V lit100("number");
static const V lit101("x");
static const V lit102("y");
static const V lit103("z");
static const V lit104("sqrt");
static const V lit105("velocity");
static const V lit106("localVelocity");
static const V lit107("localAngularVelocity");
static const V lit108("ngp_yaw_rate");
static const V lit109("mass");
static const V lit110("loadK");
static const V lit111("ngp_contact_load_");
static const V lit112("ngp_tire_state_load_");
static const V lit113("ngp_wheel_load_");
static const V lit114("ngp_load_wheel_");
static const V lit115("ngp_tire_load_input_");
static const V lit116("ngp_susp_load_input_");
static const V lit117("ngp_tire_load_");
static const V lit118("ngp_sprung_load_");
static const V lit119("ngp_load_path_load_");
static const V lit120("ngp_dlt_load_");
static const V lit121("wheel");
static const V lit122("fallback");
static const V lit123("ngp_contact_trust_");
static const V lit124("ngp_contact_quality_");
static const V lit125("ngp_tire_contact_trust_");
static const V lit126("ngp_tire_contact_quality_");
static const V lit127("ngp_tcr_quality_");
static const V lit128("ngp_tc_contact_");
static const V lit129("ngp_tc_grip_");
static const V lit130("ngp_load_path_integrity_");
static const V lit131("ngp_contact_slip_angle_");
static const V lit132("ngp_tire_slip_angle_");
static const V lit133("ngp_slip_angle_");
static const V lit134("ngp_filtered_slip_angle_");
static const V lit135("ngp_tire_state_slip_angle_");
static const V lit136("ngp_contact_slip_ratio_");
static const V lit137("ngp_tire_slip_ratio_");
static const V lit138("ngp_slip_ratio_");
static const V lit139("ngp_filtered_slip_ratio_");
static const V lit140("ngp_tire_state_slip_ratio_");
static const V lit141("ngp_slip_recovery_slip_");
static const V lit142("ngp_mass_balance_status");
static const V lit143("UNKNOWN");
static const V lit144("ngp_mass_balance_update_count");
static const V lit145("ngp_mass_balance_init_count");
static const V lit146("ngp_mass_balance_applied");
static const V lit147("ngp_mass_balance_rear_applied");
static const V lit148("ngp_mass_balance_front_applied");
static const V lit149("ngp_mass_balance_yaw_applied");
static const V lit150("ngp_mass_balance_total_added");
static const V lit151("ngp_mass_balance_rear_bias");
static const V lit152("ngp_mass_balance_front_bias");
static const V lit153("ngp_mass_balance_yaw_inertia");
static const V lit154("ngp_vehicle_base_mass");
static const V lit155("ngp_vehicle_mass_estimate");
static const V lit156("ngp_vehicle_mass_scale");
static const V lit157("ngp_vehicle_cg_rear_shift");
static const V lit158("ngp_vehicle_yaw_inertia_scale");
static const V lit159("ngp_front_axis_anchor");
static const V lit160("ngp_front_axis_authority");
static const V lit161("ngp_front_axis_yaw_resist");
static const V lit162("ngp_front_axis_steer_weight");
static const V lit163("ngp_front_axis_slip_damp");
static const V lit164("ngp_front_axis_load_coherence");
static const V lit165("ngp_front_axis_contact_balance");
static const V lit166("ngp_front_axis_load_balance");
static const V lit167("ngp_front_axis_slip_loss");
static const V lit168("ngp_front_axis_steer_yaw_coherence");
static const V lit169("ngp_front_axis_front_load_avg");
static const V lit170("ngp_front_axis_reserve");
static const V lit171("ngp_front_axis_load_quality");
static const V lit172("ngp_front_axis_contact_quality");
static const V lit173("ngp_front_axis_front_load_total");
static const V lit174("ngp_front_axis_front_load_diff");
static const V lit175("ngp_front_axis_contact_avg");
static const V lit176("ngp_front_axis_contact_diff");
static const V lit177("ngp_front_axis_slip_avg");
static const V lit178("ngp_faa_anchor");
static const V lit179("ngp_faa_authority");
static const V lit180("ngp_faa_yaw_resist");
static const V lit181("ngp_faa_steer_weight");
static const V lit182("ngp_faa_slip_damp");
static const V lit183("ngp_front_axis_load_linked");
static const V lit184("ngp_front_axis_contact_linked");
static const V lit185("ngp_front_axis_tire_state_linked");
static const V lit186("ngp_front_axis_car_linked");
static const V lit187("ngp_front_axis_wheels_valid");
static const V lit188("ngp_mass_state");
static const V lit189("ngp_yaw_inertia");
static const V lit190("ngp_extra_mass_front");
static const V lit191("ngp_extra_mass_rear");
static const V lit192("ngp_front_axis_load_fl");
static const V lit193("ngp_front_axis_load_fr");
static const V lit194("ngp_front_axis_contact_fl");
static const V lit195("ngp_front_axis_contact_fr");
static const V lit196("ngp_front_axis_slip_angle_fl");
static const V lit197("ngp_front_axis_slip_angle_fr");
static const V lit198("ngp_front_axis_slip_ratio_fl");
static const V lit199("ngp_front_axis_slip_ratio_fr");
static const V lit200("ngp_front_axis_yaw_rate");
static const V lit201("ngp_front_axis_steer");
static const V lit202("ngp_front_axis_speed_kmh");
static const V lit203("ngp_front_axis_load_");
static const V lit204("ngp_front_axis_contact_");
static const V lit205("ngp_front_axis_slip_angle_");
static const V lit206("ngp_front_axis_slip_ratio_");
static const V lit207("ngp_front_axis_load_source_");
static const V lit208("ngp_front_axis_contact_source_");
static const V lit209("ngp_front_axis_slip_source_");
static const V lit210("init");
static const V lit211("FRONT AXIS INIT");
static const V lit212("INIT NO CAR");
static const V lit213("update");
static const V lit214("BAD DT");
static const V lit215("NO CAR");
static const V lit216("RUNNING");
static const V lit217("STORE ONLY");
static const V lit218("getFrontAxisAnchor");
static const V lit219("getFrontAxisAuthority");
static const V lit220("getFrontAxisYawResist");
static const V lit221("getFrontAxisSteerWeight");
static const V lit222("getFrontAxisSlipDamp");
static const V lit223("getMassScale");
static const V lit224("getBaseMass");
static const V lit225("getWheelLoad");
static const V lit226("getState");
static const V lit227("isApplied");
static const V lit228("debugStr");
static const V lit229("format");
static const V lit230("%s Load %.0f Contact %.2f SA %.3f SR %.3f\n");
static const V lit231("Src L:%s C:%s S:%s");
static const V lit232("Status %s / Count %.0f / Init %.0f\n");
static const V lit233("Mass %.0f / Scale %.3f / ExtraMass OFF\n");
static const V lit234("FrontAxis Anchor %.3f / Authority %.3f\n");
static const V lit235("YawResist %.3f / SteerWeight %.3f / SlipDamp %.3f\n");
static const V lit236("LoadCoh %.3f / ContactBal %.3f / SlipLoss %.3f / Reserve %.3f\n");
static const V lit237("Load FL/FR %.0f %.0f Contact %.2f %.2f\n");
static const V lit238("Links Load:%s Contact:%s Tire:%s Car:%s Wheels:%s");
static const V lit239("OK");
static const V lit240("NIL");
V load_mass_balance(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(37);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=V(1310.0);e->slot(0,2)=std::move(t3);}
{Args t4=Args{V(0.0),V(1.0),V(2.0),V(3.0)};e->slot(0,3)=arg(t4,0);e->slot(0,4)=arg(t4,1);e->slot(0,5)=arg(t4,2);e->slot(0,6)=arg(t4,3);}
{V t5=([&](){V z=table();set(z,V(0.0),lit1);set(z,V(1.0),lit2);set(z,V(2.0),lit3);set(z,V(3.0),lit4);return z;})();e->slot(0,7)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit5)};V t6=([&](){V z=table();set(z,lit6,e->slot(0,2));set(z,lit7,V(3200.0));set(z,lit8,V(3000.0));set(z,lit9,V(250.0));set(z,lit10,V(0.75));set(z,lit11,V(0.8));set(z,lit12,V(0.85));set(z,lit13,V(0.35));set(z,lit14,V(0.55));set(z,lit15,V(0.65));set(z,lit16,V(0.65));set(z,lit17,V(0.75));set(z,lit18,V(0.6));set(z,lit19,V(1.0));set(z,lit20,V(0.0));set(z,lit21,V(1.25));set(z,lit22,V(0.0));set(z,lit23,V(1.25));set(z,lit24,V(0.0));set(z,lit25,V(1.15));set(z,lit26,V(0.0));set(z,lit27,V(1.2));set(z,lit28,V(0.0));set(z,lit29,V(1.0));set(z,lit30,V(0.08));set(z,lit31,V(0.07));set(z,lit32,V(0.09));set(z,lit33,V(0.07));set(z,lit34,V(0.06));set(z,lit35,V(0.22));set(z,lit36,V(5e-05));set(z,lit37,V(0.05));set(z,lit38,V(1200.0));set(z,lit39,V(0.25));return z;})();refs[0].put(std::move(t6));}
{V t7=([&](){V z=table();set(z,lit6,e->slot(0,2));set(z,lit40,V(1.0));set(z,lit41,e->slot(0,2));set(z,lit42,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit43,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit44,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit45,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit46,([&](){V z=table();set(z,V(0.0),lit47);set(z,V(1.0),lit47);set(z,V(2.0),lit47);set(z,V(3.0),lit47);return z;})());set(z,lit48,([&](){V z=table();set(z,V(0.0),lit47);set(z,V(1.0),lit47);set(z,V(2.0),lit47);set(z,V(3.0),lit47);return z;})());set(z,lit49,([&](){V z=table();set(z,V(0.0),lit47);set(z,V(1.0),lit47);set(z,V(2.0),lit47);set(z,V(3.0),lit47);return z;})());set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(1.0));set(z,lit57,V(1.0));set(z,lit58,V(1.0));set(z,lit59,V(0.0));set(z,lit60,V(1.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(1.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(false));set(z,lit78,V(false));set(z,lit79,V(false));set(z,lit80,V(false));set(z,lit81,V(false));set(z,lit82,lit83);set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(999.0));set(z,lit87,V(true));return z;})();e->slot(0,8)=std::move(t7);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit88)};V t8=e->slot(0,8);refs[0].put(std::move(t8));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit89)};V t9=e->slot(0,8);refs[0].put(std::move(t9));}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t10=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t10);}
if(truth(([&](){V t11=([&](){V t12=([&](){V t13=eq(e->slot(0,2),V());return !truth(t13)?ne(e->slot(0,2),e->slot(0,2)):t13;})();return !truth(t12)?eq(e->slot(0,2),get(e->get("math"),lit90)):t12;})();return !truth(t11)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit90)))):t11;})())){return Args{([&](){V t14=e->slot(0,1);return !truth(t14)?V(0.0):t14;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t15=first(call(e->slot(1,9),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t15));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit91),call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t16=get(e->slot(0,0),lit92);e->slot(0,12)=std::move(t16);}
{V t17=get(e->slot(0,0),lit93);e->slot(0,13)=std::move(t17);}
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t18=first(call(e->slot(1,13),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t18);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t19=e->slot(0,1);return !truth(t19)?V(0.0):t19;})()};
}
return call(e->slot(1,9),Args{e->slot(0,2),([&](){V t20=e->slot(0,1);return !truth(t20)?V(0.0):t20;})()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t21=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t21);}
{double t22=num(V(1.0)),t23=num(length(e->slot(0,1))),t24=num(V(1.0));for(double t25=t22;(t24>0?t25<=t23:t25>=t23);t25+=t24){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t25);{V t26=first(call(e->slot(2,13),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t26);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,9),Args{e->slot(0,1),([&](){V t27=e->slot(1,0);return !truth(t27)?V(0.0):t27;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
if(truth(eq(e->slot(0,0),V()))){return Args{V(),V()};
}
return Args{e->slot(0,0),V()};
return Args{};});
{V t28=get(e->slot(0,0),lit94);e->slot(0,16)=std::move(t28);}
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t29=first(call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t30=first(call(e->slot(1,9),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t30));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t31=first(call(e->slot(1,9),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t31));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t32=first(call(e->slot(1,9),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t32));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t33=first(call(e->slot(1,10),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit95),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t33);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit86)};V t34=add(([&](){V t35=get(e->slot(1,8),lit86);return !truth(t35)?V(0.0):t35;})(),([&](){V t36=e->slot(0,0);return !truth(t36)?V(0.0):t36;})());refs[0].put(std::move(t34));}
if(truth(ge(get(e->slot(1,8),lit86),get(get(e->slot(1,1),lit5),lit39)))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit86)};V t37=V(0.0);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit87)};V t38=V(true);refs[0].put(std::move(t38));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,8),lit87)};V t39=V(false);refs[0].put(std::move(t39));}
}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t40=V(!truth(e->get("ac")));return !truth(t40)?V(!truth(get(e->get("ac"),lit96))):t40;})())){return Args{V()};
}
{Args t41=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit96),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t41,0);e->slot(0,1)=arg(t41,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t42=first(call(e->slot(1,16),Args{e->slot(0,0),lit97,V()}));e->slot(0,2)=std::move(t42);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t43=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t44=get(e->slot(1,2),e->slot(1,1));return !truth(t44)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t44;})()};
return Args{};})});e->slot(0,3)=arg(t43,0);e->slot(0,4)=arg(t43,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t45=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit98)})),lit99))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit98)})),lit100))){return Args{get(e->slot(1,0),lit98)};
}
{V t46=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit101),V(0.0)}));e->slot(0,0)=std::move(t46);}
{V t47=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit102),V(0.0)}));e->slot(0,1)=std::move(t47);}
{V t48=first(call(e->slot(2,9),Args{get(e->slot(1,0),lit103),V(0.0)}));e->slot(0,2)=std::move(t48);}
return call(get(e->get("math"),lit104),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t45,0);e->slot(0,2)=arg(t45,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,9),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,8),lit77)};V t49=V(false);refs[0].put(std::move(t49));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit78)};V t50=V(false);refs[0].put(std::move(t50));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit79)};V t51=V(false);refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit80)};V t52=V(false);refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit81)};V t53=V(false);refs[0].put(std::move(t53));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit80)};V t54=ne(e->slot(0,0),V());refs[0].put(std::move(t54));}
if(truth(V(!truth(e->slot(0,0))))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit50)};V t55=V(0.0);refs[0].put(std::move(t55));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit51)};V t56=V(0.0);refs[0].put(std::move(t56));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit52)};V t57=V(0.0);refs[0].put(std::move(t57));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit6)};V t58=([&](){V t59=get(get(e->slot(1,1),lit5),lit6);return !truth(t59)?e->slot(1,2):t59;})();refs[0].put(std::move(t58));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit41)};V t60=get(e->slot(1,8),lit6);refs[0].put(std::move(t60));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit40)};V t61=V(1.0);refs[0].put(std::move(t61));}
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit50)};V t62=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,0),lit50,V(0.0)})),V(0.0)})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t62));}
{V t63=first(call(e->slot(1,16),Args{e->slot(0,0),lit52,V()}));e->slot(0,1)=std::move(t63);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit52)};V t64=first(call(e->slot(1,9),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t64));}
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t65=V();e->slot(0,0)=std::move(t65);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e->slot(2,8),lit52)};V t66=first(call(e->slot(2,9),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t66));}
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t67=first(call(e->slot(3,16),joined(Args{e->slot(2,0),lit105},call(e->slot(3,16),Args{e->slot(2,0),lit106,V()}))));e->slot(0,0)=std::move(t67);}
{std::array<Ref,1> refs{Ref(e->slot(3,8),lit52)};V t68=mul(first(call(e->slot(3,21),Args{e->slot(0,0)})),V(3.6));refs[0].put(std::move(t68));}
}
}
{V t69=first(call(e->slot(1,16),Args{e->slot(0,0),lit107,V()}));e->slot(0,2)=std::move(t69);}
if(truth(([&](){V t70=e->slot(0,2);return truth(t70)?ne(get(e->slot(0,2),lit102),V()):t70;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit51)};V t71=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit102),V(0.0)}));refs[0].put(std::move(t71));}
}else if(truth(([&](){V t72=e->slot(0,2);return truth(t72)?ne(get(e->slot(0,2),lit103),V()):t72;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit51)};V t73=first(call(e->slot(1,9),Args{get(e->slot(0,2),lit103),V(0.0)}));refs[0].put(std::move(t73));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,8),lit51)};V t74=first(call(e->slot(1,14),Args{lit108,V(0.0)}));refs[0].put(std::move(t74));}
}

{std::array<Ref,1> refs{Ref(e->slot(1,8),lit6)};V t75=first(call(e->slot(1,9),Args{first(call(e->slot(1,16),Args{e->slot(0,0),lit109,([&](){V t76=get(get(e->slot(1,1),lit5),lit6);return !truth(t76)?e->slot(1,2):t76;})()})),([&](){V t77=get(get(e->slot(1,1),lit5),lit6);return !truth(t77)?e->slot(1,2):t77;})()}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit41)};V t78=get(e->slot(1,8),lit6);refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit40)};V t79=V(1.0);refs[0].put(std::move(t79));}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t80=([&](){V z=table();set(z,V(1.0),lit42);set(z,V(2.0),lit110);return z;})();e->slot(0,1)=std::move(t80);}
{double t81=num(V(1.0)),t82=num(length(e->slot(0,1))),t83=num(V(1.0));for(double t84=t81;(t83>0?t84<=t82:t84>=t82);t84+=t83){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t84);{V t85=first(call(e->slot(2,16),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t85);}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t86=first(call(e->slot(3,9),Args{e->slot(1,1),V()}));e->slot(0,0)=std::move(t86);}
if(truth(([&](){V t87=ne(e->slot(0,0),V());return truth(t87)?gt(e->slot(0,0),V(1.0)):t87;})())){return Args{e->slot(0,0)};
}
}
}}
return Args{V()};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t88=call(e->slot(1,15),Args{V(),concat(lit111,e->slot(0,0)),concat(lit112,e->slot(0,0)),concat(lit113,e->slot(0,0)),concat(lit114,e->slot(0,0)),concat(lit115,e->slot(0,0)),concat(lit116,e->slot(0,0)),concat(lit117,e->slot(0,0)),concat(lit118,e->slot(0,0)),concat(lit119,e->slot(0,0))});e->slot(0,2)=arg(t88,0);e->slot(0,3)=arg(t88,1);}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit77)};V t89=V(true);refs[0].put(std::move(t89));}
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t90=first(call(e->slot(2,13),Args{concat(lit120,e->slot(1,0))}));e->slot(0,0)=std::move(t90);}
if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t91=first(call(e->slot(3,9),Args{e->slot(1,0),V(0.0)}));e->slot(0,0)=std::move(t91);}
if(truth(gt(first(call(get(e->get("math"),lit91),Args{e->slot(0,0)})),([&](){V t92=get(get(e->slot(3,1),lit5),lit38);return !truth(t92)?V(1200.0):t92;})()))){{std::array<Ref,1> refs{Ref(e,2,2)};V t93=first(call(get(e->get("math"),lit91),Args{e->slot(0,0)}));refs[0].put(std::move(t93));}
}else{{std::array<Ref,1> refs{Ref(e,2,2)};V t94=add(get(get(e->slot(3,1),lit5),lit8),e->slot(0,0));refs[0].put(std::move(t94));}
}
{std::array<Ref,1> refs{Ref(e,2,3)};V t95=concat(lit120,e->slot(2,0));refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(3,8),lit77)};V t96=V(true);refs[0].put(std::move(t96));}
}
}
if(truth(eq(e->slot(0,3),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t97=first(call(e->slot(2,24),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t97);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,1,2)};V t98=e->slot(0,0);refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t99=lit121;refs[0].put(std::move(t99));}
}
}
if(truth(eq(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,2)};V t100=get(get(e->slot(1,1),lit5),lit8);refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t101=lit122;refs[0].put(std::move(t101));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit42),e->slot(0,0))};V t102=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,2),get(get(e->slot(1,1),lit5),lit8)})),V(0.0),V(12000.0)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit46),e->slot(0,0))};V t103=([&](){V t104=e->slot(0,3);return !truth(t104)?lit47:t104;})();refs[0].put(std::move(t103));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t105=call(e->slot(1,15),Args{V(),concat(lit123,e->slot(0,0)),concat(lit124,e->slot(0,0)),concat(lit125,e->slot(0,0)),concat(lit126,e->slot(0,0)),concat(lit127,e->slot(0,0)),concat(lit128,e->slot(0,0)),concat(lit129,e->slot(0,0)),concat(lit130,e->slot(0,0))});e->slot(0,1)=arg(t105,0);e->slot(0,2)=arg(t105,1);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit78)};V t106=V(true);refs[0].put(std::move(t106));}
}else{{std::array<Ref,1> refs{Ref(e,0,1)};V t107=V(1.0);refs[0].put(std::move(t107));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t108=lit122;refs[0].put(std::move(t108));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit43),e->slot(0,0))};V t109=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,1),V(1.0)})),V(0.0),V(1.2)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit48),e->slot(0,0))};V t110=([&](){V t111=e->slot(0,2);return !truth(t111)?lit47:t111;})();refs[0].put(std::move(t110));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t112=call(e->slot(1,15),Args{V(),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0)),concat(lit133,e->slot(0,0)),concat(lit134,e->slot(0,0)),concat(lit135,e->slot(0,0))});e->slot(0,2)=arg(t112,0);e->slot(0,3)=arg(t112,1);}
{Args t113=call(e->slot(1,15),Args{V(),concat(lit136,e->slot(0,0)),concat(lit137,e->slot(0,0)),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0)),concat(lit140,e->slot(0,0)),concat(lit141,e->slot(0,0))});e->slot(0,4)=arg(t113,0);e->slot(0,5)=arg(t113,1);}
if(truth(([&](){V t114=ne(e->slot(0,2),V());return !truth(t114)?ne(e->slot(0,4),V()):t114;})())){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit79)};V t115=V(true);refs[0].put(std::move(t115));}
}
if(truth(([&](){V t116=eq(e->slot(0,2),V());return truth(t116)?e->slot(0,1):t116;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t117=first(call(e->slot(1,16),Args{e->slot(0,1),lit44,V()}));refs[0].put(std::move(t117));}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t118=lit121;refs[0].put(std::move(t118));}
}
}
if(truth(([&](){V t119=eq(e->slot(0,4),V());return truth(t119)?e->slot(0,1):t119;})())){{std::array<Ref,1> refs{Ref(e,0,4)};V t120=first(call(e->slot(1,16),Args{e->slot(0,1),lit45,V()}));refs[0].put(std::move(t120));}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e,0,5)};V t121=lit121;refs[0].put(std::move(t121));}
}
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit44),e->slot(0,0))};V t122=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,2),V(0.0)})),V(-num(get(get(e->slot(1,1),lit5),lit16))),get(get(e->slot(1,1),lit5),lit16)}));refs[0].put(std::move(t122));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit45),e->slot(0,0))};V t123=first(call(e->slot(1,10),Args{first(call(e->slot(1,9),Args{e->slot(0,4),V(0.0)})),V(-num(get(get(e->slot(1,1),lit5),lit17))),get(get(e->slot(1,1),lit5),lit17)}));refs[0].put(std::move(t123));}
if(truth(([&](){V t124=e->slot(0,3);return !truth(t124)?e->slot(0,5):t124;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit49),e->slot(0,0))};V t125=first(call(e->get("tostring"),Args{([&](){V t126=e->slot(0,3);return !truth(t126)?e->slot(0,5):t126;})()}));refs[0].put(std::move(t125));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,8),lit49),e->slot(0,0))};V t127=lit122;refs[0].put(std::move(t127));}
}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t128=V(false);e->slot(0,1)=std::move(t128);}
{double t129=num(V(0.0)),t130=num(V(3.0)),t131=num(V(1.0));for(double t132=t129;(t131>0?t132<=t130:t132>=t130);t132+=t131){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t132);{V t133=first(call(e->slot(2,20),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,1)=std::move(t133);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,1,1)};V t134=V(true);refs[0].put(std::move(t134));}
}
call(e->slot(2,25),Args{e->slot(0,0),e->slot(0,1)});
call(e->slot(2,26),Args{e->slot(0,0)});
call(e->slot(2,27),Args{e->slot(0,0),e->slot(0,1)});
}}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit81)};V t135=e->slot(0,1);refs[0].put(std::move(t135));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;{V t136=([&](){V t137=get(get(e->slot(1,8),lit42),e->slot(1,3));return !truth(t137)?V(0.0):t137;})();e->slot(0,0)=std::move(t136);}
{V t138=([&](){V t139=get(get(e->slot(1,8),lit42),e->slot(1,4));return !truth(t139)?V(0.0):t139;})();e->slot(0,1)=std::move(t138);}
{V t140=add(e->slot(0,0),e->slot(0,1));e->slot(0,2)=std::move(t140);}
{V t141=mul(e->slot(0,2),V(0.5));e->slot(0,3)=std::move(t141);}
{V t142=first(call(e->slot(1,11),Args{sub(e->slot(0,0),e->slot(0,1))}));e->slot(0,4)=std::move(t142);}
{V t143=sub(V(1.0),divv(e->slot(0,4),first(call(get(e->get("math"),lit95),Args{e->slot(0,2),V(1.0)}))));e->slot(0,5)=std::move(t143);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t144=first(call(e->slot(1,10),Args{e->slot(0,5),V(0.0),V(1.0)}));refs[0].put(std::move(t144));}
{V t145=first(call(e->slot(1,10),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit95),Args{get(get(e->slot(1,1),lit5),lit7),V(1.0)}))),V(0.0),V(1.25)}));e->slot(0,6)=std::move(t145);}
if(truth(lt(e->slot(0,3),([&](){V t146=get(get(e->slot(1,1),lit5),lit9);return !truth(t146)?V(250.0):t146;})()))){{std::array<Ref,1> refs{Ref(e,0,6)};V t147=mul(e->slot(0,6),first(call(e->slot(1,10),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit95),Args{get(get(e->slot(1,1),lit5),lit9),V(1.0)}))),V(0.0),V(1.0)})));refs[0].put(std::move(t147));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit54)};V t148=e->slot(0,2);refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit53)};V t149=e->slot(0,3);refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit55)};V t150=e->slot(0,4);refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit56)};V t151=e->slot(0,5);refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit57)};V t152=first(call(e->slot(1,10),Args{mul(e->slot(0,6),sub(V(1.0),mul(sub(V(1.0),e->slot(0,5)),get(get(e->slot(1,1),lit5),lit10)))),V(0.0),V(1.25)}));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit75)};V t153=get(e->slot(1,8),lit57);refs[0].put(std::move(t153));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t154=([&](){V t155=get(get(e->slot(1,8),lit43),e->slot(1,3));return !truth(t155)?V(1.0):t155;})();e->slot(0,0)=std::move(t154);}
{V t156=([&](){V t157=get(get(e->slot(1,8),lit43),e->slot(1,4));return !truth(t157)?V(1.0):t157;})();e->slot(0,1)=std::move(t156);}
{V t158=mul(add(e->slot(0,0),e->slot(0,1)),V(0.5));e->slot(0,2)=std::move(t158);}
{V t159=first(call(e->slot(1,11),Args{sub(e->slot(0,0),e->slot(0,1))}));e->slot(0,3)=std::move(t159);}
{V t160=sub(V(1.0),mul(e->slot(0,3),get(get(e->slot(1,1),lit5),lit11)));e->slot(0,4)=std::move(t160);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit58)};V t161=first(call(e->slot(1,10),Args{e->slot(0,2),V(0.0),V(1.2)}));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit59)};V t162=e->slot(0,3);refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit60)};V t163=first(call(e->slot(1,10),Args{e->slot(0,4),V(0.0),V(1.0)}));refs[0].put(std::move(t163));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit76)};V t164=mul(get(e->slot(1,8),lit58),get(e->slot(1,8),lit60));refs[0].put(std::move(t164));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t165=mul(add(first(call(e->slot(1,11),Args{get(get(e->slot(1,8),lit44),e->slot(1,3))})),first(call(e->slot(1,11),Args{get(get(e->slot(1,8),lit44),e->slot(1,4))}))),V(0.5));e->slot(0,0)=std::move(t165);}
{V t166=mul(add(first(call(e->slot(1,11),Args{get(get(e->slot(1,8),lit45),e->slot(1,3))})),first(call(e->slot(1,11),Args{get(get(e->slot(1,8),lit45),e->slot(1,4))}))),V(0.5));e->slot(0,1)=std::move(t166);}
{V t167=add(e->slot(0,0),mul(e->slot(0,1),V(0.35)));e->slot(0,2)=std::move(t167);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit61)};V t168=e->slot(0,2);refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit62)};V t169=first(call(e->slot(1,10),Args{mul(e->slot(0,2),get(get(e->slot(1,1),lit5),lit12)),V(0.0),V(1.0)}));refs[0].put(std::move(t169));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t170=first(call(e->slot(1,10),Args{mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit50)})),get(get(e->slot(1,1),lit5),lit19)),V(0.0),V(1.0)}));e->slot(0,0)=std::move(t170);}
{V t171=first(call(e->slot(1,10),Args{mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit51)})),get(get(e->slot(1,1),lit5),lit18)),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t171);}
{V t172=first(call(e->slot(1,11),Args{sub(e->slot(0,0),e->slot(0,1))}));e->slot(0,2)=std::move(t172);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit63)};V t173=first(call(e->slot(1,10),Args{sub(V(1.0),mul(e->slot(0,2),V(0.65))),V(0.0),V(1.0)}));refs[0].put(std::move(t173));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;call(e->slot(1,29),Args{});
call(e->slot(1,30),Args{});
call(e->slot(1,31),Args{});
call(e->slot(1,32),Args{});
{V t174=mul(mul(mul(get(e->slot(1,8),lit57),get(e->slot(1,8),lit58)),get(e->slot(1,8),lit60)),sub(V(1.0),get(e->slot(1,8),lit62)));e->slot(0,0)=std::move(t174);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit69)};V t175=first(call(e->slot(1,10),Args{e->slot(0,0),get(get(e->slot(1,1),lit5),lit20),get(get(e->slot(1,1),lit5),lit21)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit70)};V t176=first(call(e->slot(1,10),Args{mul(mul(get(e->slot(1,8),lit69),add(V(0.65),mul(V(0.35),get(e->slot(1,8),lit63)))),get(get(e->slot(1,1),lit5),lit15)),get(get(e->slot(1,1),lit5),lit22),get(get(e->slot(1,1),lit5),lit23)}));refs[0].put(std::move(t176));}
{V t177=first(call(e->slot(1,10),Args{first(call(e->slot(1,11),Args{get(e->slot(1,8),lit50)})),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t177);}
{V t178=first(call(e->slot(1,10),Args{mul(first(call(e->slot(1,11),Args{get(e->slot(1,8),lit51)})),get(get(e->slot(1,1),lit5),lit18)),V(0.0),V(1.0)}));e->slot(0,2)=std::move(t178);}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit71)};V t179=first(call(e->slot(1,10),Args{mul(mul(mul(get(e->slot(1,8),lit69),e->slot(0,2)),add(V(0.5),mul(V(0.5),get(e->slot(1,8),lit63)))),get(get(e->slot(1,1),lit5),lit13)),get(get(e->slot(1,1),lit5),lit24),get(get(e->slot(1,1),lit5),lit25)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit72)};V t180=first(call(e->slot(1,10),Args{mul(mul(get(e->slot(1,8),lit69),e->slot(0,1)),get(get(e->slot(1,1),lit5),lit14)),get(get(e->slot(1,1),lit5),lit26),get(get(e->slot(1,1),lit5),lit27)}));refs[0].put(std::move(t180));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit73)};V t181=first(call(e->slot(1,10),Args{mul(get(e->slot(1,8),lit62),get(e->slot(1,8),lit69)),get(get(e->slot(1,1),lit5),lit28),get(get(e->slot(1,1),lit5),lit29)}));refs[0].put(std::move(t181));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit74)};V t182=first(call(e->slot(1,10),Args{sub(V(1.0),first(call(get(e->get("math"),lit95),Args{get(e->slot(1,8),lit73),get(e->slot(1,8),lit62)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t182));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit64)};V t183=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit64),get(e->slot(1,8),lit69),get(get(e->slot(1,1),lit5),lit30),e->slot(0,0)}));refs[0].put(std::move(t183));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit65)};V t184=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit65),get(e->slot(1,8),lit70),get(get(e->slot(1,1),lit5),lit31),e->slot(0,0)}));refs[0].put(std::move(t184));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit66)};V t185=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit66),get(e->slot(1,8),lit71),get(get(e->slot(1,1),lit5),lit32),e->slot(0,0)}));refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit67)};V t186=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit67),get(e->slot(1,8),lit72),get(get(e->slot(1,1),lit5),lit33),e->slot(0,0)}));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit68)};V t187=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit68),get(e->slot(1,8),lit73),get(get(e->slot(1,1),lit5),lit34),e->slot(0,0)}));refs[0].put(std::move(t187));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit69)};V t188=V(0.0);refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit70)};V t189=V(0.0);refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit71)};V t190=V(0.0);refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit72)};V t191=V(0.0);refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit73)};V t192=V(0.0);refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit64)};V t193=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit64),V(0.0),get(get(e->slot(1,1),lit5),lit35),e->slot(0,0)}));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit65)};V t194=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit65),V(0.0),get(get(e->slot(1,1),lit5),lit35),e->slot(0,0)}));refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit66)};V t195=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit66),V(0.0),get(get(e->slot(1,1),lit5),lit35),e->slot(0,0)}));refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit67)};V t196=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit67),V(0.0),get(get(e->slot(1,1),lit5),lit35),e->slot(0,0)}));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit68)};V t197=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit68),V(0.0),get(get(e->slot(1,1),lit5),lit35),e->slot(0,0)}));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit74)};V t198=first(call(e->slot(1,17),Args{get(e->slot(1,8),lit74),V(0.0),get(get(e->slot(1,1),lit5),lit35),e->slot(0,0)}));refs[0].put(std::move(t198));}
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,12),Args{lit142,([&](){V t199=get(e->slot(1,8),lit82);return !truth(t199)?lit143:t199;})()});
call(e->slot(1,12),Args{lit144,([&](){V t200=get(e->slot(1,8),lit84);return !truth(t200)?V(0.0):t200;})()});
call(e->slot(1,12),Args{lit145,([&](){V t201=get(e->slot(1,8),lit85);return !truth(t201)?V(0.0):t201;})()});
call(e->slot(1,12),Args{lit146,V(0.0)});
call(e->slot(1,12),Args{lit147,V(0.0)});
call(e->slot(1,12),Args{lit148,V(0.0)});
call(e->slot(1,12),Args{lit149,V(0.0)});
call(e->slot(1,12),Args{lit150,V(0.0)});
call(e->slot(1,12),Args{lit151,V(0.0)});
call(e->slot(1,12),Args{lit152,V(0.0)});
call(e->slot(1,12),Args{lit153,V(0.0)});
call(e->slot(1,12),Args{lit154,([&](){V t202=get(e->slot(1,8),lit6);return !truth(t202)?e->slot(1,2):t202;})()});
call(e->slot(1,12),Args{lit155,([&](){V t203=([&](){V t204=get(e->slot(1,8),lit41);return !truth(t204)?get(e->slot(1,8),lit6):t204;})();return !truth(t203)?e->slot(1,2):t203;})()});
call(e->slot(1,12),Args{lit156,([&](){V t205=get(e->slot(1,8),lit40);return !truth(t205)?V(1.0):t205;})()});
call(e->slot(1,12),Args{lit157,V(0.0)});
call(e->slot(1,12),Args{lit158,V(1.0)});
call(e->slot(1,12),Args{lit159,([&](){V t206=get(e->slot(1,8),lit64);return !truth(t206)?V(0.0):t206;})()});
call(e->slot(1,12),Args{lit160,([&](){V t207=get(e->slot(1,8),lit65);return !truth(t207)?V(0.0):t207;})()});
call(e->slot(1,12),Args{lit161,([&](){V t208=get(e->slot(1,8),lit66);return !truth(t208)?V(0.0):t208;})()});
call(e->slot(1,12),Args{lit162,([&](){V t209=get(e->slot(1,8),lit67);return !truth(t209)?V(0.0):t209;})()});
call(e->slot(1,12),Args{lit163,([&](){V t210=get(e->slot(1,8),lit68);return !truth(t210)?V(0.0):t210;})()});
call(e->slot(1,12),Args{lit164,([&](){V t211=get(e->slot(1,8),lit57);return !truth(t211)?V(0.0):t211;})()});
call(e->slot(1,12),Args{lit165,([&](){V t212=get(e->slot(1,8),lit60);return !truth(t212)?V(0.0):t212;})()});
call(e->slot(1,12),Args{lit166,([&](){V t213=get(e->slot(1,8),lit56);return !truth(t213)?V(0.0):t213;})()});
call(e->slot(1,12),Args{lit167,([&](){V t214=get(e->slot(1,8),lit62);return !truth(t214)?V(0.0):t214;})()});
call(e->slot(1,12),Args{lit168,([&](){V t215=get(e->slot(1,8),lit63);return !truth(t215)?V(0.0):t215;})()});
call(e->slot(1,12),Args{lit169,([&](){V t216=get(e->slot(1,8),lit53);return !truth(t216)?V(0.0):t216;})()});
call(e->slot(1,12),Args{lit170,([&](){V t217=get(e->slot(1,8),lit74);return !truth(t217)?V(0.0):t217;})()});
call(e->slot(1,12),Args{lit171,([&](){V t218=get(e->slot(1,8),lit75);return !truth(t218)?V(0.0):t218;})()});
call(e->slot(1,12),Args{lit172,([&](){V t219=get(e->slot(1,8),lit76);return !truth(t219)?V(0.0):t219;})()});
call(e->slot(1,12),Args{lit173,([&](){V t220=get(e->slot(1,8),lit54);return !truth(t220)?V(0.0):t220;})()});
call(e->slot(1,12),Args{lit174,([&](){V t221=get(e->slot(1,8),lit55);return !truth(t221)?V(0.0):t221;})()});
call(e->slot(1,12),Args{lit175,([&](){V t222=get(e->slot(1,8),lit58);return !truth(t222)?V(0.0):t222;})()});
call(e->slot(1,12),Args{lit176,([&](){V t223=get(e->slot(1,8),lit59);return !truth(t223)?V(0.0):t223;})()});
call(e->slot(1,12),Args{lit177,([&](){V t224=get(e->slot(1,8),lit61);return !truth(t224)?V(0.0):t224;})()});
call(e->slot(1,12),Args{lit178,([&](){V t225=get(e->slot(1,8),lit64);return !truth(t225)?V(0.0):t225;})()});
call(e->slot(1,12),Args{lit179,([&](){V t226=get(e->slot(1,8),lit65);return !truth(t226)?V(0.0):t226;})()});
call(e->slot(1,12),Args{lit180,([&](){V t227=get(e->slot(1,8),lit66);return !truth(t227)?V(0.0):t227;})()});
call(e->slot(1,12),Args{lit181,([&](){V t228=get(e->slot(1,8),lit67);return !truth(t228)?V(0.0):t228;})()});
call(e->slot(1,12),Args{lit182,([&](){V t229=get(e->slot(1,8),lit68);return !truth(t229)?V(0.0):t229;})()});
call(e->slot(1,12),Args{lit183,([&](){V t230=([&](){V t231=get(e->slot(1,8),lit77);return truth(t231)?V(1.0):t231;})();return !truth(t230)?V(0.0):t230;})()});
call(e->slot(1,12),Args{lit184,([&](){V t232=([&](){V t233=get(e->slot(1,8),lit78);return truth(t233)?V(1.0):t233;})();return !truth(t232)?V(0.0):t232;})()});
call(e->slot(1,12),Args{lit185,([&](){V t234=([&](){V t235=get(e->slot(1,8),lit79);return truth(t235)?V(1.0):t235;})();return !truth(t234)?V(0.0):t234;})()});
call(e->slot(1,12),Args{lit186,([&](){V t236=([&](){V t237=get(e->slot(1,8),lit80);return truth(t237)?V(1.0):t237;})();return !truth(t236)?V(0.0):t236;})()});
call(e->slot(1,12),Args{lit187,([&](){V t238=([&](){V t239=get(e->slot(1,8),lit81);return truth(t239)?V(1.0):t239;})();return !truth(t238)?V(0.0):t238;})()});
call(e->slot(1,12),Args{lit188,V(0.0)});
call(e->slot(1,12),Args{lit189,V(0.0)});
call(e->slot(1,12),Args{lit190,V(0.0)});
call(e->slot(1,12),Args{lit191,V(0.0)});
if(truth(V(!truth(get(e->slot(1,8),lit87))))){return Args{};
}
call(e->slot(1,12),Args{lit192,([&](){V t240=get(get(e->slot(1,8),lit42),e->slot(1,3));return !truth(t240)?V(0.0):t240;})()});
call(e->slot(1,12),Args{lit193,([&](){V t241=get(get(e->slot(1,8),lit42),e->slot(1,4));return !truth(t241)?V(0.0):t241;})()});
call(e->slot(1,12),Args{lit194,([&](){V t242=get(get(e->slot(1,8),lit43),e->slot(1,3));return !truth(t242)?V(0.0):t242;})()});
call(e->slot(1,12),Args{lit195,([&](){V t243=get(get(e->slot(1,8),lit43),e->slot(1,4));return !truth(t243)?V(0.0):t243;})()});
call(e->slot(1,12),Args{lit196,([&](){V t244=get(get(e->slot(1,8),lit44),e->slot(1,3));return !truth(t244)?V(0.0):t244;})()});
call(e->slot(1,12),Args{lit197,([&](){V t245=get(get(e->slot(1,8),lit44),e->slot(1,4));return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,12),Args{lit198,([&](){V t246=get(get(e->slot(1,8),lit45),e->slot(1,3));return !truth(t246)?V(0.0):t246;})()});
call(e->slot(1,12),Args{lit199,([&](){V t247=get(get(e->slot(1,8),lit45),e->slot(1,4));return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,12),Args{lit200,([&](){V t248=get(e->slot(1,8),lit51);return !truth(t248)?V(0.0):t248;})()});
call(e->slot(1,12),Args{lit201,([&](){V t249=get(e->slot(1,8),lit50);return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,12),Args{lit202,([&](){V t250=get(e->slot(1,8),lit52);return !truth(t250)?V(0.0):t250;})()});
{double t251=num(V(0.0)),t252=num(V(3.0)),t253=num(V(1.0));for(double t254=t251;(t253>0?t254<=t252:t254>=t252);t254+=t253){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t254);call(e->slot(2,12),Args{concat(lit203,e->slot(0,0)),([&](){V t255=get(get(e->slot(2,8),lit42),e->slot(0,0));return !truth(t255)?V(0.0):t255;})()});
call(e->slot(2,12),Args{concat(lit204,e->slot(0,0)),([&](){V t256=get(get(e->slot(2,8),lit43),e->slot(0,0));return !truth(t256)?V(0.0):t256;})()});
call(e->slot(2,12),Args{concat(lit205,e->slot(0,0)),([&](){V t257=get(get(e->slot(2,8),lit44),e->slot(0,0));return !truth(t257)?V(0.0):t257;})()});
call(e->slot(2,12),Args{concat(lit206,e->slot(0,0)),([&](){V t258=get(get(e->slot(2,8),lit45),e->slot(0,0));return !truth(t258)?V(0.0):t258;})()});
call(e->slot(2,12),Args{concat(lit207,e->slot(0,0)),([&](){V t259=get(get(e->slot(2,8),lit46),e->slot(0,0));return !truth(t259)?lit47:t259;})()});
call(e->slot(2,12),Args{concat(lit208,e->slot(0,0)),([&](){V t260=get(get(e->slot(2,8),lit48),e->slot(0,0));return !truth(t260)?lit47:t260;})()});
call(e->slot(2,12),Args{concat(lit209,e->slot(0,0)),([&](){V t261=get(get(e->slot(2,8),lit49),e->slot(0,0));return !truth(t261)?lit47:t261;})()});
}}
return Args{};});
Ref(e->slot(0,1),lit210).put(native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit85)};V t262=add(([&](){V t263=get(e->slot(1,8),lit85);return !truth(t263)?V(0.0):t263;})(),V(1.0));refs[0].put(std::move(t262));}
{V t264=([&](){V t265=e->slot(0,0);return !truth(t265)?first(call(e->slot(1,19),Args{})):t265;})();e->slot(0,1)=std::move(t264);}
call(e->slot(1,23),Args{e->slot(0,1)});
{std::array<Ref,1> refs{Ref(e->slot(1,8),lit82)};V t266=([&](){V t267=([&](){V t268=e->slot(0,1);return truth(t268)?lit211:t268;})();return !truth(t267)?lit212:t267;})();refs[0].put(std::move(t266));}
call(e->slot(1,36),Args{});
return Args{};}));
Ref(e->slot(0,1),lit213).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,8),lit84)};V t269=add(([&](){V t270=get(e->slot(1,8),lit84);return !truth(t270)?V(0.0):t270;})(),V(1.0));refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t271=first(call(e->slot(1,9),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t271));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit82)};V t272=lit214;refs[0].put(std::move(t272));}
call(e->slot(1,36),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t273=first(call(e->slot(1,10),Args{e->slot(0,0),get(get(e->slot(1,1),lit5),lit36),get(get(e->slot(1,1),lit5),lit37)}));refs[0].put(std::move(t273));}
call(e->slot(1,18),Args{e->slot(0,0)});
call(e->slot(1,22),Args{});
{V t274=([&](){V t275=e->slot(0,1);return !truth(t275)?first(call(e->slot(1,19),Args{})):t275;})();e->slot(0,3)=std::move(t274);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit82)};V t276=lit215;refs[0].put(std::move(t276));}
call(e->slot(1,23),Args{V()});
call(e->slot(1,35),Args{e->slot(0,0)});
call(e->slot(1,36),Args{});
return Args{};
}
call(e->slot(1,23),Args{e->slot(0,3)});
call(e->slot(1,28),Args{e->slot(0,3)});
if(truth(get(e->slot(1,8),lit81))){{std::array<Ref,1> refs{Ref(e->slot(1,8),lit82)};V t277=lit216;refs[0].put(std::move(t277));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,8),lit82)};V t278=lit217;refs[0].put(std::move(t278));}
}
call(e->slot(1,33),Args{});
call(e->slot(1,34),Args{e->slot(0,0)});
call(e->slot(1,36),Args{});
return Args{};}));
Ref(e->slot(0,1),lit218).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t279=get(e->slot(1,8),lit64);return !truth(t279)?V(0.0):t279;})()};
return Args{};}));
Ref(e->slot(0,1),lit219).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t280=get(e->slot(1,8),lit65);return !truth(t280)?V(0.0):t280;})()};
return Args{};}));
Ref(e->slot(0,1),lit220).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t281=get(e->slot(1,8),lit66);return !truth(t281)?V(0.0):t281;})()};
return Args{};}));
Ref(e->slot(0,1),lit221).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t282=get(e->slot(1,8),lit67);return !truth(t282)?V(0.0):t282;})()};
return Args{};}));
Ref(e->slot(0,1),lit222).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t283=get(e->slot(1,8),lit68);return !truth(t283)?V(0.0):t283;})()};
return Args{};}));
Ref(e->slot(0,1),lit223).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{V(1.0)};
return Args{};}));
Ref(e->slot(0,1),lit224).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t284=get(e->slot(1,8),lit6);return !truth(t284)?e->slot(1,2):t284;})()};
return Args{};}));
Ref(e->slot(0,1),lit225).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t285=get(get(e->slot(1,8),lit42),([&](){V t286=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t286)?V(0.0):t286;})());return !truth(t285)?V(0.0):t285;})()};
return Args{};}));
Ref(e->slot(0,1),lit226).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,8)};
return Args{};}));
Ref(e->slot(0,1),lit227).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{V(false)};
return Args{};}));
Ref(e->slot(0,1),lit228).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t287=([&](){V t288=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t288)?V(0.0):t288;})();e->slot(0,0)=std::move(t287);}
return call(get(e->get("string"),lit229),joined(Args{concat(lit230,lit231),first(call(e->get("tostring"),Args{([&](){V t289=get(e->slot(2,7),e->slot(0,0));return !truth(t289)?e->slot(0,0):t289;})()})),([&](){V t290=get(get(e->slot(2,8),lit42),e->slot(0,0));return !truth(t290)?V(0.0):t290;})(),([&](){V t291=get(get(e->slot(2,8),lit43),e->slot(0,0));return !truth(t291)?V(0.0):t291;})(),([&](){V t292=get(get(e->slot(2,8),lit44),e->slot(0,0));return !truth(t292)?V(0.0):t292;})(),([&](){V t293=get(get(e->slot(2,8),lit45),e->slot(0,0));return !truth(t293)?V(0.0):t293;})(),first(call(e->get("tostring"),Args{([&](){V t294=get(get(e->slot(2,8),lit46),e->slot(0,0));return !truth(t294)?lit47:t294;})()})),first(call(e->get("tostring"),Args{([&](){V t295=get(get(e->slot(2,8),lit48),e->slot(0,0));return !truth(t295)?lit47:t295;})()}))},call(e->get("tostring"),Args{([&](){V t296=get(get(e->slot(2,8),lit49),e->slot(0,0));return !truth(t296)?lit47:t296;})()})));
}
return call(get(e->get("string"),lit229),Args{concat(lit232,concat(lit233,concat(lit234,concat(lit235,concat(lit236,concat(lit237,lit238)))))),first(call(e->get("tostring"),Args{get(e->slot(1,8),lit82)})),([&](){V t297=get(e->slot(1,8),lit84);return !truth(t297)?V(0.0):t297;})(),([&](){V t298=get(e->slot(1,8),lit85);return !truth(t298)?V(0.0):t298;})(),([&](){V t299=get(e->slot(1,8),lit6);return !truth(t299)?e->slot(1,2):t299;})(),([&](){V t300=get(e->slot(1,8),lit40);return !truth(t300)?V(1.0):t300;})(),([&](){V t301=get(e->slot(1,8),lit64);return !truth(t301)?V(0.0):t301;})(),([&](){V t302=get(e->slot(1,8),lit65);return !truth(t302)?V(0.0):t302;})(),([&](){V t303=get(e->slot(1,8),lit66);return !truth(t303)?V(0.0):t303;})(),([&](){V t304=get(e->slot(1,8),lit67);return !truth(t304)?V(0.0):t304;})(),([&](){V t305=get(e->slot(1,8),lit68);return !truth(t305)?V(0.0):t305;})(),([&](){V t306=get(e->slot(1,8),lit57);return !truth(t306)?V(0.0):t306;})(),([&](){V t307=get(e->slot(1,8),lit60);return !truth(t307)?V(0.0):t307;})(),([&](){V t308=get(e->slot(1,8),lit62);return !truth(t308)?V(0.0):t308;})(),([&](){V t309=get(e->slot(1,8),lit74);return !truth(t309)?V(0.0):t309;})(),([&](){V t310=get(get(e->slot(1,8),lit42),e->slot(1,3));return !truth(t310)?V(0.0):t310;})(),([&](){V t311=get(get(e->slot(1,8),lit42),e->slot(1,4));return !truth(t311)?V(0.0):t311;})(),([&](){V t312=get(get(e->slot(1,8),lit43),e->slot(1,3));return !truth(t312)?V(0.0):t312;})(),([&](){V t313=get(get(e->slot(1,8),lit43),e->slot(1,4));return !truth(t313)?V(0.0):t313;})(),([&](){V t314=([&](){V t315=get(e->slot(1,8),lit77);return truth(t315)?lit239:t315;})();return !truth(t314)?lit240:t314;})(),([&](){V t316=([&](){V t317=get(e->slot(1,8),lit78);return truth(t317)?lit239:t317;})();return !truth(t316)?lit240:t316;})(),([&](){V t318=([&](){V t319=get(e->slot(1,8),lit79);return truth(t319)?lit239:t319;})();return !truth(t318)?lit240:t318;})(),([&](){V t320=([&](){V t321=get(e->slot(1,8),lit80);return truth(t321)?lit239:t321;})();return !truth(t320)?lit240:t320;})(),([&](){V t322=([&](){V t323=get(e->slot(1,8),lit81);return truth(t323)?lit239:t323;})();return !truth(t322)?lit240:t322;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
