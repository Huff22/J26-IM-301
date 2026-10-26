// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkIHandPointerPose.h"

#ifdef OCULUSINTERACTION_IsdkIHandPointerPose_generated_h
#error "IsdkIHandPointerPose.generated.h already included, missing '#pragma once' in IsdkIHandPointerPose.h"
#endif
#define OCULUSINTERACTION_IsdkIHandPointerPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIsdkIHandPointerPose ************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRelativePointerPose); \
	DECLARE_FUNCTION(execGetPointerPose); \
	DECLARE_FUNCTION(execIsPointerPoseValid);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIHandPointerPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIHandPointerPose(UIsdkIHandPointerPose&&) = delete; \
	UIsdkIHandPointerPose(const UIsdkIHandPointerPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIHandPointerPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIHandPointerPose); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIHandPointerPose) \
	virtual ~UIsdkIHandPointerPose() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIHandPointerPose(); \
	friend struct Z_Construct_UClass_UIsdkIHandPointerPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIHandPointerPose, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIHandPointerPose)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIHandPointerPose() {} \
public: \
	typedef UIsdkIHandPointerPose UClassType; \
	typedef IIsdkIHandPointerPose ThisClass; \
	static void Execute_GetPointerPose(UObject* O, FTransform& PointerPose, bool& IsValid); \
	static void Execute_GetRelativePointerPose(UObject* O, FTransform& PointerRelativePose, bool& IsValid); \
	static bool Execute_IsPointerPoseValid(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_31_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIHandPointerPose;

// ********** End Interface UIsdkIHandPointerPose **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandPointerPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
