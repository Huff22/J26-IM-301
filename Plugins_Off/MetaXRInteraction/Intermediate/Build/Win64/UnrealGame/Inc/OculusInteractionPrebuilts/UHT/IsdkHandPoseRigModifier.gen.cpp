// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkHandPoseRigModifier.h"
#include "Interaction/IsdkIInteractorState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandPoseRigModifier() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseSubsystem_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandPoseRigModifier();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandPoseRigModifier_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandPoseRigModifier Function HandleInteractorStateEvent *************
struct Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics
{
	struct IsdkHandPoseRigModifier_eventHandleInteractorStateEvent_Parms
	{
		FIsdkInteractorStateEvent StateEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* The handler for the state event delegate that the Interactors will be firing, used for\n   * comparing requirements for triggering. */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
		{ "ToolTip", "The handler for the state event delegate that the Interactors will be firing, used for\n  * comparing requirements for triggering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::NewProp_StateEvent = { "StateEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseRigModifier_eventHandleInteractorStateEvent_Parms, StateEvent), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateEvent_MetaData), NewProp_StateEvent_MetaData) }; // 2370767474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::NewProp_StateEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseRigModifier, nullptr, "HandleInteractorStateEvent", Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::IsdkHandPoseRigModifier_eventHandleInteractorStateEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::IsdkHandPoseRigModifier_eventHandleInteractorStateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseRigModifier::execHandleInteractorStateEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractorStateEvent,Z_Param_Out_StateEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractorStateEvent(Z_Param_Out_StateEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseRigModifier Function HandleInteractorStateEvent ***************

// ********** Begin Class UIsdkHandPoseRigModifier *************************************************
void UIsdkHandPoseRigModifier::StaticRegisterNativesUIsdkHandPoseRigModifier()
{
	UClass* Class = UIsdkHandPoseRigModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleInteractorStateEvent", &UIsdkHandPoseRigModifier::execHandleInteractorStateEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPoseRigModifier;
UClass* UIsdkHandPoseRigModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPoseRigModifier;
	if (!Z_Registration_Info_UClass_UIsdkHandPoseRigModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandPoseRigModifier"),
			Z_Registration_Info_UClass_UIsdkHandPoseRigModifier.InnerSingleton,
			StaticRegisterNativesUIsdkHandPoseRigModifier,
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
	return Z_Registration_Info_UClass_UIsdkHandPoseRigModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPoseRigModifier_NoRegister()
{
	return UIsdkHandPoseRigModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n  A Prebuilt Rig Modifier that will initiate a hand pose override when certain conditions are met,\n  with the defined triggers and gameplay tags.\n*/" },
		{ "IncludePath", "Rig/IsdkHandPoseRigModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
		{ "ToolTip", "A Prebuilt Rig Modifier that will initiate a hand pose override when certain conditions are met,\nwith the defined triggers and gameplay tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyntheticHandMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandPoseEngaged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bControllerRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandPoseRigModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SyntheticHandMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandPoseSubsystem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static void NewProp_bHandPoseEngaged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandPoseEngaged;
	static void NewProp_bControllerRig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bControllerRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandPoseRigModifier_HandleInteractorStateEvent, "HandleInteractorStateEvent" }, // 2291716351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPoseRigModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_HandMeshComponent = { "HandMeshComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseRigModifier, HandMeshComponent), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMeshComponent_MetaData), NewProp_HandMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_SyntheticHandMeshComponent = { "SyntheticHandMeshComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseRigModifier, SyntheticHandMeshComponent), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyntheticHandMeshComponent_MetaData), NewProp_SyntheticHandMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_HandPoseSubsystem = { "HandPoseSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseRigModifier, HandPoseSubsystem), Z_Construct_UClass_UIsdkHandPoseSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPoseSubsystem_MetaData), NewProp_HandPoseSubsystem_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseRigModifier, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 49432891
void Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bHandPoseEngaged_SetBit(void* Obj)
{
	((UIsdkHandPoseRigModifier*)Obj)->bHandPoseEngaged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bHandPoseEngaged = { "bHandPoseEngaged", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandPoseRigModifier), &Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bHandPoseEngaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandPoseEngaged_MetaData), NewProp_bHandPoseEngaged_MetaData) };
void Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bControllerRig_SetBit(void* Obj)
{
	((UIsdkHandPoseRigModifier*)Obj)->bControllerRig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bControllerRig = { "bControllerRig", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandPoseRigModifier), &Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bControllerRig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bControllerRig_MetaData), NewProp_bControllerRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_HandMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_SyntheticHandMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_HandPoseSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bHandPoseEngaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::NewProp_bControllerRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkRigModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::ClassParams = {
	&UIsdkHandPoseRigModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandPoseRigModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPoseRigModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPoseRigModifier.OuterSingleton, Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPoseRigModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandPoseRigModifier);
UIsdkHandPoseRigModifier::~UIsdkHandPoseRigModifier() {}
// ********** End Class UIsdkHandPoseRigModifier ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPoseRigModifier, UIsdkHandPoseRigModifier::StaticClass, TEXT("UIsdkHandPoseRigModifier"), &Z_Registration_Info_UClass_UIsdkHandPoseRigModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPoseRigModifier), 980528158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h__Script_OculusInteractionPrebuilts_2847745589(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
