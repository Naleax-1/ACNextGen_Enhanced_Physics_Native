-- Declaration validation only; flags do not certify physical calibration.
local M={}
local function number(v) assert(type(v)=='number' and v==v and math.abs(v)<math.huge);return v end
local function integer(v,max) number(v);assert(v>=1 and v<=max and v%1==0);return v end
function M.parse(j,car,patch)
 local ok,p=pcall(function()
  assert(type(j)=='table' and integer(j.schema,1)==1 and j.enabled==true)
  assert(j.execution_mode=='brake_residual_v1' or j.execution_mode=='worker_local_brake_residual_v1')
  assert(type(j.car_id)=='string' and #j.car_id>=1 and #j.car_id<=200 and not j.car_id:find('[^%w_%-]'))
  assert(j.car_id==car and integer(j.patch_code,2147483646)==patch)
  assert(type(j.evidence_reference)=='string' and #j.evidence_reference>=1 and #j.evidence_reference<=500)
  local a,b=1,0;for i=1,#j.car_id do a=(a+j.car_id:byte(i))%65521;b=(b+a)%65521 end
  assert(integer(j.car_hash,4294967295)==b*65536+a)
  local out={execution_mode=j.execution_mode,car_id=j.car_id,patch_code=j.patch_code,evidence_reference=j.evidence_reference,
   car_hash=j.car_hash,evidence_id=integer(j.evidence_id,9007199254740991),baseline_mode=integer(j.baseline_mode,2)}
  for _,key in ipairs({'baseline_isolated','units_verified','exclusive_owner','abs_contract_verified','native_fade_double_counting_excluded','phase_verified'}) do assert(j[key]==true);out[key]=true end
  out.dt=number(j.dt);assert(out.dt>0 and out.dt<=.02)
  if j.execution_mode=='worker_local_brake_residual_v1' then
   assert(j.same_callback_sample_verified==true and j.model_hold_verified==true)
   out.model_hold_seconds=number(j.model_hold_seconds);assert(out.model_hold_seconds>0 and out.model_hold_seconds<=.1)
  end
  out.baseline_scale_nm_per_raw=number(j.baseline_scale_nm_per_raw);assert(out.baseline_scale_nm_per_raw>0 and out.baseline_scale_nm_per_raw<=1000)
  out.command_scale_raw_per_nm=number(j.command_scale_raw_per_nm);assert(math.abs(out.command_scale_raw_per_nm)>0 and math.abs(out.command_scale_raw_per_nm)<=1000)
  return out
 end)
 return ok and p or nil
end
return M
