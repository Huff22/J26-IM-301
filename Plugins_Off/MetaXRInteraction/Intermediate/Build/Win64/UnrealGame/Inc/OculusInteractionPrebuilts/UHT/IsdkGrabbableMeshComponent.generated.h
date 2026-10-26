// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkGrabbableMeshComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkGrabbableMeshComponent_generated_h
#error "IsdkGrabbableMeshComponent.generated.h already included, missing '#pragma once' in IsdkGrabbableMeshComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkGrabbableMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UShapeComponent;
class UStaticMesh;

// ********** Begin Class UIsdkGrabbableMeshComponent **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCollision); \
	DECLARE_FUNCTION(execSetMesh);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabbableMeshComponent(); \
	friend struct Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabbableMeshComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabbableMeshComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabbableMeshComponent(UIsdkGrabbableMeshComponent&&) = delete; \
	UIsdkGrabbableMeshComponent(const UIsdkGrabbableMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabbableMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabbableMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabbableMeshComponent) \
	NO_API virtual ~UIsdkGrabbableMeshComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_41_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabbableMeshComponent;

// ********** End Class UIsdkGrabbableMeshComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
