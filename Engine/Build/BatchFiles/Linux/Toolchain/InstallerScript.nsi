; InstallerScript.nsi
;
; This script is will create a single file .exe installer in the same directory
;
; You need NSIS: Nullsoft Scriptable Install System
; https://sourceforge.net/projects/nsis/files/latest/download
;
; To generate installer, right click on the script and select "Compile NSIS Script"

;--------------------------------

; Configuration

!define TOOLCHAIN_VERSION "v21_clang-15.0.1-centos7"
!define PROJECT_NAME "Unreal Linux Toolchain ${TOOLCHAIN_VERSION}"
!define SOURCE_TOOLCHAIN_DIR "OUTPUT"
!define ENV_VAR_NAME "LINUX_MULTIARCH_ROOT"

;--------------------------------

SetCompressor lzma

; The name of the installer
Name "${PROJECT_NAME}"

; The file to write
OutFile "${TOOLCHAIN_VERSION}.exe"

; The default installation directory
InstallDir "C:\UnrealToolchains\${TOOLCHAIN_VERSION}"

; Registry key to check for directory (so if you install again, it will
; overwrite the old one automatically)
InstallDirRegKey HKLM "Software\${PROJECT_NAME}" "Install_Dir"

; Request application privileges for Windows Vista
RequestExecutionLevel admin

;--------------------------------

; Pages

Page Components
Page Directory "" "" DirectoryLeave
Page InstFiles

UninstPage UninstConfirm
UninstPage InstFiles

;--------------------------------

; Utilities
Function CheckForSpaces
  Exch $R0
  Push $R1
  Push $R2
  Push $R3
  StrCpy $R1 -1
  StrCpy $R3 $R0
  StrCpy $R0 0
  loop:
    StrCpy $R2 $R3 1 $R1
    IntOp $R1 $R1 - 1
    StrCmp $R2 "" done
    StrCmp $R2 " " 0 loop
    IntOp $R0 $R0 + 1
  Goto loop
  done:
  Pop $R3
  Pop $R2
  Pop $R1
  Exch $R0
FunctionEnd

Function DirectoryLeave

  # Call the CheckForSpaces function.
  Push $INSTDIR # Input string (install path).
  Call CheckForSpaces
  Pop $R0 # The function returns the number of spaces found in the input string.

  # Check if any spaces exist in $INSTDIR.
  StrCmp $R0 0 NoSpaces

    # Plural if more than 1 space in $INSTDIR.
    StrCmp $R0 1 0 +3
      StrCpy $R1 ""
    Goto +2
      StrCpy $R1 "s"

    # Show message box then take the user back to the Directory page.
    MessageBox MB_OK|MB_ICONEXCLAMATION "Error: The Installaton directory \
    has $R0 space$R1.$\nPlease remove the space$R1."
    Abort

  NoSpaces:

FunctionEnd

;--------------------------------

; The stuff to install
Section "${PROJECT_NAME} (required)"

  SectionIn RO

  ; Set output path to the installation directory.
  SetOutPath $INSTDIR

  ; Put file there
  File /r "${SOURCE_TOOLCHAIN_DIR}\*.*"

  ; Write the installation path into the registry
  WriteRegStr HKLM "Software\${PROJECT_NAME}" "Install_Dir" "$INSTDIR"

  ; Write the uninstall keys for Windows
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PROJECT_NAME}" "DisplayName" "${PROJECT_NAME}"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PROJECT_NAME}" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PROJECT_NAME}" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PROJECT_NAME}" "NoRepair" 1
  WriteUninstaller "uninstall.exe"

  ; Set environment variable
  !include "winmessages.nsh"
  ; HKLM (all users) vs HKCU (current user) defines
  !define env_hklm 'HKLM "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"'
  ; set variable for local machine
  WriteRegExpandStr ${env_hklm} "${ENV_VAR_NAME}" "$INSTDIR\"
  ; make sure windows knows about the change
  SendMessage ${HWND_BROADCAST} ${WM_WININICHANGE} 0 "STR:Environment" /TIMEOUT=500

SectionEnd

;--------------------------------

; Uninstaller

Section "Uninstall"

  ; Delete environment variable
  DeleteRegValue ${env_hklm} "${ENV_VAR_NAME}"
  ; make sure windows knows about the change
  SendMessage ${HWND_BROADCAST} ${WM_WININICHANGE} 0 "STR:Environment" /TIMEOUT=500

  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PROJECT_NAME}"
  DeleteRegKey HKLM "Software\${PROJECT_NAME}"

  ; Remove installation directory
  RMDir /r "$INSTDIR"

SectionEnd
