// Generated native C++ from pinned load_transfer.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("wheelbase");
static const V lit2("trackF");
static const V lit3("trackR");
static const V lit4("params");
static const V lit5("tauPitch");
static const V lit6("tauRoll");
static const V lit7("maxPitch");
static const V lit8("maxRoll");
static const V lit9("defaultMass");
static const V lit10("defaultCGH");
static const V lit11("tireHopLoadGain");
static const V lit12("rollStiffnessFrontBias");
static const V lit13("pitchTransferGain");
static const V lit14("rollTransferGain");
static const V lit15("minRollAxleBias");
static const V lit16("maxRollAxleBias");
static const V lit17("wheelLoadTau");
static const V lit18("wheelLoadRef");
static const V lit19("minWheelLoad");
static const V lit20("maxWheelLoad");
static const V lit21("modelLoadGain");
static const V lit22("suspensionForceGain");
static const V lit23("damperLoadGain");
static const V lit24("springLoadGain");
static const V lit25("contactLoadGain");
static const V lit26("impulseLoadGain");
static const V lit27("dropUnloadGain");
static const V lit28("tireHopPulseGain");
static const V lit29("contactLossUnloadGain");
static const V lit30("tireMemoryLoadLossGain");
static const V lit31("tireLimitLoadLossGain");
static const V lit32("drivetrainRearLoadGain");
static const V lit33("lsdRearLoadGain");
static const V lit34("armGeometryLoadLossGain");
static const V lit35("conditionSuspLossGain");
static const V lit36("damageWheelLossGain");
static const V lit37("bodyRigidityInfluence");
static const V lit38("bodyFlexTauGain");
static const V lit39("bodyStiffTauGain");
static const V lit40("bodyFlexTransferLoss");
static const V lit41("bodyTorsionRollLoss");
static const V lit42("bodyBendingPitchLoss");
static const V lit43("bodyStiffTransferGain");
static const V lit44("minBodyTransferScale");
static const V lit45("maxBodyTransferScale");
static const V lit46("minDt");
static const V lit47("maxDt");
static const V lit48("noCarDecayTau");
static const V lit49("noWheelsDecayTau");
static const V lit50("bodyReadInterval");
static const V lit51("geometryRetryInterval");
static const V lit52("debugStoreInterval");
static const V lit53("pitch");
static const V lit54("roll");
static const V lit55("rollFront");
static const V lit56("rollRear");
static const V lit57("state");
static const V lit58("front");
static const V lit59("rear");
static const V lit60("left");
static const V lit61("right");
static const V lit62("pitchState");
static const V lit63("NEUTRAL");
static const V lit64("rollState");
static const V lit65("transition");
static const V lit66("STABLE");
static const V lit67("status");
static const V lit68("INIT");
static const V lit69("updateCount");
static const V lit70("wheelsValid");
static const V lit71("bodyRigidity");
static const V lit72("bodyFlexFactor");
static const V lit73("bodyTorsionFactor");
static const V lit74("bodyBendingFactor");
static const V lit75("bodyDampingFactor");
static const V lit76("bodyPitchScale");
static const V lit77("bodyRollScale");
static const V lit78("bodyPitchTau");
static const V lit79("bodyRollTau");
static const V lit80("bodyRigidityLinked");
static const V lit81("bodyReadTimer");
static const V lit82("tireLinked");
static const V lit83("suspensionLinked");
static const V lit84("drivetrainLinked");
static const V lit85("armLinked");
static const V lit86("damageLinked");
static const V lit87("contactLinked");
static const V lit88("damperLinked");
static const V lit89("complianceLinked");
static const V lit90("windupLinked");
static const V lit91("avgWheelLoad");
static const V lit92("frontWheelLoad");
static const V lit93("rearWheelLoad");
static const V lit94("leftWheelLoad");
static const V lit95("rightWheelLoad");
static const V lit96("maxWheelLoadLive");
static const V lit97("minWheelLoadLive");
static const V lit98("debugStoreTimer");
static const V lit99("debugStoreNow");
static const V lit100("geometryRetryTimer");
static const V lit101("debug");
static const V lit102("ax");
static const V lit103("az");
static const V lit104("mass");
static const V lit105("cgH");
static const V lit106("rawPitch");
static const V lit107("rawRoll");
static const V lit108("rawRollFront");
static const V lit109("rawRollRear");
static const V lit110("filtPitch");
static const V lit111("filtRoll");
static const V lit112("filtRollFront");
static const V lit113("filtRollRear");
static const V lit114("load");
static const V lit115("loadPitch");
static const V lit116("loadRoll");
static const V lit117("wheelLoadRaw");
static const V lit118("wheelLoadFiltered");
static const V lit119("wheelLoadFinal");
static const V lit120("wheelLoadNorm");
static const V lit121("modelLoadAdd");
static const V lit122("suspensionLoadAdd");
static const V lit123("rootLoadAdd");
static const V lit124("absFront");
static const V lit125("absRear");
static const V lit126("absLeft");
static const V lit127("absRight");
static const V lit128("pitchRatio");
static const V lit129("rollRatio");
static const V lit130("huge");
static const V lit131("abs");
static const V lit132("max");
static const V lit133("safeLoadRaw");
static const V lit134("safeStore");
static const V lit135("safeField");
static const V lit136("getCar");
static const V lit137("getCarConfig");
static const V lit138("wheels");
static const V lit139("UNKNOWN");
static const V lit140("BASIC");
static const V lit141("WHEELBASE");
static const V lit142("FRONT_TRACK");
static const V lit143("REAR_TRACK");
static const V lit144("log");
static const V lit145("format");
static const V lit146("[NGP LoadTransfer] WB=%.2f TF=%.2f TR=%.2f");
static const V lit147("length");
static const V lit148("function");
static const V lit149("number");
static const V lit150("x");
static const V lit151("y");
static const V lit152("z");
static const V lit153("sqrt");
static const V lit154("acceleration");
static const V lit155("localVelocity");
static const V lit156("ngp_mass_total");
static const V lit157("CG_HEIGHT");
static const V lit158("ngp_cg_height");
static const V lit159("loadK");
static const V lit160("ngp_contact_load_");
static const V lit161("ngp_tire_state_load_");
static const V lit162("ngp_sprung_load_");
static const V lit163("ngp_body_rigidity_update_count");
static const V lit164("ngp_body_status");
static const V lit165("ngp_body_rigidity");
static const V lit166("ngp_body_flex_factor");
static const V lit167("ngp_body_torsion_factor");
static const V lit168("ngp_body_bending_factor");
static const V lit169("ngp_body_damping_factor");
static const V lit170("ngp_tire_hop_loadpulse_");
static const V lit171("ngp_tirehop_");
static const V lit172("ngp_tire_hop_load_pulse_");
static const V lit173("ngp_tire_contact_loss_");
static const V lit174("ngp_tcr_contact_loss_");
static const V lit175("ngp_contact_loss_");
static const V lit176("ngp_contact_hop_drop_");
static const V lit177("ngp_rubber_memory_");
static const V lit178("ngp_tire_memory_");
static const V lit179("ngp_memory_");
static const V lit180("ngp_tire_limit_");
static const V lit181("ngp_slip_limit_");
static const V lit182("ngp_control_arm_camber_");
static const V lit183("ngp_arm_camber_");
static const V lit184("ngp_ca_camber_");
static const V lit185("ngp_control_arm_toe_");
static const V lit186("ngp_arm_toe_");
static const V lit187("ngp_ca_toe_");
static const V lit188("ngp_load_path_compliance_loss_");
static const V lit189("ngp_compliance_load_path_loss_");
static const V lit190("ngp_force_path_loss_");
static const V lit191("ngp_drivetrain_torque");
static const V lit192("ngp_dt_torque");
static const V lit193("ngp_drive_soft_torque");
static const V lit194("ngp_drive_torque");
static const V lit195("ngp_lsd_lock");
static const V lit196("ngp_diff_lock");
static const V lit197("ngp_driveline_windup");
static const V lit198("ngp_windup_value");
static const V lit199("ngp_condition_suspension");
static const V lit200("ngp_damage_wheel_");
static const V lit201("ngp_susp_integrated_force_");
static const V lit202("ngp_susp_int_force_");
static const V lit203("ngp_susp_");
static const V lit204("ngp_damper_force_");
static const V lit205("ngp_damper_");
static const V lit206("ngp_progressive_spring_");
static const V lit207("ngp_susp_contact_input_");
static const V lit208("ngp_sci_input_");
static const V lit209("ngp_susp_road_impulse_");
static const V lit210("ngp_sci_impulse_");
static const V lit211("ngp_susp_contact_drop_");
static const V lit212("ngp_sci_drop_");
static const V lit213("min");
static const V lit214("BRAKE LOAD");
static const V lit215("DRIVE LOAD");
static const V lit216("RIGHT LOAD");
static const V lit217("LEFT LOAD");
static const V lit218("LIMIT TRANSITION");
static const V lit219("NORMAL");
static const V lit220("ngp_dlt_load_");
static const V lit221("ngp_dlt_pitch_load_");
static const V lit222("ngp_dlt_roll_load_");
static const V lit223("ngp_wheel_load_");
static const V lit224("ngp_wheel_load_raw_");
static const V lit225("ngp_wheel_load_model_");
static const V lit226("ngp_wheel_load_susp_");
static const V lit227("ngp_wheel_load_root_");
static const V lit228("ngp_wheel_load_norm_");
static const V lit229("ngp_load_wheel_");
static const V lit230("ngp_tire_load_input_");
static const V lit231("ngp_susp_load_input_");
static const V lit232("ngp_load_transfer_load_");
static const V lit233("ngp_load_transfer_delta_");
static const V lit234("ngp_load_abs_front");
static const V lit235("ngp_load_abs_rear");
static const V lit236("ngp_load_abs_left");
static const V lit237("ngp_load_abs_right");
static const V lit238("ngp_dlt_pitch");
static const V lit239("ngp_dlt_roll");
static const V lit240("ngp_dlt_roll_front");
static const V lit241("ngp_dlt_roll_rear");
static const V lit242("ngp_load_front");
static const V lit243("ngp_load_rear");
static const V lit244("ngp_load_left");
static const V lit245("ngp_load_right");
static const V lit246("ngp_front_bias");
static const V lit247("ngp_rear_bias");
static const V lit248("ngp_left_bias");
static const V lit249("ngp_right_bias");
static const V lit250("ngp_load_transfer_status");
static const V lit251("ngp_load_transfer_update_count");
static const V lit252("ngp_load_transfer_wheels_valid");
static const V lit253("ngp_load_transfer_ax");
static const V lit254("ngp_load_transfer_az");
static const V lit255("ngp_load_transfer_mass");
static const V lit256("ngp_load_transfer_cgh");
static const V lit257("ngp_load_transfer_raw_pitch");
static const V lit258("ngp_load_transfer_raw_roll");
static const V lit259("ngp_load_transfer_raw_roll_front");
static const V lit260("ngp_load_transfer_raw_roll_rear");
static const V lit261("ngp_load_transfer_filt_pitch");
static const V lit262("ngp_load_transfer_filt_roll");
static const V lit263("ngp_load_transfer_filt_roll_front");
static const V lit264("ngp_load_transfer_filt_roll_rear");
static const V lit265("ngp_load_transfer_roll_front_bias");
static const V lit266("ngp_load_transfer_pitch_ratio");
static const V lit267("ngp_load_transfer_roll_ratio");
static const V lit268("ngp_load_transfer_wheelbase");
static const V lit269("ngp_load_transfer_track_f");
static const V lit270("ngp_load_transfer_track_r");
static const V lit271("ngp_load_transfer_body_rigidity_linked");
static const V lit272("ngp_load_transfer_body_rigidity");
static const V lit273("ngp_load_transfer_body_flex_factor");
static const V lit274("ngp_load_transfer_body_pitch_scale");
static const V lit275("ngp_load_transfer_body_roll_scale");
static const V lit276("ngp_load_transfer_body_pitch_tau");
static const V lit277("ngp_load_transfer_body_roll_tau");
static const V lit278("ngp_load_transfer_avg_wheel_load");
static const V lit279("ngp_load_transfer_front_wheel_load");
static const V lit280("ngp_load_transfer_rear_wheel_load");
static const V lit281("ngp_load_transfer_left_wheel_load");
static const V lit282("ngp_load_transfer_right_wheel_load");
static const V lit283("ngp_load_transfer_max_wheel_load");
static const V lit284("ngp_load_transfer_min_wheel_load");
static const V lit285("ngp_lt_status");
static const V lit286("ngp_lt_count");
static const V lit287("ngp_lt_front");
static const V lit288("ngp_lt_rear");
static const V lit289("ngp_lt_left");
static const V lit290("ngp_lt_right");
static const V lit291("ngp_load_transfer_tire_linked");
static const V lit292("ngp_load_transfer_suspension_linked");
static const V lit293("ngp_load_transfer_drivetrain_linked");
static const V lit294("ngp_load_transfer_arm_linked");
static const V lit295("ngp_load_transfer_damage_linked");
static const V lit296("ngp_load_transfer_contact_linked");
static const V lit297("ngp_load_transfer_damper_linked");
static const V lit298("ngp_load_transfer_compliance_linked");
static const V lit299("ngp_load_transfer_windup_linked");
static const V lit300("init");
static const V lit301("update");
static const V lit302("BAD DT");
static const V lit303("NO CAR");
static const V lit304("NO WHEELS");
static const V lit305("RUNNING");
static const V lit306("getWheelLoad");
static const V lit307("getDeltaLoad");
static const V lit308("getPitch");
static const V lit309("getRoll");
static const V lit310("getFrontBias");
static const V lit311("getRearBias");
static const V lit312("getState");
static const V lit313("debugStr");
static const V lit314("Status %s / Count %.0f / Wheels %s\n");
static const V lit315("Mass:%.0f CGH:%.3f\n");
static const V lit316("Pitch raw:%+.0f filt:%+.0f %s\n");
static const V lit317("Roll  raw:%+.0f filt:%+.0f %s\n");
static const V lit318("RollSplit F:%+.0f R:%+.0f Bias:%.2f\n");
static const V lit319("DLT  FL:%+.0f FR:%+.0f RL:%+.0f RR:%+.0f\n");
static const V lit320("LOAD FL:%.0f FR:%.0f RL:%.0f RR:%.0f\n");
static const V lit321("NORM %.2f %.2f %.2f %.2f\n");
static const V lit322("ABS F/R %.2f/%.2f  L/R %.2f/%.2f\n");
static const V lit323("BodyRig:%s Rig %.2f Flex %.2f PScale %.2f RScale %.2f\n");
static const V lit324("Links Tire:%s Susp:%s Drive:%s Arm:%s Damage:%s Wind:%s");
static const V lit325("OK");
static const V lit326("NIL");
static const V lit327("YES");
static const V lit328("NO");
V load_load_transfer(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(39);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{V t3=V(false);e->slot(0,2)=std::move(t3);}
{V t4=([&](){V z=table();set(z,lit1,V(2.5));set(z,lit2,V(1.45));set(z,lit3,V(1.42));return z;})();e->slot(0,3)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit4)};V t5=([&](){V z=table();set(z,lit5,V(0.06));set(z,lit6,V(0.04));set(z,lit7,V(4500.0));set(z,lit8,V(3500.0));set(z,lit9,V(1300.0));set(z,lit10,V(0.55));set(z,lit11,V(0.25));set(z,lit12,V(0.58));set(z,lit13,V(1.0));set(z,lit14,V(1.0));set(z,lit15,V(0.35));set(z,lit16,V(0.75));set(z,lit17,V(0.08));set(z,lit18,V(3500.0));set(z,lit19,V(0.0));set(z,lit20,V(9000.0));set(z,lit21,V(0.18));set(z,lit22,V(0.1));set(z,lit23,V(0.012));set(z,lit24,V(0.006));set(z,lit25,V(350.0));set(z,lit26,V(280.0));set(z,lit27,V(450.0));set(z,lit28,V(0.22));set(z,lit29,V(320.0));set(z,lit30,V(120.0));set(z,lit31,V(90.0));set(z,lit32,V(60.0));set(z,lit33,V(90.0));set(z,lit34,V(80.0));set(z,lit35,V(220.0));set(z,lit36,V(450.0));set(z,lit37,V(0.18));set(z,lit38,V(0.45));set(z,lit39,V(0.12));set(z,lit40,V(0.1));set(z,lit41,V(0.08));set(z,lit42,V(0.08));set(z,lit43,V(0.05));set(z,lit44,V(0.86));set(z,lit45,V(1.1));set(z,lit46,V(0.0005));set(z,lit47,V(0.05));set(z,lit48,V(0.25));set(z,lit49,V(0.22));set(z,lit50,V(0.05));set(z,lit51,V(1.0));set(z,lit52,V(0.25));return z;})();refs[0].put(std::move(t5));}
{V t6=([&](){V z=table();set(z,lit53,V(0.0));set(z,lit54,V(0.0));set(z,lit55,V(0.0));set(z,lit56,V(0.0));return z;})();e->slot(0,4)=std::move(t6);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit57)};V t7=([&](){V z=table();set(z,lit58,V(0.5));set(z,lit59,V(0.5));set(z,lit60,V(0.5));set(z,lit61,V(0.5));set(z,lit62,lit63);set(z,lit64,lit63);set(z,lit65,lit66);set(z,lit67,lit68);set(z,lit69,V(0.0));set(z,lit70,V(false));set(z,lit71,V(1.0));set(z,lit72,V(1.0));set(z,lit73,V(1.0));set(z,lit74,V(1.0));set(z,lit75,V(1.0));set(z,lit76,V(1.0));set(z,lit77,V(1.0));set(z,lit78,V(0.06));set(z,lit79,V(0.04));set(z,lit80,V(false));set(z,lit81,V(999.0));set(z,lit82,V(false));set(z,lit83,V(false));set(z,lit84,V(false));set(z,lit85,V(false));set(z,lit86,V(false));set(z,lit87,V(false));set(z,lit88,V(false));set(z,lit89,V(false));set(z,lit90,V(false));set(z,lit91,V(3500.0));set(z,lit92,V(3500.0));set(z,lit93,V(3500.0));set(z,lit94,V(3500.0));set(z,lit95,V(3500.0));set(z,lit96,V(3500.0));set(z,lit97,V(3500.0));set(z,lit98,V(999.0));set(z,lit99,V(true));set(z,lit100,V(999.0));return z;})();refs[0].put(std::move(t7));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit101)};V t8=([&](){V z=table();set(z,lit102,V(0.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit115,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit116,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit117,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit118,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit119,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit120,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit121,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit122,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit123,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit124,V(0.5));set(z,lit125,V(0.5));set(z,lit126,V(0.5));set(z,lit127,V(0.5));set(z,lit128,V(0.0));set(z,lit129,V(0.0));set(z,lit67,lit68);set(z,lit69,V(0.0));set(z,lit76,V(1.0));set(z,lit77,V(1.0));set(z,lit78,V(0.06));set(z,lit79,V(0.04));return z;})();refs[0].put(std::move(t8));}
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t9=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t9);}
if(truth(([&](){V t10=([&](){V t11=([&](){V t12=eq(e->slot(0,2),V());return !truth(t12)?ne(e->slot(0,2),e->slot(0,2)):t12;})();return !truth(t11)?eq(e->slot(0,2),get(e->get("math"),lit130)):t11;})();return !truth(t10)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit130)))):t10;})())){return Args{([&](){V t13=e->slot(0,1);return !truth(t13)?V(0.0):t13;})()};
}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,5),Args{e->slot(0,0),e->slot(0,1)}));refs[0].put(std::move(t14));}
if(truth(lt(e->slot(0,0),e->slot(0,1)))){return Args{e->slot(0,1)};
}
if(truth(gt(e->slot(0,0),e->slot(0,2)))){return Args{e->slot(0,2)};
}
return Args{e->slot(0,0)};
return Args{};});
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit131),call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));
return Args{};});
e->slot(0,8)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t15=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t16=first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t17=first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t17));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t18=first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t18));}
if(truth(le(e->slot(0,2),V(0.0)))){return Args{e->slot(0,1)};
}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),first(call(e->slot(1,6),Args{divv(e->slot(0,3),first(call(get(e->get("math"),lit132),Args{add(e->slot(0,2),e->slot(0,3)),V(0.0001)}))),V(0.0),V(1.0)}))))};
return Args{};});
{V t19=get(e->slot(0,0),lit133);e->slot(0,9)=std::move(t19);}
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t20=first(call(e->slot(1,9),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t20);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t21=e->slot(0,1);return !truth(t21)?V(0.0):t21;})()};
}
return call(e->slot(1,5),Args{e->slot(0,2),([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()});
return Args{};});
{V t23=get(e->slot(0,0),lit134);e->slot(0,11)=std::move(t23);}
{V t24=get(e->slot(0,0),lit135);e->slot(0,12)=std::move(t24);}
e->slot(0,13)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t25=V(!truth(e->get("ac")));return !truth(t25)?V(!truth(get(e->get("ac"),lit136))):t25;})())){return Args{V()};
}
{Args t26=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit136),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t26,0);e->slot(0,1)=arg(t26,1);}
if(truth(e->slot(0,0))){return Args{e->slot(0,1)};
}
return Args{V()};
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);if(truth(([&](){V t27=V(!truth(e->get("ac")));return !truth(t27)?V(!truth(get(e->get("ac"),lit137))):t27;})())){return Args{e->slot(0,2)};
}
{Args t28=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit137),Args{V(0.0),e->slot(1,0),e->slot(1,1),e->slot(1,2)});
return Args{};})});e->slot(0,3)=arg(t28,0);e->slot(0,4)=arg(t28,1);}
if(truth(([&](){V t29=V(!truth(e->slot(0,3)));return !truth(t29)?eq(e->slot(0,4),V()):t29;})())){return Args{e->slot(0,2)};
}
return call(e->slot(1,5),Args{e->slot(0,4),e->slot(0,2)});
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(false)};
}
{Args t30=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,0),lit138)};
return Args{};})});e->slot(0,1)=arg(t30,0);e->slot(0,2)=arg(t30,1);}
return Args{([&](){V t31=e->slot(0,1);return truth(t31)?ne(e->slot(0,2),V()):t31;})()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,4);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(first(call(e->slot(1,15),Args{e->slot(0,0)})))))){return Args{V()};
}
{Args t32=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t33=get(get(e->slot(1,0),lit138),e->slot(1,1));return !truth(t33)?get(get(e->slot(1,0),lit138),add(e->slot(1,1),V(1.0))):t33;})()};
return Args{};})});e->slot(0,2)=arg(t32,0);e->slot(0,3)=arg(t32,1);}
if(truth(e->slot(0,2))){return Args{e->slot(0,3)};
}
return Args{V()};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit98)};V t34=add(([&](){V t35=get(get(e->slot(1,1),lit57),lit98);return !truth(t35)?V(0.0):t35;})(),([&](){V t36=e->slot(0,0);return !truth(t36)?V(0.0):t36;})());refs[0].put(std::move(t34));}
if(truth(ge(get(get(e->slot(1,1),lit57),lit98),get(get(e->slot(1,1),lit4),lit52)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit98)};V t37=V(0.0);refs[0].put(std::move(t37));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit99)};V t38=V(true);refs[0].put(std::move(t38));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit99)};V t39=V(false);refs[0].put(std::move(t39));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit67)};V t40=([&](){V t41=e->slot(0,0);return !truth(t41)?lit139:t41;})();refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit67)};V t42=get(get(e->slot(1,1),lit57),lit67);refs[0].put(std::move(t42));}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,1);e->slot(0,0)=arg(a,0);if(truth(([&](){V t43=e->slot(1,2);return truth(t43)?V(!truth(e->slot(0,0))):t43;})())){return Args{};
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit1)};V t44=first(call(e->slot(1,14),Args{lit140,lit141,get(e->slot(1,3),lit1)}));refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit2)};V t45=first(call(e->slot(1,14),Args{lit140,lit142,get(e->slot(1,3),lit2)}));refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit3)};V t46=first(call(e->slot(1,14),Args{lit140,lit143,get(e->slot(1,3),lit3)}));refs[0].put(std::move(t46));}
if(truth(le(get(e->slot(1,3),lit1),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit1)};V t47=V(2.5);refs[0].put(std::move(t47));}
}
if(truth(le(get(e->slot(1,3),lit2),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit2)};V t48=V(1.45);refs[0].put(std::move(t48));}
}
if(truth(le(get(e->slot(1,3),lit3),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit3)};V t49=V(1.42);refs[0].put(std::move(t49));}
}
{std::array<Ref,1> refs{Ref(e,1,2)};V t50=V(true);refs[0].put(std::move(t50));}
if(truth(([&](){V t51=e->get("ac");return truth(t51)?get(e->get("ac"),lit144):t51;})())){call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(get(e->get("ac"),lit144),call(get(e->get("string"),lit145),Args{lit146,get(e->slot(2,3),lit1),get(e->slot(2,3),lit2),get(e->slot(2,3),lit3)}));
return Args{};})});
}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit100)};V t52=add(([&](){V t53=get(get(e->slot(1,1),lit57),lit100);return !truth(t53)?V(0.0):t53;})(),([&](){V t54=e->slot(0,0);return !truth(t54)?V(0.0):t54;})());refs[0].put(std::move(t52));}
if(truth(([&](){V t55=V(!truth(e->slot(1,2)));return !truth(t55)?ge(get(get(e->slot(1,1),lit57),lit100),get(get(e->slot(1,1),lit4),lit51)):t55;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit100)};V t56=V(0.0);refs[0].put(std::move(t56));}
call(e->slot(1,19),Args{V(!truth(e->slot(1,2)))});
}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t57=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit147)})),lit148))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit147)})),lit149))){return Args{get(e->slot(1,0),lit147)};
}
{V t58=first(call(e->slot(2,5),Args{get(e->slot(1,0),lit150),V(0.0)}));e->slot(0,0)=std::move(t58);}
{V t59=first(call(e->slot(2,5),Args{get(e->slot(1,0),lit151),V(0.0)}));e->slot(0,1)=std::move(t59);}
{V t60=first(call(e->slot(2,5),Args{get(e->slot(1,0),lit152),V(0.0)}));e->slot(0,2)=std::move(t60);}
return call(get(e->get("math"),lit153),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t57,0);e->slot(0,2)=arg(t57,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,5),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t61=V(0.0);e->slot(0,1)=std::move(t61);}
{V t62=V(0.0);e->slot(0,2)=std::move(t62);}
{V t63=first(call(e->slot(1,12),Args{e->slot(0,0),lit154,V()}));e->slot(0,3)=std::move(t63);}
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e,0,1)};V t64=first(call(e->slot(1,5),Args{first(call(e->slot(1,12),Args{e->slot(0,3),lit150,V(0.0)})),V(0.0)}));refs[0].put(std::move(t64));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t65=first(call(e->slot(1,5),Args{first(call(e->slot(1,12),Args{e->slot(0,3),lit152,V(0.0)})),V(0.0)}));refs[0].put(std::move(t65));}
}
if(truth(([&](){V t66=eq(e->slot(0,1),V(0.0));return truth(t66)?eq(e->slot(0,2),V(0.0)):t66;})())){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t67=first(call(e->slot(2,12),Args{e->slot(1,0),lit155,V()}));e->slot(0,0)=std::move(t67);}
if(truth(e->slot(0,0))){{std::array<Ref,1> refs{Ref(e,1,1)};V t68=mul(first(call(e->slot(2,5),Args{first(call(e->slot(2,12),Args{e->slot(0,0),lit150,V(0.0)})),V(0.0)})),V(0.0));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t69=mul(first(call(e->slot(2,5),Args{first(call(e->slot(2,12),Args{e->slot(0,0),lit152,V(0.0)})),V(0.0)})),V(0.0));refs[0].put(std::move(t69));}
}
}
return Args{e->slot(0,1),e->slot(0,2)};
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t70=first(call(e->slot(1,5),Args{first(call(e->slot(1,12),Args{e->slot(0,0),lit104,V()})),V()}));e->slot(0,1)=std::move(t70);}
if(truth(([&](){V t71=eq(e->slot(0,1),V());return !truth(t71)?le(e->slot(0,1),V(0.0)):t71;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t72=first(call(e->slot(1,10),Args{lit156,get(get(e->slot(1,1),lit4),lit9)}));refs[0].put(std::move(t72));}
}
if(truth(([&](){V t73=eq(e->slot(0,1),V());return !truth(t73)?le(e->slot(0,1),V(0.0)):t73;})())){{std::array<Ref,1> refs{Ref(e,0,1)};V t74=get(get(e->slot(1,1),lit4),lit9);refs[0].put(std::move(t74));}
}
return call(e->slot(1,6),Args{e->slot(0,1),V(400.0),V(3000.0)});
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t75=first(call(e->slot(1,14),Args{lit140,lit157,get(get(e->slot(1,1),lit4),lit10)}));e->slot(0,0)=std::move(t75);}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,0)};V t76=first(call(e->slot(1,10),Args{lit158,get(get(e->slot(1,1),lit4),lit10)}));refs[0].put(std::move(t76));}
}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e,0,0)};V t77=get(get(e->slot(1,1),lit4),lit10);refs[0].put(std::move(t77));}
}
return call(e->slot(1,6),Args{e->slot(0,0),V(0.15),V(1.2)});
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
{V t78=([&](){V z=table();set(z,V(1.0),lit114);set(z,V(2.0),lit159);return z;})();e->slot(0,1)=std::move(t78);}
{double t79=num(V(1.0)),t80=num(length(e->slot(0,1))),t81=num(V(1.0));for(double t82=t79;(t81>0?t82<=t80:t82>=t80);t82+=t81){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t82);{V t83=first(call(e->slot(2,12),Args{e->slot(1,0),get(e->slot(1,1),e->slot(0,0)),V()}));e->slot(0,1)=std::move(t83);}
if(truth(ne(e->slot(0,1),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t84=first(call(e->slot(3,5),Args{e->slot(1,1),V()}));e->slot(0,0)=std::move(t84);}
if(truth(([&](){V t85=ne(e->slot(0,0),V());return truth(t85)?eq(e->slot(0,0),e->slot(0,0)):t85;})())){return call(e->slot(3,7),Args{e->slot(0,0)});
}
}
}}
return Args{V()};
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t86=first(call(e->slot(1,16),Args{e->slot(0,0),e->slot(0,1)}));e->slot(0,3)=std::move(t86);}
{V t87=first(call(e->slot(1,25),Args{e->slot(0,3)}));e->slot(0,4)=std::move(t87);}
if(truth(([&](){V t88=ne(e->slot(0,4),V());return truth(t88)?gt(e->slot(0,4),V(1.0)):t88;})())){return Args{e->slot(0,4)};
}
{V t89=first(call(e->slot(1,9),Args{concat(lit160,e->slot(0,1))}));e->slot(0,5)=std::move(t89);}
if(truth(ne(e->slot(0,5),V()))){return call(e->slot(1,7),Args{e->slot(0,5)});
}
{V t90=first(call(e->slot(1,9),Args{concat(lit161,e->slot(0,1))}));e->slot(0,6)=std::move(t90);}
if(truth(ne(e->slot(0,6),V()))){return call(e->slot(1,7),Args{e->slot(0,6)});
}
{V t91=first(call(e->slot(1,9),Args{concat(lit162,e->slot(0,1))}));e->slot(0,7)=std::move(t91);}
if(truth(ne(e->slot(0,7),V()))){return call(e->slot(1,7),Args{e->slot(0,7)});
}
{V t92=get(get(get(e->slot(1,1),lit101),lit118),e->slot(0,1));e->slot(0,8)=std::move(t92);}
if(truth(([&](){V t93=ne(e->slot(0,8),V());return truth(t93)?gt(e->slot(0,8),V(1.0)):t93;})())){return Args{e->slot(0,8)};
}
return Args{([&](){V t94=e->slot(0,2);return !truth(t94)?get(get(e->slot(1,1),lit4),lit18):t94;})()};
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit81)};V t95=add(([&](){V t96=get(get(e->slot(1,1),lit57),lit81);return !truth(t96)?V(999.0):t96;})(),([&](){V t97=e->slot(0,0);return !truth(t97)?V(0.0):t97;})());refs[0].put(std::move(t95));}
if(truth(lt(get(get(e->slot(1,1),lit57),lit81),get(get(e->slot(1,1),lit4),lit50)))){return Args{};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit81)};V t98=V(0.0);refs[0].put(std::move(t98));}
{V t99=first(call(e->slot(1,9),Args{lit163}));e->slot(0,1)=std::move(t99);}
{V t100=first(call(e->slot(1,9),Args{lit164}));e->slot(0,2)=std::move(t100);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit71)};V t101=first(call(e->slot(1,6),Args{first(call(e->slot(1,10),Args{lit165,V(1.0)})),V(0.2),V(1.35)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit72)};V t102=first(call(e->slot(1,6),Args{first(call(e->slot(1,10),Args{lit166,V(1.0)})),V(0.25),V(1.8)}));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit73)};V t103=first(call(e->slot(1,6),Args{first(call(e->slot(1,10),Args{lit167,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t103));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit74)};V t104=first(call(e->slot(1,6),Args{first(call(e->slot(1,10),Args{lit168,V(1.0)})),V(0.35),V(2.0)}));refs[0].put(std::move(t104));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit75)};V t105=first(call(e->slot(1,6),Args{first(call(e->slot(1,10),Args{lit169,V(1.0)})),V(0.5),V(1.8)}));refs[0].put(std::move(t105));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit80)};V t106=([&](){V t107=gt(first(call(e->slot(1,5),Args{e->slot(0,1),V(0.0)})),V(0.0));return !truth(t107)?ne(e->slot(0,2),V()):t107;})();refs[0].put(std::move(t106));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,17);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{V t108=get(e->slot(1,1),lit4);e->slot(0,3)=std::move(t108);}
if(truth(V(!truth(get(get(e->slot(1,1),lit57),lit80))))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit76)};V t109=first(call(e->slot(1,8),Args{([&](){V t110=get(get(e->slot(1,1),lit57),lit76);return !truth(t110)?V(1.0):t110;})(),V(1.0),V(0.1),e->slot(0,2)}));refs[0].put(std::move(t109));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit77)};V t111=first(call(e->slot(1,8),Args{([&](){V t112=get(get(e->slot(1,1),lit57),lit77);return !truth(t112)?V(1.0):t112;})(),V(1.0),V(0.1),e->slot(0,2)}));refs[0].put(std::move(t111));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit78)};V t113=get(e->slot(0,3),lit5);refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit79)};V t114=get(e->slot(0,3),lit6);refs[0].put(std::move(t114));}
return Args{e->slot(0,0),e->slot(0,1)};
}
{V t115=first(call(e->slot(1,6),Args{([&](){V t116=get(get(e->slot(1,1),lit57),lit71);return !truth(t116)?V(1.0):t116;})(),V(0.2),V(1.35)}));e->slot(0,4)=std::move(t115);}
{V t117=first(call(e->slot(1,6),Args{([&](){V t118=get(get(e->slot(1,1),lit57),lit72);return !truth(t118)?V(1.0):t118;})(),V(0.25),V(1.8)}));e->slot(0,5)=std::move(t117);}
{V t119=first(call(e->slot(1,6),Args{([&](){V t120=get(get(e->slot(1,1),lit57),lit73);return !truth(t120)?V(1.0):t120;})(),V(0.35),V(2.0)}));e->slot(0,6)=std::move(t119);}
{V t121=first(call(e->slot(1,6),Args{([&](){V t122=get(get(e->slot(1,1),lit57),lit74);return !truth(t122)?V(1.0):t122;})(),V(0.35),V(2.0)}));e->slot(0,7)=std::move(t121);}
{V t123=first(call(e->slot(1,6),Args{([&](){V t124=get(get(e->slot(1,1),lit57),lit75);return !truth(t124)?V(1.0):t124;})(),V(0.5),V(1.8)}));e->slot(0,8)=std::move(t123);}
{V t125=first(call(e->slot(1,6),Args{sub(e->slot(0,5),V(1.0)),V(0.0),V(0.8)}));e->slot(0,9)=std::move(t125);}
{V t126=first(call(e->slot(1,6),Args{sub(e->slot(0,4),V(1.0)),V(0.0),V(0.35)}));e->slot(0,10)=std::move(t126);}
{V t127=first(call(e->slot(1,6),Args{sub(e->slot(0,6),V(1.0)),V(0.0),V(1.0)}));e->slot(0,11)=std::move(t127);}
{V t128=first(call(e->slot(1,6),Args{sub(e->slot(0,7),V(1.0)),V(0.0),V(1.0)}));e->slot(0,12)=std::move(t128);}
{V t129=add(sub(sub(V(1.0),mul(e->slot(0,9),get(e->slot(0,3),lit40))),mul(e->slot(0,12),get(e->slot(0,3),lit42))),mul(e->slot(0,10),get(e->slot(0,3),lit43)));e->slot(0,13)=std::move(t129);}
{V t130=add(sub(sub(V(1.0),mul(e->slot(0,9),get(e->slot(0,3),lit40))),mul(e->slot(0,11),get(e->slot(0,3),lit41))),mul(e->slot(0,10),get(e->slot(0,3),lit43)));e->slot(0,14)=std::move(t130);}
{std::array<Ref,1> refs{Ref(e,0,13)};V t131=first(call(e->slot(1,6),Args{e->slot(0,13),get(e->slot(0,3),lit44),get(e->slot(0,3),lit45)}));refs[0].put(std::move(t131));}
{std::array<Ref,1> refs{Ref(e,0,14)};V t132=first(call(e->slot(1,6),Args{e->slot(0,14),get(e->slot(0,3),lit44),get(e->slot(0,3),lit45)}));refs[0].put(std::move(t132));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit76)};V t133=first(call(e->slot(1,8),Args{([&](){V t134=get(get(e->slot(1,1),lit57),lit76);return !truth(t134)?V(1.0):t134;})(),e->slot(0,13),V(0.05),e->slot(0,2)}));refs[0].put(std::move(t133));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit77)};V t135=first(call(e->slot(1,8),Args{([&](){V t136=get(get(e->slot(1,1),lit57),lit77);return !truth(t136)?V(1.0):t136;})(),e->slot(0,14),V(0.05),e->slot(0,2)}));refs[0].put(std::move(t135));}
{V t137=divv(mul(get(e->slot(0,3),lit5),add(V(1.0),mul(e->slot(0,9),get(e->slot(0,3),lit38)))),add(V(1.0),mul(e->slot(0,10),get(e->slot(0,3),lit39))));e->slot(0,15)=std::move(t137);}
{V t138=divv(mul(get(e->slot(0,3),lit6),add(V(1.0),mul(e->slot(0,9),get(e->slot(0,3),lit38)))),add(V(1.0),mul(e->slot(0,10),get(e->slot(0,3),lit39))));e->slot(0,16)=std::move(t138);}
{std::array<Ref,1> refs{Ref(e,0,15)};V t139=divv(e->slot(0,15),first(call(get(e->get("math"),lit132),Args{e->slot(0,8),V(0.5)})));refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(e,0,16)};V t140=divv(e->slot(0,16),first(call(get(e->get("math"),lit132),Args{e->slot(0,8),V(0.5)})));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit78)};V t141=first(call(e->slot(1,6),Args{e->slot(0,15),V(0.035),V(0.11)}));refs[0].put(std::move(t141));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit79)};V t142=first(call(e->slot(1,6),Args{e->slot(0,16),V(0.025),V(0.09)}));refs[0].put(std::move(t142));}
return Args{mul(e->slot(0,0),get(get(e->slot(1,1),lit57),lit76)),mul(e->slot(0,1),get(get(e->slot(1,1),lit57),lit77))};
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t143=get(e->slot(1,1),lit4);e->slot(0,4)=std::move(t143);}
{V t144=divv(mul(mul(e->slot(0,2),e->slot(0,1)),e->slot(0,3)),first(call(get(e->get("math"),lit132),Args{get(e->slot(1,3),lit1),V(0.001)})));e->slot(0,5)=std::move(t144);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t145=mul(e->slot(0,5),get(e->slot(0,4),lit13));refs[0].put(std::move(t145));}
{V t146=mul(mul(e->slot(0,2),e->slot(0,0)),e->slot(0,3));e->slot(0,6)=std::move(t146);}
{V t147=first(call(e->slot(1,6),Args{get(e->slot(0,4),lit12),get(e->slot(0,4),lit15),get(e->slot(0,4),lit16)}));e->slot(0,7)=std::move(t147);}
{V t148=sub(V(1.0),e->slot(0,7));e->slot(0,8)=std::move(t148);}
{V t149=divv(mul(e->slot(0,6),e->slot(0,7)),first(call(get(e->get("math"),lit132),Args{get(e->slot(1,3),lit2),V(0.001)})));e->slot(0,9)=std::move(t149);}
{V t150=divv(mul(e->slot(0,6),e->slot(0,8)),first(call(get(e->get("math"),lit132),Args{get(e->slot(1,3),lit3),V(0.001)})));e->slot(0,10)=std::move(t150);}
{std::array<Ref,1> refs{Ref(e,0,9)};V t151=mul(e->slot(0,9),get(e->slot(0,4),lit14));refs[0].put(std::move(t151));}
{std::array<Ref,1> refs{Ref(e,0,10)};V t152=mul(e->slot(0,10),get(e->slot(0,4),lit14));refs[0].put(std::move(t152));}
{V t153=add(e->slot(0,9),e->slot(0,10));e->slot(0,11)=std::move(t153);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t154=first(call(e->slot(1,6),Args{e->slot(0,5),V(-num(get(e->slot(0,4),lit7))),get(e->slot(0,4),lit7)}));refs[0].put(std::move(t154));}
{std::array<Ref,1> refs{Ref(e,0,11)};V t155=first(call(e->slot(1,6),Args{e->slot(0,11),V(-num(get(e->slot(0,4),lit8))),get(e->slot(0,4),lit8)}));refs[0].put(std::move(t155));}
{std::array<Ref,1> refs{Ref(e,0,9)};V t156=first(call(e->slot(1,6),Args{e->slot(0,9),V(-num(get(e->slot(0,4),lit8))),get(e->slot(0,4),lit8)}));refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(e,0,10)};V t157=first(call(e->slot(1,6),Args{e->slot(0,10),V(-num(get(e->slot(0,4),lit8))),get(e->slot(0,4),lit8)}));refs[0].put(std::move(t157));}
return Args{e->slot(0,5),e->slot(0,11),e->slot(0,9),e->slot(0,10)};
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);e->slot(0,4)=arg(a,4);{std::array<Ref,1> refs{Ref(e->slot(1,4),lit53)};V t158=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit53),e->slot(0,0),([&](){V t159=get(get(e->slot(1,1),lit57),lit78);return !truth(t159)?get(get(e->slot(1,1),lit4),lit5):t159;})(),e->slot(0,4)}));refs[0].put(std::move(t158));}
{std::array<Ref,1> refs{Ref(e->slot(1,4),lit54)};V t160=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit54),e->slot(0,1),([&](){V t161=get(get(e->slot(1,1),lit57),lit79);return !truth(t161)?get(get(e->slot(1,1),lit4),lit6):t161;})(),e->slot(0,4)}));refs[0].put(std::move(t160));}
{std::array<Ref,1> refs{Ref(e->slot(1,4),lit55)};V t162=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit55),e->slot(0,2),([&](){V t163=get(get(e->slot(1,1),lit57),lit79);return !truth(t163)?get(get(e->slot(1,1),lit4),lit6):t163;})(),e->slot(0,4)}));refs[0].put(std::move(t162));}
{std::array<Ref,1> refs{Ref(e->slot(1,4),lit56)};V t164=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit56),e->slot(0,3),([&](){V t165=get(get(e->slot(1,1),lit57),lit79);return !truth(t165)?get(get(e->slot(1,1),lit4),lit6):t165;})(),e->slot(0,4)}));refs[0].put(std::move(t164));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit110)};V t166=get(e->slot(1,4),lit53);refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit111)};V t167=get(e->slot(1,4),lit54);refs[0].put(std::move(t167));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit112)};V t168=get(e->slot(1,4),lit55);refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit113)};V t169=get(e->slot(1,4),lit56);refs[0].put(std::move(t169));}
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t170=get(e->slot(1,4),lit53);e->slot(0,0)=std::move(t170);}
{V t171=get(e->slot(1,4),lit55);e->slot(0,1)=std::move(t171);}
{V t172=get(e->slot(1,4),lit56);e->slot(0,2)=std::move(t172);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit115),V(0.0))};V t173=mul(V(-num(e->slot(0,0))),V(0.5));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit115),V(1.0))};V t174=mul(V(-num(e->slot(0,0))),V(0.5));refs[0].put(std::move(t174));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit115),V(2.0))};V t175=mul(e->slot(0,0),V(0.5));refs[0].put(std::move(t175));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit115),V(3.0))};V t176=mul(e->slot(0,0),V(0.5));refs[0].put(std::move(t176));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit116),V(0.0))};V t177=mul(V(-num(e->slot(0,1))),V(0.5));refs[0].put(std::move(t177));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit116),V(1.0))};V t178=mul(e->slot(0,1),V(0.5));refs[0].put(std::move(t178));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit116),V(2.0))};V t179=mul(V(-num(e->slot(0,2))),V(0.5));refs[0].put(std::move(t179));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(1,1),lit101),lit116),V(3.0))};V t180=mul(e->slot(0,2),V(0.5));refs[0].put(std::move(t180));}
{double t181=num(V(0.0)),t182=num(V(3.0)),t183=num(V(1.0));for(double t184=t181;(t183>0?t184<=t182:t184>=t182);t184+=t183){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t184);{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0))};V t185=add(([&](){V t186=get(get(get(e->slot(2,1),lit101),lit115),e->slot(0,0));return !truth(t186)?V(0.0):t186;})(),([&](){V t187=get(get(get(e->slot(2,1),lit101),lit116),e->slot(0,0));return !truth(t187)?V(0.0):t187;})());refs[0].put(std::move(t185));}
}}
return Args{};});
e->slot(0,32)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t188=num(V(0.0)),t189=num(V(3.0)),t190=num(V(1.0));for(double t191=t188;(t190>0?t191<=t189:t191>=t189);t191+=t190){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t191);{V t192=([&](){V t193=([&](){V t194=first(call(e->slot(2,9),Args{concat(lit170,e->slot(0,0))}));return !truth(t194)?first(call(e->slot(2,9),Args{concat(lit171,e->slot(0,0))})):t194;})();return !truth(t193)?first(call(e->slot(2,9),Args{concat(lit172,e->slot(0,0))})):t193;})();e->slot(0,1)=std::move(t192);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit57),lit82)};V t195=V(true);refs[0].put(std::move(t195));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0))};V t196=add(([&](){V t197=get(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0));return !truth(t197)?V(0.0):t197;})(),mul(first(call(e->slot(2,5),Args{e->slot(0,1),V(0.0)})),get(get(e->slot(2,1),lit4),lit11)));refs[0].put(std::move(t196));}
}
}}
return Args{};});
e->slot(0,33)=native([up=e](const Args& a)->Args{Env storage(up,true,12);auto e=&storage;e->slot(0,0)=arg(a,0);{V t198=get(e->slot(1,1),lit4);e->slot(0,1)=std::move(t198);}
{V t199=V(0.0);e->slot(0,2)=std::move(t199);}
{V t200=([&](){V t201=([&](){V t202=first(call(e->slot(1,9),Args{concat(lit170,e->slot(0,0))}));return !truth(t202)?first(call(e->slot(1,9),Args{concat(lit171,e->slot(0,0))})):t202;})();return !truth(t201)?first(call(e->slot(1,9),Args{concat(lit172,e->slot(0,0))})):t201;})();e->slot(0,3)=std::move(t200);}
{V t203=([&](){V t204=([&](){V t205=([&](){V t206=first(call(e->slot(1,9),Args{concat(lit173,e->slot(0,0))}));return !truth(t206)?first(call(e->slot(1,9),Args{concat(lit174,e->slot(0,0))})):t206;})();return !truth(t205)?first(call(e->slot(1,9),Args{concat(lit175,e->slot(0,0))})):t205;})();return !truth(t204)?first(call(e->slot(1,9),Args{concat(lit176,e->slot(0,0))})):t204;})();e->slot(0,4)=std::move(t203);}
{V t207=([&](){V t208=([&](){V t209=first(call(e->slot(1,9),Args{concat(lit177,e->slot(0,0))}));return !truth(t209)?first(call(e->slot(1,9),Args{concat(lit178,e->slot(0,0))})):t209;})();return !truth(t208)?first(call(e->slot(1,9),Args{concat(lit179,e->slot(0,0))})):t208;})();e->slot(0,5)=std::move(t207);}
{V t210=([&](){V t211=first(call(e->slot(1,9),Args{concat(lit180,e->slot(0,0))}));return !truth(t211)?first(call(e->slot(1,9),Args{concat(lit181,e->slot(0,0))})):t211;})();e->slot(0,6)=std::move(t210);}
if(truth(([&](){V t212=([&](){V t213=([&](){V t214=ne(e->slot(0,3),V());return !truth(t214)?ne(e->slot(0,4),V()):t214;})();return !truth(t213)?ne(e->slot(0,5),V()):t213;})();return !truth(t212)?ne(e->slot(0,6),V()):t212;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit82)};V t215=V(true);refs[0].put(std::move(t215));}
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t216=sub(sub(sub(add(e->slot(0,2),mul(first(call(e->slot(1,7),Args{e->slot(0,3)})),get(e->slot(0,1),lit28))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0)})),V(0.0),V(1.0)})),get(e->slot(0,1),lit29))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.0)})),get(e->slot(0,1),lit30))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,6),V(0.0)})),V(0.0),V(2.0)})),get(e->slot(0,1),lit31)));refs[0].put(std::move(t216));}
{V t217=([&](){V t218=([&](){V t219=first(call(e->slot(1,9),Args{concat(lit182,e->slot(0,0))}));return !truth(t219)?first(call(e->slot(1,9),Args{concat(lit183,e->slot(0,0))})):t219;})();return !truth(t218)?first(call(e->slot(1,9),Args{concat(lit184,e->slot(0,0))})):t218;})();e->slot(0,7)=std::move(t217);}
{V t220=([&](){V t221=([&](){V t222=first(call(e->slot(1,9),Args{concat(lit185,e->slot(0,0))}));return !truth(t222)?first(call(e->slot(1,9),Args{concat(lit186,e->slot(0,0))})):t222;})();return !truth(t221)?first(call(e->slot(1,9),Args{concat(lit187,e->slot(0,0))})):t221;})();e->slot(0,8)=std::move(t220);}
if(truth(([&](){V t223=ne(e->slot(0,7),V());return !truth(t223)?ne(e->slot(0,8),V()):t223;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit85)};V t224=V(true);refs[0].put(std::move(t224));}
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t225=sub(e->slot(0,2),mul(add(first(call(e->slot(1,7),Args{e->slot(0,7)})),first(call(e->slot(1,7),Args{e->slot(0,8)}))),get(e->slot(0,1),lit34)));refs[0].put(std::move(t225));}
{V t226=([&](){V t227=([&](){V t228=first(call(e->slot(1,9),Args{concat(lit188,e->slot(0,0))}));return !truth(t228)?first(call(e->slot(1,9),Args{concat(lit189,e->slot(0,0))})):t228;})();return !truth(t227)?first(call(e->slot(1,9),Args{concat(lit190,e->slot(0,0))})):t227;})();e->slot(0,9)=std::move(t226);}
if(truth(ne(e->slot(0,9),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit89)};V t229=V(true);refs[0].put(std::move(t229));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t230=sub(e->slot(0,2),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,9),V(0.0)})),V(0.0),V(1.0)})),V(120.0)));refs[0].put(std::move(t230));}
}
if(truth(ge(e->slot(0,0),V(2.0)))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t231=([&](){V t232=([&](){V t233=([&](){V t234=first(call(e->slot(2,9),Args{lit191}));return !truth(t234)?first(call(e->slot(2,9),Args{lit192})):t234;})();return !truth(t233)?first(call(e->slot(2,9),Args{lit193})):t233;})();return !truth(t232)?first(call(e->slot(2,9),Args{lit194})):t232;})();e->slot(0,0)=std::move(t231);}
{V t235=([&](){V t236=first(call(e->slot(2,9),Args{lit195}));return !truth(t236)?first(call(e->slot(2,9),Args{lit196})):t236;})();e->slot(0,1)=std::move(t235);}
{V t237=([&](){V t238=first(call(e->slot(2,9),Args{lit197}));return !truth(t238)?first(call(e->slot(2,9),Args{lit198})):t238;})();e->slot(0,2)=std::move(t237);}
if(truth(([&](){V t239=([&](){V t240=ne(e->slot(0,0),V());return !truth(t240)?ne(e->slot(0,1),V()):t240;})();return !truth(t239)?ne(e->slot(0,2),V()):t239;})())){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit57),lit84)};V t241=V(true);refs[0].put(std::move(t241));}
}
if(truth(ne(e->slot(0,2),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(2,1),lit57),lit90)};V t242=V(true);refs[0].put(std::move(t242));}
}
{std::array<Ref,1> refs{Ref(e,1,2)};V t243=add(add(add(e->slot(1,2),mul(first(call(e->slot(2,7),Args{e->slot(0,0)})),get(e->slot(1,1),lit32))),mul(first(call(e->slot(2,6),Args{first(call(e->slot(2,5),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})),get(e->slot(1,1),lit33))),mul(first(call(e->slot(2,7),Args{e->slot(0,2)})),V(45.0)));refs[0].put(std::move(t243));}
}
{V t244=first(call(e->slot(1,9),Args{lit199}));e->slot(0,10)=std::move(t244);}
{V t245=first(call(e->slot(1,9),Args{concat(lit200,e->slot(0,0))}));e->slot(0,11)=std::move(t245);}
if(truth(([&](){V t246=ne(e->slot(0,10),V());return !truth(t246)?ne(e->slot(0,11),V()):t246;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit86)};V t247=V(true);refs[0].put(std::move(t247));}
}
{std::array<Ref,1> refs{Ref(e,0,2)};V t248=sub(sub(e->slot(0,2),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)})),get(e->slot(0,1),lit35))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)})),get(e->slot(0,1),lit36)));refs[0].put(std::move(t248));}
return Args{e->slot(0,2)};
return Args{};});
e->slot(0,34)=native([up=e](const Args& a)->Args{Env storage(up,true,9);auto e=&storage;e->slot(0,0)=arg(a,0);{V t249=get(e->slot(1,1),lit4);e->slot(0,1)=std::move(t249);}
{V t250=([&](){V t251=([&](){V t252=first(call(e->slot(1,9),Args{concat(lit201,e->slot(0,0))}));return !truth(t252)?first(call(e->slot(1,9),Args{concat(lit202,e->slot(0,0))})):t252;})();return !truth(t251)?first(call(e->slot(1,9),Args{concat(lit203,e->slot(0,0))})):t251;})();e->slot(0,2)=std::move(t250);}
{V t253=([&](){V t254=first(call(e->slot(1,9),Args{concat(lit204,e->slot(0,0))}));return !truth(t254)?first(call(e->slot(1,9),Args{concat(lit205,e->slot(0,0))})):t254;})();e->slot(0,3)=std::move(t253);}
{V t255=first(call(e->slot(1,9),Args{concat(lit206,e->slot(0,0))}));e->slot(0,4)=std::move(t255);}
{V t256=([&](){V t257=first(call(e->slot(1,9),Args{concat(lit207,e->slot(0,0))}));return !truth(t257)?first(call(e->slot(1,9),Args{concat(lit208,e->slot(0,0))})):t257;})();e->slot(0,5)=std::move(t256);}
{V t258=([&](){V t259=first(call(e->slot(1,9),Args{concat(lit209,e->slot(0,0))}));return !truth(t259)?first(call(e->slot(1,9),Args{concat(lit210,e->slot(0,0))})):t259;})();e->slot(0,6)=std::move(t258);}
{V t260=([&](){V t261=([&](){V t262=first(call(e->slot(1,9),Args{concat(lit211,e->slot(0,0))}));return !truth(t262)?first(call(e->slot(1,9),Args{concat(lit176,e->slot(0,0))})):t262;})();return !truth(t261)?first(call(e->slot(1,9),Args{concat(lit212,e->slot(0,0))})):t261;})();e->slot(0,7)=std::move(t260);}
if(truth(([&](){V t263=([&](){V t264=([&](){V t265=([&](){V t266=([&](){V t267=ne(e->slot(0,2),V());return !truth(t267)?ne(e->slot(0,3),V()):t267;})();return !truth(t266)?ne(e->slot(0,4),V()):t266;})();return !truth(t265)?ne(e->slot(0,5),V()):t265;})();return !truth(t264)?ne(e->slot(0,6),V()):t264;})();return !truth(t263)?ne(e->slot(0,7),V()):t263;})())){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit83)};V t268=V(true);refs[0].put(std::move(t268));}
}
{V t269=sub(add(add(add(add(mul(first(call(e->slot(1,5),Args{e->slot(0,2),V(0.0)})),get(e->slot(0,1),lit22)),mul(first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0)})),get(e->slot(0,1),lit23))),mul(first(call(e->slot(1,5),Args{e->slot(0,4),V(0.0)})),get(e->slot(0,1),lit24))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,5),V(0.0)})),V(0.0),V(1.5)})),get(e->slot(0,1),lit25))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.5)})),get(e->slot(0,1),lit26))),mul(first(call(e->slot(1,6),Args{first(call(e->slot(1,5),Args{e->slot(0,7),V(0.0)})),V(0.0),V(1.0)})),get(e->slot(0,1),lit27)));e->slot(0,8)=std::move(t269);}
return Args{e->slot(0,8)};
return Args{};});
e->slot(0,35)=native([up=e](const Args& a)->Args{Env storage(up,true,8);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t270=get(e->slot(1,1),lit4);e->slot(0,2)=std::move(t270);}
{double t271=num(V(0.0)),t272=num(V(3.0)),t273=num(V(1.0));for(double t274=t271;(t273>0?t274<=t272:t274>=t272);t274+=t273){auto parent=e;Env storage(parent,false,6);auto e=&storage;e->slot(0,0)=V(t274);{V t275=first(call(e->slot(2,26),Args{e->slot(1,0),e->slot(0,0),get(e->slot(1,2),lit18)}));e->slot(0,1)=std::move(t275);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t276=first(call(e->slot(2,6),Args{e->slot(0,1),get(e->slot(1,2),lit19),get(e->slot(1,2),lit20)}));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit117),e->slot(0,0))};V t277=e->slot(0,1);refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit118),e->slot(0,0))};V t278=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit118),e->slot(0,0)),e->slot(0,1),get(e->slot(1,2),lit17),e->slot(1,1)}));refs[0].put(std::move(t278));}
{V t279=mul(([&](){V t280=get(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0));return !truth(t280)?V(0.0):t280;})(),get(e->slot(1,2),lit21));e->slot(0,2)=std::move(t279);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit121),e->slot(0,0))};V t281=e->slot(0,2);refs[0].put(std::move(t281));}
{V t282=first(call(e->slot(2,34),Args{e->slot(0,0)}));e->slot(0,3)=std::move(t282);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit122),e->slot(0,0))};V t283=e->slot(0,3);refs[0].put(std::move(t283));}
{V t284=first(call(e->slot(2,33),Args{e->slot(0,0)}));e->slot(0,4)=std::move(t284);}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit123),e->slot(0,0))};V t285=e->slot(0,4);refs[0].put(std::move(t285));}
{V t286=add(add(add(([&](){V t287=get(get(get(e->slot(2,1),lit101),lit118),e->slot(0,0));return !truth(t287)?get(e->slot(1,2),lit18):t287;})(),e->slot(0,2)),e->slot(0,3)),e->slot(0,4));e->slot(0,5)=std::move(t286);}
{std::array<Ref,1> refs{Ref(e,0,5)};V t288=first(call(e->slot(2,6),Args{e->slot(0,5),get(e->slot(1,2),lit19),get(e->slot(1,2),lit20)}));refs[0].put(std::move(t288));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0))};V t289=e->slot(0,5);refs[0].put(std::move(t289));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit120),e->slot(0,0))};V t290=first(call(e->slot(2,6),Args{divv(e->slot(0,5),first(call(get(e->get("math"),lit132),Args{get(e->slot(1,2),lit18),V(1.0)}))),V(0.0),V(2.5)}));refs[0].put(std::move(t290));}
}}
{V t291=([&](){V t292=get(get(get(e->slot(1,1),lit101),lit119),V(0.0));return !truth(t292)?V(0.0):t292;})();e->slot(0,3)=std::move(t291);}
{V t293=([&](){V t294=get(get(get(e->slot(1,1),lit101),lit119),V(1.0));return !truth(t294)?V(0.0):t294;})();e->slot(0,4)=std::move(t293);}
{V t295=([&](){V t296=get(get(get(e->slot(1,1),lit101),lit119),V(2.0));return !truth(t296)?V(0.0):t296;})();e->slot(0,5)=std::move(t295);}
{V t297=([&](){V t298=get(get(get(e->slot(1,1),lit101),lit119),V(3.0));return !truth(t298)?V(0.0):t298;})();e->slot(0,6)=std::move(t297);}
{V t299=first(call(get(e->get("math"),lit132),Args{add(add(add(e->slot(0,3),e->slot(0,4)),e->slot(0,5)),e->slot(0,6)),V(1.0)}));e->slot(0,7)=std::move(t299);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit124)};V t300=divv(add(e->slot(0,3),e->slot(0,4)),e->slot(0,7));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit125)};V t301=divv(add(e->slot(0,5),e->slot(0,6)),e->slot(0,7));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit126)};V t302=divv(add(e->slot(0,3),e->slot(0,5)),e->slot(0,7));refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit127)};V t303=divv(add(e->slot(0,4),e->slot(0,6)),e->slot(0,7));refs[0].put(std::move(t303));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit91)};V t304=mul(e->slot(0,7),V(0.25));refs[0].put(std::move(t304));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit92)};V t305=mul(add(e->slot(0,3),e->slot(0,4)),V(0.5));refs[0].put(std::move(t305));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit93)};V t306=mul(add(e->slot(0,5),e->slot(0,6)),V(0.5));refs[0].put(std::move(t306));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit94)};V t307=mul(add(e->slot(0,3),e->slot(0,5)),V(0.5));refs[0].put(std::move(t307));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit95)};V t308=mul(add(e->slot(0,4),e->slot(0,6)),V(0.5));refs[0].put(std::move(t308));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit96)};V t309=first(call(get(e->get("math"),lit132),Args{e->slot(0,3),e->slot(0,4),e->slot(0,5),e->slot(0,6)}));refs[0].put(std::move(t309));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit97)};V t310=first(call(get(e->get("math"),lit213),Args{e->slot(0,3),e->slot(0,4),e->slot(0,5),e->slot(0,6)}));refs[0].put(std::move(t310));}
return Args{};});
e->slot(0,36)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;{V t311=first(call(e->slot(1,6),Args{divv(get(e->slot(1,4),lit53),first(call(get(e->get("math"),lit132),Args{get(get(e->slot(1,1),lit4),lit7),V(1.0)}))),V(-num(V(1.0))),V(1.0)}));e->slot(0,0)=std::move(t311);}
{V t312=first(call(e->slot(1,6),Args{divv(get(e->slot(1,4),lit54),first(call(get(e->get("math"),lit132),Args{get(get(e->slot(1,1),lit4),lit8),V(1.0)}))),V(-num(V(1.0))),V(1.0)}));e->slot(0,1)=std::move(t312);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit128)};V t313=e->slot(0,0);refs[0].put(std::move(t313));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit129)};V t314=e->slot(0,1);refs[0].put(std::move(t314));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit58)};V t315=first(call(e->slot(1,6),Args{sub(V(0.5),mul(e->slot(0,0),V(0.5))),V(0.0),V(1.0)}));refs[0].put(std::move(t315));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit59)};V t316=first(call(e->slot(1,6),Args{add(V(0.5),mul(e->slot(0,0),V(0.5))),V(0.0),V(1.0)}));refs[0].put(std::move(t316));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit60)};V t317=first(call(e->slot(1,6),Args{sub(V(0.5),mul(e->slot(0,1),V(0.5))),V(0.0),V(1.0)}));refs[0].put(std::move(t317));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit61)};V t318=first(call(e->slot(1,6),Args{add(V(0.5),mul(e->slot(0,1),V(0.5))),V(0.0),V(1.0)}));refs[0].put(std::move(t318));}
if(truth(lt(first(call(e->slot(1,7),Args{e->slot(0,0)})),V(0.1)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit62)};V t319=lit63;refs[0].put(std::move(t319));}
}else if(truth(gt(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit62)};V t320=lit214;refs[0].put(std::move(t320));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit62)};V t321=lit215;refs[0].put(std::move(t321));}
}

