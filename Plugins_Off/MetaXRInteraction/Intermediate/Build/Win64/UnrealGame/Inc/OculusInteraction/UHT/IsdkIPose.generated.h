// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/IsdkIPose.h"

#ifdef OCULUSINTERACTION_IsdkIPose_generated_h
#error "IsdkIPose.generated.h already included, missing '#pragma once' in IsdkIPose.h"
#endif
#define OCULUSINTERACTION_IsdkIPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIsdkIPose ***********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIPose(UIsdkIPose&&) = delete; \
	UIsdkIPose(const UIsdkIPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIPose); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIPose) \
	virtual ~UIsdkIPose() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIPose(); \
	friend struct Z_Construct_UClass_UIsdkIPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIPose, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIPose_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIPose)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIPose() {} \
public: \
	typedef UIsdkIPose UClassType; \
	typedef IIsdkIPose ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_34_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIPose;

// ********** End Interface UIsdkIPose *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
