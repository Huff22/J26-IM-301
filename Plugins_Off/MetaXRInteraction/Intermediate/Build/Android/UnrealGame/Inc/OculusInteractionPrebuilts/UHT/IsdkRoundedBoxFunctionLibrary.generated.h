// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRoundedBoxFunctionLibrary_generated_h
#error "IsdkRoundedBoxFunctionLibrary.generated.h already included, missing '#pragma once' in IsdkRoundedBoxFunctionLibrary.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRoundedBoxFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UMaterialInstanceDynamic;
class USceneComponent;
class UStaticMeshComponent;
struct FIsdkRoundedBoxProperties;
struct FLinearColor;

// ********** Begin ScriptStruct FIsdkRoundedBoxProperties *****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics; \
	OCULUSINTERACTIONPREBUILTS_API static class UScriptStruct* StaticStruct();


struct FIsdkRoundedBoxProperties;
// ********** End ScriptStruct FIsdkRoundedBoxProperties *******************************************

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary *******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRoundedBoxMaterialCornerRadius); \
	DECLARE_FUNCTION(execSetRoundedBoxMaterialBorderColor); \
	DECLARE_FUNCTION(execSetRoundedBoxMaterialColor); \
	DECLARE_FUNCTION(execSetRoundedBoxDimensions); \
	DECLARE_FUNCTION(execSetMeshComponentScale); \
	DECLARE_FUNCTION(execSetRoundedBoxMaterialParameters); \
	DECLARE_FUNCTION(execSetupRoundedBox); \
	DECLARE_FUNCTION(execCreateRoundedBox);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRoundedBoxFunctionLibrary(); \
	friend struct Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRoundedBoxFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRoundedBoxFunctionLibrary)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkRoundedBoxFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRoundedBoxFunctionLibrary(UIsdkRoundedBoxFunctionLibrary&&) = delete; \
	UIsdkRoundedBoxFunctionLibrary(const UIsdkRoundedBoxFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRoundedBoxFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRoundedBoxFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkRoundedBoxFunctionLibrary) \
	NO_API virtual ~UIsdkRoundedBoxFunctionLibrary();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_52_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRoundedBoxFunctionLibrary;

// ********** End Class UIsdkRoundedBoxFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
