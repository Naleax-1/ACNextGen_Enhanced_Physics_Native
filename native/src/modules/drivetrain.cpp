// Generated native C++ from pinned drivetrain.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("rpmTau");
static const V lit3("gearInertia");
static const V lit4("lash");
static const V lit5("lashTau");
static const V lit6("shaftStiffness");
static const V lit7("shaftDamping");
static const V lit8("clutchTau");
static const V lit9("shiftShockScale");
static const V lit10("shiftShockGain");
static const V lit11("shiftShockDecay");
static const V lit12("gearboxHeatGain");
static const V lit13("lsdResistanceGain");
static const V lit14("hopShockReference");
static const V lit15("hopTorqueLossGain");
static const V lit16("gearboxAmbient");
static const V lit17("gearboxCoolRate");
static const V lit18("contactTorqueLossGain");
static const V lit19("contactImpulseShockGain");
static const V lit20("loadDiffTorqueLossGain");
static const V lit21("loadDiffReference");
static const V lit22("loadRef");
static const V lit23("controlArmTwistGain");
static const V lit24("chassisFlexTorqueLossGain");
static const V lit25("chassisReleaseKickGain");
static const V lit26("bodyFlexLashGain");
static const V lit27("bodyTorsionShaftGain");
static const V lit28("bodyDampingShaftGain");
static const V lit29("bodyStiffShaftLoss");
static const V lit30("minBodyLashScale");
static const V lit31("maxBodyLashScale");
static const V lit32("minBodyShaftScale");
static const V lit33("maxBodyShaftScale");
static const V lit34("maxShaftAngle");
static const V lit35("maxShaftVelocity");
static const V lit36("configReadInterval");
static const V lit37("gearInputContract");
static const V lit38("original");
static const V lit39("fallbackPeakTorqueNm");
static const V lit40("fallbackRedlineRpm");
static const V lit41("engineBrakeTorqueNm");
static const V lit42("drivelineEfficiency");
static const V lit43("clutchTorqueCapacityNm");
static const V lit44("clutchSlipLossGain");
static const V lit45("normalizedTorqueReferenceNm");
static const V lit46("maxEngineTorqueNm");
static const V lit47("maxDiffInputTorqueNm");
static const V lit48("maxWheelTorqueNm");
static const V lit49("torqueNmTau");
static const V lit50("defaultFinalRatio");
static const V lit51("defaultGearRatio1");
static const V lit52("defaultGearRatio2");
static const V lit53("defaultGearRatio3");
static const V lit54("defaultGearRatio4");
static const V lit55("defaultGearRatio5");
static const V lit56("defaultGearRatio6");
static const V lit57("minGearRatioAbs");
static const V lit58("usePowerLut");
static const V lit59("minDt");
static const V lit60("maxDt");
static const V lit61("debugStoreInterval");
static const V lit62("bodyReadInterval");
static const V lit63("status");
static const V lit64("INIT");
static const V lit65("updateCount");
static const V lit66("rawRPM");
static const V lit67("filteredRPM");
static const V lit68("gas");
static const V lit69("brake");
static const V lit70("clutchInput");
static const V lit71("clutch");
static const V lit72("gear");
static const V lit73("prevGear");
static const V lit74("engineTorque");
static const V lit75("transmittedTorque");
static const V lit76("driveTorque");
static const V lit77("engineTorqueNm");
static const V lit78("clutchTorqueNm");
static const V lit79("gearboxOutputTorqueNm");
static const V lit80("diffInputTorqueNm");
static const V lit81("wheelDriveTorqueNm");
static const V lit82("normalizedTorqueFromNm");
static const V lit83("gearRatio");
static const V lit84("finalRatio");
static const V lit85("peakTorqueNm");
static const V lit86("redlineRpm");
static const V lit87("configLoaded");
static const V lit88("configSource");
static const V lit89("UNLOADED");
static const V lit90("configStatus");
static const V lit91("configWarning");
static const V lit92("NONE");
static const V lit93("configPath");
static const V lit94("");
static const V lit95("carId");
static const V lit96("drivetrainType");
static const V lit97("UNKNOWN");
static const V lit98("gearCount");
static const V lit99("gearRatios");
static const V lit100("powerLut");
static const V lit101("powerLutLoaded");
static const V lit102("configReadTimer");
static const V lit103("shaftAngle");
static const V lit104("shaftVelocity");
static const V lit105("lashState");
static const V lit106("shiftShock");
static const V lit107("shiftStress");
static const V lit108("gearboxHeat");
static const V lit109("lsdResistance");
static const V lit110("lsdLock");
static const V lit111("lsdDiff");
static const V lit112("hopShock");
static const V lit113("contactShock");
static const V lit114("contactLoss");
static const V lit115("contactQualityRear");
static const V lit116("contactTrustRear");
static const V lit117("loadRL");
static const V lit118("loadRR");
static const V lit119("loadDiff");
static const V lit120("loadLoss");
static const V lit121("controlArmTotal");
static const V lit122("armTwistLoss");
static const V lit123("bodySteer");
static const V lit124("flexEnergy");
static const V lit125("flexRelease");
static const V lit126("bodyRigidity");
static const V lit127("bodyFlexFactor");
static const V lit128("bodyTorsionFactor");
static const V lit129("bodyDampingFactor");
static const V lit130("bodyLashScale");
static const V lit131("bodyShaftScale");
static const V lit132("bodyLinked");
static const V lit133("bodyReadTimer");
static const V lit134("finalTorqueScale");
static const V lit135("linkedLSD");
static const V lit136("linkedContact");
static const V lit137("linkedBody");
static const V lit138("linkedArm");
static const V lit139("linkedHop");
static const V lit140("linkedLoad");
static const V lit141("debugStoreTimer");
static const V lit142("debugStoreNow");
static const V lit143("state");
static const V lit144("debug");
static const V lit145("huge");
static const V lit146("max");
static const V lit147("safeField");
static const V lit148("safeLoadRaw");
static const V lit149("safeStore");
static const V lit150("getCar");
static const V lit151("^%s+");
static const V lit152("%s+$");
static const V lit153(";");
static const V lit154("#");
static const V lit155("min");
static const V lit156("open");
static const V lit157("r");
static const V lit158("*a");
static const V lit159("[^\r\n]+");
static const V lit160("^%[([^%]]+)%]$");
static const V lit161("^([^=]+)=(.*)$");
static const V lit162("getCarConfig");
static const V lit163("getFolder");
static const V lit164("\\");
static const V lit165("/");
static const V lit166("getCarID");
static const V lit167("([^/]+)$");
static const V lit168("FolderID");
static const V lit169("ContentCars");
static const V lit170("Root");
static const V lit171("AC");
static const V lit172("AssettoCorsa");
static const V lit173("content");
static const V lit174("cars");
static const V lit175("content/cars");
static const V lit176("../content/cars");
static const V lit177("../../content/cars");
static const V lit178("../../../content/cars");
static const V lit179("|");
static const V lit180(" ");
static const V lit181(",");
static const V lit182("([%-%d%.]+)%s+([%-%d%.]+)");
static const V lit183("rpm");
static const V lit184("torque");
static const V lit185("sort");
static const V lit186("floor");
static const V lit187("validated_gears_v1");
static const V lit188("Undeclared validated gear");
static const V lit189("number");
static const V lit190("abs");
static const V lit191("Validated gear ratio unavailable");
static const V lit192("Invalid drivetrain gear input contract");
static const V lit193("loadedGearInputContract");
static const V lit194("Validated gear car identity unavailable");
static const V lit195("FALLBACK");
static const V lit196("NO CAR ID");
static const V lit197("CAR ID UNAVAILABLE");
static const V lit198("DEFAULTS");
static const V lit199("USING FALLBACK DRIVETRAIN");
static const V lit200("GEARS");
static const V lit201("FINAL");
static const V lit202("AC_CONFIG");
static const V lit203("READ VIA ac.getCarConfig");
static const V lit204("COUNT");
static const V lit205("GEAR_");
static const V lit206("GEAR_R");
static const V lit207("DRIVETRAIN");
static const V lit208("TYPE");
static const V lit209("Validated GEARS input unavailable: ");
static const V lit210("Invalid validated GEARS range");
static const V lit211("Invalid validated reverse ratio");
static const V lit212("Invalid validated forward ratio");
static const V lit213("VALIDATED_GEARS_V1");
static const V lit214("HOST GEARS; ENGINE FILES INDEPENDENT");
static const V lit215("data/drivetrain.ini");
static const V lit216("INI");
static const V lit217("READ drivetrain.ini");
static const V lit218("data/engine.ini");
static const V lit219("power.lut");
static const V lit220("ENGINE_DATA");
static const V lit221("LIMITER");
static const V lit222("HEADER");
static const V lit223("POWER_CURVE");
static const V lit224("MAX_TORQUE");
static const V lit225("data/");
static const V lit226("data/power.lut");
static const V lit227("FALLBACK RATIOS");
static const V lit228("GEAR RATIOS NOT READ");
static const V lit229("Invalid validated gear selection");
static const V lit230("ngp_body_rigidity");
static const V lit231("ngp_body_flex_factor");
static const V lit232("ngp_body_torsion_factor");
static const V lit233("ngp_body_damping_factor");
static const V lit234("ngp_body_rigidity_update_count");
static const V lit235("ngp_wheel_load_");
static const V lit236("ngp_contact_load_");
static const V lit237("ngp_tire_state_load_");
static const V lit238("ngp_sprung_load_");
static const V lit239("ngp_dlt_load_");
static const V lit240("ngp_contact_loss_");
static const V lit241("ngp_tire_contact_loss_");
static const V lit242("ngp_tcr_contact_loss_");
static const V lit243("ngp_contact_quality_");
static const V lit244("ngp_contact_trust_");
static const V lit245("ngp_tcr_quality_");
static const V lit246("ngp_tc_contact_");
static const V lit247("ngp_tire_contact_");
static const V lit248("ngp_body_steer");
static const V lit249("ngp_chassis_flex_energy");
static const V lit250("ngp_flex_energy");
static const V lit251("ngp_chassis_flex_release");
static const V lit252("ngp_flex_release");
static const V lit253("ngp_control_arm_total");
static const V lit254("ngp_arm_total");
static const V lit255("ngp_lsd_lock");
static const V lit256("ngp_diff_lock");
static const V lit257("ngp_lsd_diff");
static const V lit258("ngp_diff_diff");
static const V lit259("ngp_contact_trust_2");
static const V lit260("ngp_contact_trust_3");
static const V lit261("ngp_susp_road_impulse_2");
static const V lit262("ngp_sci_impulse_2");
static const V lit263("ngp_damper_road_memory_2");
static const V lit264("ngp_susp_road_impulse_3");
static const V lit265("ngp_sci_impulse_3");
static const V lit266("ngp_damper_road_memory_3");
static const V lit267("ngp_tire_hop_energy_2");
static const V lit268("ngp_tirehop_2");
static const V lit269("ngp_tire_hop_2");
static const V lit270("ngp_drive_hop_shock_2");
static const V lit271("ngp_tire_hop_energy_3");
static const V lit272("ngp_tirehop_3");
static const V lit273("ngp_tire_hop_3");
static const V lit274("ngp_drive_hop_shock_3");
static const V lit275("ngp_drivetrain_status");
static const V lit276("ngp_drivetrain_update_count");
static const V lit277("ngp_drive_torque");
static const V lit278("ngp_drivetrain_torque");
static const V lit279("ngp_dt_torque");
static const V lit280("ngp_diff_input_torque_nm");
static const V lit281("ngp_drivetrain_diff_input_torque_nm");
static const V lit282("ngp_drive_torque_nm");
static const V lit283("ngp_engine_torque_nm");
static const V lit284("ngp_clutch_torque_nm");
static const V lit285("ngp_gearbox_output_torque_nm");
static const V lit286("ngp_wheel_drive_torque_nm");
static const V lit287("ngp_drive_torque_normalized_from_nm");
static const V lit288("ngp_drive_engine_torque");
static const V lit289("ngp_drive_transmitted_torque");
static const V lit290("ngp_drive_rpm_filtered");
static const V lit291("ngp_drive_rpm_raw");
static const V lit292("ngp_shaft_twist");
static const V lit293("ngp_shaft_velocity");
static const V lit294("ngp_drive_lash");
static const V lit295("ngp_drive_lash_state");
static const V lit296("ngp_drive_lsd_lock");
static const V lit297("ngp_lsd_resistance");
static const V lit298("ngp_shift_shock");
static const V lit299("ngp_shift_stress");
static const V lit300("ngp_gearbox_heat");
static const V lit301("ngp_drive_hop_shock");
static const V lit302("ngp_drive_contact_loss");
static const V lit303("ngp_drive_contact_shock");
static const V lit304("ngp_drive_load_loss");
static const V lit305("ngp_drive_arm_twist_loss");
static const V lit306("ngp_drive_final_torque_scale");
static const V lit307("ngp_drive_gear");
static const V lit308("ngp_drive_gear_ratio");
static const V lit309("ngp_drive_final_ratio");
static const V lit310("ngp_drive_clutch");
static const V lit311("ngp_drive_clutch_input");
static const V lit312("ngp_drive_gas");
static const V lit313("ngp_drive_brake");
static const V lit314("ngp_drive_peak_torque_nm");
static const V lit315("ngp_drive_engine_brake_torque_nm");
static const V lit316("ngp_drive_power_lut_loaded");
static const V lit317("ngp_drive_config_source");
static const V lit318("ngp_drive_config_status");
static const V lit319("ngp_drive_config_warning");
static const V lit320("ngp_drive_config_path");
static const V lit321("ngp_drive_car_id");
static const V lit322("ngp_drive_type");
static const V lit323("ngp_drive_body_linked");
static const V lit324("ngp_drive_body_lash_scale");
static const V lit325("ngp_drive_body_shaft_scale");
static const V lit326("ngp_drive_link_lsd");
static const V lit327("ngp_drive_link_contact");
static const V lit328("ngp_drive_link_body");
static const V lit329("ngp_drive_link_arm");
static const V lit330("ngp_drive_link_hop");
static const V lit331("ngp_drive_link_load");
static const V lit332("ngp_drive_load_rl");
static const V lit333("ngp_drive_load_rr");
static const V lit334("ngp_drive_load_diff");
static const V lit335("ngp_drive_contact_quality_rear");
static const V lit336("ngp_drive_contact_trust_rear");
static const V lit337("ngp_drive_flex_energy");
static const V lit338("ngp_drive_flex_release");
static const V lit339("ngp_drive_control_arm_total");
static const V lit340("init");
static const V lit341("update");
static const V lit342("BAD DT");
static const V lit343("NO CAR");
static const V lit344("RUNNING");
static const V lit345("getDriveTorque");
static const V lit346("getDiffInputTorqueNm");
static const V lit347("getShaftTwist");
static const V lit348("getShaftVelocity");
static const V lit349("getClutch");
static const V lit350("getGearboxHeat");
static const V lit351("getLash");
static const V lit352("getFinalTorqueScale");
static const V lit353("getState");
static const V lit354("debugStr");
static const V lit355("format");
static const V lit356("Status %s / Count %.0f / Config %s\n");
static const V lit357("RPM %.0f -> %.0f / Gear %.0f GR %.3f Final %.3f\n");
static const V lit358("Gas %.3f Brake %.3f / Clutch %.3f / Type %s\n");
static const V lit359("Norm Engine %.3f / Trans %.3f / Drive %.3f Scale %.2f\n");
static const V lit360("Nm Engine %.0f / Clutch %.0f / DiffTin %.0f / Wheel %.0f\n");
static const V lit361("Shaft %.3f Vel %.3f / Lash %.3f\n");
static const V lit362("Shift %.3f Stress %.3f Heat %.1f\n");
static const V lit363("LSD %.3f Hop %.3f Contact %.3f Arm %.3f Body:%s");
static const V lit364("NIL");
static const V lit365("YES");
static const V lit366("NO");
V load_drivetrain(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(55);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(0.08));set(z,lit3,V(0.12));set(z,lit4,V(0.08));set(z,lit5,V(0.04));set(z,lit6,V(18.0));set(z,lit7,V(2.0));set(z,lit8,V(0.15));set(z,lit9,V(0.015));set(z,lit10,V(0.22));set(z,lit11,V(5.0));set(z,lit12,V(0.1));set(z,lit13,V(0.15));set(z,lit14,V(5000.0));set(z,lit15,V(0.12));set(z,lit16,V(20.0));set(z,lit17,V(0.0025));set(z,lit18,V(0.1));set(z,lit19,V(0.08));set(z,lit20,V(0.08));set(z,lit21,V(2400.0));set(z,lit22,V(3000.0));set(z,lit23,V(0.1));set(z,lit24,V(0.08));set(z,lit25,V(0.06));set(z,lit26,V(0.22));set(z,lit27,V(0.16));set(z,lit28,V(0.08));set(z,lit29,V(0.06));set(z,lit30,V(0.86));set(z,lit31,V(1.24));set(z,lit32,V(0.84));set(z,lit33,V(1.22));set(z,lit34,V(2.5));set(z,lit35,V(12.0));set(z,lit36,V(1.0));set(z,lit37,lit38);set(z,lit39,V(360.0));set(z,lit40,V(7200.0));set(z,lit41,V(70.0));set(z,lit42,V(0.92));set(z,lit43,V(520.0));set(z,lit44,V(0.18));set(z,lit45,V(1200.0));set(z,lit46,V(1400.0));set(z,lit47,V(22000.0));set(z,lit48,V(12000.0));set(z,lit49,V(0.035));set(z,lit50,V(4.1));set(z,lit51,V(3.2));set(z,lit52,V(2.1));set(z,lit53,V(1.5));set(z,lit54,V(1.15));set(z,lit55,V(0.9));set(z,lit56,V(0.75));set(z,lit57,V(0.001));set(z,lit58,V(true));set(z,lit59,V(0.0005));set(z,lit60,V(0.1));set(z,lit61,V(0.25));set(z,lit62,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit63,lit64);set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(1.0));set(z,lit71,V(1.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit41,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(4.1));set(z,lit42,V(0.92));set(z,lit85,V(360.0));set(z,lit86,V(7200.0));set(z,lit87,V(false));set(z,lit88,lit89);set(z,lit90,lit64);set(z,lit91,lit92);set(z,lit93,lit94);set(z,lit95,lit94);set(z,lit96,lit97);set(z,lit98,V(0.0));set(z,lit99,([&](){V z=table();return z;})());set(z,lit100,([&](){V z=table();return z;})());set(z,lit101,V(false));set(z,lit102,V(999.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(20.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(1.0));set(z,lit116,V(1.0));set(z,lit117,V(3000.0));set(z,lit118,V(3000.0));set(z,lit119,V(0.0));set(z,lit120,V(0.0));set(z,lit121,V(0.0));set(z,lit122,V(0.0));set(z,lit123,V(0.0));set(z,lit124,V(0.0));set(z,lit125,V(0.0));set(z,lit126,V(1.0));set(z,lit127,V(1.0));set(z,lit128,V(1.0));set(z,lit129,V(1.0));set(z,lit130,V(1.0));set(z,lit131,V(1.0));set(z,lit132,V(false));set(z,lit133,V(999.0));set(z,lit134,V(1.0));set(z,lit135,V(false));set(z,lit136,V(false));set(z,lit137,V(false));set(z,lit138,V(false));set(z,lit139,V(false));set(z,lit140,V(false));set(z,lit141,V(999.0));set(z,lit142,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit143)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit144)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,1),V());return !truth(t10)?ne(e->slot(0,1),e->slot(0,1)):t10;})();return !truth(t9)?eq(e->slot(0,1),get(e->get("math"),lit145)):t9;})();return !truth(t8)?eq(e->slot(0,1),V(-num(get(e->get("math"),lit145)))):t8;})())){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t11=first(call(e->slot(1,3),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t11);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
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
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
return Args{([&](){V t15=([&](){V t16=lt(e->slot(0,0),V(0.0));return truth(t16)?V(-num(e->slot(0,0))):t16;})();return !truth(t15)?e->slot(0,0):t15;})()};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t17=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t17));}
if(truth(gt(e->slot(0,0),V(1e-06)))){return Args{V(1.0)};
}
if(truth(lt(e->slot(0,0),V(-num(V(1e-06)))))){return Args{V(-num(V(1.0)))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t18=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t18));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t19=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t19));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t20=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t20));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t21=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t21));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
{V t22=first(call(e->slot(1,5),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit146),Args{add(e->slot(0,2),e->slot(0,3)),V(1e-06)}))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t22);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
{V t23=get(e->slot(0,0),lit147);e->slot(0,9)=std::move(t23);}
{V t24=get(e->slot(0,0),lit148);e->slot(0,10)=std::move(t24);}
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t25=first(call(e->slot(1,10),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t25);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t26=e->slot(0,1);return !truth(t26)?V(0.0):t26;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t27=e->slot(0,1);return !truth(t27)?V(0.0):t27;})()});
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t28=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t28);}
{double t29=num(V(1.0)),t30=num(length(e->slot(0,1))),t31=num(V(1.0));for(double t32=t29;(t31>0?t32<=t30:t32>=t30);t32+=t31){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t32);{V t33=first(call(e->slot(2,10),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t33);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t34=e->slot(1,0);return !truth(t34)?V(0.0):t34;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t35=e->slot(0,0);return !truth(t35)?V(0.0):t35;})(),V()};
return Args{};});
{V t36=get(e->slot(0,0),lit149);e->slot(0,13)=std::move(t36);}
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);return call(get(e->slot(1,0),lit149),joined(Args{e->slot(0,0)},call(e->get("tostring"),Args{([&](){V t37=e->slot(0,1);return !truth(t37)?lit94:t37;})()})));
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t38=V(!truth(e->get("ac")));return !truth(t38)?V(!truth(get(e->get("ac"),lit150))):t38;})())){return Args{V()};
}
{Args t39=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit150),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t39,0);e->slot(0,1)=arg(t39,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit141)};V t40=add(([&](){V t41=get(e->slot(1,2),lit141);return !truth(t41)?V(0.0):t41;})(),([&](){V t42=e->slot(0,0);return !truth(t42)?V(0.0):t42;})());refs[0].put(std::move(t40));}
if(truth(ge(get(e->slot(1,2),lit141),get(get(e->slot(1,1),lit1),lit61)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit141)};V t43=V(0.0);refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit142)};V t44=V(true);refs[0].put(std::move(t44));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit142)};V t45=V(false);refs[0].put(std::move(t45));}
}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t46=first(call(e->get("tostring"),Args{([&](){V t47=e->slot(0,0);return !truth(t47)?lit94:t47;})()}));e->slot(0,1)=std::move(t46);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t48=first(method(e->slot(0,1),"gsub",Args{lit151,lit94}));refs[0].put(std::move(t48));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t49=first(method(e->slot(0,1),"gsub",Args{lit152,lit94}));refs[0].put(std::move(t49));}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{V t50=first(call(e->get("tostring"),Args{([&](){V t51=e->slot(0,0);return !truth(t51)?lit94:t51;})()}));e->slot(0,1)=std::move(t50);}
{V t52=first(method(e->slot(0,1),"find",Args{lit153,V(1.0),V(true)}));e->slot(0,2)=std::move(t52);}
{V t53=first(method(e->slot(0,1),"find",Args{lit154,V(1.0),V(true)}));e->slot(0,3)=std::move(t53);}
{V t54=V();e->slot(0,4)=std::move(t54);}
if(truth(([&](){V t55=e->slot(0,2);return truth(t55)?e->slot(0,3):t55;})())){{std::array<Ref,1> refs{Ref(e,0,4)};V t56=first(call(get(e->get("math"),lit155),Args{e->slot(0,2),e->slot(0,3)}));refs[0].put(std::move(t56));}
}else{{std::array<Ref,1> refs{Ref(e,0,4)};V t57=([&](){V t58=e->slot(0,2);return !truth(t58)?e->slot(0,3):t58;})();refs[0].put(std::move(t57));}
}
if(truth(e->slot(0,4))){{std::array<Ref,1> refs{Ref(e,0,1)};V t59=first(method(e->slot(0,1),"sub",Args{V(1.0),sub(e->slot(0,4),V(1.0))}));refs[0].put(std::move(t59));}
}
return call(e->slot(1,17),Args{e->slot(0,1)});
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(([&](){V t60=([&](){V t61=([&](){V t62=V(!truth(e->get("io")));return !truth(t62)?V(!truth(get(e->get("io"),lit156))):t62;})();return !truth(t61)?V(!truth(e->slot(0,0))):t61;})();return !truth(t60)?eq(e->slot(0,0),lit94):t60;})())){return Args{V()};
}
{Args t63=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t64=first(call(get(e->get("io"),lit156),Args{e->slot(1,0),lit157}));e->slot(0,0)=std::move(t64);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t65=first(method(e->slot(0,0),"read",Args{lit158}));e->slot(0,1)=std::move(t65);}
method(e->slot(0,0),"close",Args{});
return Args{e->slot(0,1)};
return Args{};})});e->slot(0,1)=arg(t63,0);e->slot(0,2)=arg(t63,1);}
if(truth(e->slot(0,1))){return Args{e->slot(0,2)};
}
return Args{V()};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t66=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t66);}
{V t67=lit94;e->slot(0,2)=std::move(t67);}
if(truth(V(!truth(e->slot(0,0))))){return Args{e->slot(0,1)};
}
{Args t68=method(first(call(e->get("tostring"),Args{e->slot(0,0)})),"gmatch",Args{lit159});V t69=arg(t68,2);while(true){Args t70=call(arg(t68,0),Args{arg(t68,1),t69});t69=arg(t70,0);if(isnil(t69))break;auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=arg(t70,0);{V t71=first(call(e->slot(2,18),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t71);}
if(truth(ne(e->slot(0,1),lit94))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t72=first(method(e->slot(1,1),"match",Args{lit160}));e->slot(0,0)=std::move(t72);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,2,2)};V t73=first(method(first(call(e->slot(3,17),Args{e->slot(0,0)})),"upper",Args{}));refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(2,1),e->slot(2,2))};V t74=([&](){V t75=get(e->slot(2,1),e->slot(2,2));return !truth(t75)?([&](){V z=table();return z;})():t75;})();refs[0].put(std::move(t74));}
}else{auto parent=e;Env storage(parent,false,2);auto e=&storage;{Args t76=method(e->slot(2,1),"match",Args{lit161});e->slot(0,0)=arg(t76,0);e->slot(0,1)=arg(t76,1);}
if(truth(([&](){V t77=([&](){V t78=e->slot(0,0);return truth(t78)?e->slot(0,1):t78;})();return truth(t77)?ne(e->slot(3,2),lit94):t77;})())){{std::array<Ref,1> refs{Ref(e->slot(3,1),e->slot(3,2))};V t79=([&](){V t80=get(e->slot(3,1),e->slot(3,2));return !truth(t80)?([&](){V z=table();return z;})():t80;})();refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(get(e->slot(3,1),e->slot(3,2)),first(method(first(call(e->slot(4,17),Args{e->slot(0,0)})),"upper",Args{})))};V t81=first(call(e->slot(4,17),Args{e->slot(0,1)}));refs[0].put(std::move(t81));}
}
}
}
}}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,1)};V t82=first(method(first(call(e->get("tostring"),Args{([&](){V t83=e->slot(0,1);return !truth(t83)?lit94:t83;})()})),"upper",Args{}));refs[0].put(std::move(t82));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t84=first(method(first(call(e->get("tostring"),Args{([&](){V t85=e->slot(0,2);return !truth(t85)?lit94:t85;})()})),"upper",Args{}));refs[0].put(std::move(t84));}
if(truth(([&](){V t86=([&](){V t87=e->slot(0,0);return truth(t87)?get(e->slot(0,0),e->slot(0,1)):t87;})();return truth(t86)?ne(get(get(e->slot(0,0),e->slot(0,1)),e->slot(0,2)),V()):t86;})())){return call(e->get("tostring"),Args{get(get(e->slot(0,0),e->slot(0,1)),e->slot(0,2))});
}
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t88=first(call(e->slot(1,21),Args{e->slot(0,0),e->slot(0,1),e->slot(0,2),V()}));e->slot(0,4)=std::move(t88);}
{V t89=first(call(e->slot(1,3),Args{e->slot(0,4)}));e->slot(0,5)=std::move(t89);}
if(truth(eq(e->slot(0,5),V()))){return Args{e->slot(0,3)};
}
return Args{e->slot(0,5)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(([&](){V t90=V(!truth(e->get("ac")));return !truth(t90)?V(!truth(get(e->get("ac"),lit162))):t90;})())){return Args{e->slot(0,2)};
}
{Args t91=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit162),Args{V(0.0),e->slot(1,0),e->slot(1,1),e->slot(1,2)});
return Args{};})});e->slot(0,3)=arg(t91,0);e->slot(0,4)=arg(t91,1);}
if(truth(([&](){V t92=e->slot(0,3);return truth(t92)?ne(e->slot(0,4),V()):t92;})())){return Args{e->slot(0,4)};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t93=first(call(e->slot(1,23),Args{e->slot(0,0),e->slot(0,1),V()}));e->slot(0,3)=std::move(t93);}
{V t94=first(call(e->slot(1,3),Args{e->slot(0,3)}));e->slot(0,4)=std::move(t94);}
if(truth(eq(e->slot(0,4),V()))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,4)};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(([&](){V t95=([&](){V t96=V(!truth(e->get("ac")));return !truth(t96)?V(!truth(get(e->get("ac"),lit163))):t96;})();return !truth(t95)?eq(e->slot(0,0),V()):t95;})())){return Args{V()};
}
{Args t97=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit163),Args{e->slot(1,0)});
return Args{};})});e->slot(0,1)=arg(t97,0);e->slot(0,2)=arg(t97,1);}
if(truth(([&](){V t98=e->slot(0,1);return truth(t98)?ne(e->slot(0,2),V()):t98;})())){return call(e->get("tostring"),Args{e->slot(0,2)});
}
return Args{V()};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t99=V(!truth(e->slot(0,0)));return !truth(t99)?eq(e->slot(0,0),lit94):t99;})())){return call(e->get("tostring"),Args{([&](){V t100=e->slot(0,1);return !truth(t100)?lit94:t100;})()});
}
{V t101=first(method(first(call(e->get("tostring"),Args{e->slot(0,0)})),"gsub",Args{lit164,lit165}));e->slot(0,2)=std::move(t101);}
if(truth(eq(first(method(e->slot(0,2),"sub",Args{V(-num(V(1.0)))})),lit165))){return Args{concat(e->slot(0,2),first(call(e->get("tostring"),Args{([&](){V t102=e->slot(0,1);return !truth(t102)?lit94:t102;})()})))};
}
return Args{concat(e->slot(0,2),concat(lit165,first(call(e->get("tostring"),Args{([&](){V t103=e->slot(0,1);return !truth(t103)?lit94:t103;})()}))))};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);{V t104=V();e->slot(0,1)=std::move(t104);}
if(truth(([&](){V t105=e->get("ac");return truth(t105)?get(e->get("ac"),lit166):t105;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t106=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit166),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t106,0);e->slot(0,1)=arg(t106,1);}
if(truth(([&](){V t107=e->slot(0,0);return truth(t107)?ne(e->slot(0,1),V()):t107;})())){{std::array<Ref,1> refs{Ref(e,1,1)};V t108=first(call(e->get("tostring"),Args{e->slot(0,1)}));refs[0].put(std::move(t108));}
}
}
if(truth(([&](){V t109=V(!truth(e->slot(0,1)));return !truth(t109)?eq(e->slot(0,1),lit94):t109;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t110=first(call(e->get("tostring"),Args{([&](){V t111=lit94;return !truth(t111)?lit94:t111;})()}));refs[0].put(std::move(t110));}
}
if(truth(([&](){V t112=V(!truth(e->slot(0,1)));return !truth(t112)?eq(e->slot(0,1),lit94):t112;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t113=first(call(e->get("tostring"),Args{([&](){V t114=lit94;return !truth(t114)?lit94:t114;})()}));refs[0].put(std::move(t113));}
}
if(truth(([&](){V t115=V(!truth(e->slot(0,1)));return !truth(t115)?eq(e->slot(0,1),lit94):t115;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t116=first(call(e->get("tostring"),Args{([&](){V t117=lit94;return !truth(t117)?lit94:t117;})()}));refs[0].put(std::move(t116));}
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t118=first(method(first(call(e->get("tostring"),Args{([&](){V t119=e->slot(0,1);return !truth(t119)?lit94:t119;})()})),"gsub",Args{lit164,lit165}));refs[0].put(std::move(t118));}
{V t120=first(method(e->slot(0,1),"match",Args{lit167}));e->slot(0,2)=std::move(t120);}
return Args{([&](){V t121=e->slot(0,2);return !truth(t121)?e->slot(0,1):t121;})()};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t122=([&](){V z=table();return z;})();e->slot(0,2)=std::move(t122);}
{std::array<Ref,1> refs{Ref(e,0,0)};V t123=first(call(e->get("tostring"),Args{([&](){V t124=e->slot(0,0);return !truth(t124)?lit94:t124;})()}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t125=first(call(e->get("tostring"),Args{([&](){V t126=e->slot(0,1);return !truth(t126)?lit94:t126;})()}));refs[0].put(std::move(t125));}
if(truth(eq(e->slot(0,0),lit94))){return Args{e->slot(0,2)};
}
if(truth(([&](){V t127=e->get("ac");return truth(t127)?get(e->get("ac"),lit168):t127;})())){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t128=first(call(e->slot(2,25),Args{get(get(e->get("ac"),lit168),lit169)}));e->slot(0,0)=std::move(t128);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e->slot(1,2),add(length(e->slot(1,2)),V(1.0)))};V t129=first(call(e->slot(2,26),Args{first(call(e->slot(2,26),Args{e->slot(0,0),e->slot(1,0)})),e->slot(1,1)}));refs[0].put(std::move(t129));}
}
{V t130=first(call(e->slot(2,25),Args{([&](){V t131=([&](){V t132=get(get(e->get("ac"),lit168),lit170);return !truth(t132)?get(get(e->get("ac"),lit168),lit171):t132;})();return !truth(t131)?get(get(e->get("ac"),lit168),lit172):t131;})()}));e->slot(0,1)=std::move(t130);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e->slot(1,2),add(length(e->slot(1,2)),V(1.0)))};V t133=first(call(e->slot(2,26),Args{first(call(e->slot(2,26),Args{first(call(e->slot(2,26),Args{first(call(e->slot(2,26),Args{e->slot(0,1),lit173})),lit174})),e->slot(1,0)})),e->slot(1,1)}));refs[0].put(std::move(t133));}
}
}
{std::array<Ref,1> refs{Ref(e->slot(0,2),add(length(e->slot(0,2)),V(1.0)))};V t134=first(call(e->slot(1,26),Args{first(call(e->slot(1,26),Args{lit175,e->slot(0,0)})),e->slot(0,1)}));refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),add(length(e->slot(0,2)),V(1.0)))};V t135=first(call(e->slot(1,26),Args{first(call(e->slot(1,26),Args{lit176,e->slot(0,0)})),e->slot(0,1)}));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),add(length(e->slot(0,2)),V(1.0)))};V t136=first(call(e->slot(1,26),Args{first(call(e->slot(1,26),Args{lit177,e->slot(0,0)})),e->slot(0,1)}));refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(0,2),add(length(e->slot(0,2)),V(1.0)))};V t137=first(call(e->slot(1,26),Args{first(call(e->slot(1,26),Args{lit178,e->slot(0,0)})),e->slot(0,1)}));refs[0].put(std::move(t137));}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{double t138=num(V(1.0)),t139=num(length(e->slot(0,0))),t140=num(V(1.0));for(double t141=t138;(t140>0?t141<=t139:t141>=t139);t141+=t140){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t141);{V t142=first(call(e->slot(2,19),Args{get(e->slot(1,0),e->slot(0,0))}));e->slot(0,1)=std::move(t142);}
if(truth(([&](){V t143=e->slot(0,1);return truth(t143)?ne(e->slot(0,1),lit94):t143;})())){return Args{e->slot(0,1),get(e->slot(1,0),e->slot(0,0))};
}
}}
return Args{V(),lit94};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);e->slot(0,0)=arg(a,0);{V t144=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t144);}
if(truth(V(!truth(e->slot(0,0))))){return Args{e->slot(0,1)};
}
{Args t145=method(first(call(e->get("tostring"),Args{e->slot(0,0)})),"gmatch",Args{lit159});V t146=arg(t145,2);while(true){Args t147=call(arg(t145,0),Args{arg(t145,1),t146});t146=arg(t147,0);if(isnil(t146))break;auto parent=e;auto e=std::make_shared<Env>(parent,false,4);e->slot(0,0)=arg(t147,0);{V t148=first(call(e->slot(2,18),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t148);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t149=first(method(first(method(e->slot(0,1),"gsub",Args{lit179,lit180})),"gsub",Args{lit181,lit180}));refs[0].put(std::move(t149));}
{Args t150=method(e->slot(0,1),"match",Args{lit182});e->slot(0,2)=arg(t150,0);e->slot(0,3)=arg(t150,1);}
{std::array<Ref,1> refs{Ref(e,0,2)};V t151=first(call(e->get("tonumber"),Args{e->slot(0,2)}));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t152=first(call(e->get("tonumber"),Args{e->slot(0,3)}));refs[0].put(std::move(t152));}
if(truth(([&](){V t153=e->slot(0,2);return truth(t153)?e->slot(0,3):t153;})())){{std::array<Ref,1> refs{Ref(e->slot(1,1),add(length(e->slot(1,1)),V(1.0)))};V t154=([&](){V z=table();set(z,lit183,e->slot(0,2));set(z,lit184,e->slot(0,3));return z;})();refs[0].put(std::move(t154));}
}
}}
call(get(e->get("table"),lit185),Args{e->slot(0,1),native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);return Args{lt(([&](){V t155=get(e->slot(0,0),lit183);return !truth(t155)?V(0.0):t155;})(),([&](){V t156=get(e->slot(0,1),lit183);return !truth(t156)?V(0.0):t156;})())};
return Args{};})});
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t157=V(!truth(e->slot(0,0)));return !truth(t157)?eq(length(e->slot(0,0)),V(0.0)):t157;})())){return Args{V()};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t158=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t158));}
if(truth(le(e->slot(0,1),get(get(e->slot(0,0),V(1.0)),lit183)))){return Args{get(get(e->slot(0,0),V(1.0)),lit184)};
}
{V t159=get(e->slot(0,0),length(e->slot(0,0)));e->slot(0,2)=std::move(t159);}
if(truth(ge(e->slot(0,1),get(e->slot(0,2),lit183)))){return Args{get(e->slot(0,2),lit184)};
}
{double t160=num(V(1.0)),t161=num(sub(length(e->slot(0,0)),V(1.0))),t162=num(V(1.0));for(double t163=t160;(t162>0?t163<=t161:t163>=t161);t163+=t162){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t163);{V t164=get(e->slot(1,0),e->slot(0,0));e->slot(0,1)=std::move(t164);}
{V t165=get(e->slot(1,0),add(e->slot(0,0),V(1.0)));e->slot(0,2)=std::move(t165);}
if(truth(([&](){V t166=ge(e->slot(1,1),get(e->slot(0,1),lit183));return truth(t166)?le(e->slot(1,1),get(e->slot(0,2),lit183)):t166;})())){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t167=first(call(e->slot(3,5),Args{divv(sub(e->slot(2,1),get(e->slot(1,1),lit183)),first(call(get(e->get("math"),lit146),Args{sub(get(e->slot(1,2),lit183),get(e->slot(1,1),lit183)),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,0)=std::move(t167);}
return Args{add(get(e->slot(1,1),lit184),mul(sub(get(e->slot(1,2),lit184),get(e->slot(1,1),lit184)),e->slot(0,0)))};
}
}}
return Args{get(e->slot(0,2),lit184)};
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t168=first(call(get(e->get("math"),lit186),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t168));}
if(truth(eq(e->slot(0,0),V(1.0)))){return Args{get(get(e->slot(1,1),lit1),lit51)};
}
if(truth(eq(e->slot(0,0),V(2.0)))){return Args{get(get(e->slot(1,1),lit1),lit52)};
}
if(truth(eq(e->slot(0,0),V(3.0)))){return Args{get(get(e->slot(1,1),lit1),lit53)};
}
if(truth(eq(e->slot(0,0),V(4.0)))){return Args{get(get(e->slot(1,1),lit1),lit54)};
}
if(truth(eq(e->slot(0,0),V(5.0)))){return Args{get(get(e->slot(1,1),lit1),lit55)};
}
if(truth(eq(e->slot(0,0),V(6.0)))){return Args{get(get(e->slot(1,1),lit1),lit56)};
}
if(truth(lt(e->slot(0,0),V(0.0)))){return Args{V(-num(get(get(e->slot(1,1),lit1),lit51)))};
}
return Args{V(0.0)};
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(get(get(e->slot(1,1),lit1),lit37),lit187))){auto parent=e;Env storage(parent,false,1);auto e=&storage;if(truth(eq(e->slot(1,0),V(0.0)))){return Args{V(0.0)};
}
if(truth(([&](){V t169=lt(e->slot(1,0),V(-num(V(1.0))));return !truth(t169)?gt(e->slot(1,0),get(e->slot(2,2),lit98)):t169;})())){call(e->get("error"),Args{lit188});
}
{V t170=get(get(e->slot(2,2),lit99),e->slot(1,0));e->slot(0,0)=std::move(t170);}
if(truth(([&](){V t171=([&](){V t172=([&](){V t173=ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit189);return !truth(t173)?ne(e->slot(0,0),e->slot(0,0)):t173;})();return !truth(t172)?eq(first(call(get(e->get("math"),lit190),Args{e->slot(0,0)})),get(e->get("math"),lit145)):t172;})();return !truth(t171)?le(first(call(e->slot(2,6),Args{e->slot(0,0)})),get(get(e->slot(2,1),lit1),lit57)):t171;})())){call(e->get("error"),Args{lit191});
}
return Args{e->slot(0,0)};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t174=first(call(get(e->get("math"),lit186),call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})));refs[0].put(std::move(t174));}
if(truth(eq(e->slot(0,0),V(0.0)))){return Args{V(0.0)};
}
{V t175=get(get(e->slot(1,2),lit99),e->slot(0,0));e->slot(0,1)=std::move(t175);}
if(truth(([&](){V t176=ne(e->slot(0,1),V());return truth(t176)?gt(first(call(e->slot(1,6),Args{e->slot(0,1)})),get(get(e->slot(1,1),lit1),lit57)):t176;})())){return call(e->slot(1,4),Args{e->slot(0,1),V(0.0)});
}
return call(e->slot(1,32),Args{e->slot(0,0)});
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,12);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t177=get(get(e->slot(1,1),lit1),lit37);e->slot(0,2)=std::move(t177);}
if(truth(([&](){V t178=ne(e->slot(0,2),lit38);return truth(t178)?ne(e->slot(0,2),lit187):t178;})())){call(e->get("error"),Args{lit192});
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t179=add(([&](){V t180=get(e->slot(1,2),lit102);return !truth(t180)?V(999.0):t180;})(),([&](){V t181=e->slot(0,1);return !truth(t181)?V(0.0):t181;})());refs[0].put(std::move(t179));}
{V t182=first(call(e->slot(1,27),Args{e->slot(0,0)}));e->slot(0,3)=std::move(t182);}
if(truth(([&](){V t183=([&](){V t184=([&](){V t185=get(e->slot(1,2),lit87);return truth(t185)?([&](){V t186=eq(get(e->slot(1,2),lit193),e->slot(0,2));return !truth(t186)?([&](){V t187=eq(e->slot(0,2),lit38);return truth(t187)?eq(get(e->slot(1,2),lit193),V()):t187;})():t186;})():t185;})();return truth(t184)?eq(get(e->slot(1,2),lit95),e->slot(0,3)):t184;})();return truth(t183)?lt(get(e->slot(1,2),lit102),get(get(e->slot(1,1),lit1),lit36)):t183;})())){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t188=V(0.0);refs[0].put(std::move(t188));}
if(truth(eq(e->slot(0,3),lit94))){if(truth(eq(e->slot(0,2),lit187))){call(e->get("error"),Args{lit194});
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t189=lit195;refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t190=lit196;refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t191=lit197;refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t192=V(true);refs[0].put(std::move(t192));}
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t193=e->slot(0,3);refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t194=([&](){V z=table();return z;})();refs[0].put(std::move(t194));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t195=([&](){V z=table();return z;})();refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t196=V(false);refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t197=get(get(e->slot(1,1),lit1),lit50);refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t198=get(get(e->slot(1,1),lit1),lit39);refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t199=get(get(e->slot(1,1),lit1),lit40);refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t200=lit97;refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t201=lit195;refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t202=lit198;refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t203=lit199;refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t204=lit94;refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t205=V(0.0);refs[0].put(std::move(t205));}
{V t206=first(call(e->slot(1,24),Args{lit200,lit201,V()}));e->slot(0,4)=std::move(t206);}
if(truth(([&](){V t207=ne(e->slot(0,4),V());return truth(t207)?gt(e->slot(0,4),V(0.0)):t207;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t208=e->slot(0,4);refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t209=lit202;refs[0].put(std::move(t209));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t210=lit203;refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t211=lit92;refs[0].put(std::move(t211));}
}
{V t212=first(call(e->slot(1,24),Args{lit200,lit204,V()}));e->slot(0,5)=std::move(t212);}
if(truth(ne(e->slot(0,5),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t213=first(call(get(e->get("math"),lit186),Args{e->slot(0,5)}));refs[0].put(std::move(t213));}
}
{double t214=num(V(1.0)),t215=num(V(10.0)),t216=num(V(1.0));for(double t217=t214;(t216>0?t217<=t215:t217>=t215);t217+=t216){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);e->slot(0,0)=V(t217);{V t218=first(call(e->slot(2,24),Args{lit200,concat(lit205,e->slot(0,0)),V()}));e->slot(0,1)=std::move(t218);}
if(truth(([&](){V t219=ne(e->slot(0,1),V());return truth(t219)?gt(first(call(e->slot(2,6),Args{e->slot(0,1)})),get(get(e->slot(2,1),lit1),lit57)):t219;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit99),e->slot(0,0))};V t220=e->slot(0,1);refs[0].put(std::move(t220));}
if(truth(eq(get(e->slot(2,2),lit88),lit195))){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit88)};V t221=lit202;refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit90)};V t222=lit203;refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit91)};V t223=lit92;refs[0].put(std::move(t223));}
}
}
}}
{V t224=first(call(e->slot(1,24),Args{lit200,lit206,V()}));e->slot(0,6)=std::move(t224);}
if(truth(([&](){V t225=ne(e->slot(0,6),V());return truth(t225)?gt(first(call(e->slot(1,6),Args{e->slot(0,6)})),get(get(e->slot(1,1),lit1),lit57)):t225;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit99),V(-num(V(1.0))))};V t226=e->slot(0,6);refs[0].put(std::move(t226));}
}
{V t227=first(call(e->slot(1,23),Args{lit207,lit208,V()}));e->slot(0,7)=std::move(t227);}
if(truth(ne(e->slot(0,7),V()))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t228=first(call(e->get("tostring"),Args{e->slot(0,7)}));refs[0].put(std::move(t228));}
}
if(truth(eq(e->slot(0,2),lit187))){auto parent=e;auto e=std::make_shared<Env>(parent,false,4);e->slot(0,0)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t229=first(call(e->slot(3,23),Args{lit200,e->slot(0,0),V()}));e->slot(0,1)=std::move(t229);}
if(truth(([&](){V t230=([&](){V t231=ne(first(call(e->get("type"),Args{e->slot(0,1)})),lit189);return !truth(t231)?ne(e->slot(0,1),e->slot(0,1)):t231;})();return !truth(t230)?eq(first(call(get(e->get("math"),lit190),Args{e->slot(0,1)})),get(e->get("math"),lit145)):t230;})())){call(e->get("error"),Args{concat(lit209,e->slot(0,0))});
}
return Args{e->slot(0,1)};
return Args{};});
{Args t232=joined(Args{first(call(e->slot(0,0),Args{lit204}))},call(e->slot(0,0),Args{lit201}));e->slot(0,1)=arg(t232,0);e->slot(0,2)=arg(t232,1);}
if(truth(([&](){V t233=([&](){V t234=([&](){V t235=lt(e->slot(0,1),V(1.0));return !truth(t235)?gt(e->slot(0,1),V(10.0)):t235;})();return !truth(t234)?ne(e->slot(0,1),first(call(get(e->get("math"),lit186),Args{e->slot(0,1)}))):t234;})();return !truth(t233)?le(e->slot(0,2),V(0.0)):t233;})())){call(e->get("error"),Args{lit210});
}
{V t236=([&](){V z=table();return z;})();e->slot(0,3)=std::move(t236);}
{std::array<Ref,1> refs{Ref(e->slot(0,3),V(-num(V(1.0))))};V t237=first(call(e->slot(0,0),Args{lit206}));refs[0].put(std::move(t237));}
if(truth(ge(get(e->slot(0,3),V(-num(V(1.0)))),V(-num(get(get(e->slot(2,1),lit1),lit57)))))){call(e->get("error"),Args{lit211});
}
{double t238=num(V(1.0)),t239=num(e->slot(0,1)),t240=num(V(1.0));for(double t241=t238;(t240>0?t241<=t239:t241>=t239);t241+=t240){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t241);{std::array<Ref,1> refs{Ref(e->slot(1,3),e->slot(0,0))};V t242=first(call(e->slot(1,0),Args{concat(lit205,e->slot(0,0))}));refs[0].put(std::move(t242));}
if(truth(le(get(e->slot(1,3),e->slot(0,0)),get(get(e->slot(3,1),lit1),lit57)))){call(e->get("error"),Args{lit212});
}
}}
{std::array<Ref,3> refs{Ref(e->slot(2,2),lit98),Ref(e->slot(2,2),lit84),Ref(e->slot(2,2),lit99)};Args t243=Args{e->slot(0,1),e->slot(0,2),e->slot(0,3)};refs[0].put(arg(t243,0));refs[1].put(arg(t243,1));refs[2].put(arg(t243,2));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit88)};V t244=lit213;refs[0].put(std::move(t244));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit90)};V t245=lit214;refs[0].put(std::move(t245));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit91)};V t246=lit92;refs[0].put(std::move(t246));}
}
{Args t247=Args{V(),V()};e->slot(0,8)=arg(t247,0);e->slot(0,9)=arg(t247,1);}
if(truth(eq(e->slot(0,2),lit38))){{std::array<Ref,2> refs{Ref(e,0,8),Ref(e,0,9)};Args t248=call(e->slot(1,29),call(e->slot(1,28),Args{e->slot(0,3),lit215}));refs[0].put(arg(t248,0));refs[1].put(arg(t248,1));}
}
if(truth(e->slot(0,8))){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{V t249=first(call(e->slot(2,20),Args{e->slot(1,8)}));e->slot(0,0)=std::move(t249);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit88)};V t250=lit216;refs[0].put(std::move(t250));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit90)};V t251=lit217;refs[0].put(std::move(t251));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit91)};V t252=lit92;refs[0].put(std::move(t252));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit93)};V t253=e->slot(1,9);refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit84)};V t254=first(call(e->slot(2,22),Args{e->slot(0,0),lit200,lit201,get(e->slot(2,2),lit84)}));refs[0].put(std::move(t254));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit98)};V t255=first(call(get(e->get("math"),lit186),call(e->slot(2,22),Args{e->slot(0,0),lit200,lit204,get(e->slot(2,2),lit98)})));refs[0].put(std::move(t255));}
{double t256=num(V(1.0)),t257=num(V(10.0)),t258=num(V(1.0));for(double t259=t256;(t258>0?t259<=t257:t259>=t257);t259+=t258){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);e->slot(0,0)=V(t259);{V t260=first(call(e->slot(3,22),Args{e->slot(1,0),lit200,concat(lit205,e->slot(0,0)),get(get(e->slot(3,2),lit99),e->slot(0,0))}));e->slot(0,1)=std::move(t260);}
if(truth(([&](){V t261=ne(e->slot(0,1),V());return truth(t261)?gt(first(call(e->slot(3,6),Args{e->slot(0,1)})),get(get(e->slot(3,1),lit1),lit57)):t261;})())){{std::array<Ref,1> refs{Ref(get(e->slot(3,2),lit99),e->slot(0,0))};V t262=e->slot(0,1);refs[0].put(std::move(t262));}
}
}}
{V t263=first(call(e->slot(2,22),Args{e->slot(0,0),lit200,lit206,get(get(e->slot(2,2),lit99),V(-num(V(1.0))))}));e->slot(0,1)=std::move(t263);}
if(truth(([&](){V t264=ne(e->slot(0,1),V());return truth(t264)?gt(first(call(e->slot(2,6),Args{e->slot(0,1)})),get(get(e->slot(2,1),lit1),lit57)):t264;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit99),V(-num(V(1.0))))};V t265=e->slot(0,1);refs[0].put(std::move(t265));}
}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit96)};V t266=first(call(e->slot(2,21),Args{e->slot(0,0),lit207,lit208,get(e->slot(2,2),lit96)}));refs[0].put(std::move(t266));}
}
{V t267=first(call(e->slot(1,29),call(e->slot(1,28),Args{e->slot(0,3),lit218})));e->slot(0,10)=std::move(t267);}
{V t268=lit219;e->slot(0,11)=std::move(t268);}
if(truth(e->slot(0,10))){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{V t269=first(call(e->slot(2,20),Args{e->slot(1,10)}));e->slot(0,0)=std::move(t269);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit86)};V t270=first(call(e->slot(2,22),joined(Args{e->slot(0,0),lit220,lit221},call(e->slot(2,22),Args{e->slot(0,0),lit222,lit221,get(e->slot(2,2),lit86)}))));refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e,1,11)};V t271=first(call(e->slot(2,21),Args{e->slot(0,0),lit222,lit223,e->slot(1,11)}));refs[0].put(std::move(t271));}
{V t272=first(call(e->slot(2,22),Args{e->slot(0,0),lit220,lit224,V()}));e->slot(0,1)=std::move(t272);}
if(truth(([&](){V t273=ne(e->slot(0,1),V());return truth(t273)?gt(e->slot(0,1),V(0.0)):t273;})())){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit85)};V t274=e->slot(0,1);refs[0].put(std::move(t274));}
}
}
if(truth(get(get(e->slot(1,1),lit1),lit58))){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);{V t275=first(call(e->slot(2,29),call(e->slot(2,28),Args{e->slot(1,3),concat(lit225,first(call(e->get("tostring"),Args{([&](){V t276=e->slot(1,11);return !truth(t276)?lit219:t276;})()})))})));e->slot(0,0)=std::move(t275);}
if(truth(V(!truth(e->slot(0,0))))){{std::array<Ref,1> refs{Ref(e,0,0)};V t277=first(call(e->slot(2,29),call(e->slot(2,28),Args{e->slot(1,3),lit226})));refs[0].put(std::move(t277));}
}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e->slot(2,2),lit100)};V t278=first(call(e->slot(2,30),Args{e->slot(0,0)}));refs[0].put(std::move(t278));}
if(truth(gt(length(get(e->slot(2,2),lit100)),V(0.0)))){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);{std::array<Ref,1> refs{Ref(e->slot(3,2),lit101)};V t279=V(true);refs[0].put(std::move(t279));}
{V t280=V(0.0);e->slot(0,0)=std::move(t280);}
{double t281=num(V(1.0)),t282=num(length(get(e->slot(3,2),lit100))),t283=num(V(1.0));for(double t284=t281;(t283>0?t284<=t282:t284>=t282);t284+=t283){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t284);{std::array<Ref,1> refs{Ref(e,1,0)};V t285=first(call(get(e->get("math"),lit146),joined(Args{e->slot(1,0)},call(e->slot(4,4),Args{get(get(get(e->slot(4,2),lit100),e->slot(0,0)),lit184),V(0.0)}))));refs[0].put(std::move(t285));}
}}
if(truth(gt(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(3,2),lit85)};V t286=e->slot(0,0);refs[0].put(std::move(t286));}
}
}
}
}
if(truth(V(!truth(get(get(e->slot(1,2),lit99),V(1.0)))))){{double t287=num(V(1.0)),t288=num(V(6.0)),t289=num(V(1.0));for(double t290=t287;(t289>0?t290<=t288:t290>=t288);t290+=t289){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t290);{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit99),e->slot(0,0))};V t291=first(call(e->slot(2,32),Args{e->slot(0,0)}));refs[0].put(std::move(t291));}
}}
{std::array<Ref,1> refs{Ref(get(e->slot(1,2),lit99),V(-num(V(1.0))))};V t292=V(-num(get(get(e->slot(1,1),lit1),lit51)));refs[0].put(std::move(t292));}
if(truth(eq(get(e->slot(1,2),lit88),lit195))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t293=lit227;refs[0].put(std::move(t293));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t294=lit228;refs[0].put(std::move(t294));}
}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t295=first(call(e->slot(1,6),call(e->slot(1,4),Args{get(e->slot(1,2),lit84),get(get(e->slot(1,1),lit1),lit50)})));refs[0].put(std::move(t295));}
if(truth(le(get(e->slot(1,2),lit84),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t296=get(get(e->slot(1,1),lit1),lit50);refs[0].put(std::move(t296));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit42)};V t297=get(get(e->slot(1,1),lit1),lit42);refs[0].put(std::move(t297));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit193)};V t298=e->slot(0,2);refs[0].put(std::move(t298));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t299=V(true);refs[0].put(std::move(t299));}
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(get(get(e->slot(1,1),lit1),lit37),lit187))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t300=first(call(e->slot(2,9),Args{e->slot(1,0),lit72,V()}));e->slot(0,0)=std::move(t300);}
if(truth(([&](){V t301=([&](){V t302=([&](){V t303=([&](){V t304=([&](){V t305=ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit189);return !truth(t305)?ne(e->slot(0,0),e->slot(0,0)):t305;})();return !truth(t304)?eq(first(call(get(e->get("math"),lit190),Args{e->slot(0,0)})),get(e->get("math"),lit145)):t304;})();return !truth(t303)?ne(e->slot(0,0),first(call(get(e->get("math"),lit186),Args{e->slot(0,0)}))):t303;})();return !truth(t302)?lt(e->slot(0,0),V(-num(V(1.0)))):t302;})();return !truth(t301)?gt(e->slot(0,0),V(10.0)):t301;})())){call(e->get("error"),Args{lit229});
}
}
return Args{([&](){V z=table();set(z,lit183,first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit183,V(0.0)})),V(0.0)})));set(z,lit68,first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit68,V(0.0)})),V(0.0)})),V(0.0),V(1.0)})));set(z,lit69,first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit69,V(0.0)})),V(0.0)})),V(0.0),V(1.0)})));set(z,lit71,first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit71,V(1.0)})),V(1.0)})),V(0.0),V(1.0)})));set(z,lit72,first(call(get(e->get("math"),lit186),call(e->slot(1,4),Args{first(call(e->slot(1,9),Args{e->slot(0,0),lit72,V(0.0)})),V(0.0)}))));return z;})()};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t306=add(([&](){V t307=get(e->slot(1,2),lit133);return !truth(t307)?V(999.0):t307;})(),([&](){V t308=e->slot(0,0);return !truth(t308)?V(0.0):t308;})());refs[0].put(std::move(t306));}
if(truth(([&](){V t309=get(e->slot(1,2),lit132);return truth(t309)?lt(get(e->slot(1,2),lit133),get(get(e->slot(1,1),lit1),lit62)):t309;})())){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t310=V(0.0);refs[0].put(std::move(t310));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t311=first(call(e->slot(1,5),Args{first(call(e->slot(1,11),Args{lit230,V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t311));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit127)};V t312=first(call(e->slot(1,5),Args{first(call(e->slot(1,11),Args{lit231,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t312));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t313=first(call(e->slot(1,5),Args{first(call(e->slot(1,11),Args{lit232,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit129)};V t314=first(call(e->slot(1,5),Args{first(call(e->slot(1,11),Args{lit233,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t315=gt(first(call(e->slot(1,11),Args{lit234,V(0.0)})),V(0.0));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit137)};V t316=get(e->slot(1,2),lit132);refs[0].put(std::move(t316));}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;if(truth(V(!truth(get(e->slot(1,2),lit132))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit130)};V t317=V(1.0);refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t318=V(1.0);refs[0].put(std::move(t318));}
return Args{};
}
{V t319=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t319);}
{V t320=first(call(e->slot(1,5),Args{sub(([&](){V t321=get(e->slot(1,2),lit127);return !truth(t321)?V(1.0):t321;})(),V(1.0)),V(0.0),V(0.8)}));e->slot(0,1)=std::move(t320);}
{V t322=first(call(e->slot(1,5),Args{sub(([&](){V t323=get(e->slot(1,2),lit128);return !truth(t323)?V(1.0):t323;})(),V(1.0)),V(0.0),V(1.0)}));e->slot(0,2)=std::move(t322);}
{V t324=first(call(e->slot(1,5),Args{sub(([&](){V t325=get(e->slot(1,2),lit129);return !truth(t325)?V(1.0):t325;})(),V(1.0)),V(0.0),V(0.8)}));e->slot(0,3)=std::move(t324);}
{V t326=first(call(e->slot(1,5),Args{sub(([&](){V t327=get(e->slot(1,2),lit126);return !truth(t327)?V(1.0):t327;})(),V(1.0)),V(0.0),V(0.35)}));e->slot(0,4)=std::move(t326);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit130)};V t328=first(call(e->slot(1,5),Args{sub(add(add(V(1.0),mul(e->slot(0,1),get(e->slot(0,0),lit26))),mul(e->slot(0,2),V(0.08))),mul(e->slot(0,4),V(0.05))),get(e->slot(0,0),lit30),get(e->slot(0,0),lit31)}));refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t329=first(call(e->slot(1,5),Args{sub(add(add(V(1.0),mul(e->slot(0,2),get(e->slot(0,0),lit27))),mul(e->slot(0,3),get(e->slot(0,0),lit28))),mul(e->slot(0,4),get(e->slot(0,0),lit29))),get(e->slot(0,0),lit32),get(e->slot(0,0),lit33)}));refs[0].put(std::move(t329));}
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t330=call(e->slot(1,12),Args{V(0.0),concat(lit235,e->slot(0,0)),concat(lit236,e->slot(0,0)),concat(lit237,e->slot(0,0)),concat(lit238,e->slot(0,0))});e->slot(0,1)=arg(t330,0);e->slot(0,2)=arg(t330,1);}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(1,6),Args{e->slot(0,1)})),V(true)};
}
{V t331=first(call(e->slot(1,10),Args{concat(lit239,e->slot(0,0))}));e->slot(0,3)=std::move(t331);}
if(truth(ne(e->slot(0,3),V()))){return Args{first(call(e->slot(1,6),Args{add(get(get(e->slot(1,1),lit1),lit22),first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)})))})),V(true)};
}
return Args{get(get(e->slot(1,1),lit1),lit22),V(false)};
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t332=call(e->slot(1,12),Args{V(0.0),concat(lit240,e->slot(0,0)),concat(lit241,e->slot(0,0)),concat(lit242,e->slot(0,0))});e->slot(0,1)=arg(t332,0);e->slot(0,2)=arg(t332,1);}
if(truth(ne(e->slot(0,2),V()))){return Args{first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0),V(1.0)})),V(true)};
}
{Args t333=call(e->slot(1,12),Args{V(1.0),concat(lit243,e->slot(0,0)),concat(lit244,e->slot(0,0)),concat(lit245,e->slot(0,0)),concat(lit246,e->slot(0,0)),concat(lit247,e->slot(0,0))});e->slot(0,3)=arg(t333,0);e->slot(0,4)=arg(t333,1);}
if(truth(ne(e->slot(0,4),V()))){return Args{first(call(e->slot(1,5),Args{sub(V(1.0),first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0),V(1.0)}))),V(0.0),V(1.0)})),V(true)};
}
return Args{V(0.0),V(false)};
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit135)};V t334=V(false);refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit136)};V t335=V(false);refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit138)};V t336=V(false);refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit139)};V t337=V(false);refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit140)};V t338=V(false);refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit123)};V t339=first(call(e->slot(1,11),Args{lit248,V(0.0)}));refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t340=first(call(e->slot(1,11),joined(Args{lit249},call(e->slot(1,11),Args{lit250,V(0.0)}))));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit125)};V t341=first(call(e->slot(1,11),joined(Args{lit251},call(e->slot(1,11),Args{lit252,V(0.0)}))));refs[0].put(std::move(t341));}
{V t342=first(call(e->slot(1,10),Args{lit253}));e->slot(0,0)=std::move(t342);}
if(truth(eq(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(e,0,0)};V t343=first(call(e->slot(1,10),Args{lit254}));refs[0].put(std::move(t343));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit138)};V t344=ne(e->slot(0,0),V());refs[0].put(std::move(t344));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit121)};V t345=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t345));}
{V t346=first(call(e->slot(1,10),Args{lit255}));e->slot(0,1)=std::move(t346);}
if(truth(eq(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,0,1)};V t347=first(call(e->slot(1,10),Args{lit256}));refs[0].put(std::move(t347));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit135)};V t348=ne(e->slot(0,1),V());refs[0].put(std::move(t348));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t349=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t349));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t350=first(call(e->slot(1,11),joined(Args{lit257},call(e->slot(1,11),Args{lit258,V(0.0)}))));refs[0].put(std::move(t350));}
{std::array<Ref,2> refs{Ref(e->slot(1,2),lit117),Ref(e->slot(1,2),lit140)};Args t351=call(e->slot(1,38),Args{V(2.0)});refs[0].put(arg(t351,0));refs[1].put(arg(t351,1));}
{V t352=V(false);e->slot(0,2)=std::move(t352);}
{std::array<Ref,2> refs{Ref(e->slot(1,2),lit118),Ref(e,0,2)};Args t353=call(e->slot(1,38),Args{V(3.0)});refs[0].put(arg(t353,0));refs[1].put(arg(t353,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit140)};V t354=([&](){V t355=get(e->slot(1,2),lit140);return !truth(t355)?e->slot(0,2):t355;})();refs[0].put(std::move(t354));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit119)};V t356=first(call(e->slot(1,6),Args{sub(get(e->slot(1,2),lit117),get(e->slot(1,2),lit118))}));refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t357=first(call(e->slot(1,5),Args{divv(get(e->slot(1,2),lit119),first(call(get(e->get("math"),lit146),Args{get(get(e->slot(1,1),lit1),lit21),V(1.0)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t357));}
{Args t358=call(e->slot(1,39),Args{V(2.0)});e->slot(0,3)=arg(t358,0);e->slot(0,4)=arg(t358,1);}
{Args t359=call(e->slot(1,39),Args{V(3.0)});e->slot(0,5)=arg(t359,0);e->slot(0,6)=arg(t359,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit136)};V t360=([&](){V t361=e->slot(0,4);return !truth(t361)?e->slot(0,6):t361;})();refs[0].put(std::move(t360));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit114)};V t362=first(call(e->slot(1,5),Args{mul(add(e->slot(0,3),e->slot(0,5)),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t362));}
{V t363=first(call(e->slot(1,5),Args{sub(V(1.0),e->slot(0,3)),V(0.0),V(1.0)}));e->slot(0,7)=std::move(t363);}
{V t364=first(call(e->slot(1,5),Args{sub(V(1.0),e->slot(0,5)),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t364);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t365=mul(add(e->slot(0,7),e->slot(0,8)),V(0.5));refs[0].put(std::move(t365));}
{V t366=first(call(e->slot(1,11),Args{lit259,e->slot(0,7)}));e->slot(0,9)=std::move(t366);}
{V t367=first(call(e->slot(1,11),Args{lit260,e->slot(0,8)}));e->slot(0,10)=std::move(t367);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t368=first(call(e->slot(1,5),Args{mul(add(e->slot(0,9),e->slot(0,10)),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t368));}
{V t369=first(call(e->slot(1,11),joined(Args{lit261},call(e->slot(1,11),joined(Args{lit262},call(e->slot(1,11),Args{lit263,V(0.0)}))))));e->slot(0,11)=std::move(t369);}
{V t370=first(call(e->slot(1,11),joined(Args{lit264},call(e->slot(1,11),joined(Args{lit265},call(e->slot(1,11),Args{lit266,V(0.0)}))))));e->slot(0,12)=std::move(t370);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t371=first(call(e->slot(1,5),Args{mul(add(first(call(e->slot(1,6),Args{e->slot(0,11)})),first(call(e->slot(1,6),Args{e->slot(0,12)}))),V(0.5)),V(0.0),V(1.0)}));refs[0].put(std::move(t371));}
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t372=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t372));}
{V t373=first(call(get(e->get("math"),lit146),Args{([&](){V t374=get(e->slot(1,2),lit86);return !truth(t374)?get(get(e->slot(1,1),lit1),lit40):t374;})(),V(1000.0)}));e->slot(0,1)=std::move(t373);}
{V t375=first(call(e->slot(1,5),Args{divv(e->slot(0,0),e->slot(0,1)),V(0.0),V(1.25)}));e->slot(0,2)=std::move(t375);}
{V t376=add(V(0.42),mul(V(0.58),first(call(e->slot(1,5),Args{divv(e->slot(0,2),V(0.55)),V(0.0),V(1.0)}))));e->slot(0,3)=std::move(t376);}
{V t377=sub(V(1.0),mul(first(call(e->slot(1,5),Args{divv(sub(e->slot(0,2),V(0.72)),V(0.38)),V(0.0),V(1.0)})),V(0.38)));e->slot(0,4)=std::move(t377);}
return Args{mul(([&](){V t378=get(e->slot(1,2),lit85);return !truth(t378)?get(get(e->slot(1,1),lit1),lit39):t378;})(),first(call(e->slot(1,5),Args{mul(e->slot(0,3),e->slot(0,4)),V(0.3),V(1.05)})))};
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t379=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0),V(1.0)}));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t380=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t380));}
{V t381=V();e->slot(0,3)=std::move(t381);}
if(truth(get(e->slot(1,2),lit101))){{std::array<Ref,1> refs{Ref(e,0,3)};V t382=first(call(e->slot(1,31),Args{get(e->slot(1,2),lit100),e->slot(0,1)}));refs[0].put(std::move(t382));}
}
if(truth(eq(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,0,3)};V t383=first(call(e->slot(1,41),Args{e->slot(0,1)}));refs[0].put(std::move(t383));}
}
{std::array<Ref,1> refs{Ref(e,0,3)};V t384=first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0),get(get(e->slot(1,1),lit1),lit46)}));refs[0].put(std::move(t384));}
{V t385=first(call(e->slot(1,5),Args{divv(e->slot(0,1),first(call(get(e->get("math"),lit146),Args{([&](){V t386=get(e->slot(1,2),lit86);return !truth(t386)?get(get(e->slot(1,1),lit1),lit40):t386;})(),V(1000.0)}))),V(0.0),V(1.2)}));e->slot(0,4)=std::move(t385);}
{V t387=mul(e->slot(0,3),e->slot(0,0));e->slot(0,5)=std::move(t387);}
{V t388=V(0.0);e->slot(0,6)=std::move(t388);}
if(truth(gt(first(call(e->slot(1,6),Args{e->slot(0,2)})),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,6)};V t389=mul(mul(get(get(e->slot(1,1),lit1),lit41),add(V(0.35),mul(V(0.65),e->slot(0,4)))),sub(V(1.0),e->slot(0,0)));refs[0].put(std::move(t389));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit41)};V t390=e->slot(0,6);refs[0].put(std::move(t390));}
return call(e->slot(1,5),Args{sub(e->slot(0,5),e->slot(0,6)),V(-num(get(get(e->slot(1,1),lit1),lit46))),get(get(e->slot(1,1),lit1),lit46)});
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);{V t391=first(call(e->slot(1,33),Args{get(e->slot(1,2),lit72)}));e->slot(0,1)=std::move(t391);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t392=e->slot(0,1);refs[0].put(std::move(t392));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t393=first(call(e->slot(1,6),call(e->slot(1,4),Args{get(e->slot(1,2),lit84),get(get(e->slot(1,1),lit1),lit50)})));refs[0].put(std::move(t393));}
if(truth(le(get(e->slot(1,2),lit84),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t394=get(get(e->slot(1,1),lit1),lit50);refs[0].put(std::move(t394));}
}
if(truth(([&](){V t395=eq(get(e->slot(1,2),lit72),V(0.0));return !truth(t395)?le(first(call(e->slot(1,6),Args{e->slot(0,1)})),get(get(e->slot(1,1),lit1),lit57)):t395;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t396=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit77),V(0.0),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t396));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t397=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit78),V(0.0),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t397));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t398=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit79),V(0.0),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t398));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t399=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit80),V(0.0),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t399));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t400=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit81),V(0.0),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t400));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t401=V(0.0);refs[0].put(std::move(t401));}
return Args{};
}
{V t402=first(call(e->slot(1,42),Args{get(e->slot(1,2),lit68),get(e->slot(1,2),lit67),get(e->slot(1,2),lit72)}));e->slot(0,2)=std::move(t402);}
{V t403=first(call(e->slot(1,5),Args{([&](){V t404=get(e->slot(1,2),lit71);return !truth(t404)?V(0.0):t404;})(),V(0.0),V(1.0)}));e->slot(0,3)=std::move(t403);}
{V t405=first(call(get(e->get("math"),lit146),Args{get(get(e->slot(1,1),lit1),lit43),V(1.0)}));e->slot(0,4)=std::move(t405);}
{V t406=first(call(e->slot(1,5),Args{mul(divv(first(call(get(e->get("math"),lit146),Args{sub(first(call(e->slot(1,6),Args{e->slot(0,2)})),e->slot(0,4)),V(0.0)})),e->slot(0,4)),get(get(e->slot(1,1),lit1),lit44)),V(0.0),V(0.45)}));e->slot(0,5)=std::move(t406);}
{V t407=mul(mul(e->slot(0,2),e->slot(0,3)),sub(V(1.0),e->slot(0,5)));e->slot(0,6)=std::move(t407);}
{V t408=mul(e->slot(0,6),e->slot(0,1));e->slot(0,7)=std::move(t408);}
{V t409=mul(mul(mul(e->slot(0,7),get(e->slot(1,2),lit84)),([&](){V t410=get(e->slot(1,2),lit42);return !truth(t410)?get(get(e->slot(1,1),lit1),lit42):t410;})()),([&](){V t411=get(e->slot(1,2),lit134);return !truth(t411)?V(1.0):t411;})());e->slot(0,8)=std::move(t409);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t412=first(call(e->slot(1,5),Args{e->slot(0,8),V(-num(get(get(e->slot(1,1),lit1),lit47))),get(get(e->slot(1,1),lit1),lit47)}));refs[0].put(std::move(t412));}
{V t413=first(call(e->slot(1,5),Args{mul(e->slot(0,8),V(0.5)),V(-num(get(get(e->slot(1,1),lit1),lit48))),get(get(e->slot(1,1),lit1),lit48)}));e->slot(0,9)=std::move(t413);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t414=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit77),e->slot(0,2),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t414));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t415=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit78),e->slot(0,6),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t415));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t416=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit79),e->slot(0,7),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t416));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t417=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit80),e->slot(0,8),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t417));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t418=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit81),e->slot(0,9),get(get(e->slot(1,1),lit1),lit49),e->slot(0,0)}));refs[0].put(std::move(t418));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t419=first(call(e->slot(1,5),Args{divv(get(e->slot(1,2),lit80),first(call(get(e->get("math"),lit146),Args{get(get(e->slot(1,1),lit1),lit45),V(1.0)}))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t419));}
return Args{};});
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t420=first(call(e->slot(1,5),Args{divv(get(e->slot(1,2),lit67),first(call(get(e->get("math"),lit146),Args{([&](){V t421=get(e->slot(1,2),lit86);return !truth(t421)?V(9000.0):t421;})(),V(1000.0)}))),V(0.0),V(1.0)}));e->slot(0,1)=std::move(t420);}
{V t422=first(call(get(e->get("math"),lit146),Args{V(0.35),sub(V(1.0),e->slot(0,1))}));e->slot(0,2)=std::move(t422);}
return Args{mul(e->slot(0,0),e->slot(0,2))};
return Args{};});
e->slot(0,45)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t423=first(call(get(e->get("math"),lit146),Args{first(call(e->slot(1,6),Args{e->slot(0,1)})),V(1.0)}));e->slot(0,2)=std::move(t423);}
{V t424=divv(e->slot(0,0),add(V(1.0),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit3))));e->slot(0,3)=std::move(t424);}
return Args{mul(e->slot(0,3),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit71),V(0.0),V(1.0)})))};
return Args{};});
e->slot(0,46)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t425=ne(e->slot(0,1),get(e->slot(1,2),lit73));e->slot(0,3)=std::move(t425);}
{V t426=first(call(e->slot(1,6),Args{sub(e->slot(0,0),get(e->slot(1,2),lit67))}));e->slot(0,4)=std::move(t426);}
if(truth(e->slot(0,3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t427=first(call(e->slot(2,5),Args{add(mul(e->slot(1,4),get(get(e->slot(2,1),lit1),lit9)),get(get(e->slot(2,1),lit1),lit10)),V(0.0),V(1.0)}));e->slot(0,0)=std::move(t427);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit106)};V t428=first(call(e->slot(2,5),Args{first(call(get(e->get("math"),lit146),Args{get(e->slot(2,2),lit106),e->slot(0,0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t428));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t429=first(call(get(e->get("math"),lit146),Args{V(0.0),sub(get(e->slot(1,2),lit106),mul(e->slot(0,2),get(get(e->slot(1,1),lit1),lit11)))}));refs[0].put(std::move(t429));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t430=e->slot(0,1);refs[0].put(std::move(t430));}
return Args{};});
e->slot(0,47)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t431=mul(get(get(e->slot(1,1),lit1),lit4),([&](){V t432=get(e->slot(1,2),lit130);return !truth(t432)?V(1.0):t432;})());e->slot(0,2)=std::move(t431);}
{V t433=V(0.0);e->slot(0,3)=std::move(t433);}
if(truth(gt(first(call(e->slot(1,6),Args{e->slot(0,0)})),e->slot(0,2)))){{std::array<Ref,1> refs{Ref(e,0,3)};V t434=e->slot(0,0);refs[0].put(std::move(t434));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t435=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit105),e->slot(0,3),mul(get(get(e->slot(1,1),lit1),lit5),([&](){V t436=get(e->slot(1,2),lit130);return !truth(t436)?V(1.0):t436;})()),e->slot(0,1)}));refs[0].put(std::move(t435));}
return Args{};});
e->slot(0,48)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t437=([&](){V t438=get(e->slot(1,2),lit131);return !truth(t438)?V(1.0):t438;})();e->slot(0,1)=std::move(t437);}
{V t439=divv(mul(get(e->slot(1,2),lit105),get(get(e->slot(1,1),lit1),lit6)),first(call(get(e->get("math"),lit146),Args{e->slot(0,1),V(0.001)})));e->slot(0,2)=std::move(t439);}
{V t440=mul(mul(get(e->slot(1,2),lit104),get(get(e->slot(1,1),lit1),lit7)),e->slot(0,1));e->slot(0,3)=std::move(t440);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t441=add(get(e->slot(1,2),lit104),mul(sub(e->slot(0,2),e->slot(0,3)),e->slot(0,0)));refs[0].put(std::move(t441));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t442=first(call(e->slot(1,5),Args{get(e->slot(1,2),lit104),V(-num(get(get(e->slot(1,1),lit1),lit35))),get(get(e->slot(1,1),lit1),lit35)}));refs[0].put(std::move(t442));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t443=add(get(e->slot(1,2),lit103),mul(get(e->slot(1,2),lit104),e->slot(0,0)));refs[0].put(std::move(t443));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t444=first(call(e->slot(1,5),Args{get(e->slot(1,2),lit103),V(-num(get(get(e->slot(1,1),lit1),lit34))),get(get(e->slot(1,1),lit1),lit34)}));refs[0].put(std::move(t444));}
return Args{};});
e->slot(0,49)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{Args t445=call(e->slot(1,12),Args{V(0.0),lit267,lit268,lit269,lit270});e->slot(0,0)=arg(t445,0);e->slot(0,1)=arg(t445,1);}
{Args t446=call(e->slot(1,12),Args{V(0.0),lit271,lit272,lit273,lit274});e->slot(0,2)=arg(t446,0);e->slot(0,3)=arg(t446,1);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit139)};V t447=([&](){V t448=ne(e->slot(0,1),V());return !truth(t448)?ne(e->slot(0,3),V()):t448;})();refs[0].put(std::move(t447));}
if(truth(([&](){V t449=le(first(call(e->slot(1,6),Args{e->slot(0,0)})),V(1.5));return truth(t449)?le(first(call(e->slot(1,6),Args{e->slot(0,2)})),V(1.5)):t449;})())){return call(e->slot(1,5),Args{mul(add(first(call(e->slot(1,6),Args{e->slot(0,0)})),first(call(e->slot(1,6),Args{e->slot(0,2)}))),V(0.5)),V(0.0),V(1.0)});
}
return call(e->slot(1,5),Args{divv(add(first(call(e->slot(1,6),Args{e->slot(0,0)})),first(call(e->slot(1,6),Args{e->slot(0,2)}))),first(call(get(e->get("math"),lit146),Args{get(get(e->slot(1,1),lit1),lit14),V(1.0)}))),V(0.0),V(1.0)});
return Args{};});
e->slot(0,50)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;{V t450=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t450);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t451=first(call(e->slot(1,49),Args{}));refs[0].put(std::move(t451));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t452=mul(get(e->slot(1,2),lit110),get(e->slot(0,0),lit13));refs[0].put(std::move(t452));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t453=first(call(e->slot(1,5),Args{mul(first(call(e->slot(1,6),Args{get(e->slot(1,2),lit121)})),get(e->slot(0,0),lit23)),V(0.0),V(0.2)}));refs[0].put(std::move(t453));}
{V t454=first(call(e->slot(1,5),Args{sub(mul(get(e->slot(1,2),lit124),get(e->slot(0,0),lit24)),mul(get(e->slot(1,2),lit125),get(e->slot(0,0),lit25))),V(-num(V(0.06))),V(0.16)}));e->slot(0,1)=std::move(t454);}
{V t455=mul(get(e->slot(1,2),lit114),get(e->slot(0,0),lit18));e->slot(0,2)=std::move(t455);}
{V t456=mul(get(e->slot(1,2),lit120),get(e->slot(0,0),lit20));e->slot(0,3)=std::move(t456);}
{V t457=add(mul(get(e->slot(1,2),lit112),get(e->slot(0,0),lit15)),mul(get(e->slot(1,2),lit113),get(e->slot(0,0),lit19)));e->slot(0,4)=std::move(t457);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit134)};V t458=first(call(e->slot(1,5),Args{sub(sub(sub(sub(sub(sub(V(1.0),get(e->slot(1,2),lit109)),get(e->slot(1,2),lit122)),e->slot(0,1)),e->slot(0,2)),e->slot(0,3)),e->slot(0,4)),V(0.55),V(1.08)}));refs[0].put(std::move(t458));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t459=first(call(e->slot(1,5),Args{mul(get(e->slot(1,2),lit105),get(e->slot(1,2),lit134)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t459));}
return Args{};});
e->slot(0,51)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t460=first(call(e->slot(1,6),Args{sub(e->slot(0,2),get(e->slot(1,2),lit71))}));e->slot(0,3)=std::move(t460);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t461=add(add(add(add(add(first(call(e->slot(1,6),Args{e->slot(0,0)})),first(call(e->slot(1,6),Args{e->slot(0,1)}))),mul(e->slot(0,3),V(5.0))),mul(divv(get(e->slot(1,2),lit67),V(10000.0)),V(3.0))),mul(first(call(e->slot(1,6),Args{get(e->slot(1,2),lit104)})),V(0.2))),mul(get(e->slot(1,2),lit106),V(0.5)));refs[0].put(std::move(t461));}
return Args{};});
e->slot(0,52)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t462=add(add(add(first(call(e->slot(1,6),Args{get(e->slot(1,2),lit105)})),first(call(e->slot(1,6),Args{get(e->slot(1,2),lit106)}))),first(call(e->slot(1,6),Args{get(e->slot(1,2),lit104)}))),mul(first(call(e->slot(1,6),Args{get(e->slot(1,2),lit111)})),V(0.05)));e->slot(0,1)=std::move(t462);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t463=add(get(e->slot(1,2),lit108),mul(mul(e->slot(0,1),get(get(e->slot(1,1),lit1),lit12)),e->slot(0,0)));refs[0].put(std::move(t463));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t464=sub(get(e->slot(1,2),lit108),mul(sub(get(e->slot(1,2),lit108),get(get(e->slot(1,1),lit1),lit16)),get(get(e->slot(1,1),lit1),lit17)));refs[0].put(std::move(t464));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t465=first(call(get(e->get("math"),lit146),Args{get(get(e->slot(1,1),lit1),lit16),get(e->slot(1,2),lit108)}));refs[0].put(std::move(t465));}
return Args{};});
e->slot(0,53)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t466=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit67),V(0.0),V(0.2),e->slot(0,0)}));refs[0].put(std::move(t466));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t467=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit74),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t467));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t468=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit75),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t468));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t469=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit76),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t469));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t470=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit77),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t470));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t471=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit78),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t471));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t472=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit79),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t472));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t473=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit80),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t473));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t474=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit81),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t474));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t475=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit82),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t475));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t476=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit103),V(0.0),V(0.2),e->slot(0,0)}));refs[0].put(std::move(t476));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t477=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit104),V(0.0),V(0.2),e->slot(0,0)}));refs[0].put(std::move(t477));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t478=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit105),V(0.0),V(0.15),e->slot(0,0)}));refs[0].put(std::move(t478));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t479=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit106),V(0.0),V(0.12),e->slot(0,0)}));refs[0].put(std::move(t479));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t480=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit107),V(0.0),V(0.2),e->slot(0,0)}));refs[0].put(std::move(t480));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit114)};V t481=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit114),V(0.0),V(0.2),e->slot(0,0)}));refs[0].put(std::move(t481));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t482=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit112),V(0.0),V(0.2),e->slot(0,0)}));refs[0].put(std::move(t482));}
return Args{};});
e->slot(0,54)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,13),Args{lit275,([&](){V t483=get(e->slot(1,2),lit63);return !truth(t483)?lit97:t483;})()});
call(e->slot(1,13),Args{lit276,([&](){V t484=get(e->slot(1,2),lit65);return !truth(t484)?V(0.0):t484;})()});
call(e->slot(1,13),Args{lit277,([&](){V t485=get(e->slot(1,2),lit76);return !truth(t485)?V(0.0):t485;})()});
call(e->slot(1,13),Args{lit278,([&](){V t486=get(e->slot(1,2),lit76);return !truth(t486)?V(0.0):t486;})()});
call(e->slot(1,13),Args{lit279,([&](){V t487=get(e->slot(1,2),lit76);return !truth(t487)?V(0.0):t487;})()});
call(e->slot(1,13),Args{lit280,([&](){V t488=get(e->slot(1,2),lit80);return !truth(t488)?V(0.0):t488;})()});
call(e->slot(1,13),Args{lit281,([&](){V t489=get(e->slot(1,2),lit80);return !truth(t489)?V(0.0):t489;})()});
call(e->slot(1,13),Args{lit282,([&](){V t490=get(e->slot(1,2),lit80);return !truth(t490)?V(0.0):t490;})()});
call(e->slot(1,13),Args{lit283,([&](){V t491=get(e->slot(1,2),lit77);return !truth(t491)?V(0.0):t491;})()});
call(e->slot(1,13),Args{lit284,([&](){V t492=get(e->slot(1,2),lit78);return !truth(t492)?V(0.0):t492;})()});
call(e->slot(1,13),Args{lit285,([&](){V t493=get(e->slot(1,2),lit79);return !truth(t493)?V(0.0):t493;})()});
call(e->slot(1,13),Args{lit286,([&](){V t494=get(e->slot(1,2),lit81);return !truth(t494)?V(0.0):t494;})()});
call(e->slot(1,13),Args{lit287,([&](){V t495=get(e->slot(1,2),lit82);return !truth(t495)?V(0.0):t495;})()});
call(e->slot(1,13),Args{lit288,([&](){V t496=get(e->slot(1,2),lit74);return !truth(t496)?V(0.0):t496;})()});
call(e->slot(1,13),Args{lit289,([&](){V t497=get(e->slot(1,2),lit75);return !truth(t497)?V(0.0):t497;})()});
call(e->slot(1,13),Args{lit290,([&](){V t498=get(e->slot(1,2),lit67);return !truth(t498)?V(0.0):t498;})()});
call(e->slot(1,13),Args{lit291,([&](){V t499=get(e->slot(1,2),lit66);return !truth(t499)?V(0.0):t499;})()});
call(e->slot(1,13),Args{lit292,([&](){V t500=get(e->slot(1,2),lit103);return !truth(t500)?V(0.0):t500;})()});
call(e->slot(1,13),Args{lit293,([&](){V t501=get(e->slot(1,2),lit104);return !truth(t501)?V(0.0):t501;})()});
call(e->slot(1,13),Args{lit294,([&](){V t502=get(e->slot(1,2),lit105);return !truth(t502)?V(0.0):t502;})()});
call(e->slot(1,13),Args{lit295,([&](){V t503=get(e->slot(1,2),lit105);return !truth(t503)?V(0.0):t503;})()});
call(e->slot(1,13),Args{lit296,([&](){V t504=get(e->slot(1,2),lit110);return !truth(t504)?V(0.0):t504;})()});
call(e->slot(1,13),Args{lit297,([&](){V t505=get(e->slot(1,2),lit109);return !truth(t505)?V(0.0):t505;})()});
call(e->slot(1,13),Args{lit298,([&](){V t506=get(e->slot(1,2),lit106);return !truth(t506)?V(0.0):t506;})()});
call(e->slot(1,13),Args{lit299,([&](){V t507=get(e->slot(1,2),lit107);return !truth(t507)?V(0.0):t507;})()});
call(e->slot(1,13),Args{lit300,([&](){V t508=get(e->slot(1,2),lit108);return !truth(t508)?V(0.0):t508;})()});
call(e->slot(1,13),Args{lit301,([&](){V t509=get(e->slot(1,2),lit112);return !truth(t509)?V(0.0):t509;})()});
call(e->slot(1,13),Args{lit302,([&](){V t510=get(e->slot(1,2),lit114);return !truth(t510)?V(0.0):t510;})()});
call(e->slot(1,13),Args{lit303,([&](){V t511=get(e->slot(1,2),lit113);return !truth(t511)?V(0.0):t511;})()});
call(e->slot(1,13),Args{lit304,([&](){V t512=get(e->slot(1,2),lit120);return !truth(t512)?V(0.0):t512;})()});
call(e->slot(1,13),Args{lit305,([&](){V t513=get(e->slot(1,2),lit122);return !truth(t513)?V(0.0):t513;})()});
call(e->slot(1,13),Args{lit306,([&](){V t514=get(e->slot(1,2),lit134);return !truth(t514)?V(1.0):t514;})()});
call(e->slot(1,13),Args{lit307,([&](){V t515=get(e->slot(1,2),lit72);return !truth(t515)?V(0.0):t515;})()});
call(e->slot(1,13),Args{lit308,([&](){V t516=get(e->slot(1,2),lit83);return !truth(t516)?V(0.0):t516;})()});
call(e->slot(1,13),Args{lit309,([&](){V t517=get(e->slot(1,2),lit84);return !truth(t517)?get(get(e->slot(1,1),lit1),lit50):t517;})()});
call(e->slot(1,13),Args{lit310,([&](){V t518=get(e->slot(1,2),lit71);return !truth(t518)?V(0.0):t518;})()});
call(e->slot(1,13),Args{lit311,([&](){V t519=get(e->slot(1,2),lit70);return !truth(t519)?V(0.0):t519;})()});
call(e->slot(1,13),Args{lit312,([&](){V t520=get(e->slot(1,2),lit68);return !truth(t520)?V(0.0):t520;})()});
call(e->slot(1,13),Args{lit313,([&](){V t521=get(e->slot(1,2),lit69);return !truth(t521)?V(0.0):t521;})()});
call(e->slot(1,13),Args{lit314,([&](){V t522=get(e->slot(1,2),lit85);return !truth(t522)?get(get(e->slot(1,1),lit1),lit39):t522;})()});
call(e->slot(1,13),Args{lit315,([&](){V t523=get(e->slot(1,2),lit41);return !truth(t523)?V(0.0):t523;})()});
call(e->slot(1,13),Args{lit316,([&](){V t524=([&](){V t525=get(e->slot(1,2),lit101);return truth(t525)?V(1.0):t525;})();return !truth(t524)?V(0.0):t524;})()});
call(e->slot(1,14),Args{lit317,([&](){V t526=get(e->slot(1,2),lit88);return !truth(t526)?lit97:t526;})()});
call(e->slot(1,14),Args{lit318,([&](){V t527=get(e->slot(1,2),lit90);return !truth(t527)?lit97:t527;})()});
call(e->slot(1,14),Args{lit319,([&](){V t528=get(e->slot(1,2),lit91);return !truth(t528)?lit92:t528;})()});
call(e->slot(1,14),Args{lit320,([&](){V t529=get(e->slot(1,2),lit93);return !truth(t529)?lit94:t529;})()});
call(e->slot(1,14),Args{lit321,([&](){V t530=get(e->slot(1,2),lit95);return !truth(t530)?lit94:t530;})()});
call(e->slot(1,14),Args{lit322,([&](){V t531=get(e->slot(1,2),lit96);return !truth(t531)?lit97:t531;})()});
call(e->slot(1,13),Args{lit323,([&](){V t532=([&](){V t533=get(e->slot(1,2),lit132);return truth(t533)?V(1.0):t533;})();return !truth(t532)?V(0.0):t532;})()});
call(e->slot(1,13),Args{lit324,([&](){V t534=get(e->slot(1,2),lit130);return !truth(t534)?V(1.0):t534;})()});
call(e->slot(1,13),Args{lit325,([&](){V t535=get(e->slot(1,2),lit131);return !truth(t535)?V(1.0):t535;})()});
if(truth(V(!truth(get(e->slot(1,2),lit142))))){return Args{};
}
call(e->slot(1,13),Args{lit326,([&](){V t536=([&](){V t537=get(e->slot(1,2),lit135);return truth(t537)?V(1.0):t537;})();return !truth(t536)?V(0.0):t536;})()});
call(e->slot(1,13),Args{lit327,([&](){V t538=([&](){V t539=get(e->slot(1,2),lit136);return truth(t539)?V(1.0):t539;})();return !truth(t538)?V(0.0):t538;})()});
call(e->slot(1,13),Args{lit328,([&](){V t540=([&](){V t541=get(e->slot(1,2),lit137);return truth(t541)?V(1.0):t541;})();return !truth(t540)?V(0.0):t540;})()});
call(e->slot(1,13),Args{lit329,([&](){V t542=([&](){V t543=get(e->slot(1,2),lit138);return truth(t543)?V(1.0):t543;})();return !truth(t542)?V(0.0):t542;})()});
call(e->slot(1,13),Args{lit330,([&](){V t544=([&](){V t545=get(e->slot(1,2),lit139);return truth(t545)?V(1.0):t545;})();return !truth(t544)?V(0.0):t544;})()});
call(e->slot(1,13),Args{lit331,([&](){V t546=([&](){V t547=get(e->slot(1,2),lit140);return truth(t547)?V(1.0):t547;})();return !truth(t546)?V(0.0):t546;})()});
call(e->slot(1,13),Args{lit332,([&](){V t548=get(e->slot(1,2),lit117);return !truth(t548)?V(0.0):t548;})()});
call(e->slot(1,13),Args{lit333,([&](){V t549=get(e->slot(1,2),lit118);return !truth(t549)?V(0.0):t549;})()});
call(e->slot(1,13),Args{lit334,([&](){V t550=get(e->slot(1,2),lit119);return !truth(t550)?V(0.0):t550;})()});
call(e->slot(1,13),Args{lit335,([&](){V t551=get(e->slot(1,2),lit115);return !truth(t551)?V(1.0):t551;})()});
call(e->slot(1,13),Args{lit336,([&](){V t552=get(e->slot(1,2),lit116);return !truth(t552)?V(1.0):t552;})()});
call(e->slot(1,13),Args{lit337,([&](){V t553=get(e->slot(1,2),lit124);return !truth(t553)?V(0.0):t553;})()});
call(e->slot(1,13),Args{lit338,([&](){V t554=get(e->slot(1,2),lit125);return !truth(t554)?V(0.0):t554;})()});
call(e->slot(1,13),Args{lit339,([&](){V t555=get(e->slot(1,2),lit121);return !truth(t555)?V(0.0):t555;})()});
return Args{};});
Ref(e->slot(0,1),lit340).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t556=lit64;refs[0].put(std::move(t556));}
call(e->slot(1,54),Args{});
return Args{};}));
Ref(e->slot(0,1),lit341).put(native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit65)};V t557=add(([&](){V t558=get(e->slot(1,2),lit65);return !truth(t558)?V(0.0):t558;})(),V(1.0));refs[0].put(std::move(t557));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t559=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t559));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t560=lit342;refs[0].put(std::move(t560));}
call(e->slot(1,54),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t561=first(call(e->slot(1,5),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit59),get(get(e->slot(1,1),lit1),lit60)}));refs[0].put(std::move(t561));}
call(e->slot(1,16),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t562=([&](){V t563=e->slot(0,1);return !truth(t563)?first(call(e->slot(1,15),Args{})):t563;})();refs[0].put(std::move(t562));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t564=lit343;refs[0].put(std::move(t564));}
call(e->slot(1,53),Args{e->slot(0,0)});
call(e->slot(1,54),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit63)};V t565=lit344;refs[0].put(std::move(t565));}
{V t566=first(call(e->slot(1,35),Args{e->slot(0,1)}));e->slot(0,3)=std::move(t566);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit66)};V t567=get(e->slot(0,3),lit183);refs[0].put(std::move(t567));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t568=get(e->slot(0,3),lit68);refs[0].put(std::move(t568));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t569=get(e->slot(0,3),lit69);refs[0].put(std::move(t569));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t570=get(e->slot(0,3),lit71);refs[0].put(std::move(t570));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t571=get(e->slot(0,3),lit72);refs[0].put(std::move(t571));}
call(e->slot(1,34),Args{e->slot(0,1),e->slot(0,0)});
call(e->slot(1,36),Args{e->slot(0,0)});
call(e->slot(1,37),Args{});
call(e->slot(1,40),Args{});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t572=first(call(e->slot(1,8),Args{get(e->slot(1,2),lit67),get(e->slot(0,3),lit183),get(get(e->slot(1,1),lit1),lit2),e->slot(0,0)}));refs[0].put(std::move(t572));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t573=first(call(e->slot(1,5),Args{first(call(e->slot(1,8),Args{get(e->slot(1,2),lit71),get(e->slot(0,3),lit71),get(get(e->slot(1,1),lit1),lit8),e->slot(0,0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t573));}
call(e->slot(1,43),Args{e->slot(0,0)});
{V t574=first(call(e->slot(1,44),Args{get(e->slot(0,3),lit68)}));e->slot(0,4)=std::move(t574);}
{V t575=first(call(e->slot(1,45),Args{e->slot(0,4),get(e->slot(0,3),lit72)}));e->slot(0,5)=std::move(t575);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t576=e->slot(0,4);refs[0].put(std::move(t576));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t577=e->slot(0,5);refs[0].put(std::move(t577));}
call(e->slot(1,46),Args{get(e->slot(0,3),lit183),get(e->slot(0,3),lit72),e->slot(0,0)});
call(e->slot(1,47),Args{e->slot(0,5),e->slot(0,0)});
call(e->slot(1,48),Args{e->slot(0,0)});
call(e->slot(1,50),Args{});
call(e->slot(1,51),Args{e->slot(0,4),e->slot(0,5),get(e->slot(0,3),lit71)});
call(e->slot(1,52),Args{e->slot(0,0)});
call(e->slot(1,54),Args{});
return Args{};}));
Ref(e->slot(0,1),lit345).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t578=get(e->slot(1,2),lit76);return !truth(t578)?V(0.0):t578;})()};
return Args{};}));
Ref(e->slot(0,1),lit346).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t579=get(e->slot(1,2),lit80);return !truth(t579)?V(0.0):t579;})()};
return Args{};}));
Ref(e->slot(0,1),lit347).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t580=get(e->slot(1,2),lit103);return !truth(t580)?V(0.0):t580;})()};
return Args{};}));
Ref(e->slot(0,1),lit348).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t581=get(e->slot(1,2),lit104);return !truth(t581)?V(0.0):t581;})()};
return Args{};}));
Ref(e->slot(0,1),lit349).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t582=get(e->slot(1,2),lit71);return !truth(t582)?V(0.0):t582;})()};
return Args{};}));
Ref(e->slot(0,1),lit350).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t583=get(e->slot(1,2),lit108);return !truth(t583)?V(0.0):t583;})()};
return Args{};}));
Ref(e->slot(0,1),lit351).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t584=get(e->slot(1,2),lit105);return !truth(t584)?V(0.0):t584;})()};
return Args{};}));
Ref(e->slot(0,1),lit352).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t585=get(e->slot(1,2),lit134);return !truth(t585)?V(1.0):t585;})()};
return Args{};}));
Ref(e->slot(0,1),lit353).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit354).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit355),Args{concat(lit356,concat(lit357,concat(lit358,concat(lit359,concat(lit360,concat(lit361,concat(lit362,lit363))))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit63)})),([&](){V t586=get(e->slot(1,2),lit65);return !truth(t586)?V(0.0):t586;})(),first(call(e->get("tostring"),Args{([&](){V t587=get(e->slot(1,2),lit88);return !truth(t587)?lit364:t587;})()})),([&](){V t588=get(e->slot(1,2),lit66);return !truth(t588)?V(0.0):t588;})(),([&](){V t589=get(e->slot(1,2),lit67);return !truth(t589)?V(0.0):t589;})(),([&](){V t590=get(e->slot(1,2),lit72);return !truth(t590)?V(0.0):t590;})(),([&](){V t591=get(e->slot(1,2),lit83);return !truth(t591)?V(0.0):t591;})(),([&](){V t592=get(e->slot(1,2),lit84);return !truth(t592)?V(0.0):t592;})(),([&](){V t593=get(e->slot(1,2),lit68);return !truth(t593)?V(0.0):t593;})(),([&](){V t594=get(e->slot(1,2),lit69);return !truth(t594)?V(0.0):t594;})(),([&](){V t595=get(e->slot(1,2),lit71);return !truth(t595)?V(0.0):t595;})(),first(call(e->get("tostring"),Args{([&](){V t596=get(e->slot(1,2),lit96);return !truth(t596)?lit97:t596;})()})),([&](){V t597=get(e->slot(1,2),lit74);return !truth(t597)?V(0.0):t597;})(),([&](){V t598=get(e->slot(1,2),lit75);return !truth(t598)?V(0.0):t598;})(),([&](){V t599=get(e->slot(1,2),lit76);return !truth(t599)?V(0.0):t599;})(),([&](){V t600=get(e->slot(1,2),lit134);return !truth(t600)?V(1.0):t600;})(),([&](){V t601=get(e->slot(1,2),lit77);return !truth(t601)?V(0.0):t601;})(),([&](){V t602=get(e->slot(1,2),lit78);return !truth(t602)?V(0.0):t602;})(),([&](){V t603=get(e->slot(1,2),lit80);return !truth(t603)?V(0.0):t603;})(),([&](){V t604=get(e->slot(1,2),lit81);return !truth(t604)?V(0.0):t604;})(),([&](){V t605=get(e->slot(1,2),lit103);return !truth(t605)?V(0.0):t605;})(),([&](){V t606=get(e->slot(1,2),lit104);return !truth(t606)?V(0.0):t606;})(),([&](){V t607=get(e->slot(1,2),lit105);return !truth(t607)?V(0.0):t607;})(),([&](){V t608=get(e->slot(1,2),lit106);return !truth(t608)?V(0.0):t608;})(),([&](){V t609=get(e->slot(1,2),lit107);return !truth(t609)?V(0.0):t609;})(),([&](){V t610=get(e->slot(1,2),lit108);return !truth(t610)?V(0.0):t610;})(),([&](){V t611=get(e->slot(1,2),lit110);return !truth(t611)?V(0.0):t611;})(),([&](){V t612=get(e->slot(1,2),lit112);return !truth(t612)?V(0.0):t612;})(),([&](){V t613=get(e->slot(1,2),lit114);return !truth(t613)?V(0.0):t613;})(),([&](){V t614=get(e->slot(1,2),lit121);return !truth(t614)?V(0.0):t614;})(),([&](){V t615=([&](){V t616=get(e->slot(1,2),lit132);return truth(t616)?lit365:t616;})();return !truth(t615)?lit366:t615;})()});
return Args{};}));
call(e->slot(0,54),Args{});
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
