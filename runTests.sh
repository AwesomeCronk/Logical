#!/bin/bash
# Logical test file
# Runs each test in the specified directory

echo "Running tests in '$1'"
cd $1
for file in *
do
    if [[ $file =~ .*Test\.lgc ]]
    then
        echo
        echo "Running test $file (enter 'n' to skip)"
        read goAhead
        if [[ $goAhead != "n" ]]
        then
            # echo "running $file"
            python3.9 ../Logical.py $file
            
        fi
    fi
done
echo "All tests complete."