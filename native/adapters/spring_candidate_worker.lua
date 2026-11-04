---@diagnostic disable: undefined-global
-- Read-only spring model hints. No physics writes or unit qualification.
local SpringCandidate={}
local FORMAT=[[
uint32_t abi,epoch,generation,car_hash,sequence,flags;
double source_clock,model_age;
struct { uint32_t abi,valid_mask,units_qualified,reserved;
double effective_rate[4],base_rate[4],excess_ratio[4]; } hints;
]]
local function finite(v) return type(v)=='number' and v==v and math.abs(v)<math.huge end
local function barrier()
    local kind=type(ac.memoryBarrier)
    if kind=='function' or kind=='cdata' then ac.memoryBarrier() end
end
local function checksum(bytes)
    local a,b=1,0
    for i=1,#bytes do a=(a+string.byte(bytes,i))%65521;b=(b+a)%65521 end
    return b*65536+a
end
function SpringCandidate.new(options,carHash)
    local make=assert(ac.StructItem.build or ac.StructItem.combine)
    local s={candidate=make(FORMAT),lastSequence=0,generation=0,validMask=0,deadline=0}
    local name=(options.mapping_prefix or 'AcTools.CSP.Limited.ACNextGen.V4')..'.SpringHints'
    local function clear() s.validMask=0;s.deadline=0;ac.store('ngp4_spring_model_valid_mask',0) end
    function s:step(clock,flags,generation)
        if generation~=s.generation then clear();s.lastSequence=0;s.generation=generation end
        if not finite(clock) or flags~=15 then clear();return end
        if clock>s.deadline then clear() end
        if not s.input then
            local ok,value=pcall(ac.readMemoryMappedFile,name,'uint32_t commit,checksum;struct {'..FORMAT..'} packet;',false)
            if not ok or not value then return end;s.input=value
        end
        local token=tonumber(s.input.commit)
        if not finite(token) or token<=0 or token%2~=0 or token<=s.lastSequence*2 then return end
        barrier();local ok,bytes=pcall(ac.structBytes,s.input.packet);barrier()
        if not ok or #bytes~=152 or token~=tonumber(s.input.commit) or checksum(bytes)~=tonumber(s.input.checksum) then clear();return end
        ac.fillStructWithBytes(s.candidate,bytes);local p=s.candidate;local h=p.hints
        clear()
        if p.abi~=1 or p.sequence*2~=token or p.epoch~=options.epoch or p.generation~=generation or p.car_hash~=carHash then return end
        s.lastSequence=p.sequence
        if p.flags~=1 or h.abi~=1 or h.units_qualified~=0 or h.reserved~=0 or h.valid_mask<1 or h.valid_mask>15 then return end
        if not finite(p.source_clock) or not finite(p.model_age) or p.model_age<0 or p.model_age>.2 or
            p.source_clock>clock+.003 or clock-p.source_clock>.02 or p.model_age+math.max(0,clock-p.source_clock)>.2 then return end
        for i=0,3 do
            if math.floor(h.valid_mask/2^i)%2==1 then
                local rate,base,ratio=tonumber(h.effective_rate[i]),tonumber(h.base_rate[i]),tonumber(h.excess_ratio[i])
                if not finite(rate) or not finite(base) or not finite(ratio) or rate<0 or base<=0 or ratio<0 or
                    math.abs(ratio-math.max(0,rate/base-1))>1e-9*math.max(1,ratio) then return end
            end
        end
        s.validMask=h.valid_mask;s.deadline=p.source_clock+.2-p.model_age
        ac.store('ngp4_spring_model_valid_mask',s.validMask)
    end
    function s:disable() clear() end
    return s
end
