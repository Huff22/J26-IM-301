// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitSceneDataProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMRUtilityKitSceneDataProvider() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKSceneDataProvider();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKSceneDataProvider_NoRegister();
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FJSONData();
UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMRUKSceneDataProvider Function GetRoom **********************************
struct Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics
{
	struct MRUKSceneDataProvider_eventGetRoom_Parms
	{
		FString RoomJSON;
		FString RoomName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Gets you a room from the list of rooms, if bUseRandomRoom is true, a random room will be returned.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Gets you a room from the list of rooms, if bUseRandomRoom is true, a random room will be returned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomJSON;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::NewProp_RoomJSON = { "RoomJSON", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSceneDataProvider_eventGetRoom_Parms, RoomJSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKSceneDataProvider_eventGetRoom_Parms, RoomName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::NewProp_RoomJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::NewProp_RoomName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKSceneDataProvider, nullptr, "GetRoom", Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::MRUKSceneDataProvider_eventGetRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::MRUKSceneDataProvider_eventGetRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKSceneDataProvider::execGetRoom)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RoomJSON);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_RoomName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRoom(Z_Param_Out_RoomJSON,Z_Param_Out_RoomName);
	P_NATIVE_END;
}
// ********** End Class AMRUKSceneDataProvider Function GetRoom ************************************

