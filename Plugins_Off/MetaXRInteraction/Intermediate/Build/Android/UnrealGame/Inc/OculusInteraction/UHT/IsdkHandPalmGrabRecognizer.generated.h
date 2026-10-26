// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandPoseDetection/IsdkHandPalmGrabRecognizer.h"

#ifdef OCULUSINTERACTION_IsdkHandPalmGrabRecognizer_generated_h
#error "IsdkHandPalmGrabRecognizer.generated.h already included, missing '#pragma once' in IsdkHandPalmGrabRecognizer.h"
#endif
#define OCULUSINTERACTION_IsdkHandPalmGrabRecognizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FIsdkPalmGrabRecognizerEventDelegate **********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_28_DELEGATE \
OCULUSINTERACTION_API void FIsdkPalmGrabRecognizerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkPalmGrabRecognizerEventDelegate);


// ********** End Delegate FIsdkPalmGrabRecognizerEventDelegate ************************************

// ********** Begin Class UIsdkHandPalmGrabRecognizer **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPalmGrabMinFingers); \
	DECLARE_FUNCTION(execSetPalmGrabMinFingerCurl); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execUpdateState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandPalmGrabRecognizer(); \
	friend struct Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandPalmGrabRecognizer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandPalmGrabRecognizer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandPalmGrabRecognizer(UIsdkHandPalmGrabRecognizer&&) = delete; \
	UIsdkHandPalmGrabRecognizer(const UIsdkHandPalmGrabRecognizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandPalmGrabRecognizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandPalmGrabRecognizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandPalmGrabRecognizer) \
	NO_API virtual ~UIsdkHandPalmGrabRecognizer();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_43_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandPalmGrabRecognizer;

// ********** End Class UIsdkHandPalmGrabRecognizer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
