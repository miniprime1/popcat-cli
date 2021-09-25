# PopCat CLI
PopCat CLI is Popcat app for Command-line interface(CLI)

## Overview
PopCat CLI provide best Popcat experience to CLI users

## Features
 - Support for Windows, MacOS, Linux
 - Popcat App for CLI

## Install
To install PopCat CLI, use the provided binary package or build from source code.

### Windows
On Windows you can use one of the following options to install the app:
 - The Installer (popcat-1.0.0.exe)
 - Portable Zip Package (popcat-1.0.0-embed-win32.zip)

### MacOS
On MacOS you can use one of the following options to install the app:
 - Mac OS X Installer Package (popcat-1.0.0-macosx.pkg)
 - Portable Zip Package (popcat-1.0.0-embed-macosx.zip)

### Linux
On Linux you can use one of the following options to install the app:
 - Debian Software Package (popcat-1.0.0-linux.deb)
 - Portable Zip Package (popcat-1.0.0-embed-linux.zip)

## Build from Source Code
 To build the application from source code, first install the required dependencies:
  - GCC 9.1.0+ for Unix
  - Visual Studio 2019 & MSVC v142 for Windows

### Windows
 - (1) Create solution with template "Empty Solution (C++)"
 - (2) Create "main.c" in Source Files
 - (3) Copy the "main.c" of source code
 - (4) Paste to "main.c" in visual studio solution
 - (5) Build the solution
 - (6) You can now run the built app.

### Unix
 - (1) Download source code: 
```git clone https://github.com/miniprime1/popcat-cli/```
 - (2) Build source code:
```gcc main.c -o popcat```
 - (3) You can now run the built app:
```./popcat```

## Version Release
 - `[1.0]` Basic features

## License
 - [MIT License](LICENSE)
