// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneFunctionLibrary.h"

#ifdef OCULUSXRSCENE_OculusXRSceneFunctionLibrary_generated_h
#error "OculusXRSceneFunctionLibrary.generated.h already included, missing '#pragma once' in OculusXRSceneFunctionLibrary.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
enum class EOculusXRBoundaryVisibility : uint8;
struct FOculusXRRoomLayout;
struct FOculusXRUInt64;

// ********** Begin Class UOculusXRSceneFunctionLibrary ********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoomLayout); \
	DECLARE_FUNCTION(execRequestBoundaryVisibility); \
	DECLARE_FUNCTION(execGetRequestedBoundaryVisibility); \
	DECLARE_FUNCTION(execGetBoundaryVisibility);


OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSceneFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRSceneFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRScene"), Z_Construct_UClass_UOculusXRSceneFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRSceneFunctionLibrary)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRSceneFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRSceneFunctionLibrary(UOculusXRSceneFunctionLibrary&&) = delete; \
	UOculusXRSceneFunctionLibrary(const UOculusXRSceneFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSceneFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSceneFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRSceneFunctionLibrary) \
	NO_API virtual ~UOculusXRSceneFunctionLibrary();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_10_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRSceneFunctionLibrary;

// ********** End Class UOculusXRSceneFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
