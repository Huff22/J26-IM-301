// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughLayerShapes.h"

#ifdef OCULUSXRHMD_OculusXRPassthroughLayerShapes_generated_h
#error "OculusXRPassthroughLayerShapes.generated.h already included, missing '#pragma once' in OculusXRPassthroughLayerShapes.h"
#endif
#define OCULUSXRHMD_OculusXRPassthroughLayerShapes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOculusXRPassthrough_LayerResumed *************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h_11_DELEGATE \
OCULUSXRHMD_API void FOculusXRPassthrough_LayerResumed_DelegateWrapper(const FMulticastScriptDelegate& OculusXRPassthrough_LayerResumed);


// ********** End Delegate FOculusXRPassthrough_LayerResumed ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h

// ********** Begin Enum EOculusXRColorMapType *****************************************************
#define FOREACH_ENUM_EOCULUSXRCOLORMAPTYPE(op) \
	op(ColorMapType_None) \
	op(ColorMapType_GrayscaleToColor) \
	op(ColorMapType_Grayscale) \
	op(ColorMapType_ColorAdjustment) \
	op(ColorMapType_ColorLut) \
	op(ColorMapType_ColorLut_Interpolated) 
// ********** End Enum EOculusXRColorMapType *******************************************************

// ********** Begin Enum EOculusXRPassthroughLayerOrder ********************************************
#define FOREACH_ENUM_EOCULUSXRPASSTHROUGHLAYERORDER(op) \
	op(PassthroughLayerOrder_Overlay) \
	op(PassthroughLayerOrder_Underlay) 
// ********** End Enum EOculusXRPassthroughLayerOrder **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
