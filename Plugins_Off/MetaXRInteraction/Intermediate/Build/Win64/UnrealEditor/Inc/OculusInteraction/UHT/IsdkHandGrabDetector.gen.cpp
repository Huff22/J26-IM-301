// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/GrabDetectors/IsdkHandGrabDetector.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandGrabDetector() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabDetector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabDetector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandGrabDetector Function AttachAndReplacePalmCollider **************
struct Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics
{
	struct IsdkHandGrabDetector_eventAttachAndReplacePalmCollider_Parms
	{
		UPrimitiveComponent* Collider;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Attaches the given collider and replaces the existing palm collider with it.  Collider must\n   * be a valid object.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "Attaches the given collider and replaces the existing palm collider with it.  Collider must\nbe a valid object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventAttachAndReplacePalmCollider_Parms, Collider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collider_MetaData), NewProp_Collider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::NewProp_Collider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabDetector, nullptr, "AttachAndReplacePalmCollider", Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::IsdkHandGrabDetector_eventAttachAndReplacePalmCollider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::IsdkHandGrabDetector_eventAttachAndReplacePalmCollider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabDetector::execAttachAndReplacePalmCollider)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Collider);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachAndReplacePalmCollider(Z_Param_Collider);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabDetector Function AttachAndReplacePalmCollider ****************

// ********** Begin Class UIsdkHandGrabDetector Function AttachAndReplacePinchCollider *************
struct Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics
{
	struct IsdkHandGrabDetector_eventAttachAndReplacePinchCollider_Parms
	{
		UPrimitiveComponent* Collider;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Attaches the given collider and replaces the existing pinch collider with it.  Collider must\n   * be a valid object.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "Attaches the given collider and replaces the existing pinch collider with it.  Collider must\nbe a valid object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventAttachAndReplacePinchCollider_Parms, Collider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collider_MetaData), NewProp_Collider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::NewProp_Collider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabDetector, nullptr, "AttachAndReplacePinchCollider", Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::IsdkHandGrabDetector_eventAttachAndReplacePinchCollider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::IsdkHandGrabDetector_eventAttachAndReplacePinchCollider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabDetector::execAttachAndReplacePinchCollider)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Collider);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachAndReplacePinchCollider(Z_Param_Collider);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabDetector Function AttachAndReplacePinchCollider ***************

// ********** Begin Class UIsdkHandGrabDetector Function GetGrabbingComponent **********************
struct Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics
{
	struct IsdkHandGrabDetector_eventGetGrabbingComponent_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @return the collider that is being used to select the currently selected grabbable.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ReturnDisplayName", "GrabbingComponent" },
		{ "ToolTip", "@return the collider that is being used to select the currently selected grabbable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventGetGrabbingComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabDetector, nullptr, "GetGrabbingComponent", Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::IsdkHandGrabDetector_eventGetGrabbingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::IsdkHandGrabDetector_eventGetGrabbingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabDetector::execGetGrabbingComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetGrabbingComponent();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabDetector Function GetGrabbingComponent ************************

// ********** Begin Class UIsdkHandGrabDetector Function HandleBeginOverlap ************************
struct Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics
{
	struct IsdkHandGrabDetector_eventHandleBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((IsdkHandGrabDetector_eventHandleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandGrabDetector_eventHandleBeginOverlap_Parms), &Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabDetector, nullptr, "HandleBeginOverlap", Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::IsdkHandGrabDetector_eventHandleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::IsdkHandGrabDetector_eventHandleBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabDetector::execHandleBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabDetector Function HandleBeginOverlap **************************

// ********** Begin Class UIsdkHandGrabDetector Function HandleEndOverlap **************************
struct Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics
{
	struct IsdkHandGrabDetector_eventHandleEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabDetector_eventHandleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabDetector, nullptr, "HandleEndOverlap", Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::IsdkHandGrabDetector_eventHandleEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::IsdkHandGrabDetector_eventHandleEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabDetector::execHandleEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabDetector Function HandleEndOverlap ****************************

// ********** Begin Class UIsdkHandGrabDetector ****************************************************
void UIsdkHandGrabDetector::StaticRegisterNativesUIsdkHandGrabDetector()
{
	UClass* Class = UIsdkHandGrabDetector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachAndReplacePalmCollider", &UIsdkHandGrabDetector::execAttachAndReplacePalmCollider },
		{ "AttachAndReplacePinchCollider", &UIsdkHandGrabDetector::execAttachAndReplacePinchCollider },
		{ "GetGrabbingComponent", &UIsdkHandGrabDetector::execGetGrabbingComponent },
		{ "HandleBeginOverlap", &UIsdkHandGrabDetector::execHandleBeginOverlap },
		{ "HandleEndOverlap", &UIsdkHandGrabDetector::execHandleEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandGrabDetector;
UClass* UIsdkHandGrabDetector::GetPrivateStaticClass()
{
	using TClass = UIsdkHandGrabDetector;
	if (!Z_Registration_Info_UClass_UIsdkHandGrabDetector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandGrabDetector"),
			Z_Registration_Info_UClass_UIsdkHandGrabDetector.InnerSingleton,
			StaticRegisterNativesUIsdkHandGrabDetector,
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
	return Z_Registration_Info_UClass_UIsdkHandGrabDetector.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister()
{
	return UIsdkHandGrabDetector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandGrabDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief UIsdkHandGrabDetector is used by a grab interactor to detect grabbables at\n * close to the hand.  This grab detector features two sets of colliders used for\n * the separate detection of pinches and palm grabs.\n *\n * @see UIsdkGrabDetector\n * @see UIsdkGrabberComponent\n * @see UIsdkGrabbableComponent\n */" },
		{ "IncludePath", "Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "@brief UIsdkHandGrabDetector is used by a grab interactor to detect grabbables at\nclose to the hand.  This grab detector features two sets of colliders used for\nthe separate detection of pinches and palm grabs.\n\n@see UIsdkGrabDetector\n@see UIsdkGrabberComponent\n@see UIsdkGrabbableComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectingCollider_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The collider which is currently selecting the selected interactable\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "The collider which is currently selecting the selected interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchColliderRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Radius of the to set when initializing for the pinch grab overlap collider */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "Radius of the to set when initializing for the pinch grab overlap collider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmColliderRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Radius of the to set when initializing for the palm grab overlap collider */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "Radius of the to set when initializing for the palm grab overlap collider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectType_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The collision object type of the default colliders used to detect grabbables\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "The collision object type of the default colliders used to detect grabbables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredGrabbables_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// HoveredGrabbables is the set of all grabbables hovered by ray, distance, and hand grab.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "HoveredGrabbables is the set of all grabbables hovered by ray, distance, and hand grab." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchGrabCandidate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// PinchGrabCandidate is the grabbable that will be grabbed if the user pinches\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "PinchGrabCandidate is the grabbable that will be grabbed if the user pinches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabCandidate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// PalmGrabCandidate is the grabbable that will be grabbed if the user palm grabs\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "PalmGrabCandidate is the grabbable that will be grabbed if the user palm grabs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchCollider_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// We use PinchColliders to track which colliders are being used for pinch grab.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "We use PinchColliders to track which colliders are being used for pinch grab." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabCollider_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// We use PalmGrabColliders to track which colliders are being used for palm grab.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "We use PalmGrabColliders to track which colliders are being used for palm grab." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugVisuals_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Allows disabling debug visuals\n" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkHandGrabDetector.h" },
		{ "ToolTip", "Allows disabling debug visuals" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectingCollider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchColliderRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PalmColliderRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionObjectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredGrabbables_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HoveredGrabbables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchGrabCandidate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PalmGrabCandidate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PalmGrabCollider;
	static void NewProp_bDisableDebugVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugVisuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePalmCollider, "AttachAndReplacePalmCollider" }, // 4060043986
		{ &Z_Construct_UFunction_UIsdkHandGrabDetector_AttachAndReplacePinchCollider, "AttachAndReplacePinchCollider" }, // 1088036904
		{ &Z_Construct_UFunction_UIsdkHandGrabDetector_GetGrabbingComponent, "GetGrabbingComponent" }, // 4162593843
		{ &Z_Construct_UFunction_UIsdkHandGrabDetector_HandleBeginOverlap, "HandleBeginOverlap" }, // 2111388764
		{ &Z_Construct_UFunction_UIsdkHandGrabDetector_HandleEndOverlap, "HandleEndOverlap" }, // 564005189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandGrabDetector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_SelectingCollider = { "SelectingCollider", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, SelectingCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectingCollider_MetaData), NewProp_SelectingCollider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PinchColliderRadius = { "PinchColliderRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, PinchColliderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchColliderRadius_MetaData), NewProp_PinchColliderRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PalmColliderRadius = { "PalmColliderRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, PalmColliderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmColliderRadius_MetaData), NewProp_PalmColliderRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_CollisionObjectType = { "CollisionObjectType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, CollisionObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectType_MetaData), NewProp_CollisionObjectType_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_HoveredGrabbables_ElementProp = { "HoveredGrabbables", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_HoveredGrabbables = { "HoveredGrabbables", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, HoveredGrabbables), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredGrabbables_MetaData), NewProp_HoveredGrabbables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PinchGrabCandidate = { "PinchGrabCandidate", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, PinchGrabCandidate), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchGrabCandidate_MetaData), NewProp_PinchGrabCandidate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PalmGrabCandidate = { "PalmGrabCandidate", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, PalmGrabCandidate), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabCandidate_MetaData), NewProp_PalmGrabCandidate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PinchCollider = { "PinchCollider", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, PinchCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchCollider_MetaData), NewProp_PinchCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PalmGrabCollider = { "PalmGrabCollider", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabDetector, PalmGrabCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabCollider_MetaData), NewProp_PalmGrabCollider_MetaData) };
void Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_bDisableDebugVisuals_SetBit(void* Obj)
{
	((UIsdkHandGrabDetector*)Obj)->bDisableDebugVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_bDisableDebugVisuals = { "bDisableDebugVisuals", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandGrabDetector), &Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_bDisableDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugVisuals_MetaData), NewProp_bDisableDebugVisuals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_SelectingCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PinchColliderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PalmColliderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_CollisionObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_HoveredGrabbables_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_HoveredGrabbables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PinchGrabCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PalmGrabCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PinchCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_PalmGrabCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabDetector_Statics::NewProp_bDisableDebugVisuals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabDetector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandGrabDetector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkGrabDetector,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabDetector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandGrabDetector_Statics::ClassParams = {
	&UIsdkHandGrabDetector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandGrabDetector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabDetector_Statics::PropPointers),
	0,
	0x00B030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabDetector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandGrabDetector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandGrabDetector()
{
	if (!Z_Registration_Info_UClass_UIsdkHandGrabDetector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandGrabDetector.OuterSingleton, Z_Construct_UClass_UIsdkHandGrabDetector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandGrabDetector.OuterSingleton;
}
UIsdkHandGrabDetector::UIsdkHandGrabDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandGrabDetector);
UIsdkHandGrabDetector::~UIsdkHandGrabDetector() {}
// ********** End Class UIsdkHandGrabDetector ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandGrabDetector, UIsdkHandGrabDetector::StaticClass, TEXT("UIsdkHandGrabDetector"), &Z_Registration_Info_UClass_UIsdkHandGrabDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandGrabDetector), 4009437098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h__Script_OculusInteraction_4046303815(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
