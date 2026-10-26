// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkIGameplayTagContainer.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIGameplayTagContainer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIGameplayTagContainer Function GetGameplayTagContainer **********
struct IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms
{
	FGameplayTagContainer ContainerOut;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIsdkIGameplayTagContainer::GetGameplayTagContainer(FGameplayTagContainer& ContainerOut)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGameplayTagContainer instead.");
	IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIGameplayTagContainer_GetGameplayTagContainer = FName(TEXT("GetGameplayTagContainer"));
bool IIsdkIGameplayTagContainer::Execute_GetGameplayTagContainer(UObject* O, FGameplayTagContainer& ContainerOut)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIGameplayTagContainer::StaticClass()));
	IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIGameplayTagContainer_GetGameplayTagContainer);
	if (Func)
	{
		Parms.ContainerOut=ContainerOut;
		O->ProcessEvent(Func, &Parms);
		ContainerOut=Parms.ContainerOut;
	}
	else if (auto I = (IIsdkIGameplayTagContainer*)(O->GetNativeInterfaceAddress(UIsdkIGameplayTagContainer::StaticClass())))
	{
		Parms.ReturnValue = I->GetGameplayTagContainer_Implementation(ContainerOut);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Implementing class will replace the given container with its GameplayTagContainer for use in\n   * interactions\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkIGameplayTagContainer.h" },
		{ "ToolTip", "Implementing class will replace the given container with its GameplayTagContainer for use in\n  * interactions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::NewProp_ContainerOut = { "ContainerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms, ContainerOut), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 2104890724
void Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms), &Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::NewProp_ContainerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIGameplayTagContainer, nullptr, "GetGameplayTagContainer", Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::PropPointers), sizeof(IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIGameplayTagContainer_eventGetGameplayTagContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIGameplayTagContainer::execGetGameplayTagContainer)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContainerOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayTagContainer_Implementation(Z_Param_Out_ContainerOut);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIGameplayTagContainer Function GetGameplayTagContainer ************

// ********** Begin Interface UIsdkIGameplayTagContainer *******************************************
void UIsdkIGameplayTagContainer::StaticRegisterNativesUIsdkIGameplayTagContainer()
{
	UClass* Class = UIsdkIGameplayTagContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGameplayTagContainer", &IIsdkIGameplayTagContainer::execGetGameplayTagContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIGameplayTagContainer;
UClass* UIsdkIGameplayTagContainer::GetPrivateStaticClass()
{
	using TClass = UIsdkIGameplayTagContainer;
	if (!Z_Registration_Info_UClass_UIsdkIGameplayTagContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIGameplayTagContainer"),
			Z_Registration_Info_UClass_UIsdkIGameplayTagContainer.InnerSingleton,
			StaticRegisterNativesUIsdkIGameplayTagContainer,
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
	return Z_Registration_Info_UClass_UIsdkIGameplayTagContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister()
{
	return UIsdkIGameplayTagContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/IsdkIGameplayTagContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIGameplayTagContainer_GetGameplayTagContainer, "GetGameplayTagContainer" }, // 1247845449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIGameplayTagContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics::ClassParams = {
	&UIsdkIGameplayTagContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer()
{
	if (!Z_Registration_Info_UClass_UIsdkIGameplayTagContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIGameplayTagContainer.OuterSingleton, Z_Construct_UClass_UIsdkIGameplayTagContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIGameplayTagContainer.OuterSingleton;
}
UIsdkIGameplayTagContainer::UIsdkIGameplayTagContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIGameplayTagContainer);
// ********** End Interface UIsdkIGameplayTagContainer *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIGameplayTagContainer, UIsdkIGameplayTagContainer::StaticClass, TEXT("UIsdkIGameplayTagContainer"), &Z_Registration_Info_UClass_UIsdkIGameplayTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIGameplayTagContainer), 258907587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h__Script_OculusInteraction_1706851668(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkIGameplayTagContainer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
