// Generated native C++ from pinned diff_lsd.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("autoReadDrivetrainIni");
static const V lit3("drivetrainIniRelativePath");
static const V lit4("data/drivetrain.ini");
static const V lit5("drivetrainReloadEachUpdate");
static const V lit6("defaultPowerLock");
static const V lit7("defaultCoastLock");
static const V lit8("defaultPreloadTorqueNm");
static const V lit9("defaultCamPowerDeg");
static const V lit10("defaultCamCoastDeg");
static const V lit11("clutchMu");
static const V lit12("frictionFaces");
static const V lit13("plateMeanRadius");
static const V lit14("camPinRadius");
static const V lit15("minCamAngleDeg");
static const V lit16("maxCamAngleDeg");
static const V lit17("normalizedDriveTorqueThreshold");
static const V lit18("normalizedDriveTorqueToNm");
static const V lit19("engineTorqueGuessNm");
static const V lit20("coastTorqueGuessNm");
static const V lit21("drivetrainEfficiency");
static const V lit22("minTinForCapacity");
static const V lit23("preloadOnlyTinNm");
static const V lit24("maxInputTorqueNm");
static const V lit25("maxLockTorqueNm");
static const V lit26("tauLock");
static const V lit27("tauUnlock");
static const V lit28("torqueTau");
static const V lit29("minDt");
static const V lit30("maxDt");
static const V lit31("lowSpeedKmh");
static const V lit32("lowOmegaThreshold");
static const V lit33("omegaHoldSpeedKmh");
static const V lit34("omegaFilterTau");
static const V lit35("diffMemoryTau");
static const V lit36("lockFloorMemory");
static const V lit37("minLock");
static const V lit38("maxLock");
static const V lit39("loadRef");
static const V lit40("loadDiffReference");
static const V lit41("loadUnlockGain");
static const V lit42("rearBiasGain");
static const V lit43("memoryUnlockGain");
static const V lit44("shiftShockUnlockGain");
static const V lit45("contactLossUnlockGain");
static const V lit46("hopUnlockGain");
static const V lit47("armTwistUnlockGain");
static const V lit48("lashUnlockGain");
static const V lit49("brakeCoastAssist");
static const V lit50("minStateFactor");
static const V lit51("maxStateFactor");
static const V lit52("observedFallbackEnabled");
static const V lit53("observedTau");
static const V lit54("observedMinSpeedKmh");
static const V lit55("observedTorqueRefNm");
static const V lit56("observedMinLock");
static const V lit57("observedMaxLock");
static const V lit58("observedBaseLock");
static const V lit59("observedTorqueGain");
static const V lit60("observedLoadBalanceGain");
static const V lit61("observedDiffUnlockGain");
static const V lit62("observedCoastScale");
static const V lit63("resistancePerRad");
static const V lit64("heatGain");
static const V lit65("heatCoolRate");
static const V lit66("debugStoreInterval");
static const V lit67("lockRatio");
static const V lit68("targetLock");
static const V lit69("mechanicalLockRatio");
static const V lit70("observedLockRatio");
static const V lit71("observedTargetLock");
static const V lit72("heat");
static const V lit73("diff");
static const V lit74("signedDiff");
static const V lit75("diffFiltered");
static const V lit76("signedDiffFiltered");
static const V lit77("mode");
static const V lit78("COAST");
static const V lit79("source");
static const V lit80("INIT");
static const V lit81("status");
static const V lit82("updateCount");
static const V lit83("loadRL");
static const V lit84("loadRR");
static const V lit85("loadDiff");
static const V lit86("rearBias");
static const V lit87("rearMemory");
static const V lit88("driveTorque");
static const V lit89("driveTorqueAbs");
static const V lit90("driveTorqueNm");
static const V lit91("inputTorqueNm");
static const V lit92("estimatedInputTorqueNm");
static const V lit93("torqueSource");
static const V lit94("NONE");
static const V lit95("shaftTwist");
static const V lit96("shaftVelocity");
static const V lit97("driveLash");
static const V lit98("shiftShock");
static const V lit99("contactLoss");
static const V lit100("hopShock");
static const V lit101("armTwist");
static const V lit102("omegaL");
static const V lit103("omegaR");
static const V lit104("rawOmegaL");
static const V lit105("rawOmegaR");
static const V lit106("omegaLinked");
static const V lit107("lockTorqueNm");
static const V lit108("preloadTorqueNm");
static const V lit109("camTorqueNm");
static const V lit110("actualResistanceTorqueNm");
static const V lit111("klockPercent");
static const V lit112("powerLockRatio");
static const V lit113("coastLockRatio");
static const V lit114("activeLockRatio");
static const V lit115("camPowerDeg");
static const V lit116("camCoastDeg");
static const V lit117("activeCamDeg");
static const V lit118("configLoaded");
static const V lit119("configAttempted");
static const V lit120("configStatus");
static const V lit121("NOT LOADED");
static const V lit122("configSource");
static const V lit123("configPath");
static const V lit124("");
static const V lit125("configWarning");
static const V lit126("drivetrainType");
static const V lit127("UNKNOWN");
static const V lit128("finalRatio");
static const V lit129("gearRatio");
static const V lit130("gear");
static const V lit131("gearRatios");
static const V lit132("debugStoreTimer");
static const V lit133("debugStoreNow");
static const V lit134("state");
static const V lit135("debug");
static const V lit136("huge");
static const V lit137("safeField");
static const V lit138("getCar");
static const V lit139("safeLoadRaw");
static const V lit140("safeStore");
static const V lit141("^%s+");
static const V lit142("%s+$");
static const V lit143("max");
static const V lit144("deg");
static const V lit145("atan");
static const V lit146("open");
static const V lit147("r");
static const V lit148(";.*$");
static const V lit149("//.*$");
static const V lit150("^%[(.-)%]$");
static const V lit151("^([%w_]+)%s*=%s*(.+)$");
static const V lit152("getCarID");
static const V lit153("getFolder");
static const V lit154("FolderID");
static const V lit155("ContentCars");
static const V lit156("/");
static const V lit157("content/cars/");
static const V lit158("FALLBACK: ");
static const V lit159("OBSERVED_FALLBACK");
static const V lit160("FINAL");
static const V lit161("FINAL_RATIO");
static const V lit162("GEAR_");
static const V lit163("configurationInputContract");
static const V lit164("original");
static const V lit165("car_config_rear_v1");
static const V lit166("Unknown LSD configuration input contract");
static const V lit167("CAR_CONFIG");
static const V lit168("getCarConfig");
static const V lit169("number");
static const V lit170("LSD explicit configuration unavailable: ");
static const V lit171(".");
static const V lit172("TRACTION");
static const V lit173("TYPE");
static const V lit174("RWD");
static const V lit175("LSD explicit configuration requires RWD");
static const V lit176("DIFFERENTIAL");
static const V lit177("POWER");
static const V lit178("PRELOAD");
static const V lit179("GEARS");
static const V lit180("COUNT");
static const V lit181("floor");
static const V lit182("LSD explicit gear count must be integer");
static const V lit183("GEAR_R");
static const V lit184("FROZEN RWD CAR_CONFIG");
static const V lit185("AUTO DISABLED");
static const V lit186("INI");
static const V lit187("LOADING");
static const V lit188("NO CAR PATH");
static const V lit189("INI NOT FOUND OR ACD PACKED");
static const V lit190("DIFFERENTIAL_0");
static const V lit191("DIFF");
static const V lit192("REAR_DIFFERENTIAL");
static const V lit193("NO DIFFERENTIAL SECTION");
static const V lit194("DRIVETRAIN");
static const V lit195("GEARBOX");
static const V lit196("CAM_POWER");
static const V lit197("POWER_ANGLE");
static const V lit198("CAM_1");
static const V lit199("CAM_COAST");
static const V lit200("COAST_ANGLE");
static const V lit201("CAM_2");
static const V lit202("OK: ");
static const V lit203("wheels");
static const V lit204("angularSpeed");
static const V lit205("WHEEL");
static const V lit206("ngp_wheel_omega_");
static const V lit207("ngp_tire_omega_");
static const V lit208("ngp_tire_state_omega_");
static const V lit209("ngp_tdyn_omega_");
static const V lit210("ngp_contact_load_");
static const V lit211("ngp_tire_state_load_");
static const V lit212("ngp_wheel_load_");
static const V lit213("ngp_sprung_load_");
static const V lit214("ngp_load_path_wheel_load_");
static const V lit215("ngp_dlt_load_");
static const V lit216("ngp_tire_memory_2");
static const V lit217("ngp_rubber_memory_2");
static const V lit218("ngp_memory_2");
static const V lit219("ngp_tire_memory_3");
static const V lit220("ngp_rubber_memory_3");
static const V lit221("ngp_memory_3");
static const V lit222("ngp_contact_loss_2");
static const V lit223("ngp_contact_loss_3");
static const V lit224("ngp_contact_quality_2");
static const V lit225("ngp_tire_contact_quality_2");
static const V lit226("ngp_tcr_quality_2");
static const V lit227("ngp_contact_quality_3");
static const V lit228("ngp_tire_contact_quality_3");
static const V lit229("ngp_tcr_quality_3");
static const V lit230("ngp_drive_contact_loss");
static const V lit231("ngp_drive_torque");
static const V lit232("ngp_driveline_torque");
static const V lit233("ngp_shaft_twist");
static const V lit234("ngp_driveline_twist");
static const V lit235("ngp_windup_value");
static const V lit236("ngp_shaft_velocity");
static const V lit237("ngp_windup_velocity");
static const V lit238("ngp_drive_lash");
static const V lit239("ngp_driveline_lash");
static const V lit240("ngp_shift_shock");
static const V lit241("ngp_driveline_shift_shock");
static const V lit242("ngp_drive_hop_shock");
static const V lit243("ngp_tire_hop_avg_instability");
static const V lit244("ngp_damper_hyst_avg_impact");
static const V lit245("ngp_control_arm_total");
static const V lit246("ngp_arm_total");
static const V lit247("ngp_compliance_rear_axle_windup");
static const V lit248("torqueInputContract");
static const V lit249("drivetrain_nm_v1");
static const V lit250("explicitInputTorqueNm");
static const V lit251("DRIVETRAIN_NM_V1");
static const V lit252("NGP_NORMALIZED");
static const V lit253("NGP_NM");
static const V lit254("ESTIMATED");
static const V lit255("rad");
static const V lit256("tan");
static const V lit257("ngp_rear_bias");
static const V lit258("ngp_load_rear");
static const V lit259("_dt");
static const V lit260("min");
static const V lit261("INI_MECHANICAL");
static const V lit262("CAR_CONFIG_MECHANICAL");
static const V lit263("ngp_lsd_lock");
static const V lit264("ngp_diff_lock");
static const V lit265("ngp_lsd_diff");
static const V lit266("ngp_diff_diff");
static const V lit267("ngp_lsd_sdiff");
static const V lit268("ngp_lsd_heat");
static const V lit269("ngp_diff_heat");
static const V lit270("ngp_lsd_mode");
static const V lit271("ngp_lsd_target");
static const V lit272("ngp_lsd_status");
static const V lit273("ngp_lsd_update_count");
static const V lit274("ngp_lsd_source");
static const V lit275("ngp_lsd_config_source");
static const V lit276("ngp_lsd_input_torque_nm");
static const V lit277("ngp_lsd_lock_torque");
static const V lit278("ngp_lsd_lock_torque_nm");
static const V lit279("ngp_lsd_preload_torque");
static const V lit280("ngp_lsd_preload_torque_nm");
static const V lit281("ngp_lsd_cam_torque");
static const V lit282("ngp_lsd_cam_torque_nm");
static const V lit283("ngp_lsd_resist_torque");
static const V lit284("ngp_lsd_resist_torque_nm");
static const V lit285("ngp_lsd_klock_percent");
static const V lit286("ngp_lsd_mechanical_lock");
static const V lit287("ngp_lsd_observed_lock");
static const V lit288("ngp_diff_power");
static const V lit289("ngp_diff_coast");
static const V lit290("ngp_diff_preload");
static const V lit291("ngp_diff_forceL");
static const V lit292("ngp_diff_forceR");
static const V lit293("ngp_lsd_omega_l");
static const V lit294("ngp_lsd_omega_r");
static const V lit295("ngp_lsd_raw_omega_l");
static const V lit296("ngp_lsd_raw_omega_r");
static const V lit297("ngp_lsd_omega_linked");
static const V lit298("ngp_lsd_load_diff");
static const V lit299("ngp_lsd_load_rl");
static const V lit300("ngp_lsd_load_rr");
static const V lit301("ngp_lsd_diff_filtered");
static const V lit302("ngp_lsd_sdiff_filtered");
static const V lit303("ngp_lsd_drive_torque");
static const V lit304("ngp_lsd_drive_torque_nm");
static const V lit305("ngp_lsd_torque_source");
static const V lit306("ngp_lsd_power_ratio");
static const V lit307("ngp_lsd_coast_ratio");
static const V lit308("ngp_lsd_active_ratio");
static const V lit309("ngp_lsd_cam_power_deg");
static const V lit310("ngp_lsd_cam_coast_deg");
static const V lit311("ngp_lsd_active_cam_deg");
static const V lit312("ngp_lsd_config_status");
static const V lit313("ngp_lsd_config_warning");
static const V lit314("ngp_lsd_config_path");
static const V lit315("ngp_lsd_drivetrain_type");
static const V lit316("ngp_lsd_final_ratio");
static const V lit317("ngp_lsd_gear");
static const V lit318("ngp_lsd_gear_ratio");
static const V lit319("ngp_lsd_shaft_twist");
static const V lit320("ngp_lsd_shift_shock");
static const V lit321("ngp_lsd_contact_loss");
static const V lit322("ngp_lsd_hop_shock");
static const V lit323("ngp_lsd_arm_twist");
static const V lit324("ngp_lsd_rear_memory");
static const V lit325("init");
static const V lit326("update");
static const V lit327("Unknown LSD torque input contract");
static const V lit328("ngp_diff_input_torque_nm");
static const V lit329("ngp_engine_torque_nm");
static const V lit330("LSD explicit torque input unavailable");
static const V lit331("explicitPowerMode");
static const V lit332("BAD DT");
static const V lit333("NO CAR");
static const V lit334("NO WHEELS");
static const V lit335("NO OMEGA");
static const V lit336("RUNNING");
static const V lit337("speedKmh");
static const V lit338("gas");
static const V lit339("brake");
static const V lit340("getLock");
static const V lit341("getTargetLock");
static const V lit342("getDiff");
static const V lit343("getSignedDiff");
static const V lit344("getHeat");
static const V lit345("getMode");
static const V lit346("getLockTorque");
static const V lit347("getInputTorque");
static const V lit348("getState");
static const V lit349("debugStr");
static const V lit350("format");
static const V lit351("Status %s / Lock %.1f%% Target %.1f%% Mode %s Src %s\n");
static const V lit352("Tin %.0fNm Tlock %.0fNm Pre %.0f Cam %.0f K %.1f%%\n");
static const V lit353("Diff %.3f Signed %.3f Filt %.3f Heat %.1f\n");
static const V lit354("INI %s P %.2f C %.2f Cam %.0f/%.0f\n");
static const V lit355("OmegaL %.2f OmegaR %.2f LoadDiff %.0f");
V load_diff_lsd(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(45);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(true));set(z,lit3,lit4);set(z,lit5,V(false));set(z,lit6,V(0.35));set(z,lit7,V(0.15));set(z,lit8,V(40.0));set(z,lit9,V(45.0));set(z,lit10,V(75.0));set(z,lit11,V(0.12));set(z,lit12,V(8.0));set(z,lit13,V(0.055));set(z,lit14,V(0.028));set(z,lit15,V(15.0));set(z,lit16,V(85.0));set(z,lit17,V(4.0));set(z,lit18,V(650.0));set(z,lit19,V(260.0));set(z,lit20,V(55.0));set(z,lit21,V(0.88));set(z,lit22,V(8.0));set(z,lit23,V(80.0));set(z,lit24,V(4200.0));set(z,lit25,V(2200.0));set(z,lit26,V(0.05));set(z,lit27,V(0.1));set(z,lit28,V(0.045));set(z,lit29,V(0.0005));set(z,lit30,V(0.05));set(z,lit31,V(2.0));set(z,lit32,V(0.2));set(z,lit33,V(3.0));set(z,lit34,V(0.018));set(z,lit35,V(0.055));set(z,lit36,V(0.03));set(z,lit37,V(0.0));set(z,lit38,V(1.0));set(z,lit39,V(3000.0));set(z,lit40,V(2000.0));set(z,lit41,V(0.22));set(z,lit42,V(0.22));set(z,lit43,V(0.1));set(z,lit44,V(0.1));set(z,lit45,V(0.14));set(z,lit46,V(0.16));set(z,lit47,V(0.1));set(z,lit48,V(0.08));set(z,lit49,V(0.1));set(z,lit50,V(0.55));set(z,lit51,V(1.18));set(z,lit52,V(true));set(z,lit53,V(0.65));set(z,lit54,V(3.0));set(z,lit55,V(650.0));set(z,lit56,V(0.05));set(z,lit57,V(0.75));set(z,lit58,V(0.1));set(z,lit59,V(0.42));set(z,lit60,V(0.18));set(z,lit61,V(0.55));set(z,lit62,V(0.55));set(z,lit63,V(90.0));set(z,lit64,V(0.01));set(z,lit65,V(0.35));set(z,lit66,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,lit78);set(z,lit79,lit80);set(z,lit81,lit80);set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.5));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,lit94);set(z,lit95,V(0.0));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(false));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,lit121);set(z,lit122,lit94);set(z,lit123,lit124);set(z,lit125,lit94);set(z,lit126,lit127);set(z,lit128,V(1.0));set(z,lit129,V(1.0));set(z,lit130,V(0.0));set(z,lit131,([&](){V z=table();return z;})());set(z,lit132,V(999.0));set(z,lit133,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit134)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit135)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit136)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit136)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
{V t17=get(e->slot(0,0),lit137);e->slot(0,6)=std::move(t17);}
e->slot(0,7)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t18=V(!truth(e->get("ac")));return !truth(t18)?V(!truth(get(e->get("ac"),lit138))):t18;})())){return Args{V()};
}
{Args t19=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit138),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t19,0);e->slot(0,1)=arg(t19,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
{V t20=get(e->slot(0,0),lit139);e->slot(0,8)=std::move(t20);}
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
{V t32=get(e->slot(0,0),lit140);e->slot(0,11)=std::move(t32);}
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t33=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t33));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t34=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t34));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t35=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t35));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t36=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t36));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,4),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}))))};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t37=add(([&](){V t38=get(e->slot(1,2),lit132);return !truth(t38)?V(0.0):t38;})(),([&](){V t39=e->slot(0,0);return !truth(t39)?V(0.0):t39;})());refs[0].put(std::move(t37));}
if(truth(ge(get(e->slot(1,2),lit132),get(get(e->slot(1,1),lit1),lit66)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t40=V(0.0);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t41=V(true);refs[0].put(std::move(t41));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t42=V(false);refs[0].put(std::move(t42));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t43=first(call(e->slot(1,3),Args{e->slot(0,0),([&](){V t44=e->slot(0,1);return !truth(t44)?V(0.0):t44;})()}));e->slot(0,2)=std::move(t43);}
if(truth(gt(e->slot(0,2),V(1.5)))){{std::array<Ref,1> refs{Ref(e,0,2)};V t45=divv(e->slot(0,2),V(100.0));refs[0].put(std::move(t45));}
}
return call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(1.0)});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return method(first(method(first(call(e->get("tostring"),Args{([&](){V t46=e->slot(0,0);return !truth(t46)?lit124:t46;})()})),"gsub",Args{lit141,lit124})),"gsub",Args{lit142,lit124});
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);{V t47=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t47);}
{V t48=first(call(get(e->get("math"),lit143),Args{mul(mul(get(e->slot(0,0),lit11),get(e->slot(0,0),lit12)),get(e->slot(0,0),lit13)),V(1e-05)}));e->slot(0,1)=std::move(t48);}
{V t49=first(call(get(e->get("math"),lit143),Args{get(e->slot(0,0),lit14),V(1e-05)}));e->slot(0,2)=std::move(t49);}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e,0,0)};V t50=first(call(e->slot(2,4),Args{e->slot(0,0),V(0.01),V(1.25)}));refs[0].put(std::move(t50));}
{V t51=first(call(get(e->get("math"),lit144),call(get(e->get("math"),lit145),Args{divv(e->slot(1,1),mul(e->slot(1,2),e->slot(0,0)))})));e->slot(0,2)=std::move(t51);}
return call(e->slot(2,4),Args{e->slot(0,2),get(e->slot(1,0),lit15),get(e->slot(1,0),lit16)});
return Args{};});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t52=first(call(e->slot(0,3),Args{get(e->slot(1,2),lit112),get(e->slot(0,0),lit9)}));refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t53=first(call(e->slot(0,3),Args{get(e->slot(1,2),lit113),get(e->slot(0,0),lit10)}));refs[0].put(std::move(t53));}
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,6);e->slot(0,0)=arg(a,0);if(truth(([&](){V t54=([&](){V t55=V(!truth(e->get("io")));return !truth(t55)?V(!truth(get(e->get("io"),lit146))):t55;})();return !truth(t54)?V(!truth(e->slot(0,0))):t54;})())){return Args{V()};
}
{Args t56=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("io"),lit146),Args{e->slot(1,0),lit147});
return Args{};})});e->slot(0,1)=arg(t56,0);e->slot(0,2)=arg(t56,1);}
if(truth(([&](){V t57=V(!truth(e->slot(0,1)));return !truth(t57)?V(!truth(e->slot(0,2))):t57;})())){return Args{V()};
}
{V t58=([&](){V z=table();return z;})();e->slot(0,3)=std::move(t58);}
{V t59=V();e->slot(0,4)=std::move(t59);}
{V t60=first(call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{Args t61=method(e->slot(1,2),"lines",Args{});V t62=arg(t61,2);while(true){Args t63=call(arg(t61,0),Args{arg(t61,1),t62});t62=arg(t63,0);if(isnil(t62))break;auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=arg(t63,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t64=first(call(e->get("tostring"),Args{([&](){V t65=e->slot(0,0);return !truth(t65)?lit124:t65;})()}));refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t66=first(method(e->slot(0,0),"gsub",Args{lit148,lit124}));refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t67=first(method(e->slot(0,0),"gsub",Args{lit149,lit124}));refs[0].put(std::move(t67));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t68=first(call(e->slot(3,15),Args{e->slot(0,0)}));refs[0].put(std::move(t68));}
if(truth(ne(e->slot(0,0),lit124))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t69=first(method(e->slot(1,0),"match",Args{lit150}));e->slot(0,0)=std::move(t69);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,3,4)};V t70=first(call(e->slot(4,15),Args{e->slot(0,0)}));refs[0].put(std::move(t70));}
{std::array<Ref,1> refs{Ref(e->slot(3,3),e->slot(3,4))};V t71=([&](){V t72=get(e->slot(3,3),e->slot(3,4));return !truth(t72)?([&](){V z=table();return z;})():t72;})();refs[0].put(std::move(t71));}
}else{auto parent=e;Env storage(parent,false,2);auto e=&storage;{Args t73=method(e->slot(2,0),"match",Args{lit151});e->slot(0,0)=arg(t73,0);e->slot(0,1)=arg(t73,1);}
if(truth(([&](){V t74=([&](){V t75=e->slot(0,0);return truth(t75)?e->slot(0,1):t75;})();return truth(t74)?e->slot(4,4):t74;})())){{std::array<Ref,1> refs{Ref(get(e->slot(4,3),e->slot(4,4)),first(call(e->slot(5,15),Args{e->slot(0,0)})))};V t76=first(call(e->slot(5,15),Args{e->slot(0,1)}));refs[0].put(std::move(t76));}
}
}
}
}}
return Args{};})}));e->slot(0,5)=std::move(t60);}
call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;method(e->slot(1,2),"close",Args{});
return Args{};})});
if(truth(V(!truth(e->slot(0,5))))){return Args{V()};
}
return Args{e->slot(0,3)};
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);e->slot(0,0)=arg(a,0);{V t77=V();e->slot(0,1)=std::move(t77);}
if(truth(ne(e->slot(0,1),V()))){return call(e->get("tostring"),Args{e->slot(0,1)});
}
if(truth(([&](){V t78=e->get("ac");return truth(t78)?get(e->get("ac"),lit152):t78;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t79=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit152),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t79,0);e->slot(0,1)=arg(t79,1);}
if(truth(([&](){V t80=e->slot(0,0);return truth(t80)?e->slot(0,1):t80;})())){return call(e->get("tostring"),Args{e->slot(0,1)});
}
}
return Args{V()};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);e->slot(0,0)=arg(a,0);{V t81=first(call(e->slot(1,18),Args{e->slot(0,0)}));e->slot(0,1)=std::move(t81);}
if(truth(V(!truth(e->slot(0,1))))){return Args{V()};
}
if(truth(([&](){V t82=([&](){V t83=([&](){V t84=e->get("ac");return truth(t84)?get(e->get("ac"),lit153):t84;})();return truth(t83)?get(e->get("ac"),lit154):t83;})();return truth(t82)?get(get(e->get("ac"),lit154),lit155):t82;})())){auto parent=e;auto e=std::make_shared<Env>(parent,false,2);{Args t85=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit153),Args{get(get(e->get("ac"),lit154),lit155)});
return Args{};})});e->slot(0,0)=arg(t85,0);e->slot(0,1)=arg(t85,1);}
if(truth(([&](){V t86=e->slot(0,0);return truth(t86)?e->slot(0,1):t86;})())){return Args{concat(first(call(e->get("tostring"),Args{e->slot(0,1)})),concat(lit156,concat(e->slot(1,1),concat(lit156,get(get(e->slot(2,1),lit1),lit3)))))};
}
}
return Args{concat(lit157,concat(e->slot(0,1),concat(lit156,get(get(e->slot(1,1),lit1),lit3))))};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t87=V(true);refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit119)};V t88=V(true);refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t89=concat(lit158,first(call(e->get("tostring"),Args{([&](){V t90=e->slot(0,0);return !truth(t90)?lit127:t90;})()})));refs[0].put(std::move(t89));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t91=lit159;refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit125)};V t92=first(call(e->get("tostring"),Args{([&](){V t93=e->slot(0,0);return !truth(t93)?lit127:t93;})()}));refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t94=lit127;refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t95=get(get(e->slot(1,1),lit1),lit6);refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t96=get(get(e->slot(1,1),lit1),lit7);refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t97=get(get(e->slot(1,1),lit1),lit8);refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t98=V(1.0);refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t99=([&](){V z=table();return z;})();refs[0].put(std::move(t99));}
call(e->slot(1,16),Args{});
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{Args t100=call(e->get("ipairs"),Args{e->slot(0,1)});V t101=arg(t100,2);while(true){Args t102=call(arg(t100,0),Args{arg(t100,1),t101});t101=arg(t102,0);if(isnil(t101))break;auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=arg(t102,0);e->slot(0,1)=arg(t102,1);if(truth(get(e->slot(1,0),e->slot(0,1)))){return Args{get(e->slot(1,0),e->slot(0,1)),e->slot(0,1)};
}
}}
return Args{V(),lit124};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t103=([&](){V z=table();return z;})();refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t104=V(1.0);refs[0].put(std::move(t104));}
if(truth(V(!truth(e->slot(0,0))))){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t105=first(call(e->slot(1,3),joined(Args{get(e->slot(0,0),lit160)},call(e->slot(1,3),Args{get(e->slot(0,0),lit161),V(1.0)}))));refs[0].put(std::move(t105));}
if(truth(eq(get(e->slot(1,2),lit128),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t106=V(1.0);refs[0].put(std::move(t106));}
}
{double t107=num(V(1.0)),t108=num(V(10.0)),t109=num(V(1.0));for(double t110=t107;(t109>0?t110<=t108:t110>=t108);t110+=t109){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t110);{V t111=concat(lit162,e->slot(0,0));e->slot(0,1)=std::move(t111);}
{V t112=first(call(e->slot(2,3),Args{get(e->slot(1,0),e->slot(0,1)),V()}));e->slot(0,2)=std::move(t112);}
if(truth(([&](){V t113=ne(e->slot(0,2),V());return truth(t113)?ne(e->slot(0,2),V(0.0)):t113;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit131),e->slot(0,0))};V t114=e->slot(0,2);refs[0].put(std::move(t114));}
}
}}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,7);e->slot(0,0)=arg(a,0);{V t115=([&](){V t116=get(get(e->slot(1,1),lit1),lit163);return !truth(t116)?lit164:t116;})();e->slot(0,1)=std::move(t115);}
if(truth(([&](){V t117=ne(e->slot(0,1),lit164);return truth(t117)?ne(e->slot(0,1),lit165):t117;})())){call(e->get("error"),Args{lit166});
}
if(truth(eq(e->slot(0,1),lit165))){auto parent=e;auto e=std::make_shared<Env>(parent,false,8);if(truth(get(e->slot(2,2),lit118))){return Args{eq(get(e->slot(2,2),lit122),lit167)};
}
e->slot(0,0)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);return call(get(e->get("ac"),lit168),Args{V(0.0),e->slot(0,0),e->slot(0,1),V()});
return Args{};});
e->slot(0,1)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t118=first(call(e->slot(1,0),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,4)=std::move(t118);}
if(truth(([&](){V t119=([&](){V t120=([&](){V t121=ne(first(call(e->get("type"),Args{e->slot(0,4)})),lit169);return !truth(t121)?ne(e->slot(0,4),e->slot(0,4)):t121;})();return !truth(t120)?lt(e->slot(0,4),e->slot(0,2)):t120;})();return !truth(t119)?gt(e->slot(0,4),e->slot(0,3)):t119;})())){call(e->get("error"),Args{concat(lit170,concat(e->slot(0,0),concat(lit171,e->slot(0,1))))});
}
return Args{e->slot(0,4)};
return Args{};});
if(truth(ne(first(call(e->slot(0,0),Args{lit172,lit173})),lit174))){call(e->get("error"),Args{lit175});
}
{V t122=first(call(e->slot(0,1),Args{lit176,lit177,V(0.0),V(1.0)}));e->slot(0,2)=std::move(t122);}
{V t123=first(call(e->slot(0,1),Args{lit176,lit78,V(0.0),V(1.0)}));e->slot(0,3)=std::move(t123);}
{V t124=first(call(e->slot(0,1),Args{lit176,lit178,V(0.0),V(500.0)}));e->slot(0,4)=std::move(t124);}
{V t125=([&](){V z=table();set(z,lit160,first(call(e->slot(0,1),Args{lit179,lit160,V(1e-06),V(10000.0)})));return z;})();e->slot(0,5)=std::move(t125);}
{V t126=first(call(e->slot(0,1),Args{lit179,lit180,V(1.0),V(10.0)}));e->slot(0,6)=std::move(t126);}
if(truth(ne(e->slot(0,6),first(call(get(e->get("math"),lit181),Args{e->slot(0,6)}))))){call(e->get("error"),Args{lit182});
}
{double t127=num(V(1.0)),t128=num(e->slot(0,6)),t129=num(V(1.0));for(double t130=t127;(t129>0?t130<=t128:t130>=t128);t130+=t129){auto parent=e;auto e=std::make_shared<Env>(parent,false,1);e->slot(0,0)=V(t130);{std::array<Ref,1> refs{Ref(e->slot(1,5),concat(lit162,e->slot(0,0)))};V t131=first(call(e->slot(1,1),Args{lit179,concat(lit162,e->slot(0,0)),V(1e-06),V(10000.0)}));refs[0].put(std::move(t131));}
}}
{V t132=first(call(e->slot(0,1),Args{lit179,lit183,V(-num(V(10000.0))),V(-num(V(1e-06)))}));e->slot(0,7)=std::move(t132);}
call(e->slot(2,22),Args{e->slot(0,5)});
{std::array<Ref,1> refs{Ref(get(e->slot(2,2),lit131),V(-num(V(1.0))))};V t133=e->slot(0,7);refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit126)};V t134=lit174;refs[0].put(std::move(t134));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit112)};V t135=e->slot(0,2);refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit113)};V t136=e->slot(0,3);refs[0].put(std::move(t136));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit108)};V t137=e->slot(0,4);refs[0].put(std::move(t137));}
call(e->slot(2,16),Args{});
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit118)};V t138=V(true);refs[0].put(std::move(t138));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit119)};V t139=V(true);refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit122)};V t140=lit167;refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit120)};V t141=lit184;refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit125)};V t142=lit94;refs[0].put(std::move(t142));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit123)};V t143=lit124;refs[0].put(std::move(t143));}
return Args{V(true)};
}
if(truth(V(!truth(get(get(e->slot(1,1),lit1),lit2))))){call(e->slot(1,20),Args{lit185});
return Args{V(false)};
}
if(truth(([&](){V t144=get(e->slot(1,2),lit118);return truth(t144)?V(!truth(get(get(e->slot(1,1),lit1),lit5))):t144;})())){return Args{eq(get(e->slot(1,2),lit122),lit186)};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit119)};V t145=V(true);refs[0].put(std::move(t145));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t146=V(false);refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t147=lit187;refs[0].put(std::move(t147));}
{V t148=first(call(e->slot(1,19),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t148);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit123)};V t149=first(call(e->get("tostring"),Args{([&](){V t150=e->slot(0,2);return !truth(t150)?lit124:t150;})()}));refs[0].put(std::move(t149));}
if(truth(V(!truth(e->slot(0,2))))){call(e->slot(1,20),Args{lit188});
return Args{V(false)};
}
{V t151=first(call(e->slot(1,17),Args{e->slot(0,2)}));e->slot(0,3)=std::move(t151);}
if(truth(V(!truth(e->slot(0,3))))){call(e->slot(1,20),Args{lit189});
return Args{V(false)};
}
{Args t152=call(e->slot(1,21),Args{e->slot(0,3),([&](){V z=table();set(z,V(1.0),lit176);set(z,V(2.0),lit190);set(z,V(3.0),lit191);set(z,V(4.0),lit192);return z;})()});e->slot(0,4)=arg(t152,0);e->slot(0,5)=arg(t152,1);}
if(truth(V(!truth(e->slot(0,4))))){call(e->slot(1,20),Args{lit193});
return Args{V(false)};
}
{V t153=([&](){V t154=get(e->slot(0,3),lit172);return !truth(t154)?get(e->slot(0,3),lit194):t154;})();e->slot(0,6)=std::move(t153);}
if(truth(([&](){V t155=e->slot(0,6);return truth(t155)?get(e->slot(0,6),lit173):t155;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t156=first(call(e->get("tostring"),Args{get(e->slot(0,6),lit173)}));refs[0].put(std::move(t156));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t157=lit127;refs[0].put(std::move(t157));}
}
call(e->slot(1,22),Args{([&](){V t158=get(e->slot(0,3),lit179);return !truth(t158)?get(e->slot(0,3),lit195):t158;})()});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t159=first(call(e->slot(1,14),Args{get(e->slot(0,4),lit177),get(get(e->slot(1,1),lit1),lit6)}));refs[0].put(std::move(t159));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t160=first(call(e->slot(1,14),Args{get(e->slot(0,4),lit78),get(get(e->slot(1,1),lit1),lit7)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t161=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{get(e->slot(0,4),lit178),get(get(e->slot(1,1),lit1),lit8)})),V(0.0),V(500.0)}));refs[0].put(std::move(t161));}
call(e->slot(1,16),Args{});
if(truth(([&](){V t162=([&](){V t163=get(e->slot(0,4),lit196);return !truth(t163)?get(e->slot(0,4),lit197):t163;})();return !truth(t162)?get(e->slot(0,4),lit198):t162;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit115)};V t164=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),joined(Args{get(e->slot(0,4),lit196)},call(e->slot(1,3),joined(Args{get(e->slot(0,4),lit197)},call(e->slot(1,3),Args{get(e->slot(0,4),lit198),get(get(e->slot(1,1),lit1),lit9)})))))),get(get(e->slot(1,1),lit1),lit15),get(get(e->slot(1,1),lit1),lit16)}));refs[0].put(std::move(t164));}
}
if(truth(([&](){V t165=([&](){V t166=get(e->slot(0,4),lit199);return !truth(t166)?get(e->slot(0,4),lit200):t166;})();return !truth(t165)?get(e->slot(0,4),lit201):t165;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t167=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),joined(Args{get(e->slot(0,4),lit199)},call(e->slot(1,3),joined(Args{get(e->slot(0,4),lit200)},call(e->slot(1,3),Args{get(e->slot(0,4),lit201),get(get(e->slot(1,1),lit1),lit10)})))))),get(get(e->slot(1,1),lit1),lit15),get(get(e->slot(1,1),lit1),lit16)}));refs[0].put(std::move(t167));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t168=V(true);refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t169=lit186;refs[0].put(std::move(t169));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t170=concat(lit202,first(call(e->get("tostring"),Args{e->slot(0,5)})));refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit125)};V t171=lit94;refs[0].put(std::move(t171));}
return Args{V(true)};
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(([&](){V t172=V(!truth(e->slot(0,0)));return !truth(t172)?V(!truth(get(e->slot(0,0),lit203))):t172;})())){return Args{V()};
}
{Args t173=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit203),e->slot(1,1))};
return Args{};})});e->slot(0,2)=arg(t173,0);e->slot(0,3)=arg(t173,1);}
if(truth(([&](){V t174=e->slot(0,2);return truth(t174)?e->slot(0,3):t174;})())){return Args{e->slot(0,3)};
}
{std::array<Ref,2> refs{Ref(e,0,2),Ref(e,0,3)};Args t175=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(get(e->slot(1,0),lit203),add(e->slot(1,1),V(1.0)))};
return Args{};})});refs[0].put(arg(t175,0));refs[1].put(arg(t175,1));}
if(truth(e->slot(0,2))){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,0))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t176=([&](){V z=table();set(z,V(1.0),lit204);return z;})();e->slot(0,0)=std::move(t176);}
{double t177=num(V(1.0)),t178=num(length(e->slot(0,0))),t179=num(V(1.0));for(double t180=t177;(t179>0?t180<=t178:t180>=t178);t180+=t179){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t180);{V t181=first(call(e->slot(3,6),Args{e->slot(2,0),get(e->slot(1,0),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t181);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(3,3),Args{e->slot(0,1),V(0.0)})),lit205};
}
}}
}
{Args t182=call(e->slot(1,10),Args{V(0.0),concat(lit206,e->slot(0,1)),concat(lit207,e->slot(0,1)),concat(lit208,e->slot(0,1)),concat(lit209,e->slot(0,1))});e->slot(0,2)=arg(t182,0);e->slot(0,3)=arg(t182,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,2),e->slot(0,3)};
}
return Args{V(),lit94};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,7);auto e=&storage;e->slot(0,0)=arg(a,0);{V t183=first(call(e->slot(1,24),Args{e->slot(0,0),V(2.0)}));e->slot(0,1)=std::move(t183);}
{V t184=first(call(e->slot(1,24),Args{e->slot(0,0),V(3.0)}));e->slot(0,2)=std::move(t184);}
if(truth(([&](){V t185=V(!truth(e->slot(0,1)));return truth(t185)?V(!truth(e->slot(0,2))):t185;})())){return Args{V(),V()};
}
{Args t186=call(e->slot(1,25),Args{e->slot(0,1),V(2.0)});e->slot(0,3)=arg(t186,0);e->slot(0,4)=arg(t186,1);}
{Args t187=call(e->slot(1,25),Args{e->slot(0,2),V(3.0)});e->slot(0,5)=arg(t187,0);e->slot(0,6)=arg(t187,1);}
if(truth(([&](){V t188=eq(e->slot(0,3),V());return !truth(t188)?eq(e->slot(0,5),V()):t188;})())){return Args{V(),V()};
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t189=([&](){V t190=ne(e->slot(0,4),lit94);return !truth(t190)?ne(e->slot(0,6),lit94):t190;})();refs[0].put(std::move(t189));}
return Args{e->slot(0,3),e->slot(0,5)};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t191=e->slot(0,1);refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t192=e->slot(0,2);refs[0].put(std::move(t192));}
{V t193=add(first(call(e->slot(1,5),Args{e->slot(0,1)})),first(call(e->slot(1,5),Args{e->slot(0,2)})));e->slot(0,4)=std::move(t193);}
if(truth(([&](){V t194=lt(e->slot(0,0),get(get(e->slot(1,1),lit1),lit31));return truth(t194)?lt(e->slot(0,4),get(get(e->slot(1,1),lit1),lit32)):t194;})())){return Args{get(e->slot(1,2),lit102),get(e->slot(1,2),lit103)};
}
{V t195=([&](){V t196=lt(e->slot(0,0),get(get(e->slot(1,1),lit1),lit33));return truth(t196)?lt(e->slot(0,4),get(get(e->slot(1,1),lit1),lit32)):t196;})();e->slot(0,5)=std::move(t195);}
if(truth(e->slot(0,5))){return Args{get(e->slot(1,2),lit102),get(e->slot(1,2),lit103)};
}
{V t197=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit102),e->slot(0,1),get(get(e->slot(1,1),lit1),lit34),e->slot(0,3)}));e->slot(0,6)=std::move(t197);}
{V t198=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit103),e->slot(0,2),get(get(e->slot(1,1),lit1),lit34),e->slot(0,3)}));e->slot(0,7)=std::move(t198);}
return Args{e->slot(0,6),e->slot(0,7)};
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t199=call(e->slot(1,10),Args{V(),concat(lit210,e->slot(0,0)),concat(lit211,e->slot(0,0)),concat(lit212,e->slot(0,0)),concat(lit213,e->slot(0,0)),concat(lit214,e->slot(0,0))});e->slot(0,1)=arg(t199,0);e->slot(0,2)=arg(t199,1);}
if(truth(e->slot(0,2))){return call(e->slot(1,5),Args{e->slot(0,1)});
}
{V t200=first(call(e->slot(1,8),Args{concat(lit215,e->slot(0,0))}));e->slot(0,3)=std::move(t200);}
if(truth(ne(e->slot(0,3),V()))){return call(get(e->get("math"),lit143),Args{V(0.0),add(get(get(e->slot(1,1),lit1),lit39),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})))});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t201=first(call(e->slot(1,28),Args{V(2.0)}));refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t202=first(call(e->slot(1,28),Args{V(3.0)}));refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t203=first(call(e->slot(1,5),Args{sub(get(e->slot(1,2),lit83),get(e->slot(1,2),lit84))}));refs[0].put(std::move(t203));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t204=first(call(e->slot(1,9),joined(Args{lit216},call(e->slot(1,9),joined(Args{lit217},call(e->slot(1,9),Args{lit218,V(0.0)}))))));e->slot(0,0)=std::move(t204);}
{V t205=first(call(e->slot(1,9),joined(Args{lit219},call(e->slot(1,9),joined(Args{lit220},call(e->slot(1,9),Args{lit221,V(0.0)}))))));e->slot(0,1)=std::move(t205);}
return call(e->slot(1,4),Args{mul(add(e->slot(0,0),e->slot(0,1)),V(0.5)),V(0.0),V(1.0)});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t206=first(call(e->slot(1,8),Args{lit222}));e->slot(0,0)=std::move(t206);}
{V t207=first(call(e->slot(1,8),Args{lit223}));e->slot(0,1)=std::move(t207);}
if(truth(eq(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t208=([&](){V t209=([&](){V t210=first(call(e->slot(2,8),Args{lit224}));return !truth(t210)?first(call(e->slot(2,8),Args{lit225})):t210;})();return !truth(t209)?first(call(e->slot(2,8),Args{lit226})):t209;})();e->slot(0,0)=std::move(t208);}
{std::array<Ref,1> refs{Ref(e,1,0)};V t211=([&](){V t212=([&](){V t213=ne(e->slot(0,0),V());return truth(t213)?sub(V(1.0),first(call(e->slot(2,3),Args{e->slot(0,0),V(1.0)}))):t213;})();return !truth(t212)?V():t212;})();refs[0].put(std::move(t211));}
}
if(truth(eq(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t214=([&](){V t215=([&](){V t216=first(call(e->slot(2,8),Args{lit227}));return !truth(t216)?first(call(e->slot(2,8),Args{lit228})):t216;})();return !truth(t215)?first(call(e->slot(2,8),Args{lit229})):t215;})();e->slot(0,0)=std::move(t214);}
{std::array<Ref,1> refs{Ref(e,1,1)};V t217=([&](){V t218=([&](){V t219=ne(e->slot(0,0),V());return truth(t219)?sub(V(1.0),first(call(e->slot(2,3),Args{e->slot(0,0),V(1.0)}))):t219;})();return !truth(t218)?V():t218;})();refs[0].put(std::move(t217));}
}
{V t220=first(call(e->slot(1,8),Args{lit230}));e->slot(0,2)=std::move(t220);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)});
}
return call(e->slot(1,4),Args{mul(add(first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}))),V(0.5)),V(0.0),V(1.0)});
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t221=first(call(e->slot(1,9),joined(Args{lit231},call(e->slot(1,9),Args{lit232,V(0.0)}))));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t222=first(call(e->slot(1,5),Args{get(e->slot(1,2),lit88)}));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t223=first(call(e->slot(1,9),joined(Args{lit233},call(e->slot(1,9),joined(Args{lit234},call(e->slot(1,9),Args{lit235,V(0.0)}))))));refs[0].put(std::move(t223));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t224=first(call(e->slot(1,9),joined(Args{lit236},call(e->slot(1,9),Args{lit237,V(0.0)}))));refs[0].put(std::move(t224));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t225=first(call(e->slot(1,9),joined(Args{lit238},call(e->slot(1,9),Args{lit239,V(0.0)}))));refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t226=first(call(e->slot(1,9),joined(Args{lit240},call(e->slot(1,9),Args{lit241,V(0.0)}))));refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t227=first(call(e->slot(1,31),Args{}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t228=first(call(e->slot(1,4),Args{first(call(e->slot(1,9),joined(Args{lit242},call(e->slot(1,9),joined(Args{lit243},call(e->slot(1,9),Args{lit244,V(0.0)})))))),V(0.0),V(1.0)}));refs[0].put(std::move(t228));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t229=first(call(e->slot(1,5),call(e->slot(1,9),joined(Args{lit245},call(e->slot(1,9),joined(Args{lit246},call(e->slot(1,9),Args{lit247,V(0.0)})))))));refs[0].put(std::move(t229));}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t230=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),Args{e->slot(0,0),lit130,V(0.0)})),V(0.0)}));e->slot(0,1)=std::move(t230);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit130)};V t231=e->slot(0,1);refs[0].put(std::move(t231));}
{V t232=get(get(e->slot(1,2),lit131),e->slot(0,1));e->slot(0,2)=std::move(t232);}
if(truth(([&](){V t233=eq(e->slot(0,2),V());return !truth(t233)?eq(e->slot(0,2),V(0.0)):t233;})())){{std::array<Ref,1> refs{Ref(e,0,2)};V t234=V(1.0);refs[0].put(std::move(t234));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit129)};V t235=e->slot(0,2);refs[0].put(std::move(t235));}
return Args{e->slot(0,1),e->slot(0,2)};
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{Args t236=call(e->slot(1,33),Args{e->slot(0,0)});e->slot(0,4)=arg(t236,0);e->slot(0,5)=arg(t236,1);}
{V t237=([&](){V t238=get(e->slot(1,2),lit128);return !truth(t238)?V(1.0):t238;})();e->slot(0,6)=std::move(t237);}
{V t239=first(call(e->slot(1,5),Args{mul(e->slot(0,5),e->slot(0,6))}));e->slot(0,7)=std::move(t239);}
if(truth(lt(e->slot(0,7),V(0.05)))){{std::array<Ref,1> refs{Ref(e,0,7)};V t240=V(1.0);refs[0].put(std::move(t240));}
}
{Args t241=Args{};e->slot(0,8)=arg(t241,0);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e,0,8)};V t242=mul(get(get(e->slot(1,1),lit1),lit19),first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.0)})));refs[0].put(std::move(t242));}
}else{{std::array<Ref,1> refs{Ref(e,0,8)};V t243=mul(get(get(e->slot(1,1),lit1),lit20),add(V(0.35),mul(V(0.65),first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0),V(1.0)})))));refs[0].put(std::move(t243));}
}
{V t244=mul(mul(e->slot(0,8),e->slot(0,7)),get(get(e->slot(1,1),lit1),lit21));e->slot(0,9)=std::move(t244);}
return call(e->slot(1,4),Args{first(call(e->slot(1,5),Args{e->slot(0,9)})),V(0.0),get(get(e->slot(1,1),lit1),lit24)});
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);if(truth(eq(get(get(e->slot(1,1),lit1),lit248),lit249))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t245=first(call(e->slot(2,4),Args{first(call(e->slot(2,5),Args{get(e->slot(2,2),lit250)})),V(0.0),get(get(e->slot(2,1),lit1),lit24)}));e->slot(0,0)=std::move(t245);}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit93)};V t246=lit251;refs[0].put(std::move(t246));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit92)};V t247=e->slot(0,0);refs[0].put(std::move(t247));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit91)};V t248=first(call(e->slot(2,12),Args{get(e->slot(2,2),lit91),e->slot(0,0),get(get(e->slot(2,1),lit1),lit28),e->slot(1,4)}));refs[0].put(std::move(t248));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit90)};V t249=get(e->slot(2,2),lit91);refs[0].put(std::move(t249));}
return Args{get(e->slot(2,2),lit91)};
}
{V t250=get(e->slot(1,2),lit88);e->slot(0,5)=std::move(t250);}
{V t251=first(call(e->slot(1,5),Args{e->slot(0,5)}));e->slot(0,6)=std::move(t251);}
{Args t252=Args{};e->slot(0,7)=arg(t252,0);}
if(truth(gt(e->slot(0,6),V(0.0001)))){if(truth(le(e->slot(0,6),get(get(e->slot(1,1),lit1),lit17)))){{std::array<Ref,1> refs{Ref(e,0,7)};V t253=mul(e->slot(0,6),get(get(e->slot(1,1),lit1),lit18));refs[0].put(std::move(t253));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t254=lit252;refs[0].put(std::move(t254));}
}else{{std::array<Ref,1> refs{Ref(e,0,7)};V t255=e->slot(0,6);refs[0].put(std::move(t255));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t256=lit253;refs[0].put(std::move(t256));}
}
}else{{std::array<Ref,1> refs{Ref(e,0,7)};V t257=first(call(e->slot(1,34),Args{e->slot(0,0),e->slot(0,1),e->slot(0,2),e->slot(0,3)}));refs[0].put(std::move(t257));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t258=lit254;refs[0].put(std::move(t258));}
}
{std::array<Ref,1> refs{Ref(e,0,7)};V t259=first(call(e->slot(1,4),Args{e->slot(0,7),V(0.0),get(get(e->slot(1,1),lit1),lit24)}));refs[0].put(std::move(t259));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t260=e->slot(0,7);refs[0].put(std::move(t260));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t261=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit91),e->slot(0,7),get(get(e->slot(1,1),lit1),lit28),e->slot(0,4)}));refs[0].put(std::move(t261));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t262=get(e->slot(1,2),lit91);refs[0].put(std::move(t262));}
return Args{get(e->slot(1,2),lit91)};
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{V t263=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t263);}
{V t264=first(call(get(e->get("math"),lit255),call(e->slot(1,4),Args{e->slot(0,0),get(e->slot(0,1),lit15),get(e->slot(0,1),lit16)})));e->slot(0,2)=std::move(t264);}
{V t265=first(call(get(e->get("math"),lit143),Args{first(call(get(e->get("math"),lit256),Args{e->slot(0,2)})),V(0.001)}));e->slot(0,3)=std::move(t265);}
{V t266=divv(mul(mul(get(e->slot(0,1),lit11),get(e->slot(0,1),lit12)),get(e->slot(0,1),lit13)),mul(first(call(get(e->get("math"),lit143),Args{get(e->slot(0,1),lit14),V(1e-05)})),e->slot(0,3)));e->slot(0,4)=std::move(t266);}
return call(e->slot(1,4),Args{e->slot(0,4),V(0.0),V(1.25)});
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t267=get(e->slot(1,1),lit1);e->slot(0,2)=std::move(t267);}
{Args t268=Args{};e->slot(0,3)=arg(t268,0);}
{Args t269=Args{};e->slot(0,4)=arg(t269,0);}
if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(e,0,3)};V t270=get(e->slot(1,2),lit112);refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t271=get(e->slot(1,2),lit115);refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t272=lit177;refs[0].put(std::move(t272));}
}else{{std::array<Ref,1> refs{Ref(e,0,3)};V t273=get(e->slot(1,2),lit113);refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e,0,4)};V t274=get(e->slot(1,2),lit116);refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t275=lit78;refs[0].put(std::move(t275));}
}
{V t276=first(call(e->slot(1,36),Args{e->slot(0,4)}));e->slot(0,5)=std::move(t276);}
if(truth(([&](){V t277=eq(get(e->slot(1,2),lit122),lit186);return !truth(t277)?eq(get(e->slot(1,2),lit122),lit167):t277;})())){{std::array<Ref,1> refs{Ref(e,0,5)};V t278=e->slot(0,3);refs[0].put(std::move(t278));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit114)};V t279=e->slot(0,3);refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t280=e->slot(0,4);refs[0].put(std::move(t280));}
{V t281=first(call(get(e->get("math"),lit143),Args{e->slot(0,0),get(e->slot(0,2),lit22)}));e->slot(0,6)=std::move(t281);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t282=first(call(e->slot(1,4),Args{([&](){V t283=get(e->slot(1,2),lit108);return !truth(t283)?get(e->slot(0,2),lit8):t283;})(),V(0.0),V(500.0)}));refs[0].put(std::move(t282));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t284=first(call(e->slot(1,4),Args{mul(e->slot(0,6),e->slot(0,5)),V(0.0),get(e->slot(0,2),lit25)}));refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t285=first(call(e->slot(1,4),Args{add(get(e->slot(1,2),lit109),get(e->slot(1,2),lit108)),V(0.0),get(e->slot(0,2),lit25)}));refs[0].put(std::move(t285));}
{V t286=divv(get(e->slot(1,2),lit107),e->slot(0,6));e->slot(0,7)=std::move(t286);}
if(truth(lt(e->slot(0,0),get(e->slot(0,2),lit23)))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t287=divv(get(e->slot(2,2),lit108),first(call(get(e->get("math"),lit143),Args{get(e->slot(1,2),lit23),V(1.0)})));e->slot(0,0)=std::move(t287);}
{std::array<Ref,1> refs{Ref(e,1,7)};V t288=first(call(get(e->get("math"),lit143),Args{e->slot(0,0),mul(e->slot(1,5),divv(e->slot(1,0),get(e->slot(1,2),lit23)))}));refs[0].put(std::move(t288));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t289=mul(divv(get(e->slot(1,2),lit107),first(call(get(e->get("math"),lit143),Args{e->slot(0,6),V(1.0)}))),V(100.0));refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t290=first(call(e->slot(1,4),Args{e->slot(0,7),get(e->slot(0,2),lit37),get(e->slot(0,2),lit38)}));refs[0].put(std::move(t290));}
return Args{get(e->slot(1,2),lit69)};
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,11);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t291=get(e->slot(1,1),lit1);e->slot(0,2)=std::move(t291);}
{V t292=first(call(e->slot(1,9),joined(Args{lit257},call(e->slot(1,9),Args{lit258,V(0.5)}))));e->slot(0,3)=std::move(t292);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t293=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0),V(1.0)}));refs[0].put(std::move(t293));}
{V t294=add(V(1.0),mul(sub(get(e->slot(1,2),lit86),V(0.5)),get(e->slot(0,2),lit42)));e->slot(0,4)=std::move(t294);}
{V t295=first(call(e->slot(1,4),Args{divv(get(e->slot(1,2),lit85),get(e->slot(0,2),lit40)),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t295);}
{V t296=sub(V(1.0),mul(e->slot(0,5),get(e->slot(0,2),lit41)));e->slot(0,6)=std::move(t296);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t297=first(call(e->slot(1,30),Args{}));refs[0].put(std::move(t297));}
{V t298=sub(V(1.0),mul(get(e->slot(1,2),lit87),get(e->slot(0,2),lit43)));e->slot(0,7)=std::move(t298);}
{V t299=add(add(add(add(mul(get(e->slot(1,2),lit98),get(e->slot(0,2),lit44)),mul(get(e->slot(1,2),lit99),get(e->slot(0,2),lit45))),mul(get(e->slot(1,2),lit100),get(e->slot(0,2),lit46))),mul(get(e->slot(1,2),lit101),get(e->slot(0,2),lit47))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit97)})),get(e->slot(0,2),lit48)));e->slot(0,8)=std::move(t299);}
{std::array<Ref,1> refs{Ref(e,0,8)};V t300=first(call(e->slot(1,4),Args{e->slot(0,8),V(0.0),V(0.35)}));refs[0].put(std::move(t300));}
{V t301=mul(mul(mul(e->slot(0,4),e->slot(0,6)),e->slot(0,7)),sub(V(1.0),e->slot(0,8)));e->slot(0,9)=std::move(t301);}
{std::array<Ref,1> refs{Ref(e,0,9)};V t302=first(call(e->slot(1,4),Args{e->slot(0,9),get(e->slot(0,2),lit50),get(e->slot(0,2),lit51)}));refs[0].put(std::move(t302));}
{V t303=mul(e->slot(0,0),e->slot(0,9));e->slot(0,10)=std::move(t303);}
if(truth(eq(get(e->slot(1,2),lit77),lit78))){{std::array<Ref,1> refs{Ref(e,0,10)};V t304=add(e->slot(0,10),mul(first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0),V(1.0)})),get(e->slot(0,2),lit49)));refs[0].put(std::move(t304));}
}
if(truth(gt(get(e->slot(1,2),lit75),V(0.05)))){{std::array<Ref,1> refs{Ref(e,0,10)};V t305=first(call(get(e->get("math"),lit143),Args{e->slot(0,10),get(e->slot(0,2),lit36)}));refs[0].put(std::move(t305));}
}
return call(e->slot(1,4),Args{e->slot(0,10),get(e->slot(0,2),lit37),get(e->slot(0,2),lit38)});
return Args{};});
e->slot(0,39)=native([up=e](const Args& a)->Args{Env storage(up,true,10);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t306=get(e->slot(1,1),lit1);e->slot(0,3)=std::move(t306);}
if(truth(V(!truth(get(e->slot(0,3),lit52))))){return Args{get(e->slot(0,3),lit6)};
}
{V t307=first(call(get(e->get("math"),lit143),Args{first(call(e->slot(1,5),Args{get(e->slot(1,2),lit102)})),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit103)})),V(1.0)}));e->slot(0,4)=std::move(t307);}
{V t308=first(call(e->slot(1,4),Args{divv(get(e->slot(1,2),lit73),e->slot(0,4)),V(0.0),V(1.0)}));e->slot(0,5)=std::move(t308);}
{V t309=first(call(e->slot(1,4),Args{divv(e->slot(0,1),first(call(get(e->get("math"),lit143),Args{get(e->slot(0,3),lit55),V(1.0)}))),V(0.0),V(1.0)}));e->slot(0,6)=std::move(t309);}
{V t310=first(call(get(e->get("math"),lit143),Args{add(get(e->slot(1,2),lit83),get(e->slot(1,2),lit84)),V(1.0)}));e->slot(0,7)=std::move(t310);}
{V t311=first(call(e->slot(1,4),Args{sub(V(1.0),divv(get(e->slot(1,2),lit85),e->slot(0,7))),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t311);}
{V t312=sub(add(add(get(e->slot(0,3),lit58),mul(e->slot(0,6),get(e->slot(0,3),lit59))),mul(e->slot(0,8),get(e->slot(0,3),lit60))),mul(e->slot(0,5),get(e->slot(0,3),lit61)));e->slot(0,9)=std::move(t312);}
if(truth(V(!truth(e->slot(0,2))))){{std::array<Ref,1> refs{Ref(e,0,9)};V t313=mul(e->slot(0,9),get(e->slot(0,3),lit62));refs[0].put(std::move(t313));}
}
if(truth(lt(e->slot(0,0),get(e->slot(0,3),lit54)))){{std::array<Ref,1> refs{Ref(e,0,9)};V t314=first(call(get(e->get("math"),lit143),Args{get(e->slot(0,3),lit58),mul(get(e->slot(1,2),lit71),V(0.7))}));refs[0].put(std::move(t314));}
}
{std::array<Ref,1> refs{Ref(e,0,9)};V t315=first(call(e->slot(1,4),Args{e->slot(0,9),get(e->slot(0,3),lit56),get(e->slot(0,3),lit57)}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit71)};V t316=e->slot(0,9);refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit70)};V t317=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit70),e->slot(0,9),get(e->slot(0,3),lit53),([&](){V t318=get(get(e->slot(1,1),lit1),lit259);return !truth(t318)?V(0.001):t318;})()}));refs[0].put(std::move(t317));}
return call(e->slot(1,4),Args{get(e->slot(1,2),lit70),get(e->slot(0,3),lit37),get(e->slot(0,3),lit38)});
return Args{};});
e->slot(0,40)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t319=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit75),get(e->slot(1,2),lit73),get(get(e->slot(1,1),lit1),lit35),e->slot(0,0)}));refs[0].put(std::move(t319));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t320=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit76),get(e->slot(1,2),lit74),get(get(e->slot(1,1),lit1),lit35),e->slot(0,0)}));refs[0].put(std::move(t320));}
return Args{};});
e->slot(0,41)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t321=mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit75)})),get(get(e->slot(1,1),lit1),lit63));e->slot(0,0)=std::move(t321);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t322=first(call(get(e->get("math"),lit260),Args{get(e->slot(1,2),lit107),e->slot(0,0)}));refs[0].put(std::move(t322));}
return Args{};});
e->slot(0,42)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{V t323=mul(mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit110)})),first(call(e->slot(1,5),Args{get(e->slot(1,2),lit75)}))),get(get(e->slot(1,1),lit1),lit64));e->slot(0,1)=std::move(t323);}
{V t324=mul(mul(get(e->slot(1,2),lit72),get(get(e->slot(1,1),lit1),lit65)),e->slot(0,0));e->slot(0,2)=std::move(t324);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit72)};V t325=first(call(get(e->get("math"),lit143),Args{V(0.0),sub(add(get(e->slot(1,2),lit72),mul(e->slot(0,1),e->slot(0,0))),e->slot(0,2))}));refs[0].put(std::move(t325));}
return Args{};});
e->slot(0,43)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);e->slot(0,5)=arg(a,5);{V t326=first(call(e->slot(1,35),Args{e->slot(0,0),e->slot(0,2),e->slot(0,3),e->slot(0,4),e->slot(0,5)}));e->slot(0,6)=std::move(t326);}
if(truth(([&](){V t327=eq(get(e->slot(1,2),lit122),lit186);return !truth(t327)?eq(get(e->slot(1,2),lit122),lit167):t327;})())){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(2,2),lit79)};V t328=([&](){V t329=([&](){V t330=eq(get(e->slot(2,2),lit122),lit186);return truth(t330)?lit261:t330;})();return !truth(t329)?lit262:t329;})();refs[0].put(std::move(t328));}
{V t331=first(call(e->slot(2,37),Args{e->slot(1,6),e->slot(1,4)}));e->slot(0,0)=std::move(t331);}
return call(e->slot(2,38),Args{e->slot(0,0),e->slot(1,3)});
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t332=lit159;refs[0].put(std::move(t332));}
{V t333=first(call(e->slot(1,39),Args{e->slot(0,1),e->slot(0,6),e->slot(0,4)}));e->slot(0,7)=std::move(t333);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t334=get(get(e->slot(1,1),lit1),lit8);refs[0].put(std::move(t334));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t335=mul(e->slot(0,6),e->slot(0,7));refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t336=first(call(e->slot(1,4),Args{add(get(e->slot(1,2),lit109),get(e->slot(1,2),lit108)),V(0.0),get(get(e->slot(1,1),lit1),lit25)}));refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t337=mul(divv(get(e->slot(1,2),lit107),first(call(get(e->get("math"),lit143),Args{e->slot(0,6),get(get(e->slot(1,1),lit1),lit22)}))),V(100.0));refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit69)};V t338=e->slot(0,7);refs[0].put(std::move(t338));}
return call(e->slot(1,38),Args{e->slot(0,7),e->slot(0,3)});
return Args{};});
e->slot(0,44)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,11),Args{lit263,get(e->slot(1,2),lit67)});
call(e->slot(1,11),Args{lit264,get(e->slot(1,2),lit67)});
call(e->slot(1,11),Args{lit265,get(e->slot(1,2),lit73)});
call(e->slot(1,11),Args{lit266,get(e->slot(1,2),lit73)});
call(e->slot(1,11),Args{lit267,get(e->slot(1,2),lit74)});
call(e->slot(1,11),Args{lit268,get(e->slot(1,2),lit72)});
call(e->slot(1,11),Args{lit269,get(e->slot(1,2),lit72)});
call(e->slot(1,11),Args{lit270,get(e->slot(1,2),lit77)});
call(e->slot(1,11),Args{lit271,get(e->slot(1,2),lit68)});
call(e->slot(1,11),Args{lit272,get(e->slot(1,2),lit81)});
call(e->slot(1,11),Args{lit273,get(e->slot(1,2),lit82)});
call(e->slot(1,11),Args{lit274,get(e->slot(1,2),lit79)});
call(e->slot(1,11),Args{lit275,get(e->slot(1,2),lit122)});
call(e->slot(1,11),Args{lit276,get(e->slot(1,2),lit91)});
call(e->slot(1,11),Args{lit277,get(e->slot(1,2),lit107)});
call(e->slot(1,11),Args{lit278,get(e->slot(1,2),lit107)});
call(e->slot(1,11),Args{lit279,get(e->slot(1,2),lit108)});
call(e->slot(1,11),Args{lit280,get(e->slot(1,2),lit108)});
call(e->slot(1,11),Args{lit281,get(e->slot(1,2),lit109)});
call(e->slot(1,11),Args{lit282,get(e->slot(1,2),lit109)});
call(e->slot(1,11),Args{lit283,get(e->slot(1,2),lit110)});
call(e->slot(1,11),Args{lit284,get(e->slot(1,2),lit110)});
call(e->slot(1,11),Args{lit285,get(e->slot(1,2),lit111)});
call(e->slot(1,11),Args{lit286,get(e->slot(1,2),lit69)});
call(e->slot(1,11),Args{lit287,get(e->slot(1,2),lit70)});
call(e->slot(1,11),Args{lit288,get(e->slot(1,2),lit112)});
call(e->slot(1,11),Args{lit289,get(e->slot(1,2),lit113)});
call(e->slot(1,11),Args{lit290,get(e->slot(1,2),lit108)});
call(e->slot(1,11),Args{lit291,V(-num(get(e->slot(1,2),lit110)))});
call(e->slot(1,11),Args{lit292,get(e->slot(1,2),lit110)});
if(truth(V(!truth(get(e->slot(1,2),lit133))))){return Args{};
}
call(e->slot(1,11),Args{lit293,get(e->slot(1,2),lit102)});
call(e->slot(1,11),Args{lit294,get(e->slot(1,2),lit103)});
call(e->slot(1,11),Args{lit295,get(e->slot(1,2),lit104)});
call(e->slot(1,11),Args{lit296,get(e->slot(1,2),lit105)});
call(e->slot(1,11),Args{lit297,([&](){V t339=([&](){V t340=get(e->slot(1,2),lit106);return truth(t340)?V(1.0):t340;})();return !truth(t339)?V(0.0):t339;})()});
call(e->slot(1,11),Args{lit298,get(e->slot(1,2),lit85)});
call(e->slot(1,11),Args{lit299,get(e->slot(1,2),lit83)});
call(e->slot(1,11),Args{lit300,get(e->slot(1,2),lit84)});
call(e->slot(1,11),Args{lit301,get(e->slot(1,2),lit75)});
call(e->slot(1,11),Args{lit302,get(e->slot(1,2),lit76)});
call(e->slot(1,11),Args{lit303,get(e->slot(1,2),lit88)});
call(e->slot(1,11),Args{lit304,get(e->slot(1,2),lit90)});
call(e->slot(1,11),Args{lit305,get(e->slot(1,2),lit93)});
call(e->slot(1,11),Args{lit306,get(e->slot(1,2),lit112)});
call(e->slot(1,11),Args{lit307,get(e->slot(1,2),lit113)});
call(e->slot(1,11),Args{lit308,get(e->slot(1,2),lit114)});
call(e->slot(1,11),Args{lit309,get(e->slot(1,2),lit115)});
call(e->slot(1,11),Args{lit310,get(e->slot(1,2),lit116)});
call(e->slot(1,11),Args{lit311,get(e->slot(1,2),lit117)});
call(e->slot(1,11),Args{lit312,get(e->slot(1,2),lit120)});
call(e->slot(1,11),Args{lit313,get(e->slot(1,2),lit125)});
call(e->slot(1,11),Args{lit314,get(e->slot(1,2),lit123)});
call(e->slot(1,11),Args{lit315,get(e->slot(1,2),lit126)});
call(e->slot(1,11),Args{lit316,get(e->slot(1,2),lit128)});
call(e->slot(1,11),Args{lit317,get(e->slot(1,2),lit130)});
call(e->slot(1,11),Args{lit318,get(e->slot(1,2),lit129)});
call(e->slot(1,11),Args{lit319,get(e->slot(1,2),lit95)});
call(e->slot(1,11),Args{lit320,get(e->slot(1,2),lit98)});
call(e->slot(1,11),Args{lit321,get(e->slot(1,2),lit99)});
call(e->slot(1,11),Args{lit322,get(e->slot(1,2),lit100)});
call(e->slot(1,11),Args{lit323,get(e->slot(1,2),lit101)});
call(e->slot(1,11),Args{lit324,get(e->slot(1,2),lit87)});
return Args{};});
Ref(e->slot(0,1),lit325).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t341=lit80;refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t342=([&](){V t343=e->slot(0,0);return !truth(t343)?first(call(e->slot(1,7),Args{})):t343;})();refs[0].put(std::move(t342));}
call(e->slot(1,23),Args{e->slot(0,0)});
call(e->slot(1,44),Args{});
return Args{};}));
Ref(e->slot(0,1),lit326).put(native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t344=([&](){V t345=get(get(e->slot(1,1),lit1),lit248);return !truth(t345)?lit164:t345;})();e->slot(0,3)=std::move(t344);}
if(truth(([&](){V t346=ne(e->slot(0,3),lit164);return truth(t346)?ne(e->slot(0,3),lit249):t346;})())){call(e->get("error"),Args{lit327});
}
if(truth(eq(e->slot(0,3),lit249))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t347=first(call(e->slot(2,8),Args{lit328}));e->slot(0,0)=std::move(t347);}
{V t348=first(call(e->slot(2,8),Args{lit329}));e->slot(0,1)=std::move(t348);}
if(truth(([&](){V t349=([&](){V t350=([&](){V t351=([&](){V t352=([&](){V t353=([&](){V t354=([&](){V t355=ne(first(call(e->get("type"),Args{e->slot(0,0)})),lit169);return !truth(t355)?ne(first(call(e->get("type"),Args{e->slot(0,1)})),lit169):t355;})();return !truth(t354)?ne(e->slot(0,0),e->slot(0,0)):t354;})();return !truth(t353)?ne(e->slot(0,1),e->slot(0,1)):t353;})();return !truth(t352)?eq(e->slot(0,0),get(e->get("math"),lit136)):t352;})();return !truth(t351)?eq(e->slot(0,0),V(-num(get(e->get("math"),lit136)))):t351;})();return !truth(t350)?eq(e->slot(0,1),get(e->get("math"),lit136)):t350;})();return !truth(t349)?eq(e->slot(0,1),V(-num(get(e->get("math"),lit136)))):t349;})())){call(e->get("error"),Args{lit330});
}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit250)};V t356=e->slot(0,0);refs[0].put(std::move(t356));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit331)};V t357=gt(e->slot(0,1),V(0.0));refs[0].put(std::move(t357));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t358=add(([&](){V t359=get(e->slot(1,2),lit82);return !truth(t359)?V(0.0):t359;})(),V(1.0));refs[0].put(std::move(t358));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t360=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t360));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t361=lit332;refs[0].put(std::move(t361));}
call(e->slot(1,44),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t362=first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit29),get(get(e->slot(1,1),lit1),lit30)}));refs[0].put(std::move(t362));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit1),lit259)};V t363=e->slot(0,0);refs[0].put(std::move(t363));}
call(e->slot(1,13),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t364=([&](){V t365=e->slot(0,1);return !truth(t365)?first(call(e->slot(1,7),Args{})):t365;})();refs[0].put(std::move(t364));}
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t366=lit333;refs[0].put(std::move(t366));}
call(e->slot(1,44),Args{});
return Args{};
}
{V t367=first(call(e->slot(1,6),Args{e->slot(0,1),lit203,V()}));e->slot(0,4)=std::move(t367);}
if(truth(V(!truth(e->slot(0,4))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t368=lit334;refs[0].put(std::move(t368));}
call(e->slot(1,44),Args{});
return Args{};
}
if(truth(([&](){V t369=V(!truth(get(e->slot(1,2),lit118)));return !truth(t369)?get(get(e->slot(1,1),lit1),lit5):t369;})())){call(e->slot(1,23),Args{e->slot(0,1)});
}
{Args t370=call(e->slot(1,26),Args{e->slot(0,1)});e->slot(0,5)=arg(t370,0);e->slot(0,6)=arg(t370,1);}
if(truth(([&](){V t371=eq(e->slot(0,5),V());return !truth(t371)?eq(e->slot(0,6),V()):t371;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t372=lit335;refs[0].put(std::move(t372));}
{std::array<Ref,2> refs{Ref(e,0,5),Ref(e,0,6)};Args t373=Args{get(e->slot(1,2),lit102),get(e->slot(1,2),lit103)};refs[0].put(arg(t373,0));refs[1].put(arg(t373,1));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t374=lit336;refs[0].put(std::move(t374));}
}
{V t375=first(call(e->slot(1,3),Args{first(call(e->slot(1,6),Args{e->slot(0,1),lit337,V(0.0)})),V(0.0)}));e->slot(0,7)=std::move(t375);}
{std::array<Ref,2> refs{Ref(e,0,5),Ref(e,0,6)};Args t376=call(e->slot(1,27),Args{e->slot(0,7),e->slot(0,5),e->slot(0,6),e->slot(0,0)});refs[0].put(arg(t376,0));refs[1].put(arg(t376,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t377=e->slot(0,5);refs[0].put(std::move(t377));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t378=e->slot(0,6);refs[0].put(std::move(t378));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t379=sub(e->slot(0,5),e->slot(0,6));refs[0].put(std::move(t379));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit73)};V t380=first(call(e->slot(1,5),Args{get(e->slot(1,2),lit74)}));refs[0].put(std::move(t380));}
call(e->slot(1,40),Args{e->slot(0,0)});
call(e->slot(1,29),Args{});
call(e->slot(1,32),Args{});
{V t381=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,6),Args{e->slot(0,1),lit338,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));e->slot(0,8)=std::move(t381);}
{V t382=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{first(call(e->slot(1,6),Args{e->slot(0,1),lit339,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t382);}
{Args t383=Args{};e->slot(0,10)=arg(t383,0);}
if(truth(eq(e->slot(0,3),lit249))){{std::array<Ref,1> refs{Ref(e,0,10)};V t384=get(e->slot(1,2),lit331);refs[0].put(std::move(t384));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t385=([&](){V t386=([&](){V t387=e->slot(0,10);return truth(t387)?lit177:t387;})();return !truth(t386)?lit78:t386;})();refs[0].put(std::move(t385));}
}else if(truth(lt(get(e->slot(1,2),lit88),V(-num(V(0.01)))))){{std::array<Ref,1> refs{Ref(e,0,10)};V t388=V(false);refs[0].put(std::move(t388));}
}else if(truth(gt(get(e->slot(1,2),lit88),V(0.01)))){{std::array<Ref,1> refs{Ref(e,0,10)};V t389=V(true);refs[0].put(std::move(t389));}
}else{{std::array<Ref,1> refs{Ref(e,0,10)};V t390=gt(e->slot(0,8),V(0.05));refs[0].put(std::move(t390));}
}


{std::array<Ref,1> refs{Ref(e->slot(1,2),lit68)};V t391=first(call(e->slot(1,43),Args{e->slot(0,1),e->slot(0,7),e->slot(0,8),e->slot(0,9),e->slot(0,10),e->slot(0,0)}));refs[0].put(std::move(t391));}
{V t392=([&](){V t393=([&](){V t394=gt(get(e->slot(1,2),lit68),get(e->slot(1,2),lit67));return truth(t394)?get(get(e->slot(1,1),lit1),lit26):t394;})();return !truth(t393)?get(get(e->slot(1,1),lit1),lit27):t393;})();e->slot(0,11)=std::move(t392);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t395=first(call(e->slot(1,12),Args{get(e->slot(1,2),lit67),get(e->slot(1,2),lit68),e->slot(0,11),e->slot(0,0)}));refs[0].put(std::move(t395));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit67)};V t396=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit67),get(get(e->slot(1,1),lit1),lit37),get(get(e->slot(1,1),lit1),lit38)}));refs[0].put(std::move(t396));}
call(e->slot(1,41),Args{});
call(e->slot(1,42),Args{e->slot(0,0)});
call(e->slot(1,44),Args{});
return Args{};}));
Ref(e->slot(0,1),lit340).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t397=get(e->slot(1,2),lit67);return !truth(t397)?V(0.0):t397;})()};
return Args{};}));
Ref(e->slot(0,1),lit341).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t398=get(e->slot(1,2),lit68);return !truth(t398)?V(0.0):t398;})()};
return Args{};}));
Ref(e->slot(0,1),lit342).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t399=get(e->slot(1,2),lit73);return !truth(t399)?V(0.0):t399;})()};
return Args{};}));
Ref(e->slot(0,1),lit343).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t400=get(e->slot(1,2),lit74);return !truth(t400)?V(0.0):t400;})()};
return Args{};}));
Ref(e->slot(0,1),lit344).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t401=get(e->slot(1,2),lit72);return !truth(t401)?V(0.0):t401;})()};
return Args{};}));
Ref(e->slot(0,1),lit345).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t402=get(e->slot(1,2),lit77);return !truth(t402)?lit127:t402;})()};
return Args{};}));
Ref(e->slot(0,1),lit346).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t403=get(e->slot(1,2),lit107);return !truth(t403)?V(0.0):t403;})()};
return Args{};}));
Ref(e->slot(0,1),lit347).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t404=get(e->slot(1,2),lit91);return !truth(t404)?V(0.0):t404;})()};
return Args{};}));
Ref(e->slot(0,1),lit348).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit349).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit350),Args{concat(lit351,concat(lit352,concat(lit353,concat(lit354,lit355)))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit81)})),mul(([&](){V t405=get(e->slot(1,2),lit67);return !truth(t405)?V(0.0):t405;})(),V(100.0)),mul(([&](){V t406=get(e->slot(1,2),lit68);return !truth(t406)?V(0.0):t406;})(),V(100.0)),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit77)})),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit79)})),([&](){V t407=get(e->slot(1,2),lit91);return !truth(t407)?V(0.0):t407;})(),([&](){V t408=get(e->slot(1,2),lit107);return !truth(t408)?V(0.0):t408;})(),([&](){V t409=get(e->slot(1,2),lit108);return !truth(t409)?V(0.0):t409;})(),([&](){V t410=get(e->slot(1,2),lit109);return !truth(t410)?V(0.0):t410;})(),([&](){V t411=get(e->slot(1,2),lit111);return !truth(t411)?V(0.0):t411;})(),([&](){V t412=get(e->slot(1,2),lit73);return !truth(t412)?V(0.0):t412;})(),([&](){V t413=get(e->slot(1,2),lit74);return !truth(t413)?V(0.0):t413;})(),([&](){V t414=get(e->slot(1,2),lit75);return !truth(t414)?V(0.0):t414;})(),([&](){V t415=get(e->slot(1,2),lit72);return !truth(t415)?V(0.0):t415;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit122)})),([&](){V t416=get(e->slot(1,2),lit112);return !truth(t416)?V(0.0):t416;})(),([&](){V t417=get(e->slot(1,2),lit113);return !truth(t417)?V(0.0):t417;})(),([&](){V t418=get(e->slot(1,2),lit115);return !truth(t418)?V(0.0):t418;})(),([&](){V t419=get(e->slot(1,2),lit116);return !truth(t419)?V(0.0):t419;})(),([&](){V t420=get(e->slot(1,2),lit102);return !truth(t420)?V(0.0):t420;})(),([&](){V t421=get(e->slot(1,2),lit103);return !truth(t421)?V(0.0):t421;})(),([&](){V t422=get(e->slot(1,2),lit85);return !truth(t422)?V(0.0):t422;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
