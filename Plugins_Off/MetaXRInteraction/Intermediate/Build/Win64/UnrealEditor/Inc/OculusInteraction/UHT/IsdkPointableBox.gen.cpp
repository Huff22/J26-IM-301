// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Surfaces/IsdkPointableBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPointableBox() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableBox();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPointableBox Function GetSize ***************************************
struct Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics
{
	struct IsdkPointableBox_eventGetSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Getter\n" },
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointableBox.h" },
		{ "ToolTip", "Getter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointableBox_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointableBox, nullptr, "GetSize", Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::IsdkPointableBox_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::IsdkPointableBox_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointableBox_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointableBox_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointableBox::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointableBox Function GetSize *****************************************

// ********** Begin Class UIsdkPointableBox Function SetSize ***************************************
struct Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics
{
	struct IsdkPointableBox_eventSetSize_Parms
	{
		FVector InSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Setter\n" },
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointableBox.h" },
		{ "ToolTip", "Setter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointableBox_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::NewProp_InSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointableBox, nullptr, "SetSize", Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::IsdkPointableBox_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::IsdkPointableBox_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointableBox_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointableBox_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointableBox::execSetSize)
{
	P_GET_STRUCT(FVector,Z_Param_InSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_InSize);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointableBox Function SetSize *****************************************

// ********** Begin Class UIsdkPointableBox ********************************************************
void UIsdkPointableBox::StaticRegisterNativesUIsdkPointableBox()
{
	UClass* Class = UIsdkPointableBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSize", &UIsdkPointableBox::execGetSize },
		{ "SetSize", &UIsdkPointableBox::execSetSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPointableBox;
UClass* UIsdkPointableBox::GetPrivateStaticClass()
{
	using TClass = UIsdkPointableBox;
	if (!Z_Registration_Info_UClass_UIsdkPointableBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPointableBox"),
			Z_Registration_Info_UClass_UIsdkPointableBox.InnerSingleton,
			StaticRegisterNativesUIsdkPointableBox,
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
	return Z_Registration_Info_UClass_UIsdkPointableBox.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPointableBox_NoRegister()
{
	return UIsdkPointableBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPointableBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * UIsdkPointableBox is used to represent a box volume within which interaction takes place.  It\n * extends IIsdkISurface to provide polymorphic behavior, where any shape of surface may be valid\n * for interaction.\n *\n * @see IIsdkIPose\n * @see IIsdkISurface\n */" },
		{ "DisplayName", "ISDK Pointable Box" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/Surfaces/IsdkPointableBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointableBox.h" },
		{ "ToolTip", "UIsdkPointableBox is used to represent a box volume within which interaction takes place.  It\nextends IIsdkISurface to provide polymorphic behavior, where any shape of surface may be valid\nfor interaction.\n\n@see IIsdkIPose\n@see IIsdkISurface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "BlueprintGetter", "GetSize" },
		{ "BlueprintSetter", "SetSize" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointableBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPointableBox_GetSize, "GetSize" }, // 3280098964
		{ &Z_Construct_UFunction_UIsdkPointableBox_SetSize, "SetSize" }, // 3771613653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPointableBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPointableBox_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointableBox, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPointableBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointableBox_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPointableBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkPointableBox_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkPointableBox, IIsdkIPose), false },  // 1721230349
	{ Z_Construct_UClass_UIsdkISurface_NoRegister, (int32)VTABLE_OFFSET(UIsdkPointableBox, IIsdkISurface), false },  // 1705786929
	{ Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister, (int32)VTABLE_OFFSET(UIsdkPointableBox, IIsdkHasDebugSegments), false },  // 3174987218
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPointableBox_Statics::ClassParams = {
	&UIsdkPointableBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPointableBox_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableBox_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPointableBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPointableBox()
{
	if (!Z_Registration_Info_UClass_UIsdkPointableBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPointableBox.OuterSingleton, Z_Construct_UClass_UIsdkPointableBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPointableBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPointableBox);
UIsdkPointableBox::~UIsdkPointableBox() {}
// ********** End Class UIsdkPointableBox **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPointableBox, UIsdkPointableBox::StaticClass, TEXT("UIsdkPointableBox"), &Z_Registration_Info_UClass_UIsdkPointableBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPointableBox), 2085503419U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h__Script_OculusInteraction_3785194709(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointableBox_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
