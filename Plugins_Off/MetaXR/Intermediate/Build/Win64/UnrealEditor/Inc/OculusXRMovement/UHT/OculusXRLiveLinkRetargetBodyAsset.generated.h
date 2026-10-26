// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRLiveLinkRetargetBodyAsset.h"

#ifdef OCULUSXRMOVEMENT_OculusXRLiveLinkRetargetBodyAsset_generated_h
#error "OculusXRLiveLinkRetargetBodyAsset.generated.h already included, missing '#pragma once' in OculusXRLiveLinkRetargetBodyAsset.h"
#endif
#define OCULUSXRMOVEMENT_OculusXRLiveLinkRetargetBodyAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOculusXRBoneCorrection *******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRBoneCorrection_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOculusXRBoneCorrection;
// ********** End ScriptStruct FOculusXRBoneCorrection *********************************************

// ********** Begin ScriptStruct FOculusXRBoneCorrectionSet ****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRBoneCorrectionSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOculusXRBoneCorrectionSet;
// ********** End ScriptStruct FOculusXRBoneCorrectionSet ******************************************

// ********** Begin Class UOculusXRLiveLinkRetargetBodyAsset ***************************************
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRLiveLinkRetargetBodyAsset(); \
	friend struct Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRLiveLinkRetargetBodyAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRMovement"), Z_Construct_UClass_UOculusXRLiveLinkRetargetBodyAsset_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRLiveLinkRetargetBodyAsset)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRLiveLinkRetargetBodyAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRLiveLinkRetargetBodyAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRLiveLinkRetargetBodyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRLiveLinkRetargetBodyAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRLiveLinkRetargetBodyAsset(UOculusXRLiveLinkRetargetBodyAsset&&) = delete; \
	UOculusXRLiveLinkRetargetBodyAsset(const UOculusXRLiveLinkRetargetBodyAsset&) = delete; \
	NO_API virtual ~UOculusXRLiveLinkRetargetBodyAsset();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_76_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_79_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRLiveLinkRetargetBodyAsset;

// ********** End Class UOculusXRLiveLinkRetargetBodyAsset *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetBodyAsset_h

// ********** Begin Enum EOculusXRAxis *************************************************************
#define FOREACH_ENUM_EOCULUSXRAXIS(op) \
	op(EOculusXRAxis::X) \
	op(EOculusXRAxis::Y) \
	op(EOculusXRAxis::Z) \
	op(EOculusXRAxis::NegativeX) \
	op(EOculusXRAxis::NegativeY) \
	op(EOculusXRAxis::NegativeZ) 

enum class EOculusXRAxis : uint8;
template<> struct TIsUEnumClass<EOculusXRAxis> { enum { Value = true }; };
template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRAxis>();
// ********** End Enum EOculusXRAxis ***************************************************************

// ********** Begin Enum EOculusXRRetargetingMode **************************************************
#define FOREACH_ENUM_EOCULUSXRRETARGETINGMODE(op) \
	op(EOculusXRRetargetingMode::Full) \
	op(EOculusXRRetargetingMode::Rotations) \
	op(EOculusXRRetargetingMode::RotationsPlusRoot) \
	op(EOculusXRRetargetingMode::RotationsPlusHips) \
	op(EOculusXRRetargetingMode::None) 

enum class EOculusXRRetargetingMode : uint8;
template<> struct TIsUEnumClass<EOculusXRRetargetingMode> { enum { Value = true }; };
template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRRetargetingMode>();
// ********** End Enum EOculusXRRetargetingMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
