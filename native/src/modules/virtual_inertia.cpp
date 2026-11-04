// Generated native C++ from pinned virtual_inertia.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("brakeTemperatureInputContract");
static const V lit3("original");
static const V lit4("yawTau");
static const V lit5("pitchTau");
static const V lit6("rollTau");
static const V lit7("rearTau");
static const V lit8("chassisYawGain");
static const V lit9("chassisPitchGain");
static const V lit10("chassisRollGain");
static const V lit11("chassisEnergyYawGain");
static const V lit12("chassisEnergyPitchGain");
static const V lit13("chassisEnergyRollGain");
static const V lit14("chassisReleaseGain");
static const V lit15("loadYawGain");
static const V lit16("loadPitchGain");
static const V lit17("loadRollGain");
static const V lit18("pitchCGYawGain");
static const V lit19("rollCGYawGain");
static const V lit20("pitchCGPitchGain");
static const V lit21("rollCGRollGain");
static const V lit22("maxInertiaShift");
static const V lit23("yawGain");
static const V lit24("pitchGain");
static const V lit25("rollGain");
static const V lit26("rearGain");
static const V lit27("frontYawDamp");
static const V lit28("bodyYawGain");
static const V lit29("maxYaw");
static const V lit30("maxPitch");
static const V lit31("maxRoll");
static const V lit32("maxVirtualYaw");
static const V lit33("maxVirtualPitch");
static const V lit34("maxVirtualRoll");
static const V lit35("bodyRigidityInfluence");
static const V lit36("bodyFlexYawDelay");
static const V lit37("bodyFlexRollDelay");
static const V lit38("bodyFlexPitchDelay");
static const V lit39("bodyTorsionRearYawGain");
static const V lit40("bodyTorsionYawLoss");
static const V lit41("bodyBendingPitchLoss");
static const V lit42("bodyStiffYawGain");
static const V lit43("bodyStiffRollGain");
static const V lit44("bodyStiffPitchGain");
static const V lit45("bodyFlexInstabilityGain");
static const V lit46("bodyDampingInstabilityLoss");
static const V lit47("minBodyInertiaScale");
static const V lit48("maxBodyInertiaScale");
static const V lit49("massScaleYawGain");
static const V lit50("massScalePitchGain");
static const V lit51("massScaleRollGain");
static const V lit52("yawInertiaScaleGain");
static const V lit53("cgRearShiftYawGain");
static const V lit54("cgRearShiftPitchGain");
static const V lit55("tireHopInstabilityGain");
static const V lit56("contactLossInstabilityGain");
static const V lit57("damageInstabilityGain");
static const V lit58("drivetrainYawLagGain");
static const V lit59("lsdYawStabilizeGain");
static const V lit60("driveTorqueReference");
static const V lit61("shaftTwistYawLagGain");
static const V lit62("brakePitchInertiaGain");
static const V lit63("brakeLockInstabilityGain");
static const V lit64("thermalInstabilityGain");
static const V lit65("roadInputInstabilityGain");
static const V lit66("loadPathYawGain");
static const V lit67("maxRootExtraInstability");
static const V lit68("defaultWheelLoad");
static const V lit69("loadAxisRef");
static const V lit70("storeOnlyDecayTau");
static const V lit71("minDt");
static const V lit72("maxDt");
static const V lit73("debugStoreInterval");
static const V lit74("yaw");
static const V lit75("pitch");
static const V lit76("roll");
static const V lit77("rearYaw");
static const V lit78("bodyYaw");
static const V lit79("loadYaw");
static const V lit80("loadPitch");
static const V lit81("loadRoll");
static const V lit82("loadFront");
static const V lit83("loadRear");
static const V lit84("loadLeft");
static const V lit85("loadRight");
static const V lit86("chassisYaw");
static const V lit87("chassisPitch");
static const V lit88("chassisRoll");
static const V lit89("chassisHeave");
static const V lit90("chassisEnergy");
static const V lit91("chassisRelease");
static const V lit92("virtualYaw");
static const V lit93("virtualPitch");
static const V lit94("virtualRoll");
static const V lit95("virtualRearYaw");
static const V lit96("yawInertiaScale");
static const V lit97("pitchInertiaScale");
static const V lit98("rollInertiaScale");
static const V lit99("pitchCG");
static const V lit100("rollCG");
static const V lit101("massScale");
static const V lit102("massYawInertiaScale");
static const V lit103("cgRearShift");
static const V lit104("tireHopAvg");
static const V lit105("contactLossAvg");
static const V lit106("roadInputAvg");
static const V lit107("vehicleDamage");
static const V lit108("driveTorque");
static const V lit109("driveTorqueNorm");
static const V lit110("shaftTwist");
static const V lit111("driveLash");
static const V lit112("lsdLock");
static const V lit113("brakeInput");
static const V lit114("brakeLockAvg");
static const V lit115("thermalStress");
static const V lit116("rootExtraInstability");
static const V lit117("instability");
static const V lit118("yawState");
static const V lit119("NEUTRAL");
static const V lit120("pitchState");
static const V lit121("rollState");
static const V lit122("transition");
static const V lit123("STABLE");
static const V lit124("status");
static const V lit125("INIT");
static const V lit126("updateCount");
static const V lit127("carAvailable");
static const V lit128("storeOnly");
static const V lit129("bodyRigidity");
static const V lit130("bodyFlexFactor");
static const V lit131("bodyTorsionFactor");
static const V lit132("bodyBendingFactor");
static const V lit133("bodyDampingFactor");
static const V lit134("bodyYawScale");
static const V lit135("bodyPitchScale");
static const V lit136("bodyRollScale");
static const V lit137("bodyRearYawScale");
static const V lit138("bodyRigidityLinked");
static const V lit139("massBalanceLinked");
static const V lit140("loadLinked");
static const V lit141("chassisLinked");
static const V lit142("tireLinked");
static const V lit143("drivetrainLinked");
static const V lit144("damageLinked");
static const V lit145("brakeLinked");
static const V lit146("thermalLinked");
static const V lit147("roadInputLinked");
static const V lit148("debugStoreTimer");
static const V lit149("debugStoreNow");
static const V lit150("state");
static const V lit151("debug");
static const V lit152("huge");
static const V lit153("abs");
static const V lit154("safeLoadRaw");
static const V lit155("safeStore");
static const V lit156("safeField");
static const V lit157("getCar");
static const V lit158("ngp_body_rigidity_update_count");
static const V lit159("ngp_body_update_count");
static const V lit160("ngp_body_rigidity");
static const V lit161("ngp_rigidity_body");
static const V lit162("ngp_chassis_rigidity");
static const V lit163("ngp_body_flex_factor");
static const V lit164("ngp_flex_factor");
static const V lit165("ngp_chassis_flex_factor");
static const V lit166("ngp_body_torsion_factor");
static const V lit167("ngp_chassis_torsion_factor");
static const V lit168("ngp_body_bending_factor");
static const V lit169("ngp_chassis_bending_factor");
static const V lit170("ngp_body_damping_factor");
static const V lit171("ngp_chassis_damping_factor");
static const V lit172("localAngularVelocity");
static const V lit173("x");
static const V lit174("y");
static const V lit175("z");
static const V lit176("angularVelocity");
static const V lit177("ngp_car_yaw_rate");
static const V lit178("ngp_yaw_rate");
static const V lit179("ngp_virtual_raw_yaw_input");
static const V lit180("ngp_car_pitch_rate");
static const V lit181("ngp_pitch_rate");
static const V lit182("ngp_virtual_raw_pitch_input");
static const V lit183("ngp_car_roll_rate");
static const V lit184("ngp_roll_rate");
static const V lit185("ngp_virtual_raw_roll_input");
static const V lit186("ngp_chassis_roll");
static const V lit187("ngp_body_roll");
static const V lit188("ngp_chassis_roll_energy");
static const V lit189("ngp_chassis_pitch");
static const V lit190("ngp_body_pitch");
static const V lit191("ngp_chassis_pitch_energy");
static const V lit192("ngp_chassis_heave");
static const V lit193("ngp_body_heave");
static const V lit194("ngp_rbi_heave");
static const V lit195("ngp_chassis_yaw_hint");
static const V lit196("ngp_body_yaw_hint");
static const V lit197("ngp_yaw_deflection");
static const V lit198("ngp_chassis_body_energy");
static const V lit199("ngp_body_chassis_energy");
static const V lit200("ngp_chassis_energy");
static const V lit201("ngp_chassis_target_energy");
static const V lit202("ngp_chassis_body_release");
static const V lit203("ngp_body_chassis_release");
static const V lit204("ngp_chassis_release");
static const V lit205("ngp_wheel_load_");
static const V lit206("ngp_load_wheel_");
static const V lit207("ngp_tire_load_");
static const V lit208("ngp_tire_state_load_");
static const V lit209("ngp_contact_load_");
static const V lit210("ngp_cp_load_");
static const V lit211("ngp_dlt_load_");
static const V lit212("max");
static const V lit213("ngp_load_abs_front");
static const V lit214("ngp_load_front");
static const V lit215("ngp_front_load");
static const V lit216("ngp_load_abs_rear");
static const V lit217("ngp_load_rear");
static const V lit218("ngp_rear_load");
static const V lit219("ngp_load_abs_left");
static const V lit220("ngp_load_left");
static const V lit221("ngp_left_load");
static const V lit222("ngp_load_abs_right");
static const V lit223("ngp_load_right");
static const V lit224("ngp_right_load");
static const V lit225("ngp_pitch_cg");
static const V lit226("ngp_sprung_pitch_cg");
static const V lit227("ngp_mass_pitch_cg");
static const V lit228("ngp_roll_cg");
static const V lit229("ngp_sprung_roll_cg");
static const V lit230("ngp_mass_roll_cg");
static const V lit231("ngp_vehicle_mass_scale");
static const V lit232("ngp_mass_balance_scale");
static const V lit233("ngp_mass_scale");
static const V lit234("ngp_vehicle_yaw_inertia_scale");
static const V lit235("ngp_mass_yaw_inertia_scale");
static const V lit236("ngp_yaw_inertia_scale");
static const V lit237("ngp_vehicle_cg_rear_shift");
static const V lit238("ngp_mass_cg_rear_shift");
static const V lit239("ngp_rear_cg_shift");
static const V lit240("current_wheel_brake_temperature_max_v1");
static const V lit241("wheels");
static const V lit242("brakeTemperature");
static const V lit243("number");
static const V lit244("Current virtual inertia wheel brake temperature unavailable");
static const V lit245("brakeTemperatureInput");
static const V lit246("brakeTemperatureSource");
static const V lit247("CURRENT_WHEEL_BRAKE_TEMPERATURE_MAX");
static const V lit248("ngp_brake_temp_max");
static const V lit249("ngp_brake_temp_avg");
static const V lit250("ngp_thermal_stress");
static const V lit251("ngp_gearbox_temp");
static const V lit252("ngp_gearbox_heat");
static const V lit253("Invalid virtual inertia brake temperature input contract");
static const V lit254("ngp_tire_hop_energy_");
static const V lit255("ngp_tire_hop_");
static const V lit256("ngp_thop_energy_");
static const V lit257("ngp_tire_contact_loss_");
static const V lit258("ngp_tcr_contact_loss_");
static const V lit259("ngp_contact_loss_");
static const V lit260("ngp_cp_contact_loss_");
static const V lit261("ngp_tire_force_road_input_");
static const V lit262("ngp_tf_road_input_");
static const V lit263("ngp_road_input_");
static const V lit264("ngp_load_path_work_norm_");
static const V lit265("ngp_condition_total");
static const V lit266("ngp_vehicle_condition_total");
static const V lit267("ngp_damage_chassis");
static const V lit268("ngp_damage_total");
static const V lit269("ngp_drive_torque_normalized_from_nm");
static const V lit270("ngp_drive_torque");
static const V lit271("ngp_drivetrain_torque");
static const V lit272("ngp_dt_torque");
static const V lit273("ngp_shaft_twist");
static const V lit274("ngp_windup_twist");
static const V lit275("ngp_driveline_twist");
static const V lit276("ngp_drive_lash");
static const V lit277("ngp_driveline_lash");
static const V lit278("ngp_lsd_lock");
static const V lit279("ngp_diff_lock");
static const V lit280("ngp_brake_input");
static const V lit281("ngp_brake");
static const V lit282("ngp_brake_lock_");
static const V lit283("ngp_brake_lock_state_");
static const V lit284("TURN RIGHT");
static const V lit285("TURN LEFT");
static const V lit286("NOSE DOWN");
static const V lit287("NOSE UP");
static const V lit288("ROLL RIGHT");
static const V lit289("ROLL LEFT");
static const V lit290("LOAD SHIFT");
static const V lit291("LIMIT APPROACH");
static const V lit292("BREAK TRANSITION");
static const V lit293("ngp_virtual_yaw");
static const V lit294("ngp_virtual_pitch");
static const V lit295("ngp_virtual_roll");
static const V lit296("ngp_virtual_rear_yaw");
static const V lit297("ngp_virtual_body_yaw");
static const V lit298("ngp_virtual_yaw_raw");
static const V lit299("ngp_virtual_pitch_raw");
static const V lit300("ngp_virtual_roll_raw");
static const V lit301("ngp_virtual_yaw_inertia");
static const V lit302("ngp_virtual_pitch_inertia");
static const V lit303("ngp_virtual_roll_inertia");
static const V lit304("ngp_virtual_instability");
static const V lit305("ngp_virtual_transition");
static const V lit306("ngp_virtual_yaw_state");
static const V lit307("ngp_virtual_pitch_state");
static const V lit308("ngp_virtual_roll_state");
static const V lit309("ngp_virtual_inertia_status");
static const V lit310("ngp_virtual_inertia_update_count");
static const V lit311("ngp_virtual_inertia_car_available");
static const V lit312("ngp_virtual_inertia_store_only");
static const V lit313("ngp_body_yaw");
static const V lit314("ngp_body_pitch_inertia");
static const V lit315("ngp_body_roll_inertia");
static const V lit316("ngp_body_rear_yaw");
static const V lit317("ngp_vi_yaw");
static const V lit318("ngp_vi_pitch");
static const V lit319("ngp_vi_roll");
static const V lit320("ngp_vi_rear_yaw");
static const V lit321("ngp_vi_instability");
static const V lit322("ngp_vi_transition");
static const V lit323("ngp_virtual_body_rigidity_linked");
static const V lit324("ngp_virtual_mass_balance_linked");
static const V lit325("ngp_virtual_load_linked");
static const V lit326("ngp_virtual_chassis_linked");
static const V lit327("ngp_virtual_tire_linked");
static const V lit328("ngp_virtual_drivetrain_linked");
static const V lit329("ngp_virtual_damage_linked");
static const V lit330("ngp_virtual_brake_linked");
static const V lit331("ngp_virtual_thermal_linked");
static const V lit332("ngp_virtual_road_input_linked");
static const V lit333("ngp_virtual_mass_scale");
static const V lit334("ngp_virtual_mass_yaw_inertia_scale");
static const V lit335("ngp_virtual_cg_rear_shift");
static const V lit336("ngp_virtual_load_front");
static const V lit337("ngp_virtual_load_rear");
static const V lit338("ngp_virtual_load_left");
static const V lit339("ngp_virtual_load_right");
static const V lit340("ngp_virtual_load_yaw");
static const V lit341("ngp_virtual_load_pitch");
static const V lit342("ngp_virtual_load_roll");
static const V lit343("ngp_virtual_tire_hop_avg");
static const V lit344("ngp_virtual_contact_loss_avg");
static const V lit345("ngp_virtual_road_input_avg");
static const V lit346("ngp_virtual_damage");
static const V lit347("ngp_virtual_drive_torque_norm");
static const V lit348("ngp_virtual_drive_torque");
static const V lit349("ngp_virtual_shaft_twist");
static const V lit350("ngp_virtual_drive_lash");
static const V lit351("ngp_virtual_lsd_lock");
static const V lit352("ngp_virtual_brake_input");
static const V lit353("ngp_virtual_brake_lock_avg");
static const V lit354("ngp_virtual_response_thermal_stress");
static const V lit355("ngp_virtual_thermal_stress");
static const V lit356("ngp_virtual_root_extra_instability");
static const V lit357("ngp_virtual_body_yaw_scale");
static const V lit358("ngp_virtual_body_pitch_scale");
static const V lit359("ngp_virtual_body_roll_scale");
static const V lit360("ngp_virtual_body_rear_yaw_scale");
static const V lit361("init");
static const V lit362("update");
static const V lit363("BAD DT");
static const V lit364("RUNNING");
static const V lit365("STORE ONLY");
static const V lit366("getYaw");
static const V lit367("getPitch");
static const V lit368("getRoll");
static const V lit369("getRearYaw");
static const V lit370("getInstability");
static const V lit371("getInertiaScale");
static const V lit372("getState");
static const V lit373("debugStr");
static const V lit374("format");
static const V lit375("Status %s / Count %.0f / Car %s Store %s\n");
static const V lit376("Virtual Y/P/R %.3f %.3f %.3f RearYaw %.3f\n");
static const V lit377("Raw     Y/P/R %.3f %.3f %.3f BodyYaw %.3f\n");
static const V lit378("Inertia Y/P/R %.2f %.2f %.2f Inst %.2f\n");
static const V lit379("MassScale %.3f YawScale %.3f CGRear %.3f\n");
static const V lit380("DriveNorm %.3f Shaft %.3f Brake %.2f Lock %.2f Therm %.2f Road %.2f\n");
static const V lit381("Transition %s\n");
static const V lit382("Links Body:%s Mass:%s Load:%s Chassis:%s Tire:%s Drive:%s Damage:%s Brake:%s Therm:%s Road:%s");
static const V lit383("OK");
static const V lit384("NIL");
static const V lit385("YES");
static const V lit386("NO");
static const V lit387("drawDebug");
static const V lit388("text");
static const V lit389("=== VIRTUAL INERTIA ===");
V load_virtual_inertia(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(31);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,lit3);set(z,lit4,V(0.12));set(z,lit5,V(0.1));set(z,lit6,V(0.09));set(z,lit7,V(0.18));set(z,lit8,V(0.45));set(z,lit9,V(0.38));set(z,lit10,V(0.42));set(z,lit11,V(0.28));set(z,lit12,V(0.18));set(z,lit13,V(0.22));set(z,lit14,V(0.35));set(z,lit15,V(0.35));set(z,lit16,V(0.28));set(z,lit17,V(0.32));set(z,lit18,V(0.9));set(z,lit19,V(0.7));set(z,lit20,V(0.75));set(z,lit21,V(0.75));set(z,lit22,V(0.35));set(z,lit23,V(1.0));set(z,lit24,V(1.0));set(z,lit25,V(1.0));set(z,lit26,V(0.75));set(z,lit27,V(0.82));set(z,lit28,V(0.4));set(z,lit29,V(2.0));set(z,lit30,V(2.0));set(z,lit31,V(2.0));set(z,lit32,V(2.5));set(z,lit33,V(2.5));set(z,lit34,V(2.5));set(z,lit35,V(0.16));set(z,lit36,V(0.12));set(z,lit37,V(0.1));set(z,lit38,V(0.08));set(z,lit39,V(0.1));set(z,lit40,V(0.07));set(z,lit41,V(0.07));set(z,lit42,V(0.05));set(z,lit43,V(0.04));set(z,lit44,V(0.04));set(z,lit45,V(0.1));set(z,lit46,V(0.08));set(z,lit47,V(0.86));set(z,lit48,V(1.12));set(z,lit49,V(0.45));set(z,lit50,V(0.35));set(z,lit51,V(0.35));set(z,lit52,V(0.7));set(z,lit53,V(0.22));set(z,lit54,V(0.18));set(z,lit55,V(0.1));set(z,lit56,V(0.08));set(z,lit57,V(0.12));set(z,lit58,V(0.06));set(z,lit59,V(0.05));set(z,lit60,V(2500.0));set(z,lit61,V(0.04));set(z,lit62,V(0.04));set(z,lit63,V(0.06));set(z,lit64,V(0.04));set(z,lit65,V(0.06));set(z,lit66,V(0.08));set(z,lit67,V(0.2));set(z,lit68,V(3500.0));set(z,lit69,V(14000.0));set(z,lit70,V(0.42));set(z,lit71,V(5e-05));set(z,lit72,V(0.05));set(z,lit73,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(0.0));set(z,lit81,V(0.0));set(z,lit82,V(0.5));set(z,lit83,V(0.5));set(z,lit84,V(0.5));set(z,lit85,V(0.5));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.0));set(z,lit89,V(0.0));set(z,lit90,V(0.0));set(z,lit91,V(0.0));set(z,lit92,V(0.0));set(z,lit93,V(0.0));set(z,lit94,V(0.0));set(z,lit95,V(0.0));set(z,lit96,V(1.0));set(z,lit97,V(1.0));set(z,lit98,V(1.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(1.0));set(z,lit102,V(1.0));set(z,lit103,V(0.0));set(z,lit104,V(0.0));set(z,lit105,V(0.0));set(z,lit106,V(0.0));set(z,lit107,V(0.0));set(z,lit108,V(0.0));set(z,lit109,V(0.0));set(z,lit110,V(0.0));set(z,lit111,V(0.0));set(z,lit112,V(0.0));set(z,lit113,V(0.0));set(z,lit114,V(0.0));set(z,lit115,V(0.0));set(z,lit116,V(0.0));set(z,lit117,V(0.0));set(z,lit118,lit119);set(z,lit120,lit119);set(z,lit121,lit119);set(z,lit122,lit123);set(z,lit124,lit125);set(z,lit126,V(0.0));set(z,lit127,V(false));set(z,lit128,V(false));set(z,lit129,V(1.0));set(z,lit130,V(1.0));set(z,lit131,V(1.0));set(z,lit132,V(1.0));set(z,lit133,V(1.0));set(z,lit134,V(1.0));set(z,lit135,V(1.0));set(z,lit136,V(1.0));set(z,lit137,V(1.0));set(z,lit138,V(false));set(z,lit139,V(false));set(z,lit140,V(false));set(z,lit141,V(false));set(z,lit142,V(false));set(z,lit143,V(false));set(z,lit144,V(false));set(z,lit145,V(false));set(z,lit146,V(false));set(z,lit147,V(false));set(z,lit148,V(999.0));set(z,lit149,V(true));return z;})();e->slot(0,2)=std::move(t4);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit150)};V t5=e->slot(0,2);refs[0].put(std::move(t5));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit151)};V t6=e->slot(0,2);refs[0].put(std::move(t6));}
e->slot(0,3)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t7=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t7);}
if(truth(([&](){V t8=([&](){V t9=([&](){V t10=eq(e->slot(0,2),V());return !truth(t10)?ne(e->slot(0,2),e->slot(0,2)):t10;})();return !truth(t9)?eq(e->slot(0,2),get(e->get("math"),lit152)):t9;})();return !truth(t8)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit152)))):t8;})())){return Args{([&](){V t11=e->slot(0,1);return !truth(t11)?V(0.0):t11;})()};
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
e->slot(0,5)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return call(get(e->get("math"),lit153),call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));
return Args{};});
{V t13=get(e->slot(0,0),lit154);e->slot(0,6)=std::move(t13);}
e->slot(0,7)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t14=first(call(e->slot(1,6),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t14);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t15=e->slot(0,1);return !truth(t15)?V(0.0):t15;})()};
}
return call(e->slot(1,3),Args{e->slot(0,2),([&](){V t16=e->slot(0,1);return !truth(t16)?V(0.0):t16;})()});
return Args{};});
{V t17=get(e->slot(0,0),lit155);e->slot(0,8)=std::move(t17);}
{V t18=get(e->slot(0,0),lit156);e->slot(0,9)=std::move(t18);}
e->slot(0,10)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t19=V(!truth(e->get("ac")));return !truth(t19)?V(!truth(get(e->get("ac"),lit157))):t19;})())){return Args{V()};
}
{Args t20=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit157),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t20,0);e->slot(0,1)=arg(t20,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t21=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t21));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t22=first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t22));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t23=first(call(e->slot(1,3),Args{e->slot(0,2),V(0.001)}));refs[0].put(std::move(t23));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t24=first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t24));}
if(truth(le(e->slot(0,2),V(0.0001)))){return Args{e->slot(0,1)};
}
{V t25=first(call(e->slot(1,4),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t25);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t26=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t26);}
{double t27=num(V(1.0)),t28=num(length(e->slot(0,1))),t29=num(V(1.0));for(double t30=t27;(t29>0?t30<=t28:t30>=t28);t30+=t29){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t30);{V t31=first(call(e->slot(2,6),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t31);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,3),Args{e->slot(0,1),([&](){V t32=e->slot(1,0);return !truth(t32)?V(0.0):t32;})()})),V(true)};
}
}}
if(truth(eq(e->slot(0,0),V()))){return Args{V(),V(false)};
}
return Args{e->slot(0,0),V(false)};
return Args{};});
e->slot(0,13)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit148)};V t33=add(([&](){V t34=get(e->slot(1,2),lit148);return !truth(t34)?V(0.0):t34;})(),([&](){V t35=e->slot(0,0);return !truth(t35)?V(0.0):t35;})());refs[0].put(std::move(t33));}
if(truth(ge(get(e->slot(1,2),lit148),get(get(e->slot(1,1),lit1),lit73)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit148)};V t36=V(0.0);refs[0].put(std::move(t36));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit149)};V t37=V(true);refs[0].put(std::move(t37));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit149)};V t38=V(false);refs[0].put(std::move(t38));}
}
return Args{};});
e->slot(0,14)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit138)};V t39=V(false);refs[0].put(std::move(t39));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit139)};V t40=V(false);refs[0].put(std::move(t40));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit140)};V t41=V(false);refs[0].put(std::move(t41));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit141)};V t42=V(false);refs[0].put(std::move(t42));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit142)};V t43=V(false);refs[0].put(std::move(t43));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit143)};V t44=V(false);refs[0].put(std::move(t44));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit144)};V t45=V(false);refs[0].put(std::move(t45));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit145)};V t46=V(false);refs[0].put(std::move(t46));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit146)};V t47=V(false);refs[0].put(std::move(t47));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit147)};V t48=V(false);refs[0].put(std::move(t48));}
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t49=([&](){V t50=first(call(e->slot(1,6),Args{lit158}));return !truth(t50)?first(call(e->slot(1,6),Args{lit159})):t50;})();e->slot(0,0)=std::move(t49);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit129)};V t51=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(1.0),lit160,lit161,lit162})),V(0.2),V(1.35)}));refs[0].put(std::move(t51));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit130)};V t52=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(1.0),lit163,lit164,lit165})),V(0.25),V(1.8)}));refs[0].put(std::move(t52));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit131)};V t53=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(1.0),lit166,lit167})),V(0.35),V(2.0)}));refs[0].put(std::move(t53));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit132)};V t54=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(1.0),lit168,lit169})),V(0.35),V(2.0)}));refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit133)};V t55=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(1.0),lit170,lit171})),V(0.5),V(1.8)}));refs[0].put(std::move(t55));}
if(truth(([&](){V t56=([&](){V t57=ne(e->slot(0,0),V());return !truth(t57)?ne(first(call(e->slot(1,6),Args{lit160})),V()):t57;})();return !truth(t56)?ne(first(call(e->slot(1,6),Args{lit163})),V()):t56;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit138)};V t58=V(true);refs[0].put(std::move(t58));}
}
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t59=Args{V(0.0),V(0.0),V(0.0)};e->slot(0,1)=arg(t59,0);e->slot(0,2)=arg(t59,1);e->slot(0,3)=arg(t59,2);}
{V t60=first(call(e->slot(1,9),Args{e->slot(0,0),lit172,V()}));e->slot(0,4)=std::move(t60);}
if(truth(e->slot(0,4))){{std::array<Ref,1> refs{Ref(e,0,2)};V t61=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,4),lit173,V(0.0)})),V(0.0)}));refs[0].put(std::move(t61));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t62=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,4),lit174,V(0.0)})),V(0.0)}));refs[0].put(std::move(t62));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t63=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,4),lit175,V(0.0)})),V(0.0)}));refs[0].put(std::move(t63));}
return Args{e->slot(0,1),e->slot(0,2),e->slot(0,3)};
}
{std::array<Ref,1> refs{Ref(e,0,4)};V t64=first(call(e->slot(1,9),Args{e->slot(0,0),lit176,V()}));refs[0].put(std::move(t64));}
if(truth(e->slot(0,4))){{std::array<Ref,1> refs{Ref(e,0,2)};V t65=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,4),lit173,V(0.0)})),V(0.0)}));refs[0].put(std::move(t65));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t66=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,4),lit174,V(0.0)})),V(0.0)}));refs[0].put(std::move(t66));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t67=first(call(e->slot(1,3),Args{first(call(e->slot(1,9),Args{e->slot(0,4),lit175,V(0.0)})),V(0.0)}));refs[0].put(std::move(t67));}
return Args{e->slot(0,1),e->slot(0,2),e->slot(0,3)};
}
{std::array<Ref,1> refs{Ref(e,0,1)};V t68=first(call(e->slot(1,12),Args{V(0.0),lit177,lit178,lit179}));refs[0].put(std::move(t68));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t69=first(call(e->slot(1,12),Args{V(0.0),lit180,lit181,lit182}));refs[0].put(std::move(t69));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t70=first(call(e->slot(1,12),Args{V(0.0),lit183,lit184,lit185}));refs[0].put(std::move(t70));}
return Args{e->slot(0,1),e->slot(0,2),e->slot(0,3)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t71=([&](){V t72=([&](){V t73=first(call(e->slot(1,6),Args{lit186}));return !truth(t73)?first(call(e->slot(1,6),Args{lit187})):t73;})();return !truth(t72)?first(call(e->slot(1,6),Args{lit188})):t72;})();e->slot(0,0)=std::move(t71);}
{V t74=([&](){V t75=([&](){V t76=first(call(e->slot(1,6),Args{lit189}));return !truth(t76)?first(call(e->slot(1,6),Args{lit190})):t76;})();return !truth(t75)?first(call(e->slot(1,6),Args{lit191})):t75;})();e->slot(0,1)=std::move(t74);}
{V t77=([&](){V t78=([&](){V t79=first(call(e->slot(1,6),Args{lit192}));return !truth(t79)?first(call(e->slot(1,6),Args{lit193})):t79;})();return !truth(t78)?first(call(e->slot(1,6),Args{lit194})):t78;})();e->slot(0,2)=std::move(t77);}
{V t80=([&](){V t81=([&](){V t82=first(call(e->slot(1,6),Args{lit195}));return !truth(t82)?first(call(e->slot(1,6),Args{lit196})):t82;})();return !truth(t81)?first(call(e->slot(1,6),Args{lit197})):t81;})();e->slot(0,3)=std::move(t80);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit88)};V t83=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t83));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit87)};V t84=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t84));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit89)};V t85=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t85));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit86)};V t86=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)})),V(-num(V(2.0))),V(2.0)}));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit90)};V t87=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(0.0),lit198,lit199,lit200,lit201})),V(0.0),V(1.5)}));refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit91)};V t88=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(0.0),lit202,lit203,lit204})),V(0.0),V(1.5)}));refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit141)};V t89=([&](){V t90=([&](){V t91=([&](){V t92=ne(e->slot(0,0),V());return !truth(t92)?ne(e->slot(0,1),V()):t92;})();return !truth(t91)?ne(e->slot(0,2),V()):t91;})();return !truth(t90)?ne(e->slot(0,3),V()):t90;})();refs[0].put(std::move(t89));}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t93=call(e->slot(1,12),Args{V(),concat(lit205,e->slot(0,0)),concat(lit206,e->slot(0,0)),concat(lit207,e->slot(0,0)),concat(lit208,e->slot(0,0)),concat(lit209,e->slot(0,0)),concat(lit210,e->slot(0,0))});e->slot(0,1)=arg(t93,0);e->slot(0,2)=arg(t93,1);}
if(truth(e->slot(0,2))){return Args{e->slot(0,1),V(true)};
}
{V t94=first(call(e->slot(1,6),Args{concat(lit211,e->slot(0,0))}));e->slot(0,3)=std::move(t94);}
if(truth(ne(e->slot(0,3),V()))){return Args{add(get(get(e->slot(1,1),lit1),lit68),first(call(e->slot(1,3),Args{e->slot(0,3),V(0.0)}))),V(true)};
}
return Args{get(get(e->slot(1,1),lit1),lit68),V(false)};
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t95=first(call(get(e->get("math"),lit212),joined(Args{first(call(e->slot(1,5),Args{e->slot(0,0)})),first(call(e->slot(1,5),Args{e->slot(0,1)})),first(call(e->slot(1,5),Args{e->slot(0,2)}))},call(e->slot(1,5),Args{e->slot(0,3)}))));e->slot(0,4)=std::move(t95);}
if(truth(gt(e->slot(0,4),V(2.0)))){auto parent=e;Env storage(parent,false,2);auto e=&storage;{V t96=first(call(get(e->get("math"),lit212),Args{add(e->slot(1,0),e->slot(1,1)),V(1.0)}));e->slot(0,0)=std::move(t96);}
{V t97=first(call(get(e->get("math"),lit212),Args{add(e->slot(1,2),e->slot(1,3)),V(1.0)}));e->slot(0,1)=std::move(t97);}
return Args{divv(e->slot(1,0),e->slot(0,0)),divv(e->slot(1,1),e->slot(0,0)),divv(e->slot(1,2),e->slot(0,1)),divv(e->slot(1,3),e->slot(0,1))};
}
return Args{e->slot(0,0),e->slot(0,1),e->slot(0,2),e->slot(0,3)};
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,13);auto e=&storage;{Args t98=call(e->slot(1,12),Args{V(),lit213,lit214,lit215});e->slot(0,0)=arg(t98,0);e->slot(0,1)=arg(t98,1);}
{Args t99=call(e->slot(1,12),Args{V(),lit216,lit217,lit218});e->slot(0,2)=arg(t99,0);e->slot(0,3)=arg(t99,1);}
{Args t100=call(e->slot(1,12),Args{V(),lit219,lit220,lit221});e->slot(0,4)=arg(t100,0);e->slot(0,5)=arg(t100,1);}
{Args t101=call(e->slot(1,12),Args{V(),lit222,lit223,lit224});e->slot(0,6)=arg(t101,0);e->slot(0,7)=arg(t101,1);}
{V t102=V(false);e->slot(0,8)=std::move(t102);}
if(truth(([&](){V t103=([&](){V t104=([&](){V t105=eq(e->slot(0,0),V());return !truth(t105)?eq(e->slot(0,2),V()):t105;})();return !truth(t104)?eq(e->slot(0,4),V()):t104;})();return !truth(t103)?eq(e->slot(0,6),V()):t103;})())){auto parent=e;Env storage(parent,false,8);auto e=&storage;{Args t106=call(e->slot(2,18),Args{V(0.0)});e->slot(0,0)=arg(t106,0);e->slot(0,1)=arg(t106,1);}
{Args t107=call(e->slot(2,18),Args{V(1.0)});e->slot(0,2)=arg(t107,0);e->slot(0,3)=arg(t107,1);}
{Args t108=call(e->slot(2,18),Args{V(2.0)});e->slot(0,4)=arg(t108,0);e->slot(0,5)=arg(t108,1);}
{Args t109=call(e->slot(2,18),Args{V(3.0)});e->slot(0,6)=arg(t109,0);e->slot(0,7)=arg(t109,1);}
{std::array<Ref,1> refs{Ref(e,1,8)};V t110=([&](){V t111=([&](){V t112=([&](){V t113=e->slot(0,1);return !truth(t113)?e->slot(0,3):t113;})();return !truth(t112)?e->slot(0,5):t112;})();return !truth(t111)?e->slot(0,7):t111;})();refs[0].put(std::move(t110));}
{std::array<Ref,1> refs{Ref(e,1,0)};V t114=([&](){V t115=e->slot(1,0);return !truth(t115)?add(e->slot(0,0),e->slot(0,2)):t115;})();refs[0].put(std::move(t114));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t116=([&](){V t117=e->slot(1,2);return !truth(t117)?add(e->slot(0,4),e->slot(0,6)):t117;})();refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(e,1,4)};V t118=([&](){V t119=e->slot(1,4);return !truth(t119)?add(e->slot(0,0),e->slot(0,4)):t119;})();refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(e,1,6)};V t120=([&](){V t121=e->slot(1,6);return !truth(t121)?add(e->slot(0,2),e->slot(0,6)):t121;})();refs[0].put(std::move(t120));}
}
{Args t122=call(e->slot(1,19),joined(Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(0.5)})),first(call(e->slot(1,3),Args{e->slot(0,2),V(0.5)})),first(call(e->slot(1,3),Args{e->slot(0,4),V(0.5)}))},call(e->slot(1,3),Args{e->slot(0,6),V(0.5)})));e->slot(0,9)=arg(t122,0);e->slot(0,10)=arg(t122,1);e->slot(0,11)=arg(t122,2);e->slot(0,12)=arg(t122,3);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit82)};V t123=first(call(e->slot(1,4),Args{e->slot(0,9),V(0.0),V(1.5)}));refs[0].put(std::move(t123));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit83)};V t124=first(call(e->slot(1,4),Args{e->slot(0,10),V(0.0),V(1.5)}));refs[0].put(std::move(t124));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit84)};V t125=first(call(e->slot(1,4),Args{e->slot(0,11),V(0.0),V(1.5)}));refs[0].put(std::move(t125));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit85)};V t126=first(call(e->slot(1,4),Args{e->slot(0,12),V(0.0),V(1.5)}));refs[0].put(std::move(t126));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit80)};V t127=first(call(e->slot(1,4),Args{sub(get(e->slot(1,2),lit82),get(e->slot(1,2),lit83)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t127));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit81)};V t128=first(call(e->slot(1,4),Args{sub(get(e->slot(1,2),lit85),get(e->slot(1,2),lit84)),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t128));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit79)};V t129=first(call(e->slot(1,4),Args{add(mul(get(e->slot(1,2),lit81),V(0.65)),mul(mul(get(e->slot(1,2),lit80),get(e->slot(1,2),lit86)),V(0.35))),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t129));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit140)};V t130=([&](){V t131=([&](){V t132=([&](){V t133=([&](){V t134=e->slot(0,1);return !truth(t134)?e->slot(0,3):t134;})();return !truth(t133)?e->slot(0,5):t133;})();return !truth(t132)?e->slot(0,7):t132;})();return !truth(t131)?e->slot(0,8):t131;})();refs[0].put(std::move(t130));}
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit99)};V t135=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(0.0),lit225,lit226,lit227})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t135));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit100)};V t136=first(call(e->slot(1,4),Args{first(call(e->slot(1,12),Args{V(0.0),lit228,lit229,lit230})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t136));}
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{V t137=([&](){V t138=([&](){V t139=first(call(e->slot(1,6),Args{lit231}));return !truth(t139)?first(call(e->slot(1,6),Args{lit232})):t139;})();return !truth(t138)?first(call(e->slot(1,6),Args{lit233})):t138;})();e->slot(0,0)=std::move(t137);}
{V t140=([&](){V t141=([&](){V t142=first(call(e->slot(1,6),Args{lit234}));return !truth(t142)?first(call(e->slot(1,6),Args{lit235})):t142;})();return !truth(t141)?first(call(e->slot(1,6),Args{lit236})):t141;})();e->slot(0,1)=std::move(t140);}
{V t143=([&](){V t144=([&](){V t145=first(call(e->slot(1,6),Args{lit237}));return !truth(t145)?first(call(e->slot(1,6),Args{lit238})):t145;})();return !truth(t144)?first(call(e->slot(1,6),Args{lit239})):t144;})();e->slot(0,2)=std::move(t143);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit101)};V t146=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,0),V(1.0)})),V(0.85),V(1.2)}));refs[0].put(std::move(t146));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit102)};V t147=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,1),V(1.0)})),V(0.8),V(1.35)}));refs[0].put(std::move(t147));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit103)};V t148=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,2),V(0.0)})),V(-num(V(0.2))),V(0.2)}));refs[0].put(std::move(t148));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit139)};V t149=([&](){V t150=([&](){V t151=ne(e->slot(0,0),V());return !truth(t151)?ne(e->slot(0,1),V()):t151;})();return !truth(t150)?ne(e->slot(0,2),V()):t150;})();refs[0].put(std::move(t149));}
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t152=get(get(e->slot(1,1),lit1),lit2);e->slot(0,1)=std::move(t152);}
if(truth(eq(e->slot(0,1),lit240))){auto parent=e;Env storage(parent,false,3);auto e=&storage;{V t153=([&](){V t154=e->slot(1,0);return truth(t154)?get(e->slot(1,0),lit241):t154;})();e->slot(0,0)=std::move(t153);}
{V t155=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t155);}
{V t156=V(-num(get(e->get("math"),lit152)));e->slot(0,2)=std::move(t156);}
{double t157=num(V(0.0)),t158=num(V(3.0)),t159=num(V(1.0));for(double t160=t157;(t159>0?t160<=t158:t160>=t158);t160+=t159){auto parent=e;Env storage(parent,false,3);auto e=&storage;e->slot(0,0)=V(t160);{V t161=([&](){V t162=e->slot(1,0);return truth(t162)?get(e->slot(1,0),e->slot(0,0)):t162;})();e->slot(0,1)=std::move(t161);}
{V t163=([&](){V t164=e->slot(0,1);return truth(t164)?get(e->slot(0,1),lit242):t164;})();e->slot(0,2)=std::move(t163);}
if(truth(([&](){V t165=([&](){V t166=([&](){V t167=ne(first(call(e->get("type"),Args{e->slot(0,2)})),lit243);return !truth(t167)?ne(e->slot(0,2),e->slot(0,2)):t167;})();return !truth(t166)?eq(first(call(get(e->get("math"),lit153),Args{e->slot(0,2)})),get(e->get("math"),lit152)):t166;})();return !truth(t165)?lt(e->slot(0,2),V(-num(V(273.15)))):t165;})())){call(e->get("error"),Args{lit244});
}
{std::array<Ref,1> refs{Ref(e->slot(1,1),e->slot(0,0))};V t168=e->slot(0,2);refs[0].put(std::move(t168));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t169=first(call(get(e->get("math"),lit212),Args{e->slot(1,2),e->slot(0,2)}));refs[0].put(std::move(t169));}
}}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit245)};V t170=e->slot(0,1);refs[0].put(std::move(t170));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit246)};V t171=lit247;refs[0].put(std::move(t171));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit146)};V t172=V(true);refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit115)};V t173=first(call(e->slot(2,4),Args{divv(sub(e->slot(0,2),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t173));}
}else if(truth(eq(e->slot(0,1),lit3))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t174=([&](){V t175=([&](){V t176=([&](){V t177=([&](){V t178=first(call(e->slot(2,6),Args{lit248}));return !truth(t178)?first(call(e->slot(2,6),Args{lit249})):t178;})();return !truth(t177)?first(call(e->slot(2,6),Args{lit250})):t177;})();return !truth(t176)?first(call(e->slot(2,6),Args{lit251})):t176;})();return !truth(t175)?first(call(e->slot(2,6),Args{lit252})):t175;})();e->slot(0,0)=std::move(t174);}
if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t179=first(call(e->slot(3,3),Args{e->slot(1,0),V(25.0)}));e->slot(0,0)=std::move(t179);}
if(truth(le(e->slot(0,0),V(1.5)))){{std::array<Ref,1> refs{Ref(e->slot(3,2),lit115)};V t180=first(call(e->slot(3,4),Args{e->slot(0,0),V(0.0),V(1.0)}));refs[0].put(std::move(t180));}
}else{{std::array<Ref,1> refs{Ref(e->slot(3,2),lit115)};V t181=first(call(e->slot(3,4),Args{divv(sub(e->slot(0,0),V(25.0)),V(700.0)),V(0.0),V(1.0)}));refs[0].put(std::move(t181));}
}
}else{{std::array<Ref,1> refs{Ref(e->slot(2,2),lit115)};V t182=V(0.0);refs[0].put(std::move(t182));}
}
{std::array<Ref,1> refs{Ref(e->slot(2,2),lit146)};V t183=ne(e->slot(0,0),V());refs[0].put(std::move(t183));}
}else{call(e->get("error"),Args{lit253});
}

