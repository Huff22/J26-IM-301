// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitLightDispatcher.h"

#ifdef MRUTILITYKIT_MRUtilityKitLightDispatcher_generated_h
#error "MRUtilityKitLightDispatcher.generated.h already included, missing '#pragma once' in MRUtilityKitLightDispatcher.h"
#endif
#define MRUTILITYKIT_MRUtilityKitLightDispatcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class AMRUKLightDispatcher *****************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceUpdateCollection); \
	DECLARE_FUNCTION(execAddAdditionalPointLightActor);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKLightDispatcher_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKLightDispatcher(); \
	friend struct Z_Construct_UClass_AMRUKLightDispatcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKLightDispatcher_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKLightDispatcher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKLightDispatcher_NoRegister) \
	DECLARE_SERIALIZER(AMRUKLightDispatcher)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKLightDispatcher(AMRUKLightDispatcher&&) = delete; \
	AMRUKLightDispatcher(const AMRUKLightDispatcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKLightDispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKLightDispatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRUKLightDispatcher) \
	NO_API virtual ~AMRUKLightDispatcher();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_15_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKLightDispatcher;

// ********** End Class AMRUKLightDispatcher *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitLightDispatcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
