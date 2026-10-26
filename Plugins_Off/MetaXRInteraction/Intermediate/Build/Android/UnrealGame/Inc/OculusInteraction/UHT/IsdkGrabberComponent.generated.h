// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkGrabberComponent.h"

#ifdef OCULUSINTERACTION_IsdkGrabberComponent_generated_h
#error "IsdkGrabberComponent.generated.h already included, missing '#pragma once' in IsdkGrabberComponent.h"
#endif
#define OCULUSINTERACTION_IsdkGrabberComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkDistanceGrabDetector;
class UIsdkGrabbableComponent;
class UIsdkGrabTransformerComponent;
class UIsdkHandGrabDetector;
class UIsdkRayGrabDetector;
enum class EIsdkGrabDetectorType : uint32;
enum class EIsdkGrabInputMethod : uint8;

// ********** Begin Class UIsdkGrabberComponent ****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleGrabbableCancelEvent); \
	DECLARE_FUNCTION(execSetGrabDetectionTypeAllowed); \
	DECLARE_FUNCTION(execIsGrabDetectionTypeAllowed); \
	DECLARE_FUNCTION(execSetGrabInputMethodAllowed); \
	DECLARE_FUNCTION(execIsGrabInputMethodAllowed); \
	DECLARE_FUNCTION(execGetDistanceGrabDetector); \
	DECLARE_FUNCTION(execGetRayGrabDetector); \
	DECLARE_FUNCTION(execGetHandGrabDetector); \
	DECLARE_FUNCTION(execGetGrabbedComponent); \
	DECLARE_FUNCTION(execIsGrabbing);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabberComponent(); \
	friend struct Z_Construct_UClass_UIsdkGrabberComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabberComponent, UIsdkSceneInteractorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabberComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabberComponent(UIsdkGrabberComponent&&) = delete; \
	UIsdkGrabberComponent(const UIsdkGrabberComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabberComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabberComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabberComponent) \
	NO_API virtual ~UIsdkGrabberComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_50_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabberComponent;

// ********** End Class UIsdkGrabberComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
