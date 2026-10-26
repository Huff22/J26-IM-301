// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkInteractionGroupRigComponent.h"
#include "Interaction/IsdkIInteractorState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractionGroupRigComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorGroupMember();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkInteractionGroupMemberBehavior *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior;
class UScriptStruct* FIsdkInteractionGroupMemberBehavior::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkInteractionGroupMemberBehavior"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOnOtherSelect_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOnOtherNearFieldHover_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNearField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisableOnOtherSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOnOtherSelect;
	static void NewProp_bDisableOnOtherNearFieldHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOnOtherNearFieldHover;
	static void NewProp_bIsNearField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNearField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractionGroupMemberBehavior>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherSelect_SetBit(void* Obj)
{
	((FIsdkInteractionGroupMemberBehavior*)Obj)->bDisableOnOtherSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherSelect = { "bDisableOnOtherSelect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkInteractionGroupMemberBehavior), &Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOnOtherSelect_MetaData), NewProp_bDisableOnOtherSelect_MetaData) };
void Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherNearFieldHover_SetBit(void* Obj)
{
	((FIsdkInteractionGroupMemberBehavior*)Obj)->bDisableOnOtherNearFieldHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherNearFieldHover = { "bDisableOnOtherNearFieldHover", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkInteractionGroupMemberBehavior), &Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherNearFieldHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOnOtherNearFieldHover_MetaData), NewProp_bDisableOnOtherNearFieldHover_MetaData) };
void Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bIsNearField_SetBit(void* Obj)
{
	((FIsdkInteractionGroupMemberBehavior*)Obj)->bIsNearField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bIsNearField = { "bIsNearField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkInteractionGroupMemberBehavior), &Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bIsNearField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNearField_MetaData), NewProp_bIsNearField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bDisableOnOtherNearFieldHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewProp_bIsNearField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkInteractionGroupMemberBehavior",
	Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::PropPointers),
	sizeof(FIsdkInteractionGroupMemberBehavior),
	alignof(FIsdkInteractionGroupMemberBehavior),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractionGroupMemberBehavior *********************************

// ********** Begin ScriptStruct FIsdkInteractionGroupMemberState **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState;
class UScriptStruct* FIsdkInteractionGroupMemberState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkInteractionGroupMemberState"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelectStateBlocking_MetaData[] = {
		{ "Comment", "// Will be true if the interactor is in Select state for the purposes of disabling other\n// interactors. If this is false, then the 'Select' will be ignored by this group.\n// Commonly, this will return true if the interactor has an interactable; false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
		{ "ToolTip", "Will be true if the interactor is in Select state for the purposes of disabling other\ninteractors. If this is false, then the 'Select' will be ignored by this group.\nCommonly, this will return true if the interactor has an interactable; false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSelectStateBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelectStateBlocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractionGroupMemberState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::NewProp_bIsSelectStateBlocking_SetBit(void* Obj)
{
	((FIsdkInteractionGroupMemberState*)Obj)->bIsSelectStateBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::NewProp_bIsSelectStateBlocking = { "bIsSelectStateBlocking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkInteractionGroupMemberState), &Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::NewProp_bIsSelectStateBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelectStateBlocking_MetaData), NewProp_bIsSelectStateBlocking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::NewProp_bIsSelectStateBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkInteractionGroupMemberState",
	Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::PropPointers),
	sizeof(FIsdkInteractionGroupMemberState),
	alignof(FIsdkInteractionGroupMemberState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractionGroupMemberState ************************************

// ********** Begin ScriptStruct FIsdkInteractorGroupMember ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember;
class UScriptStruct* FIsdkInteractorGroupMember::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractorGroupMember, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkInteractorGroupMember"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabledConditional_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsEnabledConditional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractorGroupMember>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::NewProp_IsEnabledConditional = { "IsEnabledConditional", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractorGroupMember, IsEnabledConditional), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEnabledConditional_MetaData), NewProp_IsEnabledConditional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::NewProp_IsEnabledConditional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkInteractorGroupMember",
	Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::PropPointers),
	sizeof(FIsdkInteractorGroupMember),
	alignof(FIsdkInteractorGroupMember),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorGroupMember()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractorGroupMember ******************************************

// ********** Begin Class UIsdkInteractionGroupRigComponent Function HandleInteractorStateChanged **
struct Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics
{
	struct IsdkInteractionGroupRigComponent_eventHandleInteractorStateChanged_Parms
	{
		FIsdkInteractorStateEvent InteractorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractionGroupRigComponent_eventHandleInteractorStateChanged_Parms, InteractorState), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorState_MetaData), NewProp_InteractorState_MetaData) }; // 2370767474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::NewProp_InteractorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractionGroupRigComponent, nullptr, "HandleInteractorStateChanged", Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::IsdkInteractionGroupRigComponent_eventHandleInteractorStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::IsdkInteractionGroupRigComponent_eventHandleInteractorStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractionGroupRigComponent::execHandleInteractorStateChanged)
{
	P_GET_STRUCT_REF(FIsdkInteractorStateEvent,Z_Param_Out_InteractorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractorStateChanged(Z_Param_Out_InteractorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractionGroupRigComponent Function HandleInteractorStateChanged ****

// ********** Begin Class UIsdkInteractionGroupRigComponent Function HandleIsdkFrameFinished *******
struct Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractionGroupRigComponent, nullptr, "HandleIsdkFrameFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractionGroupRigComponent::execHandleIsdkFrameFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleIsdkFrameFinished();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractionGroupRigComponent Function HandleIsdkFrameFinished *********

// ********** Begin Class UIsdkInteractionGroupRigComponent ****************************************
void UIsdkInteractionGroupRigComponent::StaticRegisterNativesUIsdkInteractionGroupRigComponent()
{
	UClass* Class = UIsdkInteractionGroupRigComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleInteractorStateChanged", &UIsdkInteractionGroupRigComponent::execHandleInteractorStateChanged },
		{ "HandleIsdkFrameFinished", &UIsdkInteractionGroupRigComponent::execHandleIsdkFrameFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent;
UClass* UIsdkInteractionGroupRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkInteractionGroupRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInteractionGroupRigComponent"),
			Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkInteractionGroupRigComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister()
{
	return UIsdkInteractionGroupRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "IncludePath", "Rig/IsdkInteractionGroupRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateChangedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorMemberInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingSelectors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearFieldHovers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkInteractionGroupRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateChangedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateChangedEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorMemberInfoMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorMemberInfoMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InteractorMemberInfoMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingSelectors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BlockingSelectors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearFieldHovers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_NearFieldHovers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleInteractorStateChanged, "HandleInteractorStateChanged" }, // 3452326209
		{ &Z_Construct_UFunction_UIsdkInteractionGroupRigComponent_HandleIsdkFrameFinished, "HandleIsdkFrameFinished" }, // 1668599372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInteractionGroupRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_StateChangedEvents_Inner = { "StateChangedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(0, nullptr) }; // 2370767474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_StateChangedEvents = { "StateChangedEvents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractionGroupRigComponent, StateChangedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateChangedEvents_MetaData), NewProp_StateChangedEvents_MetaData) }; // 2370767474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_InteractorMemberInfoMap_ValueProp = { "InteractorMemberInfoMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkInteractorGroupMember, METADATA_PARAMS(0, nullptr) }; // 4041328589
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_InteractorMemberInfoMap_Key_KeyProp = { "InteractorMemberInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_InteractorMemberInfoMap = { "InteractorMemberInfoMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractionGroupRigComponent, InteractorMemberInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorMemberInfoMap_MetaData), NewProp_InteractorMemberInfoMap_MetaData) }; // 4041328589
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_BlockingSelectors_ElementProp = { "BlockingSelectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_BlockingSelectors = { "BlockingSelectors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractionGroupRigComponent, BlockingSelectors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingSelectors_MetaData), NewProp_BlockingSelectors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_NearFieldHovers_ElementProp = { "NearFieldHovers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_NearFieldHovers = { "NearFieldHovers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractionGroupRigComponent, NearFieldHovers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearFieldHovers_MetaData), NewProp_NearFieldHovers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_StateChangedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_StateChangedEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_InteractorMemberInfoMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_InteractorMemberInfoMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_InteractorMemberInfoMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_BlockingSelectors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_BlockingSelectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_NearFieldHovers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::NewProp_NearFieldHovers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::ClassParams = {
	&UIsdkInteractionGroupRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkInteractionGroupRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInteractionGroupRigComponent);
UIsdkInteractionGroupRigComponent::~UIsdkInteractionGroupRigComponent() {}
// ********** End Class UIsdkInteractionGroupRigComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkInteractionGroupMemberBehavior::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberBehavior_Statics::NewStructOps, TEXT("IsdkInteractionGroupMemberBehavior"), &Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractionGroupMemberBehavior), 818297710U) },
		{ FIsdkInteractionGroupMemberState::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractionGroupMemberState_Statics::NewStructOps, TEXT("IsdkInteractionGroupMemberState"), &Z_Registration_Info_UScriptStruct_FIsdkInteractionGroupMemberState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractionGroupMemberState), 2469970048U) },
		{ FIsdkInteractorGroupMember::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractorGroupMember_Statics::NewStructOps, TEXT("IsdkInteractorGroupMember"), &Z_Registration_Info_UScriptStruct_FIsdkInteractorGroupMember, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractorGroupMember), 4041328589U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInteractionGroupRigComponent, UIsdkInteractionGroupRigComponent::StaticClass, TEXT("UIsdkInteractionGroupRigComponent"), &Z_Registration_Info_UClass_UIsdkInteractionGroupRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInteractionGroupRigComponent), 2557687801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h__Script_OculusInteractionPrebuilts_2095252134(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInteractionGroupRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
