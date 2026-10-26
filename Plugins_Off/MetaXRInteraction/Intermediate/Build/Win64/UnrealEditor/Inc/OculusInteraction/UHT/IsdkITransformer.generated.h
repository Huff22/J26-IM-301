// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Grabbable/IsdkITransformer.h"

#ifdef OCULUSINTERACTION_IsdkITransformer_generated_h
#error "IsdkITransformer.generated.h already included, missing '#pragma once' in IsdkITransformer.h"
#endif
#define OCULUSINTERACTION_IsdkITransformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIsdkGrabPose *****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkGrabPose_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkGrabPose;
// ********** End ScriptStruct FIsdkGrabPose *******************************************************

// ********** Begin ScriptStruct FIsdkTargetTransform **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkTargetTransform;
// ********** End ScriptStruct FIsdkTargetTransform ************************************************

// ********** Begin Interface UIsdkITransformer ****************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITransformer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkITransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkITransformer(UIsdkITransformer&&) = delete; \
	UIsdkITransformer(const UIsdkITransformer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkITransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkITransformer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkITransformer) \
	virtual ~UIsdkITransformer() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkITransformer(); \
	friend struct Z_Construct_UClass_UIsdkITransformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITransformer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkITransformer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkITransformer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkITransformer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkITransformer() {} \
public: \
	typedef UIsdkITransformer UClassType; \
	typedef IIsdkITransformer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_122_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h_125_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkITransformer;

// ********** End Interface UIsdkITransformer ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
