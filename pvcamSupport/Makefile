TOP=..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# The files in this directory are installed first because they are
# used by PVCam driver

INC += pvcam.h master.h

LIB_INSTALLS += ../os/WIN64/lib/pvcam64.lib
BIN_INSTALLS += ../os/WIN64/lib/pvcam64.dll ../os/WIN64/lib/pvcamDDI.dll

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

