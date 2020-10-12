TOP=..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# The files in this directory are installed first because they are
# used by PVCam driver

ifeq (win32-x86, $(findstring win32-x86, $(T_A)))

INC_WIN32 += pvcam.h pv_icl.h
INC_WIN32 += master.h

BIN_INSTALLS_WIN32    += ../os/WIN32/pv_icl32.dll ../os/WIN32/pvcam32.dll
LIB_INSTALLS_WIN32    += ../os/WIN32/pv_icl32.lib ../os/WIN32/pvcam32.lib

else ifeq (windows-x64-static, $(findstring windows-x64-static, $(T_A)))
INC_WIN32 += ../PVCamSDK/Inc/pvcam.h ../PVCamSDK/Inc/master.h

BIN_INSTALLS_WIN32    += ../PVCamSDK/lib/amd64/pvcam64.dll
BIN_INSTALLS_WIN32    += ../PVCamSDK/lib/amd64/pvcamDDI.dll
LIB_INSTALLS_WIN32    += ../PVCamSDK/lib/amd64/pvcam64.lib

else ifeq (windows-x64, $(findstring windows-x64, $(T_A)))
INC_WIN32 += ../PVCamSDK/Inc/pvcam.h ..PVCamSDK/Inc/master.h

BIN_INSTALLS_WIN32    += ../PVCamSDK/lib/amd64/pvcam64.dll
BIN_INSTALLS_WIN32    += ../PVCamSDK/lib/amd64/pvcamDDI.dll
LIB_INSTALLS_WIN32    += ../PVCamSDK/lib/amd64/pvcam64.lib

endif

INC_Linux += master.h
INC_cygwin32 += master.h



# Note, the following files were manually copied from the PVCam distribution
# to this directory after building

BIN_INSTALLS_cygwin32 += ../os/cygwin32/pv_icl32.dll ../os/cygwin32/pvcam32.dll

LIB_INSTALLS_cygwin32 += ../os/cygwin32/pv_icl32.lib ../os/cygwin32/pvcam32.lib
LIB_INSTALLS_Linux    += ../os/Linux/libpvcam.so



#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

