// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkPokeLimiterRigModifier.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPokeLimiterRigModifier() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeLimiterRigModifier();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeLimiterRigModifier_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPokeLimiterRigModifier Function ApplyRootPokeLimiting ***************
struct Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics
{
	struct IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms
	{
		FTransform RootPoseIn;
		FTransform LimitedRootPose;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPoseIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootPoseIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitedRootPose;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_RootPoseIn = { "RootPoseIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms, RootPoseIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPoseIn_MetaData), NewProp_RootPoseIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_LimitedRootPose = { "LimitedRootPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms, LimitedRootPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms), &Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_RootPoseIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_LimitedRootPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterRigModifier, nullptr, "ApplyRootPokeLimiting", Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::IsdkPokeLimiterRigModifier_eventApplyRootPokeLimiting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterRigModifier::execApplyRootPokeLimiting)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_RootPoseIn);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_LimitedRootPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyRootPokeLimiting(Z_Param_Out_RootPoseIn,Z_Param_Out_LimitedRootPose);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterRigModifier Function ApplyRootPokeLimiting *****************

// ********** Begin Class UIsdkPokeLimiterRigModifier Function HandleRelayedPointerEvent ***********
struct Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics
{
	struct IsdkPokeLimiterRigModifier_eventHandleRelayedPointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* The handler for the state event delegate that the Interactors will be firing, used for\n   * comparing requirements for triggering. */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
		{ "ToolTip", "The handler for the state event delegate that the Interactors will be firing, used for\n  * comparing requirements for triggering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterRigModifier_eventHandleRelayedPointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterRigModifier, nullptr, "HandleRelayedPointerEvent", Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::IsdkPokeLimiterRigModifier_eventHandleRelayedPointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::IsdkPokeLimiterRigModifier_eventHandleRelayedPointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterRigModifier::execHandleRelayedPointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRelayedPointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterRigModifier Function HandleRelayedPointerEvent *************

// ********** Begin Class UIsdkPokeLimiterRigModifier **********************************************
void UIsdkPokeLimiterRigModifier::StaticRegisterNativesUIsdkPokeLimiterRigModifier()
{
	UClass* Class = UIsdkPokeLimiterRigModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRootPokeLimiting", &UIsdkPokeLimiterRigModifier::execApplyRootPokeLimiting },
		{ "HandleRelayedPointerEvent", &UIsdkPokeLimiterRigModifier::execHandleRelayedPointerEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier;
UClass* UIsdkPokeLimiterRigModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeLimiterRigModifier;
	if (!Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPokeLimiterRigModifier"),
			Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier.InnerSingleton,
			StaticRegisterNativesUIsdkPokeLimiterRigModifier,
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
	return Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeLimiterRigModifier_NoRegister()
{
	return UIsdkPokeLimiterRigModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n  A Prebuilt Rig Modifier that will enable Poke Limiting on any valid objects that implement\n  IsdkIPosedMesh\n\n*/" },
		{ "IncludePath", "Rig/IsdkPokeLimiterRigModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
		{ "ToolTip", "A Prebuilt Rig Modifier that will enable Poke Limiting on any valid objects that implement\nIsdkIPosedMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalPoseOverride_MetaData[] = {
		{ "Comment", "/* The ConditionalPoseOverride for our Mesh that we use to convey poke limiting transforms*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
		{ "ToolTip", "The ConditionalPoseOverride for our Mesh that we use to convey poke limiting transforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedPoseMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventPokeInteractable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundPokeInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMotionController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeLimiterRigModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConditionalPoseOverride;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ConnectedPoseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventPokeInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundPokeInteractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMotionController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_ApplyRootPokeLimiting, "ApplyRootPokeLimiting" }, // 3848846620
		{ &Z_Construct_UFunction_UIsdkPokeLimiterRigModifier_HandleRelayedPointerEvent, "HandleRelayedPointerEvent" }, // 2377871053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeLimiterRigModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_ConditionalPoseOverride = { "ConditionalPoseOverride", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterRigModifier, ConditionalPoseOverride), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionalPoseOverride_MetaData), NewProp_ConditionalPoseOverride_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_ConnectedPoseMesh = { "ConnectedPoseMesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterRigModifier, ConnectedPoseMesh), Z_Construct_UClass_UIsdkIPosedMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedPoseMesh_MetaData), NewProp_ConnectedPoseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_EventPokeInteractable = { "EventPokeInteractable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterRigModifier, EventPokeInteractable), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventPokeInteractable_MetaData), NewProp_EventPokeInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_BoundPokeInteractor = { "BoundPokeInteractor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterRigModifier, BoundPokeInteractor), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundPokeInteractor_MetaData), NewProp_BoundPokeInteractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_ParentMotionController = { "ParentMotionController", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterRigModifier, ParentMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMotionController_MetaData), NewProp_ParentMotionController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_ConditionalPoseOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_ConnectedPoseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_EventPokeInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_BoundPokeInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::NewProp_ParentMotionController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkRigModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::ClassParams = {
	&UIsdkPokeLimiterRigModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPokeLimiterRigModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier.OuterSingleton, Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPokeLimiterRigModifier);
UIsdkPokeLimiterRigModifier::~UIsdkPokeLimiterRigModifier() {}
// ********** End Class UIsdkPokeLimiterRigModifier ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPokeLimiterRigModifier, UIsdkPokeLimiterRigModifier::StaticClass, TEXT("UIsdkPokeLimiterRigModifier"), &Z_Registration_Info_UClass_UIsdkPokeLimiterRigModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeLimiterRigModifier), 1796690816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h__Script_OculusInteractionPrebuilts_2662808514(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
