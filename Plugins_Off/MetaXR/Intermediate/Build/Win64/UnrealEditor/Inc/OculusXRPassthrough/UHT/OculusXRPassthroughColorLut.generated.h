// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughColorLut.h"

#ifdef OCULUSXRPASSTHROUGH_OculusXRPassthroughColorLut_generated_h
#error "OculusXRPassthroughColorLut.generated.h already included, missing '#pragma once' in OculusXRPassthroughColorLut.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPassthroughColorLut_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FColor;

// ********** Begin ScriptStruct FLutTextureData ***************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLutTextureData_Statics; \
	OCULUSXRPASSTHROUGH_API static class UScriptStruct* StaticStruct();


struct FLutTextureData;
// ********** End ScriptStruct FLutTextureData *****************************************************

// ********** Begin Class UOculusXRPassthroughColorLut *********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLutFromArray);


OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughColorLut(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRPassthroughColorLut, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRPassthroughColorLut)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughColorLut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPassthroughColorLut(UOculusXRPassthroughColorLut&&) = delete; \
	UOculusXRPassthroughColorLut(const UOculusXRPassthroughColorLut&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughColorLut); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughColorLut); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughColorLut) \
	NO_API virtual ~UOculusXRPassthroughColorLut();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_59_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPassthroughColorLut;

// ********** End Class UOculusXRPassthroughColorLut ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h

// ********** Begin Enum EColorLutType *************************************************************
#define FOREACH_ENUM_ECOLORLUTTYPE(op) \
	op(EColorLutType::None) \
	op(EColorLutType::TextureLUT) \
	op(EColorLutType::Array) 

enum class EColorLutType : uint8;
template<> struct TIsUEnumClass<EColorLutType> { enum { Value = true }; };
template<> OCULUSXRPASSTHROUGH_API UEnum* StaticEnum<EColorLutType>();
// ********** End Enum EColorLutType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
