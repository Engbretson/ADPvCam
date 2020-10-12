set EPICS_DISPLAY_PATH=X:\epics\synApps_6_1\support-v7\areaDetector-R3-9\ADPvCam\pvcamApp\op\adl;X:\epics\synApps_6_1\support-v7\areaDetector-R3-9\adcore-R3-9\ADApp\op\adl

start medm -x -macro "P=16PVCAM1:, R=cam1:" pvCam.adl
start medm -attach -x -macro "P=16PVCAM1:, R=cam1:" ADBase.adl


