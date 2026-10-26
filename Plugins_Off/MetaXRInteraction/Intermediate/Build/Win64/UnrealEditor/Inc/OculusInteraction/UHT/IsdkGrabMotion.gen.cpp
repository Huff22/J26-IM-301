// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Motion/IsdkGrabMotion.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabMotion() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabMotion();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabMotion_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPullToHandGrabMotion();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPullToHandGrabMotion_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkGrabMotion **********************************************************
void UIsdkGrabMotion::StaticRegisterNativesUIsdkGrabMotion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabMotion;
UClass* UIsdkGrabMotion::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabMotion;
	if (!Z_Registration_Info_UClass_UIsdkGrabMotion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabMotion"),
			Z_Registration_Info_UClass_UIsdkGrabMotion.InnerSingleton,
			StaticRegisterNativesUIsdkGrabMotion,
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
	return Z_Registration_Info_UClass_UIsdkGrabMotion.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabMotion_NoRegister()
{
	return UIsdkGrabMotion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief UIsdkGrabMotion is an abstract base class allowing for different means of moving\n * grabbed objects relative to the grabber.\n *\n * @see UIsdkPullToHandGrabMotion\n * @see UIsdkRelativeToHandGrabMotion\n * @see UIsdkManipulateInPlaceGrabMotion\n */" },
		{ "IncludePath", "Interaction/Motion/IsdkGrabMotion.h" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "@brief UIsdkGrabMotion is an abstract base class allowing for different means of moving\ngrabbed objects relative to the grabber.\n\n@see UIsdkPullToHandGrabMotion\n@see UIsdkRelativeToHandGrabMotion\n@see UIsdkManipulateInPlaceGrabMotion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbableComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The grabbable that motion is being applied to\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The grabbable that motion is being applied to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabberComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The grabber that is applying the motion\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The grabber that is applying the motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformerComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The grab transformer component associated with the grabbable component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The grab transformer component associated with the grabbable component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabberComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTransformerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabMotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabMotion_Statics::NewProp_GrabbableComponent = { "GrabbableComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabMotion, GrabbableComponent), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbableComponent_MetaData), NewProp_GrabbableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabMotion_Statics::NewProp_GrabberComponent = { "GrabberComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabMotion, GrabberComponent), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabberComponent_MetaData), NewProp_GrabberComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabMotion_Statics::NewProp_GrabTransformerComponent = { "GrabTransformerComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabMotion, GrabTransformerComponent), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformerComponent_MetaData), NewProp_GrabTransformerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabMotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabMotion_Statics::NewProp_GrabbableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabMotion_Statics::NewProp_GrabberComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabMotion_Statics::NewProp_GrabTransformerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabMotion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabMotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabMotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabMotion_Statics::ClassParams = {
	&UIsdkGrabMotion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkGrabMotion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabMotion_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabMotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabMotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabMotion()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabMotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabMotion.OuterSingleton, Z_Construct_UClass_UIsdkGrabMotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabMotion.OuterSingleton;
}
UIsdkGrabMotion::UIsdkGrabMotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabMotion);
UIsdkGrabMotion::~UIsdkGrabMotion() {}
// ********** End Class UIsdkGrabMotion ************************************************************

