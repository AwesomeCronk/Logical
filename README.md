# Logical

This program is a logic gate simulator for Windows. It supports all the basic gates and the ability to create sub-circuits. Some ideas I hope to implement eventually are multi-core processing and network multi-machine processing.

## Getting Started
The best way to get started is by reading through the docs. They are written in a way that is half documentation, half crash course. It is best to start with the page on syntax.

## To Do
* ~~Fix tristates and busses~~
* ~~Improve/fix includes~~
* ~~Automatic circuit updates~~
* ~~Documentation~~ Started - needs more actual language work done to continue.
* ~~Improve the UI~~ Started - needs some controls and more outputs.
* Multiprocessing
* Multi-PC processing via sockets?
* Actual command line args with `argparse`
* Error logging with `logging`
* Error handling

## Release Notes
* 0.1.0 - Added version tracking
* 0.2.0 - Fixed includes
* 0.3.0 - Reworked syntax, started documentation, started the UI overhaul
* 0.3.1 - Added missing controls, fixed elements not connecting, fixed some ANSI bugs
* 0.3.2 - Fixed the issue with PyInstaller by rolling pynput back to version 1.6.8
* 0.3.3 - Fixed buttons
* 0.3.4 - Fixed included elements not connecting properly
* 0.4.0 - Added truth tables
* 0.5.0 - Added Python elements
* 0.5.1 - Added a check for input, output, and arg count.
* 0.6.0 - Switched to Nuitka for the compiler and added a pause indicator.