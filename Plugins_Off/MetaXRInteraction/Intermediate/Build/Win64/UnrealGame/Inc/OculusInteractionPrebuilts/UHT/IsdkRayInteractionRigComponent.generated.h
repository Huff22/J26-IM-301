// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkRayInteractionRigComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRayInteractionRigComponent_generated_h
#error "IsdkRayInteractionRigComponent.generated.h already included, missing '#pragma once' in IsdkRayInteractionRigComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRayInteractionRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIHmdDataSource;
class UIsdkConditionalGroupAll;
class UIsdkRigComponent;
class USceneComponent;
struct FIsdkTrackingDataSources;

// ********** Begin Class UIsdkRayInteractionRigComponent ******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRigPinchUnselect); \
	DECLARE_FUNCTION(execHandleRigPinchSelect); \
	DECLARE_FUNCTION(execGetEnabledConditional); \
	DECLARE_FUNCTION(execUpdateRayVisual); \
	DECLARE_FUNCTION(execBindDataSources);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRayInteractionRigComponent(); \
	friend struct Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRayInteractionRigComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRayInteractionRigComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRayInteractionRigComponent(UIsdkRayInteractionRigComponent&&) = delete; \
	UIsdkRayInteractionRigComponent(const UIsdkRayInteractionRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRayInteractionRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRayInteractionRigComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkRayInteractionRigComponent) \
	NO_API virtual ~UIsdkRayInteractionRigComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_44_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRayInteractionRigComponent;

// ********** End Class UIsdkRayInteractionRigComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
