// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkIPosedMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIPosedMesh() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIPosedMesh Function GetCurrentRootPose **************************
struct IsdkIPosedMesh_eventGetCurrentRootPose_Parms
{
	FTransform ReturnValue;
};
const FTransform IIsdkIPosedMesh::GetCurrentRootPose()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentRootPose instead.");
	IsdkIPosedMesh_eventGetCurrentRootPose_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIPosedMesh_GetCurrentRootPose = FName(TEXT("GetCurrentRootPose"));
const FTransform IIsdkIPosedMesh::Execute_GetCurrentRootPose(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIPosedMesh::StaticClass()));
	IsdkIPosedMesh_eventGetCurrentRootPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIPosedMesh_GetCurrentRootPose);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIPosedMesh*)(O->GetNativeInterfaceAddress(UIsdkIPosedMesh::StaticClass())))
	{
		Parms.ReturnValue = I->GetCurrentRootPose_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n   * @brief Gets the root pose for the implementing class, before overrides are applied (typically\n   * via the IsdkIRootPose interface)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIPosedMesh.h" },
		{ "ToolTip", "* @brief Gets the root pose for the implementing class, before overrides are applied (typically\n* via the IsdkIRootPose interface)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIPosedMesh_eventGetCurrentRootPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIPosedMesh, nullptr, "GetCurrentRootPose", Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::PropPointers), sizeof(IsdkIPosedMesh_eventGetCurrentRootPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIPosedMesh_eventGetCurrentRootPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIPosedMesh::execGetCurrentRootPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetCurrentRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIPosedMesh Function GetCurrentRootPose ****************************

// ********** Begin Interface UIsdkIPosedMesh Function GetFinalRootPose ****************************
struct IsdkIPosedMesh_eventGetFinalRootPose_Parms
{
	FTransform ReturnValue;
};
const FTransform IIsdkIPosedMesh::GetFinalRootPose()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFinalRootPose instead.");
	IsdkIPosedMesh_eventGetFinalRootPose_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIPosedMesh_GetFinalRootPose = FName(TEXT("GetFinalRootPose"));
const FTransform IIsdkIPosedMesh::Execute_GetFinalRootPose(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIPosedMesh::StaticClass()));
	IsdkIPosedMesh_eventGetFinalRootPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIPosedMesh_GetFinalRootPose);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIPosedMesh*)(O->GetNativeInterfaceAddress(UIsdkIPosedMesh::StaticClass())))
	{
		Parms.ReturnValue = I->GetFinalRootPose_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n   * @brief Gets the final root pose for the implementing class, after all overrides have been\n   * applied\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIPosedMesh.h" },
		{ "ToolTip", "* @brief Gets the final root pose for the implementing class, after all overrides have been\n* applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIPosedMesh_eventGetFinalRootPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIPosedMesh, nullptr, "GetFinalRootPose", Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::PropPointers), sizeof(IsdkIPosedMesh_eventGetFinalRootPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIPosedMesh_eventGetFinalRootPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIPosedMesh::execGetFinalRootPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetFinalRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIPosedMesh Function GetFinalRootPose ******************************

// ********** Begin Interface UIsdkIPosedMesh Function GetPoseOverride *****************************
struct IsdkIPosedMesh_eventGetPoseOverride_Parms
{
	const UIsdkConditionalPoseOverride* ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIPosedMesh_eventGetPoseOverride_Parms()
		: ReturnValue(NULL)
	{
	}
};
const UIsdkConditionalPoseOverride* IIsdkIPosedMesh::GetPoseOverride()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPoseOverride instead.");
	IsdkIPosedMesh_eventGetPoseOverride_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIPosedMesh_GetPoseOverride = FName(TEXT("GetPoseOverride"));
const UIsdkConditionalPoseOverride* IIsdkIPosedMesh::Execute_GetPoseOverride(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIPosedMesh::StaticClass()));
	IsdkIPosedMesh_eventGetPoseOverride_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIPosedMesh_GetPoseOverride);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIPosedMesh*)(O->GetNativeInterfaceAddress(UIsdkIPosedMesh::StaticClass())))
	{
		Parms.ReturnValue = I->GetPoseOverride_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the current Pose Override Conditional, which contains the current override state\n   * and the actual override transforms for root and joint poses\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIPosedMesh.h" },
		{ "ToolTip", "@brief Gets the current Pose Override Conditional, which contains the current override state\nand the actual override transforms for root and joint poses" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIPosedMesh_eventGetPoseOverride_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIPosedMesh, nullptr, "GetPoseOverride", Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::PropPointers), sizeof(IsdkIPosedMesh_eventGetPoseOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIPosedMesh_eventGetPoseOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIPosedMesh::execGetPoseOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UIsdkConditionalPoseOverride**)Z_Param__Result=P_THIS->GetPoseOverride_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIPosedMesh Function GetPoseOverride *******************************

// ********** Begin Interface UIsdkIPosedMesh Function HasJointPoses *******************************
struct IsdkIPosedMesh_eventHasJointPoses_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIPosedMesh_eventHasJointPoses_Parms()
		: ReturnValue(false)
	{
	}
};
const bool IIsdkIPosedMesh::HasJointPoses()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasJointPoses instead.");
	IsdkIPosedMesh_eventHasJointPoses_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIPosedMesh_HasJointPoses = FName(TEXT("HasJointPoses"));
