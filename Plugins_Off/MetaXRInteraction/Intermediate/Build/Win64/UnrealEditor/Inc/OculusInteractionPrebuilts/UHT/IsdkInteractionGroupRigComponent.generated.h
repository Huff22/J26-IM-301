// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkInteractionGroupRigComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkInteractionGroupRigComponent_generated_h
#error "IsdkInteractionGroupRigComponent.generated.h already included, missing '#pragma once' in IsdkInteractionGroupRigComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkInteractionGroupRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkInteractorStateEvent;

// ********** Begin ScriptStruct FIsdkInteractionGroupMemberBehavior *******************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics; \
	OCULUSINTERACTIONPREBUILTS_API static class UScriptStruct* StaticStruct();


struct FIsdkInteractionGroupMemberBehavior;
// ********** End ScriptStruct FIsdkInteractionGroupMemberBehavior *********************************

// ********** Begin ScriptStruct FIsdkInteractionGroupMemberState **********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics; \
	OCULUSINTERACTIONPREBUILTS_API static class UScriptStruct* StaticStruct();


struct FIsdkInteractionGroupMemberState;
// ********** End ScriptStruct FIsdkInteractionGroupMemberState ************************************

// ********** Begin ScriptStruct FIsdkInteractorGroupMember ****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics; \
	OCULUSINTERACTIONPREBUILTS_API static class UScriptStruct* StaticStruct();


struct FIsdkInteractorGroupMember;
// ********** End ScriptStruct FIsdkInteractorGroupMember ******************************************

// ********** Begin Class UIsdkInteractionGroupRigComponent ****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInteractorStateChanged); \
	DECLARE_FUNCTION(execHandleIsdkFrameFinished);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInteractionGroupRigComponent(); \
	friend struct Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInteractionGroupRigComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInteractionGroupRigComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInteractionGroupRigComponent(UIsdkInteractionGroupRigComponent&&) = delete; \
	UIsdkInteractionGroupRigComponent(const UIsdkInteractionGroupRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInteractionGroupRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInteractionGroupRigComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkInteractionGroupRigComponent) \
	NO_API virtual ~UIsdkInteractionGroupRigComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_75_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInteractionGroupRigComponent;

// ********** End Class UIsdkInteractionGroupRigComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
