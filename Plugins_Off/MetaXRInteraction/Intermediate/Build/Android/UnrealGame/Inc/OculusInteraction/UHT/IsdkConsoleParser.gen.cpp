// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/IsdkConsoleParser.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConsoleParser() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleParser();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleParser_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleReceiver();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkConsoleReceiver *************************************************
void UIsdkConsoleReceiver::StaticRegisterNativesUIsdkConsoleReceiver()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConsoleReceiver;
UClass* UIsdkConsoleReceiver::GetPrivateStaticClass()
{
	using TClass = UIsdkConsoleReceiver;
	if (!Z_Registration_Info_UClass_UIsdkConsoleReceiver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConsoleReceiver"),
			Z_Registration_Info_UClass_UIsdkConsoleReceiver.InnerSingleton,
			StaticRegisterNativesUIsdkConsoleReceiver,
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
	return Z_Registration_Info_UClass_UIsdkConsoleReceiver.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister()
{
	return UIsdkConsoleReceiver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConsoleReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tools/IsdkConsoleParser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkConsoleReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConsoleReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConsoleReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConsoleReceiver_Statics::ClassParams = {
	&UIsdkConsoleReceiver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConsoleReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConsoleReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConsoleReceiver()
{
	if (!Z_Registration_Info_UClass_UIsdkConsoleReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConsoleReceiver.OuterSingleton, Z_Construct_UClass_UIsdkConsoleReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConsoleReceiver.OuterSingleton;
}
UIsdkConsoleReceiver::UIsdkConsoleReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConsoleReceiver);
// ********** End Interface UIsdkConsoleReceiver ***************************************************

// ********** Begin Class UIsdkConsoleParser Function Get ******************************************
struct Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics
{
	struct IsdkConsoleParser_eventGet_Parms
	{
		UIsdkConsoleParser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Tools/IsdkConsoleParser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConsoleParser_eventGet_Parms, ReturnValue), Z_Construct_UClass_UIsdkConsoleParser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConsoleParser, nullptr, "Get", Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::IsdkConsoleParser_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::IsdkConsoleParser_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConsoleParser_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConsoleParser_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConsoleParser::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConsoleParser**)Z_Param__Result=UIsdkConsoleParser::Get();
	P_NATIVE_END;
}
// ********** End Class UIsdkConsoleParser Function Get ********************************************

// ********** Begin Class UIsdkConsoleParser *******************************************************
void UIsdkConsoleParser::StaticRegisterNativesUIsdkConsoleParser()
{
	UClass* Class = UIsdkConsoleParser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get", &UIsdkConsoleParser::execGet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConsoleParser;
UClass* UIsdkConsoleParser::GetPrivateStaticClass()
{
	using TClass = UIsdkConsoleParser;
	if (!Z_Registration_Info_UClass_UIsdkConsoleParser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConsoleParser"),
			Z_Registration_Info_UClass_UIsdkConsoleParser.InnerSingleton,
			StaticRegisterNativesUIsdkConsoleParser,
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
	return Z_Registration_Info_UClass_UIsdkConsoleParser.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConsoleParser_NoRegister()
{
	return UIsdkConsoleParser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConsoleParser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Console Parser" },
		{ "IncludePath", "Tools/IsdkConsoleParser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tools/IsdkConsoleParser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkConsoleParser_Get, "Get" }, // 1656656995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConsoleParser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConsoleParser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConsoleParser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConsoleParser_Statics::ClassParams = {
	&UIsdkConsoleParser::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConsoleParser_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConsoleParser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConsoleParser()
{
	if (!Z_Registration_Info_UClass_UIsdkConsoleParser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConsoleParser.OuterSingleton, Z_Construct_UClass_UIsdkConsoleParser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConsoleParser.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConsoleParser);
// ********** End Class UIsdkConsoleParser *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConsoleReceiver, UIsdkConsoleReceiver::StaticClass, TEXT("UIsdkConsoleReceiver"), &Z_Registration_Info_UClass_UIsdkConsoleReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConsoleReceiver), 101292119U) },
		{ Z_Construct_UClass_UIsdkConsoleParser, UIsdkConsoleParser::StaticClass, TEXT("UIsdkConsoleParser"), &Z_Registration_Info_UClass_UIsdkConsoleParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConsoleParser), 3678799842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h__Script_OculusInteraction_2188068111(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
