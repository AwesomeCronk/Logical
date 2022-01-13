# Release Notes
This document contains release notes for all versions from 0.1.0 on.

### 0.1.0
* Added version tracking.

### 0.2.0
* Fixed includes.

### 0.3.0
* Reworked syntax, started documentation, started the UI overhaul.

### 0.3.1
* Added missing controls, fixed elements not connecting, fixed some ANSI bugs.

### 0.3.2
* Fixed the issue with PyInstaller by rolling pynput back to version 1.6.8.

### 0.3.3
* Fixed buttons.

### 0.3.4
* Fixed included elements not connecting properly.

### 0.4.0
* Added truth tables.

### 0.5.0
* Added Python elements.

### 0.5.1
* Added a check for input, output, and arg count..

### 0.6.0
* Switched to Nuitka for the compiler and added a pause indicator.

### 0.6.1
* Improved truth tables by switching to lists instead of dicts.

### 0.6.2
* Fixed tristates.

### 0.6.3
* Removed debug printing from tristates.

### 0.7.0
* Fixed binary dump on exit.
* Fixed UI not updating.
* Fixed UI lag when paused.
* Added support for tristate logic, eliminating the need for bus objects.
* Improved PDB breakout by cleaning up what it prints when it returns.
* Fixed labels not accessble from lgc code.

### 0.8.0
* Added support for strings in element arguments.
* Added support for bussing in inputs and outputs.
* Cleaned up debug printing.
* Set up command line args.
* Repalced `keys` with `Logical -k`.

### 0.9.0.pre
* Added Linux support
* Added a log file
* Removed verbose mode
* Changed the key binding names
// * Fixed loops not working
* Upgraded to Python 3.9.9