// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkISurfacePatch.h"

#ifdef OCULUSINTERACTION_IsdkISurfacePatch_generated_h
#error "IsdkISurfacePatch.generated.h already included, missing '#pragma once' in IsdkISurfacePatch.h"
#endif
#define OCULUSINTERACTION_IsdkISurfacePatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIsdkISurfacePatch ***************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkISurfacePatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkISurfacePatch(UIsdkISurfacePatch&&) = delete; \
	UIsdkISurfacePatch(const UIsdkISurfacePatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkISurfacePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkISurfacePatch); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkISurfacePatch) \
	virtual ~UIsdkISurfacePatch() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkISurfacePatch(); \
	friend struct Z_Construct_UClass_UIsdkISurfacePatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkISurfacePatch, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister) \
	DECLARE_SERIALIZER(UIsdkISurfacePatch)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkISurfacePatch() {} \
public: \
	typedef UIsdkISurfacePatch UClassType; \
	typedef IIsdkISurfacePatch ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_34_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkISurfacePatch;

// ********** End Interface UIsdkISurfacePatch *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
