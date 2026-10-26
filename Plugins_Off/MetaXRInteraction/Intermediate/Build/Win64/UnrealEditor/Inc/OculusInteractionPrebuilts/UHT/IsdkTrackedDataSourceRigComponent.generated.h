// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkTrackedDataSourceRigComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkTrackedDataSourceRigComponent_generated_h
#error "IsdkTrackedDataSourceRigComponent.generated.h already included, missing '#pragma once' in IsdkTrackedDataSourceRigComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkTrackedDataSourceRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditionalGroupAll;
struct FIsdkTrackingDataSources;

// ********** Begin Class UIsdkTrackedDataSourceRigComponent ***************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleIsdkFrameFinished); \
	DECLARE_FUNCTION(execGetForceOffVisibility); \
	DECLARE_FUNCTION(execGetDataSources);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkTrackedDataSourceRigComponent(); \
	friend struct Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkTrackedDataSourceRigComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkTrackedDataSourceRigComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkTrackedDataSourceRigComponent(UIsdkTrackedDataSourceRigComponent&&) = delete; \
	UIsdkTrackedDataSourceRigComponent(const UIsdkTrackedDataSourceRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkTrackedDataSourceRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkTrackedDataSourceRigComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkTrackedDataSourceRigComponent) \
	NO_API virtual ~UIsdkTrackedDataSourceRigComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_62_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkTrackedDataSourceRigComponent;

// ********** End Class UIsdkTrackedDataSourceRigComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h

// ********** Begin Enum EIsdkRigHandVisibility ****************************************************
#define FOREACH_ENUM_EISDKRIGHANDVISIBILITY(op) \
	op(EIsdkRigHandVisibility::Manual) \
	op(EIsdkRigHandVisibility::TrackedOnly) \
	op(EIsdkRigHandVisibility::SyntheticOnly) \
	op(EIsdkRigHandVisibility::SyntheticWhenRootChanged) 

enum class EIsdkRigHandVisibility : uint8;
template<> struct TIsUEnumClass<EIsdkRigHandVisibility> { enum { Value = true }; };
template<> OCULUSINTERACTIONPREBUILTS_API UEnum* StaticEnum<EIsdkRigHandVisibility>();
// ********** End Enum EIsdkRigHandVisibility ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
