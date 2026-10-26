// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkPokeLimiterVisual.h"

#ifdef OCULUSINTERACTION_IsdkPokeLimiterVisual_generated_h
#error "IsdkPokeLimiterVisual.generated.h already included, missing '#pragma once' in IsdkPokeLimiterVisual.h"
#endif
#define OCULUSINTERACTION_IsdkPokeLimiterVisual_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandDataSource;
class UIsdkPokeInteractor;
class UIsdkSyntheticHand;

// ********** Begin Class UIsdkPokeLimiterVisual ***************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDataSource); \
	DECLARE_FUNCTION(execSetSyntheticHand); \
	DECLARE_FUNCTION(execSetPokeInteractor); \
	DECLARE_FUNCTION(execGetDataSource); \
	DECLARE_FUNCTION(execGetSyntheticHand); \
	DECLARE_FUNCTION(execGetPokeInteractor);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPokeLimiterVisual(); \
	friend struct Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPokeLimiterVisual, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPokeLimiterVisual)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPokeLimiterVisual(UIsdkPokeLimiterVisual&&) = delete; \
	UIsdkPokeLimiterVisual(const UIsdkPokeLimiterVisual&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPokeLimiterVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPokeLimiterVisual); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPokeLimiterVisual) \
	NO_API virtual ~UIsdkPokeLimiterVisual();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_64_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPokeLimiterVisual;

// ********** End Class UIsdkPokeLimiterVisual *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
