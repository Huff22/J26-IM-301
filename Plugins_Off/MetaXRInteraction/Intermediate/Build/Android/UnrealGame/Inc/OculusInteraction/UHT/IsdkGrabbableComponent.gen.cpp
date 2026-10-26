// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkGrabbableComponent.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabbableComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkGrabbableColliderMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode;
static UEnum* EIsdkGrabbableColliderMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkGrabbableColliderMode"));
	}
	return Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkGrabbableColliderMode>()
{
	return EIsdkGrabbableColliderMode_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "EIsdkGrabbableColliderMode::Box" },
		{ "Comment", "/**\n * EIsdkGrabbableColliderMode is used to drive selection of GrabbableComponent's ColliderMode, which\n * determines the collider a grabbable uses to detect grabs.\n *\n * FindStaticMesh - Finds the first static mesh on the actor, and uses its collision as the grab collider.\n * FindByName - Finds a primitive object on the actor by the given name, and uses it as the grab collider.\n * Sphere - Uses a sphere with configurable radius as the grab collider.\n * Box - Uses a box with configurable radius as the grab collider.\n * CustomMesh - Uses a specified static mesh's collision as the grab collider\n * the SetCollider() method.\n */" },
		{ "CustomMesh.Name", "EIsdkGrabbableColliderMode::CustomMesh" },
		{ "FindByName.Name", "EIsdkGrabbableColliderMode::FindByName" },
		{ "FindStaticMesh.Name", "EIsdkGrabbableColliderMode::FindStaticMesh" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "Sphere.Name", "EIsdkGrabbableColliderMode::Sphere" },
		{ "ToolTip", "EIsdkGrabbableColliderMode is used to drive selection of GrabbableComponent's ColliderMode, which\ndetermines the collider a grabbable uses to detect grabs.\n\nFindStaticMesh - Finds the first static mesh on the actor, and uses its collision as the grab collider.\nFindByName - Finds a primitive object on the actor by the given name, and uses it as the grab collider.\nSphere - Uses a sphere with configurable radius as the grab collider.\nBox - Uses a box with configurable radius as the grab collider.\nCustomMesh - Uses a specified static mesh's collision as the grab collider\nthe SetCollider() method." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkGrabbableColliderMode::FindByName", (int64)EIsdkGrabbableColliderMode::FindByName },
		{ "EIsdkGrabbableColliderMode::FindStaticMesh", (int64)EIsdkGrabbableColliderMode::FindStaticMesh },
		{ "EIsdkGrabbableColliderMode::Sphere", (int64)EIsdkGrabbableColliderMode::Sphere },
		{ "EIsdkGrabbableColliderMode::Box", (int64)EIsdkGrabbableColliderMode::Box },
		{ "EIsdkGrabbableColliderMode::CustomMesh", (int64)EIsdkGrabbableColliderMode::CustomMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkGrabbableColliderMode",
	"EIsdkGrabbableColliderMode",
	Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode()
{
	if (!Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode.InnerSingleton;
}
// ********** End Enum EIsdkGrabbableColliderMode **************************************************

// ********** Begin Class UIsdkGrabbableComponent Function GetGrabCollider *************************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics
{
	struct IsdkGrabbableComponent_eventGetGrabCollider_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the collider responsible for detecting grabs\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ReturnDisplayName", "GrabCollider" },
		{ "ToolTip", "Get the collider responsible for detecting grabs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventGetGrabCollider_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "GetGrabCollider", Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::IsdkGrabbableComponent_eventGetGrabCollider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::IsdkGrabbableComponent_eventGetGrabCollider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execGetGrabCollider)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetGrabCollider();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function GetGrabCollider ***************************

// ********** Begin Class UIsdkGrabbableComponent Function GetGrabTransformer **********************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics
{
	struct IsdkGrabbableComponent_eventGetGrabTransformer_Parms
	{
		UIsdkGrabTransformerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @return The GrabTransformer component this grabbable is associated with\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "@return The GrabTransformer component this grabbable is associated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventGetGrabTransformer_Parms, ReturnValue), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "GetGrabTransformer", Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::IsdkGrabbableComponent_eventGetGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::IsdkGrabbableComponent_eventGetGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execGetGrabTransformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkGrabTransformerComponent**)Z_Param__Result=P_THIS->GetGrabTransformer();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function GetGrabTransformer ************************

// ********** Begin Class UIsdkGrabbableComponent Function HandlePointerEvent **********************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics
{
	struct IsdkGrabbableComponent_eventHandlePointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventHandlePointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "HandlePointerEvent", Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::IsdkGrabbableComponent_eventHandlePointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::IsdkGrabbableComponent_eventHandlePointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execHandlePointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function HandlePointerEvent ************************

// ********** Begin Class UIsdkGrabbableComponent Function IsGrabbedBy *****************************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics
{
	struct IsdkGrabbableComponent_eventIsGrabbedBy_Parms
	{
		const UIsdkGrabberComponent* Grabber;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK|Interactable" },
		{ "Comment", "/**\n   * Returns true if the collider is grabbed by the given grabber.  Returns false if\n   * the grabber is null, or not grabbing the collider.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Returns true if the collider is grabbed by the given grabber.  Returns false if\nthe grabber is null, or not grabbing the collider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grabber_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabber;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::NewProp_Grabber = { "Grabber", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventIsGrabbedBy_Parms, Grabber), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grabber_MetaData), NewProp_Grabber_MetaData) };
void Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkGrabbableComponent_eventIsGrabbedBy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabbableComponent_eventIsGrabbedBy_Parms), &Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::NewProp_Grabber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "IsGrabbedBy", Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::IsdkGrabbableComponent_eventIsGrabbedBy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::IsdkGrabbableComponent_eventIsGrabbedBy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execIsGrabbedBy)
{
	P_GET_OBJECT(UIsdkGrabberComponent,Z_Param_Grabber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGrabbedBy(Z_Param_Grabber);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function IsGrabbedBy *******************************

// ********** Begin Class UIsdkGrabbableComponent Function IsGrabInputMethodAllowed ****************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics
{
	struct IsdkGrabbableComponent_eventIsGrabInputMethodAllowed_Parms
	{
		EIsdkGrabInputMethod InputMethod;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Returns true if this grabbable respects the given input method.\n   * @param InputMethod the type to change detection of\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Returns true if this grabbable respects the given input method.\n@param InputMethod the type to change detection of" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMethod;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod = { "InputMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventIsGrabInputMethodAllowed_Parms, InputMethod), Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, METADATA_PARAMS(0, nullptr) }; // 1072373591
void Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkGrabbableComponent_eventIsGrabInputMethodAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabbableComponent_eventIsGrabInputMethodAllowed_Parms), &Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "IsGrabInputMethodAllowed", Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::IsdkGrabbableComponent_eventIsGrabInputMethodAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::IsdkGrabbableComponent_eventIsGrabInputMethodAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execIsGrabInputMethodAllowed)
{
	P_GET_ENUM(EIsdkGrabInputMethod,Z_Param_InputMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGrabInputMethodAllowed(EIsdkGrabInputMethod(Z_Param_InputMethod));
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function IsGrabInputMethodAllowed ******************

// ********** Begin Class UIsdkGrabbableComponent Function IsHoveredBy *****************************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics
{
	struct IsdkGrabbableComponent_eventIsHoveredBy_Parms
	{
		UIsdkGrabberComponent* Grabber;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK|Interactable" },
		{ "Comment", "/**\n   * Returns true if the collider is hovered by the given grabber.  Returns false if\n   * the grabber is null, or not hovering the collider.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Returns true if the collider is hovered by the given grabber.  Returns false if\nthe grabber is null, or not hovering the collider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grabber_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabber;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::NewProp_Grabber = { "Grabber", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventIsHoveredBy_Parms, Grabber), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grabber_MetaData), NewProp_Grabber_MetaData) };
void Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkGrabbableComponent_eventIsHoveredBy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabbableComponent_eventIsHoveredBy_Parms), &Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::NewProp_Grabber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "IsHoveredBy", Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::IsdkGrabbableComponent_eventIsHoveredBy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::IsdkGrabbableComponent_eventIsHoveredBy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execIsHoveredBy)
{
	P_GET_OBJECT(UIsdkGrabberComponent,Z_Param_Grabber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHoveredBy(Z_Param_Grabber);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function IsHoveredBy *******************************

// ********** Begin Class UIsdkGrabbableComponent Function SetColliderMode *************************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics
{
	struct IsdkGrabbableComponent_eventSetColliderMode_Parms
	{
		EIsdkGrabbableColliderMode NewColliderMode;
		float NewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sets the collider mode for this grabbable to utilize.\n   @param NewColliderMode new collider mode to set. If using CustomMesh, SetCollider() will need to be called after\n   @param NewSize When using sphere or box collider modes, this input will set the radius and extent respectively\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Sets the collider mode for this grabbable to utilize.\n   @param NewColliderMode new collider mode to set. If using CustomMesh, SetCollider() will need to be called after\n   @param NewSize When using sphere or box collider modes, this input will set the radius and extent respectively" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewColliderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewColliderMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::NewProp_NewColliderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::NewProp_NewColliderMode = { "NewColliderMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventSetColliderMode_Parms, NewColliderMode), Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode, METADATA_PARAMS(0, nullptr) }; // 3429876992
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventSetColliderMode_Parms, NewSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::NewProp_NewColliderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::NewProp_NewColliderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "SetColliderMode", Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::IsdkGrabbableComponent_eventSetColliderMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::IsdkGrabbableComponent_eventSetColliderMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execSetColliderMode)
{
	P_GET_ENUM(EIsdkGrabbableColliderMode,Z_Param_NewColliderMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColliderMode(EIsdkGrabbableColliderMode(Z_Param_NewColliderMode),Z_Param_NewSize);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function SetColliderMode ***************************

// ********** Begin Class UIsdkGrabbableComponent Function SetGrabCollider *************************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics
{
	struct IsdkGrabbableComponent_eventSetGrabCollider_Parms
	{
		UPrimitiveComponent* InGrabCollider;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Set the collider responsible for detecting grabs\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Set the collider responsible for detecting grabs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrabCollider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGrabCollider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::NewProp_InGrabCollider = { "InGrabCollider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventSetGrabCollider_Parms, InGrabCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrabCollider_MetaData), NewProp_InGrabCollider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::NewProp_InGrabCollider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "SetGrabCollider", Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::IsdkGrabbableComponent_eventSetGrabCollider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::IsdkGrabbableComponent_eventSetGrabCollider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execSetGrabCollider)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InGrabCollider);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrabCollider(Z_Param_InGrabCollider);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function SetGrabCollider ***************************

// ********** Begin Class UIsdkGrabbableComponent Function SetGrabInputMethodAllowed ***************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics
{
	struct IsdkGrabbableComponent_eventSetGrabInputMethodAllowed_Parms
	{
		EIsdkGrabInputMethod InputMethod;
		bool Allowed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sets whether the given input method should be respected\n   * @param InputMethod the type to change detection of\n   * @param Allowed whether the input method should be respected or not\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Sets whether the given input method should be respected\n@param InputMethod the type to change detection of\n@param Allowed whether the input method should be respected or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMethod;
	static void NewProp_Allowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Allowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod = { "InputMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventSetGrabInputMethodAllowed_Parms, InputMethod), Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, METADATA_PARAMS(0, nullptr) }; // 1072373591
void Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed_SetBit(void* Obj)
{
	((IsdkGrabbableComponent_eventSetGrabInputMethodAllowed_Parms*)Obj)->Allowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed = { "Allowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabbableComponent_eventSetGrabInputMethodAllowed_Parms), &Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "SetGrabInputMethodAllowed", Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::IsdkGrabbableComponent_eventSetGrabInputMethodAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::IsdkGrabbableComponent_eventSetGrabInputMethodAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execSetGrabInputMethodAllowed)
{
	P_GET_ENUM(EIsdkGrabInputMethod,Z_Param_InputMethod);
	P_GET_UBOOL(Z_Param_Allowed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrabInputMethodAllowed(EIsdkGrabInputMethod(Z_Param_InputMethod),Z_Param_Allowed);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function SetGrabInputMethodAllowed *****************

// ********** Begin Class UIsdkGrabbableComponent Function SetGrabTransformer **********************
struct Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics
{
	struct IsdkGrabbableComponent_eventSetGrabTransformer_Parms
	{
		UIsdkGrabTransformerComponent* InGrabTransformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sets the GrabTransformer component this grabbable is associated with.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Sets the GrabTransformer component this grabbable is associated with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrabTransformer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGrabTransformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::NewProp_InGrabTransformer = { "InGrabTransformer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableComponent_eventSetGrabTransformer_Parms, InGrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrabTransformer_MetaData), NewProp_InGrabTransformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::NewProp_InGrabTransformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableComponent, nullptr, "SetGrabTransformer", Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::IsdkGrabbableComponent_eventSetGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::IsdkGrabbableComponent_eventSetGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableComponent::execSetGrabTransformer)
{
	P_GET_OBJECT(UIsdkGrabTransformerComponent,Z_Param_InGrabTransformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrabTransformer(Z_Param_InGrabTransformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableComponent Function SetGrabTransformer ************************

// ********** Begin Class UIsdkGrabbableComponent **************************************************
void UIsdkGrabbableComponent::StaticRegisterNativesUIsdkGrabbableComponent()
{
	UClass* Class = UIsdkGrabbableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGrabCollider", &UIsdkGrabbableComponent::execGetGrabCollider },
		{ "GetGrabTransformer", &UIsdkGrabbableComponent::execGetGrabTransformer },
		{ "HandlePointerEvent", &UIsdkGrabbableComponent::execHandlePointerEvent },
		{ "IsGrabbedBy", &UIsdkGrabbableComponent::execIsGrabbedBy },
		{ "IsGrabInputMethodAllowed", &UIsdkGrabbableComponent::execIsGrabInputMethodAllowed },
		{ "IsHoveredBy", &UIsdkGrabbableComponent::execIsHoveredBy },
		{ "SetColliderMode", &UIsdkGrabbableComponent::execSetColliderMode },
		{ "SetGrabCollider", &UIsdkGrabbableComponent::execSetGrabCollider },
		{ "SetGrabInputMethodAllowed", &UIsdkGrabbableComponent::execSetGrabInputMethodAllowed },
		{ "SetGrabTransformer", &UIsdkGrabbableComponent::execSetGrabTransformer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabbableComponent;
UClass* UIsdkGrabbableComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabbableComponent;
	if (!Z_Registration_Info_UClass_UIsdkGrabbableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabbableComponent"),
			Z_Registration_Info_UClass_UIsdkGrabbableComponent.InnerSingleton,
			StaticRegisterNativesUIsdkGrabbableComponent,
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
	return Z_Registration_Info_UClass_UIsdkGrabbableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister()
{
	return UIsdkGrabbableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabbableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkGrabbableComponent\n*  Detects grab events and forwards them to a UIsdkGrabbable for processing.\n*  UIsdkGrabbableComponent can be configured to only respect certain input methods (pinch, palm).\n *\n * @see UIsdkSceneInteractableComponent\n * @see UIsdkGrabTransformer\n * @see IIsdkIPointable\n */" },
		{ "DisplayName", "ISDK Grabbable Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkGrabbableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "@class UIsdkGrabbableComponent\n Detects grab events and forwards them to a UIsdkGrabbable for processing.\n UIsdkGrabbableComponent can be configured to only respect certain input methods (pinch, palm).\n\n@see UIsdkSceneInteractableComponent\n@see UIsdkGrabTransformer\n@see IIsdkIPointable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedGrabDetectorTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/OculusInteraction.EIsdkGrabDetectorType" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * AllowedGrabDetectorTypes drives which grab detectors can detect this grabbable\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "AllowedGrabDetectorTypes drives which grab detectors can detect this grabbable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderMode_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * ColliderMode determines the collider this grabbable uses to detect grabs.\n   *\n   * FindStaticMesh - Finds the first static mesh on the actor, and uses its collision as the grab collider.\n   * FindByName - Finds a primitive object on the actor by the given name, and uses it as the grab collider.\n   * Sphere - Uses a sphere with configurable radius as the grab collider.\n   * Box - Uses a box with configurable radius as the grab collider.\n   * CustomMesh - Uses a specified static mesh's collision as the grab collider\n   * the SetCollider() method.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "ColliderMode determines the collider this grabbable uses to detect grabs.\n\nFindStaticMesh - Finds the first static mesh on the actor, and uses its collision as the grab collider.\nFindByName - Finds a primitive object on the actor by the given name, and uses it as the grab collider.\nSphere - Uses a sphere with configurable radius as the grab collider.\nBox - Uses a box with configurable radius as the grab collider.\nCustomMesh - Uses a specified static mesh's collision as the grab collider\nthe SetCollider() method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Determines the radius of the collider.  Only valid if ColliderMode is set to Sphere.\n   */" },
		{ "EditCondition", "ColliderMode==EIsdkGrabbableColliderMode::Sphere" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Determines the radius of the collider.  Only valid if ColliderMode is set to Sphere." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderBoxExtent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Determines the extent of the collider.  Only valid if ColliderMode is set to Box.\n   */" },
		{ "EditCondition", "ColliderMode==EIsdkGrabbableColliderMode::Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Determines the extent of the collider.  Only valid if ColliderMode is set to Box." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCollisionMesh_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Uses the default collision of the provided static mesh as the collider.  Only valid if\n   * ColliderMode is set to CustomMesh.\n   */" },
		{ "EditCondition", "ColliderMode==EIsdkGrabbableColliderMode::CustomMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Uses the default collision of the provided static mesh as the collider.  Only valid if\nColliderMode is set to CustomMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliderName_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Uses the default collision of the provided static mesh as the collider.  Only valid if\n   * ColliderMode is set to CustomMesh.\n   */" },
		{ "EditCondition", "ColliderMode==EIsdkGrabbableColliderMode::FindByName" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Uses the default collision of the provided static mesh as the collider.  Only valid if\nColliderMode is set to CustomMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInputMethods_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * What input methods this component detects.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "What input methods this component detects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformerComponent_MetaData[] = {
		{ "BlueprintGetter", "GetGrabTransformer" },
		{ "BlueprintSetter", "SetGrabTransformer" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabCollider_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The collider we'll use to detect grabs.  If not set, we'll find the first\n   * UPrimitiveComponent found in the scene component hierarchy.\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "The collider we'll use to detect grabs.  If not set, we'll find the first\nUPrimitiveComponent found in the scene component hierarchy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPointerEvent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Delegate broadcast when pointer events are triggered\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
		{ "ToolTip", "Delegate broadcast when pointer events are triggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCollisionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabbableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllowedGrabDetectorTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColliderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColliderMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColliderRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColliderBoxExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCollisionMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColliderName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedInputMethods_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedInputMethods_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedInputMethods;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTransformerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabCollider;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractionPointerEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCollisionMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabCollider, "GetGrabCollider" }, // 4125322162
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_GetGrabTransformer, "GetGrabTransformer" }, // 2760982564
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_HandlePointerEvent, "HandlePointerEvent" }, // 2248964171
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabbedBy, "IsGrabbedBy" }, // 3318397283
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_IsGrabInputMethodAllowed, "IsGrabInputMethodAllowed" }, // 3258527631
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_IsHoveredBy, "IsHoveredBy" }, // 2669650627
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_SetColliderMode, "SetColliderMode" }, // 862211377
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabCollider, "SetGrabCollider" }, // 1416839560
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabInputMethodAllowed, "SetGrabInputMethodAllowed" }, // 1751009243
		{ &Z_Construct_UFunction_UIsdkGrabbableComponent_SetGrabTransformer, "SetGrabTransformer" }, // 3293049444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabbableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedGrabDetectorTypes = { "AllowedGrabDetectorTypes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, AllowedGrabDetectorTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedGrabDetectorTypes_MetaData), NewProp_AllowedGrabDetectorTypes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderMode = { "ColliderMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, ColliderMode), Z_Construct_UEnum_OculusInteraction_EIsdkGrabbableColliderMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderMode_MetaData), NewProp_ColliderMode_MetaData) }; // 3429876992
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderRadius = { "ColliderRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, ColliderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderRadius_MetaData), NewProp_ColliderRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderBoxExtent = { "ColliderBoxExtent", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, ColliderBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderBoxExtent_MetaData), NewProp_ColliderBoxExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_CustomCollisionMesh = { "CustomCollisionMesh", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, CustomCollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCollisionMesh_MetaData), NewProp_CustomCollisionMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderName = { "ColliderName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, ColliderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliderName_MetaData), NewProp_ColliderName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedInputMethods_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedInputMethods_ElementProp = { "AllowedInputMethods", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, METADATA_PARAMS(0, nullptr) }; // 1072373591
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedInputMethods = { "AllowedInputMethods", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, AllowedInputMethods), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedInputMethods_MetaData), NewProp_AllowedInputMethods_MetaData) }; // 1072373591
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_GrabTransformerComponent = { "GrabTransformerComponent", nullptr, (EPropertyFlags)0x012508000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, GrabTransformerComponent), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformerComponent_MetaData), NewProp_GrabTransformerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_GrabCollider = { "GrabCollider", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, GrabCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabCollider_MetaData), NewProp_GrabCollider_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_InteractionPointerEvent = { "InteractionPointerEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, InteractionPointerEvent), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionPointerEvent_MetaData), NewProp_InteractionPointerEvent_MetaData) }; // 3986831945
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_CustomCollisionMaterial = { "CustomCollisionMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableComponent, CustomCollisionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCollisionMaterial_MetaData), NewProp_CustomCollisionMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabbableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedGrabDetectorTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderBoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_CustomCollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_ColliderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedInputMethods_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedInputMethods_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_AllowedInputMethods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_GrabTransformerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_GrabCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_InteractionPointerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableComponent_Statics::NewProp_CustomCollisionMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabbableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkSceneInteractableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPointable_NoRegister, (int32)VTABLE_OFFSET(UIsdkGrabbableComponent, IIsdkIPointable), false },  // 4279697062
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabbableComponent_Statics::ClassParams = {
	&UIsdkGrabbableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabbableComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabbableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabbableComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabbableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabbableComponent.OuterSingleton, Z_Construct_UClass_UIsdkGrabbableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabbableComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabbableComponent);
UIsdkGrabbableComponent::~UIsdkGrabbableComponent() {}
// ********** End Class UIsdkGrabbableComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkGrabbableColliderMode_StaticEnum, TEXT("EIsdkGrabbableColliderMode"), &Z_Registration_Info_UEnum_EIsdkGrabbableColliderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3429876992U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabbableComponent, UIsdkGrabbableComponent::StaticClass, TEXT("UIsdkGrabbableComponent"), &Z_Registration_Info_UClass_UIsdkGrabbableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabbableComponent), 3402095792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h__Script_OculusInteraction_4236101253(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
