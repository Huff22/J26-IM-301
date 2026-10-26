// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Grabbable/IsdkGrabbableAudio.h"

#ifdef OCULUSINTERACTION_IsdkGrabbableAudio_generated_h
#error "IsdkGrabbableAudio.generated.h already included, missing '#pragma once' in IsdkGrabbableAudio.h"
#endif
#define OCULUSINTERACTION_IsdkGrabbableAudio_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkGrabTransformerComponent;
enum class TransformEvent : uint8;

// ********** Begin Class UIsdkGrabbableAudio ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleGrabTransformerEvent); \
	DECLARE_FUNCTION(execGetGrabTransformer); \
	DECLARE_FUNCTION(execSetGrabTransformer);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableAudio_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabbableAudio(); \
	friend struct Z_Construct_UClass_UIsdkGrabbableAudio_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableAudio_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabbableAudio, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkGrabbableAudio_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabbableAudio)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabbableAudio(UIsdkGrabbableAudio&&) = delete; \
	UIsdkGrabbableAudio(const UIsdkGrabbableAudio&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabbableAudio); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabbableAudio); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabbableAudio) \
	NO_API virtual ~UIsdkGrabbableAudio();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_37_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabbableAudio;

// ********** End Class UIsdkGrabbableAudio ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
