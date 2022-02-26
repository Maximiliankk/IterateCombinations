import subprocess
import shutil

print('cleaning...')
dir_path = './build'
try:
    shutil.rmtree(dir_path)
except OSError as e:
    print("Error: %s : %s" % (dir_path, e.strerror))

print('generating project...')
subprocess.check_call([
    'cmake',
    '-B', 'build',
    '-S', '.'
])

print('building project...')
subprocess.check_call([
    'cmake',
    '--build', 'build'
])

print('running project...')
subprocess.check_call([
    './build/Debug/itr_combos.exe'
])
