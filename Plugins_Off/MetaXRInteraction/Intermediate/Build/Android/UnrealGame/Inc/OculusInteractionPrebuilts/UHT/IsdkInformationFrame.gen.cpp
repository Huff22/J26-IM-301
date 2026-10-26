// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoundedBoxVisuals/IsdkInformationFrame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInformationFrame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkInformationFrame();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkInformationFrame_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkInformationFrameLabelProps ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps;
class UScriptStruct* FIsdkInformationFrameLabelProps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkInformationFrameLabelProps"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInformationFrameLabelProps>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInformationFrameLabelProps, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInformationFrameLabelProps, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInformationFrameLabelProps, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInformationFrameLabelProps, Alignment), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 3415569103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewProp_Alignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkInformationFrameLabelProps",
	Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::PropPointers),
	sizeof(FIsdkInformationFrameLabelProps),
	alignof(FIsdkInformationFrameLabelProps),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInformationFrameLabelProps *************************************

// ********** Begin Class AIsdkInformationFrame ****************************************************
void AIsdkInformationFrame::StaticRegisterNativesAIsdkInformationFrame()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkInformationFrame;
UClass* AIsdkInformationFrame::GetPrivateStaticClass()
{
	using TClass = AIsdkInformationFrame;
	if (!Z_Registration_Info_UClass_AIsdkInformationFrame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInformationFrame"),
			Z_Registration_Info_UClass_AIsdkInformationFrame.InnerSingleton,
			StaticRegisterNativesAIsdkInformationFrame,
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
	return Z_Registration_Info_UClass_AIsdkInformationFrame.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkInformationFrame_NoRegister()
{
	return AIsdkInformationFrame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkInformationFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Information Frame" },
		{ "IncludePath", "RoundedBoxVisuals/IsdkInformationFrame.h" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InformationFrameRoot_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
		{ "Multiline", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
		{ "Multiline", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorOutline_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoCard_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardOffset_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutline_MetaData[] = {
		{ "Category", "InteractionSDK|Outline" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
		{ "Category", "InteractionSDK|Outline" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineCornerRadius_MetaData[] = {
		{ "Category", "InteractionSDK|Outline" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineWidth_MetaData[] = {
		{ "Category", "InteractionSDK|Outline" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineSize_MetaData[] = {
		{ "Category", "InteractionSDK|Outline" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkInformationFrame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InformationFrameRoot;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BodyText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorOutline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoCard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardOffset;
	static void NewProp_bShowOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineCornerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkInformationFrame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_InformationFrameRoot = { "InformationFrameRoot", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, InformationFrameRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InformationFrameRoot_MetaData), NewProp_InformationFrameRoot_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, LabelText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, BodyText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyText_MetaData), NewProp_BodyText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_FloorOutline = { "FloorOutline", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, FloorOutline), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorOutline_MetaData), NewProp_FloorOutline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_InfoCard = { "InfoCard", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, InfoCard), Z_Construct_UClass_UIsdkInfoCardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoCard_MetaData), NewProp_InfoCard_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_CardOffset = { "CardOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, CardOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardOffset_MetaData), NewProp_CardOffset_MetaData) };
void Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_bShowOutline_SetBit(void* Obj)
{
	((AIsdkInformationFrame*)Obj)->bShowOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_bShowOutline = { "bShowOutline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIsdkInformationFrame), &Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_bShowOutline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOutline_MetaData), NewProp_bShowOutline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColor_MetaData), NewProp_OutlineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineCornerRadius = { "OutlineCornerRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, OutlineCornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineCornerRadius_MetaData), NewProp_OutlineCornerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineWidth = { "OutlineWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, OutlineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineWidth_MetaData), NewProp_OutlineWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineSize = { "OutlineSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInformationFrame, OutlineSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineSize_MetaData), NewProp_OutlineSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkInformationFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_InformationFrameRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_LabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_BodyText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_FloorOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_InfoCard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_CardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_bShowOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineCornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInformationFrame_Statics::NewProp_OutlineSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInformationFrame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkInformationFrame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInformationFrame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkInformationFrame_Statics::ClassParams = {
	&AIsdkInformationFrame::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkInformationFrame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInformationFrame_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInformationFrame_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkInformationFrame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkInformationFrame()
{
	if (!Z_Registration_Info_UClass_AIsdkInformationFrame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkInformationFrame.OuterSingleton, Z_Construct_UClass_AIsdkInformationFrame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkInformationFrame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkInformationFrame);
AIsdkInformationFrame::~AIsdkInformationFrame() {}
// ********** End Class AIsdkInformationFrame ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkInformationFrame_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkInformationFrameLabelProps::StaticStruct, Z_Construct_UScriptStruct_FIsdkInformationFrameLabelProps_Statics::NewStructOps, TEXT("IsdkInformationFrameLabelProps"), &Z_Registration_Info_UScriptStruct_FIsdkInformationFrameLabelProps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInformationFrameLabelProps), 3743403198U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkInformationFrame, AIsdkInformationFrame::StaticClass, TEXT("AIsdkInformationFrame"), &Z_Registration_Info_UClass_AIsdkInformationFrame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkInformationFrame), 394755340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkInformationFrame_h__Script_OculusInteractionPrebuilts_603852494(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkInformationFrame_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkInformationFrame_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkInformationFrame_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkInformationFrame_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
