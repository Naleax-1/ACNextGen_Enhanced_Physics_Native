#pragma once
#include <stdint.h>
// Hints are owned normalized model outputs; never force or energy authority.
enum { NGP_WHEEL_LOCAL_HINT_ABI=1, NGP_WHEEL_LOCAL_STATUS_ABI=2, NGP_WHEEL_LOCAL_EFFECT_ID=4, NGP_WHEEL_LOCAL_REASON_MAX=29 };
typedef struct NgpWheelLocalHint {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,effect_id,reserved;
    uint64_t evidence_id;
    double source_clock,demand,soft,transmission,windup,lsd_capacity,brake_ratio[4];
} NgpWheelLocalHint;
typedef struct NgpWheelLocalStatus {
    uint32_t abi,epoch,generation,car_hash,patch_code,sequence,sent,acked,fault,flags,effect_id,reason_code;
    uint64_t evidence_id;double clock,held_j,balance_j;
} NgpWheelLocalStatus;
typedef struct NgpWheelLocalHintFrame {uint32_t commit,checksum;NgpWheelLocalHint packet;} NgpWheelLocalHintFrame;
typedef struct NgpWheelLocalStatusFrame {uint32_t commit,checksum;NgpWheelLocalStatus packet;} NgpWheelLocalStatusFrame;
#ifdef __cplusplus
inline const char* ngp_wheel_local_reason(uint32_t code){
    static const char* const names[]={"none","pending","model_unavailable","native_sample_unavailable","insufficient_energy","inhibited","plan_context","context_or_interval",
        "missing_components","windup_unqualified","rear_limit","windup_limit","pair_not_closed","wheel_input","noncanonical_correction","baseline_interval","pair_not_passive",
        "invalid_power","nonfinite_work","receipt_context","incomplete_receipt","missing_samples","altered_samples","work_exceeds_reservation","actor_refused_or_partial",
        "actor_latched","clock_not_increasing","generation_regressed","stopped_with_pending","unknown"};
    return code<=NGP_WHEEL_LOCAL_REASON_MAX?names[code]:"unknown";
}
static_assert(sizeof(NgpWheelLocalHint)==120,"Wheel local hint ABI");
static_assert(sizeof(NgpWheelLocalStatus)==80,"Wheel local status ABI");
static_assert(sizeof(NgpWheelLocalHintFrame)==128,"Wheel local hint frame ABI");
static_assert(sizeof(NgpWheelLocalStatusFrame)==88,"Wheel local status frame ABI");
#endif
