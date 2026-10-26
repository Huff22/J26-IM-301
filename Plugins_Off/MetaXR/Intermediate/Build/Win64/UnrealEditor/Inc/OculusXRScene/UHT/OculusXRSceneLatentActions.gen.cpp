// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneLatentActions.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRSceneLatentActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_NoRegister();
OCULUSXRSCENE_API UFunction* Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOculusXRAsyncAction_CaptureFlowFinished ******************************
struct Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, nullptr, "OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOculusXRAsyncAction_LaunchCaptureFlow::FOculusXRAsyncAction_CaptureFlowFinished_DelegateWrapper(const FMulticastScriptDelegate& OculusXRAsyncAction_CaptureFlowFinished)
{
	OculusXRAsyncAction_CaptureFlowFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOculusXRAsyncAction_CaptureFlowFinished ********************************

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow Function LaunchCaptureFlowAsync ***
struct Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics
{
	struct OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms
	{
		const UObject* WorldContext;
		UOculusXRAsyncAction_LaunchCaptureFlow* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, nullptr, "LaunchCaptureFlowAsync", Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::OculusXRAsyncAction_LaunchCaptureFlow_eventLaunchCaptureFlowAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRAsyncAction_LaunchCaptureFlow::execLaunchCaptureFlowAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_LaunchCaptureFlow**)Z_Param__Result=UOculusXRAsyncAction_LaunchCaptureFlow::LaunchCaptureFlowAsync(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow Function LaunchCaptureFlowAsync *****

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow Function OnCaptureFinish **********
struct Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics
{
	struct OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms
	{
		FOculusXRUInt64 Id;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms, Id), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 1603820546
void Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms), &Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, nullptr, "OnCaptureFinish", Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::OculusXRAsyncAction_LaunchCaptureFlow_eventOnCaptureFinish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRAsyncAction_LaunchCaptureFlow::execOnCaptureFinish)
{
	P_GET_STRUCT(FOculusXRUInt64,Z_Param_Id);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCaptureFinish(Z_Param_Id,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow Function OnCaptureFinish ************

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow ***********************************
void UOculusXRAsyncAction_LaunchCaptureFlow::StaticRegisterNativesUOculusXRAsyncAction_LaunchCaptureFlow()
{
	UClass* Class = UOculusXRAsyncAction_LaunchCaptureFlow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LaunchCaptureFlowAsync", &UOculusXRAsyncAction_LaunchCaptureFlow::execLaunchCaptureFlowAsync },
		{ "OnCaptureFinish", &UOculusXRAsyncAction_LaunchCaptureFlow::execOnCaptureFinish },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow;
UClass* UOculusXRAsyncAction_LaunchCaptureFlow::GetPrivateStaticClass()
{
	using TClass = UOculusXRAsyncAction_LaunchCaptureFlow;
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRAsyncAction_LaunchCaptureFlow"),
			Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.InnerSingleton,
			StaticRegisterNativesUOculusXRAsyncAction_LaunchCaptureFlow,
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
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_NoRegister()
{
	return UOculusXRAsyncAction_LaunchCaptureFlow::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRSceneLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_LaunchCaptureFlowAsync, "LaunchCaptureFlowAsync" }, // 3993424548
		{ &Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature, "OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature" }, // 1109684168
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OnCaptureFinish, "OnCaptureFinish" }, // 989032498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_LaunchCaptureFlow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_LaunchCaptureFlow, Success), Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 1109684168
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_LaunchCaptureFlow, Failure), Z_Construct_UDelegateFunction_UOculusXRAsyncAction_LaunchCaptureFlow_OculusXRAsyncAction_CaptureFlowFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 1109684168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::ClassParams = {
	&UOculusXRAsyncAction_LaunchCaptureFlow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow()
{
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.OuterSingleton, Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow.OuterSingleton;
}
UOculusXRAsyncAction_LaunchCaptureFlow::UOculusXRAsyncAction_LaunchCaptureFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAsyncAction_LaunchCaptureFlow);
UOculusXRAsyncAction_LaunchCaptureFlow::~UOculusXRAsyncAction_LaunchCaptureFlow() {}
// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h__Script_OculusXRScene_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, UOculusXRAsyncAction_LaunchCaptureFlow::StaticClass, TEXT("UOculusXRAsyncAction_LaunchCaptureFlow"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_LaunchCaptureFlow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_LaunchCaptureFlow), 4254084000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h__Script_OculusXRScene_685383294(TEXT("/Script/OculusXRScene"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h__Script_OculusXRScene_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h__Script_OculusXRScene_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
