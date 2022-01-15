# Logical test file
# Runs each test in the specified directory

echo "Running tests in '$1'"
for file in "$1/*Test.lgc"
do
    echo "Checking $file"
    if [$file =~ "*Test.lgc"]
    then
        echo "Running test $file (enter 'n' to skip)"
        read $goAhead
        if ($goAhead != "n")
        then
            echo "running $file"
            # python3.9 Logical.py $file
            clear
        fi
    fi
done
echo "All tests complete."