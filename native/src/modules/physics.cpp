// Generated native C++ from pinned physics.lua. No Lua VM.
#include "model_runtime.hpp"
namespace ngp {
static const V lit0("modules.ngp_core");
static const V lit1("params");
static const V lit2("wheelLoadRef");
static const V lit3("loadRatioMin");
static const V lit4("loadRatioMax");
static const V lit5("noCarDecayTau");
static const V lit6("moduleReadInterval");
static const V lit7("minDt");
static const V lit8("maxDt");
static const V lit9("debugStoreInterval");
static const V lit10("FL");
static const V lit11("FR");
static const V lit12("RL");
static const V lit13("RR");
static const V lit14("alive");
static const V lit15("updateCount");
static const V lit16("status");
static const V lit17("INIT");
static const V lit18("wheelsValid");
static const V lit19("speedKmh");
static const V lit20("yawRate");
static const V lit21("steer");
static const V lit22("gas");
static const V lit23("brake");
static const V lit24("clutch");
static const V lit25("handbrake");
static const V lit26("gear");
static const V lit27("rpm");
static const V lit28("load");
static const V lit29("integratedLoad");
static const V lit30("dltLoad");
static const V lit31("loadRatio");
static const V lit32("slipRatio");
static const V lit33("slipAngle");
static const V lit34("omega");
static const V lit35("forceLat");
static const V lit36("forceLong");
static const V lit37("forceRoad");
static const V lit38("contactQuality");
static const V lit39("contactTrust");
static const V lit40("contactLoss");
static const V lit41("suspForce");
static const V lit42("suspScale");
static const V lit43("damperForce");
static const V lit44("damperVelocity");
static const V lit45("brakeLock");
static const V lit46("brakeTemp");
static const V lit47("loadPathWork");
static const V lit48("loadPathEfficiency");
static const V lit49("loadPathLoss");
static const V lit50("diffLock");
static const V lit51("diffDiff");
static const V lit52("diffHeat");
static const V lit53("diffMode");
static const V lit54("NONE");
static const V lit55("lsdLock");
static const V lit56("lsdDiff");
static const V lit57("lsdHeat");
static const V lit58("lsdTarget");
static const V lit59("lsdInputTorqueNm");
static const V lit60("lsdLockTorqueNm");
static const V lit61("diffPower");
static const V lit62("diffCoast");
static const V lit63("diffPreload");
static const V lit64("diffForceL");
static const V lit65("diffForceR");
static const V lit66("driveTorque");
static const V lit67("driveTorqueNm");
static const V lit68("driveTransmittedTorque");
static const V lit69("diffInputTorqueNm");
static const V lit70("shaftTwist");
static const V lit71("shaftVelocity");
static const V lit72("driveLash");
static const V lit73("shiftShock");
static const V lit74("windup");
static const V lit75("windupEnergy");
static const V lit76("windupRelease");
static const V lit77("softTorque");
static const V lit78("rearPush");
static const V lit79("driveYawHint");
static const V lit80("bodyRigidity");
static const V lit81("chassisEnergy");
static const V lit82("chassisFlex");
static const V lit83("damageTotal");
static const V lit84("conditionTotal");
static const V lit85("virtualYaw");
static const V lit86("virtualPitch");
static const V lit87("virtualRoll");
static const V lit88("weightFront");
static const V lit89("weightRear");
static const V lit90("weightLeft");
static const V lit91("weightRight");
static const V lit92("loadFront");
static const V lit93("loadRear");
static const V lit94("loadLeft");
static const V lit95("loadRight");
static const V lit96("frontAxisAnchor");
static const V lit97("frontAxisAuthority");
static const V lit98("frontAxisYawResist");
static const V lit99("frontAxisSteerWeight");
static const V lit100("frontAxisSlipDamp");
static const V lit101("loadPathAvgWork");
static const V lit102("loadPathAvgEfficiency");
static const V lit103("loadPathAvgIntegrity");
static const V lit104("loadPathAvgLoss");
static const V lit105("loadPathDominant");
static const V lit106("UNKNOWN");
static const V lit107("preserveAvg");
static const V lit108("links");
static const V lit109("car");
static const V lit110("wheels");
static const V lit111("loadTransfer");
static const V lit112("tireForce");
static const V lit113("contact");
static const V lit114("suspension");
static const V lit115("damper");
static const V lit116("body");
static const V lit117("chassis");
static const V lit118("damage");
static const V lit119("diff");
static const V lit120("drivetrain");
static const V lit121("massBalance");
static const V lit122("loadPath");
static const V lit123("debugStoreTimer");
static const V lit124("debugStoreNow");
static const V lit125("state");
static const V lit126("debug");
static const V lit127("huge");
static const V lit128("safeField");
static const V lit129("safeLoadRaw");
static const V lit130("");
static const V lit131("safeStore");
static const V lit132("getCar");
static const V lit133("length");
static const V lit134("function");
static const V lit135("number");
static const V lit136("x");
static const V lit137("y");
static const V lit138("z");
static const V lit139("sqrt");
static const V lit140("velocity");
static const V lit141("localVelocity");
static const V lit142("localAngularVelocity");
static const V lit143("ngp_yaw_rate");
static const V lit144("loadK");
static const V lit145("NO CAR");
static const V lit146("floor");
static const V lit147("slip");
static const V lit148("angularSpeed");
static const V lit149("NO WHEELS");
static const V lit150("RUNNING");
static const V lit151("ngp_dlt_load_");
static const V lit152("ngp_delta_load_");
static const V lit153("ngp_wheel_load_");
static const V lit154("ngp_load_wheel_");
static const V lit155("ngp_tire_load_input_");
static const V lit156("ngp_susp_load_input_");
static const V lit157("ngp_load_path_load_");
static const V lit158("max");
static const V lit159("ngp_tire_force_lat_");
static const V lit160("ngp_tf_lat_");
static const V lit161("ngp_lat_");
static const V lit162("ngp_tire_lat_");
static const V lit163("ngp_tire_force_long_");
static const V lit164("ngp_tf_long_");
static const V lit165("ngp_long_");
static const V lit166("ngp_tire_long_");
static const V lit167("ngp_cp_lat_");
static const V lit168("ngp_cp_long_");
static const V lit169("ngp_tire_force_road_input_");
static const V lit170("ngp_tf_road_input_");
static const V lit171("ngp_damper_tire_road_input_");
static const V lit172("ngp_contact_quality_");
static const V lit173("ngp_tire_contact_quality_");
static const V lit174("ngp_tcr_quality_");
static const V lit175("ngp_tc_contact_");
static const V lit176("ngp_contact_trust_");
static const V lit177("ngp_tire_contact_trust_");
static const V lit178("ngp_contact_loss_");
static const V lit179("ngp_tire_contact_loss_");
static const V lit180("ngp_tcr_contact_loss_");
static const V lit181("ngp_susp_integrated_force_");
static const V lit182("ngp_susp_int_force_");
static const V lit183("ngp_susp_");
static const V lit184("ngp_susp_integrated_scale_");
static const V lit185("ngp_susp_int_scale_");
static const V lit186("ngp_damper_force_");
static const V lit187("ngp_damper_");
static const V lit188("ngp_damper_velocity_");
static const V lit189("ngp_damper_hyst_velocity_");
static const V lit190("ngp_brake_lock_");
static const V lit191("ngp_brake_temp_");
static const V lit192("ngp_brake_disc_temp_");
static const V lit193("ngp_load_path_work_");
static const V lit194("ngp_lp_work_");
static const V lit195("ngp_load_path_efficiency_");
static const V lit196("ngp_lp_eff_");
static const V lit197("ngp_load_path_loss_");
static const V lit198("ngp_lp_loss_");
static const V lit199("ngp_body_rigidity");
static const V lit200("ngp_hub_body_rigidity");
static const V lit201("ngp_chassis_energy");
static const V lit202("ngp_chassis_body_energy");
static const V lit203("ngp_chassis_flex_energy");
static const V lit204("ngp_flex_energy");
static const V lit205("ngp_damage_total");
static const V lit206("ngp_damage_chassis");
static const V lit207("ngp_damage_state_total");
static const V lit208("ngp_vehicle_condition_total");
static const V lit209("ngp_condition_total");
static const V lit210("ngp_virtual_yaw");
static const V lit211("ngp_virtual_inertia_yaw");
static const V lit212("ngp_virtual_pitch");
static const V lit213("ngp_virtual_roll");
static const V lit214("ngp_weight_front_bias");
static const V lit215("ngp_front_bias");
static const V lit216("ngp_load_front");
static const V lit217("ngp_weight_rear_bias");
static const V lit218("ngp_rear_bias");
static const V lit219("ngp_load_rear");
static const V lit220("ngp_weight_left_bias");
static const V lit221("ngp_left_bias");
static const V lit222("ngp_load_left");
static const V lit223("ngp_weight_right_bias");
static const V lit224("ngp_right_bias");
static const V lit225("ngp_load_right");
static const V lit226("ngp_load_abs_front");
static const V lit227("ngp_load_abs_rear");
static const V lit228("ngp_load_abs_left");
static const V lit229("ngp_load_abs_right");
static const V lit230("ngp_lsd_lock");
static const V lit231("ngp_diff_lock");
static const V lit232("ngp_lsd_diff");
static const V lit233("ngp_diff_diff");
static const V lit234("ngp_lsd_heat");
static const V lit235("ngp_diff_heat");
static const V lit236("ngp_lsd_mode");
static const V lit237("ngp_diff_mode");
static const V lit238("ngp_lsd_target");
static const V lit239("ngp_lsd_input_torque_nm");
static const V lit240("ngp_diff_input_torque_nm");
static const V lit241("ngp_lsd_lock_torque_nm");
static const V lit242("ngp_lsd_lock_torque");
static const V lit243("ngp_diff_power");
static const V lit244("ngp_lsd_power_ratio");
static const V lit245("ngp_diff_coast");
static const V lit246("ngp_lsd_coast_ratio");
static const V lit247("ngp_diff_preload");
static const V lit248("ngp_lsd_preload_torque_nm");
static const V lit249("ngp_diff_forceL");
static const V lit250("ngp_diff_forceR");
static const V lit251("ngp_drivetrain_torque");
static const V lit252("ngp_dt_torque");
static const V lit253("ngp_drive_torque");
static const V lit254("ngp_drive_torque_nm");
static const V lit255("ngp_drive_transmitted_torque");
static const V lit256("ngp_shaft_twist");
static const V lit257("ngp_windup_shaft_twist");
static const V lit258("ngp_shaft_velocity");
static const V lit259("ngp_drive_lash");
static const V lit260("ngp_shift_shock");
static const V lit261("ngp_windup_shift_shock");
static const V lit262("ngp_driveline_windup");
static const V lit263("ngp_windup_value");
static const V lit264("ngp_driveline_energy");
static const V lit265("ngp_windup_energy");
static const V lit266("ngp_driveline_release");
static const V lit267("ngp_windup_release");
static const V lit268("ngp_drive_soft_torque");
static const V lit269("ngp_drive_soft_rear_push");
static const V lit270("ngp_driveline_rear_push");
static const V lit271("ngp_drive_soft_yaw");
static const V lit272("ngp_driveline_yaw_hint");
static const V lit273("ngp_front_axis_anchor");
static const V lit274("ngp_mass_front_axis_anchor");
static const V lit275("ngp_front_axis_authority");
static const V lit276("ngp_front_axis_yaw_resist");
static const V lit277("ngp_front_axis_steer_weight");
static const V lit278("ngp_front_axis_slip_damp");
static const V lit279("ngp_load_path_avg_work");
static const V lit280("ngp_lp_avg_work");
static const V lit281("ngp_load_path_avg_efficiency");
static const V lit282("ngp_lp_avg_eff");
static const V lit283("ngp_load_path_avg_integrity");
static const V lit284("ngp_lp_avg_integrity");
static const V lit285("ngp_load_path_avg_loss");
static const V lit286("ngp_lp_avg_loss");
static const V lit287("ngp_load_path_dominant");
static const V lit288("ngp_susp_preserve_force_add_");
static const V lit289("ngp_hub_alive");
static const V lit290("ngp_hub_update_count");
static const V lit291("ngp_hub_status");
static const V lit292("ngp_hub_wheels_valid");
static const V lit293("ngp_hub_speed");
static const V lit294("ngp_hub_yaw");
static const V lit295("ngp_hub_steer");
static const V lit296("ngp_hub_gas");
static const V lit297("ngp_hub_brake");
static const V lit298("ngp_hub_clutch");
static const V lit299("ngp_hub_handbrake");
static const V lit300("ngp_hub_gear");
static const V lit301("ngp_hub_rpm");
static const V lit302("ngp_hub_diff_lock");
static const V lit303("ngp_hub_diff_diff");
static const V lit304("ngp_hub_diff_heat");
static const V lit305("ngp_hub_diff_mode");
static const V lit306("ngp_hub_lsd_lock");
static const V lit307("ngp_hub_lsd_diff");
static const V lit308("ngp_hub_lsd_heat");
static const V lit309("ngp_hub_lsd_target");
static const V lit310("ngp_hub_lsd_input_torque_nm");
static const V lit311("ngp_hub_lsd_lock_torque_nm");
static const V lit312("ngp_hub_diff_power");
static const V lit313("ngp_hub_diff_coast");
static const V lit314("ngp_hub_diff_preload");
static const V lit315("ngp_hub_diff_forceL");
static const V lit316("ngp_hub_diff_forceR");
static const V lit317("ngp_hub_drive_torque");
static const V lit318("ngp_hub_drive_torque_nm");
static const V lit319("ngp_hub_drive_transmitted_torque");
static const V lit320("ngp_hub_diff_input_torque_nm");
static const V lit321("ngp_hub_shaft_twist");
static const V lit322("ngp_hub_shaft_velocity");
static const V lit323("ngp_hub_drive_lash");
static const V lit324("ngp_hub_shift_shock");
static const V lit325("ngp_hub_windup");
static const V lit326("ngp_hub_windup_energy");
static const V lit327("ngp_hub_windup_release");
static const V lit328("ngp_hub_soft_torque");
static const V lit329("ngp_hub_rear_push");
static const V lit330("ngp_hub_drive_yaw_hint");
static const V lit331("ngp_hub_chassis_energy");
static const V lit332("ngp_hub_chassis_flex");
static const V lit333("ngp_hub_damage_total");
static const V lit334("ngp_hub_condition_total");
static const V lit335("ngp_hub_virtual_yaw");
static const V lit336("ngp_hub_virtual_pitch");
static const V lit337("ngp_hub_virtual_roll");
static const V lit338("ngp_hub_weight_front");
static const V lit339("ngp_hub_weight_rear");
static const V lit340("ngp_hub_weight_left");
static const V lit341("ngp_hub_weight_right");
static const V lit342("ngp_hub_load_front");
static const V lit343("ngp_hub_load_rear");
static const V lit344("ngp_hub_load_left");
static const V lit345("ngp_hub_load_right");
static const V lit346("ngp_hub_front_axis_anchor");
static const V lit347("ngp_hub_front_axis_authority");
static const V lit348("ngp_hub_front_axis_yaw_resist");
static const V lit349("ngp_hub_front_axis_steer_weight");
static const V lit350("ngp_hub_front_axis_slip_damp");
static const V lit351("ngp_hub_load_path_avg_work");
static const V lit352("ngp_hub_load_path_avg_efficiency");
static const V lit353("ngp_hub_load_path_avg_integrity");
static const V lit354("ngp_hub_load_path_avg_loss");
static const V lit355("ngp_hub_load_path_dominant");
static const V lit356("ngp_hub_preserve_avg");
static const V lit357("ngp_hub_load_");
static const V lit358("ngp_hub_wheel_load_");
static const V lit359("ngp_hub_dlt_");
static const V lit360("ngp_hub_ratio_");
static const V lit361("ngp_hub_slipR_");
static const V lit362("ngp_hub_slipA_");
static const V lit363("ngp_hub_omega_");
static const V lit364("ngp_hub_force_lat_");
static const V lit365("ngp_hub_force_long_");
static const V lit366("ngp_hub_force_road_");
static const V lit367("ngp_hub_contact_quality_");
static const V lit368("ngp_hub_contact_trust_");
static const V lit369("ngp_hub_contact_loss_");
static const V lit370("ngp_hub_susp_force_");
static const V lit371("ngp_hub_susp_scale_");
static const V lit372("ngp_hub_damper_force_");
static const V lit373("ngp_hub_damper_velocity_");
static const V lit374("ngp_hub_brake_lock_");
static const V lit375("ngp_hub_brake_temp_");
static const V lit376("ngp_hub_load_path_work_");
static const V lit377("ngp_hub_load_path_efficiency_");
static const V lit378("ngp_hub_load_path_loss_");
static const V lit379("ngp_hub_link_car");
static const V lit380("ngp_hub_link_wheels");
static const V lit381("ngp_hub_link_load_transfer");
static const V lit382("ngp_hub_link_tire_force");
static const V lit383("ngp_hub_link_contact");
static const V lit384("ngp_hub_link_suspension");
static const V lit385("ngp_hub_link_damper");
static const V lit386("ngp_hub_link_brake");
static const V lit387("ngp_hub_link_body");
static const V lit388("ngp_hub_link_chassis");
static const V lit389("ngp_hub_link_damage");
static const V lit390("ngp_hub_link_diff");
static const V lit391("ngp_hub_link_drivetrain");
static const V lit392("ngp_hub_link_windup");
static const V lit393("ngp_hub_link_mass_balance");
static const V lit394("ngp_hub_link_load_path");
static const V lit395("init");
static const V lit396("update");
static const V lit397("getState");
static const V lit398("getLoadRatio");
static const V lit399("getWheelLoad");
static const V lit400("getRawLoad");
static const V lit401("getDeltaLoad");
static const V lit402("getForceLat");
static const V lit403("getForceLong");
static const V lit404("getDiffLock");
static const V lit405("getDriveTorque");
static const V lit406("getFrontAxisAnchor");
static const V lit407("debugStr");
static const V lit408("format");
static const V lit409("%s Hub / Load %.0f -> %.0f / dLT %+.0f / Ratio %.3f\n");
static const V lit410("SlipR %.3f SlipA %.3f Omega %.2f / CQ %.2f Trust %.2f\n");
static const V lit411("Force %.1f %.1f / Susp %.0f Damper %.0f / Brake %.2f");
static const V lit412("Status %s / Count %.0f / Alive %.0f\n");
static const V lit413("Speed %.1f km/h / Yaw %.5f / Wheels %s\n");
static const V lit414("Diff Lock %.1f%% / Diff %.3f / Heat %.1f / Mode %s\n");
static const V lit415("Drive %.3f / Tin %.0fNm / Shaft %.3f / Windup %.3f\n");
static const V lit416("Load %.0f %.0f %.0f %.0f\n");
static const V lit417("WheelLoad %.0f %.0f %.0f %.0f\n");
static const V lit418("Ratio %.3f %.3f %.3f %.3f\n");
static const V lit419("FrontAxis %.3f Auth %.3f / LoadPath %.3f %s\n");
static const V lit420("Links Car:%s LT:%s TF:%s CQ:%s Susp:%s Diff:%s DT:%s Wind:%s LP:%s");
static const V lit421("OK");
static const V lit422("NIL");
static const V lit423("drawUI");
static const V lit424("separator");
static const V lit425("text");
static const V lit426("=== ACNextGen Physics Hub V1.1.5 ===");
static const V lit427("Status : %s / Alive %.0f / Count %.0f");
static const V lit428("Speed %.1f km/h | Yaw %.5f | Wheels %s");
static const V lit429("Diff Lock %.1f%% | Diff %.3f | Heat %.1f | Mode %s");
static const V lit430("Drive %.3f | Tin %.0fNm | Shaft %.3f | Windup %.3f");
static const V lit431("FrontAxis %.3f / Auth %.3f | LoadPath %.3f %s");
static const V lit432("%s load %.0f -> %.0f dLT %+.0f ratio %.3f slipR %.3f slipA %.3f");
static const V lit433("   force %.1f / %.1f omega %.2f CQ %.2f Trust %.2f Susp %.0f");
V load_physics(std::shared_ptr<Env> e){auto run=[&]()->Args{e->resize_slots(32);{V t1=first(call(e->get("require"),Args{lit0}));e->slot(0,0)=std::move(t1);}
{V t2=([&](){V z=table();return z;})();e->slot(0,1)=std::move(t2);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit1)};V t3=([&](){V z=table();set(z,lit2,V(3500.0));set(z,lit3,V(0.3));set(z,lit4,V(2.7));set(z,lit5,V(0.18));set(z,lit6,V(0.0));set(z,lit7,V(0.0001));set(z,lit8,V(0.05));set(z,lit9,V(0.25));return z;})();refs[0].put(std::move(t3));}
{V t4=([&](){V z=table();set(z,V(0.0),lit10);set(z,V(1.0),lit11);set(z,V(2.0),lit12);set(z,V(3.0),lit13);return z;})();e->slot(0,2)=std::move(t4);}
{V t5=([&](){V z=table();set(z,lit14,V(0.0));set(z,lit15,V(0.0));set(z,lit16,lit17);set(z,lit18,V(false));set(z,lit19,V(0.0));set(z,lit20,V(0.0));set(z,lit21,V(0.0));set(z,lit22,V(0.0));set(z,lit23,V(0.0));set(z,lit24,V(1.0));set(z,lit25,V(0.0));set(z,lit26,V(0.0));set(z,lit27,V(0.0));set(z,lit28,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit29,([&](){V z=table();set(z,V(0.0),V(3500.0));set(z,V(1.0),V(3500.0));set(z,V(2.0),V(3500.0));set(z,V(3.0),V(3500.0));return z;})());set(z,lit30,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit31,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit32,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit33,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit34,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit35,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit36,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit37,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit38,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit39,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit40,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit41,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit42,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit43,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit44,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit45,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit46,([&](){V z=table();set(z,V(0.0),V(25.0));set(z,V(1.0),V(25.0));set(z,V(2.0),V(25.0));set(z,V(3.0),V(25.0));return z;})());set(z,lit47,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit48,([&](){V z=table();set(z,V(0.0),V(1.0));set(z,V(1.0),V(1.0));set(z,V(2.0),V(1.0));set(z,V(3.0),V(1.0));return z;})());set(z,lit49,([&](){V z=table();set(z,V(0.0),V(0.0));set(z,V(1.0),V(0.0));set(z,V(2.0),V(0.0));set(z,V(3.0),V(0.0));return z;})());set(z,lit50,V(0.0));set(z,lit51,V(0.0));set(z,lit52,V(0.0));set(z,lit53,lit54);set(z,lit55,V(0.0));set(z,lit56,V(0.0));set(z,lit57,V(0.0));set(z,lit58,V(0.0));set(z,lit59,V(0.0));set(z,lit60,V(0.0));set(z,lit61,V(0.0));set(z,lit62,V(0.0));set(z,lit63,V(0.0));set(z,lit64,V(0.0));set(z,lit65,V(0.0));set(z,lit66,V(0.0));set(z,lit67,V(0.0));set(z,lit68,V(0.0));set(z,lit69,V(0.0));set(z,lit70,V(0.0));set(z,lit71,V(0.0));set(z,lit72,V(0.0));set(z,lit73,V(0.0));set(z,lit74,V(0.0));set(z,lit75,V(0.0));set(z,lit76,V(0.0));set(z,lit77,V(0.0));set(z,lit78,V(0.0));set(z,lit79,V(0.0));set(z,lit80,V(1.0));set(z,lit81,V(0.0));set(z,lit82,V(0.0));set(z,lit83,V(0.0));set(z,lit84,V(0.0));set(z,lit85,V(0.0));set(z,lit86,V(0.0));set(z,lit87,V(0.0));set(z,lit88,V(0.5));set(z,lit89,V(0.5));set(z,lit90,V(0.5));set(z,lit91,V(0.5));set(z,lit92,V(0.5));set(z,lit93,V(0.5));set(z,lit94,V(0.5));set(z,lit95,V(0.5));set(z,lit96,V(0.0));set(z,lit97,V(0.0));set(z,lit98,V(0.0));set(z,lit99,V(0.0));set(z,lit100,V(0.0));set(z,lit101,V(0.0));set(z,lit102,V(1.0));set(z,lit103,V(1.0));set(z,lit104,V(0.0));set(z,lit105,lit106);set(z,lit107,V(0.0));set(z,lit108,([&](){V z=table();set(z,lit109,V(false));set(z,lit110,V(false));set(z,lit111,V(false));set(z,lit112,V(false));set(z,lit113,V(false));set(z,lit114,V(false));set(z,lit115,V(false));set(z,lit23,V(false));set(z,lit116,V(false));set(z,lit117,V(false));set(z,lit118,V(false));set(z,lit119,V(false));set(z,lit120,V(false));set(z,lit74,V(false));set(z,lit121,V(false));set(z,lit122,V(false));return z;})());set(z,lit123,V(999.0));set(z,lit124,V(true));return z;})();e->slot(0,3)=std::move(t5);}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit125)};V t6=e->slot(0,3);refs[0].put(std::move(t6));}
{std::array<Ref,1> refs{Ref(e->slot(0,1),lit126)};V t7=e->slot(0,3);refs[0].put(std::move(t7));}
e->slot(0,4)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t8=first(call(e->get("tonumber"),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t8);}
if(truth(([&](){V t9=([&](){V t10=([&](){V t11=eq(e->slot(0,2),V());return !truth(t11)?ne(e->slot(0,2),e->slot(0,2)):t11;})();return !truth(t10)?eq(e->slot(0,2),get(e->get("math"),lit127)):t10;})();return !truth(t9)?eq(e->slot(0,2),V(-num(get(e->get("math"),lit127)))):t9;})())){return Args{([&](){V t12=e->slot(0,1);return !truth(t12)?V(0.0):t12;})()};
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
e->slot(0,6)=native([up=e](const Args& a)->Args{Env storage(up,true,5);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);e->slot(0,3)=arg(a,3);{std::array<Ref,1> refs{Ref(e,0,0)};V t14=first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)}));refs[0].put(std::move(t14));}
{std::array<Ref,1> refs{Ref(e,0,1)};V t15=first(call(e->slot(1,4),Args{e->slot(0,1),V(0.0)}));refs[0].put(std::move(t15));}
{std::array<Ref,1> refs{Ref(e,0,2)};V t16=first(call(e->slot(1,4),Args{e->slot(0,2),V(0.0)}));refs[0].put(std::move(t16));}
{std::array<Ref,1> refs{Ref(e,0,3)};V t17=first(call(e->slot(1,4),Args{e->slot(0,3),V(0.0)}));refs[0].put(std::move(t17));}
if(truth(le(e->slot(0,2),V(1e-05)))){return Args{e->slot(0,1)};
}
{V t18=first(call(e->slot(1,5),Args{divv(e->slot(0,3),add(e->slot(0,2),e->slot(0,3))),V(0.0),V(1.0)}));e->slot(0,4)=std::move(t18);}
return Args{add(e->slot(0,0),mul(sub(e->slot(0,1),e->slot(0,0)),e->slot(0,4)))};
return Args{};});
{V t19=get(e->slot(0,0),lit128);e->slot(0,7)=std::move(t19);}
{V t20=get(e->slot(0,0),lit129);e->slot(0,8)=std::move(t20);}
e->slot(0,9)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t21=first(call(e->slot(1,8),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t21);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t22=e->slot(0,1);return !truth(t22)?V(0.0):t22;})()};
}
return call(e->slot(1,4),Args{e->slot(0,2),([&](){V t23=e->slot(0,1);return !truth(t23)?V(0.0):t23;})()});
return Args{};});
e->slot(0,10)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t24=first(call(e->slot(1,8),Args{e->slot(0,0)}));e->slot(0,2)=std::move(t24);}
if(truth(eq(e->slot(0,2),V()))){return Args{([&](){V t25=e->slot(0,1);return !truth(t25)?lit130:t25;})()};
}
return call(e->get("tostring"),Args{e->slot(0,2)});
return Args{};});
e->slot(0,11)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t26=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t26);}
{double t27=num(V(1.0)),t28=num(length(e->slot(0,1))),t29=num(V(1.0));for(double t30=t27;(t29>0?t30<=t28:t30>=t28);t30+=t29){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t30);{V t31=first(call(e->slot(2,8),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t31);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->slot(2,4),Args{e->slot(0,1),([&](){V t32=e->slot(1,0);return !truth(t32)?V(0.0):t32;})()})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{([&](){V t33=e->slot(0,0);return !truth(t33)?V(0.0):t33;})(),V()};
return Args{};});
e->slot(0,12)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->extra=tail(a,1);{V t34=([&](){V z=table();append(z,e->dots());return z;})();e->slot(0,1)=std::move(t34);}
{double t35=num(V(1.0)),t36=num(length(e->slot(0,1))),t37=num(V(1.0));for(double t38=t35;(t37>0?t38<=t36:t38>=t36);t38+=t37){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t38);{V t39=first(call(e->slot(2,8),Args{get(e->slot(1,1),e->slot(0,0))}));e->slot(0,1)=std::move(t39);}
if(truth(ne(e->slot(0,1),V()))){return Args{first(call(e->get("tostring"),Args{e->slot(0,1)})),get(e->slot(1,1),e->slot(0,0))};
}
}}
return Args{first(call(e->get("tostring"),Args{([&](){V t40=e->slot(0,0);return !truth(t40)?lit130:t40;})()})),V()};
return Args{};});
{V t41=get(e->slot(0,0),lit131);e->slot(0,13)=std::move(t41);}
e->slot(0,14)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,2);if(truth(([&](){V t42=V(!truth(e->get("ac")));return !truth(t42)?V(!truth(get(e->get("ac"),lit132))):t42;})())){return Args{V()};
}
{Args t43=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return call(get(e->get("ac"),lit132),Args{V(0.0)});
return Args{};})});e->slot(0,0)=arg(t43,0);e->slot(0,1)=arg(t43,1);}
if(truth(V(!truth(e->slot(0,0))))){return Args{V()};
}
return Args{e->slot(0,1)};
return Args{};});
e->slot(0,15)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,5);e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);{V t44=first(call(e->slot(1,7),Args{e->slot(0,0),lit110,V()}));e->slot(0,2)=std::move(t44);}
if(truth(V(!truth(e->slot(0,2))))){return Args{V()};
}
{Args t45=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t46=get(e->slot(1,2),e->slot(1,1));return !truth(t46)?get(e->slot(1,2),add(e->slot(1,1),V(1.0))):t46;})()};
return Args{};})});e->slot(0,3)=arg(t45,0);e->slot(0,4)=arg(t45,1);}
if(truth(e->slot(0,3))){return Args{e->slot(0,4)};
}
return Args{V()};
return Args{};});
e->slot(0,16)=native([up=e](const Args& a)->Args{auto e=std::make_shared<Env>(up,true,3);e->slot(0,0)=arg(a,0);if(truth(V(!truth(e->slot(0,0))))){return Args{V(0.0)};
}
{Args t47=call(e->get("pcall"),Args{native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit133)})),lit134))){return method(e->slot(1,0),"length",Args{});
}
if(truth(eq(first(call(e->get("type"),Args{get(e->slot(1,0),lit133)})),lit135))){return Args{get(e->slot(1,0),lit133)};
}
{V t48=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit136),V(0.0)}));e->slot(0,0)=std::move(t48);}
{V t49=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit137),V(0.0)}));e->slot(0,1)=std::move(t49);}
{V t50=first(call(e->slot(2,4),Args{get(e->slot(1,0),lit138),V(0.0)}));e->slot(0,2)=std::move(t50);}
return call(get(e->get("math"),lit139),Args{add(add(mul(e->slot(0,0),e->slot(0,0)),mul(e->slot(0,1),e->slot(0,1))),mul(e->slot(0,2),e->slot(0,2)))});
return Args{};})});e->slot(0,1)=arg(t47,0);e->slot(0,2)=arg(t47,1);}
if(truth(e->slot(0,1))){return call(e->slot(1,4),Args{e->slot(0,2),V(0.0)});
}
return Args{V(0.0)};
return Args{};});
e->slot(0,17)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit123)};V t51=add(([&](){V t52=get(e->slot(1,3),lit123);return !truth(t52)?V(0.0):t52;})(),([&](){V t53=e->slot(0,0);return !truth(t53)?V(0.0):t53;})());refs[0].put(std::move(t51));}
if(truth(ge(get(e->slot(1,3),lit123),get(get(e->slot(1,1),lit1),lit9)))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit123)};V t54=V(0.0);refs[0].put(std::move(t54));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit124)};V t55=V(true);refs[0].put(std::move(t55));}
}else{{std::array<Ref,1> refs{Ref(e->slot(1,3),lit124)};V t56=V(false);refs[0].put(std::move(t56));}
}
return Args{};});
e->slot(0,18)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{Args t57=call(e->get("pairs"),Args{get(e->slot(1,3),lit108)});V t58=arg(t57,2);while(true){Args t59=call(arg(t57,0),Args{arg(t57,1),t58});t58=arg(t59,0);if(isnil(t58))break;auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=arg(t59,0);e->slot(0,1)=arg(t59,1);{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit108),e->slot(0,0))};V t60=V(false);refs[0].put(std::move(t60));}
}}
return Args{};});
e->slot(0,19)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(e->slot(0,1))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit108),e->slot(0,0))};V t61=V(true);refs[0].put(std::move(t61));}
}
return Args{};});
e->slot(0,20)=native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);{V t62=first(call(e->slot(1,7),Args{e->slot(0,0),lit19,V()}));e->slot(0,1)=std::move(t62);}
if(truth(ne(e->slot(0,1),V()))){return call(e->slot(1,4),Args{e->slot(0,1),V(0.0)});
}
{V t63=V();e->slot(0,2)=std::move(t63);}
if(truth(ne(e->slot(0,2),V()))){return call(e->slot(1,4),Args{e->slot(0,2),V(0.0)});
}
{V t64=([&](){V t65=first(call(e->slot(1,7),Args{e->slot(0,0),lit140,V()}));return !truth(t65)?first(call(e->slot(1,7),Args{e->slot(0,0),lit141,V()})):t65;})();e->slot(0,3)=std::move(t64);}
return Args{mul(first(call(e->slot(1,16),Args{e->slot(0,3)})),V(3.6))};
return Args{};});
e->slot(0,21)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t66=first(call(e->slot(1,7),Args{e->slot(0,0),lit142,V()}));e->slot(0,1)=std::move(t66);}
if(truth(e->slot(0,1))){if(truth(ne(first(call(e->slot(1,7),Args{e->slot(0,1),lit137,V()})),V()))){return call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,1),lit137,V(0.0)})),V(0.0)});
}
if(truth(ne(first(call(e->slot(1,7),Args{e->slot(0,1),lit138,V()})),V()))){return call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,1),lit138,V(0.0)})),V(0.0)});
}
}
return call(e->slot(1,9),Args{lit143,V(0.0)});
return Args{};});
e->slot(0,22)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t67=([&](){V t68=([&](){V t69=([&](){V t70=([&](){V t71=first(call(e->slot(1,7),Args{e->slot(0,0),lit28,V()}));return !truth(t71)?first(call(e->slot(1,7),Args{e->slot(0,0),lit144,V()})):t71;})();return !truth(t70)?V():t70;})();return !truth(t69)?V():t69;})();return !truth(t68)?V():t68;})();e->slot(0,1)=std::move(t67);}
return call(e->slot(1,4),Args{e->slot(0,1),V()});
return Args{};});
e->slot(0,23)=native([up=e](const Args& a)->Args{Env storage(up,true,2);auto e=&storage;e->slot(0,0)=arg(a,0);{V t72=get(get(e->slot(1,1),lit1),lit5);e->slot(0,1)=std::move(t72);}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit19)};V t73=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit19),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t73));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit20)};V t74=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit20),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t74));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit21)};V t75=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit21),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t75));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit22)};V t76=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit22),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t76));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit23)};V t77=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit23),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t77));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit25)};V t78=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit25),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t78));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit24)};V t79=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit24),V(1.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t79));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit27)};V t80=first(call(e->slot(1,6),Args{get(e->slot(1,3),lit27),V(0.0),e->slot(0,1),e->slot(0,0)}));refs[0].put(std::move(t80));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit26)};V t81=V(0.0);refs[0].put(std::move(t81));}
{double t82=num(V(0.0)),t83=num(V(3.0)),t84=num(V(1.0));for(double t85=t82;(t84>0?t85<=t83:t85>=t83);t85+=t84){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t85);{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit28),e->slot(0,0))};V t86=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit28),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t86));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit32),e->slot(0,0))};V t87=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit32),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t87));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit33),e->slot(0,0))};V t88=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit33),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t88));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit34),e->slot(0,0))};V t89=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit34),e->slot(0,0)),V(0.0),e->slot(1,1),e->slot(1,0)}));refs[0].put(std::move(t89));}
}}
return Args{};});
e->slot(0,24)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);if(truth(V(!truth(e->slot(0,0))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit16)};V t90=lit145;refs[0].put(std::move(t90));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit18)};V t91=V(false);refs[0].put(std::move(t91));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit108),lit109)};V t92=V(false);refs[0].put(std::move(t92));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit108),lit110)};V t93=V(false);refs[0].put(std::move(t93));}
call(e->slot(1,23),Args{e->slot(0,1)});
return Args{V(false)};
}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit108),lit109)};V t94=V(true);refs[0].put(std::move(t94));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit19)};V t95=first(call(e->slot(1,20),Args{e->slot(0,0)}));refs[0].put(std::move(t95));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit20)};V t96=first(call(e->slot(1,21),Args{e->slot(0,0)}));refs[0].put(std::move(t96));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit21)};V t97=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit21,V(0.0)})),V(0.0)})),V(-num(V(1.0))),V(1.0)}));refs[0].put(std::move(t97));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit22)};V t98=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit22,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t98));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit23)};V t99=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit23,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t99));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit24)};V t100=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit24,V(1.0)})),V(1.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t100));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit25)};V t101=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit25,V(0.0)})),V(0.0)})),V(0.0),V(1.0)}));refs[0].put(std::move(t101));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit26)};V t102=first(call(get(e->get("math"),lit146),call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit26,V(0.0)})),V(0.0)})));refs[0].put(std::move(t102));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit27)};V t103=first(call(e->slot(1,4),Args{first(call(e->slot(1,7),Args{e->slot(0,0),lit27,V(0.0)})),V(0.0)}));refs[0].put(std::move(t103));}
{V t104=V(false);e->slot(0,2)=std::move(t104);}
{double t105=num(V(0.0)),t106=num(V(3.0)),t107=num(V(1.0));for(double t108=t105;(t107>0?t108<=t106:t108>=t106);t108+=t107){auto parent=e;Env storage(parent,false,2);auto e=&storage;e->slot(0,0)=V(t108);{V t109=first(call(e->slot(2,15),Args{e->slot(1,0),e->slot(0,0)}));e->slot(0,1)=std::move(t109);}
if(truth(e->slot(0,1))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{std::array<Ref,1> refs{Ref(e,2,2)};V t110=V(true);refs[0].put(std::move(t110));}
{V t111=first(call(e->slot(3,22),Args{e->slot(1,1)}));e->slot(0,0)=std::move(t111);}
if(truth(ne(e->slot(0,0),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(3,3),lit28),e->slot(1,0))};V t112=first(call(e->slot(3,5),Args{e->slot(0,0),V(0.0),V(12000.0)}));refs[0].put(std::move(t112));}
}
{std::array<Ref,1> refs{Ref(get(e->slot(3,3),lit32),e->slot(1,0))};V t113=first(call(e->slot(3,4),Args{first(call(e->slot(3,7),joined(Args{e->slot(1,1),lit32},call(e->slot(3,7),Args{e->slot(1,1),lit147,get(get(e->slot(3,3),lit32),e->slot(1,0))})))),get(get(e->slot(3,3),lit32),e->slot(1,0))}));refs[0].put(std::move(t113));}
{std::array<Ref,1> refs{Ref(get(e->slot(3,3),lit33),e->slot(1,0))};V t114=first(call(e->slot(3,4),Args{first(call(e->slot(3,7),Args{e->slot(1,1),lit33,get(get(e->slot(3,3),lit33),e->slot(1,0))})),get(get(e->slot(3,3),lit33),e->slot(1,0))}));refs[0].put(std::move(t114));}
{std::array<Ref,1> refs{Ref(get(e->slot(3,3),lit34),e->slot(1,0))};V t115=first(call(e->slot(3,4),Args{first(call(e->slot(3,7),Args{e->slot(1,1),lit148,get(get(e->slot(3,3),lit34),e->slot(1,0))})),get(get(e->slot(3,3),lit34),e->slot(1,0))}));refs[0].put(std::move(t115));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit28),e->slot(0,0))};V t116=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit28),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit5),e->slot(1,1)}));refs[0].put(std::move(t116));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit32),e->slot(0,0))};V t117=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit32),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit5),e->slot(1,1)}));refs[0].put(std::move(t117));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit33),e->slot(0,0))};V t118=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit33),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit5),e->slot(1,1)}));refs[0].put(std::move(t118));}
{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit34),e->slot(0,0))};V t119=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit34),e->slot(0,0)),V(0.0),get(get(e->slot(2,1),lit1),lit5),e->slot(1,1)}));refs[0].put(std::move(t119));}
}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit18)};V t120=e->slot(0,2);refs[0].put(std::move(t120));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit108),lit110)};V t121=e->slot(0,2);refs[0].put(std::move(t121));}
if(truth(V(!truth(e->slot(0,2))))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit16)};V t122=lit149;refs[0].put(std::move(t122));}
return Args{V(false)};
}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit16)};V t123=lit150;refs[0].put(std::move(t123));}
return Args{V(true)};
return Args{};});
e->slot(0,25)=native([up=e](const Args& a)->Args{Env storage(up,true,40);auto e=&storage;e->slot(0,0)=arg(a,0);{Args t124=call(e->slot(1,11),Args{V(0.0),concat(lit151,e->slot(0,0)),concat(lit152,e->slot(0,0))});e->slot(0,1)=arg(t124,0);e->slot(0,2)=arg(t124,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit30),e->slot(0,0))};V t125=e->slot(0,1);refs[0].put(std::move(t125));}
call(e->slot(1,19),Args{lit111,ne(e->slot(0,2),V())});
{Args t126=call(e->slot(1,11),Args{get(get(e->slot(1,3),lit28),e->slot(0,0)),concat(lit153,e->slot(0,0)),concat(lit154,e->slot(0,0)),concat(lit155,e->slot(0,0)),concat(lit156,e->slot(0,0)),concat(lit157,e->slot(0,0))});e->slot(0,3)=arg(t126,0);e->slot(0,4)=arg(t126,1);}
if(truth(ne(e->slot(0,4),V()))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit29),e->slot(0,0))};V t127=first(call(e->slot(1,5),Args{e->slot(0,3),V(0.0),V(12000.0)}));refs[0].put(std::move(t127));}
call(e->slot(1,19),Args{lit111,V(true)});
}else{auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t128=get(get(e->slot(2,3),lit28),e->slot(1,0));e->slot(0,0)=std::move(t128);}
if(truth(gt(e->slot(0,0),V(1.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit29),e->slot(1,0))};V t129=first(call(e->slot(2,5),Args{add(e->slot(0,0),e->slot(1,1)),V(0.0),V(12000.0)}));refs[0].put(std::move(t129));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(2,3),lit29),e->slot(1,0))};V t130=first(call(e->slot(2,6),Args{get(get(e->slot(2,3),lit29),e->slot(1,0)),get(get(e->slot(2,1),lit1),lit2),get(get(e->slot(2,1),lit1),lit5),get(get(e->slot(2,1),lit1),lit8)}));refs[0].put(std::move(t130));}
}
}
{V t131=first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,3),lit28),e->slot(0,0)),V(1.0)}));e->slot(0,5)=std::move(t131);}
if(truth(gt(e->slot(0,5),V(50.0)))){{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit31),e->slot(0,0))};V t132=first(call(e->slot(1,5),Args{divv(get(get(e->slot(1,3),lit29),e->slot(0,0)),e->slot(0,5)),get(get(e->slot(1,1),lit1),lit3),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t132));}
}else{{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit31),e->slot(0,0))};V t133=first(call(e->slot(1,5),Args{divv(get(get(e->slot(1,3),lit29),e->slot(0,0)),first(call(get(e->get("math"),lit158),Args{get(get(e->slot(1,1),lit1),lit2),V(1.0)}))),get(get(e->slot(1,1),lit1),lit3),get(get(e->slot(1,1),lit1),lit4)}));refs[0].put(std::move(t133));}
}
{Args t134=call(e->slot(1,11),Args{V(0.0),concat(lit159,e->slot(0,0)),concat(lit160,e->slot(0,0)),concat(lit161,e->slot(0,0)),concat(lit162,e->slot(0,0))});e->slot(0,6)=arg(t134,0);e->slot(0,7)=arg(t134,1);}
{Args t135=call(e->slot(1,11),Args{V(0.0),concat(lit163,e->slot(0,0)),concat(lit164,e->slot(0,0)),concat(lit165,e->slot(0,0)),concat(lit166,e->slot(0,0))});e->slot(0,8)=arg(t135,0);e->slot(0,9)=arg(t135,1);}
{Args t136=call(e->slot(1,11),Args{V(0.0),concat(lit167,e->slot(0,0))});e->slot(0,10)=arg(t136,0);e->slot(0,11)=arg(t136,1);}
{Args t137=call(e->slot(1,11),Args{V(0.0),concat(lit168,e->slot(0,0))});e->slot(0,12)=arg(t137,0);e->slot(0,13)=arg(t137,1);}
{Args t138=call(e->slot(1,11),Args{V(0.0),concat(lit169,e->slot(0,0)),concat(lit170,e->slot(0,0)),concat(lit171,e->slot(0,0))});e->slot(0,14)=arg(t138,0);e->slot(0,15)=arg(t138,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit35),e->slot(0,0))};V t139=add(e->slot(0,6),e->slot(0,10));refs[0].put(std::move(t139));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit36),e->slot(0,0))};V t140=add(e->slot(0,8),e->slot(0,12));refs[0].put(std::move(t140));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit37),e->slot(0,0))};V t141=e->slot(0,14);refs[0].put(std::move(t141));}
call(e->slot(1,19),Args{lit112,([&](){V t142=([&](){V t143=([&](){V t144=([&](){V t145=ne(e->slot(0,7),V());return !truth(t145)?ne(e->slot(0,9),V()):t145;})();return !truth(t144)?ne(e->slot(0,11),V()):t144;})();return !truth(t143)?ne(e->slot(0,13),V()):t143;})();return !truth(t142)?ne(e->slot(0,15),V()):t142;})()});
{Args t146=call(e->slot(1,11),Args{V(1.0),concat(lit172,e->slot(0,0)),concat(lit173,e->slot(0,0)),concat(lit174,e->slot(0,0)),concat(lit175,e->slot(0,0))});e->slot(0,16)=arg(t146,0);e->slot(0,17)=arg(t146,1);}
{Args t147=call(e->slot(1,11),Args{e->slot(0,16),concat(lit176,e->slot(0,0)),concat(lit177,e->slot(0,0))});e->slot(0,18)=arg(t147,0);e->slot(0,19)=arg(t147,1);}
{Args t148=call(e->slot(1,11),Args{sub(V(1.0),first(call(e->slot(1,5),Args{e->slot(0,16),V(0.0),V(1.0)}))),concat(lit178,e->slot(0,0)),concat(lit179,e->slot(0,0)),concat(lit180,e->slot(0,0))});e->slot(0,20)=arg(t148,0);e->slot(0,21)=arg(t148,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit38),e->slot(0,0))};V t149=first(call(e->slot(1,5),Args{e->slot(0,16),V(0.0),V(1.2)}));refs[0].put(std::move(t149));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit39),e->slot(0,0))};V t150=first(call(e->slot(1,5),Args{e->slot(0,18),V(0.0),V(1.2)}));refs[0].put(std::move(t150));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit40),e->slot(0,0))};V t151=first(call(e->slot(1,5),Args{e->slot(0,20),V(0.0),V(1.0)}));refs[0].put(std::move(t151));}
call(e->slot(1,19),Args{lit113,([&](){V t152=([&](){V t153=ne(e->slot(0,17),V());return !truth(t153)?ne(e->slot(0,19),V()):t153;})();return !truth(t152)?ne(e->slot(0,21),V()):t152;})()});
{Args t154=call(e->slot(1,11),Args{V(0.0),concat(lit181,e->slot(0,0)),concat(lit182,e->slot(0,0)),concat(lit183,e->slot(0,0))});e->slot(0,22)=arg(t154,0);e->slot(0,23)=arg(t154,1);}
{Args t155=call(e->slot(1,11),Args{V(1.0),concat(lit184,e->slot(0,0)),concat(lit185,e->slot(0,0))});e->slot(0,24)=arg(t155,0);e->slot(0,25)=arg(t155,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit41),e->slot(0,0))};V t156=e->slot(0,22);refs[0].put(std::move(t156));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit42),e->slot(0,0))};V t157=first(call(e->slot(1,5),Args{e->slot(0,24),V(0.0),V(2.0)}));refs[0].put(std::move(t157));}
call(e->slot(1,19),Args{lit114,([&](){V t158=ne(e->slot(0,23),V());return !truth(t158)?ne(e->slot(0,25),V()):t158;})()});
{Args t159=call(e->slot(1,11),Args{V(0.0),concat(lit186,e->slot(0,0)),concat(lit187,e->slot(0,0))});e->slot(0,26)=arg(t159,0);e->slot(0,27)=arg(t159,1);}
{Args t160=call(e->slot(1,11),Args{V(0.0),concat(lit188,e->slot(0,0)),concat(lit189,e->slot(0,0))});e->slot(0,28)=arg(t160,0);e->slot(0,29)=arg(t160,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit43),e->slot(0,0))};V t161=e->slot(0,26);refs[0].put(std::move(t161));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit44),e->slot(0,0))};V t162=e->slot(0,28);refs[0].put(std::move(t162));}
call(e->slot(1,19),Args{lit115,([&](){V t163=ne(e->slot(0,27),V());return !truth(t163)?ne(e->slot(0,29),V()):t163;})()});
{Args t164=call(e->slot(1,11),Args{V(0.0),concat(lit190,e->slot(0,0))});e->slot(0,30)=arg(t164,0);e->slot(0,31)=arg(t164,1);}
{Args t165=call(e->slot(1,11),Args{V(25.0),concat(lit191,e->slot(0,0)),concat(lit192,e->slot(0,0))});e->slot(0,32)=arg(t165,0);e->slot(0,33)=arg(t165,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit45),e->slot(0,0))};V t166=first(call(e->slot(1,5),Args{e->slot(0,30),V(0.0),V(1.0)}));refs[0].put(std::move(t166));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit46),e->slot(0,0))};V t167=e->slot(0,32);refs[0].put(std::move(t167));}
call(e->slot(1,19),Args{lit23,([&](){V t168=ne(e->slot(0,31),V());return !truth(t168)?ne(e->slot(0,33),V()):t168;})()});
{Args t169=call(e->slot(1,11),Args{V(0.0),concat(lit193,e->slot(0,0)),concat(lit194,e->slot(0,0))});e->slot(0,34)=arg(t169,0);e->slot(0,35)=arg(t169,1);}
{Args t170=call(e->slot(1,11),Args{V(1.0),concat(lit195,e->slot(0,0)),concat(lit196,e->slot(0,0))});e->slot(0,36)=arg(t170,0);e->slot(0,37)=arg(t170,1);}
{Args t171=call(e->slot(1,11),Args{V(0.0),concat(lit197,e->slot(0,0)),concat(lit198,e->slot(0,0))});e->slot(0,38)=arg(t171,0);e->slot(0,39)=arg(t171,1);}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit47),e->slot(0,0))};V t172=first(call(e->slot(1,5),Args{e->slot(0,34),V(0.0),V(1.5)}));refs[0].put(std::move(t172));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit48),e->slot(0,0))};V t173=first(call(e->slot(1,5),Args{e->slot(0,36),V(0.0),V(1.2)}));refs[0].put(std::move(t173));}
{std::array<Ref,1> refs{Ref(get(e->slot(1,3),lit49),e->slot(0,0))};V t174=first(call(e->slot(1,5),Args{e->slot(0,38),V(0.0),V(1.0)}));refs[0].put(std::move(t174));}
call(e->slot(1,19),Args{lit122,([&](){V t175=([&](){V t176=ne(e->slot(0,35),V());return !truth(t176)?ne(e->slot(0,37),V()):t176;})();return !truth(t175)?ne(e->slot(0,39),V()):t175;})()});
return Args{};});
e->slot(0,26)=native([up=e](const Args& a)->Args{Env storage(up,true,3);auto e=&storage;{Args t177=Args{};e->slot(0,0)=arg(t177,0);e->slot(0,1)=arg(t177,1);}
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit80),Ref(e,0,1)};Args t178=call(e->slot(1,11),Args{V(1.0),lit199,lit200});refs[0].put(arg(t178,0));refs[1].put(arg(t178,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit80)};V t179=first(call(e->slot(1,5),Args{get(e->slot(1,3),lit80),V(0.0),V(2.0)}));refs[0].put(std::move(t179));}
call(e->slot(1,19),Args{lit116,ne(e->slot(0,1),V())});
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit81),Ref(e,0,1)};Args t180=call(e->slot(1,11),Args{V(0.0),lit201,lit202});refs[0].put(arg(t180,0));refs[1].put(arg(t180,1));}
call(e->slot(1,19),Args{lit117,ne(e->slot(0,1),V())});
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit82),Ref(e,0,1)};Args t181=call(e->slot(1,11),Args{V(0.0),lit203,lit204});refs[0].put(arg(t181,0));refs[1].put(arg(t181,1));}
call(e->slot(1,19),Args{lit117,ne(e->slot(0,1),V())});
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit83),Ref(e,0,1)};Args t182=call(e->slot(1,11),Args{V(0.0),lit205,lit206,lit207,lit208});refs[0].put(arg(t182,0));refs[1].put(arg(t182,1));}
call(e->slot(1,19),Args{lit118,ne(e->slot(0,1),V())});
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit84),Ref(e,0,1)};Args t183=call(e->slot(1,11),Args{V(0.0),lit209,lit208});refs[0].put(arg(t183,0));refs[1].put(arg(t183,1));}
call(e->slot(1,19),Args{lit118,ne(e->slot(0,1),V())});
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit85),Ref(e,0,1)};Args t184=call(e->slot(1,11),Args{V(0.0),lit210,lit211});refs[0].put(arg(t184,0));refs[1].put(arg(t184,1));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit86)};V t185=first(call(e->slot(1,9),Args{lit212,V(0.0)}));refs[0].put(std::move(t185));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit87)};V t186=first(call(e->slot(1,9),Args{lit213,V(0.0)}));refs[0].put(std::move(t186));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit88)};V t187=first(call(e->slot(1,9),joined(Args{lit214},call(e->slot(1,9),joined(Args{lit215},call(e->slot(1,9),Args{lit216,V(0.5)}))))));refs[0].put(std::move(t187));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit89)};V t188=first(call(e->slot(1,9),joined(Args{lit217},call(e->slot(1,9),joined(Args{lit218},call(e->slot(1,9),Args{lit219,V(0.5)}))))));refs[0].put(std::move(t188));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit90)};V t189=first(call(e->slot(1,9),joined(Args{lit220},call(e->slot(1,9),joined(Args{lit221},call(e->slot(1,9),Args{lit222,V(0.5)}))))));refs[0].put(std::move(t189));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit91)};V t190=first(call(e->slot(1,9),joined(Args{lit223},call(e->slot(1,9),joined(Args{lit224},call(e->slot(1,9),Args{lit225,V(0.5)}))))));refs[0].put(std::move(t190));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit92)};V t191=first(call(e->slot(1,9),joined(Args{lit226},call(e->slot(1,9),Args{lit216,V(0.5)}))));refs[0].put(std::move(t191));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit93)};V t192=first(call(e->slot(1,9),joined(Args{lit227},call(e->slot(1,9),Args{lit219,V(0.5)}))));refs[0].put(std::move(t192));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit94)};V t193=first(call(e->slot(1,9),joined(Args{lit228},call(e->slot(1,9),Args{lit222,V(0.5)}))));refs[0].put(std::move(t193));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit95)};V t194=first(call(e->slot(1,9),joined(Args{lit229},call(e->slot(1,9),Args{lit225,V(0.5)}))));refs[0].put(std::move(t194));}
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit50),Ref(e,0,1)};Args t195=call(e->slot(1,11),Args{V(0.0),lit230,lit231});refs[0].put(arg(t195,0));refs[1].put(arg(t195,1));}
call(e->slot(1,19),Args{lit119,ne(e->slot(0,1),V())});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit51)};V t196=first(call(e->slot(1,9),joined(Args{lit232},call(e->slot(1,9),Args{lit233,V(0.0)}))));refs[0].put(std::move(t196));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit52)};V t197=first(call(e->slot(1,9),joined(Args{lit234},call(e->slot(1,9),Args{lit235,V(0.0)}))));refs[0].put(std::move(t197));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit53)};V t198=first(call(e->slot(1,10),joined(Args{lit236},call(e->slot(1,10),Args{lit237,lit54}))));refs[0].put(std::move(t198));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit55)};V t199=get(e->slot(1,3),lit50);refs[0].put(std::move(t199));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit56)};V t200=get(e->slot(1,3),lit51);refs[0].put(std::move(t200));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit57)};V t201=get(e->slot(1,3),lit52);refs[0].put(std::move(t201));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit58)};V t202=first(call(e->slot(1,9),Args{lit238,get(e->slot(1,3),lit55)}));refs[0].put(std::move(t202));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit59)};V t203=first(call(e->slot(1,9),joined(Args{lit239},call(e->slot(1,9),Args{lit240,V(0.0)}))));refs[0].put(std::move(t203));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit60)};V t204=first(call(e->slot(1,9),joined(Args{lit241},call(e->slot(1,9),Args{lit242,V(0.0)}))));refs[0].put(std::move(t204));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit61)};V t205=first(call(e->slot(1,9),joined(Args{lit243},call(e->slot(1,9),Args{lit244,V(0.0)}))));refs[0].put(std::move(t205));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit62)};V t206=first(call(e->slot(1,9),joined(Args{lit245},call(e->slot(1,9),Args{lit246,V(0.0)}))));refs[0].put(std::move(t206));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit63)};V t207=first(call(e->slot(1,9),joined(Args{lit247},call(e->slot(1,9),Args{lit248,V(0.0)}))));refs[0].put(std::move(t207));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit64)};V t208=first(call(e->slot(1,9),Args{lit249,V(0.0)}));refs[0].put(std::move(t208));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit65)};V t209=first(call(e->slot(1,9),Args{lit250,V(0.0)}));refs[0].put(std::move(t209));}
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit66),Ref(e,0,1)};Args t210=call(e->slot(1,11),Args{V(0.0),lit251,lit252,lit253});refs[0].put(arg(t210,0));refs[1].put(arg(t210,1));}
call(e->slot(1,19),Args{lit120,ne(e->slot(0,1),V())});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit67)};V t211=first(call(e->slot(1,9),Args{lit254,V(0.0)}));refs[0].put(std::move(t211));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit68)};V t212=first(call(e->slot(1,9),Args{lit255,V(0.0)}));refs[0].put(std::move(t212));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit69)};V t213=first(call(e->slot(1,9),Args{lit240,get(e->slot(1,3),lit59)}));refs[0].put(std::move(t213));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit70)};V t214=first(call(e->slot(1,9),joined(Args{lit256},call(e->slot(1,9),Args{lit257,V(0.0)}))));refs[0].put(std::move(t214));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit71)};V t215=first(call(e->slot(1,9),Args{lit258,V(0.0)}));refs[0].put(std::move(t215));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit72)};V t216=first(call(e->slot(1,9),Args{lit259,V(0.0)}));refs[0].put(std::move(t216));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit73)};V t217=first(call(e->slot(1,9),joined(Args{lit260},call(e->slot(1,9),Args{lit261,V(0.0)}))));refs[0].put(std::move(t217));}
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit74),Ref(e,0,1)};Args t218=call(e->slot(1,11),Args{V(0.0),lit262,lit263});refs[0].put(arg(t218,0));refs[1].put(arg(t218,1));}
call(e->slot(1,19),Args{lit74,ne(e->slot(0,1),V())});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit75)};V t219=first(call(e->slot(1,9),joined(Args{lit264},call(e->slot(1,9),Args{lit265,V(0.0)}))));refs[0].put(std::move(t219));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit76)};V t220=first(call(e->slot(1,9),joined(Args{lit266},call(e->slot(1,9),Args{lit267,V(0.0)}))));refs[0].put(std::move(t220));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit77)};V t221=first(call(e->slot(1,9),Args{lit268,V(0.0)}));refs[0].put(std::move(t221));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit78)};V t222=first(call(e->slot(1,9),joined(Args{lit269},call(e->slot(1,9),Args{lit270,V(0.0)}))));refs[0].put(std::move(t222));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit79)};V t223=first(call(e->slot(1,9),joined(Args{lit271},call(e->slot(1,9),Args{lit272,V(0.0)}))));refs[0].put(std::move(t223));}
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit96),Ref(e,0,1)};Args t224=call(e->slot(1,11),Args{V(0.0),lit273,lit274});refs[0].put(arg(t224,0));refs[1].put(arg(t224,1));}
call(e->slot(1,19),Args{lit121,ne(e->slot(0,1),V())});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit97)};V t225=first(call(e->slot(1,9),Args{lit275,V(0.0)}));refs[0].put(std::move(t225));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit98)};V t226=first(call(e->slot(1,9),Args{lit276,V(0.0)}));refs[0].put(std::move(t226));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit99)};V t227=first(call(e->slot(1,9),Args{lit277,V(0.0)}));refs[0].put(std::move(t227));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit100)};V t228=first(call(e->slot(1,9),Args{lit278,V(0.0)}));refs[0].put(std::move(t228));}
{std::array<Ref,2> refs{Ref(e->slot(1,3),lit101),Ref(e,0,1)};Args t229=call(e->slot(1,11),Args{V(0.0),lit279,lit280});refs[0].put(arg(t229,0));refs[1].put(arg(t229,1));}
call(e->slot(1,19),Args{lit122,ne(e->slot(0,1),V())});
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit102)};V t230=first(call(e->slot(1,9),joined(Args{lit281},call(e->slot(1,9),Args{lit282,V(1.0)}))));refs[0].put(std::move(t230));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit103)};V t231=first(call(e->slot(1,9),joined(Args{lit283},call(e->slot(1,9),Args{lit284,V(1.0)}))));refs[0].put(std::move(t231));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit104)};V t232=first(call(e->slot(1,9),joined(Args{lit285},call(e->slot(1,9),Args{lit286,V(0.0)}))));refs[0].put(std::move(t232));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit105)};V t233=first(call(e->slot(1,10),Args{lit287,lit106}));refs[0].put(std::move(t233));}
{V t234=V(0.0);e->slot(0,2)=std::move(t234);}
{double t235=num(V(0.0)),t236=num(V(3.0)),t237=num(V(1.0));for(double t238=t235;(t237>0?t238<=t236:t238>=t236);t238+=t237){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t238);{std::array<Ref,1> refs{Ref(e,1,2)};V t239=add(e->slot(1,2),first(call(e->slot(2,9),Args{concat(lit288,e->slot(0,0)),V(0.0)})));refs[0].put(std::move(t239));}
}}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit107)};V t240=mul(e->slot(0,2),V(0.25));refs[0].put(std::move(t240));}
return Args{};});
e->slot(0,27)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;{double t241=num(V(0.0)),t242=num(V(3.0)),t243=num(V(1.0));for(double t244=t241;(t243>0?t244<=t242:t244>=t242);t244+=t243){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t244);call(e->slot(2,25),Args{e->slot(0,0)});
}}
call(e->slot(1,26),Args{});
return Args{};});
e->slot(0,28)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,13),Args{lit289,get(e->slot(1,3),lit14)});
call(e->slot(1,13),Args{lit290,get(e->slot(1,3),lit15)});
call(e->slot(1,13),Args{lit291,get(e->slot(1,3),lit16)});
call(e->slot(1,13),Args{lit292,([&](){V t245=([&](){V t246=get(e->slot(1,3),lit18);return truth(t246)?V(1.0):t246;})();return !truth(t245)?V(0.0):t245;})()});
call(e->slot(1,13),Args{lit293,get(e->slot(1,3),lit19)});
call(e->slot(1,13),Args{lit294,get(e->slot(1,3),lit20)});
call(e->slot(1,13),Args{lit295,get(e->slot(1,3),lit21)});
call(e->slot(1,13),Args{lit296,get(e->slot(1,3),lit22)});
call(e->slot(1,13),Args{lit297,get(e->slot(1,3),lit23)});
call(e->slot(1,13),Args{lit298,get(e->slot(1,3),lit24)});
call(e->slot(1,13),Args{lit299,get(e->slot(1,3),lit25)});
call(e->slot(1,13),Args{lit300,get(e->slot(1,3),lit26)});
call(e->slot(1,13),Args{lit301,get(e->slot(1,3),lit27)});
call(e->slot(1,13),Args{lit302,get(e->slot(1,3),lit50)});
call(e->slot(1,13),Args{lit303,get(e->slot(1,3),lit51)});
call(e->slot(1,13),Args{lit304,get(e->slot(1,3),lit52)});
call(e->slot(1,13),Args{lit305,get(e->slot(1,3),lit53)});
call(e->slot(1,13),Args{lit306,get(e->slot(1,3),lit55)});
call(e->slot(1,13),Args{lit307,get(e->slot(1,3),lit56)});
call(e->slot(1,13),Args{lit308,get(e->slot(1,3),lit57)});
call(e->slot(1,13),Args{lit309,get(e->slot(1,3),lit58)});
call(e->slot(1,13),Args{lit310,get(e->slot(1,3),lit59)});
call(e->slot(1,13),Args{lit311,get(e->slot(1,3),lit60)});
call(e->slot(1,13),Args{lit312,get(e->slot(1,3),lit61)});
call(e->slot(1,13),Args{lit313,get(e->slot(1,3),lit62)});
call(e->slot(1,13),Args{lit314,get(e->slot(1,3),lit63)});
call(e->slot(1,13),Args{lit315,get(e->slot(1,3),lit64)});
call(e->slot(1,13),Args{lit316,get(e->slot(1,3),lit65)});
call(e->slot(1,13),Args{lit317,get(e->slot(1,3),lit66)});
call(e->slot(1,13),Args{lit318,get(e->slot(1,3),lit67)});
call(e->slot(1,13),Args{lit319,get(e->slot(1,3),lit68)});
call(e->slot(1,13),Args{lit320,get(e->slot(1,3),lit69)});
call(e->slot(1,13),Args{lit321,get(e->slot(1,3),lit70)});
call(e->slot(1,13),Args{lit322,get(e->slot(1,3),lit71)});
call(e->slot(1,13),Args{lit323,get(e->slot(1,3),lit72)});
call(e->slot(1,13),Args{lit324,get(e->slot(1,3),lit73)});
call(e->slot(1,13),Args{lit325,get(e->slot(1,3),lit74)});
call(e->slot(1,13),Args{lit326,get(e->slot(1,3),lit75)});
call(e->slot(1,13),Args{lit327,get(e->slot(1,3),lit76)});
call(e->slot(1,13),Args{lit328,get(e->slot(1,3),lit77)});
call(e->slot(1,13),Args{lit329,get(e->slot(1,3),lit78)});
call(e->slot(1,13),Args{lit330,get(e->slot(1,3),lit79)});
call(e->slot(1,13),Args{lit200,get(e->slot(1,3),lit80)});
call(e->slot(1,13),Args{lit331,get(e->slot(1,3),lit81)});
call(e->slot(1,13),Args{lit332,get(e->slot(1,3),lit82)});
call(e->slot(1,13),Args{lit333,get(e->slot(1,3),lit83)});
call(e->slot(1,13),Args{lit334,get(e->slot(1,3),lit84)});
call(e->slot(1,13),Args{lit335,get(e->slot(1,3),lit85)});
call(e->slot(1,13),Args{lit336,get(e->slot(1,3),lit86)});
call(e->slot(1,13),Args{lit337,get(e->slot(1,3),lit87)});
call(e->slot(1,13),Args{lit338,get(e->slot(1,3),lit88)});
call(e->slot(1,13),Args{lit339,get(e->slot(1,3),lit89)});
call(e->slot(1,13),Args{lit340,get(e->slot(1,3),lit90)});
call(e->slot(1,13),Args{lit341,get(e->slot(1,3),lit91)});
call(e->slot(1,13),Args{lit342,get(e->slot(1,3),lit92)});
call(e->slot(1,13),Args{lit343,get(e->slot(1,3),lit93)});
call(e->slot(1,13),Args{lit344,get(e->slot(1,3),lit94)});
call(e->slot(1,13),Args{lit345,get(e->slot(1,3),lit95)});
call(e->slot(1,13),Args{lit346,get(e->slot(1,3),lit96)});
call(e->slot(1,13),Args{lit347,get(e->slot(1,3),lit97)});
call(e->slot(1,13),Args{lit348,get(e->slot(1,3),lit98)});
call(e->slot(1,13),Args{lit349,get(e->slot(1,3),lit99)});
call(e->slot(1,13),Args{lit350,get(e->slot(1,3),lit100)});
call(e->slot(1,13),Args{lit351,get(e->slot(1,3),lit101)});
call(e->slot(1,13),Args{lit352,get(e->slot(1,3),lit102)});
call(e->slot(1,13),Args{lit353,get(e->slot(1,3),lit103)});
call(e->slot(1,13),Args{lit354,get(e->slot(1,3),lit104)});
call(e->slot(1,13),Args{lit355,get(e->slot(1,3),lit105)});
call(e->slot(1,13),Args{lit356,get(e->slot(1,3),lit107)});
return Args{};});
e->slot(0,29)=native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);call(e->slot(1,13),Args{concat(lit357,e->slot(0,0)),get(get(e->slot(1,3),lit28),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit358,e->slot(0,0)),get(get(e->slot(1,3),lit29),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit359,e->slot(0,0)),get(get(e->slot(1,3),lit30),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit360,e->slot(0,0)),get(get(e->slot(1,3),lit31),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit361,e->slot(0,0)),get(get(e->slot(1,3),lit32),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit362,e->slot(0,0)),get(get(e->slot(1,3),lit33),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit363,e->slot(0,0)),get(get(e->slot(1,3),lit34),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit364,e->slot(0,0)),get(get(e->slot(1,3),lit35),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit365,e->slot(0,0)),get(get(e->slot(1,3),lit36),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit366,e->slot(0,0)),get(get(e->slot(1,3),lit37),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit367,e->slot(0,0)),get(get(e->slot(1,3),lit38),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit368,e->slot(0,0)),get(get(e->slot(1,3),lit39),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit369,e->slot(0,0)),get(get(e->slot(1,3),lit40),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit370,e->slot(0,0)),get(get(e->slot(1,3),lit41),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit371,e->slot(0,0)),get(get(e->slot(1,3),lit42),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit372,e->slot(0,0)),get(get(e->slot(1,3),lit43),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit373,e->slot(0,0)),get(get(e->slot(1,3),lit44),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit374,e->slot(0,0)),get(get(e->slot(1,3),lit45),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit375,e->slot(0,0)),get(get(e->slot(1,3),lit46),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit376,e->slot(0,0)),get(get(e->slot(1,3),lit47),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit377,e->slot(0,0)),get(get(e->slot(1,3),lit48),e->slot(0,0))});
call(e->slot(1,13),Args{concat(lit378,e->slot(0,0)),get(get(e->slot(1,3),lit49),e->slot(0,0))});
return Args{};});
e->slot(0,30)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(get(e->slot(1,3),lit124))))){return Args{};
}
call(e->slot(1,13),Args{lit379,([&](){V t247=([&](){V t248=get(get(e->slot(1,3),lit108),lit109);return truth(t248)?V(1.0):t248;})();return !truth(t247)?V(0.0):t247;})()});
call(e->slot(1,13),Args{lit380,([&](){V t249=([&](){V t250=get(get(e->slot(1,3),lit108),lit110);return truth(t250)?V(1.0):t250;})();return !truth(t249)?V(0.0):t249;})()});
call(e->slot(1,13),Args{lit381,([&](){V t251=([&](){V t252=get(get(e->slot(1,3),lit108),lit111);return truth(t252)?V(1.0):t252;})();return !truth(t251)?V(0.0):t251;})()});
call(e->slot(1,13),Args{lit382,([&](){V t253=([&](){V t254=get(get(e->slot(1,3),lit108),lit112);return truth(t254)?V(1.0):t254;})();return !truth(t253)?V(0.0):t253;})()});
call(e->slot(1,13),Args{lit383,([&](){V t255=([&](){V t256=get(get(e->slot(1,3),lit108),lit113);return truth(t256)?V(1.0):t256;})();return !truth(t255)?V(0.0):t255;})()});
call(e->slot(1,13),Args{lit384,([&](){V t257=([&](){V t258=get(get(e->slot(1,3),lit108),lit114);return truth(t258)?V(1.0):t258;})();return !truth(t257)?V(0.0):t257;})()});
call(e->slot(1,13),Args{lit385,([&](){V t259=([&](){V t260=get(get(e->slot(1,3),lit108),lit115);return truth(t260)?V(1.0):t260;})();return !truth(t259)?V(0.0):t259;})()});
call(e->slot(1,13),Args{lit386,([&](){V t261=([&](){V t262=get(get(e->slot(1,3),lit108),lit23);return truth(t262)?V(1.0):t262;})();return !truth(t261)?V(0.0):t261;})()});
call(e->slot(1,13),Args{lit387,([&](){V t263=([&](){V t264=get(get(e->slot(1,3),lit108),lit116);return truth(t264)?V(1.0):t264;})();return !truth(t263)?V(0.0):t263;})()});
call(e->slot(1,13),Args{lit388,([&](){V t265=([&](){V t266=get(get(e->slot(1,3),lit108),lit117);return truth(t266)?V(1.0):t266;})();return !truth(t265)?V(0.0):t265;})()});
call(e->slot(1,13),Args{lit389,([&](){V t267=([&](){V t268=get(get(e->slot(1,3),lit108),lit118);return truth(t268)?V(1.0):t268;})();return !truth(t267)?V(0.0):t267;})()});
call(e->slot(1,13),Args{lit390,([&](){V t269=([&](){V t270=get(get(e->slot(1,3),lit108),lit119);return truth(t270)?V(1.0):t270;})();return !truth(t269)?V(0.0):t269;})()});
call(e->slot(1,13),Args{lit391,([&](){V t271=([&](){V t272=get(get(e->slot(1,3),lit108),lit120);return truth(t272)?V(1.0):t272;})();return !truth(t271)?V(0.0):t271;})()});
call(e->slot(1,13),Args{lit392,([&](){V t273=([&](){V t274=get(get(e->slot(1,3),lit108),lit74);return truth(t274)?V(1.0):t274;})();return !truth(t273)?V(0.0):t273;})()});
call(e->slot(1,13),Args{lit393,([&](){V t275=([&](){V t276=get(get(e->slot(1,3),lit108),lit121);return truth(t276)?V(1.0):t276;})();return !truth(t275)?V(0.0):t275;})()});
call(e->slot(1,13),Args{lit394,([&](){V t277=([&](){V t278=get(get(e->slot(1,3),lit108),lit122);return truth(t278)?V(1.0):t278;})();return !truth(t277)?V(0.0):t277;})()});
return Args{};});
e->slot(0,31)=native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;call(e->slot(1,28),Args{});
{double t279=num(V(0.0)),t280=num(V(3.0)),t281=num(V(1.0));for(double t282=t279;(t281>0?t282<=t280:t282>=t280);t282+=t281){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t282);call(e->slot(2,29),Args{e->slot(0,0)});
}}
call(e->slot(1,30),Args{});
return Args{};});
Ref(e->slot(0,1),lit395).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit16)};V t283=lit17;refs[0].put(std::move(t283));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit14)};V t284=V(0.0);refs[0].put(std::move(t284));}
call(e->slot(1,31),Args{});
return Args{};}));
Ref(e->slot(0,1),lit396).put(native([up=e](const Args& a)->Args{Env storage(up,true,4);auto e=&storage;e->slot(0,0)=arg(a,0);e->slot(0,1)=arg(a,1);e->slot(0,2)=arg(a,2);{std::array<Ref,1> refs{Ref(e->slot(1,3),lit14)};V t285=add(([&](){V t286=get(e->slot(1,3),lit14);return !truth(t286)?V(0.0):t286;})(),V(1.0));refs[0].put(std::move(t285));}
{std::array<Ref,1> refs{Ref(e->slot(1,3),lit15)};V t287=add(([&](){V t288=get(e->slot(1,3),lit15);return !truth(t288)?V(0.0):t288;})(),V(1.0));refs[0].put(std::move(t287));}
{std::array<Ref,1> refs{Ref(e,0,0)};V t289=first(call(e->slot(1,5),Args{first(call(e->slot(1,4),Args{e->slot(0,0),V(0.0)})),get(get(e->slot(1,1),lit1),lit7),get(get(e->slot(1,1),lit1),lit8)}));refs[0].put(std::move(t289));}
call(e->slot(1,17),Args{e->slot(0,0)});
call(e->slot(1,18),Args{});
{std::array<Ref,1> refs{Ref(e,0,1)};V t290=([&](){V t291=e->slot(0,1);return !truth(t291)?first(call(e->slot(1,14),Args{})):t291;})();refs[0].put(std::move(t290));}
{V t292=first(call(e->slot(1,24),Args{e->slot(0,1),e->slot(0,0)}));e->slot(0,3)=std::move(t292);}
call(e->slot(1,27),Args{});
if(truth(e->slot(0,3))){{std::array<Ref,1> refs{Ref(e->slot(1,3),lit16)};V t293=lit150;refs[0].put(std::move(t293));}
}
call(e->slot(1,31),Args{});
return Args{};}));
Ref(e->slot(0,1),lit397).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{e->slot(1,3)};
return Args{};}));
Ref(e->slot(0,1),lit398).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t294=get(get(e->slot(1,3),lit31),([&](){V t295=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t295)?V(0.0):t295;})());return !truth(t294)?V(1.0):t294;})()};
return Args{};}));
Ref(e->slot(0,1),lit399).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t296=get(get(e->slot(1,3),lit29),([&](){V t297=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t297)?V(0.0):t297;})());return !truth(t296)?get(get(e->slot(1,1),lit1),lit2):t296;})()};
return Args{};}));
Ref(e->slot(0,1),lit400).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t298=get(get(e->slot(1,3),lit28),([&](){V t299=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t299)?V(0.0):t299;})());return !truth(t298)?V(0.0):t298;})()};
return Args{};}));
Ref(e->slot(0,1),lit401).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t300=get(get(e->slot(1,3),lit30),([&](){V t301=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t301)?V(0.0):t301;})());return !truth(t300)?V(0.0):t300;})()};
return Args{};}));
Ref(e->slot(0,1),lit402).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t302=get(get(e->slot(1,3),lit35),([&](){V t303=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t303)?V(0.0):t303;})());return !truth(t302)?V(0.0):t302;})()};
return Args{};}));
Ref(e->slot(0,1),lit403).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);return Args{([&](){V t304=get(get(e->slot(1,3),lit36),([&](){V t305=first(call(e->get("tonumber"),Args{e->slot(0,0)}));return !truth(t305)?V(0.0):t305;})());return !truth(t304)?V(0.0):t304;})()};
return Args{};}));
Ref(e->slot(0,1),lit404).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t306=get(e->slot(1,3),lit50);return !truth(t306)?V(0.0):t306;})()};
return Args{};}));
Ref(e->slot(0,1),lit405).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t307=get(e->slot(1,3),lit66);return !truth(t307)?V(0.0):t307;})()};
return Args{};}));
Ref(e->slot(0,1),lit406).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;return Args{([&](){V t308=get(e->slot(1,3),lit96);return !truth(t308)?V(0.0):t308;})()};
return Args{};}));
Ref(e->slot(0,1),lit407).put(native([up=e](const Args& a)->Args{Env storage(up,true,1);auto e=&storage;e->slot(0,0)=arg(a,0);if(truth(ne(e->slot(0,0),V()))){auto parent=e;Env storage(parent,false,1);auto e=&storage;{V t309=([&](){V t310=first(call(e->get("tonumber"),Args{e->slot(1,0)}));return !truth(t310)?V(0.0):t310;})();e->slot(0,0)=std::move(t309);}
return call(get(e->get("string"),lit408),Args{concat(lit409,concat(lit410,lit411)),first(call(e->get("tostring"),Args{([&](){V t311=get(e->slot(2,2),e->slot(0,0));return !truth(t311)?e->slot(0,0):t311;})()})),([&](){V t312=get(get(e->slot(2,3),lit28),e->slot(0,0));return !truth(t312)?V(0.0):t312;})(),([&](){V t313=get(get(e->slot(2,3),lit29),e->slot(0,0));return !truth(t313)?V(0.0):t313;})(),([&](){V t314=get(get(e->slot(2,3),lit30),e->slot(0,0));return !truth(t314)?V(0.0):t314;})(),([&](){V t315=get(get(e->slot(2,3),lit31),e->slot(0,0));return !truth(t315)?V(1.0):t315;})(),([&](){V t316=get(get(e->slot(2,3),lit32),e->slot(0,0));return !truth(t316)?V(0.0):t316;})(),([&](){V t317=get(get(e->slot(2,3),lit33),e->slot(0,0));return !truth(t317)?V(0.0):t317;})(),([&](){V t318=get(get(e->slot(2,3),lit34),e->slot(0,0));return !truth(t318)?V(0.0):t318;})(),([&](){V t319=get(get(e->slot(2,3),lit38),e->slot(0,0));return !truth(t319)?V(0.0):t319;})(),([&](){V t320=get(get(e->slot(2,3),lit39),e->slot(0,0));return !truth(t320)?V(0.0):t320;})(),([&](){V t321=get(get(e->slot(2,3),lit35),e->slot(0,0));return !truth(t321)?V(0.0):t321;})(),([&](){V t322=get(get(e->slot(2,3),lit36),e->slot(0,0));return !truth(t322)?V(0.0):t322;})(),([&](){V t323=get(get(e->slot(2,3),lit41),e->slot(0,0));return !truth(t323)?V(0.0):t323;})(),([&](){V t324=get(get(e->slot(2,3),lit43),e->slot(0,0));return !truth(t324)?V(0.0):t324;})(),([&](){V t325=get(get(e->slot(2,3),lit45),e->slot(0,0));return !truth(t325)?V(0.0):t325;})()});
}
return call(get(e->get("string"),lit408),Args{concat(lit412,concat(lit413,concat(lit414,concat(lit415,concat(lit416,concat(lit417,concat(lit418,concat(lit419,lit420)))))))),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit16)})),([&](){V t326=get(e->slot(1,3),lit15);return !truth(t326)?V(0.0):t326;})(),([&](){V t327=get(e->slot(1,3),lit14);return !truth(t327)?V(0.0):t327;})(),([&](){V t328=get(e->slot(1,3),lit19);return !truth(t328)?V(0.0):t328;})(),([&](){V t329=get(e->slot(1,3),lit20);return !truth(t329)?V(0.0):t329;})(),([&](){V t330=([&](){V t331=get(e->slot(1,3),lit18);return truth(t331)?lit421:t331;})();return !truth(t330)?lit422:t330;})(),mul(([&](){V t332=get(e->slot(1,3),lit50);return !truth(t332)?V(0.0):t332;})(),V(100.0)),([&](){V t333=get(e->slot(1,3),lit51);return !truth(t333)?V(0.0):t333;})(),([&](){V t334=get(e->slot(1,3),lit52);return !truth(t334)?V(0.0):t334;})(),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit53)})),([&](){V t335=get(e->slot(1,3),lit66);return !truth(t335)?V(0.0):t335;})(),([&](){V t336=get(e->slot(1,3),lit69);return !truth(t336)?V(0.0):t336;})(),([&](){V t337=get(e->slot(1,3),lit70);return !truth(t337)?V(0.0):t337;})(),([&](){V t338=get(e->slot(1,3),lit74);return !truth(t338)?V(0.0):t338;})(),([&](){V t339=get(get(e->slot(1,3),lit28),V(0.0));return !truth(t339)?V(0.0):t339;})(),([&](){V t340=get(get(e->slot(1,3),lit28),V(1.0));return !truth(t340)?V(0.0):t340;})(),([&](){V t341=get(get(e->slot(1,3),lit28),V(2.0));return !truth(t341)?V(0.0):t341;})(),([&](){V t342=get(get(e->slot(1,3),lit28),V(3.0));return !truth(t342)?V(0.0):t342;})(),([&](){V t343=get(get(e->slot(1,3),lit29),V(0.0));return !truth(t343)?V(0.0):t343;})(),([&](){V t344=get(get(e->slot(1,3),lit29),V(1.0));return !truth(t344)?V(0.0):t344;})(),([&](){V t345=get(get(e->slot(1,3),lit29),V(2.0));return !truth(t345)?V(0.0):t345;})(),([&](){V t346=get(get(e->slot(1,3),lit29),V(3.0));return !truth(t346)?V(0.0):t346;})(),([&](){V t347=get(get(e->slot(1,3),lit31),V(0.0));return !truth(t347)?V(1.0):t347;})(),([&](){V t348=get(get(e->slot(1,3),lit31),V(1.0));return !truth(t348)?V(1.0):t348;})(),([&](){V t349=get(get(e->slot(1,3),lit31),V(2.0));return !truth(t349)?V(1.0):t349;})(),([&](){V t350=get(get(e->slot(1,3),lit31),V(3.0));return !truth(t350)?V(1.0):t350;})(),([&](){V t351=get(e->slot(1,3),lit96);return !truth(t351)?V(0.0):t351;})(),([&](){V t352=get(e->slot(1,3),lit97);return !truth(t352)?V(0.0):t352;})(),([&](){V t353=get(e->slot(1,3),lit101);return !truth(t353)?V(0.0):t353;})(),first(call(e->get("tostring"),Args{get(e->slot(1,3),lit105)})),([&](){V t354=([&](){V t355=get(get(e->slot(1,3),lit108),lit109);return truth(t355)?lit421:t355;})();return !truth(t354)?lit422:t354;})(),([&](){V t356=([&](){V t357=get(get(e->slot(1,3),lit108),lit111);return truth(t357)?lit421:t357;})();return !truth(t356)?lit422:t356;})(),([&](){V t358=([&](){V t359=get(get(e->slot(1,3),lit108),lit112);return truth(t359)?lit421:t359;})();return !truth(t358)?lit422:t358;})(),([&](){V t360=([&](){V t361=get(get(e->slot(1,3),lit108),lit113);return truth(t361)?lit421:t361;})();return !truth(t360)?lit422:t360;})(),([&](){V t362=([&](){V t363=get(get(e->slot(1,3),lit108),lit114);return truth(t363)?lit421:t363;})();return !truth(t362)?lit422:t362;})(),([&](){V t364=([&](){V t365=get(get(e->slot(1,3),lit108),lit119);return truth(t365)?lit421:t365;})();return !truth(t364)?lit422:t364;})(),([&](){V t366=([&](){V t367=get(get(e->slot(1,3),lit108),lit120);return truth(t367)?lit421:t367;})();return !truth(t366)?lit422:t366;})(),([&](){V t368=([&](){V t369=get(get(e->slot(1,3),lit108),lit74);return truth(t369)?lit421:t369;})();return !truth(t368)?lit422:t368;})(),([&](){V t370=([&](){V t371=get(get(e->slot(1,3),lit108),lit122);return truth(t371)?lit421:t371;})();return !truth(t370)?lit422:t370;})()});
return Args{};}));
Ref(e->slot(0,1),lit423).put(native([up=e](const Args& a)->Args{Env storage(up,true,0);auto e=&storage;if(truth(V(!truth(e->get("ui"))))){return Args{};
}
call(get(e->get("ui"),lit424),Args{});
call(get(e->get("ui"),lit425),Args{lit426});
call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),Args{lit427,first(call(e->get("tostring"),Args{get(e->slot(1,3),lit16)})),([&](){V t372=get(e->slot(1,3),lit14);return !truth(t372)?V(0.0):t372;})(),([&](){V t373=get(e->slot(1,3),lit15);return !truth(t373)?V(0.0):t373;})()}));
call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),Args{lit428,([&](){V t374=get(e->slot(1,3),lit19);return !truth(t374)?V(0.0):t374;})(),([&](){V t375=get(e->slot(1,3),lit20);return !truth(t375)?V(0.0):t375;})(),([&](){V t376=([&](){V t377=get(e->slot(1,3),lit18);return truth(t377)?lit421:t377;})();return !truth(t376)?lit422:t376;})()}));
call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),joined(Args{lit429,mul(([&](){V t378=get(e->slot(1,3),lit50);return !truth(t378)?V(0.0):t378;})(),V(100.0)),([&](){V t379=get(e->slot(1,3),lit51);return !truth(t379)?V(0.0):t379;})(),([&](){V t380=get(e->slot(1,3),lit52);return !truth(t380)?V(0.0):t380;})()},call(e->get("tostring"),Args{get(e->slot(1,3),lit53)}))));
call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),Args{lit430,([&](){V t381=get(e->slot(1,3),lit66);return !truth(t381)?V(0.0):t381;})(),([&](){V t382=get(e->slot(1,3),lit69);return !truth(t382)?V(0.0):t382;})(),([&](){V t383=get(e->slot(1,3),lit70);return !truth(t383)?V(0.0):t383;})(),([&](){V t384=get(e->slot(1,3),lit74);return !truth(t384)?V(0.0):t384;})()}));
call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),joined(Args{lit431,([&](){V t385=get(e->slot(1,3),lit96);return !truth(t385)?V(0.0):t385;})(),([&](){V t386=get(e->slot(1,3),lit97);return !truth(t386)?V(0.0):t386;})(),([&](){V t387=get(e->slot(1,3),lit101);return !truth(t387)?V(0.0):t387;})()},call(e->get("tostring"),Args{get(e->slot(1,3),lit105)}))));
call(get(e->get("ui"),lit424),Args{});
{double t388=num(V(0.0)),t389=num(V(3.0)),t390=num(V(1.0));for(double t391=t388;(t390>0?t391<=t389:t391>=t389);t391+=t390){auto parent=e;Env storage(parent,false,1);auto e=&storage;e->slot(0,0)=V(t391);call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),Args{lit432,first(call(e->get("tostring"),Args{([&](){V t392=get(e->slot(2,2),e->slot(0,0));return !truth(t392)?e->slot(0,0):t392;})()})),([&](){V t393=get(get(e->slot(2,3),lit28),e->slot(0,0));return !truth(t393)?V(0.0):t393;})(),([&](){V t394=get(get(e->slot(2,3),lit29),e->slot(0,0));return !truth(t394)?V(0.0):t394;})(),([&](){V t395=get(get(e->slot(2,3),lit30),e->slot(0,0));return !truth(t395)?V(0.0):t395;})(),([&](){V t396=get(get(e->slot(2,3),lit31),e->slot(0,0));return !truth(t396)?V(1.0):t396;})(),([&](){V t397=get(get(e->slot(2,3),lit32),e->slot(0,0));return !truth(t397)?V(0.0):t397;})(),([&](){V t398=get(get(e->slot(2,3),lit33),e->slot(0,0));return !truth(t398)?V(0.0):t398;})()}));
call(get(e->get("ui"),lit425),call(get(e->get("string"),lit408),Args{lit433,([&](){V t399=get(get(e->slot(2,3),lit35),e->slot(0,0));return !truth(t399)?V(0.0):t399;})(),([&](){V t400=get(get(e->slot(2,3),lit36),e->slot(0,0));return !truth(t400)?V(0.0):t400;})(),([&](){V t401=get(get(e->slot(2,3),lit34),e->slot(0,0));return !truth(t401)?V(0.0):t401;})(),([&](){V t402=get(get(e->slot(2,3),lit38),e->slot(0,0));return !truth(t402)?V(0.0):t402;})(),([&](){V t403=get(get(e->slot(2,3),lit39),e->slot(0,0));return !truth(t403)?V(0.0):t403;})(),([&](){V t404=get(get(e->slot(2,3),lit41),e->slot(0,0));return !truth(t404)?V(0.0):t404;})()}));
}}
return Args{};}));
return Args{e->slot(0,1)};
return Args{};};return first(run());}
}
