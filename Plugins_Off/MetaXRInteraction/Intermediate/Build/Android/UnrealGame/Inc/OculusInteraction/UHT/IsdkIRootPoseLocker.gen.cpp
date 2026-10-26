// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkIRootPoseLocker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIRootPoseLocker() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPoseLocker();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkRootPoseLockMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkRootPoseLockMode;
static UEnum* EIsdkRootPoseLockMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkRootPoseLockMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkRootPoseLockMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkRootPoseLockMode"));
	}
	return Z_Registration_Info_UEnum_EIsdkRootPoseLockMode.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkRootPoseLockMode>()
{
	return EIsdkRootPoseLockMode_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Full.Name", "EIsdkRootPoseLockMode::Full" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPoseLocker.h" },
		{ "None.Name", "EIsdkRootPoseLockMode::None" },
		{ "Position.Name", "EIsdkRootPoseLockMode::Position" },
		{ "Rotation.Name", "EIsdkRootPoseLockMode::Rotation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkRootPoseLockMode::None", (int64)EIsdkRootPoseLockMode::None },
		{ "EIsdkRootPoseLockMode::Position", (int64)EIsdkRootPoseLockMode::Position },
		{ "EIsdkRootPoseLockMode::Rotation", (int64)EIsdkRootPoseLockMode::Rotation },
		{ "EIsdkRootPoseLockMode::Full", (int64)EIsdkRootPoseLockMode::Full },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkRootPoseLockMode",
	"EIsdkRootPoseLockMode",
	Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode()
{
	if (!Z_Registration_Info_UEnum_EIsdkRootPoseLockMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkRootPoseLockMode.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkRootPoseLockMode.InnerSingleton;
}
// ********** End Enum EIsdkRootPoseLockMode *******************************************************

// ********** Begin Interface UIsdkIRootPoseLocker Function FreeRootTransform **********************
struct IsdkIRootPoseLocker_eventFreeRootTransform_Parms
{
	EIsdkRootPoseLockMode LockMode;
};
void IIsdkIRootPoseLocker::FreeRootTransform(EIsdkRootPoseLockMode LockMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FreeRootTransform instead.");
}
static FName NAME_UIsdkIRootPoseLocker_FreeRootTransform = FName(TEXT("FreeRootTransform"));
void IIsdkIRootPoseLocker::Execute_FreeRootTransform(UObject* O, EIsdkRootPoseLockMode LockMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPoseLocker::StaticClass()));
	IsdkIRootPoseLocker_eventFreeRootTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPoseLocker_FreeRootTransform);
	if (Func)
	{
		Parms.LockMode=LockMode;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPoseLocker*)(O->GetNativeInterfaceAddress(UIsdkIRootPoseLocker::StaticClass())))
	{
		I->FreeRootTransform_Implementation(LockMode);
	}
}
struct Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPoseLocker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::NewProp_LockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::NewProp_LockMode = { "LockMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventFreeRootTransform_Parms, LockMode), Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode, METADATA_PARAMS(0, nullptr) }; // 2156352062
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::NewProp_LockMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::NewProp_LockMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPoseLocker, nullptr, "FreeRootTransform", Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::PropPointers), sizeof(IsdkIRootPoseLocker_eventFreeRootTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPoseLocker_eventFreeRootTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPoseLocker::execFreeRootTransform)
{
	P_GET_ENUM(EIsdkRootPoseLockMode,Z_Param_LockMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FreeRootTransform_Implementation(EIsdkRootPoseLockMode(Z_Param_LockMode));
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPoseLocker Function FreeRootTransform ************************

// ********** Begin Interface UIsdkIRootPoseLocker Function LockRootLocation ***********************
struct IsdkIRootPoseLocker_eventLockRootLocation_Parms
{
	FVector Position;
	float OverrideFactor;
	bool bSkipAnimation;
};
void IIsdkIRootPoseLocker::LockRootLocation(FVector const& Position, const float OverrideFactor, bool bSkipAnimation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LockRootLocation instead.");
}
static FName NAME_UIsdkIRootPoseLocker_LockRootLocation = FName(TEXT("LockRootLocation"));
void IIsdkIRootPoseLocker::Execute_LockRootLocation(UObject* O, FVector const& Position, const float OverrideFactor, bool bSkipAnimation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPoseLocker::StaticClass()));
	IsdkIRootPoseLocker_eventLockRootLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPoseLocker_LockRootLocation);
	if (Func)
	{
		Parms.Position=Position;
		Parms.OverrideFactor=OverrideFactor;
		Parms.bSkipAnimation=bSkipAnimation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPoseLocker*)(O->GetNativeInterfaceAddress(UIsdkIRootPoseLocker::StaticClass())))
	{
		I->LockRootLocation_Implementation(Position,OverrideFactor,bSkipAnimation);
	}
}
struct Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/// Fixes the location of the device's \"root pose\".\n/// @param Position relative to tracking space.\n/// @param OverrideFactor Lerp factor, between 0.0 (unlocked value) and 1.0 (provided, locked,\n/// value.\n/// @param bSkipAnimation When false, the implementation will animate from the previous state to\n/// the new state.\n" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPoseLocker.h" },
		{ "ToolTip", "Fixes the location of the device's \"root pose\".\n@param Position relative to tracking space.\n@param OverrideFactor Lerp factor, between 0.0 (unlocked value) and 1.0 (provided, locked,\nvalue.\n@param bSkipAnimation When false, the implementation will animate from the previous state to\nthe new state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFactor;
	static void NewProp_bSkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootLocation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_OverrideFactor = { "OverrideFactor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootLocation_Parms, OverrideFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFactor_MetaData), NewProp_OverrideFactor_MetaData) };
void Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
{
	((IsdkIRootPoseLocker_eventLockRootLocation_Parms*)Obj)->bSkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIRootPoseLocker_eventLockRootLocation_Parms), &Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_OverrideFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::NewProp_bSkipAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPoseLocker, nullptr, "LockRootLocation", Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::PropPointers), sizeof(IsdkIRootPoseLocker_eventLockRootLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPoseLocker_eventLockRootLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPoseLocker::execLockRootLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFactor);
	P_GET_UBOOL(Z_Param_bSkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockRootLocation_Implementation(Z_Param_Out_Position,Z_Param_OverrideFactor,Z_Param_bSkipAnimation);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPoseLocker Function LockRootLocation *************************

// ********** Begin Interface UIsdkIRootPoseLocker Function LockRootRotation ***********************
struct IsdkIRootPoseLocker_eventLockRootRotation_Parms
{
	FQuat Rotation;
	float OverrideFactor;
	bool bSkipAnimation;
};
void IIsdkIRootPoseLocker::LockRootRotation(FQuat const& Rotation, const float OverrideFactor, bool bSkipAnimation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LockRootRotation instead.");
}
static FName NAME_UIsdkIRootPoseLocker_LockRootRotation = FName(TEXT("LockRootRotation"));
void IIsdkIRootPoseLocker::Execute_LockRootRotation(UObject* O, FQuat const& Rotation, const float OverrideFactor, bool bSkipAnimation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPoseLocker::StaticClass()));
	IsdkIRootPoseLocker_eventLockRootRotation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPoseLocker_LockRootRotation);
	if (Func)
	{
		Parms.Rotation=Rotation;
		Parms.OverrideFactor=OverrideFactor;
		Parms.bSkipAnimation=bSkipAnimation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPoseLocker*)(O->GetNativeInterfaceAddress(UIsdkIRootPoseLocker::StaticClass())))
	{
		I->LockRootRotation_Implementation(Rotation,OverrideFactor,bSkipAnimation);
	}
}
struct Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/// Fixes the roation of the device's \"root pose\".\n/// @param Rotation relative to tracking space.\n/// @param OverrideFactor Lerp factor, between 0.0 (unlocked value) and 1.0 (provided, locked,\n/// value.\n/// @param bSkipAnimation When false, the implementation will animate from the previous state to\n/// the new state.\n" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPoseLocker.h" },
		{ "ToolTip", "Fixes the roation of the device's \"root pose\".\n@param Rotation relative to tracking space.\n@param OverrideFactor Lerp factor, between 0.0 (unlocked value) and 1.0 (provided, locked,\nvalue.\n@param bSkipAnimation When false, the implementation will animate from the previous state to\nthe new state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFactor;
	static void NewProp_bSkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootRotation_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_OverrideFactor = { "OverrideFactor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootRotation_Parms, OverrideFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFactor_MetaData), NewProp_OverrideFactor_MetaData) };
void Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
{
	((IsdkIRootPoseLocker_eventLockRootRotation_Parms*)Obj)->bSkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIRootPoseLocker_eventLockRootRotation_Parms), &Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_OverrideFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::NewProp_bSkipAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPoseLocker, nullptr, "LockRootRotation", Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::PropPointers), sizeof(IsdkIRootPoseLocker_eventLockRootRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPoseLocker_eventLockRootRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPoseLocker::execLockRootRotation)
{
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFactor);
	P_GET_UBOOL(Z_Param_bSkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockRootRotation_Implementation(Z_Param_Out_Rotation,Z_Param_OverrideFactor,Z_Param_bSkipAnimation);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPoseLocker Function LockRootRotation *************************

// ********** Begin Interface UIsdkIRootPoseLocker Function LockRootTransform **********************
struct IsdkIRootPoseLocker_eventLockRootTransform_Parms
{
	FTransform Transform;
	float OverrideFactor;
	EIsdkRootPoseLockMode LockMode;
	bool bSkipAnimation;
};
void IIsdkIRootPoseLocker::LockRootTransform(FTransform const& Transform, const float OverrideFactor, EIsdkRootPoseLockMode LockMode, bool bSkipAnimation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LockRootTransform instead.");
}
static FName NAME_UIsdkIRootPoseLocker_LockRootTransform = FName(TEXT("LockRootTransform"));
void IIsdkIRootPoseLocker::Execute_LockRootTransform(UObject* O, FTransform const& Transform, const float OverrideFactor, EIsdkRootPoseLockMode LockMode, bool bSkipAnimation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPoseLocker::StaticClass()));
	IsdkIRootPoseLocker_eventLockRootTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPoseLocker_LockRootTransform);
	if (Func)
	{
		Parms.Transform=Transform;
		Parms.OverrideFactor=OverrideFactor;
		Parms.LockMode=LockMode;
		Parms.bSkipAnimation=bSkipAnimation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPoseLocker*)(O->GetNativeInterfaceAddress(UIsdkIRootPoseLocker::StaticClass())))
	{
		I->LockRootTransform_Implementation(Transform,OverrideFactor,LockMode,bSkipAnimation);
	}
}
struct Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/// Fixes the location and/or rotation of the device's \"root pose\".\n/// @param Transform Locks both Location and Rotation, relative to tracking space\n/// @param OverrideFactor Lerp factor, between 0.0 (unlocked value) and 1.0 (provided, locked,\n/// value.\n/// @param LockMode Specify which of Location, Rotation to lock. Modes not present in this bitmask\n/// will not be freed - FreeRootTransform must be explicitly called to unlock.\n/// @param bSkipAnimation When false, the implementation will animate from the previous state to\n/// the new state.\n" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPoseLocker.h" },
		{ "ToolTip", "Fixes the location and/or rotation of the device's \"root pose\".\n@param Transform Locks both Location and Rotation, relative to tracking space\n@param OverrideFactor Lerp factor, between 0.0 (unlocked value) and 1.0 (provided, locked,\nvalue.\n@param LockMode Specify which of Location, Rotation to lock. Modes not present in this bitmask\nwill not be freed - FreeRootTransform must be explicitly called to unlock.\n@param bSkipAnimation When false, the implementation will animate from the previous state to\nthe new state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockMode;
	static void NewProp_bSkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_OverrideFactor = { "OverrideFactor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootTransform_Parms, OverrideFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFactor_MetaData), NewProp_OverrideFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_LockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_LockMode = { "LockMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPoseLocker_eventLockRootTransform_Parms, LockMode), Z_Construct_UEnum_OculusInteraction_EIsdkRootPoseLockMode, METADATA_PARAMS(0, nullptr) }; // 2156352062
void Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_bSkipAnimation_SetBit(void* Obj)
{
	((IsdkIRootPoseLocker_eventLockRootTransform_Parms*)Obj)->bSkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_bSkipAnimation = { "bSkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIRootPoseLocker_eventLockRootTransform_Parms), &Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_bSkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_OverrideFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_LockMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_LockMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::NewProp_bSkipAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPoseLocker, nullptr, "LockRootTransform", Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::PropPointers), sizeof(IsdkIRootPoseLocker_eventLockRootTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPoseLocker_eventLockRootTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPoseLocker::execLockRootTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFactor);
	P_GET_ENUM(EIsdkRootPoseLockMode,Z_Param_LockMode);
	P_GET_UBOOL(Z_Param_bSkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockRootTransform_Implementation(Z_Param_Out_Transform,Z_Param_OverrideFactor,EIsdkRootPoseLockMode(Z_Param_LockMode),Z_Param_bSkipAnimation);
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPoseLocker Function LockRootTransform ************************

// ********** Begin Interface UIsdkIRootPoseLocker *************************************************
void UIsdkIRootPoseLocker::StaticRegisterNativesUIsdkIRootPoseLocker()
{
	UClass* Class = UIsdkIRootPoseLocker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FreeRootTransform", &IIsdkIRootPoseLocker::execFreeRootTransform },
		{ "LockRootLocation", &IIsdkIRootPoseLocker::execLockRootLocation },
		{ "LockRootRotation", &IIsdkIRootPoseLocker::execLockRootRotation },
		{ "LockRootTransform", &IIsdkIRootPoseLocker::execLockRootTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIRootPoseLocker;
UClass* UIsdkIRootPoseLocker::GetPrivateStaticClass()
{
	using TClass = UIsdkIRootPoseLocker;
	if (!Z_Registration_Info_UClass_UIsdkIRootPoseLocker.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIRootPoseLocker"),
			Z_Registration_Info_UClass_UIsdkIRootPoseLocker.InnerSingleton,
			StaticRegisterNativesUIsdkIRootPoseLocker,
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
	return Z_Registration_Info_UClass_UIsdkIRootPoseLocker.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister()
{
	return UIsdkIRootPoseLocker::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIRootPoseLocker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPoseLocker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIRootPoseLocker_FreeRootTransform, "FreeRootTransform" }, // 444958525
		{ &Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootLocation, "LockRootLocation" }, // 3015379811
		{ &Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootRotation, "LockRootRotation" }, // 1336956871
		{ &Z_Construct_UFunction_UIsdkIRootPoseLocker_LockRootTransform, "LockRootTransform" }, // 584353056
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIRootPoseLocker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIRootPoseLocker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIRootPoseLocker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIRootPoseLocker_Statics::ClassParams = {
	&UIsdkIRootPoseLocker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIRootPoseLocker_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIRootPoseLocker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIRootPoseLocker()
{
	if (!Z_Registration_Info_UClass_UIsdkIRootPoseLocker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIRootPoseLocker.OuterSingleton, Z_Construct_UClass_UIsdkIRootPoseLocker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIRootPoseLocker.OuterSingleton;
}
UIsdkIRootPoseLocker::UIsdkIRootPoseLocker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIRootPoseLocker);
// ********** End Interface UIsdkIRootPoseLocker ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkRootPoseLockMode_StaticEnum, TEXT("EIsdkRootPoseLockMode"), &Z_Registration_Info_UEnum_EIsdkRootPoseLockMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2156352062U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIRootPoseLocker, UIsdkIRootPoseLocker::StaticClass, TEXT("UIsdkIRootPoseLocker"), &Z_Registration_Info_UClass_UIsdkIRootPoseLocker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIRootPoseLocker), 2107323169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h__Script_OculusInteraction_1430673739(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
