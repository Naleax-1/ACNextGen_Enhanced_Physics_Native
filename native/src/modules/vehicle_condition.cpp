// Generated native C++ from pinned vehicle_condition.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("impactGain");
static const V lit3("loadGain");
static const V lit4("heatGain");
static const V lit5("recovery");
static const V lit6("damageStateGain");
static const V lit7("damageEventGain");
static const V lit8("tireHopGain");
static const V lit9("tireHopLoadGain");
static const V lit10("contactLossGain");
static const V lit11("tireMemoryGain");
static const V lit12("tireLimitGain");
static const V lit13("drivetrainStressGain");
static const V lit14("shaftTwistGain");
static const V lit15("driveLashGain");
static const V lit16("lsdHeatGain");
static const V lit17("lsdLockStressGain");
static const V lit18("suspensionInputGain");
static const V lit19("damperStressGain");
static const V lit20("armGeometryGain");
static const V lit21("bodyFlexGain");
static const V lit22("roadInputGain");
static const V lit23("loadPathLossGain");
static const V lit24("brakeFadeGain");
static const V lit25("thermalStressGain");
static const V lit26("gravity");
static const V lit27("suspensionLoadReference");
static const V lit28("wheelLoadReference");
static const V lit29("brakeHeatStart");
static const V lit30("gearboxHeatStart");
static const V lit31("hubHeatStart");
static const V lit32("tireHeatStart");
static const V lit33("tireLimitReference");
static const V lit34("drivetrainStressReference");
static const V lit35("maxDamage");
static const V lit36("minDt");
static const V lit37("maxDt");
static const V lit38("storeOnlyDecayTau");
static const V lit39("debugStoreInterval");
static const V lit40("chassis");
static const V lit41("suspension");
static const V lit42("drivetrain");
static const V lit43("brake");
static const V lit44("tire");
static const V lit45("total");
static const V lit46("impact");
static const V lit47("impactG");
static const V lit48("externalDamage");
static const V lit49("damageEvent");
static const V lit50("suspensionLoad");
static const V lit51("suspensionOverload");
static const V lit52("maxWheelLoad");
static const V lit53("brakeTemp");
static const V lit54("gearboxTemp");
static const V lit55("hubTemp");
static const V lit56("tireTemp");
static const V lit57("tireHopAvg");
static const V lit58("tireHopLoad");
static const V lit59("contactLossAvg");
static const V lit60("tireMemoryAvg");
static const V lit61("tireLimitAvg");
static const V lit62("tireSlipEnergyAvg");
static const V lit63("drivetrainStress");
static const V lit64("driveTorque");
static const V lit65("shaftTwist");
static const V lit66("driveLash");
static const V lit67("lsdHeat");
static const V lit68("lsdLock");
static const V lit69("suspensionInputAvg");
static const V lit70("damperStress");
static const V lit71("armGeometryStress");
static const V lit72("bodyFlexStress");
static const V lit73("roadInputAvg");
static const V lit74("loadPathLossAvg");
static const V lit75("thermalStress");
static const V lit76("speedKmh");
static const V lit77("wheelsValid");
static const V lit78("status");
static const V lit79("INIT");
static const V lit80("updateCount");
static const V lit81("resetCount");
static const V lit82("tireLinked");
static const V lit83("drivetrainLinked");
static const V lit84("suspensionLinked");
static const V lit85("armLinked");
static const V lit86("bodyLinked");
static const V lit87("damageLinked");
static const V lit88("thermalLinked");
static const V lit89("roadLinked");
static const V lit90("activeInputCount");
static const V lit91("debugStoreTimer");
static const V lit92("debugStoreNow");
static const V lit93("state");
static const V lit94("debug");
static const V lit95("huge");
static const V lit96("abs");
static const V lit97("safeLoadRaw");
static const V lit98("safeStore");
static const V lit99("safeField");
static const V lit100("getCar");
static const V lit101("wheels");
static const V lit102("localVelocity");
static const V lit103("x");
static const V lit104("y");
static const V lit105("z");
static const V lit106("sqrt");
static const V lit107("ngp_tire_state_speed_kmh");
static const V lit108("ngp_impact_strength");
static const V lit109("ngp_impact_total");
static const V lit110("ngp_damage_event_intensity");
static const V lit111("ngp_damage_event_peak");
static const V lit112("ngp_impact_peak_g");
static const V lit113("ngp_damage_event_peak_g");
static const V lit114("ngp_damage_event_g");
static const V lit115("ngp_impact_g");
static const V lit116("max");
static const V lit117("acceleration");
static const V lit118("ngp_wheel_load_");
static const V lit119("ngp_load_wheel_");
static const V lit120("ngp_tire_load_");
static const V lit121("ngp_tire_state_load_");
static const V lit122("ngp_tire_force_load_");
static const V lit123("ngp_cp_load_");
static const V lit124("ngp_tc_load_");
static const V lit125("ngp_dlt_load_");
static const V lit126("DLT");
static const V lit127("load");
static const V lit128("loadK");
static const V lit129("AC_WHEEL");
static const V lit130("DEFAULT");
static const V lit131("ngp_brake_temp_");
static const V lit132("ngp_brake_disc_temp_");
static const V lit133("ngp_brake_temp_read_");
static const V lit134("ngp_hub_temp_");
static const V lit135("ngp_thermal_brake_temp_");
static const V lit136("ngp_rf2_carcass_temp_");
static const V lit137("ngp_tire_carcass_temp_");
static const V lit138("ngp_tire_temp_");
static const V lit139("ngp_tyre_temp_");
static const V lit140("ngp_rf2_tread_temp_");
static const V lit141("ngp_memory_virtual_temp_");
static const V lit142("ngp_tire_memory_heat_");
static const V lit143("ngp_gearbox_temp");
static const V lit144("ngp_thermal_gearbox_temp");
static const V lit145("ngp_drive_gearbox_temp");
static const V lit146("ngp_drivetrain_gearbox_temp");
static const V lit147("ngp_gearbox_heat");
static const V lit148("ngp_drive_gearbox_heat");
static const V lit149("ngp_drivetrain_heat");
static const V lit150("ngp_transmission_heat");
static const V lit151("ngp_damage_chassis");
static const V lit152("ngp_damage_total");
static const V lit153("ngp_condition_damage_chassis");
static const V lit154("ngp_damage_event_total");
static const V lit155("ngp_impact_damage_event");
static const V lit156("ngp_tire_hop_energy_");
static const V lit157("ngp_tire_hop_");
static const V lit158("ngp_thop_energy_");
static const V lit159("ngp_tire_hop_loadpulse_");
static const V lit160("ngp_tirehop_");
static const V lit161("ngp_susp_tire_hop_load_");
static const V lit162("ngp_thop_load_pulse_");
static const V lit163("ngp_tire_contact_loss_");
static const V lit164("ngp_tcr_contact_loss_");
static const V lit165("ngp_contact_loss_");
static const V lit166("ngp_contact_hop_drop_");
static const V lit167("ngp_rubber_memory_");
static const V lit168("ngp_tire_memory_");
static const V lit169("ngp_tyre_memory_");
static const V lit170("ngp_memory_");
static const V lit171("ngp_tire_limit_");
static const V lit172("ngp_tyre_limit_");
static const V lit173("ngp_tire_force_limit_");
static const V lit174("ngp_tire_slip_energy_");
static const V lit175("ngp_tire_force_slip_energy_");
static const V lit176("ngp_tdyn_slip_energy_");
static const V lit177("ngp_tire_dynamics_slip_energy_");
static const V lit178("ngp_drive_torque");
static const V lit179("ngp_drivetrain_torque");
static const V lit180("ngp_dt_torque");
static const V lit181("ngp_drive_torque_normalized_from_nm");
static const V lit182("ngp_shift_stress");
static const V lit183("ngp_shift_shock");
static const V lit184("ngp_drive_shift_shock");
static const V lit185("ngp_drivetrain_shift_stress");
static const V lit186("ngp_shaft_twist");
static const V lit187("ngp_windup_twist");
static const V lit188("ngp_driveline_twist");
static const V lit189("ngp_drive_lash");
static const V lit190("ngp_driveline_lash");
static const V lit191("ngp_windup_lash");
static const V lit192("ngp_lsd_heat");
static const V lit193("ngp_diff_heat");
static const V lit194("ngp_lsd_thermal");
static const V lit195("ngp_diff_temp");
static const V lit196("ngp_lsd_lock");
static const V lit197("ngp_diff_lock");
static const V lit198("ngp_susp_contact_input_");
static const V lit199("ngp_susp_contact_scale_");
static const V lit200("ngp_sci_input_");
static const V lit201("ngp_susp_tire_hop_input_");
static const V lit202("ngp_damper_");
static const V lit203("ngp_susp_");
static const V lit204("ngp_damper_force_");
static const V lit205("ngp_damper_hyst_vertical_damping_");
static const V lit206("ngp_control_arm_camber_");
static const V lit207("ngp_arm_camber_");
static const V lit208("ngp_uc_camber_");
static const V lit209("ngp_ca_camber_");
static const V lit210("ngp_control_arm_toe_");
static const V lit211("ngp_arm_toe_");
static const V lit212("ngp_uc_toe_");
static const V lit213("ngp_ca_toe_");
static const V lit214("ngp_tire_force_road_input_");
static const V lit215("ngp_tf_road_input_");
static const V lit216("ngp_road_input_severity_");
static const V lit217("ngp_rii_severity_");
static const V lit218("ngp_rbi_input_");
static const V lit219("ngp_load_path_loss_");
static const V lit220("ngp_lp_loss_");
static const V lit221("ngp_rii_path_loss_");
static const V lit222("ngp_body_flex_factor");
static const V lit223("ngp_chassis_flex_yaw");
static const V lit224("ngp_chassis_flex_roll");
static const V lit225("ngp_flex_energy");
static const V lit226("ngp_body_torsion_factor");
static const V lit227("ngp_chassis_torsion");
static const V lit228("ngp_body_twist");
static const V lit229("ngp_body_steer");
static const V lit230("ngp_steer_body");
static const V lit231("ngp_chassis_delay");
static const V lit232("ngp_brake_fade_avg");
static const V lit233("ngp_brake_root_heat_avg");
static const V lit234("ngp_brake_mu_loss");
static const V lit235("ngp_thermal_stress");
static const V lit236("ngp_virtual_thermal_stress");
static const V lit237("ngp_vehicle_condition_status");
static const V lit238("UNKNOWN");
static const V lit239("ngp_vehicle_condition_update_count");
static const V lit240("ngp_vehicle_condition_reset_count");
static const V lit241("ngp_vehicle_condition_wheels_valid");
static const V lit242("ngp_condition_chassis");
static const V lit243("ngp_condition_suspension");
static const V lit244("ngp_condition_drivetrain");
static const V lit245("ngp_condition_brake");
static const V lit246("ngp_condition_tire");
static const V lit247("ngp_condition_total");
static const V lit248("ngp_vehicle_chassis_condition");
static const V lit249("ngp_vehicle_suspension_condition");
static const V lit250("ngp_vehicle_drivetrain_condition");
static const V lit251("ngp_vehicle_brake_condition");
static const V lit252("ngp_vehicle_tire_condition");
static const V lit253("ngp_vehicle_condition_total");
static const V lit254("ngp_condition_impact");
static const V lit255("ngp_condition_external_damage");
static const V lit256("ngp_condition_damage_event");
static const V lit257("ngp_condition_susp_load");
static const V lit258("ngp_condition_susp_overload");
static const V lit259("ngp_condition_brake_temp");
static const V lit260("ngp_condition_gearbox_temp");
static const V lit261("ngp_condition_speed");
static const V lit262("ngp_vc_total");
static const V lit263("ngp_vc_chassis");
static const V lit264("ngp_vc_suspension");
static const V lit265("ngp_vc_drivetrain");
static const V lit266("ngp_vc_brake");
static const V lit267("ngp_vc_tire");
static const V lit268("ngp_condition_tire_hop_avg");
static const V lit269("ngp_condition_contact_loss_avg");
static const V lit270("ngp_condition_tire_memory_avg");
static const V lit271("ngp_condition_tire_limit_avg");
static const V lit272("ngp_condition_tire_slip_energy_avg");
static const V lit273("ngp_condition_drive_stress");
static const V lit274("ngp_condition_drive_torque");
static const V lit275("ngp_condition_shaft_twist");
static const V lit276("ngp_condition_drive_lash");
static const V lit277("ngp_condition_lsd_heat");
static const V lit278("ngp_condition_lsd_lock");
static const V lit279("ngp_condition_susp_input_avg");
static const V lit280("ngp_condition_arm_geometry_stress");
static const V lit281("ngp_condition_body_flex_stress");
static const V lit282("ngp_condition_damper_stress");
static const V lit283("ngp_condition_road_input_avg");
static const V lit284("ngp_condition_load_path_loss_avg");
static const V lit285("ngp_condition_thermal_stress");
static const V lit286("ngp_condition_hub_temp");
static const V lit287("ngp_condition_tire_temp");
static const V lit288("ngp_condition_max_wheel_load");
static const V lit289("ngp_condition_active_input_count");
static const V lit290("ngp_vehicle_condition_tire_linked");
static const V lit291("ngp_vehicle_condition_drivetrain_linked");
static const V lit292("ngp_vehicle_condition_suspension_linked");
static const V lit293("ngp_vehicle_condition_arm_linked");
static const V lit294("ngp_vehicle_condition_body_linked");
static const V lit295("ngp_vehicle_condition_damage_linked");
static const V lit296("ngp_vehicle_condition_thermal_linked");
static const V lit297("ngp_vehicle_condition_road_linked");
static const V lit298("init");
static const V lit299("update");
static const V lit300("STORE ONLY");
static const V lit301("RUNNING");
static const V lit302("getState");
static const V lit303("getTotal");
static const V lit304("getChassis");
static const V lit305("getSuspension");
static const V lit306("getDrivetrain");
static const V lit307("getBrake");
static const V lit308("getTire");
static const V lit309("getComponent");
static const V lit310("tyre");
static const V lit311("reset");
static const V lit312("RESET");
static const V lit313("debugStr");
static const V lit314("format");
static const V lit315("Status %s / Count %.0f / Wheels %s / Inputs %.0f\n");
static const V lit316("Condition Total %.3f\n");
static const V lit317("Chassis %.3f Susp %.3f Tire %.3f\n");
static const V lit318("Drive %.3f Brake %.3f\n");
static const V lit319("Impact %.2f G %.2f ExtDmg %.3f Event %.3f\n");
static const V lit320("Load %.0f Over %.0f MaxW %.0f\n");
static const V lit321("BrakeT %.1f GearT %.1f HubT %.1f TireT %.1f\n");
static const V lit322("Links Tire:%s Drive:%s Susp:%s Arm:%s Body:%s Dmg:%s Th:%s Road:%s");
static const V lit323("OK");
static const V lit324("NIL");
static const V lit325("drawDebug");
static const V lit326("text");
static const V lit327("=== VEHICLE CONDITION ===");
V load_vehicle_condition(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(41);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.002));set(z,lit3,V(0.0005));set(z,lit4,V(0.0008));set(z,lit5,V(1e-05));set(z,lit6,V(0.2));set(z,lit7,V(0.08));set(z,lit8,V(0.0012));set(z,lit9,V(2e-07));set(z,lit10,V(0.0007));set(z,lit11,V(0.0008));set(z,lit12,V(0.0006));set(z,lit13,V(0.0009));set(z,lit14,V(0.0008));set(z,lit15,V(0.00035));set(z,lit16,V(0.0006));set(z,lit17,V(0.0005));set(z,lit18,V(0.00035));set(z,lit19,V(1.8e-07));set(z,lit20,V(0.00045));set(z,lit21,V(0.00028));set(z,lit22,V(0.00035));set(z,lit23,V(0.00045));set(z,lit24,V(0.00055));set(z,lit25,V(0.00045));set(z,lit26,V(9.81));set(z,lit27,V(12000.0));set(z,lit28,V(3500.0));set(z,lit29,V(300.0));set(z,lit30,V(80.0));set(z,lit31,V(90.0));set(z,lit32,V(95.0));set(z,lit33,V(1.0));set(z,lit34,V(1.0));set(z,lit35,V(1.0));set(z,lit36,V(5e-05));set(z,lit37,V(0.05));set(z,lit38,V(2.0));set(z,lit39,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit40,V(0.0));set(z,lit41,V(0.0));set(z,lit42,V(0.0));set(z,lit43,V(0.0));set(z,lit44,V(0.0));set(z,lit45,V(0.0));set(z,lit46,V(0.0));set(z,lit47,V(0.0));set(z,lit48,V(0.0));set(z,lit49,V(0.0));set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(false));set(z,lit78,lit79);set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(false));set(z,lit83,V(false));set(z,lit84,V(false));set(z,lit85,V(false));set(z,lit86,V(false));set(z,lit87,V(false));set(z,lit88,V(false));set(z,lit89,V(false));set(z,lit90,V(0.0));set(z,lit91,V(999.0));set(z,lit92,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit93)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit94)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit95)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit95)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit96),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t13=get(e->slot(0,0),lit97);e->slot(0,6)=std::move(t13);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()});
return Args{};});
{V t17=get(e->slot(0,0),lit98);e->slot(0,8)=std::move(t17);}
{V t18=get(e->slot(0,0),lit99);e->slot(0,9)=std::move(t18);}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t19=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t19);}
{double t20=num(V(1.0)),t21=num(length(e->slot(0,1))),t22=num(V(1.0));for(double t23=t20;(t22>0?t23<=t21:t23>=t21);t23+=t22){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t23);{V t24=first(call(e->slot(2,6),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t24);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t25=e->slot(1,0);return !truth(t25)?V(0.0):t25;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t26=e->slot(0,0);return !truth(t26)?V(0.0):t26;})(),V()};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t27=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t27));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t28=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t28));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t29=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t29));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t30=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t30));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t31=divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3)));e->slot(0,4)=std::move(t31);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t32=add(([&](){V t33=get(e->slot(1,2),lit91);return !truth(t33)?V(0.0):t33;})(),([&](){V t34=e->slot(0,0);return !truth(t34)?V(0.0):t34;})());refs[0].put(std::move(t32));}
if(truth(ge(get(e->slot(1,2),lit91),get(get(e->slot(1,1),lit1),lit39)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t35=V(0.0);refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t36=V(true);refs[0].put(std::move(t36));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t37=V(false);refs[0].put(std::move(t37));}
}
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t38=V(!truth(e->get("ac")));return !truth(t38)?V(!truth(get(e->get("ac"),lit100))):t38;})())){return Args{V()};
}
{Args t39=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit100),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t39,0);e->slot(0,1)=arg(t39,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t40=first(call(e->slot(1,9),Args{e->slot(0,0),lit101,V()}));e->slot(0,2)=std::move(t40);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{V t41=first(call(e->slot(1,9),Args{e->slot(0,2),e->slot(0,1),V()}));e->slot(0,3)=std::move(t41);}
if(truth(e->slot(0,3))){return Args{e->slot(0,3)};
}
return call(e->slot(1,9),Args{e->slot(0,2),add(e->slot(0,1),V(1.0)),V()});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{ne(first(call(e->slot(1,9),Args{e->slot(0,0),lit101,V()})),V())};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t42=first(call(e->slot(1,9),Args{e->slot(0,0),lit76,V()}));e->slot(0,1)=std::move(t42);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,5),Args{e->slot(0,1)});
}
{V t43=V();e->slot(0,2)=std::move(t43);}
if(truth(ne(e->slot(0,2),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t44=first(call(e->slot(2,5),Args{e->slot(1,2)}));e->slot(0,0)=std::move(t44);}
if(truth(lt(e->slot(0,0),V(120.0)))){return Args{mul(e->slot(0,0),V(3.6))};
}
return Args{e->slot(0,0)};
}
{V t45=first(call(e->slot(1,9),Args{e->slot(0,0),lit102,V()}));e->slot(0,3)=std::move(t45);}
if(truth(e->slot(0,3))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t46=first(call(e->slot(2,3),Args{first(call(e->slot(2,9),Args{e->slot(1,3),lit103,V(0.0)})),V(0.0)}));e->slot(0,0)=std::move(t46);}
{V t47=first(call(e->slot(2,3),Args{first(call(e->slot(2,9),Args{e->slot(1,3),lit104,V(0.0)})),V(0.0)}));e->slot(0,1)=std::move(t47);}
{V t48=first(call(e->slot(2,3),Args{first(call(e->slot(2,9),Args{e->slot(1,3),lit105,V(0.0)})),V(0.0)}));e->slot(0,2)=std::move(t48);}
return Args{mul(first(call(get(e->get("math"),lit106),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))})),V(3.6))};
}
return call(e->slot(1,7),Args{lit107,V(0.0)});
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t49=call(e->slot(1,10),Args{V(),lit108,lit109,lit110,lit111});e->slot(0,1)=arg(t49,0);e->slot(0,2)=arg(t49,1);}
{Args t50=call(e->slot(1,10),Args{V(),lit112,lit113,lit114,lit115});e->slot(0,3)=arg(t50,0);e->slot(0,4)=arg(t50,1);}
if(truth(([&](){V t51=ne(e->slot(0,2),V());return !truth(t51)?ne(e->slot(0,4),V()):t51;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t52=V(true);refs[0].put(std::move(t52));}
}
{V t53=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));e->slot(0,5)=std::move(t53);}
{V t54=first(call(get(e->get("math"),lit116),Args{sub(first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(1.0)),V(0.0)}));e->slot(0,6)=std::move(t54);}
{V t55=first(call(e->slot(1,9),Args{e->slot(0,0),lit117,V()}));e->slot(0,7)=std::move(t55);}
if(truth(e->slot(0,7))){auto parent=e;Env storage(parent,false,4);auto e=&storage;{V t56=first(call(e->slot(2,3),Args{first(call(e->slot(2,9),Args{e->slot(1,7),lit103,V(0.0)})),V(0.0)}));e->slot(0,0)=std::move(t56);}
{V t57=first(call(e->slot(2,3),Args{first(call(e->slot(2,9),Args{e->slot(1,7),lit104,V(0.0)})),V(0.0)}));e->slot(0,1)=std::move(t57);}
{V t58=first(call(e->slot(2,3),Args{first(call(e->slot(2,9),Args{e->slot(1,7),lit105,V(0.0)})),V(0.0)}));e->slot(0,2)=std::move(t58);}
{V t59=divv(first(call(get(e->get("math"),lit106),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))})),first(call(get(e->get("math"),lit116),Args{get(get(e->slot(2,1),lit1),lit26),V(0.001)})));e->slot(0,3)=std::move(t59);}
{std::array<Ref,1> refs{Ref(e,1,6)};V t60=first(call(get(e->get("math"),lit116),joined(Args{e->slot(1,6)},call(get(e->get("math"),lit116),Args{sub(e->slot(0,3),V(1.15)),V(0.0)}))));refs[0].put(std::move(t60));}
}
{std::array<Ref,1> refs{Ref(e,0,5)};V t61=first(call(get(e->get("math"),lit116),Args{e->slot(0,5),e->slot(0,6)}));refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t62=e->slot(0,6);refs[0].put(std::move(t62));}
return call(e->slot(1,4),Args{e->slot(0,5),V(0.0),V(20.0)});
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),V()))){return Args{V()};
}
return Args{add(get(get(e->slot(1,1),lit1),lit28),first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})))};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t63=first(call(e->slot(1,14),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,2)=std::move(t63);}
{Args t64=call(e->slot(1,10),Args{V(),concat(lit118,e->slot(0,1)),concat(lit119,e->slot(0,1)),concat(lit120,e->slot(0,1)),concat(lit121,e->slot(0,1)),concat(lit122,e->slot(0,1)),concat(lit123,e->slot(0,1)),concat(lit124,e->slot(0,1))});e->slot(0,3)=arg(t64,0);e->slot(0,4)=arg(t64,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t65=V(true);refs[0].put(std::move(t65));}
return Args{first(call(e->slot(1,3),Args{e->slot(0,3),get(get(e->slot(1,1),lit1),lit28)})),e->slot(0,4)};
}
{V t66=first(call(e->slot(1,6),Args{concat(lit125,e->slot(0,1))}));e->slot(0,5)=std::move(t66);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t67=V(true);refs[0].put(std::move(t67));}
return Args{first(call(e->slot(1,18),Args{e->slot(0,5)})),lit126};
}
if(truth(e->slot(0,2))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t68=first(call(e->slot(2,9),Args{e->slot(1,2),lit127,V()}));e->slot(0,0)=std::move(t68);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t69=first(call(e->slot(2,9),Args{e->slot(1,2),lit128,V()}));refs[0].put(std::move(t69));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t70=V();refs[0].put(std::move(t70));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t71=V();refs[0].put(std::move(t71));}
}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t72=V();refs[0].put(std::move(t72));}
}
if(truth(ne(e->slot(0,0),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,0),get(get(e->slot(2,1),lit1),lit28)})),lit129};
}
}
return Args{get(get(e->slot(1,1),lit1),lit28),lit130};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t73=V(0.0);e->slot(0,1)=std::move(t73);}
{V t74=V(0.0);e->slot(0,2)=std::move(t74);}
{V t75=V(0.0);e->slot(0,3)=std::move(t75);}
{double t76=num(V(0.0)),t77=num(V(3.0)),t78=num(V(1.0));for(double t79=t76;(t78>0?t79<=t77:t79>=t77);t79+=t78){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t79);{V t80=first(call(e->slot(2,19),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,1)=std::move(t80);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t81=first(call(e->slot(2,5),Args{e->slot(0,1)}));refs[0].put(std::move(t81));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t82=add(e->slot(1,1),e->slot(0,1));refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t83=first(call(get(e->get("math"),lit116),Args{e->slot(1,2),e->slot(0,1)}));refs[0].put(std::move(t83));}
if(truth(gt(e->slot(0,1),V(1.0)))){{std::array<Ref,1> refs{Ref(e,1,3)};V t84=add(e->slot(1,3),V(1.0));refs[0].put(std::move(t84));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t85=e->slot(0,2);refs[0].put(std::move(t85));}
if(truth(gt(e->slot(0,3),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t86=V(true);refs[0].put(std::move(t86));}
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t87=V(0.0);e->slot(0,0)=std::move(t87);}
{V t88=V(false);e->slot(0,1)=std::move(t88);}
{double t89=num(V(0.0)),t90=num(V(3.0)),t91=num(V(1.0));for(double t92=t89;(t91>0?t92<=t90:t92>=t90);t92+=t91){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t92);{Args t93=call(e->slot(2,10),Args{V(),concat(lit131,e->slot(0,0)),concat(lit132,e->slot(0,0)),concat(lit133,e->slot(0,0)),concat(lit134,e->slot(0,0)),concat(lit135,e->slot(0,0))});e->slot(0,1)=arg(t93,0);e->slot(0,2)=arg(t93,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t94=V(true);refs[0].put(std::move(t94));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t95=first(call(get(e->get("math"),lit116),joined(Args{e->slot(1,0)},call(e->slot(2,3),Args{e->slot(0,1),V(0.0)}))));refs[0].put(std::move(t95));}
}}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t96=V(true);refs[0].put(std::move(t96));}
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t97=V(0.0);e->slot(0,0)=std::move(t97);}
{V t98=V(false);e->slot(0,1)=std::move(t98);}
{double t99=num(V(0.0)),t100=num(V(3.0)),t101=num(V(1.0));for(double t102=t99;(t101>0?t102<=t100:t102>=t100);t102+=t101){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t102);{Args t103=call(e->slot(2,10),Args{V(),concat(lit134,e->slot(0,0)),concat(lit136,e->slot(0,0)),concat(lit137,e->slot(0,0)),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0))});e->slot(0,1)=arg(t103,0);e->slot(0,2)=arg(t103,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t104=V(true);refs[0].put(std::move(t104));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t105=first(call(get(e->get("math"),lit116),joined(Args{e->slot(1,0)},call(e->slot(2,3),Args{e->slot(0,1),V(0.0)}))));refs[0].put(std::move(t105));}
}}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t106=V(true);refs[0].put(std::move(t106));}
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t107=V(0.0);e->slot(0,0)=std::move(t107);}
{V t108=V(false);e->slot(0,1)=std::move(t108);}
{double t109=num(V(0.0)),t110=num(V(3.0)),t111=num(V(1.0));for(double t112=t109;(t111>0?t112<=t110:t112>=t110);t112+=t111){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t112);{Args t113=call(e->slot(2,10),Args{V(),concat(lit140,e->slot(0,0)),concat(lit138,e->slot(0,0)),concat(lit139,e->slot(0,0)),concat(lit141,e->slot(0,0)),concat(lit142,e->slot(0,0))});e->slot(0,1)=arg(t113,0);e->slot(0,2)=arg(t113,1);}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(e,1,1)};V t114=V(true);refs[0].put(std::move(t114));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t115=first(call(get(e->get("math"),lit116),joined(Args{e->slot(1,0)},call(e->slot(2,3),Args{e->slot(0,1),V(0.0)}))));refs[0].put(std::move(t115));}
}}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t116=V(true);refs[0].put(std::move(t116));}
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{Args t117=call(e->slot(1,10),Args{V(0.0),lit143,lit144,lit145,lit146});e->slot(0,0)=arg(t117,0);e->slot(0,1)=arg(t117,1);}
{Args t118=call(e->slot(1,10),Args{V(),lit147,lit148,lit149,lit150});e->slot(0,2)=arg(t118,0);e->slot(0,3)=arg(t118,1);}
if(truth(([&](){V t119=ne(e->slot(0,1),V());return !truth(t119)?ne(e->slot(0,3),V()):t119;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t120=V(true);refs[0].put(std::move(t120));}
}
if(truth(gt(e->slot(0,0),V(0.0)))){return Args{e->slot(0,0)};
}
return call(e->slot(1,3),Args{e->slot(0,2),V(0.0)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{Args t121=call(e->slot(1,10),Args{V(),lit151,lit152,lit153});e->slot(0,0)=arg(t121,0);e->slot(0,1)=arg(t121,1);}
{Args t122=call(e->slot(1,10),Args{V(),lit154,lit110,lit155});e->slot(0,2)=arg(t122,0);e->slot(0,3)=arg(t122,1);}
if(truth(([&](){V t123=ne(e->slot(0,1),V());return !truth(t123)?ne(e->slot(0,3),V()):t123;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t124=V(true);refs[0].put(std::move(t124));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t125=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t126=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t126));}
return Args{get(e->slot(1,2),lit48),get(e->slot(1,2),lit49)};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;{V t127=V(0.0);e->slot(0,0)=std::move(t127);}
{V t128=V(0.0);e->slot(0,1)=std::move(t128);}
{V t129=V(0.0);e->slot(0,2)=std::move(t129);}
{V t130=V(0.0);e->slot(0,3)=std::move(t130);}
{V t131=V(0.0);e->slot(0,4)=std::move(t131);}
{V t132=V(0.0);e->slot(0,5)=std::move(t132);}
{V t133=V(false);e->slot(0,6)=std::move(t133);}
{double t134=num(V(0.0)),t135=num(V(3.0)),t136=num(V(1.0));for(double t137=t134;(t136>0?t137<=t135:t137>=t135);t137+=t136){auto parent=e;Env storage(parent,false,13);auto e=&storage;e->slot(0,0)=V(t137);{Args t138=call(e->slot(2,10),Args{V(),concat(lit156,e->slot(0,0)),concat(lit157,e->slot(0,0)),concat(lit158,e->slot(0,0))});e->slot(0,1)=arg(t138,0);e->slot(0,2)=arg(t138,1);}
{Args t139=call(e->slot(2,10),Args{V(),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0)),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0))});e->slot(0,3)=arg(t139,0);e->slot(0,4)=arg(t139,1);}
{Args t140=call(e->slot(2,10),Args{V(),concat(lit163,e->slot(0,0)),concat(lit164,e->slot(0,0)),concat(lit165,e->slot(0,0)),concat(lit166,e->slot(0,0))});e->slot(0,5)=arg(t140,0);e->slot(0,6)=arg(t140,1);}
{Args t141=call(e->slot(2,10),Args{V(),concat(lit167,e->slot(0,0)),concat(lit168,e->slot(0,0)),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0))});e->slot(0,7)=arg(t141,0);e->slot(0,8)=arg(t141,1);}
{Args t142=call(e->slot(2,10),Args{V(),concat(lit171,e->slot(0,0)),concat(lit172,e->slot(0,0)),concat(lit173,e->slot(0,0))});e->slot(0,9)=arg(t142,0);e->slot(0,10)=arg(t142,1);}
{Args t143=call(e->slot(2,10),Args{V(),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0)),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0))});e->slot(0,11)=arg(t143,0);e->slot(0,12)=arg(t143,1);}
if(truth(([&](){V t144=([&](){V t145=([&](){V t146=([&](){V t147=([&](){V t148=e->slot(0,2);return !truth(t148)?e->slot(0,4):t148;})();return !truth(t147)?e->slot(0,6):t147;})();return !truth(t146)?e->slot(0,8):t146;})();return !truth(t145)?e->slot(0,10):t145;})();return !truth(t144)?e->slot(0,12):t144;})())){{std::array<Ref,1> refs{Ref(e,1,6)};V t149=V(true);refs[0].put(std::move(t149));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t150=add(e->slot(1,0),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t151=add(e->slot(1,4),first(call(e->slot(2,5),Args{e->slot(0,3)})));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t152=add(e->slot(1,1),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t152));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t153=add(e->slot(1,2),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t153));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t154=add(e->slot(1,3),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,9),V(0.0)})),V(0.0),V(2.0)})));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e,1,5)};V t155=add(e->slot(1,5),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,11),V(0.0)})),V(0.0),V(2.5)})));refs[0].put(std::move(t155));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t156=e->slot(0,6);refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t157=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t157));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t158=e->slot(0,4);refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t159=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t160=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t161=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t162=mul(e->slot(0,5),V(0.25));refs[0].put(std::move(t162));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;{Args t163=call(e->slot(1,10),Args{V(),lit178,lit179,lit180,lit181});e->slot(0,0)=arg(t163,0);e->slot(0,1)=arg(t163,1);}
{Args t164=call(e->slot(1,10),Args{V(),lit182,lit183,lit184,lit185});e->slot(0,2)=arg(t164,0);e->slot(0,3)=arg(t164,1);}
{Args t165=call(e->slot(1,10),Args{V(),lit186,lit187,lit188});e->slot(0,4)=arg(t165,0);e->slot(0,5)=arg(t165,1);}
{Args t166=call(e->slot(1,10),Args{V(),lit189,lit190,lit191});e->slot(0,6)=arg(t166,0);e->slot(0,7)=arg(t166,1);}
{Args t167=call(e->slot(1,10),Args{V(),lit192,lit193,lit194,lit195});e->slot(0,8)=arg(t167,0);e->slot(0,9)=arg(t167,1);}
{Args t168=call(e->slot(1,10),Args{V(),lit196,lit197});e->slot(0,10)=arg(t168,0);e->slot(0,11)=arg(t168,1);}
if(truth(([&](){V t169=([&](){V t170=([&](){V t171=([&](){V t172=([&](){V t173=e->slot(0,1);return !truth(t173)?e->slot(0,3):t173;})();return !truth(t172)?e->slot(0,5):t172;})();return !truth(t171)?e->slot(0,7):t171;})();return !truth(t170)?e->slot(0,9):t170;})();return !truth(t169)?e->slot(0,11):t169;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t174=V(true);refs[0].put(std::move(t174));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t175=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t176=add(add(first(call(e->slot(1,5),Args{e->slot(0,2)})),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit64)})),V(0.5))),mul(first(call(e->slot(1,5),Args{e->slot(0,6)})),V(0.35)));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t177=first(call(e->slot(1,3),Args{e->slot(0,4),V(0.0)}));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t178=first(call(e->slot(1,3),Args{e->slot(0,6),V(0.0)}));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t179=first(call(e->slot(1,3),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t180=first(call(e->slot(1,3),Args{e->slot(0,10),V(0.0)}));refs[0].put(std::move(t180));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;{V t181=V(0.0);e->slot(0,0)=std::move(t181);}
{V t182=V(0.0);e->slot(0,1)=std::move(t182);}
{V t183=V(0.0);e->slot(0,2)=std::move(t183);}
{V t184=V(0.0);e->slot(0,3)=std::move(t184);}
{V t185=V(0.0);e->slot(0,4)=std::move(t185);}
{double t186=num(V(0.0)),t187=num(V(3.0)),t188=num(V(1.0));for(double t189=t186;(t188>0?t189<=t187:t189>=t187);t189+=t188){auto parent=e;Env storage(parent,false,13);auto e=&storage;e->slot(0,0)=V(t189);{Args t190=call(e->slot(2,10),Args{V(),concat(lit198,e->slot(0,0)),concat(lit199,e->slot(0,0)),concat(lit200,e->slot(0,0)),concat(lit201,e->slot(0,0))});e->slot(0,1)=arg(t190,0);e->slot(0,2)=arg(t190,1);}
{Args t191=call(e->slot(2,10),Args{V(),concat(lit202,e->slot(0,0)),concat(lit203,e->slot(0,0)),concat(lit204,e->slot(0,0)),concat(lit205,e->slot(0,0))});e->slot(0,3)=arg(t191,0);e->slot(0,4)=arg(t191,1);}
{Args t192=call(e->slot(2,10),Args{V(),concat(lit206,e->slot(0,0)),concat(lit207,e->slot(0,0)),concat(lit208,e->slot(0,0)),concat(lit209,e->slot(0,0))});e->slot(0,5)=arg(t192,0);e->slot(0,6)=arg(t192,1);}
{Args t193=call(e->slot(2,10),Args{V(),concat(lit210,e->slot(0,0)),concat(lit211,e->slot(0,0)),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0))});e->slot(0,7)=arg(t193,0);e->slot(0,8)=arg(t193,1);}
{Args t194=call(e->slot(2,10),Args{V(),concat(lit214,e->slot(0,0)),concat(lit215,e->slot(0,0)),concat(lit216,e->slot(0,0)),concat(lit217,e->slot(0,0)),concat(lit218,e->slot(0,0))});e->slot(0,9)=arg(t194,0);e->slot(0,10)=arg(t194,1);}
{Args t195=call(e->slot(2,10),Args{V(),concat(lit219,e->slot(0,0)),concat(lit220,e->slot(0,0)),concat(lit221,e->slot(0,0))});e->slot(0,11)=arg(t195,0);e->slot(0,12)=arg(t195,1);}
if(truth(([&](){V t196=e->slot(0,2);return !truth(t196)?e->slot(0,4):t196;})())){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit84)};V t197=V(true);refs[0].put(std::move(t197));}
}
if(truth(([&](){V t198=e->slot(0,6);return !truth(t198)?e->slot(0,8):t198;})())){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit85)};V t199=V(true);refs[0].put(std::move(t199));}
}
if(truth(([&](){V t200=e->slot(0,10);return !truth(t200)?e->slot(0,12):t200;})())){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit89)};V t201=V(true);refs[0].put(std::move(t201));}
}
{std::array<Ref,1> refs{Ref(e,1,0)};V t202=add(e->slot(1,0),first(call(e->slot(2,5),Args{sub(first(call(e->slot(2,3),Args{e->slot(0,1),V(1.0)})),V(1.0))})));refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e,1,1)};V t203=add(e->slot(1,1),first(call(e->slot(2,5),Args{e->slot(0,3)})));refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t204=add(add(e->slot(1,2),first(call(e->slot(2,5),Args{e->slot(0,5)}))),first(call(e->slot(2,5),Args{e->slot(0,7)})));refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t205=add(e->slot(1,3),first(call(e->slot(2,4),Args{first(call(e->slot(2,5),Args{e->slot(0,9)})),V(0.0),V(2.0)})));refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t206=add(e->slot(1,4),first(call(e->slot(2,4),Args{first(call(e->slot(2,5),Args{e->slot(0,11)})),V(0.0),V(2.0)})));refs[0].put(std::move(t206));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t207=mul(e->slot(0,0),V(0.25));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t208=e->slot(0,1);refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t209=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t210=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t211=mul(e->slot(0,4),V(0.25));refs[0].put(std::move(t211));}
{Args t212=call(e->slot(1,10),Args{V(),lit222,lit223,lit224,lit225});e->slot(0,5)=arg(t212,0);e->slot(0,6)=arg(t212,1);}
{Args t213=call(e->slot(1,10),Args{V(),lit226,lit227,lit228});e->slot(0,7)=arg(t213,0);e->slot(0,8)=arg(t213,1);}
{Args t214=call(e->slot(1,10),Args{V(),lit229,lit230,lit231});e->slot(0,9)=arg(t214,0);e->slot(0,10)=arg(t214,1);}
if(truth(([&](){V t215=([&](){V t216=e->slot(0,6);return !truth(t216)?e->slot(0,8):t216;})();return !truth(t215)?e->slot(0,10):t215;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t217=V(true);refs[0].put(std::move(t217));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t218=add(add(first(call(e->slot(1,5),Args{sub(first(call(e->slot(1,3),Args{e->slot(0,5),V(1.0)})),V(1.0))})),first(call(e->slot(1,5),Args{sub(first(call(e->slot(1,3),Args{e->slot(0,7),V(1.0)})),V(1.0))}))),first(call(e->slot(1,5),Args{e->slot(0,9)})));refs[0].put(std::move(t218));}
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;{V t219=divv(first(call(get(e->get("math"),lit116),Args{sub(([&](){V t220=get(e->slot(1,2),lit55);return !truth(t220)?V(0.0):t220;})(),get(get(e->slot(1,1),lit1),lit31)),V(0.0)})),V(140.0));e->slot(0,0)=std::move(t219);}
{V t221=divv(first(call(get(e->get("math"),lit116),Args{sub(([&](){V t222=get(e->slot(1,2),lit56);return !truth(t222)?V(0.0):t222;})(),get(get(e->slot(1,1),lit1),lit32)),V(0.0)})),V(100.0));e->slot(0,1)=std::move(t221);}
{Args t223=call(e->slot(1,10),Args{V(),lit232,lit233,lit234});e->slot(0,2)=arg(t223,0);e->slot(0,3)=arg(t223,1);}
{Args t224=call(e->slot(1,10),Args{V(),lit235,lit236});e->slot(0,4)=arg(t224,0);e->slot(0,5)=arg(t224,1);}
if(truth(([&](){V t225=e->slot(0,3);return !truth(t225)?e->slot(0,5):t225;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t226=V(true);refs[0].put(std::move(t226));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t227=add(add(add(mul(first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0),V(2.0)})),V(0.25)),mul(first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(2.0)})),V(0.25))),mul(first(call(e->slot(1,4),Args{first(call(e->slot(1,5),Args{e->slot(0,2)})),V(0.0),V(2.0)})),V(0.25))),mul(first(call(e->slot(1,4),Args{first(call(e->slot(1,5),Args{e->slot(0,4)})),V(0.0),V(2.0)})),V(0.25)));refs[0].put(std::move(t227));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t228=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t229=first(call(get(e->get("math"),lit116),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(0.0)}));refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t230=first(call(e->slot(1,3),Args{e->slot(0,2),V(1.0)}));refs[0].put(std::move(t230));}
return call(e->slot(1,4),Args{sub(add(e->slot(0,0),mul(e->slot(0,1),e->slot(0,3))),mul(mul(get(get(e->slot(1,1),lit1),lit5),e->slot(0,2)),e->slot(0,3))),V(0.0),get(get(e->slot(1,1),lit1),lit35)});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t231=add(add(add(add(mul(e->slot(0,0),get(get(e->slot(1,1),lit1),lit2)),mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit6))),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit7))),mul(get(e->slot(1,2),lit72),get(get(e->slot(1,1),lit1),lit21))),mul(get(e->slot(1,2),lit73),get(get(e->slot(1,1),lit1),lit22)));e->slot(0,4)=std::move(t231);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t232=first(call(e->slot(1,30),Args{get(e->slot(1,2),lit40),e->slot(0,4),V(1.0),e->slot(0,3)}));refs[0].put(std::move(t232));}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t233=first(call(get(e->get("math"),lit116),Args{sub(e->slot(0,0),get(get(e->slot(1,1),lit1),lit27)),V(0.0)}));e->slot(0,2)=std::move(t233);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t234=e->slot(0,2);refs[0].put(std::move(t234));}
{V t235=add(add(add(add(add(add(mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit3)),mul(get(e->slot(1,2),lit58),get(get(e->slot(1,1),lit1),lit9))),mul(get(e->slot(1,2),lit57),get(get(e->slot(1,1),lit1),lit8))),mul(get(e->slot(1,2),lit69),get(get(e->slot(1,1),lit1),lit18))),mul(get(e->slot(1,2),lit70),get(get(e->slot(1,1),lit1),lit19))),mul(get(e->slot(1,2),lit71),get(get(e->slot(1,1),lit1),lit20))),mul(get(e->slot(1,2),lit74),get(get(e->slot(1,1),lit1),lit23)));e->slot(0,3)=std::move(t235);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t236=first(call(e->slot(1,30),Args{get(e->slot(1,2),lit41),e->slot(0,3),V(1.0),e->slot(0,1)}));refs[0].put(std::move(t236));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t237=first(call(get(e->get("math"),lit116),Args{sub(e->slot(0,0),get(get(e->slot(1,1),lit1),lit30)),V(0.0)}));e->slot(0,2)=std::move(t237);}
{V t238=add(add(add(add(add(mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit4)),mul(get(e->slot(1,2),lit63),get(get(e->slot(1,1),lit1),lit13))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit65)})),get(get(e->slot(1,1),lit1),lit14))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit66)})),get(get(e->slot(1,1),lit1),lit15))),mul(first(call(get(e->get("math"),lit116),Args{sub(get(e->slot(1,2),lit67),V(5.0)),V(0.0)})),get(get(e->slot(1,1),lit1),lit16))),mul(get(e->slot(1,2),lit68),get(get(e->slot(1,1),lit1),lit17)));e->slot(0,3)=std::move(t238);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t239=first(call(e->slot(1,30),Args{get(e->slot(1,2),lit42),e->slot(0,3),V(1.0),e->slot(0,1)}));refs[0].put(std::move(t239));}
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t240=first(call(get(e->get("math"),lit116),Args{sub(e->slot(0,0),get(get(e->slot(1,1),lit1),lit29)),V(0.0)}));e->slot(0,2)=std::move(t240);}
{V t241=add(mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit4)),mul(get(e->slot(1,2),lit75),get(get(e->slot(1,1),lit1),lit24)));e->slot(0,3)=std::move(t241);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t242=first(call(e->slot(1,30),Args{get(e->slot(1,2),lit43),e->slot(0,3),V(1.0),e->slot(0,1)}));refs[0].put(std::move(t242));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t243=mul(first(call(get(e->get("math"),lit116),Args{sub(([&](){V t244=get(e->slot(1,2),lit56);return !truth(t244)?V(0.0):t244;})(),get(get(e->slot(1,1),lit1),lit32)),V(0.0)})),get(get(e->slot(1,1),lit1),lit25));e->slot(0,1)=std::move(t243);}
{V t245=add(add(add(add(add(mul(get(e->slot(1,2),lit59),get(get(e->slot(1,1),lit1),lit10)),mul(get(e->slot(1,2),lit60),get(get(e->slot(1,1),lit1),lit11))),mul(get(e->slot(1,2),lit61),get(get(e->slot(1,1),lit1),lit12))),mul(get(e->slot(1,2),lit57),get(get(e->slot(1,1),lit1),lit8))),mul(get(e->slot(1,2),lit62),get(get(e->slot(1,1),lit1),lit11))),e->slot(0,1));e->slot(0,2)=std::move(t245);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t246=first(call(e->slot(1,30),Args{get(e->slot(1,2),lit44),e->slot(0,2),V(1.0),e->slot(0,0)}));refs[0].put(std::move(t246));}
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t247=first(call(e->slot(1,4),Args{mul(add(add(add(add(([&](){V t248=get(e->slot(1,2),lit40);return !truth(t248)?V(0.0):t248;})(),([&](){V t249=get(e->slot(1,2),lit41);return !truth(t249)?V(0.0):t249;})()),([&](){V t250=get(e->slot(1,2),lit42);return !truth(t250)?V(0.0):t250;})()),([&](){V t251=get(e->slot(1,2),lit43);return !truth(t251)?V(0.0):t251;})()),([&](){V t252=get(e->slot(1,2),lit44);return !truth(t252)?V(0.0):t252;})()),V(0.2)),V(0.0),get(get(e->slot(1,1),lit1),lit35)}));refs[0].put(std::move(t247));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t253=e->slot(0,0);refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t254=e->slot(0,1);refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t255=e->slot(0,2);refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t256=e->slot(0,3);refs[0].put(std::move(t256));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t257=V(0.0);e->slot(0,0)=std::move(t257);}
if(truth(get(e->slot(1,2),lit82))){{std::array<Ref,1> refs{Ref(e,0,0)};V t258=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t258));}
}
if(truth(get(e->slot(1,2),lit83))){{std::array<Ref,1> refs{Ref(e,0,0)};V t259=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t259));}
}
if(truth(get(e->slot(1,2),lit84))){{std::array<Ref,1> refs{Ref(e,0,0)};V t260=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t260));}
}
if(truth(get(e->slot(1,2),lit85))){{std::array<Ref,1> refs{Ref(e,0,0)};V t261=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t261));}
}
if(truth(get(e->slot(1,2),lit86))){{std::array<Ref,1> refs{Ref(e,0,0)};V t262=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t262));}
}
if(truth(get(e->slot(1,2),lit87))){{std::array<Ref,1> refs{Ref(e,0,0)};V t263=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t263));}
}
if(truth(get(e->slot(1,2),lit88))){{std::array<Ref,1> refs{Ref(e,0,0)};V t264=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t264));}
}
if(truth(get(e->slot(1,2),lit89))){{std::array<Ref,1> refs{Ref(e,0,0)};V t265=add(e->slot(0,0),V(1.0));refs[0].put(std::move(t265));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t266=e->slot(0,0);refs[0].put(std::move(t266));}
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,8),Args{lit237,([&](){V t267=get(e->slot(1,2),lit78);return !truth(t267)?lit238:t267;})()});
call(e->slot(1,8),Args{lit239,([&](){V t268=get(e->slot(1,2),lit80);return !truth(t268)?V(0.0):t268;})()});
call(e->slot(1,8),Args{lit240,([&](){V t269=get(e->slot(1,2),lit81);return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,8),Args{lit241,([&](){V t270=([&](){V t271=get(e->slot(1,2),lit77);return truth(t271)?V(1.0):t271;})();return !truth(t270)?V(0.0):t270;})()});
call(e->slot(1,8),Args{lit242,([&](){V t272=get(e->slot(1,2),lit40);return !truth(t272)?V(0.0):t272;})()});
call(e->slot(1,8),Args{lit243,([&](){V t273=get(e->slot(1,2),lit41);return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,8),Args{lit244,([&](){V t274=get(e->slot(1,2),lit42);return !truth(t274)?V(0.0):t274;})()});
call(e->slot(1,8),Args{lit245,([&](){V t275=get(e->slot(1,2),lit43);return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,8),Args{lit246,([&](){V t276=get(e->slot(1,2),lit44);return !truth(t276)?V(0.0):t276;})()});
call(e->slot(1,8),Args{lit247,([&](){V t277=get(e->slot(1,2),lit45);return !truth(t277)?V(0.0):t277;})()});
call(e->slot(1,8),Args{lit248,([&](){V t278=get(e->slot(1,2),lit40);return !truth(t278)?V(0.0):t278;})()});
call(e->slot(1,8),Args{lit249,([&](){V t279=get(e->slot(1,2),lit41);return !truth(t279)?V(0.0):t279;})()});
call(e->slot(1,8),Args{lit250,([&](){V t280=get(e->slot(1,2),lit42);return !truth(t280)?V(0.0):t280;})()});
call(e->slot(1,8),Args{lit251,([&](){V t281=get(e->slot(1,2),lit43);return !truth(t281)?V(0.0):t281;})()});
call(e->slot(1,8),Args{lit252,([&](){V t282=get(e->slot(1,2),lit44);return !truth(t282)?V(0.0):t282;})()});
call(e->slot(1,8),Args{lit253,([&](){V t283=get(e->slot(1,2),lit45);return !truth(t283)?V(0.0):t283;})()});
call(e->slot(1,8),Args{lit254,([&](){V t284=get(e->slot(1,2),lit46);return !truth(t284)?V(0.0):t284;})()});
call(e->slot(1,8),Args{lit255,([&](){V t285=get(e->slot(1,2),lit48);return !truth(t285)?V(0.0):t285;})()});
call(e->slot(1,8),Args{lit256,([&](){V t286=get(e->slot(1,2),lit49);return !truth(t286)?V(0.0):t286;})()});
call(e->slot(1,8),Args{lit257,([&](){V t287=get(e->slot(1,2),lit50);return !truth(t287)?V(0.0):t287;})()});
call(e->slot(1,8),Args{lit258,([&](){V t288=get(e->slot(1,2),lit51);return !truth(t288)?V(0.0):t288;})()});
call(e->slot(1,8),Args{lit259,([&](){V t289=get(e->slot(1,2),lit53);return !truth(t289)?V(0.0):t289;})()});
call(e->slot(1,8),Args{lit260,([&](){V t290=get(e->slot(1,2),lit54);return !truth(t290)?V(0.0):t290;})()});
call(e->slot(1,8),Args{lit261,([&](){V t291=get(e->slot(1,2),lit76);return !truth(t291)?V(0.0):t291;})()});
call(e->slot(1,8),Args{lit262,([&](){V t292=get(e->slot(1,2),lit45);return !truth(t292)?V(0.0):t292;})()});
call(e->slot(1,8),Args{lit263,([&](){V t293=get(e->slot(1,2),lit40);return !truth(t293)?V(0.0):t293;})()});
call(e->slot(1,8),Args{lit264,([&](){V t294=get(e->slot(1,2),lit41);return !truth(t294)?V(0.0):t294;})()});
call(e->slot(1,8),Args{lit265,([&](){V t295=get(e->slot(1,2),lit42);return !truth(t295)?V(0.0):t295;})()});
call(e->slot(1,8),Args{lit266,([&](){V t296=get(e->slot(1,2),lit43);return !truth(t296)?V(0.0):t296;})()});
call(e->slot(1,8),Args{lit267,([&](){V t297=get(e->slot(1,2),lit44);return !truth(t297)?V(0.0):t297;})()});
if(truth(V(!truth(get(e->slot(1,2),lit92))))){return Args{};
}
call(e->slot(1,8),Args{lit268,([&](){V t298=get(e->slot(1,2),lit57);return !truth(t298)?V(0.0):t298;})()});
call(e->slot(1,8),Args{lit269,([&](){V t299=get(e->slot(1,2),lit59);return !truth(t299)?V(0.0):t299;})()});
call(e->slot(1,8),Args{lit270,([&](){V t300=get(e->slot(1,2),lit60);return !truth(t300)?V(0.0):t300;})()});
call(e->slot(1,8),Args{lit271,([&](){V t301=get(e->slot(1,2),lit61);return !truth(t301)?V(0.0):t301;})()});
call(e->slot(1,8),Args{lit272,([&](){V t302=get(e->slot(1,2),lit62);return !truth(t302)?V(0.0):t302;})()});
call(e->slot(1,8),Args{lit273,([&](){V t303=get(e->slot(1,2),lit63);return !truth(t303)?V(0.0):t303;})()});
call(e->slot(1,8),Args{lit274,([&](){V t304=get(e->slot(1,2),lit64);return !truth(t304)?V(0.0):t304;})()});
call(e->slot(1,8),Args{lit275,([&](){V t305=get(e->slot(1,2),lit65);return !truth(t305)?V(0.0):t305;})()});
call(e->slot(1,8),Args{lit276,([&](){V t306=get(e->slot(1,2),lit66);return !truth(t306)?V(0.0):t306;})()});
call(e->slot(1,8),Args{lit277,([&](){V t307=get(e->slot(1,2),lit67);return !truth(t307)?V(0.0):t307;})()});
call(e->slot(1,8),Args{lit278,([&](){V t308=get(e->slot(1,2),lit68);return !truth(t308)?V(0.0):t308;})()});
call(e->slot(1,8),Args{lit279,([&](){V t309=get(e->slot(1,2),lit69);return !truth(t309)?V(0.0):t309;})()});
call(e->slot(1,8),Args{lit280,([&](){V t310=get(e->slot(1,2),lit71);return !truth(t310)?V(0.0):t310;})()});
call(e->slot(1,8),Args{lit281,([&](){V t311=get(e->slot(1,2),lit72);return !truth(t311)?V(0.0):t311;})()});
call(e->slot(1,8),Args{lit282,([&](){V t312=get(e->slot(1,2),lit70);return !truth(t312)?V(0.0):t312;})()});
call(e->slot(1,8),Args{lit283,([&](){V t313=get(e->slot(1,2),lit73);return !truth(t313)?V(0.0):t313;})()});
call(e->slot(1,8),Args{lit284,([&](){V t314=get(e->slot(1,2),lit74);return !truth(t314)?V(0.0):t314;})()});
call(e->slot(1,8),Args{lit285,([&](){V t315=get(e->slot(1,2),lit75);return !truth(t315)?V(0.0):t315;})()});
call(e->slot(1,8),Args{lit286,([&](){V t316=get(e->slot(1,2),lit55);return !truth(t316)?V(0.0):t316;})()});
call(e->slot(1,8),Args{lit287,([&](){V t317=get(e->slot(1,2),lit56);return !truth(t317)?V(0.0):t317;})()});
call(e->slot(1,8),Args{lit288,([&](){V t318=get(e->slot(1,2),lit52);return !truth(t318)?V(0.0):t318;})()});
call(e->slot(1,8),Args{lit289,([&](){V t319=get(e->slot(1,2),lit90);return !truth(t319)?V(0.0):t319;})()});
call(e->slot(1,8),Args{lit290,([&](){V t320=([&](){V t321=get(e->slot(1,2),lit82);return truth(t321)?V(1.0):t321;})();return !truth(t320)?V(0.0):t320;})()});
call(e->slot(1,8),Args{lit291,([&](){V t322=([&](){V t323=get(e->slot(1,2),lit83);return truth(t323)?V(1.0):t323;})();return !truth(t322)?V(0.0):t322;})()});
call(e->slot(1,8),Args{lit292,([&](){V t324=([&](){V t325=get(e->slot(1,2),lit84);return truth(t325)?V(1.0):t325;})();return !truth(t324)?V(0.0):t324;})()});
call(e->slot(1,8),Args{lit293,([&](){V t326=([&](){V t327=get(e->slot(1,2),lit85);return truth(t327)?V(1.0):t327;})();return !truth(t326)?V(0.0):t326;})()});
call(e->slot(1,8),Args{lit294,([&](){V t328=([&](){V t329=get(e->slot(1,2),lit86);return truth(t329)?V(1.0):t329;})();return !truth(t328)?V(0.0):t328;})()});
call(e->slot(1,8),Args{lit295,([&](){V t330=([&](){V t331=get(e->slot(1,2),lit87);return truth(t331)?V(1.0):t331;})();return !truth(t330)?V(0.0):t330;})()});
call(e->slot(1,8),Args{lit296,([&](){V t332=([&](){V t333=get(e->slot(1,2),lit88);return truth(t333)?V(1.0):t333;})();return !truth(t332)?V(0.0):t332;})()});
call(e->slot(1,8),Args{lit297,([&](){V t334=([&](){V t335=get(e->slot(1,2),lit89);return truth(t335)?V(1.0):t335;})();return !truth(t334)?V(0.0):t334;})()});
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t336=V(false);refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t337=V(false);refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t338=V(false);refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t339=V(false);refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t340=V(false);refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t341=V(false);refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t342=V(false);refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t343=V(false);refs[0].put(std::move(t343));}
return Args{};});
Ref(e->slot(0,1),lit298).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t344=lit79;refs[0].put(std::move(t344));}
call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit299).put(native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t345=add(([&](){V t346=get(e->slot(1,2),lit80);return !truth(t346)?V(0.0):t346;})(),V(1.0));refs[0].put(std::move(t345));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t347=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit36),get(get(e->slot(1,1),lit1),lit37)}));refs[0].put(std::move(t347));}
call(e->slot(1,12),Args{e->slot(0,0)});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t348=first(call(e->slot(1,13),Args{}));refs[0].put(std::move(t348));}
}
{V t349=ne(e->slot(0,1),V());e->slot(0,3)=std::move(t349);}
{V t350=([&](){V t351=e->slot(0,3);return truth(t351)?first(call(e->slot(1,15),Args{e->slot(0,1)})):t351;})();e->slot(0,4)=std::move(t350);}
if(truth(V(!truth(e->slot(0,3))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t352=lit300;refs[0].put(std::move(t352));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t353=V(false);refs[0].put(std::move(t353));}
}else if(truth(V(!truth(e->slot(0,4))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t354=lit300;refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t355=V(false);refs[0].put(std::move(t355));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t356=lit301;refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t357=V(true);refs[0].put(std::move(t357));}
}

{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t358=first(call(e->slot(1,16),Args{e->slot(0,1)}));refs[0].put(std::move(t358));}
call(e->slot(1,40),Args{});
{V t359=first(call(e->slot(1,17),Args{e->slot(0,1)}));e->slot(0,5)=std::move(t359);}
{V t360=first(call(e->slot(1,20),Args{e->slot(0,1)}));e->slot(0,6)=std::move(t360);}
{V t361=first(call(e->slot(1,21),Args{}));e->slot(0,7)=std::move(t361);}
{V t362=first(call(e->slot(1,24),Args{}));e->slot(0,8)=std::move(t362);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t363=first(call(e->slot(1,22),Args{}));refs[0].put(std::move(t363));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t364=first(call(e->slot(1,23),Args{}));refs[0].put(std::move(t364));}
{Args t365=call(e->slot(1,25),Args{});e->slot(0,9)=arg(t365,0);e->slot(0,10)=arg(t365,1);}
call(e->slot(1,26),Args{});
call(e->slot(1,27),Args{});
call(e->slot(1,28),Args{});
call(e->slot(1,29),Args{});
call(e->slot(1,38),Args{});
call(e->slot(1,31),Args{e->slot(0,5),e->slot(0,9),e->slot(0,10),e->slot(0,0)});
call(e->slot(1,32),Args{e->slot(0,6),e->slot(0,0)});
call(e->slot(1,33),Args{e->slot(0,8),e->slot(0,0)});
call(e->slot(1,34),Args{e->slot(0,7),e->slot(0,0)});
call(e->slot(1,35),Args{e->slot(0,0)});
call(e->slot(1,36),Args{});
call(e->slot(1,37),Args{e->slot(0,5),e->slot(0,6),e->slot(0,7),e->slot(0,8)});
call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit302).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit303).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t366=get(e->slot(1,2),lit45);return !truth(t366)?V(0.0):t366;})()};
return Args{};}));
Ref(e->slot(0,1),lit304).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t367=get(e->slot(1,2),lit40);return !truth(t367)?V(0.0):t367;})()};
return Args{};}));
Ref(e->slot(0,1),lit305).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t368=get(e->slot(1,2),lit41);return !truth(t368)?V(0.0):t368;})()};
return Args{};}));
Ref(e->slot(0,1),lit306).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t369=get(e->slot(1,2),lit42);return !truth(t369)?V(0.0):t369;})()};
return Args{};}));
Ref(e->slot(0,1),lit307).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t370=get(e->slot(1,2),lit43);return !truth(t370)?V(0.0):t370;})()};
return Args{};}));
Ref(e->slot(0,1),lit308).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t371=get(e->slot(1,2),lit44);return !truth(t371)?V(0.0):t371;})()};
return Args{};}));
Ref(e->slot(0,1),lit309).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),lit40))){return call(get(e->slot(1,1),lit304),Args{});
}
if(truth(eq(e->slot(0,0),lit41))){return call(get(e->slot(1,1),lit305),Args{});
}
if(truth(eq(e->slot(0,0),lit42))){return call(get(e->slot(1,1),lit306),Args{});
}
if(truth(eq(e->slot(0,0),lit43))){return call(get(e->slot(1,1),lit307),Args{});
}
if(truth(([&](){V t372=eq(e->slot(0,0),lit44);return !truth(t372)?eq(e->slot(0,0),lit310):t372;})())){return call(get(e->slot(1,1),lit308),Args{});
}
if(truth(eq(e->slot(0,0),lit45))){return call(get(e->slot(1,1),lit303),Args{});
}
return Args{V(0.0)};
return Args{};}));
Ref(e->slot(0,1),lit311).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit40)};V t373=V(0.0);refs[0].put(std::move(t373));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t374=V(0.0);refs[0].put(std::move(t374));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t375=V(0.0);refs[0].put(std::move(t375));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit43)};V t376=V(0.0);refs[0].put(std::move(t376));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit44)};V t377=V(0.0);refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit45)};V t378=V(0.0);refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit46)};V t379=V(0.0);refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit47)};V t380=V(0.0);refs[0].put(std::move(t380));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit48)};V t381=V(0.0);refs[0].put(std::move(t381));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit49)};V t382=V(0.0);refs[0].put(std::move(t382));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit50)};V t383=V(0.0);refs[0].put(std::move(t383));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit51)};V t384=V(0.0);refs[0].put(std::move(t384));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit52)};V t385=V(0.0);refs[0].put(std::move(t385));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit53)};V t386=V(0.0);refs[0].put(std::move(t386));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit54)};V t387=V(0.0);refs[0].put(std::move(t387));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit55)};V t388=V(0.0);refs[0].put(std::move(t388));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit56)};V t389=V(0.0);refs[0].put(std::move(t389));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit57)};V t390=V(0.0);refs[0].put(std::move(t390));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit58)};V t391=V(0.0);refs[0].put(std::move(t391));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit59)};V t392=V(0.0);refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit60)};V t393=V(0.0);refs[0].put(std::move(t393));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit61)};V t394=V(0.0);refs[0].put(std::move(t394));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit62)};V t395=V(0.0);refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t396=V(0.0);refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit64)};V t397=V(0.0);refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t398=V(0.0);refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t399=V(0.0);refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t400=V(0.0);refs[0].put(std::move(t400));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t401=V(0.0);refs[0].put(std::move(t401));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t402=V(0.0);refs[0].put(std::move(t402));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t403=V(0.0);refs[0].put(std::move(t403));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t404=V(0.0);refs[0].put(std::move(t404));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t405=V(0.0);refs[0].put(std::move(t405));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t406=V(0.0);refs[0].put(std::move(t406));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t407=V(0.0);refs[0].put(std::move(t407));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t408=V(0.0);refs[0].put(std::move(t408));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t409=add(([&](){V t410=get(e->slot(1,2),lit81);return !truth(t410)?V(0.0):t410;})(),V(1.0));refs[0].put(std::move(t409));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t411=lit312;refs[0].put(std::move(t411));}
call(e->slot(1,39),Args{});
return Args{};}));
Ref(e->slot(0,1),lit313).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit314),Args{concat(lit315,concat(lit316,concat(lit317,concat(lit318,concat(lit319,concat(lit320,concat(lit321,lit322))))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit78)})),([&](){V t412=get(e->slot(1,2),lit80);return !truth(t412)?V(0.0):t412;})(),([&](){V t413=([&](){V t414=get(e->slot(1,2),lit77);return truth(t414)?lit323:t414;})();return !truth(t413)?lit324:t413;})(),([&](){V t415=get(e->slot(1,2),lit90);return !truth(t415)?V(0.0):t415;})(),([&](){V t416=get(e->slot(1,2),lit45);return !truth(t416)?V(0.0):t416;})(),([&](){V t417=get(e->slot(1,2),lit40);return !truth(t417)?V(0.0):t417;})(),([&](){V t418=get(e->slot(1,2),lit41);return !truth(t418)?V(0.0):t418;})(),([&](){V t419=get(e->slot(1,2),lit44);return !truth(t419)?V(0.0):t419;})(),([&](){V t420=get(e->slot(1,2),lit42);return !truth(t420)?V(0.0):t420;})(),([&](){V t421=get(e->slot(1,2),lit43);return !truth(t421)?V(0.0):t421;})(),([&](){V t422=get(e->slot(1,2),lit46);return !truth(t422)?V(0.0):t422;})(),([&](){V t423=get(e->slot(1,2),lit47);return !truth(t423)?V(0.0):t423;})(),([&](){V t424=get(e->slot(1,2),lit48);return !truth(t424)?V(0.0):t424;})(),([&](){V t425=get(e->slot(1,2),lit49);return !truth(t425)?V(0.0):t425;})(),([&](){V t426=get(e->slot(1,2),lit50);return !truth(t426)?V(0.0):t426;})(),([&](){V t427=get(e->slot(1,2),lit51);return !truth(t427)?V(0.0):t427;})(),([&](){V t428=get(e->slot(1,2),lit52);return !truth(t428)?V(0.0):t428;})(),([&](){V t429=get(e->slot(1,2),lit53);return !truth(t429)?V(0.0):t429;})(),([&](){V t430=get(e->slot(1,2),lit54);return !truth(t430)?V(0.0):t430;})(),([&](){V t431=get(e->slot(1,2),lit55);return !truth(t431)?V(0.0):t431;})(),([&](){V t432=get(e->slot(1,2),lit56);return !truth(t432)?V(0.0):t432;})(),([&](){V t433=([&](){V t434=get(e->slot(1,2),lit82);return truth(t434)?lit323:t434;})();return !truth(t433)?lit324:t433;})(),([&](){V t435=([&](){V t436=get(e->slot(1,2),lit83);return truth(t436)?lit323:t436;})();return !truth(t435)?lit324:t435;})(),([&](){V t437=([&](){V t438=get(e->slot(1,2),lit84);return truth(t438)?lit323:t438;})();return !truth(t437)?lit324:t437;})(),([&](){V t439=([&](){V t440=get(e->slot(1,2),lit85);return truth(t440)?lit323:t440;})();return !truth(t439)?lit324:t439;})(),([&](){V t441=([&](){V t442=get(e->slot(1,2),lit86);return truth(t442)?lit323:t442;})();return !truth(t441)?lit324:t441;})(),([&](){V t443=([&](){V t444=get(e->slot(1,2),lit87);return truth(t444)?lit323:t444;})();return !truth(t443)?lit324:t443;})(),([&](){V t445=([&](){V t446=get(e->slot(1,2),lit88);return truth(t446)?lit323:t446;})();return !truth(t445)?lit324:t445;})(),([&](){V t447=([&](){V t448=get(e->slot(1,2),lit89);return truth(t448)?lit323:t448;})();return !truth(t447)?lit324:t447;})()});
return Args{};}));
Ref(e->slot(0,1),lit325).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit326),Args{lit327});
call(get(e->get("ui"),lit326),call(get(e->slot(1,1),lit313),Args{}));
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
