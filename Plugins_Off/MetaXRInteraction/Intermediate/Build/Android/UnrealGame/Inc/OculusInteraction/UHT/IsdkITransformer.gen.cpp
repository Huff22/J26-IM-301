// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkITransformer.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkITransformer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITransformer_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPose();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPosef();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkTargetTransform();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkGrabPose *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabPose;
class UScriptStruct* FIsdkGrabPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabPose, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabPose"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPose.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkGrabPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Stores the pose and identifier meant to be used in the Transformer computation.\n */" },
		{ "HasNativeMake", "OculusInteraction.IsdkFunctionLibrary.MakeGrabPoseStruct" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
		{ "ToolTip", "@brief Stores the pose and identifier meant to be used in the Transformer computation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Should represent the source of the pose, be identifiable by it, and be different to any other\n// sent to the same transformer\n" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
		{ "ToolTip", "Should represent the source of the pose, be identifiable by it, and be different to any other\nsent to the same transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// represents the modification point of the source, e.g. the pinch point, palm grab center, snap\n// point, etc..\n" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
		{ "ToolTip", "represents the modification point of the source, e.g. the pinch point, palm grab center, snap\npoint, etc.." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabPose, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabPose, Pose), Z_Construct_UScriptStruct_FIsdkPosef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3274912445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::NewProp_Pose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabPose",
	Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::PropPointers),
	sizeof(FIsdkGrabPose),
	alignof(FIsdkGrabPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPose()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabPose.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPose.InnerSingleton;
}
// ********** End ScriptStruct FIsdkGrabPose *******************************************************

// ********** Begin ScriptStruct FIsdkTargetTransform **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkTargetTransform;
class UScriptStruct* FIsdkTargetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkTargetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkTargetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkTargetTransform, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkTargetTransform"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkTargetTransform.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Stores the transformation matrices that represents the current state of the target\n * USceneComponent the user is trying to update through a Transformer.\n */" },
		{ "HasNativeMake", "OculusInteraction.IsdkFunctionLibrary.MakeTargetTransformStruct" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
		{ "ToolTip", "@brief Stores the transformation matrices that represents the current state of the target\nUSceneComponent the user is trying to update through a Transformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWorldTransform_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentWorldTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkTargetTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTargetTransform, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTargetTransform, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewProp_ParentWorldTransform = { "ParentWorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTargetTransform, ParentWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWorldTransform_MetaData), NewProp_ParentWorldTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewProp_ParentWorldTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkTargetTransform",
	Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::PropPointers),
	sizeof(FIsdkTargetTransform),
	alignof(FIsdkTargetTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkTargetTransform()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkTargetTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkTargetTransform.InnerSingleton, Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkTargetTransform.InnerSingleton;
}
// ********** End ScriptStruct FIsdkTargetTransform ************************************************

// ********** Begin Interface UIsdkITransformer ****************************************************
void UIsdkITransformer::StaticRegisterNativesUIsdkITransformer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkITransformer;
UClass* UIsdkITransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkITransformer;
	if (!Z_Registration_Info_UClass_UIsdkITransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkITransformer"),
			Z_Registration_Info_UClass_UIsdkITransformer.InnerSingleton,
			StaticRegisterNativesUIsdkITransformer,
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
	return Z_Registration_Info_UClass_UIsdkITransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkITransformer_NoRegister()
{
	return UIsdkITransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkITransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkITransformer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkITransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkITransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkITransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkITransformer_Statics::ClassParams = {
	&UIsdkITransformer::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkITransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkITransformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkITransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkITransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkITransformer.OuterSingleton, Z_Construct_UClass_UIsdkITransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkITransformer.OuterSingleton;
}
UIsdkITransformer::UIsdkITransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkITransformer);
// ********** End Interface UIsdkITransformer ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkGrabPose::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabPose_Statics::NewStructOps, TEXT("IsdkGrabPose"), &Z_Registration_Info_UScriptStruct_FIsdkGrabPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabPose), 2116190937U) },
		{ FIsdkTargetTransform::StaticStruct, Z_Construct_UScriptStruct_FIsdkTargetTransform_Statics::NewStructOps, TEXT("IsdkTargetTransform"), &Z_Registration_Info_UScriptStruct_FIsdkTargetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkTargetTransform), 3529349854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkITransformer, UIsdkITransformer::StaticClass, TEXT("UIsdkITransformer"), &Z_Registration_Info_UClass_UIsdkITransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkITransformer), 3267274176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h__Script_OculusInteraction_1955789841(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkITransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
