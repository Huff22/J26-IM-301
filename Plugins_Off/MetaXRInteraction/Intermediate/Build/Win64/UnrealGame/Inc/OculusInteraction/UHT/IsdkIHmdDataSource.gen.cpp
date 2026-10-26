// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkIHmdDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIHmdDataSource() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIHmdDataSource Function GetHmdPose ******************************
struct IsdkIHmdDataSource_eventGetHmdPose_Parms
{
	FTransform HmdPose;
	bool IsTracked;
};
void IIsdkIHmdDataSource::GetHmdPose(FTransform& HmdPose, bool& IsTracked)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHmdPose instead.");
}
static FName NAME_UIsdkIHmdDataSource_GetHmdPose = FName(TEXT("GetHmdPose"));
void IIsdkIHmdDataSource::Execute_GetHmdPose(UObject* O, FTransform& HmdPose, bool& IsTracked)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHmdDataSource::StaticClass()));
	IsdkIHmdDataSource_eventGetHmdPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHmdDataSource_GetHmdPose);
	if (Func)
	{
		Parms.HmdPose=HmdPose;
		Parms.IsTracked=IsTracked;
		O->ProcessEvent(Func, &Parms);
		HmdPose=Parms.HmdPose;
		IsTracked=Parms.IsTracked;
	}
	else if (auto I = (IIsdkIHmdDataSource*)(O->GetNativeInterfaceAddress(UIsdkIHmdDataSource::StaticClass())))
	{
		I->GetHmdPose_Implementation(HmdPose,IsTracked);
	}
}
struct Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHmdDataSource.h" },
		{ "ToolTip", "transform of the headset, world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HmdPose;
	static void NewProp_IsTracked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::NewProp_HmdPose = { "HmdPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHmdDataSource_eventGetHmdPose_Parms, HmdPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::NewProp_IsTracked_SetBit(void* Obj)
{
	((IsdkIHmdDataSource_eventGetHmdPose_Parms*)Obj)->IsTracked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::NewProp_IsTracked = { "IsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHmdDataSource_eventGetHmdPose_Parms), &Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::NewProp_HmdPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::NewProp_IsTracked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHmdDataSource, nullptr, "GetHmdPose", Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::PropPointers), sizeof(IsdkIHmdDataSource_eventGetHmdPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHmdDataSource_eventGetHmdPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHmdDataSource::execGetHmdPose)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_HmdPose);
	P_GET_UBOOL_REF(Z_Param_Out_IsTracked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHmdPose_Implementation(Z_Param_Out_HmdPose,Z_Param_Out_IsTracked);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHmdDataSource Function GetHmdPose ********************************

// ********** Begin Interface UIsdkIHmdDataSource Function GetRelativeHmdPose **********************
struct IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms
{
	FTransform HmdRelativePose;
	bool IsTracked;
};
void IIsdkIHmdDataSource::GetRelativeHmdPose(FTransform& HmdRelativePose, bool& IsTracked)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRelativeHmdPose instead.");
}
static FName NAME_UIsdkIHmdDataSource_GetRelativeHmdPose = FName(TEXT("GetRelativeHmdPose"));
void IIsdkIHmdDataSource::Execute_GetRelativeHmdPose(UObject* O, FTransform& HmdRelativePose, bool& IsTracked)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHmdDataSource::StaticClass()));
	IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHmdDataSource_GetRelativeHmdPose);
	if (Func)
	{
		Parms.HmdRelativePose=HmdRelativePose;
		Parms.IsTracked=IsTracked;
		O->ProcessEvent(Func, &Parms);
		HmdRelativePose=Parms.HmdRelativePose;
		IsTracked=Parms.IsTracked;
	}
	else if (auto I = (IIsdkIHmdDataSource*)(O->GetNativeInterfaceAddress(UIsdkIHmdDataSource::StaticClass())))
	{
		I->GetRelativeHmdPose_Implementation(HmdRelativePose,IsTracked);
	}
}
struct Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHmdDataSource.h" },
		{ "ToolTip", "transform of the headset, relative to tracking space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HmdRelativePose;
	static void NewProp_IsTracked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::NewProp_HmdRelativePose = { "HmdRelativePose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms, HmdRelativePose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::NewProp_IsTracked_SetBit(void* Obj)
{
	((IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms*)Obj)->IsTracked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::NewProp_IsTracked = { "IsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms), &Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::NewProp_HmdRelativePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::NewProp_IsTracked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHmdDataSource, nullptr, "GetRelativeHmdPose", Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::PropPointers), sizeof(IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHmdDataSource_eventGetRelativeHmdPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHmdDataSource::execGetRelativeHmdPose)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_HmdRelativePose);
	P_GET_UBOOL_REF(Z_Param_Out_IsTracked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRelativeHmdPose_Implementation(Z_Param_Out_HmdRelativePose,Z_Param_Out_IsTracked);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHmdDataSource Function GetRelativeHmdPose ************************

// ********** Begin Interface UIsdkIHmdDataSource Function IsHmdTracked ****************************
struct IsdkIHmdDataSource_eventIsHmdTracked_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIHmdDataSource_eventIsHmdTracked_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIsdkIHmdDataSource::IsHmdTracked()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHmdTracked instead.");
	IsdkIHmdDataSource_eventIsHmdTracked_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIHmdDataSource_IsHmdTracked = FName(TEXT("IsHmdTracked"));
bool IIsdkIHmdDataSource::Execute_IsHmdTracked(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHmdDataSource::StaticClass()));
	IsdkIHmdDataSource_eventIsHmdTracked_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHmdDataSource_IsHmdTracked);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIHmdDataSource*)(O->GetNativeInterfaceAddress(UIsdkIHmdDataSource::StaticClass())))
	{
		Parms.ReturnValue = I->IsHmdTracked_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns whether or not the HMD in this data source is tracked */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHmdDataSource.h" },
		{ "ToolTip", "Returns whether or not the HMD in this data source is tracked" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkIHmdDataSource_eventIsHmdTracked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHmdDataSource_eventIsHmdTracked_Parms), &Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHmdDataSource, nullptr, "IsHmdTracked", Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::PropPointers), sizeof(IsdkIHmdDataSource_eventIsHmdTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHmdDataSource_eventIsHmdTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHmdDataSource::execIsHmdTracked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHmdTracked_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHmdDataSource Function IsHmdTracked ******************************

// ********** Begin Interface UIsdkIHmdDataSource **************************************************
void UIsdkIHmdDataSource::StaticRegisterNativesUIsdkIHmdDataSource()
{
	UClass* Class = UIsdkIHmdDataSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHmdPose", &IIsdkIHmdDataSource::execGetHmdPose },
		{ "GetRelativeHmdPose", &IIsdkIHmdDataSource::execGetRelativeHmdPose },
		{ "IsHmdTracked", &IIsdkIHmdDataSource::execIsHmdTracked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIHmdDataSource;
UClass* UIsdkIHmdDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkIHmdDataSource;
	if (!Z_Registration_Info_UClass_UIsdkIHmdDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIHmdDataSource"),
			Z_Registration_Info_UClass_UIsdkIHmdDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkIHmdDataSource,
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
	return Z_Registration_Info_UClass_UIsdkIHmdDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister()
{
	return UIsdkIHmdDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIHmdDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "DisplayName", "ISDK Hmd Data Source" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHmdDataSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIHmdDataSource_GetHmdPose, "GetHmdPose" }, // 1971260273
		{ &Z_Construct_UFunction_UIsdkIHmdDataSource_GetRelativeHmdPose, "GetRelativeHmdPose" }, // 4249805340
		{ &Z_Construct_UFunction_UIsdkIHmdDataSource_IsHmdTracked, "IsHmdTracked" }, // 498093823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIHmdDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIHmdDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIHmdDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIHmdDataSource_Statics::ClassParams = {
	&UIsdkIHmdDataSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIHmdDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIHmdDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIHmdDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkIHmdDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIHmdDataSource.OuterSingleton, Z_Construct_UClass_UIsdkIHmdDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIHmdDataSource.OuterSingleton;
}
UIsdkIHmdDataSource::UIsdkIHmdDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIHmdDataSource);
// ********** End Interface UIsdkIHmdDataSource ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIHmdDataSource, UIsdkIHmdDataSource::StaticClass, TEXT("UIsdkIHmdDataSource"), &Z_Registration_Info_UClass_UIsdkIHmdDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIHmdDataSource), 1922529606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h__Script_OculusInteraction_1919958865(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHmdDataSource_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
