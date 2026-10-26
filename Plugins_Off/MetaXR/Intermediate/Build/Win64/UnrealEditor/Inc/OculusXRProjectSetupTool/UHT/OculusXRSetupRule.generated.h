// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSetupRule.h"

#ifdef OCULUSXRPROJECTSETUPTOOL_OculusXRSetupRule_generated_h
#error "OculusXRSetupRule.generated.h already included, missing '#pragma once' in OculusXRSetupRule.h"
#endif
#define OCULUSXRPROJECTSETUPTOOL_OculusXRSetupRule_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRSetupRule_h

// ********** Begin Enum ESetupRulePlatform ********************************************************
#define FOREACH_ENUM_ESETUPRULEPLATFORM(op) \
	op(ESetupRulePlatform::None) \
	op(ESetupRulePlatform::MetaLink) \
	op(ESetupRulePlatform::MetaQuest_2) \
	op(ESetupRulePlatform::MetaQuest_3) \
	op(ESetupRulePlatform::MetaQuest_Pro) 

enum class ESetupRulePlatform : uint32;
template<> struct TIsUEnumClass<ESetupRulePlatform> { enum { Value = true }; };
template<> OCULUSXRPROJECTSETUPTOOL_API UEnum* StaticEnum<ESetupRulePlatform>();
// ********** End Enum ESetupRulePlatform **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
