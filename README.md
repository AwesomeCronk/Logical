# Logical

Logical is a logic gate simulator for Windows. It supports all the basic gates and the ability to create sub-circuits. Some ideas I hope to implement eventually are multi-core processing and network multi-machine processing.

## Getting Started
The best way to get started is by reading through the docs. They are written in a way that is half documentation, half crash course. It is best to start with the page on syntax.

## To Do
* ~~Fix tristates and busses~~
* ~~Improve/fix includes~~
* ~~Automatic circuit updates~~
* ~~Documentation~~ Started - needs more actual language work done to continue.
* ~~Improve the UI~~
* Multiprocessing
* Multi-PC processing via sockets?
* Actual command line args with `argparse`
* Error logging with `logging`
* Error handling
* Circular inclusion detection

## Known Issues:
* ~~LED widgets are not updating after initial update. May be in the LED update, may be in the GUI update.~~
* ~~If the line `time.sleep(0.2)` is uncommented in the main loop, the GUI takes 6-7 seconds to update while paused.~~
* ~~Dumps random binary between string and end string of the first `print` command in `ui.ansiManager.__exit__`~~ Last three fixed - replaced sys.stdout with a non-buffering stream.