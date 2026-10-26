// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Internal/BlankComponent/IsdkBlankComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkBlankComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkBlankComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkBlankComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkBlankComponent Function GetSurfacePatch *****************************
struct Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics
{
	struct IsdkBlankComponent_eventGetSurfacePatch_Parms
	{
		TScriptInterface<IIsdkISurfacePatch> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkBlankComponent_eventGetSurfacePatch_Parms, ReturnValue), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkBlankComponent, nullptr, "GetSurfacePatch", Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::IsdkBlankComponent_eventGetSurfacePatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::IsdkBlankComponent_eventGetSurfacePatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkBlankComponent::execGetSurfacePatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkISurfacePatch>*)Z_Param__Result=P_THIS->GetSurfacePatch();
	P_NATIVE_END;
}
// ********** End Class UIsdkBlankComponent Function GetSurfacePatch *******************************

// ********** Begin Class UIsdkBlankComponent Function GetVectorOfSomething ************************
struct Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics
{
	struct IsdkBlankComponent_eventGetVectorOfSomething_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Property Getters\n" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
		{ "ToolTip", "Property Getters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkBlankComponent_eventGetVectorOfSomething_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkBlankComponent, nullptr, "GetVectorOfSomething", Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::IsdkBlankComponent_eventGetVectorOfSomething_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::IsdkBlankComponent_eventGetVectorOfSomething_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkBlankComponent::execGetVectorOfSomething)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVectorOfSomething();
	P_NATIVE_END;
}
// ********** End Class UIsdkBlankComponent Function GetVectorOfSomething **************************

// ********** Begin Class UIsdkBlankComponent Function SetSurfacePatch *****************************
struct Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics
{
	struct IsdkBlankComponent_eventSetSurfacePatch_Parms
	{
		TScriptInterface<IIsdkISurfacePatch> InSurfacePatch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InSurfacePatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::NewProp_InSurfacePatch = { "InSurfacePatch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkBlankComponent_eventSetSurfacePatch_Parms, InSurfacePatch), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::NewProp_InSurfacePatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkBlankComponent, nullptr, "SetSurfacePatch", Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::IsdkBlankComponent_eventSetSurfacePatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::IsdkBlankComponent_eventSetSurfacePatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkBlankComponent::execSetSurfacePatch)
{
	P_GET_TINTERFACE(IIsdkISurfacePatch,Z_Param_InSurfacePatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSurfacePatch(Z_Param_InSurfacePatch);
	P_NATIVE_END;
}
// ********** End Class UIsdkBlankComponent Function SetSurfacePatch *******************************

// ********** Begin Class UIsdkBlankComponent Function SetVectorOfSomething ************************
struct Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics
{
	struct IsdkBlankComponent_eventSetVectorOfSomething_Parms
	{
		FVector InVectorOfSomething;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Property Setters\n" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
		{ "ToolTip", "Property Setters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVectorOfSomething_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVectorOfSomething;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::NewProp_InVectorOfSomething = { "InVectorOfSomething", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkBlankComponent_eventSetVectorOfSomething_Parms, InVectorOfSomething), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVectorOfSomething_MetaData), NewProp_InVectorOfSomething_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::NewProp_InVectorOfSomething,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkBlankComponent, nullptr, "SetVectorOfSomething", Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::IsdkBlankComponent_eventSetVectorOfSomething_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::IsdkBlankComponent_eventSetVectorOfSomething_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkBlankComponent::execSetVectorOfSomething)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVectorOfSomething);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorOfSomething(Z_Param_Out_InVectorOfSomething);
	P_NATIVE_END;
}
// ********** End Class UIsdkBlankComponent Function SetVectorOfSomething **************************

// ********** Begin Class UIsdkBlankComponent ******************************************************
void UIsdkBlankComponent::StaticRegisterNativesUIsdkBlankComponent()
{
	UClass* Class = UIsdkBlankComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSurfacePatch", &UIsdkBlankComponent::execGetSurfacePatch },
		{ "GetVectorOfSomething", &UIsdkBlankComponent::execGetVectorOfSomething },
		{ "SetSurfacePatch", &UIsdkBlankComponent::execSetSurfacePatch },
		{ "SetVectorOfSomething", &UIsdkBlankComponent::execSetVectorOfSomething },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkBlankComponent;
UClass* UIsdkBlankComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkBlankComponent;
	if (!Z_Registration_Info_UClass_UIsdkBlankComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkBlankComponent"),
			Z_Registration_Info_UClass_UIsdkBlankComponent.InnerSingleton,
			StaticRegisterNativesUIsdkBlankComponent,
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
	return Z_Registration_Info_UClass_UIsdkBlankComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkBlankComponent_NoRegister()
{
	return UIsdkBlankComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkBlankComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * This is example component that derives from UActorComponent.\n * It demonstrates the pattern for taking a dependency on one other object (a ClippedPlaneSurface)\n * and one other basic property type (an FVector)\n */" },
		{ "DisplayName", "ISDK Component" },
		{ "IncludePath", "Internal/BlankComponent/IsdkBlankComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
		{ "ToolTip", "This is example component that derives from UActorComponent.\nIt demonstrates the pattern for taking a dependency on one other object (a ClippedPlaneSurface)\nand one other basic property type (an FVector)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorOfSomething_MetaData[] = {
		{ "BlueprintGetter", "GetVectorOfSomething" },
		{ "BlueprintSetter", "SetVectorOfSomething" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
		{ "ToolTip", "Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePatch_MetaData[] = {
		{ "BlueprintGetter", "GetSurfacePatch" },
		{ "BlueprintSetter", "SetSurfacePatch" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Private/Internal/BlankComponent/IsdkBlankComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorOfSomething;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SurfacePatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkBlankComponent_GetSurfacePatch, "GetSurfacePatch" }, // 1331628779
		{ &Z_Construct_UFunction_UIsdkBlankComponent_GetVectorOfSomething, "GetVectorOfSomething" }, // 4135929648
		{ &Z_Construct_UFunction_UIsdkBlankComponent_SetSurfacePatch, "SetSurfacePatch" }, // 4267998711
		{ &Z_Construct_UFunction_UIsdkBlankComponent_SetVectorOfSomething, "SetVectorOfSomething" }, // 289175297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkBlankComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkBlankComponent_Statics::NewProp_VectorOfSomething = { "VectorOfSomething", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkBlankComponent, VectorOfSomething), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorOfSomething_MetaData), NewProp_VectorOfSomething_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkBlankComponent_Statics::NewProp_SurfacePatch = { "SurfacePatch", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkBlankComponent, SurfacePatch), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfacePatch_MetaData), NewProp_SurfacePatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkBlankComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkBlankComponent_Statics::NewProp_VectorOfSomething,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkBlankComponent_Statics::NewProp_SurfacePatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkBlankComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkBlankComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkBlankComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkBlankComponent_Statics::ClassParams = {
	&UIsdkBlankComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkBlankComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkBlankComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkBlankComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkBlankComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkBlankComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkBlankComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkBlankComponent.OuterSingleton, Z_Construct_UClass_UIsdkBlankComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkBlankComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkBlankComponent);
UIsdkBlankComponent::~UIsdkBlankComponent() {}
// ********** End Class UIsdkBlankComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkBlankComponent, UIsdkBlankComponent::StaticClass, TEXT("UIsdkBlankComponent"), &Z_Registration_Info_UClass_UIsdkBlankComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkBlankComponent), 134438064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h__Script_OculusInteraction_1599200534(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
