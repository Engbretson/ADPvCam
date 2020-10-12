/******************************************************************************/
/* Copyright by Photometrics and QImaging. All rights reserved.               */
/******************************************************************************/
#pragma once
#ifndef PVCAM_HELPER_PARAM_BROWSER_H
#define PVCAM_HELPER_PARAM_BROWSER_H

/* PVCAM */
#include <master.h>

/**
Major version number.

This part of version number changes whenever a binary incompatible modification
to library API is done, e.g. changed name or prototype of existing function.

Applications can check this at compile time to use appropriate syntax.
*/
#define PH_PARAM_BROWSER_VERSION_MAJOR 1
/**
Minor version number.

This part of version number changes whenever a binary compatible modification to
library API is done, e.g. added new function or data type.

Applications can check this at compile time to use new functions and/or types.
*/
#define PH_PARAM_BROWSER_VERSION_MINOR 1

/// Recommended minimal output buffer size.
#define PH_PARAM_BROWSER_MAX_BUFFER_SIZE 20000

#ifdef PV_C_PLUS_PLUS
extern "C"
{
#endif

/******************************************************************************/
/**
Offers all three parts of the helper library version.

This function can be called at any time even before the library has been
initialized. It could fail only in case the NULL pointer is given as parameter.

@param[out] pVerMajor   Major version number, returns at runtime the same as
                        macro #PH_PARAM_BROWSER_VERSION_MAJOR.
@param[out] pVerMinor   Minor version number, returns at runtime the same as
                        macro #PH_PARAM_BROWSER_VERSION_MINOR.
@param[out] pVerBuild   Build version number, provided for completeness.
                        It is always increasing number changed with every
                        modification in library.

@return Returns PV_OK (TRUE) on success, PV_FAIL (FALSE) otherwise.
*/
rs_bool PV_DECL ph_param_browser_get_lib_version(uns16* pVerMajor,
        uns16* pVerMinor, uns16* pVerBuild);
/** For loading #ph_param_browser_get_lib_version at run-time. */
typedef rs_bool (PV_DECL *ph_param_browser_get_lib_version_fn)(uns16* pVerMajor,
        uns16* pVerMinor, uns16* pVerBuild);
/** For loading #ph_param_browser_get_lib_version at run-time. */
#define ph_param_browser_get_lib_version_fn_name \
        "ph_param_browser_get_lib_version"

/******************************************************************************/
/**
Sorts out parameters blocked by GUI.

This function fails only when parameter params is a nullptr.

@param[in] hcam         Identifier of the camera.
@param[in] numOfParams  Number of inserted parameters blocked by GUI.
@param[in] params       Pointer to a start of array of parameters.

@return Returns PV_OK (TRUE) on success, PV_FAIL (FALSE) otherwise.
*/
rs_bool PV_DECL ph_param_browser_input_params(int16 hcam, uns32 numOfParams,
        uns32* params);
/** For loading #ph_param_browser_input_params at run-time. */
typedef rs_bool (PV_DECL *ph_param_browser_input_params_fn)(int16 hcam,
        uns32 numOfParams, uns32* params);
/** For loading #ph_param_browser_input_params at run-time. */
#define ph_param_browser_input_params_fn_name "ph_param_browser_input_params"

/******************************************************************************/
/**
Initializes the internal state of library for given camera handle.

@param[in] hcam   Identifier of the camera.

@return Returns PV_OK (TRUE) on success, PV_FAIL (FALSE) otherwise.
*/
rs_bool PV_DECL ph_param_browser_init(int16 hcam);
/** For loading #ph_param_browser_init at run-time. */
typedef rs_bool (PV_DECL *ph_param_browser_init_fn)(int16 hcam);
/** For loading #ph_param_browser_init at run-time. */
#define ph_param_browser_init_fn_name "ph_param_browser_init"

/******************************************************************************/
/**
Uninitializes the internal state of library for given camera handle.

@param[in] hcam   Identifier of the camera.

@return Returns PV_OK (TRUE) on success, PV_FAIL (FALSE) otherwise.
*/
rs_bool PV_DECL ph_param_browser_uninit(int16 hcam);
/** For loading #ph_param_browser_uninit at run-time. */
typedef rs_bool (PV_DECL *ph_param_browser_uninit_fn)(int16 hcam);
/** For loading #ph_param_browser_uninit at run-time. */
#define ph_param_browser_uninit_fn_name "ph_param_browser_uninit"

/******************************************************************************/
/**
Sorts out parameters blocked by GUI.

This function fails only when parameter params is a nullptr.

@param[in] hcam      Identifier of the camera.
@param[in] pInput    Pointer to a start of a char array of user input.
@param[in] inputSize Size of the user input.
@param[in] pOutput   Pointer to a start of a char array of dll output returned
                     from dll.
                     Uses macro #MAX_BUFFER_SIZE for the size of the output.

@return Returns PV_OK (TRUE) on success, PV_FAIL (FALSE) otherwise.
*/
rs_bool PV_DECL ph_param_browser_invoke(int16 hcam, const char* pInput,
        uns32 inputSize, char* pOutput);
/** For loading #ph_param_browser_invoke at run-time. */
typedef rs_bool (PV_DECL *ph_param_browser_invoke_fn)(int16 hcam,
        const char* pInput, uns32 inputSize, char* pOutput);
/** For loading #ph_param_browser_invoke at run-time. */
#define ph_param_browser_invoke_fn_name "ph_param_browser_invoke"

#ifdef PV_C_PLUS_PLUS
};
#endif

#endif // PVCAM_HELPER_PARAM_BROWSER