// ********** Begin Class UIsdkPullToHandGrabMotion ************************************************
void UIsdkPullToHandGrabMotion::StaticRegisterNativesUIsdkPullToHandGrabMotion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion;
UClass* UIsdkPullToHandGrabMotion::GetPrivateStaticClass()
{
	using TClass = UIsdkPullToHandGrabMotion;
	if (!Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPullToHandGrabMotion"),
			Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion.InnerSingleton,
			StaticRegisterNativesUIsdkPullToHandGrabMotion,
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
	return Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPullToHandGrabMotion_NoRegister()
{
	return UIsdkPullToHandGrabMotion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief UIsdkPullToHandGrabMotion implements a motion that pulls the grabbed object to the pinch\n * position or the palm grab position, depending on which method was used to start the grab.\n *\n * @see UIsdkGrabMotion\n */" },
		{ "IncludePath", "Interaction/Motion/IsdkGrabMotion.h" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "@brief UIsdkPullToHandGrabMotion implements a motion that pulls the grabbed object to the pinch\nposition or the palm grab position, depending on which method was used to start the grab.\n\n@see UIsdkGrabMotion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteTime_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * If bUseAbsoluteTime is true, this motion will move from its original position to the grabber's\n   * position in a fixed amount of time, regardless of the distance between the two, as specified\n   * by PullTime.  Otherwise, the grabbable will move at a speed described by PullSpeed.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "If bUseAbsoluteTime is true, this motion will move from its original position to the grabber's\nposition in a fixed amount of time, regardless of the distance between the two, as specified\nby PullTime.  Otherwise, the grabbable will move at a speed described by PullSpeed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullSpeed_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The speed at which the grabbable will travel, if bUseAbsoluteTime is false.\n   */" },
		{ "EditCondition", "bUseAbsoluteTime==false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The speed at which the grabbable will travel, if bUseAbsoluteTime is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullTime_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The time for the grabbable will take to reach the grabber, if bUseAbsoluteTime is true.\n   */" },
		{ "EditCondition", "bUseAbsoluteTime==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The time for the grabbable will take to reach the grabber, if bUseAbsoluteTime is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullCurve_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * PullCurve can be used to modify the motion by which the grabbed object is pulled to hand.\n   * If bUseAbsoluteTime is true, the x-axis is treated as the normalized time of travel, and the\n   * y-axis should be a 0-1 value indicating distance from the grabber.\n   * If bUseAbsoluteTime is false, the x-axis represents the elapsed time since motion started, in\n   * seconds, and the y-axis represents a coefficient by which PullSpeed is multiplied.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "PullCurve can be used to modify the motion by which the grabbed object is pulled to hand.\nIf bUseAbsoluteTime is true, the x-axis is treated as the normalized time of travel, and the\ny-axis should be a 0-1 value indicating distance from the grabber.\nIf bUseAbsoluteTime is false, the x-axis represents the elapsed time since motion started, in\nseconds, and the y-axis represents a coefficient by which PullSpeed is multiplied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTimestamp_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * When the motion started.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "When the motion started." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The grabbable's world space transform when the grab started\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The grabbable's world space transform when the grab started" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationOffset_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The initial rotational offset between the grabber and the grabbable\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "The initial rotational offset between the grabber and the grabbable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReachedTarget_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Whether the grabbable has reached the grabber yet.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "Whether the grabbable has reached the grabber yet." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseAbsoluteTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PullCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotationOffset;
	static void NewProp_bHasReachedTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReachedTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPullToHandGrabMotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bUseAbsoluteTime_SetBit(void* Obj)
{
	((UIsdkPullToHandGrabMotion*)Obj)->bUseAbsoluteTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bUseAbsoluteTime = { "bUseAbsoluteTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkPullToHandGrabMotion), &Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bUseAbsoluteTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAbsoluteTime_MetaData), NewProp_bUseAbsoluteTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_PullSpeed = { "PullSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPullToHandGrabMotion, PullSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullSpeed_MetaData), NewProp_PullSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_PullTime = { "PullTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPullToHandGrabMotion, PullTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullTime_MetaData), NewProp_PullTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_PullCurve = { "PullCurve", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPullToHandGrabMotion, PullCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullCurve_MetaData), NewProp_PullCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_StartTimestamp = { "StartTimestamp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPullToHandGrabMotion, StartTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTimestamp_MetaData), NewProp_StartTimestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPullToHandGrabMotion, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTransform_MetaData), NewProp_StartTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_StartRotationOffset = { "StartRotationOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPullToHandGrabMotion, StartRotationOffset), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotationOffset_MetaData), NewProp_StartRotationOffset_MetaData) };
void Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bHasReachedTarget_SetBit(void* Obj)
{
	((UIsdkPullToHandGrabMotion*)Obj)->bHasReachedTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bHasReachedTarget = { "bHasReachedTarget", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkPullToHandGrabMotion), &Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bHasReachedTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReachedTarget_MetaData), NewProp_bHasReachedTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bUseAbsoluteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_PullSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_PullTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_PullCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_StartTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_StartTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_StartRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::NewProp_bHasReachedTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkGrabMotion,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::ClassParams = {
	&UIsdkPullToHandGrabMotion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::PropPointers),
	0,
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPullToHandGrabMotion()
{
	if (!Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion.OuterSingleton, Z_Construct_UClass_UIsdkPullToHandGrabMotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion.OuterSingleton;
}
UIsdkPullToHandGrabMotion::UIsdkPullToHandGrabMotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPullToHandGrabMotion);
UIsdkPullToHandGrabMotion::~UIsdkPullToHandGrabMotion() {}
// ********** End Class UIsdkPullToHandGrabMotion **************************************************

// ********** Begin Class UIsdkRelativeToPointerGrabMotion *****************************************
void UIsdkRelativeToPointerGrabMotion::StaticRegisterNativesUIsdkRelativeToPointerGrabMotion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion;
UClass* UIsdkRelativeToPointerGrabMotion::GetPrivateStaticClass()
{
	using TClass = UIsdkRelativeToPointerGrabMotion;
	if (!Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRelativeToPointerGrabMotion"),
			Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion.InnerSingleton,
			StaticRegisterNativesUIsdkRelativeToPointerGrabMotion,
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
	return Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_NoRegister()
{
	return UIsdkRelativeToPointerGrabMotion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief UIsdkRelativeToPointerGrabMotion implements a motion that moves the grabbed object\n * relative to the pointer pose's transform.  The grabbed object will keep its position relative to\n * the pointer, as if it were attached.\n *\n * @see UIsdkGrabMotion\n */" },
		{ "IncludePath", "Interaction/Motion/IsdkGrabMotion.h" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "@brief UIsdkRelativeToPointerGrabMotion implements a motion that moves the grabbed object\nrelative to the pointer pose's transform.  The grabbed object will keep its position relative to\nthe pointer, as if it were attached.\n\n@see UIsdkGrabMotion" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRelativeToPointerGrabMotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkGrabMotion,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics::ClassParams = {
	&UIsdkRelativeToPointerGrabMotion::StaticClass,
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
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion()
{
	if (!Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion.OuterSingleton, Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion.OuterSingleton;
}
UIsdkRelativeToPointerGrabMotion::UIsdkRelativeToPointerGrabMotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRelativeToPointerGrabMotion);
UIsdkRelativeToPointerGrabMotion::~UIsdkRelativeToPointerGrabMotion() {}
// ********** End Class UIsdkRelativeToPointerGrabMotion *******************************************

// ********** Begin Class UIsdkManipulateInPlaceGrabMotion *****************************************
void UIsdkManipulateInPlaceGrabMotion::StaticRegisterNativesUIsdkManipulateInPlaceGrabMotion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion;
UClass* UIsdkManipulateInPlaceGrabMotion::GetPrivateStaticClass()
{
	using TClass = UIsdkManipulateInPlaceGrabMotion;
	if (!Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkManipulateInPlaceGrabMotion"),
			Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion.InnerSingleton,
			StaticRegisterNativesUIsdkManipulateInPlaceGrabMotion,
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
	return Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_NoRegister()
{
	return UIsdkManipulateInPlaceGrabMotion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief UIsdkManipulateInPlaceGrabMotion implements a motion that moves the grabbed object as\n * if the grabber had started it's grab at the grabber's location.  Alternatively, it can be thought\n * of as applying the grabbers motion 1:1 to the grabbable, at whichever point the grabbable\n * was when it was grabbed.\n *\n * @see UIsdkGrabMotion\n */" },
		{ "IncludePath", "Interaction/Motion/IsdkGrabMotion.h" },
		{ "ModuleRelativePath", "Public/Interaction/Motion/IsdkGrabMotion.h" },
		{ "ToolTip", "@brief UIsdkManipulateInPlaceGrabMotion implements a motion that moves the grabbed object as\nif the grabber had started it's grab at the grabber's location.  Alternatively, it can be thought\nof as applying the grabbers motion 1:1 to the grabbable, at whichever point the grabbable\nwas when it was grabbed.\n\n@see UIsdkGrabMotion" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkManipulateInPlaceGrabMotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkGrabMotion,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics::ClassParams = {
	&UIsdkManipulateInPlaceGrabMotion::StaticClass,
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
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion()
{
	if (!Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion.OuterSingleton, Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion.OuterSingleton;
}
UIsdkManipulateInPlaceGrabMotion::UIsdkManipulateInPlaceGrabMotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkManipulateInPlaceGrabMotion);
UIsdkManipulateInPlaceGrabMotion::~UIsdkManipulateInPlaceGrabMotion() {}
// ********** End Class UIsdkManipulateInPlaceGrabMotion *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Motion_IsdkGrabMotion_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabMotion, UIsdkGrabMotion::StaticClass, TEXT("UIsdkGrabMotion"), &Z_Registration_Info_UClass_UIsdkGrabMotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabMotion), 3999460694U) },
		{ Z_Construct_UClass_UIsdkPullToHandGrabMotion, UIsdkPullToHandGrabMotion::StaticClass, TEXT("UIsdkPullToHandGrabMotion"), &Z_Registration_Info_UClass_UIsdkPullToHandGrabMotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPullToHandGrabMotion), 3930028761U) },
		{ Z_Construct_UClass_UIsdkRelativeToPointerGrabMotion, UIsdkRelativeToPointerGrabMotion::StaticClass, TEXT("UIsdkRelativeToPointerGrabMotion"), &Z_Registration_Info_UClass_UIsdkRelativeToPointerGrabMotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRelativeToPointerGrabMotion), 3508148106U) },
		{ Z_Construct_UClass_UIsdkManipulateInPlaceGrabMotion, UIsdkManipulateInPlaceGrabMotion::StaticClass, TEXT("UIsdkManipulateInPlaceGrabMotion"), &Z_Registration_Info_UClass_UIsdkManipulateInPlaceGrabMotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkManipulateInPlaceGrabMotion), 3927885995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Motion_IsdkGrabMotion_h__Script_OculusInteraction_2396351954(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Motion_IsdkGrabMotion_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Motion_IsdkGrabMotion_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
