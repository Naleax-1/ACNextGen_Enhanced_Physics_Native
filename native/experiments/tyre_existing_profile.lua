-- Bind only the already deployed body-damping declaration. This is not a
-- wheel-reaction, gain or new-model calibration certificate.
local Profile={}
function Profile.bind(declaration,carID,patch,physical,capture,calibrationOnly,selected)
 if selected~=true or physical~=true or capture~=true or calibrationOnly~=false then return nil end
 if type(declaration)~='table' or declaration.enabled~=true or
  declaration.car_id~='wdts_nissan_silvia_s14' or declaration.car_id~=carID or
  declaration.patch_code~=3465 or patch~=3465 or declaration.force_unit~='N' or
  declaration.evidence_id~='body-force-N-20261014' then return nil end
 -- Stable numeric identity for this specific existing evidence, not a grant
 -- supplied by the incoming coefficient packet.
 return {verified=true,car_id=carID,patch_code=patch,evidence_id=20261014,
  effect_id=0x544c4547,owner='existing_body_tyre_damping',
  evidence_reference=declaration.evidence_id,wheel_reaction_verified=false,
  gain_calibration_verified=false}
end
return Profile