const bool IIsdkIPosedMesh::Execute_HasJointPoses(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIPosedMesh::StaticClass()));
	IsdkIPosedMesh_eventHasJointPoses_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIPosedMesh_HasJointPoses);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIPosedMesh*)(O->GetNativeInterfaceAddress(UIsdkIPosedMesh::StaticClass())))
	{
		Parms.ReturnValue = I->HasJointPoses_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Whether or not the implementing class has joint poses\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIPosedMesh.h" },
		{ "ToolTip", "@brief Whether or not the implementing class has joint poses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkIPosedMesh_eventHasJointPoses_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIPosedMesh_eventHasJointPoses_Parms), &Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIPosedMesh, nullptr, "HasJointPoses", Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::PropPointers), sizeof(IsdkIPosedMesh_eventHasJointPoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIPosedMesh_eventHasJointPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIPosedMesh::execHasJointPoses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasJointPoses_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIPosedMesh Function HasJointPoses *********************************

// ********** Begin Interface UIsdkIPosedMesh ******************************************************
void UIsdkIPosedMesh::StaticRegisterNativesUIsdkIPosedMesh()
{
	UClass* Class = UIsdkIPosedMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentRootPose", &IIsdkIPosedMesh::execGetCurrentRootPose },
		{ "GetFinalRootPose", &IIsdkIPosedMesh::execGetFinalRootPose },
		{ "GetPoseOverride", &IIsdkIPosedMesh::execGetPoseOverride },
		{ "HasJointPoses", &IIsdkIPosedMesh::execHasJointPoses },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIPosedMesh;
UClass* UIsdkIPosedMesh::GetPrivateStaticClass()
{
	using TClass = UIsdkIPosedMesh;
	if (!Z_Registration_Info_UClass_UIsdkIPosedMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIPosedMesh"),
			Z_Registration_Info_UClass_UIsdkIPosedMesh.InnerSingleton,
			StaticRegisterNativesUIsdkIPosedMesh,
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
	return Z_Registration_Info_UClass_UIsdkIPosedMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister()
{
	return UIsdkIPosedMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIPosedMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkIPosedMesh.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIPosedMesh_GetCurrentRootPose, "GetCurrentRootPose" }, // 2491082609
		{ &Z_Construct_UFunction_UIsdkIPosedMesh_GetFinalRootPose, "GetFinalRootPose" }, // 2349394816
		{ &Z_Construct_UFunction_UIsdkIPosedMesh_GetPoseOverride, "GetPoseOverride" }, // 3128995934
		{ &Z_Construct_UFunction_UIsdkIPosedMesh_HasJointPoses, "HasJointPoses" }, // 1495226457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIPosedMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIPosedMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPosedMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIPosedMesh_Statics::ClassParams = {
	&UIsdkIPosedMesh::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPosedMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIPosedMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIPosedMesh()
{
	if (!Z_Registration_Info_UClass_UIsdkIPosedMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIPosedMesh.OuterSingleton, Z_Construct_UClass_UIsdkIPosedMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIPosedMesh.OuterSingleton;
}
UIsdkIPosedMesh::UIsdkIPosedMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIPosedMesh);
// ********** End Interface UIsdkIPosedMesh ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIPosedMesh, UIsdkIPosedMesh::StaticClass, TEXT("UIsdkIPosedMesh"), &Z_Registration_Info_UClass_UIsdkIPosedMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIPosedMesh), 735499893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h__Script_OculusInteraction_3082276634(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
