// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRFunctionLibrary.h"

#ifdef OCULUSXRHMD_OculusXRFunctionLibrary_generated_h
#error "OculusXRFunctionLibrary.generated.h already included, missing '#pragma once' in OculusXRFunctionLibrary.h"
#endif
#define OCULUSXRHMD_OculusXRFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UTexture2D;
enum class EControllerHand : uint8;
enum class EOculusXRBoundaryType : uint8;
enum class EOculusXRColorSpace : uint8;
enum class EOculusXRControllerType : uint8;
enum class EOculusXRDeviceType : uint8;
enum class EOculusXREyeBufferSharpenType : uint8;
enum class EOculusXRFoveatedRenderingLevel : uint8;
enum class EOculusXRFoveatedRenderingMethod : uint8;
enum class EOculusXROcclusionsMode : uint8;
enum class EOculusXRProcessorPerformanceLevel : uint8;
enum class EOculusXRTrackedDeviceType : uint8;
enum class EOculusXRXrApi : uint8;
struct FLinearColor;
struct FOculusXRGuardianTestResult;
struct FOculusXRHmdUserProfile;
struct FOculusXRPerformanceMetrics;

// ********** Begin Class UOculusXRFunctionLibrary *************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execGetXrApi); \
	DECLARE_FUNCTION(execIsPassthroughRecommended); \
	DECLARE_FUNCTION(execSetEyeBufferSharpenType); \
	DECLARE_FUNCTION(execSetXROcclusionsMode); \
	DECLARE_FUNCTION(execSetEnvironmentDepthHandRemoval); \
	DECLARE_FUNCTION(execIsEnvironmentDepthStarted); \
	DECLARE_FUNCTION(execStopEnvironmentDepth); \
	DECLARE_FUNCTION(execStartEnvironmentDepth); \
	DECLARE_FUNCTION(execIsColorPassthroughSupported); \
	DECLARE_FUNCTION(execIsPassthroughSupported); \
	DECLARE_FUNCTION(execSetLocalDimmingOn); \
	DECLARE_FUNCTION(execSetClientColorDesc); \
	DECLARE_FUNCTION(execGetHmdColorDesc); \
	DECLARE_FUNCTION(execGetSystemHmd3DofModeEnabled); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execGetEyeTrackedFoveatedRenderingSupported); \
	DECLARE_FUNCTION(execSetFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execSetFoveatedRenderingMethod); \
	DECLARE_FUNCTION(execGetFoveatedRenderingMethod); \
	DECLARE_FUNCTION(execGetPerformanceMetrics); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetSuggestedCpuAndGpuPerformanceLevels); \
	DECLARE_FUNCTION(execGetSuggestedCpuAndGpuPerformanceLevels); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRFunctionLibrary_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRHMD"), Z_Construct_UClass_UOculusXRFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRFunctionLibrary)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRFunctionLibrary(UOculusXRFunctionLibrary&&) = delete; \
	UOculusXRFunctionLibrary(const UOculusXRFunctionLibrary&) = delete; \
	NO_API virtual ~UOculusXRFunctionLibrary();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_82_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_RPC_WRAPPERS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRFunctionLibrary;

// ********** End Class UOculusXRFunctionLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