if(truth(lt(first(call(e->slot(1,7),Args{e->slot(0,1)})),V(0.1)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit64)};V t322=lit63;refs[0].put(std::move(t322));}
}else if(truth(gt(e->slot(0,1),V(0.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit64)};V t323=lit216;refs[0].put(std::move(t323));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit64)};V t324=lit217;refs[0].put(std::move(t324));}
}

if(truth(gt(add(first(call(e->slot(1,7),Args{e->slot(0,0)})),first(call(e->slot(1,7),Args{e->slot(0,1)}))),V(0.8)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit65)};V t325=lit218;refs[0].put(std::move(t325));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit65)};V t326=lit219;refs[0].put(std::move(t326));}
}
return Args{};});
e->slot(0,37)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{std::array<Ref,1> refs{Ref(e->slot(1,4),lit53)};V t327=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit53),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t327));}
{std::array<Ref,1> refs{Ref(e->slot(1,4),lit54)};V t328=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit54),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(1,4),lit55)};V t329=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit55),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t329));}
{std::array<Ref,1> refs{Ref(e->slot(1,4),lit56)};V t330=first(call(e->slot(1,8),Args{get(e->slot(1,4),lit56),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t330));}
{double t331=num(V(0.0)),t332=num(V(3.0)),t333=num(V(1.0));for(double t334=t331;(t333>0?t334<=t332:t334>=t332);t334+=t333){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t334);{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit115),e->slot(0,0))};V t335=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit115),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t335));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit116),e->slot(0,0))};V t336=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit116),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t336));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0))};V t337=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t337));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit121),e->slot(0,0))};V t338=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit121),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t338));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit122),e->slot(0,0))};V t339=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit122),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t339));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit123),e->slot(0,0))};V t340=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit123),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t340));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit118),e->slot(0,0))};V t341=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit118),e->slot(0,0)),get(get(e->slot(2,1),lit4),lit18),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t341));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0))};V t342=first(call(e->slot(2,8),Args{get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0)),get(get(e->slot(2,1),lit4),lit18),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t342));}
{std::array<Ref,1> refs{Ref(get(get(e->slot(2,1),lit101),lit120),e->slot(0,0))};V t343=first(call(e->slot(2,6),Args{divv(([&](){V t344=get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0));return !truth(t344)?get(get(e->slot(2,1),lit4),lit18):t344;})(),first(call(get(e->get("math"),lit132),Args{get(get(e->slot(2,1),lit4),lit18),V(1.0)}))),V(0.0),V(2.5)}));refs[0].put(std::move(t343));}
}}
call(e->slot(1,35),Args{V(),e->slot(0,0)});
call(e->slot(1,36),Args{});
return Args{};});
e->slot(0,38)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t345=num(V(0.0)),t346=num(V(3.0)),t347=num(V(1.0));for(double t348=t345;(t347>0?t348<=t346:t348>=t346);t348+=t347){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t348);call(e->slot(2,11),Args{concat(lit220,e->slot(0,0)),([&](){V t349=get(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0));return !truth(t349)?V(0.0):t349;})()});
call(e->slot(2,11),Args{concat(lit221,e->slot(0,0)),([&](){V t350=get(get(get(e->slot(2,1),lit101),lit115),e->slot(0,0));return !truth(t350)?V(0.0):t350;})()});
call(e->slot(2,11),Args{concat(lit222,e->slot(0,0)),([&](){V t351=get(get(get(e->slot(2,1),lit101),lit116),e->slot(0,0));return !truth(t351)?V(0.0):t351;})()});
call(e->slot(2,11),Args{concat(lit223,e->slot(0,0)),([&](){V t352=get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0));return !truth(t352)?V(0.0):t352;})()});
call(e->slot(2,11),Args{concat(lit224,e->slot(0,0)),([&](){V t353=get(get(get(e->slot(2,1),lit101),lit117),e->slot(0,0));return !truth(t353)?V(0.0):t353;})()});
call(e->slot(2,11),Args{concat(lit225,e->slot(0,0)),([&](){V t354=get(get(get(e->slot(2,1),lit101),lit121),e->slot(0,0));return !truth(t354)?V(0.0):t354;})()});
call(e->slot(2,11),Args{concat(lit226,e->slot(0,0)),([&](){V t355=get(get(get(e->slot(2,1),lit101),lit122),e->slot(0,0));return !truth(t355)?V(0.0):t355;})()});
call(e->slot(2,11),Args{concat(lit227,e->slot(0,0)),([&](){V t356=get(get(get(e->slot(2,1),lit101),lit123),e->slot(0,0));return !truth(t356)?V(0.0):t356;})()});
call(e->slot(2,11),Args{concat(lit228,e->slot(0,0)),([&](){V t357=get(get(get(e->slot(2,1),lit101),lit120),e->slot(0,0));return !truth(t357)?V(1.0):t357;})()});
call(e->slot(2,11),Args{concat(lit229,e->slot(0,0)),([&](){V t358=get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0));return !truth(t358)?V(0.0):t358;})()});
call(e->slot(2,11),Args{concat(lit230,e->slot(0,0)),([&](){V t359=get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0));return !truth(t359)?V(0.0):t359;})()});
call(e->slot(2,11),Args{concat(lit231,e->slot(0,0)),([&](){V t360=get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0));return !truth(t360)?V(0.0):t360;})()});
call(e->slot(2,11),Args{concat(lit232,e->slot(0,0)),([&](){V t361=get(get(get(e->slot(2,1),lit101),lit119),e->slot(0,0));return !truth(t361)?V(0.0):t361;})()});
call(e->slot(2,11),Args{concat(lit233,e->slot(0,0)),([&](){V t362=get(get(get(e->slot(2,1),lit101),lit114),e->slot(0,0));return !truth(t362)?V(0.0):t362;})()});
}}
call(e->slot(1,11),Args{lit234,([&](){V t363=get(get(e->slot(1,1),lit101),lit124);return !truth(t363)?V(0.5):t363;})()});
call(e->slot(1,11),Args{lit235,([&](){V t364=get(get(e->slot(1,1),lit101),lit125);return !truth(t364)?V(0.5):t364;})()});
call(e->slot(1,11),Args{lit236,([&](){V t365=get(get(e->slot(1,1),lit101),lit126);return !truth(t365)?V(0.5):t365;})()});
call(e->slot(1,11),Args{lit237,([&](){V t366=get(get(e->slot(1,1),lit101),lit127);return !truth(t366)?V(0.5):t366;})()});
call(e->slot(1,11),Args{lit238,([&](){V t367=get(e->slot(1,4),lit53);return !truth(t367)?V(0.0):t367;})()});
call(e->slot(1,11),Args{lit239,([&](){V t368=get(e->slot(1,4),lit54);return !truth(t368)?V(0.0):t368;})()});
call(e->slot(1,11),Args{lit240,([&](){V t369=get(e->slot(1,4),lit55);return !truth(t369)?V(0.0):t369;})()});
call(e->slot(1,11),Args{lit241,([&](){V t370=get(e->slot(1,4),lit56);return !truth(t370)?V(0.0):t370;})()});
call(e->slot(1,11),Args{lit242,([&](){V t371=get(get(e->slot(1,1),lit57),lit58);return !truth(t371)?V(0.5):t371;})()});
call(e->slot(1,11),Args{lit243,([&](){V t372=get(get(e->slot(1,1),lit57),lit59);return !truth(t372)?V(0.5):t372;})()});
call(e->slot(1,11),Args{lit244,([&](){V t373=get(get(e->slot(1,1),lit57),lit60);return !truth(t373)?V(0.5):t373;})()});
call(e->slot(1,11),Args{lit245,([&](){V t374=get(get(e->slot(1,1),lit57),lit61);return !truth(t374)?V(0.5):t374;})()});
call(e->slot(1,11),Args{lit246,([&](){V t375=get(get(e->slot(1,1),lit57),lit58);return !truth(t375)?V(0.5):t375;})()});
call(e->slot(1,11),Args{lit247,([&](){V t376=get(get(e->slot(1,1),lit57),lit59);return !truth(t376)?V(0.5):t376;})()});
call(e->slot(1,11),Args{lit248,([&](){V t377=get(get(e->slot(1,1),lit57),lit60);return !truth(t377)?V(0.5):t377;})()});
call(e->slot(1,11),Args{lit249,([&](){V t378=get(get(e->slot(1,1),lit57),lit61);return !truth(t378)?V(0.5):t378;})()});
call(e->slot(1,11),Args{lit250,([&](){V t379=get(get(e->slot(1,1),lit57),lit67);return !truth(t379)?lit139:t379;})()});
call(e->slot(1,11),Args{lit251,([&](){V t380=get(get(e->slot(1,1),lit57),lit69);return !truth(t380)?V(0.0):t380;})()});
call(e->slot(1,11),Args{lit252,([&](){V t381=([&](){V t382=get(get(e->slot(1,1),lit57),lit70);return truth(t382)?V(1.0):t382;})();return !truth(t381)?V(0.0):t381;})()});
call(e->slot(1,11),Args{lit253,([&](){V t383=get(get(e->slot(1,1),lit101),lit102);return !truth(t383)?V(0.0):t383;})()});
call(e->slot(1,11),Args{lit254,([&](){V t384=get(get(e->slot(1,1),lit101),lit103);return !truth(t384)?V(0.0):t384;})()});
call(e->slot(1,11),Args{lit255,([&](){V t385=get(get(e->slot(1,1),lit101),lit104);return !truth(t385)?V(0.0):t385;})()});
call(e->slot(1,11),Args{lit256,([&](){V t386=get(get(e->slot(1,1),lit101),lit105);return !truth(t386)?V(0.0):t386;})()});
call(e->slot(1,11),Args{lit257,([&](){V t387=get(get(e->slot(1,1),lit101),lit106);return !truth(t387)?V(0.0):t387;})()});
call(e->slot(1,11),Args{lit258,([&](){V t388=get(get(e->slot(1,1),lit101),lit107);return !truth(t388)?V(0.0):t388;})()});
call(e->slot(1,11),Args{lit259,([&](){V t389=get(get(e->slot(1,1),lit101),lit108);return !truth(t389)?V(0.0):t389;})()});
call(e->slot(1,11),Args{lit260,([&](){V t390=get(get(e->slot(1,1),lit101),lit109);return !truth(t390)?V(0.0):t390;})()});
call(e->slot(1,11),Args{lit261,([&](){V t391=get(get(e->slot(1,1),lit101),lit110);return !truth(t391)?V(0.0):t391;})()});
call(e->slot(1,11),Args{lit262,([&](){V t392=get(get(e->slot(1,1),lit101),lit111);return !truth(t392)?V(0.0):t392;})()});
call(e->slot(1,11),Args{lit263,([&](){V t393=get(get(e->slot(1,1),lit101),lit112);return !truth(t393)?V(0.0):t393;})()});
call(e->slot(1,11),Args{lit264,([&](){V t394=get(get(e->slot(1,1),lit101),lit113);return !truth(t394)?V(0.0):t394;})()});
call(e->slot(1,11),Args{lit265,([&](){V t395=get(get(e->slot(1,1),lit4),lit12);return !truth(t395)?V(0.58):t395;})()});
call(e->slot(1,11),Args{lit266,([&](){V t396=get(get(e->slot(1,1),lit101),lit128);return !truth(t396)?V(0.0):t396;})()});
call(e->slot(1,11),Args{lit267,([&](){V t397=get(get(e->slot(1,1),lit101),lit129);return !truth(t397)?V(0.0):t397;})()});
call(e->slot(1,11),Args{lit268,([&](){V t398=get(e->slot(1,3),lit1);return !truth(t398)?V(2.5):t398;})()});
call(e->slot(1,11),Args{lit269,([&](){V t399=get(e->slot(1,3),lit2);return !truth(t399)?V(1.45):t399;})()});
call(e->slot(1,11),Args{lit270,([&](){V t400=get(e->slot(1,3),lit3);return !truth(t400)?V(1.42):t400;})()});
call(e->slot(1,11),Args{lit271,([&](){V t401=([&](){V t402=get(get(e->slot(1,1),lit57),lit80);return truth(t402)?V(1.0):t402;})();return !truth(t401)?V(0.0):t401;})()});
call(e->slot(1,11),Args{lit272,([&](){V t403=get(get(e->slot(1,1),lit57),lit71);return !truth(t403)?V(1.0):t403;})()});
call(e->slot(1,11),Args{lit273,([&](){V t404=get(get(e->slot(1,1),lit57),lit72);return !truth(t404)?V(1.0):t404;})()});
call(e->slot(1,11),Args{lit274,([&](){V t405=get(get(e->slot(1,1),lit57),lit76);return !truth(t405)?V(1.0):t405;})()});
call(e->slot(1,11),Args{lit275,([&](){V t406=get(get(e->slot(1,1),lit57),lit77);return !truth(t406)?V(1.0):t406;})()});
call(e->slot(1,11),Args{lit276,([&](){V t407=get(get(e->slot(1,1),lit57),lit78);return !truth(t407)?get(get(e->slot(1,1),lit4),lit5):t407;})()});
call(e->slot(1,11),Args{lit277,([&](){V t408=get(get(e->slot(1,1),lit57),lit79);return !truth(t408)?get(get(e->slot(1,1),lit4),lit6):t408;})()});
call(e->slot(1,11),Args{lit278,([&](){V t409=get(get(e->slot(1,1),lit57),lit91);return !truth(t409)?get(get(e->slot(1,1),lit4),lit18):t409;})()});
call(e->slot(1,11),Args{lit279,([&](){V t410=get(get(e->slot(1,1),lit57),lit92);return !truth(t410)?get(get(e->slot(1,1),lit4),lit18):t410;})()});
call(e->slot(1,11),Args{lit280,([&](){V t411=get(get(e->slot(1,1),lit57),lit93);return !truth(t411)?get(get(e->slot(1,1),lit4),lit18):t411;})()});
call(e->slot(1,11),Args{lit281,([&](){V t412=get(get(e->slot(1,1),lit57),lit94);return !truth(t412)?get(get(e->slot(1,1),lit4),lit18):t412;})()});
call(e->slot(1,11),Args{lit282,([&](){V t413=get(get(e->slot(1,1),lit57),lit95);return !truth(t413)?get(get(e->slot(1,1),lit4),lit18):t413;})()});
call(e->slot(1,11),Args{lit283,([&](){V t414=get(get(e->slot(1,1),lit57),lit96);return !truth(t414)?get(get(e->slot(1,1),lit4),lit18):t414;})()});
call(e->slot(1,11),Args{lit284,([&](){V t415=get(get(e->slot(1,1),lit57),lit97);return !truth(t415)?get(get(e->slot(1,1),lit4),lit18):t415;})()});
call(e->slot(1,11),Args{lit285,([&](){V t416=get(get(e->slot(1,1),lit57),lit67);return !truth(t416)?lit139:t416;})()});
call(e->slot(1,11),Args{lit286,([&](){V t417=get(get(e->slot(1,1),lit57),lit69);return !truth(t417)?V(0.0):t417;})()});
call(e->slot(1,11),Args{lit287,([&](){V t418=get(get(e->slot(1,1),lit57),lit58);return !truth(t418)?V(0.5):t418;})()});
call(e->slot(1,11),Args{lit288,([&](){V t419=get(get(e->slot(1,1),lit57),lit59);return !truth(t419)?V(0.5):t419;})()});
call(e->slot(1,11),Args{lit289,([&](){V t420=get(get(e->slot(1,1),lit57),lit60);return !truth(t420)?V(0.5):t420;})()});
call(e->slot(1,11),Args{lit290,([&](){V t421=get(get(e->slot(1,1),lit57),lit61);return !truth(t421)?V(0.5):t421;})()});
if(truth(V(!truth(get(get(e->slot(1,1),lit57),lit99))))){return Args{};
}
call(e->slot(1,11),Args{lit291,([&](){V t422=([&](){V t423=get(get(e->slot(1,1),lit57),lit82);return truth(t423)?V(1.0):t423;})();return !truth(t422)?V(0.0):t422;})()});
call(e->slot(1,11),Args{lit292,([&](){V t424=([&](){V t425=get(get(e->slot(1,1),lit57),lit83);return truth(t425)?V(1.0):t425;})();return !truth(t424)?V(0.0):t424;})()});
call(e->slot(1,11),Args{lit293,([&](){V t426=([&](){V t427=get(get(e->slot(1,1),lit57),lit84);return truth(t427)?V(1.0):t427;})();return !truth(t426)?V(0.0):t426;})()});
call(e->slot(1,11),Args{lit294,([&](){V t428=([&](){V t429=get(get(e->slot(1,1),lit57),lit85);return truth(t429)?V(1.0):t429;})();return !truth(t428)?V(0.0):t428;})()});
call(e->slot(1,11),Args{lit295,([&](){V t430=([&](){V t431=get(get(e->slot(1,1),lit57),lit86);return truth(t431)?V(1.0):t431;})();return !truth(t430)?V(0.0):t430;})()});
call(e->slot(1,11),Args{lit296,([&](){V t432=([&](){V t433=get(get(e->slot(1,1),lit57),lit87);return truth(t433)?V(1.0):t433;})();return !truth(t432)?V(0.0):t432;})()});
call(e->slot(1,11),Args{lit297,([&](){V t434=([&](){V t435=get(get(e->slot(1,1),lit57),lit88);return truth(t435)?V(1.0):t435;})();return !truth(t434)?V(0.0):t434;})()});
call(e->slot(1,11),Args{lit298,([&](){V t436=([&](){V t437=get(get(e->slot(1,1),lit57),lit89);return truth(t437)?V(1.0):t437;})();return !truth(t436)?V(0.0):t436;})()});
call(e->slot(1,11),Args{lit299,([&](){V t438=([&](){V t439=get(get(e->slot(1,1),lit57),lit90);return truth(t439)?V(1.0):t439;})();return !truth(t438)?V(0.0):t438;})()});
return Args{};});
Ref(e->slot(0,1),lit300).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,19),Args{V(false)});
call(e->slot(1,18),Args{lit68});
call(e->slot(1,38),Args{});
return Args{};}));
Ref(e->slot(0,1),lit301).put(native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit69)};V t440=add(([&](){V t441=get(get(e->slot(1,1),lit57),lit69);return !truth(t441)?V(0.0):t441;})(),V(1.0));refs[0].put(std::move(t440));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit69)};V t442=get(get(e->slot(1,1),lit57),lit69);refs[0].put(std::move(t442));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t443=first(call(e->slot(1,5),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t443));}
if(truth(le(e->slot(0,0),V(0.0)))){call(e->slot(1,18),Args{lit302});
call(e->slot(1,38),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t444=first(call(e->slot(1,6),Args{e->slot(0,0),get(get(e->slot(1,1),lit4),lit46),get(get(e->slot(1,1),lit4),lit47)}));refs[0].put(std::move(t444));}
call(e->slot(1,17),Args{e->slot(0,0)});
call(e->slot(1,20),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e,0,1)};V t445=([&](){V t446=e->slot(0,1);return !truth(t446)?first(call(e->slot(1,13),Args{})):t446;})();refs[0].put(std::move(t445));}
if(truth(V(!truth(e->slot(0,1))))){call(e->slot(1,18),Args{lit303});
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit70)};V t447=V(false);refs[0].put(std::move(t447));}
call(e->slot(1,37),Args{e->slot(0,0),get(get(e->slot(1,1),lit4),lit48)});
call(e->slot(1,38),Args{});
return Args{};
}
if(truth(V(!truth(first(call(e->slot(1,15),Args{e->slot(0,1)})))))){call(e->slot(1,18),Args{lit304});
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit70)};V t448=V(false);refs[0].put(std::move(t448));}
call(e->slot(1,37),Args{e->slot(0,0),get(get(e->slot(1,1),lit4),lit49)});
call(e->slot(1,38),Args{});
return Args{};
}
call(e->slot(1,18),Args{lit305});
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit70)};V t449=V(true);refs[0].put(std::move(t449));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit82)};V t450=V(false);refs[0].put(std::move(t450));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit83)};V t451=V(false);refs[0].put(std::move(t451));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit84)};V t452=V(false);refs[0].put(std::move(t452));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit85)};V t453=V(false);refs[0].put(std::move(t453));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit86)};V t454=V(false);refs[0].put(std::move(t454));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit87)};V t455=V(false);refs[0].put(std::move(t455));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit88)};V t456=V(false);refs[0].put(std::move(t456));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit89)};V t457=V(false);refs[0].put(std::move(t457));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit57),lit90)};V t458=V(false);refs[0].put(std::move(t458));}
{Args t459=call(e->slot(1,22),Args{e->slot(0,1)});e->slot(0,3)=arg(t459,0);e->slot(0,4)=arg(t459,1);}
{V t460=first(call(e->slot(1,23),Args{e->slot(0,1)}));e->slot(0,5)=std::move(t460);}
{V t461=first(call(e->slot(1,24),Args{}));e->slot(0,6)=std::move(t461);}
{Args t462=call(e->slot(1,29),Args{e->slot(0,3),e->slot(0,4),e->slot(0,5),e->slot(0,6)});e->slot(0,7)=arg(t462,0);e->slot(0,8)=arg(t462,1);e->slot(0,9)=arg(t462,2);e->slot(0,10)=arg(t462,3);}
call(e->slot(1,27),Args{e->slot(0,0)});
{Args t463=call(e->slot(1,28),Args{e->slot(0,7),e->slot(0,8),e->slot(0,0)});e->slot(0,11)=arg(t463,0);e->slot(0,12)=arg(t463,1);}
{V t464=V(1.0);e->slot(0,13)=std::move(t464);}
if(truth(gt(first(call(e->slot(1,7),Args{e->slot(0,8)})),V(0.001)))){{std::array<Ref,1> refs{Ref(e,0,13)};V t465=divv(e->slot(0,12),e->slot(0,8));refs[0].put(std::move(t465));}
}
{V t466=mul(e->slot(0,9),e->slot(0,13));e->slot(0,14)=std::move(t466);}
{V t467=mul(e->slot(0,10),e->slot(0,13));e->slot(0,15)=std::move(t467);}
call(e->slot(1,30),Args{e->slot(0,11),e->slot(0,12),e->slot(0,14),e->slot(0,15),e->slot(0,0)});
call(e->slot(1,31),Args{});
call(e->slot(1,32),Args{});
call(e->slot(1,35),Args{e->slot(0,1),e->slot(0,0)});
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit102)};V t468=e->slot(0,3);refs[0].put(std::move(t468));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit103)};V t469=e->slot(0,4);refs[0].put(std::move(t469));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit104)};V t470=e->slot(0,5);refs[0].put(std::move(t470));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit105)};V t471=e->slot(0,6);refs[0].put(std::move(t471));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit106)};V t472=e->slot(0,11);refs[0].put(std::move(t472));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit107)};V t473=e->slot(0,12);refs[0].put(std::move(t473));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit108)};V t474=e->slot(0,14);refs[0].put(std::move(t474));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit109)};V t475=e->slot(0,15);refs[0].put(std::move(t475));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit76)};V t476=([&](){V t477=get(get(e->slot(1,1),lit57),lit76);return !truth(t477)?V(1.0):t477;})();refs[0].put(std::move(t476));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit77)};V t478=([&](){V t479=get(get(e->slot(1,1),lit57),lit77);return !truth(t479)?V(1.0):t479;})();refs[0].put(std::move(t478));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit78)};V t480=([&](){V t481=get(get(e->slot(1,1),lit57),lit78);return !truth(t481)?get(get(e->slot(1,1),lit4),lit5):t481;})();refs[0].put(std::move(t480));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,1),lit101),lit79)};V t482=([&](){V t483=get(get(e->slot(1,1),lit57),lit79);return !truth(t483)?get(get(e->slot(1,1),lit4),lit6):t483;})();refs[0].put(std::move(t482));}
call(e->slot(1,36),Args{});
call(e->slot(1,38),Args{});
return Args{};}));
Ref(e->slot(0,1),lit306).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t484=([&](){V t485=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t485)?V(0.0):t485;})();refs[0].put(std::move(t484));}
return Args{([&](){V t486=get(get(get(e->slot(1,1),lit101),lit119),e->slot(0,0));return !truth(t486)?get(get(e->slot(1,1),lit4),lit18):t486;})()};
return Args{};}));
Ref(e->slot(0,1),lit307).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e,0,0)};V t487=([&](){V t488=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t488)?V(0.0):t488;})();refs[0].put(std::move(t487));}
return Args{([&](){V t489=get(get(get(e->slot(1,1),lit101),lit114),e->slot(0,0));return !truth(t489)?V(0.0):t489;})()};
return Args{};}));
Ref(e->slot(0,1),lit308).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t490=get(e->slot(1,4),lit53);return !truth(t490)?V(0.0):t490;})()};
return Args{};}));
Ref(e->slot(0,1),lit309).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t491=get(e->slot(1,4),lit54);return !truth(t491)?V(0.0):t491;})()};
return Args{};}));
Ref(e->slot(0,1),lit310).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t492=get(get(e->slot(1,1),lit57),lit58);return !truth(t492)?V(0.5):t492;})()};
return Args{};}));
Ref(e->slot(0,1),lit311).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t493=get(get(e->slot(1,1),lit57),lit59);return !truth(t493)?V(0.5):t493;})()};
return Args{};}));
Ref(e->slot(0,1),lit312).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{get(e->slot(1,1),lit57)};
return Args{};}));
Ref(e->slot(0,1),lit313).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit145),Args{concat(lit314,concat(lit315,concat(lit316,concat(lit317,concat(lit318,concat(lit319,concat(lit320,concat(lit321,concat(lit322,concat(lit323,lit324)))))))))),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit57),lit67)})),([&](){V t494=get(get(e->slot(1,1),lit57),lit69);return !truth(t494)?V(0.0):t494;})(),([&](){V t495=([&](){V t496=get(get(e->slot(1,1),lit57),lit70);return truth(t496)?lit325:t496;})();return !truth(t495)?lit326:t495;})(),([&](){V t497=get(get(e->slot(1,1),lit101),lit104);return !truth(t497)?V(0.0):t497;})(),([&](){V t498=get(get(e->slot(1,1),lit101),lit105);return !truth(t498)?V(0.0):t498;})(),([&](){V t499=get(get(e->slot(1,1),lit101),lit106);return !truth(t499)?V(0.0):t499;})(),([&](){V t500=get(get(e->slot(1,1),lit101),lit110);return !truth(t500)?V(0.0):t500;})(),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit57),lit62)})),([&](){V t501=get(get(e->slot(1,1),lit101),lit107);return !truth(t501)?V(0.0):t501;})(),([&](){V t502=get(get(e->slot(1,1),lit101),lit111);return !truth(t502)?V(0.0):t502;})(),first(call(e->get("tostring"),Args{get(get(e->slot(1,1),lit57),lit64)})),([&](){V t503=get(get(e->slot(1,1),lit101),lit112);return !truth(t503)?V(0.0):t503;})(),([&](){V t504=get(get(e->slot(1,1),lit101),lit113);return !truth(t504)?V(0.0):t504;})(),([&](){V t505=get(get(e->slot(1,1),lit4),lit12);return !truth(t505)?V(0.58):t505;})(),([&](){V t506=get(get(get(e->slot(1,1),lit101),lit114),V(0.0));return !truth(t506)?V(0.0):t506;})(),([&](){V t507=get(get(get(e->slot(1,1),lit101),lit114),V(1.0));return !truth(t507)?V(0.0):t507;})(),([&](){V t508=get(get(get(e->slot(1,1),lit101),lit114),V(2.0));return !truth(t508)?V(0.0):t508;})(),([&](){V t509=get(get(get(e->slot(1,1),lit101),lit114),V(3.0));return !truth(t509)?V(0.0):t509;})(),([&](){V t510=get(get(get(e->slot(1,1),lit101),lit119),V(0.0));return !truth(t510)?V(0.0):t510;})(),([&](){V t511=get(get(get(e->slot(1,1),lit101),lit119),V(1.0));return !truth(t511)?V(0.0):t511;})(),([&](){V t512=get(get(get(e->slot(1,1),lit101),lit119),V(2.0));return !truth(t512)?V(0.0):t512;})(),([&](){V t513=get(get(get(e->slot(1,1),lit101),lit119),V(3.0));return !truth(t513)?V(0.0):t513;})(),([&](){V t514=get(get(get(e->slot(1,1),lit101),lit120),V(0.0));return !truth(t514)?V(1.0):t514;})(),([&](){V t515=get(get(get(e->slot(1,1),lit101),lit120),V(1.0));return !truth(t515)?V(1.0):t515;})(),([&](){V t516=get(get(get(e->slot(1,1),lit101),lit120),V(2.0));return !truth(t516)?V(1.0):t516;})(),([&](){V t517=get(get(get(e->slot(1,1),lit101),lit120),V(3.0));return !truth(t517)?V(1.0):t517;})(),([&](){V t518=get(get(e->slot(1,1),lit101),lit124);return !truth(t518)?V(0.5):t518;})(),([&](){V t519=get(get(e->slot(1,1),lit101),lit125);return !truth(t519)?V(0.5):t519;})(),([&](){V t520=get(get(e->slot(1,1),lit101),lit126);return !truth(t520)?V(0.5):t520;})(),([&](){V t521=get(get(e->slot(1,1),lit101),lit127);return !truth(t521)?V(0.5):t521;})(),([&](){V t522=([&](){V t523=get(get(e->slot(1,1),lit57),lit80);return truth(t523)?lit327:t523;})();return !truth(t522)?lit328:t522;})(),([&](){V t524=get(get(e->slot(1,1),lit57),lit71);return !truth(t524)?V(1.0):t524;})(),([&](){V t525=get(get(e->slot(1,1),lit57),lit72);return !truth(t525)?V(1.0):t525;})(),([&](){V t526=get(get(e->slot(1,1),lit57),lit76);return !truth(t526)?V(1.0):t526;})(),([&](){V t527=get(get(e->slot(1,1),lit57),lit77);return !truth(t527)?V(1.0):t527;})(),([&](){V t528=([&](){V t529=get(get(e->slot(1,1),lit57),lit82);return truth(t529)?lit325:t529;})();return !truth(t528)?lit326:t528;})(),([&](){V t530=([&](){V t531=get(get(e->slot(1,1),lit57),lit83);return truth(t531)?lit325:t531;})();return !truth(t530)?lit326:t530;})(),([&](){V t532=([&](){V t533=get(get(e->slot(1,1),lit57),lit84);return truth(t533)?lit325:t533;})();return !truth(t532)?lit326:t532;})(),([&](){V t534=([&](){V t535=get(get(e->slot(1,1),lit57),lit85);return truth(t535)?lit325:t535;})();return !truth(t534)?lit326:t534;})(),([&](){V t536=([&](){V t537=get(get(e->slot(1,1),lit57),lit86);return truth(t537)?lit325:t537;})();return !truth(t536)?lit326:t536;})(),([&](){V t538=([&](){V t539=get(get(e->slot(1,1),lit57),lit90);return truth(t539)?lit325:t539;})();return !truth(t538)?lit326:t538;})()});
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
