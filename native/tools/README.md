# Public preview archive verification

Run with Python 3.10 or later (standard library only):

```sh
python native/tools/verify_public_preview.py /path/to/ACNextGenNative-v4.3-CM-Technical-Preview-20261108.zip
```

The verifier reads the ZIP without installing or executing its contents. It checks archive paths, duplicate entries, CRC, payload hashes against the embedded distribution manifest, the 51-model registry, required documentation and disabled preview output/capture settings. It rejects unexpected archive entries and common development artifacts.

The November 8 observation preview supplied by the author has 95 entries and SHA256:

```text
055e50332068c40440f8182863805fba2e786c943d000cd0287fb072efd9f7c0
```

The local distribution passed. This hash has not been compared against a fresh download of the newest OverTake attachment. Compare the printed hash separately; an internally consistent manifest does not authenticate a publisher. A passing result does not establish CM UI installation, clean-PC compatibility, online support, physical calibration or vehicle handling contributions.

This standalone verifier is separate from the developer packaging pipeline, whose build artifacts and full validation dependencies are not supplied here. No DLL or EXE is added by this change. Original project contributions use the repository's CC0 dedication.
