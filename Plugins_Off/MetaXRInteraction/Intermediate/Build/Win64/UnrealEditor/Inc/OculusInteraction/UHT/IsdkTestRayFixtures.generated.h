// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/IsdkTestRayFixtures.h"

#ifdef OCULUSINTERACTION_IsdkTestRayFixtures_generated_h
#error "IsdkTestRayFixtures.generated.h already included, missing '#pragma once' in IsdkTestRayFixtures.h"
#endif
#define OCULUSINTERACTION_IsdkTestRayFixtures_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkInteractableStateEvent;
struct FIsdkInteractionPointerEvent;
struct FIsdkInteractorStateEvent;

// ********** Begin Class UIsdkTestRayFixture ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePointerEvent); \
	DECLARE_FUNCTION(execHandleInteractableStateEvent); \
	DECLARE_FUNCTION(execHandleInteractorStateEvent); \
	DECLARE_FUNCTION(execHandleUpdatedEvent);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTestRayFixture_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkTestRayFixture(); \
	friend struct Z_Construct_UClass_UIsdkTestRayFixture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTestRayFixture_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkTestRayFixture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkTestRayFixture_NoRegister) \
	DECLARE_SERIALIZER(UIsdkTestRayFixture)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkTestRayFixture(UIsdkTestRayFixture&&) = delete; \
	UIsdkTestRayFixture(const UIsdkTestRayFixture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkTestRayFixture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkTestRayFixture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkTestRayFixture) \
	NO_API virtual ~UIsdkTestRayFixture();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_34_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkTestRayFixture;

// ********** End Class UIsdkTestRayFixture ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
