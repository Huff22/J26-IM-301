// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnchorComponents.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorComponents() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRBaseAnchorComponent Function GetType ****************************
struct Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics
{
	struct OculusXRBaseAnchorComponent_eventGetType_Parms
	{
		EOculusXRSpaceComponentType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRBaseAnchorComponent_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 362484532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent, nullptr, "GetType", Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::OculusXRBaseAnchorComponent_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::OculusXRBaseAnchorComponent_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRBaseAnchorComponent::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOculusXRSpaceComponentType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// ********** End Class UOculusXRBaseAnchorComponent Function GetType ******************************

// ********** Begin Class UOculusXRBaseAnchorComponent Function IsComponentEnabled *****************
struct Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics
{
	struct OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms), &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent, nullptr, "IsComponentEnabled", Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRBaseAnchorComponent::execIsComponentEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsComponentEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRBaseAnchorComponent Function IsComponentEnabled *******************

// ********** Begin Class UOculusXRBaseAnchorComponent *********************************************
void UOculusXRBaseAnchorComponent::StaticRegisterNativesUOculusXRBaseAnchorComponent()
{
	UClass* Class = UOculusXRBaseAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetType", &UOculusXRBaseAnchorComponent::execGetType },
		{ "IsComponentEnabled", &UOculusXRBaseAnchorComponent::execIsComponentEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent;
UClass* UOculusXRBaseAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRBaseAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRBaseAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRBaseAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister()
{
	return UOculusXRBaseAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType, "GetType" }, // 2641381469
		{ &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled, "IsComponentEnabled" }, // 3738858140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRBaseAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::ClassParams = {
	&UOculusXRBaseAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton;
}
UOculusXRBaseAnchorComponent::UOculusXRBaseAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRBaseAnchorComponent);
UOculusXRBaseAnchorComponent::~UOculusXRBaseAnchorComponent() {}
// ********** End Class UOculusXRBaseAnchorComponent ***********************************************

// ********** Begin Class UOculusXRLocatableAnchorComponent Function GetTransform ******************
struct Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics
{
	struct OculusXRLocatableAnchorComponent_eventGetTransform_Parms
	{
		FTransform outTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_outTransform = { "outTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRLocatableAnchorComponent_eventGetTransform_Parms, outTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRLocatableAnchorComponent_eventGetTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRLocatableAnchorComponent_eventGetTransform_Parms), &Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_outTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRLocatableAnchorComponent, nullptr, "GetTransform", Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::OculusXRLocatableAnchorComponent_eventGetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::OculusXRLocatableAnchorComponent_eventGetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRLocatableAnchorComponent::execGetTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_outTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTransform(Z_Param_Out_outTransform);
	P_NATIVE_END;
}
// ********** End Class UOculusXRLocatableAnchorComponent Function GetTransform ********************

// ********** Begin Class UOculusXRLocatableAnchorComponent ****************************************
void UOculusXRLocatableAnchorComponent::StaticRegisterNativesUOculusXRLocatableAnchorComponent()
{
	UClass* Class = UOculusXRLocatableAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTransform", &UOculusXRLocatableAnchorComponent::execGetTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent;
UClass* UOculusXRLocatableAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRLocatableAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRLocatableAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRLocatableAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister()
{
	return UOculusXRLocatableAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform, "GetTransform" }, // 1478297121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLocatableAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::ClassParams = {
	&UOculusXRLocatableAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRLocatableAnchorComponent);
UOculusXRLocatableAnchorComponent::~UOculusXRLocatableAnchorComponent() {}
// ********** End Class UOculusXRLocatableAnchorComponent ******************************************

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent Function GetUUIDs *****************
struct Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics
{
	struct OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms
	{
		TArray<FOculusXRUUID> outUUIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outUUIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs_Inner = { "outUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs = { "outUUIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms, outUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3912340335
void Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms), &Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent, nullptr, "GetUUIDs", Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRSpaceContainerAnchorComponent::execGetUUIDs)
{
	P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_outUUIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUUIDs(Z_Param_Out_outUUIDs);
	P_NATIVE_END;
}
// ********** End Class UOculusXRSpaceContainerAnchorComponent Function GetUUIDs *******************

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent ***********************************
void UOculusXRSpaceContainerAnchorComponent::StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent()
{
	UClass* Class = UOculusXRSpaceContainerAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUUIDs", &UOculusXRSpaceContainerAnchorComponent::execGetUUIDs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent;
UClass* UOculusXRSpaceContainerAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRSpaceContainerAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSpaceContainerAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister()
{
	return UOculusXRSpaceContainerAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs, "GetUUIDs" }, // 2193911109
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceContainerAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::ClassParams = {
	&UOculusXRSpaceContainerAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSpaceContainerAnchorComponent);
UOculusXRSpaceContainerAnchorComponent::~UOculusXRSpaceContainerAnchorComponent() {}
// ********** End Class UOculusXRSpaceContainerAnchorComponent *************************************

// ********** Begin Class UOculusXRSharableAnchorComponent *****************************************
void UOculusXRSharableAnchorComponent::StaticRegisterNativesUOculusXRSharableAnchorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent;
UClass* UOculusXRSharableAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRSharableAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSharableAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRSharableAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister()
{
	return UOculusXRSharableAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSharableAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::ClassParams = {
	&UOculusXRSharableAnchorComponent::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSharableAnchorComponent);
UOculusXRSharableAnchorComponent::~UOculusXRSharableAnchorComponent() {}
// ********** End Class UOculusXRSharableAnchorComponent *******************************************

// ********** Begin Class UOculusXRStorableAnchorComponent *****************************************
void UOculusXRStorableAnchorComponent::StaticRegisterNativesUOculusXRStorableAnchorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent;
UClass* UOculusXRStorableAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRStorableAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRStorableAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRStorableAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister()
{
	return UOculusXRStorableAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStorableAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::ClassParams = {
	&UOculusXRStorableAnchorComponent::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRStorableAnchorComponent);
UOculusXRStorableAnchorComponent::~UOculusXRStorableAnchorComponent() {}
// ********** End Class UOculusXRStorableAnchorComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRBaseAnchorComponent, UOculusXRBaseAnchorComponent::StaticClass, TEXT("UOculusXRBaseAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRBaseAnchorComponent), 4197405740U) },
		{ Z_Construct_UClass_UOculusXRLocatableAnchorComponent, UOculusXRLocatableAnchorComponent::StaticClass, TEXT("UOculusXRLocatableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLocatableAnchorComponent), 2752678858U) },
		{ Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent, UOculusXRSpaceContainerAnchorComponent::StaticClass, TEXT("UOculusXRSpaceContainerAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceContainerAnchorComponent), 863899568U) },
		{ Z_Construct_UClass_UOculusXRSharableAnchorComponent, UOculusXRSharableAnchorComponent::StaticClass, TEXT("UOculusXRSharableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSharableAnchorComponent), 1994701082U) },
		{ Z_Construct_UClass_UOculusXRStorableAnchorComponent, UOculusXRStorableAnchorComponent::StaticClass, TEXT("UOculusXRStorableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStorableAnchorComponent), 3407941479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_1869663368(TEXT("/Script/OculusXRAnchors"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h__Script_OculusXRAnchors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
