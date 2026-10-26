// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneTypes.h"

#ifdef OCULUSXRSCENE_OculusXRSceneTypes_generated_h
#error "OculusXRSceneTypes.generated.h already included, missing '#pragma once' in OculusXRSceneTypes.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSceneTypesPlaceholder ********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSceneTypesPlaceholder;
// ********** End ScriptStruct FSceneTypesPlaceholder **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h

// ********** Begin Enum EOculusXRBoundaryVisibility ***********************************************
#define FOREACH_ENUM_EOCULUSXRBOUNDARYVISIBILITY(op) \
	op(EOculusXRBoundaryVisibility::Invalid) \
	op(EOculusXRBoundaryVisibility::NotSuppressed) \
	op(EOculusXRBoundaryVisibility::Suppressed) 

enum class EOculusXRBoundaryVisibility : uint8;
template<> struct TIsUEnumClass<EOculusXRBoundaryVisibility> { enum { Value = true }; };
template<> OCULUSXRSCENE_API UEnum* StaticEnum<EOculusXRBoundaryVisibility>();
// ********** End Enum EOculusXRBoundaryVisibility *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
