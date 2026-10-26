// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkFunctionLibrary.h"

#ifdef OCULUSINTERACTION_IsdkFunctionLibrary_generated_h
#error "IsdkFunctionLibrary.generated.h already included, missing '#pragma once' in IsdkFunctionLibrary.h"
#endif
#define OCULUSINTERACTION_IsdkFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class IIsdkIPose;
class IIsdkITrackingDataSubsystem;
class UIsdkGrabbableComponent;
class UObject;
class USceneComponent;
class UWorld;
enum class EControllerHandBehavior : uint8;
enum class EIsdkFingerJoint : uint8;
enum class EIsdkFingerType : uint8;
enum class EIsdkHandedness : uint8;
enum class EIsdkThumbJoint : uint8;
struct FGameplayTagContainer;
struct FIsdkBoundsClipper;
struct FIsdkExternalHandPositionFrame_FingerJointMapping;
struct FIsdkExternalHandPositionFrame_ThumbJointMapping;
struct FIsdkGrabPose;
struct FIsdkTargetTransform;

// ********** Begin Class UIsdkFunctionLibrary *****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHandednessFromInteractor); \
	DECLARE_FUNCTION(execFindGrabbableByComponent); \
	DECLARE_FUNCTION(execMirrorHandTransform); \
	DECLARE_FUNCTION(execMakeTargetTransformStruct); \
	DECLARE_FUNCTION(execMakeGrabPoseStruct); \
	DECLARE_FUNCTION(execSetControllerHandBehavior); \
	DECLARE_FUNCTION(execGetControllerHandBehavior); \
	DECLARE_FUNCTION(execGetISDKGameplayTagsFromActor); \
	DECLARE_FUNCTION(execGetDefaultJointRadii); \
	DECLARE_FUNCTION(execGetDefaultOpenXRFingerMapping); \
	DECLARE_FUNCTION(execGetDefaultOpenXRThumbMapping); \
	DECLARE_FUNCTION(execMapXrFingerJoint); \
	DECLARE_FUNCTION(execMapXrThumbJoint); \
	DECLARE_FUNCTION(execFindTrackingDataSubsystem); \
	DECLARE_FUNCTION(execMakeBoundsClippersFromPose);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkFunctionLibrary_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UIsdkFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UIsdkFunctionLibrary)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkFunctionLibrary(UIsdkFunctionLibrary&&) = delete; \
	UIsdkFunctionLibrary(const UIsdkFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkFunctionLibrary) \
	NO_API virtual ~UIsdkFunctionLibrary();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_35_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkFunctionLibrary;

// ********** End Class UIsdkFunctionLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
