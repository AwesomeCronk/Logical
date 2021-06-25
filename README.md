# Logical

This program is a logic gate simulator for Windows. It supports all the basic gates and the ability to create sub-circuits. Some ideas I hope to implement eventually are multi-core processing and network multi-machine processing.

## Structure of commands
### Multiple entries per line are separated by a ;
* entry; entry
### Each entry has a listing and optionally args, separated by the &
* listing
* listing & args
### Each listing has an element followed by inputs and outputs
* element in in > out
### Should look like this:
* element in in > out & arg arg
* element in in > out out; element in in in > out & arg

## To Do
* ~~Fix tristates and busses~~
* ~~Improve/fix includes~~
* Automatic circuit updates
* Documentation
* Improve the UI
* Multiprocessing
* Multi-PC processing via sockets?
* Actual command line args with `argparse`
* Error logging with `logging`

## Release Notes
* 0.1.0 - Added version tracking
* 0.2.0 - Fixed includes
