# Read-only CSP Worker permission reproduction

This optional developer diagnostic does not enhance vehicle handling. It has no Native DLL/Host dependency and does not call force, torque, input-override, pose, or velocity-write APIs.

## Install and run

Exit Assetto Corsa. Copy the three probe files into apps/lua/ACNextGenPermissionProbe/ under the AC installation, preserving those filenames. If that folder already exists, back it up first; do not overwrite an unknown version. Start an offline, unpaused session. Open ACNextGen Permission Scope Probe and press Record permission only once. Each Worker records five samples and terminates. Stop probe cancels; there is a three-second observation timeout and no automatic retry. Exit the game before removing the diagnostic folder or restoring its previous contents. No car or track data edits are required.

## Observed result on 2026-11-07

CSP 0.3.1 public / patch code 4302: parent pcall succeeds and returns boolean true. Source-string and relative-filename Workers each return boolean false in all five samples. The spelling allowed=true:boolean:false means pcall succeeded, the return type is boolean, and the permission value is false.

For this follow-up, 11 other custom Lua apps were temporarily excluded and Python apps disabled. Native Host was absent. App labels in the CSP log contained only this diagnostic and its Worker. All 22 temporarily renamed custom-app files and both configurations were subsequently restored, with all 357 original custom-Lua-tree files hash-checked. Built-in CSP scripts, weather, car, and track context were not eliminated; this is not a claim of an entirely clean game installation.

## Question

Is physics.allowed() in a Worker intended to report the limited Worker API scope in this version? Is a documented permission configuration or inheritance step required? The installed SDK describes false as restricted and provides no permission argument in startPhysicsWorker(script, data, callback). We have not ignored false or attempted zero-force actuator calls. The internal rejection cause and whether this is a regression remain unproven.

## Sharing results

Report CSP version/patch, parent result, inline and file results, and offline/pause state. Share only the PermissionScope log lines after checking them for personal details; do not upload full game logs. These files are original ACNextGen contributions covered by the repository's CC0 dedication.
