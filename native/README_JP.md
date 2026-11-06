# ACNextGen Native 4.3 技術プレビューのソース

2026-11-07 時点のローカル開発コミットは `7a264117756ff7cce546e6b2eac9c275e536d002` です。DLL・Host EXEのC++、ヘッダー、Luaアダプター、プレビュー設定、モジュール一覧、ビルド定義は、このリポジトリの `native/` にある内容と照合済みです。

## Windowsでのビルド

Zig 0.14.1を用意し、リポジトリのルートからPowerShellで実行します。

```powershell
.\native\build.ps1 -Zig 'C:\path\to\zig.exe'
```

既定の出力先は `native/build/` です。DLLは `ACNextGenCore.dll`、ホストは `ACNextGenHost.exe` です。依存ライブラリの出典は [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) を参照してください。

## 検証範囲

ローカルのリリース検証は34項目に合格しました。配布候補は51モデルを演算する観測モードです。追加の力・トルクは無効で、51モデル個別の車両挙動への寄与は検証中です。導入方法とCSPの制約は [プレビュー導入ガイド](PREVIEW_INSTALL_JP.md) を参照してください。
