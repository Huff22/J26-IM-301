// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkPokeInteractor.h"

#ifdef OCULUSINTERACTION_IsdkPokeInteractor_generated_h
#error "IsdkPokeInteractor.generated.h already included, missing '#pragma once' in IsdkPokeInteractor.h"
#endif
#define OCULUSINTERACTION_IsdkPokeInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIRootPose;
struct FIsdkPokeInteractor_Config;

// ********** Begin Class UIsdkPokeInteractor ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execSetRootPose); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetRootPose);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPokeInteractor(); \
	friend struct Z_Construct_UClass_UIsdkPokeInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPokeInteractor, UIsdkInteractorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPokeInteractor)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPokeInteractor(UIsdkPokeInteractor&&) = delete; \
	UIsdkPokeInteractor(const UIsdkPokeInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPokeInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPokeInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPokeInteractor) \
	NO_API virtual ~UIsdkPokeInteractor();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_53_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPokeInteractor;

// ********** End Class UIsdkPokeInteractor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
