// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkClippedPlaneSurface.h"

#ifdef OCULUSINTERACTION_IsdkClippedPlaneSurface_generated_h
#error "IsdkClippedPlaneSurface.generated.h already included, missing '#pragma once' in IsdkClippedPlaneSurface.h"
#endif
#define OCULUSINTERACTION_IsdkClippedPlaneSurface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkPointablePlane;
struct FIsdkBoundsClipper;

// ********** Begin Class UIsdkClippedPlaneSurface *************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPointablePlane); \
	DECLARE_FUNCTION(execGetPointablePlane); \
	DECLARE_FUNCTION(execSetBoundsClippers); \
	DECLARE_FUNCTION(execGetBoundsClippers);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkClippedPlaneSurface(); \
	friend struct Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkClippedPlaneSurface, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister) \
	DECLARE_SERIALIZER(UIsdkClippedPlaneSurface) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkClippedPlaneSurface*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkClippedPlaneSurface(UIsdkClippedPlaneSurface&&) = delete; \
	UIsdkClippedPlaneSurface(const UIsdkClippedPlaneSurface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkClippedPlaneSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkClippedPlaneSurface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkClippedPlaneSurface) \
	NO_API virtual ~UIsdkClippedPlaneSurface();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_54_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkClippedPlaneSurface;

// ********** End Class UIsdkClippedPlaneSurface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
