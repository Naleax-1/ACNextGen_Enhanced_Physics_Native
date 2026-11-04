#pragma once
#include "damper_mailbox.hpp"
#include "damper_profile.hpp"
class DamperHostPath {
    DamperCommandMailbox commands;
    HANDLE handle=nullptr;const NgpDamperObservationFrame* observations=nullptr;
    ngp::DamperForceChannel channel;
    std::wstring prefix;
    bool enabled=false;
    const char* blocked="profile_missing_or_invalid";
    uint64_t sent=0,acked=0;
    void open_observations(){
        if(observations)return;
        handle=OpenFileMappingW(FILE_MAP_READ,FALSE,(prefix+L".DamperForceObservation").c_str());
        if(handle){observations=static_cast<const NgpDamperObservationFrame*>(MapViewOfFile(handle,FILE_MAP_READ,0,0,sizeof(NgpDamperObservationFrame)));
            if(!observations){CloseHandle(handle);handle=nullptr;}}
    }
public:
    explicit DamperHostPath(std::wstring name):prefix(std::move(name)){}
    DamperHostPath(const DamperHostPath&)=delete;
    DamperHostPath& operator=(const DamperHostPath&)=delete;
    ~DamperHostPath(){stop();if(observations)UnmapViewOfFile(observations);if(handle)CloseHandle(handle);}
    void stop(){channel.stop();commands.publish({});enabled=false;}
    void tick(uint32_t epoch,uint32_t generation,uint32_t car,const std::string& car_id,bool requested,double clock,
        const ngp::DamperProfile& profile,const ngp::DamperForceCandidate* candidate,bool settlement_only=false){
        if(!profile.valid||(!requested&&!channel.waiting())||profile.car_id!=car_id||profile.residual.car_hash!=car||!std::isfinite(clock)||clock<0){
            stop();blocked=!profile.valid?"profile_missing_or_invalid":!requested?"stopped":"car_context_or_clock_invalid";return;
        }
        // Resume never repairs a fault or replenishes storage. New context
        // establishes an empty reservoir through begin().
        channel.resume();
        if(!channel.begin(epoch,generation,car,profile.residual.patch_code,profile.residual.evidence_id,profile.storage_capacity_j,true)){
            commands.publish({});enabled=false;blocked=channel.faulted()?channel.reason():"context_not_ready";return;
        }
        enabled=true;open_observations();
        if(observations){
            uint32_t before=observations->commit;MemoryBarrier();NgpDamperObservationFrame frame{};
            std::memcpy(&frame,observations,sizeof frame);MemoryBarrier();uint32_t after=observations->commit;
            if(channel.acknowledge(frame,before,after,profile.receipt,clock))++acked;
        }
        // Settle a completed interval even when new output has just been
        // inhibited. Stop with an unresolved interval still latches a fault.
        if(!requested){
            if(settlement_only&&channel.waiting()){
                // Transport inhibition is not a user Stop. Withdraw commands,
                // settle only the existing transaction, and retain its deadline.
                channel.expire(clock);commands.publish({});enabled=false;
                blocked=channel.faulted()?channel.reason():"awaiting_receipt_inhibited";return;
            }
            stop();blocked=channel.faulted()?channel.reason():"stopped";return;
        }
        channel.expire(clock);
        if(channel.faulted()){commands.publish({});enabled=false;blocked=channel.reason();return;}
        if(candidate){
            // Check the candidate against the selected profile again at the
            // transaction boundary, not just when it was computed.
            if(candidate->intent.patch_code!=profile.residual.patch_code||candidate->intent.evidence_id!=profile.residual.evidence_id){blocked="candidate_profile_mismatch";return;}
            auto command=channel.prepare(*candidate,clock);
            if(command.sequence){commands.open(prefix+L".DamperForceCommand");commands.publish(command);++sent;}
        }
        blocked=channel.waiting()?"waiting_receipt":candidate?"candidate_not_sent":"qualified_sensor_inputs_unavailable";
    }
    bool active()const{return enabled&&!channel.faulted();}
    bool waiting()const{return channel.waiting();}
    bool faulted()const{return channel.faulted();}
    double available()const{return channel.available();}
    double unresolved()const{return channel.unresolved();}
    uint64_t commands_sent()const{return sent;}
    uint64_t commands_acked()const{return acked;}
    const char* reason()const{return blocked;}
};
