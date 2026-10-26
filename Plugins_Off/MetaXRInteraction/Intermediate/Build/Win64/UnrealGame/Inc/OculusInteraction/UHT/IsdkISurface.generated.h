// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Surfaces/IsdkISurface.h"

#ifdef OCULUSINTERACTION_IsdkISurface_generated_h
#error "IsdkISurface.generated.h already included, missing '#pragma once' in IsdkISurface.h"
#endif
#define OCULUSINTERACTION_IsdkISurface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIsdkISurface ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkISurface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkISurface(UIsdkISurface&&) = delete; \
	UIsdkISurface(const UIsdkISurface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkISurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkISurface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkISurface) \
	virtual ~UIsdkISurface() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkISurface(); \
	friend struct Z_Construct_UClass_UIsdkISurface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkISurface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkISurface_NoRegister) \
	DECLARE_SERIALIZER(UIsdkISurface)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkISurface() {} \
public: \
	typedef UIsdkISurface UClassType; \
	typedef IIsdkISurface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_34_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkISurface;

// ********** End Interface UIsdkISurface **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
