// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Grabbable/IsdkGrabFreeTransformer.h"

#ifdef OCULUSINTERACTION_IsdkGrabFreeTransformer_generated_h
#error "IsdkGrabFreeTransformer.generated.h already included, missing '#pragma once' in IsdkGrabFreeTransformer.h"
#endif
#define OCULUSINTERACTION_IsdkGrabFreeTransformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIsdkGrabPointDelta ***********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkGrabPointDelta;
// ********** End ScriptStruct FIsdkGrabPointDelta *************************************************

// ********** Begin ScriptStruct FIsdkGrabFreeTransformerConfig ************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkGrabFreeTransformerConfig;
// ********** End ScriptStruct FIsdkGrabFreeTransformerConfig **************************************

// ********** Begin Class UIsdkGrabFreeTransformer *************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGrabCount);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabFreeTransformer(); \
	friend struct Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabFreeTransformer, UIsdkTransformer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabFreeTransformer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabFreeTransformer(UIsdkGrabFreeTransformer&&) = delete; \
	UIsdkGrabFreeTransformer(const UIsdkGrabFreeTransformer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabFreeTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabFreeTransformer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabFreeTransformer) \
	NO_API virtual ~UIsdkGrabFreeTransformer();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_144_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabFreeTransformer;

// ********** End Class UIsdkGrabFreeTransformer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
