// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractorVisuals/IsdkRayVisualComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRayVisualComponent_generated_h
#error "IsdkRayVisualComponent.generated.h already included, missing '#pragma once' in IsdkRayVisualComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRayVisualComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

// ********** Begin Class UIsdkRayVisualComponent **************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateMaterialInstanceParameters); \
	DECLARE_FUNCTION(execGetTranslucentSortPriority); \
	DECLARE_FUNCTION(execSetTranslucentSortPriority); \
	DECLARE_FUNCTION(execGetPinchArrowMaterialInstance); \
	DECLARE_FUNCTION(execGetPinchArrowMaterial); \
	DECLARE_FUNCTION(execSetPinchArrowMaterial); \
	DECLARE_FUNCTION(execGetPinchArrowMesh); \
	DECLARE_FUNCTION(execSetPinchArrowMesh); \
	DECLARE_FUNCTION(execGetCursorMaterialInstance); \
	DECLARE_FUNCTION(execGetCursorMaterial); \
	DECLARE_FUNCTION(execSetCursorMaterial); \
	DECLARE_FUNCTION(execGetCursorMesh); \
	DECLARE_FUNCTION(execSetCursorMesh); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execUpdateVisual);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRayVisualComponent(); \
	friend struct Z_Construct_UClass_UIsdkRayVisualComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRayVisualComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRayVisualComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRayVisualComponent(UIsdkRayVisualComponent&&) = delete; \
	UIsdkRayVisualComponent(const UIsdkRayVisualComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRayVisualComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRayVisualComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkRayVisualComponent) \
	NO_API virtual ~UIsdkRayVisualComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_41_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRayVisualComponent;

// ********** End Class UIsdkRayVisualComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
