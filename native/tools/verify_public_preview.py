"""Read-only verification of the CM observation-preview archive, independent of build outputs."""
import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import zipfile

PREFIX = 'assettocorsa/mods/ACNextGen Native V4.3/'
PLUGIN = PREFIX + 'extension/plugins/ACNextGenNative/'
DOCUMENTS = {'README_EN.txt', 'THIRD_PARTY_NOTICES.md', 'LICENSE-json.txt', 'LICENSE'}


def require(condition, message):
    if not condition:
        raise ValueError(message)


def verify(path):
    with zipfile.ZipFile(path) as archive:
        names = archive.namelist()
        require(len(names) == len(set(names)), 'Duplicate ZIP entries')
        for name in names:
            parts = PurePosixPath(name).parts
            require(not name.startswith('/') and '..' not in parts and '\\' not in name
                    and ':' not in name, 'Unsafe ZIP path: ' + name)
        require(archive.testzip() is None, 'ZIP CRC failure')
        require(DOCUMENTS <= set(names), 'Missing public documentation')
        manifest_name = PLUGIN + 'distribution_manifest.json'
        manifest = json.loads(archive.read(manifest_name))
        expected = set(DOCUMENTS) | {manifest_name,
            PREFIX + 'documentation/ACNextGenNative.jsgme'}
        seen = set()
        for entry in manifest['files']:
            name = PREFIX + entry['path']
            require(name not in seen, 'Duplicate manifest entry: ' + name)
            seen.add(name)
            require(name.startswith((PREFIX + 'apps/lua/ACNextGen/', PLUGIN)),
                    'Unexpected payload location: ' + name)
            data = archive.read(name)
            require(len(data) == entry['bytes'], 'Size mismatch: ' + name)
            require(hashlib.sha256(data).hexdigest() == entry['sha256'],
                    'Payload hash mismatch: ' + name)
            expected.add(name)
        require(set(names) == expected, 'Archive and manifest file sets differ')
        require(manifest['module_count'] == 51, 'Unexpected module count')
        modules = json.loads(archive.read(PLUGIN + 'module_manifest.json'))['modules']
        require(len(modules) == 51, 'Module registry count differs')
        config = json.loads(archive.read(PLUGIN + 'config.json'))
        enhancement = config['enhancement']
        require(config['physics_mode'] == 'observe', 'Preview is not observation-only')
        for flag in ('apply', 'capture'):
            require(enhancement[flag] is False, 'Enabled output/capture: ' + flag)
        require(enhancement['tyre_lateral_profile']['enabled'] is False,
                'Tyre profile must be disabled')
        for flag in ('calibration_capture_only', 'tyre_observation_capture', 'rejection_diagnostic'):
            require(enhancement.get(flag) in (None, False), 'Temporary option: ' + flag)
        for name in names:
            parts = {p.lower() for p in PurePosixPath(name).parts}
            require(not parts.intersection({'backups', 'reports', '.git', '__pycache__'}),
                    'Development directory: ' + name)
            require(PurePosixPath(name).suffix.lower() not in {'.log', '.jsonl', '.pdb', '.pyc'},
                    'Development/runtime artifact: ' + name)
        for name in ('ACNextGenCore.dll', 'ACNextGenHost.exe'):
            binary = archive.read(PLUGIN + 'bin/' + name)
            require(binary[:2] == b'MZ', 'Invalid executable: ' + name)
    return {'archive': str(path), 'sha256': hashlib.sha256(Path(path).read_bytes()).hexdigest(),
            'entries': len(names), 'payload_files': len(seen), 'result': 'passed',
            'scope': 'Archive integrity and observation configuration; no CM or vehicle-response proof'}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('archive', type=Path)
    args = parser.parse_args()
    print(json.dumps(verify(args.archive), indent=2))