// ********** Begin Class AMRUKSceneDataProvider ***************************************************
void AMRUKSceneDataProvider::StaticRegisterNativesAMRUKSceneDataProvider()
{
	UClass* Class = AMRUKSceneDataProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRoom", &AMRUKSceneDataProvider::execGetRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKSceneDataProvider;
UClass* AMRUKSceneDataProvider::GetPrivateStaticClass()
{
	using TClass = AMRUKSceneDataProvider;
	if (!Z_Registration_Info_UClass_AMRUKSceneDataProvider.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKSceneDataProvider"),
			Z_Registration_Info_UClass_AMRUKSceneDataProvider.InnerSingleton,
			StaticRegisterNativesAMRUKSceneDataProvider,
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
	return Z_Registration_Info_UClass_AMRUKSceneDataProvider.InnerSingleton;
}
UClass* Z_Construct_UClass_AMRUKSceneDataProvider_NoRegister()
{
	return AMRUKSceneDataProvider::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMRUKSceneDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "DisplayName", "MR Utility Kit Scene Data Provider" },
		{ "IncludePath", "MRUtilityKitSceneDataProvider.h" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * This list holds the rooms that can be loaded, the key is the room type and the value is a data table that contains multiple rooms.\n\x09 * Roomtypes such as Bedrooms, Livingrooms, etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This list holds the rooms that can be loaded, the key is the room type and the value is a data table that contains multiple rooms.\n* Roomtypes such as Bedrooms, Livingrooms, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomRoom_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * When this is true, a random room will be loaded from the list of rooms.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* When this is true, a random room will be loaded from the list of rooms." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomRoomFromClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * When this is true, a random room will be loaded a specific room class, defined in Rooms (Bedrooms, Offices, ..).\n\x09 */" },
#endif
		{ "EditCondition", "!bUseRandomRoom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* When this is true, a random room will be loaded a specific room class, defined in Rooms (Bedrooms, Offices, ..)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificRoomClass_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Use this property to define a specific room class to load, only visible when bUseRandomRoomFromClass is true.\n\x09 * This can be a room class such as Bedrooms, Offices, ..\n\x09 */" },
#endif
		{ "EditCondition", "bUseRandomRoomFromClass && !bUseRandomRoom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Use this property to define a specific room class to load, only visible when bUseRandomRoomFromClass is true.\n* This can be a room class such as Bedrooms, Offices, .." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificRoomName_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Define a specific room to load, only visible when bUseRandomRoom is false.\n\x09 */" },
#endif
		{ "EditCondition", "!bUseRandomRoom && !bUseRandomRoomFromClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Define a specific room to load, only visible when bUseRandomRoom is false." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Rooms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Rooms;
	static void NewProp_bUseRandomRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomRoom;
	static void NewProp_bUseRandomRoomFromClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomRoomFromClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificRoomClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificRoomName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKSceneDataProvider_GetRoom, "GetRoom" }, // 1256054413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKSceneDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_Rooms_ValueProp = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_Rooms_Key_KeyProp = { "Rooms_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKSceneDataProvider, Rooms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
void Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoom_SetBit(void* Obj)
{
	((AMRUKSceneDataProvider*)Obj)->bUseRandomRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoom = { "bUseRandomRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKSceneDataProvider), &Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomRoom_MetaData), NewProp_bUseRandomRoom_MetaData) };
void Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoomFromClass_SetBit(void* Obj)
{
	((AMRUKSceneDataProvider*)Obj)->bUseRandomRoomFromClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoomFromClass = { "bUseRandomRoomFromClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMRUKSceneDataProvider), &Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoomFromClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomRoomFromClass_MetaData), NewProp_bUseRandomRoomFromClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_SpecificRoomClass = { "SpecificRoomClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKSceneDataProvider, SpecificRoomClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificRoomClass_MetaData), NewProp_SpecificRoomClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_SpecificRoomName = { "SpecificRoomName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKSceneDataProvider, SpecificRoomName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificRoomName_MetaData), NewProp_SpecificRoomName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKSceneDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_Rooms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_Rooms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_bUseRandomRoomFromClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_SpecificRoomClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKSceneDataProvider_Statics::NewProp_SpecificRoomName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKSceneDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMRUKSceneDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKSceneDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKSceneDataProvider_Statics::ClassParams = {
	&AMRUKSceneDataProvider::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMRUKSceneDataProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKSceneDataProvider_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKSceneDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKSceneDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMRUKSceneDataProvider()
{
	if (!Z_Registration_Info_UClass_AMRUKSceneDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKSceneDataProvider.OuterSingleton, Z_Construct_UClass_AMRUKSceneDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKSceneDataProvider.OuterSingleton;
}
AMRUKSceneDataProvider::AMRUKSceneDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKSceneDataProvider);
AMRUKSceneDataProvider::~AMRUKSceneDataProvider() {}
// ********** End Class AMRUKSceneDataProvider *****************************************************

// ********** Begin ScriptStruct FJSONData *********************************************************
static_assert(std::is_polymorphic<FJSONData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FJSONData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJSONData;
class UScriptStruct* FJSONData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJSONData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJSONData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSONData, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("JSONData"));
	}
	return Z_Registration_Info_UScriptStruct_FJSONData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJSONData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitSceneDataProvider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSONData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJSONData_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJSONData, JSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSON_MetaData), NewProp_JSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSONData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSONData_Statics::NewProp_JSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSONData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSONData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"JSONData",
	Z_Construct_UScriptStruct_FJSONData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSONData_Statics::PropPointers),
	sizeof(FJSONData),
	alignof(FJSONData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSONData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSONData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJSONData()
{
	if (!Z_Registration_Info_UScriptStruct_FJSONData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJSONData.InnerSingleton, Z_Construct_UScriptStruct_FJSONData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJSONData.InnerSingleton;
}
// ********** End ScriptStruct FJSONData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJSONData::StaticStruct, Z_Construct_UScriptStruct_FJSONData_Statics::NewStructOps, TEXT("JSONData"), &Z_Registration_Info_UScriptStruct_FJSONData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSONData), 2098918323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMRUKSceneDataProvider, AMRUKSceneDataProvider::StaticClass, TEXT("AMRUKSceneDataProvider"), &Z_Registration_Info_UClass_AMRUKSceneDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKSceneDataProvider), 461986002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_2171095008(TEXT("/Script/MRUtilityKit"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h__Script_MRUtilityKit_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
