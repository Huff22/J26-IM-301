// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/QuestControllerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestControllerAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UQuestControllerAnimInstance();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UQuestControllerAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestControllerAnimInstance *********************************************
void UQuestControllerAnimInstance::StaticRegisterNativesUQuestControllerAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestControllerAnimInstance;
UClass* UQuestControllerAnimInstance::GetPrivateStaticClass()
{
	using TClass = UQuestControllerAnimInstance;
	if (!Z_Registration_Info_UClass_UQuestControllerAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestControllerAnimInstance"),
			Z_Registration_Info_UClass_UQuestControllerAnimInstance.InnerSingleton,
			StaticRegisterNativesUQuestControllerAnimInstance,
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
	return Z_Registration_Info_UClass_UQuestControllerAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestControllerAnimInstance_NoRegister()
{
	return UQuestControllerAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestControllerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UQuestControllerAnimInstance provides a set of properties corresponding to quest controller\n * inputs (buttons, triggers, etc), used to drive controller-based animations.\n *\n * The intent is to provide a c++ facing class to drive controller and hand animation behavior\n * in a reusable way.  This allows us to wire up all the inputs to the anim instance, and let\n * the blueprint decide what it will do with them.\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/QuestControllerAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "UQuestControllerAnimInstance provides a set of properties corresponding to quest controller\ninputs (buttons, triggers, etc), used to drive controller-based animations.\n\nThe intent is to provide a c++ facing class to drive controller and hand animation behavior\nin a reusable way.  This allows us to wire up all the inputs to the anim instance, and let\nthe blueprint decide what it will do with them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAButtonDown_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the A Button currently in a Down state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the A Button currently in a Down state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBButtonDown_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the B Button currently in a Down state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the B Button currently in a Down state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bXButtonDown_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the X Button currently in a Down state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the X Button currently in a Down state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bYButtonDown_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Y Button currently in a Down state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Y Button currently in a Down state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAButtonTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the A Button currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the A Button currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBButtonTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the B Button currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the B Button currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bXButtonTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the X Button currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the X Button currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bYButtonTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Y Button currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Y Button currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftMenuButtonDown_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Left Menu Button currently in a Down state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Left Menu Button currently in a Down state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftFrontTriggerTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Left Front Trigger currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Left Front Trigger currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFrontTriggerAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A 0-1 value indicating how far down the Left Front Trigger is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A 0-1 value indicating how far down the Left Front Trigger is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRightFrontTriggerTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Right Front Trigger currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Right Front Trigger currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFrontTriggerAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A 0-1 value indicating how far down the Right Front Trigger is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A 0-1 value indicating how far down the Right Front Trigger is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftGripTriggerAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A 0-1 value indicating how far down the Left Grip Trigger is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A 0-1 value indicating how far down the Left Grip Trigger is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightGripTriggerAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A 0-1 value indicating how far down the Right Grip Trigger is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A 0-1 value indicating how far down the Right Grip Trigger is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftThumbstickTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Left Thumbstick currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Left Thumbstick currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbstickXAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A -1 to 1 value indicating how far to the left (-1) or right (1)\n// the Left Thumbstick is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A -1 to 1 value indicating how far to the left (-1) or right (1)\nthe Left Thumbstick is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbstickYAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A -1 to 1 value indicating how far up (-1) or down (1)\n// the Left Thumbstick is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A -1 to 1 value indicating how far up (-1) or down (1)\nthe Left Thumbstick is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRightThumbstickTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Left Thumbstick currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Left Thumbstick currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickXAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A -1 to 1 value indicating how far to the left (-1) or right (1)\n// the Right Thumbstick is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A -1 to 1 value indicating how far to the left (-1) or right (1)\nthe Right Thumbstick is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickYAxisValue_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// A -1 to 1 value indicating how far up (-1) or down (1)\n// the Right Thumbstick is pressed.\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "A -1 to 1 value indicating how far up (-1) or down (1)\nthe Right Thumbstick is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftPanelTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Left Panel currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Left Panel currently in a Touched state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRightPanelTouched_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the Right Panel currently in a Touched state\n" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerAnimInstance.h" },
		{ "ToolTip", "Is the Right Panel currently in a Touched state" },
	};
#endif // WITH_METADATA
	static void NewProp_bAButtonDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAButtonDown;
	static void NewProp_bBButtonDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBButtonDown;
	static void NewProp_bXButtonDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bXButtonDown;
	static void NewProp_bYButtonDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYButtonDown;
	static void NewProp_bAButtonTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAButtonTouched;
	static void NewProp_bBButtonTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBButtonTouched;
	static void NewProp_bXButtonTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bXButtonTouched;
	static void NewProp_bYButtonTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYButtonTouched;
	static void NewProp_bLeftMenuButtonDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftMenuButtonDown;
	static void NewProp_bLeftFrontTriggerTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftFrontTriggerTouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftFrontTriggerAxisValue;
	static void NewProp_bRightFrontTriggerTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightFrontTriggerTouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightFrontTriggerAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftGripTriggerAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightGripTriggerAxisValue;
	static void NewProp_bLeftThumbstickTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftThumbstickTouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftThumbstickXAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftThumbstickYAxisValue;
	static void NewProp_bRightThumbstickTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightThumbstickTouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightThumbstickXAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightThumbstickYAxisValue;
	static void NewProp_bLeftPanelTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftPanelTouched;
	static void NewProp_bRightPanelTouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightPanelTouched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestControllerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonDown_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bAButtonDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonDown = { "bAButtonDown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAButtonDown_MetaData), NewProp_bAButtonDown_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonDown_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bBButtonDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonDown = { "bBButtonDown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBButtonDown_MetaData), NewProp_bBButtonDown_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonDown_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bXButtonDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonDown = { "bXButtonDown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bXButtonDown_MetaData), NewProp_bXButtonDown_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonDown_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bYButtonDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonDown = { "bYButtonDown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bYButtonDown_MetaData), NewProp_bYButtonDown_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bAButtonTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonTouched = { "bAButtonTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAButtonTouched_MetaData), NewProp_bAButtonTouched_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bBButtonTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonTouched = { "bBButtonTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBButtonTouched_MetaData), NewProp_bBButtonTouched_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bXButtonTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonTouched = { "bXButtonTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bXButtonTouched_MetaData), NewProp_bXButtonTouched_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bYButtonTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonTouched = { "bYButtonTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bYButtonTouched_MetaData), NewProp_bYButtonTouched_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftMenuButtonDown_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bLeftMenuButtonDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftMenuButtonDown = { "bLeftMenuButtonDown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftMenuButtonDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftMenuButtonDown_MetaData), NewProp_bLeftMenuButtonDown_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftFrontTriggerTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bLeftFrontTriggerTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftFrontTriggerTouched = { "bLeftFrontTriggerTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftFrontTriggerTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftFrontTriggerTouched_MetaData), NewProp_bLeftFrontTriggerTouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftFrontTriggerAxisValue = { "LeftFrontTriggerAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, LeftFrontTriggerAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFrontTriggerAxisValue_MetaData), NewProp_LeftFrontTriggerAxisValue_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightFrontTriggerTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bRightFrontTriggerTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightFrontTriggerTouched = { "bRightFrontTriggerTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightFrontTriggerTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRightFrontTriggerTouched_MetaData), NewProp_bRightFrontTriggerTouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightFrontTriggerAxisValue = { "RightFrontTriggerAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, RightFrontTriggerAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFrontTriggerAxisValue_MetaData), NewProp_RightFrontTriggerAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftGripTriggerAxisValue = { "LeftGripTriggerAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, LeftGripTriggerAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftGripTriggerAxisValue_MetaData), NewProp_LeftGripTriggerAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightGripTriggerAxisValue = { "RightGripTriggerAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, RightGripTriggerAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightGripTriggerAxisValue_MetaData), NewProp_RightGripTriggerAxisValue_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftThumbstickTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bLeftThumbstickTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftThumbstickTouched = { "bLeftThumbstickTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftThumbstickTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftThumbstickTouched_MetaData), NewProp_bLeftThumbstickTouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftThumbstickXAxisValue = { "LeftThumbstickXAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, LeftThumbstickXAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbstickXAxisValue_MetaData), NewProp_LeftThumbstickXAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftThumbstickYAxisValue = { "LeftThumbstickYAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, LeftThumbstickYAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbstickYAxisValue_MetaData), NewProp_LeftThumbstickYAxisValue_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightThumbstickTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bRightThumbstickTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightThumbstickTouched = { "bRightThumbstickTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightThumbstickTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRightThumbstickTouched_MetaData), NewProp_bRightThumbstickTouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightThumbstickXAxisValue = { "RightThumbstickXAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, RightThumbstickXAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbstickXAxisValue_MetaData), NewProp_RightThumbstickXAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightThumbstickYAxisValue = { "RightThumbstickYAxisValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerAnimInstance, RightThumbstickYAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbstickYAxisValue_MetaData), NewProp_RightThumbstickYAxisValue_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftPanelTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bLeftPanelTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftPanelTouched = { "bLeftPanelTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftPanelTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftPanelTouched_MetaData), NewProp_bLeftPanelTouched_MetaData) };
void Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightPanelTouched_SetBit(void* Obj)
{
	((UQuestControllerAnimInstance*)Obj)->bRightPanelTouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightPanelTouched = { "bRightPanelTouched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestControllerAnimInstance), &Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightPanelTouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRightPanelTouched_MetaData), NewProp_bRightPanelTouched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestControllerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bAButtonTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bBButtonTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bXButtonTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bYButtonTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftMenuButtonDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftFrontTriggerTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftFrontTriggerAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightFrontTriggerTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightFrontTriggerAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftGripTriggerAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightGripTriggerAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftThumbstickTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftThumbstickXAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_LeftThumbstickYAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightThumbstickTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightThumbstickXAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_RightThumbstickYAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bLeftPanelTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerAnimInstance_Statics::NewProp_bRightPanelTouched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestControllerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestControllerAnimInstance_Statics::ClassParams = {
	&UQuestControllerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestControllerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestControllerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestControllerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UQuestControllerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestControllerAnimInstance.OuterSingleton, Z_Construct_UClass_UQuestControllerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestControllerAnimInstance.OuterSingleton;
}
UQuestControllerAnimInstance::UQuestControllerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestControllerAnimInstance);
UQuestControllerAnimInstance::~UQuestControllerAnimInstance() {}
// ********** End Class UQuestControllerAnimInstance ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerAnimInstance_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestControllerAnimInstance, UQuestControllerAnimInstance::StaticClass, TEXT("UQuestControllerAnimInstance"), &Z_Registration_Info_UClass_UQuestControllerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestControllerAnimInstance), 1580540648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerAnimInstance_h__Script_OculusInteractionPrebuilts_2860846452(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerAnimInstance_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerAnimInstance_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
