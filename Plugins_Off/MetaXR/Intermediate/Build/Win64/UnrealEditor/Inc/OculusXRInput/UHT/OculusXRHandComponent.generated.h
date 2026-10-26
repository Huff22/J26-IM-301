// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRHandComponent.h"

#ifdef OCULUSXRINPUT_OculusXRHandComponent_generated_h
#error "OculusXRHandComponent.generated.h already included, missing '#pragma once' in OculusXRHandComponent.h"
#endif
#define OCULUSXRINPUT_OculusXRHandComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOculusXRHandComponent ***************************************************
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRHandComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRHandComponent(); \
	friend struct Z_Construct_UClass_UOculusXRHandComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRHandComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRHandComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRInput"), Z_Construct_UClass_UOculusXRHandComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRHandComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRHandComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRHandComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRHandComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRHandComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRHandComponent(UOculusXRHandComponent&&) = delete; \
	UOculusXRHandComponent(const UOculusXRHandComponent&) = delete; \
	NO_API virtual ~UOculusXRHandComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h_27_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h_30_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRHandComponent;

// ********** End Class UOculusXRHandComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRHandComponent_h

// ********** Begin Enum EOculusXRConfidenceBehavior ***********************************************
#define FOREACH_ENUM_EOCULUSXRCONFIDENCEBEHAVIOR(op) \
	op(EOculusXRConfidenceBehavior::None) \
	op(EOculusXRConfidenceBehavior::HideActor) 

enum class EOculusXRConfidenceBehavior : uint8;
template<> struct TIsUEnumClass<EOculusXRConfidenceBehavior> { enum { Value = true }; };
template<> OCULUSXRINPUT_API UEnum* StaticEnum<EOculusXRConfidenceBehavior>();
// ********** End Enum EOculusXRConfidenceBehavior *************************************************

// ********** Begin Enum EOculusXRSystemGestureBehavior ********************************************
#define FOREACH_ENUM_EOCULUSXRSYSTEMGESTUREBEHAVIOR(op) \
	op(EOculusXRSystemGestureBehavior::None) \
	op(EOculusXRSystemGestureBehavior::SwapMaterial) 

enum class EOculusXRSystemGestureBehavior : uint8;
template<> struct TIsUEnumClass<EOculusXRSystemGestureBehavior> { enum { Value = true }; };
template<> OCULUSXRINPUT_API UEnum* StaticEnum<EOculusXRSystemGestureBehavior>();
// ********** End Enum EOculusXRSystemGestureBehavior **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
