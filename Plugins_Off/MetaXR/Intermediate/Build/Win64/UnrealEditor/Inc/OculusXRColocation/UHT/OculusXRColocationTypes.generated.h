// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRColocationTypes.h"

#ifdef OCULUSXRCOLOCATION_OculusXRColocationTypes_generated_h
#error "OculusXRColocationTypes.generated.h already included, missing '#pragma once' in OculusXRColocationTypes.h"
#endif
#define OCULUSXRCOLOCATION_OculusXRColocationTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h

// ********** Begin Enum EColocationResult *********************************************************
#define FOREACH_ENUM_ECOLOCATIONRESULT(op) \
	op(EColocationResult::Success) \
	op(EColocationResult::Success_AlreadyAdvertising) \
	op(EColocationResult::Success_AlreadyDiscovering) \
	op(EColocationResult::Failure) \
	op(EColocationResult::FailureInvalidParameter) \
	op(EColocationResult::FailureDataIsInvalid) \
	op(EColocationResult::NetworkTimeout) \
	op(EColocationResult::NetworkRequestFailed) \
	op(EColocationResult::InsufficientPermissions) \
	op(EColocationResult::CloudStorageDisabled) \
	op(EColocationResult::NoDiscoveryMethodAvailable) 

enum class EColocationResult : uint8;
template<> struct TIsUEnumClass<EColocationResult> { enum { Value = true }; };
template<> OCULUSXRCOLOCATION_API UEnum* StaticEnum<EColocationResult>();
// ********** End Enum EColocationResult ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
