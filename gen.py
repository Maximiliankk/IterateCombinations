import subprocess

subprocess.check_call([
    'cmake',
    '-B', 'build',
    '-S', '.'
])
