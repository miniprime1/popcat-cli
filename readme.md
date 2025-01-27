# PopCat CLI
pop pop pop pop pop pop pop pop

<br>

## Overview
PopCat CLI is Popcat app for Command-line interface(CLI).  
This app provide best Popcat experience to CLI users.

<br>

## Install
To install PopCat CLI, use installer or binary package.

### Windows
On Windows you can use one of the following options to install the app:
 - Installer: [popcat-1.0.0-win32.exe](release/1.0.0/popcat-1.0.0-win32.exe)
 - Compressed executable: [popcat-1.0.0-executable-win32.zip](release/1.0.0/popcat-1.0.0-executable-win32.zip)

After using the Installer, please execuate follwing PowerShell command as a administrator after installation:
```
$OldPath = (Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name path).path
$NewPath = "$OldPath;C:\Program Files (x86)\PopCat CLI"
Set-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name path -Value $NewPath
```

### macOS
On macOS you can use one of the following options to install the app:
 - macOS Installer Package: [popcat-1.0.0-macos-x86_64.pkg](release/1.0.0/popcat-1.0.0-macos-x86_64.pkg) or [popcat-1.0.0-macos-arm64.pkg](release/1.0.0/popcat-1.0.0-macos-arm64.pkg)
 - Compressed executable: [popcat-1.0.0-executable-macos-x86_64.zip](release/1.0.0/popcat-1.0.0-executable-macos-x86_64.zip) or [popcat-1.0.0-executable-macos-arm64.zip](release/1.0.0/popcat-1.0.0-executable-macos-arm64.zip)

After using the Installer, please execuate follwing command after installation:
```
export PATH=/Library/PopCat/1.0.0/:$PATH
```

### Linux
On Linux you can use one of the following options to install the app:
 - Debian package: [popcat-1.0.0-linux-x86-64.deb](release/1.0.0/popcat-1.0.0-linux-x86-64.deb)
 - Compressed executable:  [popcat-1.0.0-executable-linux-x86-64.zip](release/1.0.0/popcat-1.0.0-executable-linux-x86-64.zip)
 
<br>

## Build from Source Code
 To build the application from source code, first install the required dependencies:
  - GCC 9.1.0+

### How to:
1. Download source code
   ```
   git clone https://github.com/miniprime1/popcat-cli
   ```
2. Change directory to source directory
   ```
   cd popcat-cli
   ```

3. Build source code
   ```
   gcc main.c -o popcat
   ```
   
<br>

## License
 - `Source Code` [MIT License](license.txt)
 - `MacOS Installer Package Source` [Apache License](license.txt)
