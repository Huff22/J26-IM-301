// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughLayerComponent.h"

#ifdef OCULUSXRPASSTHROUGH_OculusXRPassthroughLayerComponent_generated_h
#error "OculusXRPassthroughLayerComponent.generated.h already included, missing '#pragma once' in OculusXRPassthroughLayerComponent.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPassthroughLayerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AStaticMeshActor;
class UCurveLinearColor;
class UMeshComponent;
class UOculusXRPassthroughColorLut;
class UProceduralMeshComponent;
class UStaticMeshComponent;
struct FLinearColor;

// ********** Begin Class UOculusXRPassthroughLayerBase ********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveColorLut); \
	DECLARE_FUNCTION(execSetColorLUTWeight); \
	DECLARE_FUNCTION(execSetColorLUTTarget); \
	DECLARE_FUNCTION(execSetColorLUTSource); \
	DECLARE_FUNCTION(execSetLayerPlacement); \
	DECLARE_FUNCTION(execClearColorMap); \
	DECLARE_FUNCTION(execSetColorArray); \
	DECLARE_FUNCTION(execSetColorMapType); \
	DECLARE_FUNCTION(execSetColorMapCurve); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execSetBrightnessContrastSaturation); \
	DECLARE_FUNCTION(execSetColorMapControls); \
	DECLARE_FUNCTION(execSetEdgeRenderingColor); \
	DECLARE_FUNCTION(execEnableColorMapCurve); \
	DECLARE_FUNCTION(execEnableColorMap); \
	DECLARE_FUNCTION(execEnableEdgeColor); \
	DECLARE_FUNCTION(execSetTextureOpacity);


OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughLayerBase(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRPassthroughLayerBase, UStereoLayerShape, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPassthroughLayerBase_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRPassthroughLayerBase)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughLayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPassthroughLayerBase(UOculusXRPassthroughLayerBase&&) = delete; \
	UOculusXRPassthroughLayerBase(const UOculusXRPassthroughLayerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughLayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughLayerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughLayerBase) \
	NO_API virtual ~UOculusXRPassthroughLayerBase();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_30_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPassthroughLayerBase;

// ********** End Class UOculusXRPassthroughLayerBase **********************************************

// ********** Begin Class UOculusXRStereoLayerShapeReconstructed ***********************************
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_279_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRStereoLayerShapeReconstructed(); \
	friend struct Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRStereoLayerShapeReconstructed, UOculusXRPassthroughLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRStereoLayerShapeReconstructed)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_279_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRStereoLayerShapeReconstructed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRStereoLayerShapeReconstructed(UOculusXRStereoLayerShapeReconstructed&&) = delete; \
	UOculusXRStereoLayerShapeReconstructed(const UOculusXRStereoLayerShapeReconstructed&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStereoLayerShapeReconstructed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStereoLayerShapeReconstructed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRStereoLayerShapeReconstructed) \
	NO_API virtual ~UOculusXRStereoLayerShapeReconstructed();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_276_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_279_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_279_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_279_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRStereoLayerShapeReconstructed;

// ********** End Class UOculusXRStereoLayerShapeReconstructed *************************************

// ********** Begin Class UOculusXRStereoLayerShapeUserDefined *************************************
OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_300_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRStereoLayerShapeUserDefined(); \
	friend struct Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRStereoLayerShapeUserDefined, UOculusXRPassthroughLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRStereoLayerShapeUserDefined)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_300_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRStereoLayerShapeUserDefined(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRStereoLayerShapeUserDefined(UOculusXRStereoLayerShapeUserDefined&&) = delete; \
	UOculusXRStereoLayerShapeUserDefined(const UOculusXRStereoLayerShapeUserDefined&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStereoLayerShapeUserDefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStereoLayerShapeUserDefined); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRStereoLayerShapeUserDefined) \
	NO_API virtual ~UOculusXRStereoLayerShapeUserDefined();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_297_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_300_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_300_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_300_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRStereoLayerShapeUserDefined;

// ********** End Class UOculusXRStereoLayerShapeUserDefined ***************************************

// ********** Begin Class UOculusXRPassthroughLayerComponent ***************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnAnyLayerResumedEvent); \
	DECLARE_FUNCTION(execMarkPassthroughStyleForUpdate); \
	DECLARE_FUNCTION(execIsSurfaceGeometryComponent); \
	DECLARE_FUNCTION(execIsSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveProceduralSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveStaticSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveSurfaceGeometry); \
	DECLARE_FUNCTION(execAddProceduralSurfaceGeometry); \
	DECLARE_FUNCTION(execAddStaticSurfaceGeometry); \
	DECLARE_FUNCTION(execAddSurfaceGeometry);


OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughLayerComponent(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRPassthroughLayerComponent, UStereoLayerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPassthroughLayerComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRPassthroughLayerComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughLayerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPassthroughLayerComponent(UOculusXRPassthroughLayerComponent&&) = delete; \
	UOculusXRPassthroughLayerComponent(const UOculusXRPassthroughLayerComponent&) = delete; \
	NO_API virtual ~UOculusXRPassthroughLayerComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_343_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_RPC_WRAPPERS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_346_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPassthroughLayerComponent;

// ********** End Class UOculusXRPassthroughLayerComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
