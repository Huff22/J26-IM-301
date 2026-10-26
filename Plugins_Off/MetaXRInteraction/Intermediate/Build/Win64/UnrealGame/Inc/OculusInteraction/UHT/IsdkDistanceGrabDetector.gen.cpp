// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/GrabDetectors/IsdkDistanceGrabDetector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkDistanceGrabDetector() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkDistanceGrabDetector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkDistanceGrabDetector_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabDetector();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkDistanceGrabDetector ************************************************
void UIsdkDistanceGrabDetector::StaticRegisterNativesUIsdkDistanceGrabDetector()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkDistanceGrabDetector;
UClass* UIsdkDistanceGrabDetector::GetPrivateStaticClass()
{
	using TClass = UIsdkDistanceGrabDetector;
	if (!Z_Registration_Info_UClass_UIsdkDistanceGrabDetector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkDistanceGrabDetector"),
			Z_Registration_Info_UClass_UIsdkDistanceGrabDetector.InnerSingleton,
			StaticRegisterNativesUIsdkDistanceGrabDetector,
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
	return Z_Registration_Info_UClass_UIsdkDistanceGrabDetector.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkDistanceGrabDetector_NoRegister()
{
	return UIsdkDistanceGrabDetector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief UIsdkDistanceGrabDetector is used by a grab interactor to detect grabbables at\n * a distance.  The current mechanism for detection is to check for grabbables within a cone\n * from the grabber's pointer pose.\n *\n * @see UIsdkGrabDetector\n * @see UIsdkGrabberComponent\n * @see UIsdkGrabbableComponent\n */" },
		{ "IncludePath", "Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "@brief UIsdkDistanceGrabDetector is used by a grab interactor to detect grabbables at\na distance.  The current mechanism for detection is to check for grabbables within a cone\nfrom the grabber's pointer pose.\n\n@see UIsdkGrabDetector\n@see UIsdkGrabberComponent\n@see UIsdkGrabbableComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The radius of the cone/frustum used to detect grabbables.  Note that under the hood, we're\n   * using a sphere collider with radius equal to FrustumRadius to detect grab candidates, so very\n   * large values may not be performant.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "The radius of the cone/frustum used to detect grabbables.  Note that under the hood, we're\nusing a sphere collider with radius equal to FrustumRadius to detect grab candidates, so very\nlarge values may not be performant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumAngle_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The angle of the cone/frustum (apex angle) used to detect grabbables.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "The angle of the cone/frustum (apex angle) used to detect grabbables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugVisuals_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * If true, visuals for this detector will be disabled when the\n   * \"Meta.InteractionSDK.DebugInteractionVisuals\" console variable is enabled.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "If true, visuals for this detector will be disabled when the\n\"Meta.InteractionSDK.DebugInteractionVisuals\" console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectType_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The collision object type of the sphere component used to detect grabbables\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "The collision object type of the sphere component used to detect grabbables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredGrabbables_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * HoveredGrabbables contains the set of all grabbables which are currently hovered by this\n   * distance grab detector\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "HoveredGrabbables contains the set of all grabbables which are currently hovered by this\ndistance grab detector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandidateGrabbable_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * CandidateGrabbable is the grabbable which will be grabbed if a grab is initiated.\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "CandidateGrabbable is the grabbable which will be grabbed if a grab is initiated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceGrabCollider_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * DistanceGrabCollider is the sphere collider used to detect all potential distance grab targets.\n   * The set of overlapping grabbables is then further filtered by angle between the pointer pose\n   * and the nearest point on the grabbable's bounding box to the pointer.\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkDistanceGrabDetector.h" },
		{ "ToolTip", "DistanceGrabCollider is the sphere collider used to detect all potential distance grab targets.\nThe set of overlapping grabbables is then further filtered by angle between the pointer pose\nand the nearest point on the grabbable's bounding box to the pointer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumAngle;
	static void NewProp_bDisableDebugVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugVisuals;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionObjectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredGrabbables_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HoveredGrabbables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateGrabbable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceGrabCollider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkDistanceGrabDetector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_FrustumRadius = { "FrustumRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkDistanceGrabDetector, FrustumRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumRadius_MetaData), NewProp_FrustumRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_FrustumAngle = { "FrustumAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkDistanceGrabDetector, FrustumAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumAngle_MetaData), NewProp_FrustumAngle_MetaData) };
void Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_bDisableDebugVisuals_SetBit(void* Obj)
{
	((UIsdkDistanceGrabDetector*)Obj)->bDisableDebugVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_bDisableDebugVisuals = { "bDisableDebugVisuals", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkDistanceGrabDetector), &Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_bDisableDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugVisuals_MetaData), NewProp_bDisableDebugVisuals_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_CollisionObjectType = { "CollisionObjectType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkDistanceGrabDetector, CollisionObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectType_MetaData), NewProp_CollisionObjectType_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_HoveredGrabbables_ElementProp = { "HoveredGrabbables", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_HoveredGrabbables = { "HoveredGrabbables", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkDistanceGrabDetector, HoveredGrabbables), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredGrabbables_MetaData), NewProp_HoveredGrabbables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_CandidateGrabbable = { "CandidateGrabbable", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkDistanceGrabDetector, CandidateGrabbable), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandidateGrabbable_MetaData), NewProp_CandidateGrabbable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_DistanceGrabCollider = { "DistanceGrabCollider", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkDistanceGrabDetector, DistanceGrabCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceGrabCollider_MetaData), NewProp_DistanceGrabCollider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_FrustumRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_FrustumAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_bDisableDebugVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_CollisionObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_HoveredGrabbables_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_HoveredGrabbables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_CandidateGrabbable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::NewProp_DistanceGrabCollider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkGrabDetector,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::ClassParams = {
	&UIsdkDistanceGrabDetector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::PropPointers),
	0,
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkDistanceGrabDetector()
{
	if (!Z_Registration_Info_UClass_UIsdkDistanceGrabDetector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkDistanceGrabDetector.OuterSingleton, Z_Construct_UClass_UIsdkDistanceGrabDetector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkDistanceGrabDetector.OuterSingleton;
}
UIsdkDistanceGrabDetector::UIsdkDistanceGrabDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkDistanceGrabDetector);
UIsdkDistanceGrabDetector::~UIsdkDistanceGrabDetector() {}
// ********** End Class UIsdkDistanceGrabDetector **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkDistanceGrabDetector_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkDistanceGrabDetector, UIsdkDistanceGrabDetector::StaticClass, TEXT("UIsdkDistanceGrabDetector"), &Z_Registration_Info_UClass_UIsdkDistanceGrabDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkDistanceGrabDetector), 2413043555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkDistanceGrabDetector_h__Script_OculusInteraction_1296113100(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkDistanceGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkDistanceGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
