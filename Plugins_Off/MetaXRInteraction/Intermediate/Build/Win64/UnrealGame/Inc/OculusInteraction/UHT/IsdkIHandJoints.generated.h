// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkIHandJoints.h"

#ifdef OCULUSINTERACTION_IsdkIHandJoints_generated_h
#error "IsdkIHandJoints.generated.h already included, missing '#pragma once' in IsdkIHandJoints.h"
#endif
#define OCULUSINTERACTION_IsdkIHandJoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandData;
class UIsdkHandJointMappings;
enum class EIsdkHandedness : uint8;

// ********** Begin Interface UIsdkIHandJoints *****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHandJointMappings); \
	DECLARE_FUNCTION(execGetHandedness); \
	DECLARE_FUNCTION(execIsHandJointDataValid); \
	DECLARE_FUNCTION(execGetHandData);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIHandJoints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIHandJoints(UIsdkIHandJoints&&) = delete; \
	UIsdkIHandJoints(const UIsdkIHandJoints&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIHandJoints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIHandJoints); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIHandJoints) \
	virtual ~UIsdkIHandJoints() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIHandJoints(); \
	friend struct Z_Construct_UClass_UIsdkIHandJoints_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIHandJoints, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIHandJoints_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIHandJoints)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIHandJoints() {} \
public: \
	typedef UIsdkIHandJoints UClassType; \
	typedef IIsdkIHandJoints ThisClass; \
	static UIsdkHandData* Execute_GetHandData(UObject* O); \
	static const EIsdkHandedness Execute_GetHandedness(UObject* O); \
	static const UIsdkHandJointMappings* Execute_GetHandJointMappings(UObject* O); \
	static bool Execute_IsHandJointDataValid(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_31_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h_34_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIHandJoints;

// ********** End Interface UIsdkIHandJoints *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
