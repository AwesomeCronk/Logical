# Logical test file
# Runs each test in the specified directory

Write-Host "Running tests in '$($args[0])'"
foreach ($file in Get-ChildItem $args[0])
{
    if ($file -match "Test.lgc")
    {
        $goAhead = Read-Host "Running test $($file.Name) (enter 'n' to skip)"
        if ($goAhead -ne "n")
        {
            # echo ok
            python Logical.py $file
            Clear-Host
        }
    }
}

Write-Host "All tests complete."