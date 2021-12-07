#!/bin/bash

# program = $1
program='Logical'
version=$(cat '$program.version.txt')

echo 'Building $program.exe version $version...'
python3.9 -m nuitka --standalone --include-data-file=Logical.version.txt=Logical.version.txt --include-data-file=LICENSE=LICENSE --include-data-file=README.md=README.md '$program.py' #Build with Nuitka
if ($args -notcontains '--nocleanup') {
    Remove-Item -Recurse -Force '$program.build' #Delete the build directory
}

Remove-Item 'dist/$program.$version' -Recurse -Force -ErrorAction Ignore
Move-Item '$program.dist' 'dist/$program.$version.win32'

Write-Output 'Done building $program.exe.'
