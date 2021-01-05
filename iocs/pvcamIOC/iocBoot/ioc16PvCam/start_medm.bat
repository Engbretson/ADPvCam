set EPICS_DISPLAY_PATH=X:\PreBuilts\areaDetector-R3-10\ADPvCam-R2-2\pvcamApp\op\adl;X:\PreBuilts\areaDetector-R3-10\adcore-R3-10\ADApp\op\adl

start medm -x -macro "P=16PVCAM1:, R=cam1:" pvCam.adl
start medm -attach -x -macro "P=16PVCAM1:, R=cam1:" ADBase.adl


