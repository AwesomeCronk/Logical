import os, shutil, sys

applicationName = 'Logical'
installerVersion = '1.2.0'
downloadDir = os.path.dirname(os.path.realpath(__file__))

applicationVersions = [str.join('.', folder.split('.')[1:]) for folder in os.listdir(os.path.join(downloadDir, 'dist')) if folder.split('.')[0] == applicationName]
applicationVersion = sorted(applicationVersions)[-1] # Last entry is highest version number

class directory():
    def __init__(self, path, files, fromFolder=downloadDir, overwrite=True):
        self.path = path
        self.files = files  # List of files or str '*'
        self.fromFolder = fromFolder    # Specifies what folder to pull files from
        self.overwrite = overwrite

    def addFile(self, file):
        self.files.append(file)

# This is the listing of directories to modify.
# Set it up as a dictionary of {name: directory(path, files, fromFolder, overwrite)}
directories = {
    'install': directory(
        os.path.expandvars('%USERPROFILE%\\AppData\\Local\\Programs\\Logical'),
        '*',
        fromFolder='dist\\{}.{}'.format(applicationName, applicationVersion),
        overwrite = True
        )
    }

def version():
    print('Using {} installer version {}.'.format(applicationName, installerVersion))

if len(sys.argv) > 1:
    if sys.argv[1] == 'version':
        version()
else:
    for k in list(directories.keys()):
        print('Processing directory {}.'.format(k))
        d = directories[k]
        if os.path.exists(d.path):
            if d.overwrite:
                print('Removing directory {}.'.format(d.path))
                shutil.rmtree(d.path)

            # Create d.path
            print('Creating directory {}.'.format(d.path))
            os.mkdir(d.path)

            # copy the necessary files to d.path
            if isinstance(d.files, str):
                files = os.listdir(d.fromFolder)
            else:
                files = d.files
            for file in files:
                print('Copying {} to {} ... '.format(os.path.join(d.fromFolder, file), d.path), end = '')
                shutil.copy(os.path.join(d.fromFolder, file), d.path)
                print('Done.')

            else:
                print('Directory {} already exists and not set to overwrite. Ignoring.'.format(d.path))