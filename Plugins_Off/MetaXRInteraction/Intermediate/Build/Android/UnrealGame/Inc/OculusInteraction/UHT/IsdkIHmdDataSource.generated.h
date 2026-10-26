// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkIHmdDataSource.h"

#ifdef OCULUSINTERACTION_IsdkIHmdDataSource_generated_h
#error "IsdkIHmdDataSource.generated.h already included, missing '#pragma once' in IsdkIHmdDataSource.h"
#endif
#define OCULUSINTERACTION_IsdkIHmdDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIsdkIHmdDataSource **************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRelativeHmdPose); \
	DECLARE_FUNCTION(execGetHmdPose); \
	DECLARE_FUNCTION(execIsHmdTracked);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIHmdDataSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIHmdDataSource(UIsdkIHmdDataSource&&) = delete; \
	UIsdkIHmdDataSource(const UIsdkIHmdDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIHmdDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIHmdDataSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIHmdDataSource) \
	virtual ~UIsdkIHmdDataSource() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIHmdDataSource(); \
	friend struct Z_Construct_UClass_UIsdkIHmdDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIHmdDataSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIHmdDataSource)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIHmdDataSource() {} \
public: \
	typedef UIsdkIHmdDataSource UClassType; \
	typedef IIsdkIHmdDataSource ThisClass; \
	static void Execute_GetHmdPose(UObject* O, FTransform& HmdPose, bool& IsTracked); \
	static void Execute_GetRelativeHmdPose(UObject* O, FTransform& HmdRelativePose, bool& IsTracked); \
	static bool Execute_IsHmdTracked(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_31_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIHmdDataSource;

// ********** End Interface UIsdkIHmdDataSource ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
