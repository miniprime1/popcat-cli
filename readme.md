# PopCat CLI
pop pop pop pop pop pop pop pop

## Overview
PopCat CLI is Popcat app for Command-line interface(CLI).  
This app provide best Popcat experience to CLI users.

## Features
 - Support for Windows, MacOS, Linux
 - Popcat App for CLI

## Install
To install PopCat CLI, use the provided binary package or build from source code.
For unlisted systems, please follow the instructions in Build from Source Code.

### Windows
On Windows you can use one of the following options to install the app:
 - The Installer (popcat-1.0.0.exe)
 - Portable Zip Package (popcat-1.0.0-embed-win32.zip)
 - Build from Source Code (popcat-1.0.0.tar.gz or popcat-1.0.0.tgz)

When using the Installer, please execuate follwing PowerShell command as a administrator after installation:
```
$OldPath = (Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name path).path
$NewPath = "$OldPath;C:\Program Files (x86)\PopCat CLI"
Set-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name path -Value $NewPath
```

When using Build from Source Code, please refer to the Build from Source Code documentation.

### MacOS
On MacOS you can use one of the following options to install the app:
 - Mac OS X Installer Package (popcat-1.0.0-macosx.pkg)
 - Portable Zip Package (popcat-1.0.0-embed-macosx.zip)
 - Build from Source Code (popcat-1.0.0.tar.gz or popcat-1.0.0.tgz)

When using the Installer, please execuate follwing command after installation:
```
export PATH=/Library/PopCat/1.0.0/:$PATH
```

When using Build from Source Code, please refer to the Build from Source Code documentation.

### Linux
On Linux you can use one of the following options to install the app:
 - Debian Software Package (popcat-1.0.0-linux.deb)
 - Portable Zip Package (popcat-1.0.0-embed-linux.zip)
 - Build from Source Code (popcat-1.0.0.tar.gz or popcat-1.0.0.tgz)

When using the Build from Source Code, please refer to the Build from Source Code documentation.

## Build from Source Code
 To build the application from source code, first install the required dependencies:
  - GCC 9.1.0+ (for Unix)
  - Visual Studio 2019 & MSVC v142 (for Windows)

### Windows
 - (1) Create solution with template "Empty Solution (C++)"
 - (2) Create "main.c" in Source Files
 - (3) Copy the "main.c" of source code
 - (4) Paste to "main.c" in visual studio solution
 - (5) Build the solution
 - (6) You can now run the built app.

### Unix (or Unix-like)
 - (1) Download source code & Change directory to source directory: 
   ```
   git clone https://github.com/miniprime1/popcat-cli/ && cd popcat-cli
   ```
 - (2) Build source code:
   ```
   gcc main.c -o popcat
   ```
 - (3) You can now run the built app:
   ```
   ./popcat
   ```

## License
 - `Source Code` [MIT License](license.txt)
 - `MacOS Installer Package Source` [Apache License](license.txt)
 - `Original Popcat Gif File` [emoji.gg Basic License](license.txt)
