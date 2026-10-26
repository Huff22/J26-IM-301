// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSceneComponents.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRSceneComponents() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent_NoRegister();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_NoRegister();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_NoRegister();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_NoRegister();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent();
OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRPlaneAnchorComponent Function GetPositionAndSize ****************
struct Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics
{
	struct OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms
	{
		FVector outPosition;
		FVector outSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize = { "outSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms, outSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms), &Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRPlaneAnchorComponent, nullptr, "GetPositionAndSize", Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRPlaneAnchorComponent::execGetPositionAndSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPositionAndSize(Z_Param_Out_outPosition,Z_Param_Out_outSize);
	P_NATIVE_END;
}
// ********** End Class UOculusXRPlaneAnchorComponent Function GetPositionAndSize ******************

// ********** Begin Class UOculusXRPlaneAnchorComponent ********************************************
void UOculusXRPlaneAnchorComponent::StaticRegisterNativesUOculusXRPlaneAnchorComponent()
{
	UClass* Class = UOculusXRPlaneAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPositionAndSize", &UOculusXRPlaneAnchorComponent::execGetPositionAndSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent;
UClass* UOculusXRPlaneAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRPlaneAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRPlaneAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRPlaneAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent_NoRegister()
{
	return UOculusXRPlaneAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize, "GetPositionAndSize" }, // 57813901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPlaneAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::ClassParams = {
	&UOculusXRPlaneAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPlaneAnchorComponent);
UOculusXRPlaneAnchorComponent::~UOculusXRPlaneAnchorComponent() {}
// ********** End Class UOculusXRPlaneAnchorComponent **********************************************

// ********** Begin Class UOculusXRVolumeAnchorComponent Function GetPositionAndSize ***************
struct Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics
{
	struct OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms
	{
		FVector outPosition;
		FVector outSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize = { "outSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms, outSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms), &Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRVolumeAnchorComponent, nullptr, "GetPositionAndSize", Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRVolumeAnchorComponent::execGetPositionAndSize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_outSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPositionAndSize(Z_Param_Out_outPosition,Z_Param_Out_outSize);
	P_NATIVE_END;
}
// ********** End Class UOculusXRVolumeAnchorComponent Function GetPositionAndSize *****************

// ********** Begin Class UOculusXRVolumeAnchorComponent *******************************************
void UOculusXRVolumeAnchorComponent::StaticRegisterNativesUOculusXRVolumeAnchorComponent()
{
	UClass* Class = UOculusXRVolumeAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPositionAndSize", &UOculusXRVolumeAnchorComponent::execGetPositionAndSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent;
UClass* UOculusXRVolumeAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRVolumeAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRVolumeAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRVolumeAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent_NoRegister()
{
	return UOculusXRVolumeAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize, "GetPositionAndSize" }, // 4015473368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRVolumeAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::ClassParams = {
	&UOculusXRVolumeAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRVolumeAnchorComponent);
UOculusXRVolumeAnchorComponent::~UOculusXRVolumeAnchorComponent() {}
// ********** End Class UOculusXRVolumeAnchorComponent *********************************************

// ********** Begin Class UOculusXRSemanticClassificationAnchorComponent Function GetSemanticClassifications 
struct Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics
{
	struct OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms
	{
		TArray<FString> outClassifications;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_outClassifications_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outClassifications;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications_Inner = { "outClassifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications = { "outClassifications", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms, outClassifications), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms), &Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent, nullptr, "GetSemanticClassifications", Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRSemanticClassificationAnchorComponent::execGetSemanticClassifications)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_outClassifications);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSemanticClassifications(Z_Param_Out_outClassifications);
	P_NATIVE_END;
}
// ********** End Class UOculusXRSemanticClassificationAnchorComponent Function GetSemanticClassifications 

// ********** Begin Class UOculusXRSemanticClassificationAnchorComponent ***************************
void UOculusXRSemanticClassificationAnchorComponent::StaticRegisterNativesUOculusXRSemanticClassificationAnchorComponent()
{
	UClass* Class = UOculusXRSemanticClassificationAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSemanticClassifications", &UOculusXRSemanticClassificationAnchorComponent::execGetSemanticClassifications },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent;
UClass* UOculusXRSemanticClassificationAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRSemanticClassificationAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSemanticClassificationAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRSemanticClassificationAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_NoRegister()
{
	return UOculusXRSemanticClassificationAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications, "GetSemanticClassifications" }, // 1659547380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSemanticClassificationAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::ClassParams = {
	&UOculusXRSemanticClassificationAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSemanticClassificationAnchorComponent);
UOculusXRSemanticClassificationAnchorComponent::~UOculusXRSemanticClassificationAnchorComponent() {}
// ********** End Class UOculusXRSemanticClassificationAnchorComponent *****************************

// ********** Begin Class UOculusXRRoomLayoutAnchorComponent Function GetRoomLayout ****************
struct Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics
{
	struct OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms
	{
		FOculusXRUUID outFloorUUID;
		FOculusXRUUID outCeilingUUID;
		TArray<FOculusXRUUID> outWallsUUIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outFloorUUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outCeilingUUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outWallsUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outWallsUUIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outFloorUUID = { "outFloorUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outFloorUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outCeilingUUID = { "outCeilingUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outCeilingUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs_Inner = { "outWallsUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs = { "outWallsUUIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outWallsUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3912340335
void Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outFloorUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outCeilingUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent, nullptr, "GetRoomLayout", Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRRoomLayoutAnchorComponent::execGetRoomLayout)
{
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_outFloorUUID);
	P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_outCeilingUUID);
	P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_outWallsUUIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRoomLayout(Z_Param_Out_outFloorUUID,Z_Param_Out_outCeilingUUID,Z_Param_Out_outWallsUUIDs);
	P_NATIVE_END;
}
// ********** End Class UOculusXRRoomLayoutAnchorComponent Function GetRoomLayout ******************

// ********** Begin Class UOculusXRRoomLayoutAnchorComponent ***************************************
void UOculusXRRoomLayoutAnchorComponent::StaticRegisterNativesUOculusXRRoomLayoutAnchorComponent()
{
	UClass* Class = UOculusXRRoomLayoutAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRoomLayout", &UOculusXRRoomLayoutAnchorComponent::execGetRoomLayout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent;
UClass* UOculusXRRoomLayoutAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRRoomLayoutAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRRoomLayoutAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRRoomLayoutAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_NoRegister()
{
	return UOculusXRRoomLayoutAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout, "GetRoomLayout" }, // 2537162257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRoomLayoutAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::ClassParams = {
	&UOculusXRRoomLayoutAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRRoomLayoutAnchorComponent);
UOculusXRRoomLayoutAnchorComponent::~UOculusXRRoomLayoutAnchorComponent() {}
// ********** End Class UOculusXRRoomLayoutAnchorComponent *****************************************

// ********** Begin Class UOculusXRTriangleMeshAnchorComponent *************************************
void UOculusXRTriangleMeshAnchorComponent::StaticRegisterNativesUOculusXRTriangleMeshAnchorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent;
UClass* UOculusXRTriangleMeshAnchorComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRTriangleMeshAnchorComponent;
	if (!Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRTriangleMeshAnchorComponent"),
			Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRTriangleMeshAnchorComponent,
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
	return Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_NoRegister()
{
	return UOculusXRTriangleMeshAnchorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRSceneComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRSceneComponents.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRTriangleMeshAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::ClassParams = {
	&UOculusXRTriangleMeshAnchorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRTriangleMeshAnchorComponent);
UOculusXRTriangleMeshAnchorComponent::~UOculusXRTriangleMeshAnchorComponent() {}
// ********** End Class UOculusXRTriangleMeshAnchorComponent ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneComponents_h__Script_OculusXRScene_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPlaneAnchorComponent, UOculusXRPlaneAnchorComponent::StaticClass, TEXT("UOculusXRPlaneAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPlaneAnchorComponent), 291529641U) },
		{ Z_Construct_UClass_UOculusXRVolumeAnchorComponent, UOculusXRVolumeAnchorComponent::StaticClass, TEXT("UOculusXRVolumeAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRVolumeAnchorComponent), 91230194U) },
		{ Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent, UOculusXRSemanticClassificationAnchorComponent::StaticClass, TEXT("UOculusXRSemanticClassificationAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSemanticClassificationAnchorComponent), 1919650404U) },
		{ Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent, UOculusXRRoomLayoutAnchorComponent::StaticClass, TEXT("UOculusXRRoomLayoutAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRoomLayoutAnchorComponent), 255845874U) },
		{ Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent, UOculusXRTriangleMeshAnchorComponent::StaticClass, TEXT("UOculusXRTriangleMeshAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRTriangleMeshAnchorComponent), 67570504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneComponents_h__Script_OculusXRScene_2894686706(TEXT("/Script/OculusXRScene"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneComponents_h__Script_OculusXRScene_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneComponents_h__Script_OculusXRScene_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
