// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkClippedPlaneSurface.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkClippedPlaneSurface() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkBoundsClipper();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkClippedPlaneSurface Function GetBoundsClippers **********************
struct Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics
{
	struct IsdkClippedPlaneSurface_eventGetBoundsClippers_Parms
	{
		TArray<FIsdkBoundsClipper> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Returns an array of bounds clippers which determine the extent within which\n   * this plane exists.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "Returns an array of bounds clippers which determine the extent within which\nthis plane exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkBoundsClipper, METADATA_PARAMS(0, nullptr) }; // 4237424159
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkClippedPlaneSurface_eventGetBoundsClippers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4237424159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkClippedPlaneSurface, nullptr, "GetBoundsClippers", Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::IsdkClippedPlaneSurface_eventGetBoundsClippers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::IsdkClippedPlaneSurface_eventGetBoundsClippers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkClippedPlaneSurface::execGetBoundsClippers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIsdkBoundsClipper>*)Z_Param__Result=P_THIS->GetBoundsClippers();
	P_NATIVE_END;
}
// ********** End Class UIsdkClippedPlaneSurface Function GetBoundsClippers ************************

// ********** Begin Class UIsdkClippedPlaneSurface Function GetPointablePlane **********************
struct Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics
{
	struct IsdkClippedPlaneSurface_eventGetPointablePlane_Parms
	{
		const UIsdkPointablePlane* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Returns the pointable plane used for this surface\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "Returns the pointable plane used for this surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkClippedPlaneSurface_eventGetPointablePlane_Parms, ReturnValue), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkClippedPlaneSurface, nullptr, "GetPointablePlane", Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::IsdkClippedPlaneSurface_eventGetPointablePlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::IsdkClippedPlaneSurface_eventGetPointablePlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkClippedPlaneSurface::execGetPointablePlane)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UIsdkPointablePlane**)Z_Param__Result=P_THIS->GetPointablePlane();
	P_NATIVE_END;
}
// ********** End Class UIsdkClippedPlaneSurface Function GetPointablePlane ************************

// ********** Begin Class UIsdkClippedPlaneSurface Function SetBoundsClippers **********************
struct Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics
{
	struct IsdkClippedPlaneSurface_eventSetBoundsClippers_Parms
	{
		TArray<FIsdkBoundsClipper> InBoundsClippers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sets the array of bounds clippers which determine the extent within which\n   * this plane exists.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "Sets the array of bounds clippers which determine the extent within which\nthis plane exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBoundsClippers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBoundsClippers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBoundsClippers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::NewProp_InBoundsClippers_Inner = { "InBoundsClippers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkBoundsClipper, METADATA_PARAMS(0, nullptr) }; // 4237424159
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::NewProp_InBoundsClippers = { "InBoundsClippers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkClippedPlaneSurface_eventSetBoundsClippers_Parms, InBoundsClippers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBoundsClippers_MetaData), NewProp_InBoundsClippers_MetaData) }; // 4237424159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::NewProp_InBoundsClippers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::NewProp_InBoundsClippers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkClippedPlaneSurface, nullptr, "SetBoundsClippers", Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::IsdkClippedPlaneSurface_eventSetBoundsClippers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::IsdkClippedPlaneSurface_eventSetBoundsClippers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkClippedPlaneSurface::execSetBoundsClippers)
{
	P_GET_TARRAY_REF(FIsdkBoundsClipper,Z_Param_Out_InBoundsClippers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoundsClippers(Z_Param_Out_InBoundsClippers);
	P_NATIVE_END;
}
// ********** End Class UIsdkClippedPlaneSurface Function SetBoundsClippers ************************

// ********** Begin Class UIsdkClippedPlaneSurface Function SetPointablePlane **********************
struct Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics
{
	struct IsdkClippedPlaneSurface_eventSetPointablePlane_Parms
	{
		UIsdkPointablePlane* InPointablePlane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sets the pointable plane used for this surface\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "Sets the pointable plane used for this surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPointablePlane_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointablePlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::NewProp_InPointablePlane = { "InPointablePlane", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkClippedPlaneSurface_eventSetPointablePlane_Parms, InPointablePlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPointablePlane_MetaData), NewProp_InPointablePlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::NewProp_InPointablePlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkClippedPlaneSurface, nullptr, "SetPointablePlane", Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::IsdkClippedPlaneSurface_eventSetPointablePlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::IsdkClippedPlaneSurface_eventSetPointablePlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkClippedPlaneSurface::execSetPointablePlane)
{
	P_GET_OBJECT(UIsdkPointablePlane,Z_Param_InPointablePlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPointablePlane(Z_Param_InPointablePlane);
	P_NATIVE_END;
}
// ********** End Class UIsdkClippedPlaneSurface Function SetPointablePlane ************************

// ********** Begin Class UIsdkClippedPlaneSurface *************************************************
void UIsdkClippedPlaneSurface::StaticRegisterNativesUIsdkClippedPlaneSurface()
{
	UClass* Class = UIsdkClippedPlaneSurface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoundsClippers", &UIsdkClippedPlaneSurface::execGetBoundsClippers },
		{ "GetPointablePlane", &UIsdkClippedPlaneSurface::execGetPointablePlane },
		{ "SetBoundsClippers", &UIsdkClippedPlaneSurface::execSetBoundsClippers },
		{ "SetPointablePlane", &UIsdkClippedPlaneSurface::execSetPointablePlane },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkClippedPlaneSurface;
UClass* UIsdkClippedPlaneSurface::GetPrivateStaticClass()
{
	using TClass = UIsdkClippedPlaneSurface;
	if (!Z_Registration_Info_UClass_UIsdkClippedPlaneSurface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkClippedPlaneSurface"),
			Z_Registration_Info_UClass_UIsdkClippedPlaneSurface.InnerSingleton,
			StaticRegisterNativesUIsdkClippedPlaneSurface,
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
	return Z_Registration_Info_UClass_UIsdkClippedPlaneSurface.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister()
{
	return UIsdkClippedPlaneSurface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * Actor Component representing a surface plane with clipped boundaries, implements\n * IIsdkISurfacePatch and IIsdkHasDebugSegments\n *\n * @see IIsdkISurfacePatch\n * @see IIsdkHasDebugSegments\n */" },
		{ "DisplayName", "ISDK Clipped Plane Surface" },
		{ "IncludePath", "Interaction/IsdkClippedPlaneSurface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "Actor Component representing a surface plane with clipped boundaries, implements\nIIsdkISurfacePatch and IIsdkHasDebugSegments\n\n@see IIsdkISurfacePatch\n@see IIsdkHasDebugSegments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsClippers_MetaData[] = {
		{ "BlueprintGetter", "GetBoundsClippers" },
		{ "BlueprintSetter", "SetBoundsClippers" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The bounds that clip this plane, determining the extent within which it exists.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "The bounds that clip this plane, determining the extent within which it exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointablePlane_MetaData[] = {
		{ "BlueprintGetter", "GetPointablePlane" },
		{ "BlueprintSetter", "SetPointablePlane" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Pointable plane used for this surface */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkClippedPlaneSurface.h" },
		{ "ToolTip", "Pointable plane used for this surface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsClippers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundsClippers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointablePlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetBoundsClippers, "GetBoundsClippers" }, // 1536300602
		{ &Z_Construct_UFunction_UIsdkClippedPlaneSurface_GetPointablePlane, "GetPointablePlane" }, // 3887373330
		{ &Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetBoundsClippers, "SetBoundsClippers" }, // 3901716093
		{ &Z_Construct_UFunction_UIsdkClippedPlaneSurface_SetPointablePlane, "SetPointablePlane" }, // 1090351135
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkClippedPlaneSurface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::NewProp_BoundsClippers_Inner = { "BoundsClippers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkBoundsClipper, METADATA_PARAMS(0, nullptr) }; // 4237424159
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::NewProp_BoundsClippers = { "BoundsClippers", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkClippedPlaneSurface, BoundsClippers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsClippers_MetaData), NewProp_BoundsClippers_MetaData) }; // 4237424159
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::NewProp_PointablePlane = { "PointablePlane", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkClippedPlaneSurface, PointablePlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointablePlane_MetaData), NewProp_PointablePlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::NewProp_BoundsClippers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::NewProp_BoundsClippers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::NewProp_PointablePlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, (int32)VTABLE_OFFSET(UIsdkClippedPlaneSurface, IIsdkISurfacePatch), false },  // 3193637440
	{ Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister, (int32)VTABLE_OFFSET(UIsdkClippedPlaneSurface, IIsdkHasDebugSegments), false },  // 3174987218
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::ClassParams = {
	&UIsdkClippedPlaneSurface::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface()
{
	if (!Z_Registration_Info_UClass_UIsdkClippedPlaneSurface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkClippedPlaneSurface.OuterSingleton, Z_Construct_UClass_UIsdkClippedPlaneSurface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkClippedPlaneSurface.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkClippedPlaneSurface);
UIsdkClippedPlaneSurface::~UIsdkClippedPlaneSurface() {}
// ********** End Class UIsdkClippedPlaneSurface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkClippedPlaneSurface, UIsdkClippedPlaneSurface::StaticClass, TEXT("UIsdkClippedPlaneSurface"), &Z_Registration_Info_UClass_UIsdkClippedPlaneSurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkClippedPlaneSurface), 2246112854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h__Script_OculusInteraction_3290972839(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkClippedPlaneSurface_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
