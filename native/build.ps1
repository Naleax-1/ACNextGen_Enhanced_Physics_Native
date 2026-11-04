param(
 [string]$Zig="$env:LOCALAPPDATA\ACNextGen\toolchains\zig-x86_64-windows-0.14.1\zig.exe",
 [string]$OutputDirectory='build',
 [string]$CompilerCacheDirectory='build/compiler-cache'
)
$ErrorActionPreference='Stop'
$projectRoot=$PSScriptRoot
$cachePath=if([System.IO.Path]::IsPathRooted($CompilerCacheDirectory)){$CompilerCacheDirectory}else{Join-Path $projectRoot $CompilerCacheDirectory}
$compilerEnvironment=@{ZIG_GLOBAL_CACHE_DIR=(Join-Path $cachePath 'global');ZIG_LOCAL_CACHE_DIR=(Join-Path $cachePath 'local');TEMP=(Join-Path $cachePath 'tmp');TMP=(Join-Path $cachePath 'tmp')}
$priorEnvironment=@{}
try {
 foreach($key in $compilerEnvironment.Keys){
  $priorEnvironment[$key]=[Environment]::GetEnvironmentVariable($key,'Process')
  New-Item -ItemType Directory -Force -Path $compilerEnvironment[$key] | Out-Null
  [Environment]::SetEnvironmentVariable($key,$compilerEnvironment[$key],'Process')
 }
$buildPath=if([System.IO.Path]::IsPathRooted($OutputDirectory)){$OutputDirectory}else{Join-Path $projectRoot $OutputDirectory}
New-Item -ItemType Directory -Force -Path $buildPath | Out-Null
$sources=@((Join-Path $projectRoot 'src\core.cpp'),(Join-Path $projectRoot 'src\model_runtime.cpp'),(Join-Path $projectRoot 'src\effects.cpp'),(Join-Path $projectRoot 'src\enhancement.cpp'))
$sources+=Get-ChildItem (Join-Path $projectRoot 'src\modules') -Filter '*.cpp' | ForEach-Object {$_.FullName}
$commonArgs=@('-std=c++17','-O2','-g0','-Wall','-Wextra','-Wno-unused-variable','-Wno-unused-parameter','-ffp-contract=off','-I',(Join-Path $projectRoot 'include'),'-I',(Join-Path $projectRoot 'third_party'))
& $Zig c++ @commonArgs -shared @sources -o (Join-Path $buildPath 'ACNextGenCore.dll')
if($LASTEXITCODE -ne 0){throw 'Native module build failed'}
if(Test-Path (Join-Path $projectRoot 'src\host.cpp')){
 & $Zig c++ @commonArgs (Join-Path $projectRoot 'src\host.cpp') -o (Join-Path $buildPath 'ACNextGenHost.exe')
 if($LASTEXITCODE -ne 0){throw 'Native host build failed'}
}
Get-FileHash (Join-Path $buildPath 'ACNextGenCore.dll')
} finally {
 foreach($key in $priorEnvironment.Keys){
  if($null -eq $priorEnvironment[$key]){Remove-Item -LiteralPath ('Env:'+$key) -ErrorAction SilentlyContinue}
  else{[Environment]::SetEnvironmentVariable($key,$priorEnvironment[$key],'Process')}
 }
}
