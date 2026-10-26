// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Surfaces/IsdkPointablePlane.h"

#ifdef OCULUSINTERACTION_IsdkPointablePlane_generated_h
#error "IsdkPointablePlane.generated.h already included, missing '#pragma once' in IsdkPointablePlane.h"
#endif
#define OCULUSINTERACTION_IsdkPointablePlane_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkPointablePlane ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetSize);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPointablePlane(); \
	friend struct Z_Construct_UClass_UIsdkPointablePlane_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPointablePlane, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPointablePlane_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPointablePlane) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkPointablePlane*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPointablePlane(UIsdkPointablePlane&&) = delete; \
	UIsdkPointablePlane(const UIsdkPointablePlane&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPointablePlane); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPointablePlane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPointablePlane) \
	NO_API virtual ~UIsdkPointablePlane();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_58_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPointablePlane;

// ********** End Class UIsdkPointablePlane ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
