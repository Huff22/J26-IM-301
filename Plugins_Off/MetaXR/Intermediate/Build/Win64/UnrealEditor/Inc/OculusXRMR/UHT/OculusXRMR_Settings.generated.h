// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRMR_Settings.h"

#ifdef OCULUSXRMR_OculusXRMR_Settings_generated_h
#error "OculusXRMR_Settings.generated.h already included, missing '#pragma once' in OculusXRMR_Settings.h"
#endif
#define OCULUSXRMR_OculusXRMR_Settings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOculusXRMR_CameraDeviceEnum : uint8;
enum class EOculusXRMR_CompositionMethod : uint8;

// ********** Begin Class UOculusXRMR_Settings *****************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveToIni); \
	DECLARE_FUNCTION(execLoadFromIni); \
	DECLARE_FUNCTION(execGetBindToTrackedCameraIndex); \
	DECLARE_FUNCTION(execBindToTrackedCameraIndexIfAvailable); \
	DECLARE_FUNCTION(execSetIsCasting); \
	DECLARE_FUNCTION(execGetIsCasting); \
	DECLARE_FUNCTION(execSetCapturingCamera); \
	DECLARE_FUNCTION(execGetCapturingCamera); \
	DECLARE_FUNCTION(execSetCompositionMethod); \
	DECLARE_FUNCTION(execGetCompositionMethod);


OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_Settings_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRMR_Settings(); \
	friend struct Z_Construct_UClass_UOculusXRMR_Settings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_Settings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRMR_Settings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRMR"), Z_Construct_UClass_UOculusXRMR_Settings_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRMR_Settings)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRMR_Settings(UOculusXRMR_Settings&&) = delete; \
	UOculusXRMR_Settings(const UOculusXRMR_Settings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMR_Settings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMR_Settings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMR_Settings) \
	NO_API virtual ~UOculusXRMR_Settings();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_40_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRMR_Settings;

// ********** End Class UOculusXRMR_Settings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h

// ********** Begin Enum EOculusXRMR_CameraDeviceEnum **********************************************
#define FOREACH_ENUM_EOCULUSXRMR_CAMERADEVICEENUM(op) \
	op(EOculusXRMR_CameraDeviceEnum::CD_None_DEPRECATED) \
	op(EOculusXRMR_CameraDeviceEnum::CD_WebCamera0_DEPRECATED) \
	op(EOculusXRMR_CameraDeviceEnum::CD_WebCamera1_DEPRECATED) 

enum class EOculusXRMR_CameraDeviceEnum : uint8;
template<> struct TIsUEnumClass<EOculusXRMR_CameraDeviceEnum> { enum { Value = true }; };
template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_CameraDeviceEnum>();
// ********** End Enum EOculusXRMR_CameraDeviceEnum ************************************************

// ********** Begin Enum EOculusXRMR_ClippingReference *********************************************
#define FOREACH_ENUM_EOCULUSXRMR_CLIPPINGREFERENCE(op) \
	op(EOculusXRMR_ClippingReference::CR_TrackingReference) \
	op(EOculusXRMR_ClippingReference::CR_Head) 

enum class EOculusXRMR_ClippingReference : uint8;
template<> struct TIsUEnumClass<EOculusXRMR_ClippingReference> { enum { Value = true }; };
template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_ClippingReference>();
// ********** End Enum EOculusXRMR_ClippingReference ***********************************************

// ********** Begin Enum EOculusXRMR_PostProcessEffects ********************************************
#define FOREACH_ENUM_EOCULUSXRMR_POSTPROCESSEFFECTS(op) \
	op(EOculusXRMR_PostProcessEffects::PPE_Off) \
	op(EOculusXRMR_PostProcessEffects::PPE_On) 

enum class EOculusXRMR_PostProcessEffects : uint8;
template<> struct TIsUEnumClass<EOculusXRMR_PostProcessEffects> { enum { Value = true }; };
template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_PostProcessEffects>();
// ********** End Enum EOculusXRMR_PostProcessEffects **********************************************

// ********** Begin Enum EOculusXRMR_CompositionMethod *********************************************
#define FOREACH_ENUM_EOCULUSXRMR_COMPOSITIONMETHOD(op) \
	op(EOculusXRMR_CompositionMethod::ExternalComposition) \
	op(EOculusXRMR_CompositionMethod::DirectComposition_DEPRECATED) 

enum class EOculusXRMR_CompositionMethod : uint8;
template<> struct TIsUEnumClass<EOculusXRMR_CompositionMethod> { enum { Value = true }; };
template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_CompositionMethod>();
// ********** End Enum EOculusXRMR_CompositionMethod ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
