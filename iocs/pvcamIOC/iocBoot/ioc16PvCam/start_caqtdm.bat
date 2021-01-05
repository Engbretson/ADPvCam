set CAQTDM_DISPLAY_PATH=X:\PreBuilts\areaDetector-R3-10\ADPvCam-R2-2\pvcamApp\op\ui\autoconvert;X:\PreBuilts\areaDetector-R3-10\adcore-R3-10\ADApp\op\ui\autoconvert;X:\PreBuilts\areaDetector-R3-10\adcore-R3-10\ADApp\op\ui

start caqtdm -x -macro "P=16PVCAM1:, R=cam1:" pvCam.ui
start caqtdm -attach -x -macro "P=16PVCAM1:, R=cam1:" ADBase.ui
start caqtdm -attach -x -macro "P=16PVCAM1:, R=cam1:" ad_cam_image.ui



