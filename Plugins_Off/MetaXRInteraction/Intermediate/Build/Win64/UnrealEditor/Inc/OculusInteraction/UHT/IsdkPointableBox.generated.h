// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Surfaces/IsdkPointableBox.h"

#ifdef OCULUSINTERACTION_IsdkPointableBox_generated_h
#error "IsdkPointableBox.generated.h already included, missing '#pragma once' in IsdkPointableBox.h"
#endif
#define OCULUSINTERACTION_IsdkPointableBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkPointableBox ********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetSize);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableBox_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPointableBox(); \
	friend struct Z_Construct_UClass_UIsdkPointableBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPointableBox, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPointableBox_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPointableBox) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkPointableBox*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPointableBox(UIsdkPointableBox&&) = delete; \
	UIsdkPointableBox(const UIsdkPointableBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPointableBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPointableBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPointableBox) \
	NO_API virtual ~UIsdkPointableBox();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_52_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPointableBox;

// ********** End Class UIsdkPointableBox **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
