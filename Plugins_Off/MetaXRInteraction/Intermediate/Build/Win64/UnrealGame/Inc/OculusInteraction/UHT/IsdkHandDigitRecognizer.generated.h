// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandPoseDetection/IsdkHandDigitRecognizer.h"

#ifdef OCULUSINTERACTION_IsdkHandDigitRecognizer_generated_h
#error "IsdkHandDigitRecognizer.generated.h already included, missing '#pragma once' in IsdkHandDigitRecognizer.h"
#endif
#define OCULUSINTERACTION_IsdkHandDigitRecognizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkHandDigitRecognizer *************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRawExpectedRange); \
	DECLARE_FUNCTION(execGetRawValue); \
	DECLARE_FUNCTION(execGetNormalizedRawValue); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execUpdateState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandDigitRecognizer(); \
	friend struct Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandDigitRecognizer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandDigitRecognizer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandDigitRecognizer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkHandDigitRecognizer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandDigitRecognizer(UIsdkHandDigitRecognizer&&) = delete; \
	UIsdkHandDigitRecognizer(const UIsdkHandDigitRecognizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandDigitRecognizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandDigitRecognizer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkHandDigitRecognizer) \
	NO_API virtual ~UIsdkHandDigitRecognizer();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_40_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandDigitRecognizer;

// ********** End Class UIsdkHandDigitRecognizer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
