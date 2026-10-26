// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkRayInteractor.h"

#ifdef OCULUSINTERACTION_IsdkRayInteractor_generated_h
#error "IsdkRayInteractor.generated.h already included, missing '#pragma once' in IsdkRayInteractor.h"
#endif
#define OCULUSINTERACTION_IsdkRayInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIHandPointerPose;
struct FIsdkOptionalSurfaceHit;
struct FIsdkRayInteractor_Config;

// ********** Begin Class UIsdkRayInteractor *******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execSetHandPointerPose); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCollisionInfo); \
	DECLARE_FUNCTION(execGetHandPointerPose); \
	DECLARE_FUNCTION(execUnselect); \
	DECLARE_FUNCTION(execSelect);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRayInteractor(); \
	friend struct Z_Construct_UClass_UIsdkRayInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRayInteractor, UIsdkInteractorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkRayInteractor_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRayInteractor)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRayInteractor(UIsdkRayInteractor&&) = delete; \
	UIsdkRayInteractor(const UIsdkRayInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRayInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRayInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkRayInteractor) \
	NO_API virtual ~UIsdkRayInteractor();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_55_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRayInteractor;

// ********** End Class UIsdkRayInteractor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
