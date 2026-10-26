// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IsdkIGameplayTagContainer.h"

#ifdef OCULUSINTERACTION_IsdkIGameplayTagContainer_generated_h
#error "IsdkIGameplayTagContainer.generated.h already included, missing '#pragma once' in IsdkIGameplayTagContainer.h"
#endif
#define OCULUSINTERACTION_IsdkIGameplayTagContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTagContainer;

// ********** Begin Interface UIsdkIGameplayTagContainer *******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameplayTagContainer);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIGameplayTagContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIGameplayTagContainer(UIsdkIGameplayTagContainer&&) = delete; \
	UIsdkIGameplayTagContainer(const UIsdkIGameplayTagContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIGameplayTagContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIGameplayTagContainer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIGameplayTagContainer) \
	virtual ~UIsdkIGameplayTagContainer() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIGameplayTagContainer(); \
	friend struct Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIGameplayTagContainer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIGameplayTagContainer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIGameplayTagContainer() {} \
public: \
	typedef UIsdkIGameplayTagContainer UClassType; \
	typedef IIsdkIGameplayTagContainer ThisClass; \
	static bool Execute_GetGameplayTagContainer(UObject* O, FGameplayTagContainer& ContainerOut); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_28_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIGameplayTagContainer;

// ********** End Interface UIsdkIGameplayTagContainer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