return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,14);auto e=&storage;e->slot(0,0)=arg(a,0);{V t184=V(0.0);e->slot(0,1)=std::move(t184);}
{V t185=V(0.0);e->slot(0,2)=std::move(t185);}
{V t186=V(0.0);e->slot(0,3)=std::move(t186);}
{V t187=V(false);e->slot(0,4)=std::move(t187);}
{V t188=V(false);e->slot(0,5)=std::move(t188);}
{double t189=num(V(0.0)),t190=num(V(3.0)),t191=num(V(1.0));for(double t192=t189;(t191>0?t192<=t190:t192>=t190);t192+=t191){auto parent=e;Env storage(parent,false,4);auto e=&storage;e->slot(0,0)=V(t192);{V t193=([&](){V t194=([&](){V t195=first(call(e->slot(2,6),Args{concat(lit254,e->slot(0,0))}));return !truth(t195)?first(call(e->slot(2,6),Args{concat(lit255,e->slot(0,0))})):t195;})();return !truth(t194)?first(call(e->slot(2,6),Args{concat(lit256,e->slot(0,0))})):t194;})();e->slot(0,1)=std::move(t193);}
{V t196=([&](){V t197=([&](){V t198=([&](){V t199=first(call(e->slot(2,6),Args{concat(lit257,e->slot(0,0))}));return !truth(t199)?first(call(e->slot(2,6),Args{concat(lit258,e->slot(0,0))})):t199;})();return !truth(t198)?first(call(e->slot(2,6),Args{concat(lit259,e->slot(0,0))})):t198;})();return !truth(t197)?first(call(e->slot(2,6),Args{concat(lit260,e->slot(0,0))})):t197;})();e->slot(0,2)=std::move(t196);}
{V t200=([&](){V t201=([&](){V t202=([&](){V t203=first(call(e->slot(2,6),Args{concat(lit261,e->slot(0,0))}));return !truth(t203)?first(call(e->slot(2,6),Args{concat(lit262,e->slot(0,0))})):t203;})();return !truth(t202)?first(call(e->slot(2,6),Args{concat(lit263,e->slot(0,0))})):t202;})();return !truth(t201)?first(call(e->slot(2,6),Args{concat(lit264,e->slot(0,0))})):t201;})();e->slot(0,3)=std::move(t200);}
if(truth(([&](){V t204=ne(e->slot(0,1),V());return !truth(t204)?ne(e->slot(0,2),V()):t204;})())){{std::array<Ref,1> refs{Ref(e,1,4)};V t205=V(true);refs[0].put(std::move(t205));}
}
if(truth(ne(e->slot(0,3),V()))){{std::array<Ref,1> refs{Ref(e,1,5)};V t206=V(true);refs[0].put(std::move(t206));}
}
{std::array<Ref,1> refs{Ref(e,1,1)};V t207=add(e->slot(1,1),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e,1,2)};V t208=add(e->slot(1,2),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,2),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e,1,3)};V t209=add(e->slot(1,3),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,3),V(0.0)})),V(0.0),V(2.0)})));refs[0].put(std::move(t209));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit104)};V t210=mul(e->slot(0,1),V(0.25));refs[0].put(std::move(t210));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit105)};V t211=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit106)};V t212=mul(e->slot(0,3),V(0.25));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit142)};V t213=e->slot(0,4);refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit147)};V t214=e->slot(0,5);refs[0].put(std::move(t214));}
{V t215=([&](){V t216=([&](){V t217=([&](){V t218=first(call(e->slot(1,6),Args{lit265}));return !truth(t218)?first(call(e->slot(1,6),Args{lit266})):t218;})();return !truth(t217)?first(call(e->slot(1,6),Args{lit267})):t217;})();return !truth(t216)?first(call(e->slot(1,6),Args{lit268})):t216;})();e->slot(0,6)=std::move(t215);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit107)};V t219=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,6),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit144)};V t220=ne(e->slot(0,6),V());refs[0].put(std::move(t220));}
{V t221=([&](){V t222=([&](){V t223=([&](){V t224=first(call(e->slot(1,6),Args{lit269}));return !truth(t224)?first(call(e->slot(1,6),Args{lit270})):t224;})();return !truth(t223)?first(call(e->slot(1,6),Args{lit271})):t223;})();return !truth(t222)?first(call(e->slot(1,6),Args{lit272})):t222;})();e->slot(0,7)=std::move(t221);}
{V t225=([&](){V t226=([&](){V t227=first(call(e->slot(1,6),Args{lit273}));return !truth(t227)?first(call(e->slot(1,6),Args{lit274})):t227;})();return !truth(t226)?first(call(e->slot(1,6),Args{lit275})):t226;})();e->slot(0,8)=std::move(t225);}
{V t228=([&](){V t229=first(call(e->slot(1,6),Args{lit276}));return !truth(t229)?first(call(e->slot(1,6),Args{lit277})):t229;})();e->slot(0,9)=std::move(t228);}
{V t230=([&](){V t231=first(call(e->slot(1,6),Args{lit278}));return !truth(t231)?first(call(e->slot(1,6),Args{lit279})):t231;})();e->slot(0,10)=std::move(t230);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit108)};V t232=first(call(e->slot(1,3),Args{e->slot(0,7),V(0.0)}));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t233=first(call(e->slot(1,4),Args{divv(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit108)})),first(call(get(e->get("math"),lit212),Args{get(get(e->slot(1,1),lit1),lit60),V(1.0)}))),V(0.0),V(1.0)}));refs[0].put(std::move(t233));}
if(truth(([&](){V t234=le(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit108)})),V(1.5));return truth(t234)?ne(e->slot(0,7),V()):t234;})())){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit109)};V t235=first(call(e->slot(1,4),Args{first(call(e->slot(1,5),Args{get(e->slot(1,2),lit108)})),V(0.0),V(1.0)}));refs[0].put(std::move(t235));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit110)};V t236=first(call(e->slot(1,3),Args{e->slot(0,8),V(0.0)}));refs[0].put(std::move(t236));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit111)};V t237=first(call(e->slot(1,3),Args{e->slot(0,9),V(0.0)}));refs[0].put(std::move(t237));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit112)};V t238=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,10),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t238));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit143)};V t239=([&](){V t240=([&](){V t241=([&](){V t242=ne(e->slot(0,7),V());return !truth(t242)?ne(e->slot(0,8),V()):t242;})();return !truth(t241)?ne(e->slot(0,9),V()):t241;})();return !truth(t240)?ne(e->slot(0,10),V()):t240;})();refs[0].put(std::move(t239));}
{V t243=([&](){V t244=first(call(e->slot(1,6),Args{lit280}));return !truth(t244)?first(call(e->slot(1,6),Args{lit281})):t244;})();e->slot(0,11)=std::move(t243);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit113)};V t245=first(call(e->slot(1,4),Args{first(call(e->slot(1,3),Args{e->slot(0,11),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t245));}
{V t246=V(0.0);e->slot(0,12)=std::move(t246);}
{V t247=ne(e->slot(0,11),V());e->slot(0,13)=std::move(t247);}
{double t248=num(V(0.0)),t249=num(V(3.0)),t250=num(V(1.0));for(double t251=t248;(t250>0?t251<=t249:t251>=t249);t251+=t250){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t251);{V t252=([&](){V t253=first(call(e->slot(2,6),Args{concat(lit282,e->slot(0,0))}));return !truth(t253)?first(call(e->slot(2,6),Args{concat(lit283,e->slot(0,0))})):t253;})();e->slot(0,1)=std::move(t252);}
if(truth(ne(e->slot(0,1),V()))){{std::array<Ref,1> refs{Ref(e,1,13)};V t254=V(true);refs[0].put(std::move(t254));}
}
{std::array<Ref,1> refs{Ref(e,1,12)};V t255=add(e->slot(1,12),first(call(e->slot(2,4),Args{first(call(e->slot(2,3),Args{e->slot(0,1),V(0.0)})),V(0.0),V(1.0)})));refs[0].put(std::move(t255));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit114)};V t256=mul(e->slot(0,12),V(0.25));refs[0].put(std::move(t256));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit145)};V t257=e->slot(0,13);refs[0].put(std::move(t257));}
call(e->slot(1,23),Args{e->slot(0,0)});
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit116)};V t258=first(call(e->slot(1,4),Args{add(add(mul(get(e->slot(1,2),lit114),get(get(e->slot(1,1),lit1),lit63)),mul(get(e->slot(1,2),lit115),get(get(e->slot(1,1),lit1),lit64))),mul(get(e->slot(1,2),lit106),get(get(e->slot(1,1),lit1),lit65))),V(0.0),get(get(e->slot(1,1),lit1),lit67)}));refs[0].put(std::move(t258));}
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;{V t259=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t259);}
{V t260=add(add(add(add(add(add(add(add(add(V(1.0),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit99)})),get(e->slot(0,0),lit18))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit100)})),get(e->slot(0,0),lit19))),mul(get(e->slot(1,2),lit90),V(0.12))),mul(sub(get(e->slot(1,2),lit101),V(1.0)),get(e->slot(0,0),lit49))),mul(sub(get(e->slot(1,2),lit102),V(1.0)),get(e->slot(0,0),lit52))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit103)})),get(e->slot(0,0),lit53))),mul(get(e->slot(1,2),lit109),get(e->slot(0,0),lit58))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit110)})),get(e->slot(0,0),lit61))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit111)})),V(0.03)));e->slot(0,1)=std::move(t260);}
{std::array<Ref,1> refs{Ref(e,0,1)};V t261=sub(e->slot(0,1),mul(get(e->slot(1,2),lit112),get(e->slot(0,0),lit59)));refs[0].put(std::move(t261));}
{V t262=add(add(add(add(add(V(1.0),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit99)})),get(e->slot(0,0),lit20))),mul(get(e->slot(1,2),lit90),V(0.08))),mul(sub(get(e->slot(1,2),lit101),V(1.0)),get(e->slot(0,0),lit50))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit103)})),get(e->slot(0,0),lit54))),mul(get(e->slot(1,2),lit113),get(e->slot(0,0),lit62)));e->slot(0,2)=std::move(t262);}
{V t263=add(add(add(V(1.0),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit100)})),get(e->slot(0,0),lit21))),mul(get(e->slot(1,2),lit90),V(0.1))),mul(sub(get(e->slot(1,2),lit101),V(1.0)),get(e->slot(0,0),lit51)));e->slot(0,3)=std::move(t263);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit96)};V t264=first(call(e->slot(1,4),Args{e->slot(0,1),sub(V(1.0),get(e->slot(0,0),lit22)),add(V(1.0),get(e->slot(0,0),lit22))}));refs[0].put(std::move(t264));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit97)};V t265=first(call(e->slot(1,4),Args{e->slot(0,2),sub(V(1.0),get(e->slot(0,0),lit22)),add(V(1.0),get(e->slot(0,0),lit22))}));refs[0].put(std::move(t265));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit98)};V t266=first(call(e->slot(1,4),Args{e->slot(0,3),sub(V(1.0),get(e->slot(0,0),lit22)),add(V(1.0),get(e->slot(0,0),lit22))}));refs[0].put(std::move(t266));}
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{V t267=get(e->slot(1,1),lit1);e->slot(0,4)=std::move(t267);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t268=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit74),e->slot(0,0),mul(get(e->slot(0,4),lit4),get(e->slot(1,2),lit96)),e->slot(0,3)}));refs[0].put(std::move(t268));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t269=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit75),e->slot(0,1),mul(get(e->slot(0,4),lit5),get(e->slot(1,2),lit97)),e->slot(0,3)}));refs[0].put(std::move(t269));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t270=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit76),e->slot(0,2),mul(get(e->slot(0,4),lit6),get(e->slot(1,2),lit98)),e->slot(0,3)}));refs[0].put(std::move(t270));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t271=add(sub(add(add(get(e->slot(1,2),lit74),mul(get(e->slot(1,2),lit86),get(e->slot(0,4),lit8))),mul(get(e->slot(1,2),lit90),get(e->slot(0,4),lit11))),mul(mul(get(e->slot(1,2),lit91),get(e->slot(0,4),lit14)),V(0.35))),mul(get(e->slot(1,2),lit106),get(e->slot(0,4),lit66)));refs[0].put(std::move(t271));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t272=sub(add(add(get(e->slot(1,2),lit75),mul(get(e->slot(1,2),lit87),get(e->slot(0,4),lit9))),mul(get(e->slot(1,2),lit90),get(e->slot(0,4),lit12))),mul(mul(get(e->slot(1,2),lit91),get(e->slot(0,4),lit14)),V(0.2)));refs[0].put(std::move(t272));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t273=sub(add(add(get(e->slot(1,2),lit76),mul(get(e->slot(1,2),lit88),get(e->slot(0,4),lit10))),mul(get(e->slot(1,2),lit90),get(e->slot(0,4),lit13))),mul(mul(get(e->slot(1,2),lit91),get(e->slot(0,4),lit14)),V(0.22)));refs[0].put(std::move(t273));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t274=add(get(e->slot(1,2),lit74),mul(get(e->slot(1,2),lit79),get(e->slot(0,4),lit15)));refs[0].put(std::move(t274));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t275=add(get(e->slot(1,2),lit75),mul(get(e->slot(1,2),lit80),get(e->slot(0,4),lit16)));refs[0].put(std::move(t275));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t276=add(get(e->slot(1,2),lit76),mul(get(e->slot(1,2),lit81),get(e->slot(0,4),lit17)));refs[0].put(std::move(t276));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t277=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit74),V(-num(get(e->slot(0,4),lit29))),get(e->slot(0,4),lit29)}));refs[0].put(std::move(t277));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t278=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit75),V(-num(get(e->slot(0,4),lit30))),get(e->slot(0,4),lit30)}));refs[0].put(std::move(t278));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t279=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit76),V(-num(get(e->slot(0,4),lit31))),get(e->slot(0,4),lit31)}));refs[0].put(std::move(t279));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t280=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit77),get(e->slot(1,2),lit74),get(e->slot(0,4),lit7),e->slot(0,3)}));refs[0].put(std::move(t280));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t281=add(add(mul(get(e->slot(1,2),lit74),get(e->slot(0,4),lit27)),mul(get(e->slot(1,2),lit77),get(e->slot(0,4),lit28))),get(e->slot(1,2),lit79));refs[0].put(std::move(t281));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,16);auto e=&storage;e->slot(0,0)=arg(a,0);{V t282=get(e->slot(1,1),lit1);e->slot(0,1)=std::move(t282);}
if(truth(V(!truth(get(e->slot(1,2),lit138))))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit134)};V t283=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit134),V(1.0),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit135)};V t284=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit135),V(1.0),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t284));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit136)};V t285=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit136),V(1.0),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit137)};V t286=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit137),V(1.0),V(0.07),e->slot(0,0)}));refs[0].put(std::move(t286));}
return Args{};
}
{V t287=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit129),V(0.2),V(1.35)}));e->slot(0,2)=std::move(t287);}
{V t288=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit130),V(0.25),V(1.8)}));e->slot(0,3)=std::move(t288);}
{V t289=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit131),V(0.35),V(2.0)}));e->slot(0,4)=std::move(t289);}
{V t290=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit132),V(0.35),V(2.0)}));e->slot(0,5)=std::move(t290);}
{V t291=first(call(e->slot(1,4),Args{get(e->slot(1,2),lit133),V(0.5),V(1.8)}));e->slot(0,6)=std::move(t291);}
{V t292=first(call(e->slot(1,4),Args{sub(e->slot(0,3),V(1.0)),V(0.0),V(0.8)}));e->slot(0,7)=std::move(t292);}
{V t293=first(call(e->slot(1,4),Args{sub(e->slot(0,2),V(1.0)),V(0.0),V(0.35)}));e->slot(0,8)=std::move(t293);}
{V t294=first(call(e->slot(1,4),Args{sub(e->slot(0,4),V(1.0)),V(0.0),V(1.0)}));e->slot(0,9)=std::move(t294);}
{V t295=first(call(e->slot(1,4),Args{sub(e->slot(0,5),V(1.0)),V(0.0),V(1.0)}));e->slot(0,10)=std::move(t295);}
{V t296=add(sub(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit36))),mul(e->slot(0,9),get(e->slot(0,1),lit40))),mul(e->slot(0,8),get(e->slot(0,1),lit42)));e->slot(0,11)=std::move(t296);}
{V t297=add(sub(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit38))),mul(e->slot(0,10),get(e->slot(0,1),lit41))),mul(e->slot(0,8),get(e->slot(0,1),lit44)));e->slot(0,12)=std::move(t297);}
{V t298=add(sub(sub(V(1.0),mul(e->slot(0,7),get(e->slot(0,1),lit37))),mul(e->slot(0,9),V(0.05))),mul(e->slot(0,8),get(e->slot(0,1),lit43)));e->slot(0,13)=std::move(t298);}
{V t299=sub(add(add(V(1.0),mul(e->slot(0,9),get(e->slot(0,1),lit39))),mul(e->slot(0,7),V(0.04))),mul(e->slot(0,8),V(0.03)));e->slot(0,14)=std::move(t299);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit134)};V t300=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit134),first(call(e->slot(1,4),Args{e->slot(0,11),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)})),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t300));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit135)};V t301=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit135),first(call(e->slot(1,4),Args{e->slot(0,12),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)})),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t301));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit136)};V t302=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit136),first(call(e->slot(1,4),Args{e->slot(0,13),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)})),V(0.06),e->slot(0,0)}));refs[0].put(std::move(t302));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit137)};V t303=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit137),first(call(e->slot(1,4),Args{e->slot(0,14),get(e->slot(0,1),lit47),get(e->slot(0,1),lit48)})),V(0.07),e->slot(0,0)}));refs[0].put(std::move(t303));}
{V t304=sub(add(mul(e->slot(0,7),get(e->slot(0,1),lit45)),mul(e->slot(0,9),V(0.06))),mul(sub(e->slot(0,6),V(1.0)),get(e->slot(0,1),lit46)));e->slot(0,15)=std::move(t304);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t305=first(call(e->slot(1,4),Args{add(get(e->slot(1,2),lit117),e->slot(0,15)),V(0.0),V(1.5)}));refs[0].put(std::move(t305));}
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;if(truth(lt(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit74)})),V(0.05)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t306=lit119;refs[0].put(std::move(t306));}
}else if(truth(gt(get(e->slot(1,2),lit74),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t307=lit284;refs[0].put(std::move(t307));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit118)};V t308=lit285;refs[0].put(std::move(t308));}
}

