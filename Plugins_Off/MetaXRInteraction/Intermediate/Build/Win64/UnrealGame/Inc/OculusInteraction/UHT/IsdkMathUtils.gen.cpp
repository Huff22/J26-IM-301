// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utilities/IsdkMathUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkMathUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMathUtilsWrapper();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMathUtilsWrapper_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkMathUtilsWrapper Function ChangeValueAtRate *************************
struct Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics
{
	struct IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms
	{
		float From;
		float To;
		float DeltaPerSecond;
		float Dt;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Utilities/IsdkMathUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_From;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_To;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms, From), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms, To), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_DeltaPerSecond = { "DeltaPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms, DeltaPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_Dt = { "Dt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms, Dt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_DeltaPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_Dt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkMathUtilsWrapper, nullptr, "ChangeValueAtRate", Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::IsdkMathUtilsWrapper_eventChangeValueAtRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkMathUtilsWrapper::execChangeValueAtRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_From);
	P_GET_PROPERTY(FFloatProperty,Z_Param_To);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaPerSecond);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Dt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UIsdkMathUtilsWrapper::ChangeValueAtRate(Z_Param_From,Z_Param_To,Z_Param_DeltaPerSecond,Z_Param_Dt);
	P_NATIVE_END;
}
// ********** End Class UIsdkMathUtilsWrapper Function ChangeValueAtRate ***************************

// ********** Begin Class UIsdkMathUtilsWrapper ****************************************************
void UIsdkMathUtilsWrapper::StaticRegisterNativesUIsdkMathUtilsWrapper()
{
	UClass* Class = UIsdkMathUtilsWrapper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeValueAtRate", &UIsdkMathUtilsWrapper::execChangeValueAtRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkMathUtilsWrapper;
UClass* UIsdkMathUtilsWrapper::GetPrivateStaticClass()
{
	using TClass = UIsdkMathUtilsWrapper;
	if (!Z_Registration_Info_UClass_UIsdkMathUtilsWrapper.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkMathUtilsWrapper"),
			Z_Registration_Info_UClass_UIsdkMathUtilsWrapper.InnerSingleton,
			StaticRegisterNativesUIsdkMathUtilsWrapper,
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
	return Z_Registration_Info_UClass_UIsdkMathUtilsWrapper.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkMathUtilsWrapper_NoRegister()
{
	return UIsdkMathUtilsWrapper::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utilities/IsdkMathUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utilities/IsdkMathUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkMathUtilsWrapper_ChangeValueAtRate, "ChangeValueAtRate" }, // 3282934534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkMathUtilsWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics::ClassParams = {
	&UIsdkMathUtilsWrapper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkMathUtilsWrapper()
{
	if (!Z_Registration_Info_UClass_UIsdkMathUtilsWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkMathUtilsWrapper.OuterSingleton, Z_Construct_UClass_UIsdkMathUtilsWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkMathUtilsWrapper.OuterSingleton;
}
UIsdkMathUtilsWrapper::UIsdkMathUtilsWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkMathUtilsWrapper);
UIsdkMathUtilsWrapper::~UIsdkMathUtilsWrapper() {}
// ********** End Class UIsdkMathUtilsWrapper ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkMathUtils_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkMathUtilsWrapper, UIsdkMathUtilsWrapper::StaticClass, TEXT("UIsdkMathUtilsWrapper"), &Z_Registration_Info_UClass_UIsdkMathUtilsWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkMathUtilsWrapper), 2203516472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkMathUtils_h__Script_OculusInteraction_3558523321(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkMathUtils_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkMathUtils_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
