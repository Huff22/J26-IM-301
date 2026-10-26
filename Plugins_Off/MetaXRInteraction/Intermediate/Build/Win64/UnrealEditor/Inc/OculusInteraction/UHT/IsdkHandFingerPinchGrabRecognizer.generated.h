// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h"

#ifdef OCULUSINTERACTION_IsdkHandFingerPinchGrabRecognizer_generated_h
#error "IsdkHandFingerPinchGrabRecognizer.generated.h already included, missing '#pragma once' in IsdkHandFingerPinchGrabRecognizer.h"
#endif
#define OCULUSINTERACTION_IsdkHandFingerPinchGrabRecognizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FIsdkPinchGrabRecognizerEventDelegate *********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_28_DELEGATE \
OCULUSINTERACTION_API void FIsdkPinchGrabRecognizerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkPinchGrabRecognizerEventDelegate);


// ********** End Delegate FIsdkPinchGrabRecognizerEventDelegate ***********************************

// ********** Begin Class UIsdkHandFingerPinchGrabRecognizer ***************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPinchStrength); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execUpdateState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandFingerPinchGrabRecognizer(); \
	friend struct Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandFingerPinchGrabRecognizer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandFingerPinchGrabRecognizer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandFingerPinchGrabRecognizer(UIsdkHandFingerPinchGrabRecognizer&&) = delete; \
	UIsdkHandFingerPinchGrabRecognizer(const UIsdkHandFingerPinchGrabRecognizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandFingerPinchGrabRecognizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandFingerPinchGrabRecognizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandFingerPinchGrabRecognizer) \
	NO_API virtual ~UIsdkHandFingerPinchGrabRecognizer();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_47_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandFingerPinchGrabRecognizer;

// ********** End Class UIsdkHandFingerPinchGrabRecognizer *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