if(truth(lt(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit75)})),V(0.05)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t309=lit119;refs[0].put(std::move(t309));}
}else if(truth(gt(get(e->slot(1,2),lit75),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t310=lit286;refs[0].put(std::move(t310));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit120)};V t311=lit287;refs[0].put(std::move(t311));}
}

if(truth(lt(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit76)})),V(0.05)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit121)};V t312=lit119;refs[0].put(std::move(t312));}
}else if(truth(gt(get(e->slot(1,2),lit76),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit121)};V t313=lit288;refs[0].put(std::move(t313));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit121)};V t314=lit289;refs[0].put(std::move(t314));}
}

{V t315=first(call(e->slot(1,5),Args{sub(get(e->slot(1,2),lit74),get(e->slot(1,2),lit77))}));e->slot(0,0)=std::move(t315);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit117)};V t316=first(call(e->slot(1,4),Args{add(add(add(add(add(add(add(mul(e->slot(0,0),V(1.5)),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit79)})),V(0.8))),mul(first(call(e->slot(1,5),Args{get(e->slot(1,2),lit86)})),V(0.65))),mul(get(e->slot(1,2),lit90),V(0.4))),mul(get(e->slot(1,2),lit104),get(get(e->slot(1,1),lit1),lit55))),mul(get(e->slot(1,2),lit105),get(get(e->slot(1,1),lit1),lit56))),mul(get(e->slot(1,2),lit107),get(get(e->slot(1,1),lit1),lit57))),get(e->slot(1,2),lit116)),V(0.0),V(1.5)}));refs[0].put(std::move(t316));}
if(truth(lt(get(e->slot(1,2),lit117),V(0.1)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t317=lit123;refs[0].put(std::move(t317));}
}else if(truth(lt(get(e->slot(1,2),lit117),V(0.25)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t318=lit290;refs[0].put(std::move(t318));}
}else if(truth(lt(get(e->slot(1,2),lit117),V(0.45)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t319=lit291;refs[0].put(std::move(t319));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit122)};V t320=lit292;refs[0].put(std::move(t320));}
}


return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t321=get(get(e->slot(1,1),lit1),lit70);e->slot(0,1)=std::move(t321);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit74)};V t322=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit74),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t322));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit75)};V t323=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit75),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t323));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit76)};V t324=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit76),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t324));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit77)};V t325=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit77),get(e->slot(1,2),lit74),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t325));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit78)};V t326=first(call(e->slot(1,11),Args{get(e->slot(1,2),lit78),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t326));}
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;{V t327=get(e->slot(1,1),lit1);e->slot(0,0)=std::move(t327);}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit92)};V t328=first(call(e->slot(1,4),Args{mul(mul(get(e->slot(1,2),lit78),get(e->slot(0,0),lit23)),get(e->slot(1,2),lit134)),V(-num(get(e->slot(0,0),lit32))),get(e->slot(0,0),lit32)}));refs[0].put(std::move(t328));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit93)};V t329=first(call(e->slot(1,4),Args{mul(mul(get(e->slot(1,2),lit75),get(e->slot(0,0),lit24)),get(e->slot(1,2),lit135)),V(-num(get(e->slot(0,0),lit33))),get(e->slot(0,0),lit33)}));refs[0].put(std::move(t329));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit94)};V t330=first(call(e->slot(1,4),Args{mul(mul(get(e->slot(1,2),lit76),get(e->slot(0,0),lit25)),get(e->slot(1,2),lit136)),V(-num(get(e->slot(0,0),lit34))),get(e->slot(0,0),lit34)}));refs[0].put(std::move(t330));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit95)};V t331=first(call(e->slot(1,4),Args{mul(mul(get(e->slot(1,2),lit77),get(e->slot(0,0),lit26)),get(e->slot(1,2),lit137)),V(-num(get(e->slot(0,0),lit32))),get(e->slot(0,0),lit32)}));refs[0].put(std::move(t331));}
call(e->slot(1,8),Args{lit293,get(e->slot(1,2),lit92)});
call(e->slot(1,8),Args{lit294,get(e->slot(1,2),lit93)});
call(e->slot(1,8),Args{lit295,get(e->slot(1,2),lit94)});
call(e->slot(1,8),Args{lit296,get(e->slot(1,2),lit95)});
call(e->slot(1,8),Args{lit297,get(e->slot(1,2),lit78)});
call(e->slot(1,8),Args{lit298,get(e->slot(1,2),lit74)});
call(e->slot(1,8),Args{lit299,get(e->slot(1,2),lit75)});
call(e->slot(1,8),Args{lit300,get(e->slot(1,2),lit76)});
call(e->slot(1,8),Args{lit301,get(e->slot(1,2),lit96)});
call(e->slot(1,8),Args{lit302,get(e->slot(1,2),lit97)});
call(e->slot(1,8),Args{lit303,get(e->slot(1,2),lit98)});
call(e->slot(1,8),Args{lit304,get(e->slot(1,2),lit117)});
call(e->slot(1,8),Args{lit305,get(e->slot(1,2),lit122)});
call(e->slot(1,8),Args{lit306,get(e->slot(1,2),lit118)});
call(e->slot(1,8),Args{lit307,get(e->slot(1,2),lit120)});
call(e->slot(1,8),Args{lit308,get(e->slot(1,2),lit121)});
call(e->slot(1,8),Args{lit309,get(e->slot(1,2),lit124)});
call(e->slot(1,8),Args{lit310,get(e->slot(1,2),lit126)});
call(e->slot(1,8),Args{lit311,([&](){V t332=([&](){V t333=get(e->slot(1,2),lit127);return truth(t333)?V(1.0):t333;})();return !truth(t332)?V(0.0):t332;})()});
call(e->slot(1,8),Args{lit312,([&](){V t334=([&](){V t335=get(e->slot(1,2),lit128);return truth(t335)?V(1.0):t335;})();return !truth(t334)?V(0.0):t334;})()});
call(e->slot(1,8),Args{lit313,get(e->slot(1,2),lit78)});
call(e->slot(1,8),Args{lit314,get(e->slot(1,2),lit93)});
call(e->slot(1,8),Args{lit315,get(e->slot(1,2),lit94)});
call(e->slot(1,8),Args{lit316,get(e->slot(1,2),lit95)});
call(e->slot(1,8),Args{lit317,get(e->slot(1,2),lit92)});
call(e->slot(1,8),Args{lit318,get(e->slot(1,2),lit93)});
call(e->slot(1,8),Args{lit319,get(e->slot(1,2),lit94)});
call(e->slot(1,8),Args{lit320,get(e->slot(1,2),lit95)});
call(e->slot(1,8),Args{lit321,get(e->slot(1,2),lit117)});
call(e->slot(1,8),Args{lit322,get(e->slot(1,2),lit122)});
if(truth(V(!truth(get(e->slot(1,2),lit149))))){return Args{};
}
call(e->slot(1,8),Args{lit323,([&](){V t336=([&](){V t337=get(e->slot(1,2),lit138);return truth(t337)?V(1.0):t337;})();return !truth(t336)?V(0.0):t336;})()});
call(e->slot(1,8),Args{lit324,([&](){V t338=([&](){V t339=get(e->slot(1,2),lit139);return truth(t339)?V(1.0):t339;})();return !truth(t338)?V(0.0):t338;})()});
call(e->slot(1,8),Args{lit325,([&](){V t340=([&](){V t341=get(e->slot(1,2),lit140);return truth(t341)?V(1.0):t341;})();return !truth(t340)?V(0.0):t340;})()});
call(e->slot(1,8),Args{lit326,([&](){V t342=([&](){V t343=get(e->slot(1,2),lit141);return truth(t343)?V(1.0):t343;})();return !truth(t342)?V(0.0):t342;})()});
call(e->slot(1,8),Args{lit327,([&](){V t344=([&](){V t345=get(e->slot(1,2),lit142);return truth(t345)?V(1.0):t345;})();return !truth(t344)?V(0.0):t344;})()});
call(e->slot(1,8),Args{lit328,([&](){V t346=([&](){V t347=get(e->slot(1,2),lit143);return truth(t347)?V(1.0):t347;})();return !truth(t346)?V(0.0):t346;})()});
call(e->slot(1,8),Args{lit329,([&](){V t348=([&](){V t349=get(e->slot(1,2),lit144);return truth(t349)?V(1.0):t349;})();return !truth(t348)?V(0.0):t348;})()});
call(e->slot(1,8),Args{lit330,([&](){V t350=([&](){V t351=get(e->slot(1,2),lit145);return truth(t351)?V(1.0):t351;})();return !truth(t350)?V(0.0):t350;})()});
call(e->slot(1,8),Args{lit331,([&](){V t352=([&](){V t353=get(e->slot(1,2),lit146);return truth(t353)?V(1.0):t353;})();return !truth(t352)?V(0.0):t352;})()});
call(e->slot(1,8),Args{lit332,([&](){V t354=([&](){V t355=get(e->slot(1,2),lit147);return truth(t355)?V(1.0):t355;})();return !truth(t354)?V(0.0):t354;})()});
call(e->slot(1,8),Args{lit333,get(e->slot(1,2),lit101)});
call(e->slot(1,8),Args{lit334,get(e->slot(1,2),lit102)});
call(e->slot(1,8),Args{lit335,get(e->slot(1,2),lit103)});
call(e->slot(1,8),Args{lit336,get(e->slot(1,2),lit82)});
call(e->slot(1,8),Args{lit337,get(e->slot(1,2),lit83)});
call(e->slot(1,8),Args{lit338,get(e->slot(1,2),lit84)});
call(e->slot(1,8),Args{lit339,get(e->slot(1,2),lit85)});
call(e->slot(1,8),Args{lit340,get(e->slot(1,2),lit79)});
call(e->slot(1,8),Args{lit341,get(e->slot(1,2),lit80)});
call(e->slot(1,8),Args{lit342,get(e->slot(1,2),lit81)});
call(e->slot(1,8),Args{lit343,get(e->slot(1,2),lit104)});
call(e->slot(1,8),Args{lit344,get(e->slot(1,2),lit105)});
call(e->slot(1,8),Args{lit345,get(e->slot(1,2),lit106)});
call(e->slot(1,8),Args{lit346,get(e->slot(1,2),lit107)});
call(e->slot(1,8),Args{lit347,get(e->slot(1,2),lit109)});
call(e->slot(1,8),Args{lit348,get(e->slot(1,2),lit108)});
call(e->slot(1,8),Args{lit349,get(e->slot(1,2),lit110)});
call(e->slot(1,8),Args{lit350,get(e->slot(1,2),lit111)});
call(e->slot(1,8),Args{lit351,get(e->slot(1,2),lit112)});
call(e->slot(1,8),Args{lit352,get(e->slot(1,2),lit113)});
call(e->slot(1,8),Args{lit353,get(e->slot(1,2),lit114)});
if(truth(eq(get(get(e->slot(1,1),lit1),lit2),lit240))){call(e->slot(1,8),Args{lit354,get(e->slot(1,2),lit115)});
}else{call(e->slot(1,8),Args{lit355,get(e->slot(1,2),lit115)});
}
call(e->slot(1,8),Args{lit356,get(e->slot(1,2),lit116)});
call(e->slot(1,8),Args{lit357,get(e->slot(1,2),lit134)});
call(e->slot(1,8),Args{lit358,get(e->slot(1,2),lit135)});
call(e->slot(1,8),Args{lit359,get(e->slot(1,2),lit136)});
call(e->slot(1,8),Args{lit360,get(e->slot(1,2),lit137)});
return Args{};});
Ref(e->slot(0,1),lit361).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t356=lit125;refs[0].put(std::move(t356));}
call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit362).put(native([up=e](const Args& a)->Args{Env storage(up,true,6);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,2),lit126)};V t357=add(([&](){V t358=get(e->slot(1,2),lit126);return !truth(t358)?V(0.0):t358;})(),V(1.0));refs[0].put(std::move(t357));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t359=first(call(e->slot(1,3),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t359));}
if(truth(le(e->slot(0,0),V(0.0)))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t360=lit363;refs[0].put(std::move(t360));}
call(e->slot(1,30),Args{});
return Args{};
}
{std::array<Ref,1> refs{Ref(e,0,0)};V t361=first(call(e->slot(1,4),Args{e->slot(0,0),get(get(e->slot(1,1),lit1),lit71),get(get(e->slot(1,1),lit1),lit72)}));refs[0].put(std::move(t361));}
call(e->slot(1,13),Args{e->slot(0,0)});
call(e->slot(1,14),Args{});
if(truth(V(!truth(e->slot(0,1))))){{std::array<Ref,1> refs{Ref(e,0,1)};V t362=first(call(e->slot(1,10),Args{}));refs[0].put(std::move(t362));}
}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit127)};V t363=ne(e->slot(0,1),V());refs[0].put(std::move(t363));}
{std::array<Ref,1> refs{Ref(e->slot(1,2),lit128)};V t364=V(!truth(get(e->slot(1,2),lit127)));refs[0].put(std::move(t364));}
if(truth(get(e->slot(1,2),lit127))){{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t365=lit364;refs[0].put(std::move(t365));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,2),lit124)};V t366=lit365;refs[0].put(std::move(t366));}
}
call(e->slot(1,15),Args{});
call(e->slot(1,17),Args{});
call(e->slot(1,20),Args{});
call(e->slot(1,21),Args{});
call(e->slot(1,22),Args{});
call(e->slot(1,24),Args{e->slot(0,1)});
{Args t367=call(e->slot(1,16),Args{e->slot(0,1)});e->slot(0,3)=arg(t367,0);e->slot(0,4)=arg(t367,1);e->slot(0,5)=arg(t367,2);}
call(e->slot(1,25),Args{});
if(truth(get(e->slot(1,2),lit127))){call(e->slot(1,26),Args{e->slot(0,3),e->slot(0,4),e->slot(0,5),e->slot(0,0)});
}else{call(e->slot(1,29),Args{e->slot(0,0)});
call(e->slot(1,26),Args{e->slot(0,3),e->slot(0,4),e->slot(0,5),e->slot(0,0)});
}
call(e->slot(1,27),Args{e->slot(0,0)});
call(e->slot(1,28),Args{});
call(e->slot(1,30),Args{});
return Args{};}));
Ref(e->slot(0,1),lit366).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t368=get(e->slot(1,2),lit92);return !truth(t368)?V(0.0):t368;})()};
return Args{};}));
Ref(e->slot(0,1),lit367).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t369=get(e->slot(1,2),lit93);return !truth(t369)?V(0.0):t369;})()};
return Args{};}));
Ref(e->slot(0,1),lit368).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t370=get(e->slot(1,2),lit94);return !truth(t370)?V(0.0):t370;})()};
return Args{};}));
Ref(e->slot(0,1),lit369).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t371=get(e->slot(1,2),lit95);return !truth(t371)?V(0.0):t371;})()};
return Args{};}));
Ref(e->slot(0,1),lit370).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t372=get(e->slot(1,2),lit117);return !truth(t372)?V(0.0):t372;})()};
return Args{};}));
Ref(e->slot(0,1),lit371).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(eq(e->slot(0,0),lit74))){return Args{([&](){V t373=get(e->slot(1,2),lit96);return !truth(t373)?V(1.0):t373;})()};
}
if(truth(eq(e->slot(0,0),lit75))){return Args{([&](){V t374=get(e->slot(1,2),lit97);return !truth(t374)?V(1.0):t374;})()};
}
if(truth(eq(e->slot(0,0),lit76))){return Args{([&](){V t375=get(e->slot(1,2),lit98);return !truth(t375)?V(1.0):t375;})()};
}
return Args{([&](){V t376=get(e->slot(1,2),lit96);return !truth(t376)?V(1.0):t376;})(),([&](){V t377=get(e->slot(1,2),lit97);return !truth(t377)?V(1.0):t377;})(),([&](){V t378=get(e->slot(1,2),lit98);return !truth(t378)?V(1.0):t378;})()};
return Args{};}));
Ref(e->slot(0,1),lit372).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,2)};
return Args{};}));
Ref(e->slot(0,1),lit373).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("string"),lit374),Args{concat(lit375,concat(lit376,concat(lit377,concat(lit378,concat(lit379,concat(lit380,concat(lit381,lit382))))))),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit124)})),([&](){V t379=get(e->slot(1,2),lit126);return !truth(t379)?V(0.0):t379;})(),([&](){V t380=([&](){V t381=get(e->slot(1,2),lit127);return truth(t381)?lit383:t381;})();return !truth(t380)?lit384:t380;})(),([&](){V t382=([&](){V t383=get(e->slot(1,2),lit128);return truth(t383)?lit385:t383;})();return !truth(t382)?lit386:t382;})(),([&](){V t384=get(e->slot(1,2),lit92);return !truth(t384)?V(0.0):t384;})(),([&](){V t385=get(e->slot(1,2),lit93);return !truth(t385)?V(0.0):t385;})(),([&](){V t386=get(e->slot(1,2),lit94);return !truth(t386)?V(0.0):t386;})(),([&](){V t387=get(e->slot(1,2),lit95);return !truth(t387)?V(0.0):t387;})(),([&](){V t388=get(e->slot(1,2),lit74);return !truth(t388)?V(0.0):t388;})(),([&](){V t389=get(e->slot(1,2),lit75);return !truth(t389)?V(0.0):t389;})(),([&](){V t390=get(e->slot(1,2),lit76);return !truth(t390)?V(0.0):t390;})(),([&](){V t391=get(e->slot(1,2),lit78);return !truth(t391)?V(0.0):t391;})(),([&](){V t392=get(e->slot(1,2),lit96);return !truth(t392)?V(1.0):t392;})(),([&](){V t393=get(e->slot(1,2),lit97);return !truth(t393)?V(1.0):t393;})(),([&](){V t394=get(e->slot(1,2),lit98);return !truth(t394)?V(1.0):t394;})(),([&](){V t395=get(e->slot(1,2),lit117);return !truth(t395)?V(0.0):t395;})(),([&](){V t396=get(e->slot(1,2),lit101);return !truth(t396)?V(1.0):t396;})(),([&](){V t397=get(e->slot(1,2),lit102);return !truth(t397)?V(1.0):t397;})(),([&](){V t398=get(e->slot(1,2),lit103);return !truth(t398)?V(0.0):t398;})(),([&](){V t399=get(e->slot(1,2),lit109);return !truth(t399)?V(0.0):t399;})(),([&](){V t400=get(e->slot(1,2),lit110);return !truth(t400)?V(0.0):t400;})(),([&](){V t401=get(e->slot(1,2),lit113);return !truth(t401)?V(0.0):t401;})(),([&](){V t402=get(e->slot(1,2),lit114);return !truth(t402)?V(0.0):t402;})(),([&](){V t403=get(e->slot(1,2),lit115);return !truth(t403)?V(0.0):t403;})(),([&](){V t404=get(e->slot(1,2),lit106);return !truth(t404)?V(0.0):t404;})(),first(call(e->get("tostring"),Args{get(e->slot(1,2),lit122)})),([&](){V t405=([&](){V t406=get(e->slot(1,2),lit138);return truth(t406)?lit383:t406;})();return !truth(t405)?lit384:t405;})(),([&](){V t407=([&](){V t408=get(e->slot(1,2),lit139);return truth(t408)?lit383:t408;})();return !truth(t407)?lit384:t407;})(),([&](){V t409=([&](){V t410=get(e->slot(1,2),lit140);return truth(t410)?lit383:t410;})();return !truth(t409)?lit384:t409;})(),([&](){V t411=([&](){V t412=get(e->slot(1,2),lit141);return truth(t412)?lit383:t412;})();return !truth(t411)?lit384:t411;})(),([&](){V t413=([&](){V t414=get(e->slot(1,2),lit142);return truth(t414)?lit383:t414;})();return !truth(t413)?lit384:t413;})(),([&](){V t415=([&](){V t416=get(e->slot(1,2),lit143);return truth(t416)?lit383:t416;})();return !truth(t415)?lit384:t415;})(),([&](){V t417=([&](){V t418=get(e->slot(1,2),lit144);return truth(t418)?lit383:t418;})();return !truth(t417)?lit384:t417;})(),([&](){V t419=([&](){V t420=get(e->slot(1,2),lit145);return truth(t420)?lit383:t420;})();return !truth(t419)?lit384:t419;})(),([&](){V t421=([&](){V t422=get(e->slot(1,2),lit146);return truth(t422)?lit383:t422;})();return !truth(t421)?lit384:t421;})(),([&](){V t423=([&](){V t424=get(e->slot(1,2),lit147);return truth(t424)?lit383:t424;})();return !truth(t423)?lit384:t423;})()});
return Args{};}));
Ref(e->slot(0,1),lit387).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit388),Args{lit389});
call(get(e->get("ui"),lit388),call(get(e->slot(1,1),lit373),Args{}));
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
