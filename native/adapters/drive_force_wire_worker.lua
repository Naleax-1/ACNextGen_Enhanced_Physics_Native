local DriveForceWire={}
local COMMAND=[[
uint32_t abi,epoch,generation,car_hash,sequence,mask,sensor_sequence,reserved;
uint64_t evidence_id;double source_clock,work_bound_j,delta_nm[2];
]]
local OBSERVATION=[[
uint32_t abi,epoch,generation,car_hash,sequence,completed_mask,api_calls,fault,samples_valid,reserved;
uint64_t evidence_id;double clock_before,clock_after,omega_before[2],omega_after[2],applied_nm[2];
]]
local function barrier() if ac.memoryBarrier then ac.memoryBarrier() end end
local function checksum(bytes) local a,b=1,0;for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end;return b*65536+a end
function DriveForceWire.new(options,carHash)
    local factory=assert(ac.StructItem.build or ac.StructItem.combine)
    local prefix=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.DriveForce'
    local s={actor=DriveForceWorker.new(options,carHash),command=factory(COMMAND),observation=factory(OBSERVATION),lastSequence=0,generation=0}
    local evidence=(options.drive_profile or {}).evidence_id or 0
    s.output=ac.writeMemoryMappedFile(prefix..'Observation','uint32_t commit,checksum;struct {'..OBSERVATION..'} packet;',false)
    function s:stop() self.actor:stop();self.output.commit=0 end
    function s:step(dt,clock,flags,generation)
        if generation~=self.generation then self.generation=generation;self.lastSequence=0;self.output.commit=0 end
        if flags~=15 then self:stop();return end
        local c=nil
        -- A pending application is completed first; do not read another command.
        if not self.actor.pending then
            if not self.input then local ok,v=pcall(ac.readMemoryMappedFile,prefix..'Command','uint32_t commit,checksum;struct {'..COMMAND..'} packet;',false);if ok then self.input=v end end
            if self.input then
                local token=tonumber(self.input.commit)
                if token and token>self.lastSequence*2 and token>0 and token<2147483646 and token%2==0 then
                    barrier();local ok,bytes=pcall(ac.structBytes,self.input.packet);barrier()
                    if ok and #bytes==72 and token==tonumber(self.input.commit) and checksum(bytes)==tonumber(self.input.checksum) then
                        ac.fillStructWithBytes(self.command,bytes);local p=self.command
                        if p.abi==1 and p.sequence*2==token and p.mask==3 and p.reserved==0 and p.sensor_sequence>0 and
                            p.epoch==options.epoch and p.generation==generation and p.car_hash==carHash and tonumber(p.evidence_id)==evidence then
                            self.lastSequence=p.sequence
                            c={epoch=p.epoch,generation=p.generation,car_hash=p.car_hash,sequence=p.sequence,
                                evidence_id=tonumber(p.evidence_id),source_clock=p.source_clock,delta_nm={[0]=tonumber(p.delta_nm[0]),[1]=tonumber(p.delta_nm[1])}}
                        end
                    end
                end
            end
        end
        local result=self.actor:step(c,clock,dt,flags,generation)
        if not result.sequence or result.sequence==0 then return result end
        local r=self.observation
        r.abi=1;r.epoch=options.epoch;r.generation=generation;r.car_hash=carHash;r.sequence=result.sequence
        r.completed_mask=result.completed_mask or 0;r.api_calls=result.calls or 0;r.fault=result.fault and 1 or 0
        r.samples_valid=result.samples_valid and 1 or 0;r.reserved=0;r.evidence_id=evidence
        r.clock_before=result.clock_before or clock;r.clock_after=result.clock_after or clock
        for i=0,1 do r.omega_before[i]=(result.omega_before or {})[i] or 0;r.omega_after[i]=(result.omega_after or {})[i] or 0;r.applied_nm[i]=(result.applied_nm or {})[i] or 0 end
        local raw=ac.structBytes(r);if #raw~=112 then self:stop();return end
        self.output.commit=result.sequence*2-1;barrier();ac.fillStructWithBytes(self.output.packet,raw)
        self.output.checksum=checksum(raw);barrier();self.output.commit=result.sequence*2
        return result
    end
    return s
end
