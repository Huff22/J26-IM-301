// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Pointable/IsdkIPointable.h"

#ifdef OCULUSINTERACTION_IsdkIPointable_generated_h
#error "IsdkIPointable.generated.h already included, missing '#pragma once' in IsdkIPointable.h"
#endif
#define OCULUSINTERACTION_IsdkIPointable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIsdkIPointable ******************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIPointable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIPointable(UIsdkIPointable&&) = delete; \
	UIsdkIPointable(const UIsdkIPointable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIPointable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIPointable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIPointable) \
	virtual ~UIsdkIPointable() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIPointable(); \
	friend struct Z_Construct_UClass_UIsdkIPointable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIPointable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIPointable_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIPointable)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIPointable() {} \
public: \
	typedef UIsdkIPointable UClassType; \
	typedef IIsdkIPointable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_36_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIPointable;

// ********** End Interface UIsdkIPointable ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
