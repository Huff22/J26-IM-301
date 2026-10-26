// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkIRootPose.h"

#ifdef OCULUSINTERACTION_IsdkIRootPose_generated_h
#error "IsdkIRootPose.generated.h already included, missing '#pragma once' in IsdkIRootPose.h"
#endif
#define OCULUSINTERACTION_IsdkIRootPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditional;

// ********** Begin Interface UIsdkIRootPose *******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRootPoseHighConfidenceConditional); \
	DECLARE_FUNCTION(execGetRootPoseConnectedConditional); \
	DECLARE_FUNCTION(execIsRootPoseValid); \
	DECLARE_FUNCTION(execGetRootPose);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIRootPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIRootPose(UIsdkIRootPose&&) = delete; \
	UIsdkIRootPose(const UIsdkIRootPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIRootPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIRootPose); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIRootPose) \
	virtual ~UIsdkIRootPose() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIRootPose(); \
	friend struct Z_Construct_UClass_UIsdkIRootPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIRootPose, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIRootPose_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIRootPose)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIRootPose() {} \
public: \
	typedef UIsdkIRootPose UClassType; \
	typedef IIsdkIRootPose ThisClass; \
	static FTransform Execute_GetRootPose(UObject* O); \
	static UIsdkConditional* Execute_GetRootPoseConnectedConditional(UObject* O); \
	static UIsdkConditional* Execute_GetRootPoseHighConfidenceConditional(UObject* O); \
	static bool Execute_IsRootPoseValid(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_30_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIRootPose;

// ********** End Interface UIsdkIRootPose *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
