// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h"
#include "Interaction/Grabbable/IsdkTransformerUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkOneGrabTranslateTransformer() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkOneGrabTranslateTransformer *****************************************
void UIsdkOneGrabTranslateTransformer::StaticRegisterNativesUIsdkOneGrabTranslateTransformer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer;
UClass* UIsdkOneGrabTranslateTransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkOneGrabTranslateTransformer;
	if (!Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkOneGrabTranslateTransformer"),
			Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.InnerSingleton,
			StaticRegisterNativesUIsdkOneGrabTranslateTransformer,
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
	return Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_NoRegister()
{
	return UIsdkOneGrabTranslateTransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkOneGrabTranslateTransformer\n * @brief Scene component utilized for transforming a grabbable object, modifying only its\n * translation and only when grabbed by one hand/controller\n * @see UIsdkTransformer\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK One Grab Translate Transformer" },
		{ "IncludePath", "Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
		{ "ToolTip", "@class UIsdkOneGrabTranslateTransformer\n@brief Scene component utilized for transforming a grabbable object, modifying only its\ntranslation and only when grabbed by one hand/controller\n@see UIsdkTransformer\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRelativeConstraint_MetaData[] = {
		{ "Category", "InteractionSDK|Constraint" },
		{ "Comment", "/* If true, use relative space when calculating constraints */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
		{ "ToolTip", "If true, use relative space when calculating constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionConstraint_MetaData[] = {
		{ "Category", "InteractionSDK|Constraint" },
		{ "Comment", "/* Struct containing potential constraint axes for translation */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
		{ "ToolTip", "Struct containing potential constraint axes for translation" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRelativeConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRelativeConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkOneGrabTranslateTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint_SetBit(void* Obj)
{
	((UIsdkOneGrabTranslateTransformer*)Obj)->bIsRelativeConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint = { "bIsRelativeConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkOneGrabTranslateTransformer), &Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRelativeConstraint_MetaData), NewProp_bIsRelativeConstraint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_PositionConstraint = { "PositionConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkOneGrabTranslateTransformer, PositionConstraint), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionConstraint_MetaData), NewProp_PositionConstraint_MetaData) }; // 3149593998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_PositionConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::ClassParams = {
	&UIsdkOneGrabTranslateTransformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.OuterSingleton, Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkOneGrabTranslateTransformer);
UIsdkOneGrabTranslateTransformer::~UIsdkOneGrabTranslateTransformer() {}
// ********** End Class UIsdkOneGrabTranslateTransformer *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkOneGrabTranslateTransformer, UIsdkOneGrabTranslateTransformer::StaticClass, TEXT("UIsdkOneGrabTranslateTransformer"), &Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkOneGrabTranslateTransformer), 2582045871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_535716480(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
