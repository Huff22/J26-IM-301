// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/GrabDetectors/IsdkRayGrabDetector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRayGrabDetector() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabDetector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayGrabDetector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayGrabDetector_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRayGrabDetector *****************************************************
void UIsdkRayGrabDetector::StaticRegisterNativesUIsdkRayGrabDetector()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRayGrabDetector;
UClass* UIsdkRayGrabDetector::GetPrivateStaticClass()
{
	using TClass = UIsdkRayGrabDetector;
	if (!Z_Registration_Info_UClass_UIsdkRayGrabDetector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRayGrabDetector"),
			Z_Registration_Info_UClass_UIsdkRayGrabDetector.InnerSingleton,
			StaticRegisterNativesUIsdkRayGrabDetector,
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
	return Z_Registration_Info_UClass_UIsdkRayGrabDetector.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRayGrabDetector_NoRegister()
{
	return UIsdkRayGrabDetector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRayGrabDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief UIsdkRayGrabDetector is used by a grab interactor to detect grabbables at\n * along the path of a ray cast out from the grabber's pointer pose.\n *\n * @see UIsdkGrabDetector\n * @see UIsdkGrabberComponent\n * @see UIsdkGrabbableComponent\n */" },
		{ "IncludePath", "Interaction/GrabDetectors/IsdkRayGrabDetector.h" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkRayGrabDetector.h" },
		{ "ToolTip", "@brief UIsdkRayGrabDetector is used by a grab interactor to detect grabbables at\nalong the path of a ray cast out from the grabber's pointer pose.\n\n@see UIsdkGrabDetector\n@see UIsdkGrabberComponent\n@see UIsdkGrabbableComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugVisuals_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * If true, visuals for this detector will be disabled when the\n   * \"Meta.InteractionSDK.DebugInteractionVisuals\" console variable is enabled.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkRayGrabDetector.h" },
		{ "ToolTip", "If true, visuals for this detector will be disabled when the\n\"Meta.InteractionSDK.DebugInteractionVisuals\" console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayLength_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The length of the ray used to detect grabbables\n" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkRayGrabDetector.h" },
		{ "ToolTip", "The length of the ray used to detect grabbables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredGrabbable_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkRayGrabDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectQueryTypes_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The object types ray grab uses to detect grabbables.  If empty, will detect all object types.\n" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkRayGrabDetector.h" },
		{ "ToolTip", "The object types ray grab uses to detect grabbables.  If empty, will detect all object types." },
	};
#endif // WITH_METADATA
	static void NewProp_bDisableDebugVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugVisuals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredGrabbable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectQueryTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectQueryTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRayGrabDetector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_bDisableDebugVisuals_SetBit(void* Obj)
{
	((UIsdkRayGrabDetector*)Obj)->bDisableDebugVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_bDisableDebugVisuals = { "bDisableDebugVisuals", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRayGrabDetector), &Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_bDisableDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugVisuals_MetaData), NewProp_bDisableDebugVisuals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_RayLength = { "RayLength", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayGrabDetector, RayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayLength_MetaData), NewProp_RayLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_HoveredGrabbable = { "HoveredGrabbable", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayGrabDetector, HoveredGrabbable), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredGrabbable_MetaData), NewProp_HoveredGrabbable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_ObjectQueryTypes_Inner = { "ObjectQueryTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_ObjectQueryTypes = { "ObjectQueryTypes", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayGrabDetector, ObjectQueryTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectQueryTypes_MetaData), NewProp_ObjectQueryTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRayGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_bDisableDebugVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_RayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_HoveredGrabbable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_ObjectQueryTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayGrabDetector_Statics::NewProp_ObjectQueryTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayGrabDetector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRayGrabDetector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkGrabDetector,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayGrabDetector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRayGrabDetector_Statics::ClassParams = {
	&UIsdkRayGrabDetector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkRayGrabDetector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayGrabDetector_Statics::PropPointers),
	0,
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayGrabDetector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRayGrabDetector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRayGrabDetector()
{
	if (!Z_Registration_Info_UClass_UIsdkRayGrabDetector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRayGrabDetector.OuterSingleton, Z_Construct_UClass_UIsdkRayGrabDetector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRayGrabDetector.OuterSingleton;
}
UIsdkRayGrabDetector::UIsdkRayGrabDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRayGrabDetector);
UIsdkRayGrabDetector::~UIsdkRayGrabDetector() {}
// ********** End Class UIsdkRayGrabDetector *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkRayGrabDetector_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRayGrabDetector, UIsdkRayGrabDetector::StaticClass, TEXT("UIsdkRayGrabDetector"), &Z_Registration_Info_UClass_UIsdkRayGrabDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRayGrabDetector), 3193224970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkRayGrabDetector_h__Script_OculusInteraction_1808196546(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkRayGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkRayGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
