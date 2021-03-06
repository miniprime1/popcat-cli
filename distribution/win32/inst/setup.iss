; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "PopCat CLI"
#define MyAppVersion "1.0"
#define MyAppPublisher "miniprime1"
#define MyAppURL "http://miniprime1.github.io/"
#define MyAppExeName "popcat.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{E6653ED3-6748-4BD7-9955-A06770373735}
AppName={#MyAppName}
AppVersion={#MyAppVersion}AppVerName={#MyAppName}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
LicenseFile=C:\Users\minip\OneDrive\???? ȭ??\popcat-1.0.0\source\win32\inst\license.txt
OutputBaseFilename=setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Users\minip\OneDrive\???? ȭ??\popcat-1.0.0\source\win32\inst\popcat.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\minip\OneDrive\???? ȭ??\popcat-1.0.0\source\win32\inst\icon.ico"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; IconFilename: "{app}\icon.ico"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; IconFilename: "{app}\icon.ico"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

