// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorLatentActions.h"

#ifdef OCULUSXRANCHORS_OculusXRAnchorLatentActions_generated_h
#error "OculusXRAnchorLatentActions.generated.h already included, missing '#pragma once' in OculusXRAnchorLatentActions.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorLatentActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UOculusXRAnchorComponent;
class UOculusXRAsyncAction_CreateSpatialAnchor;
class UOculusXRAsyncAction_DiscoverAnchors;
class UOculusXRAsyncAction_EraseAnchor;
class UOculusXRAsyncAction_EraseAnchors;
class UOculusXRAsyncAction_GetSharedAnchors;
class UOculusXRAsyncAction_GetSharedAnchorsFromGroup;
class UOculusXRAsyncAction_QueryAnchors;
class UOculusXRAsyncAction_SaveAnchor;
class UOculusXRAsyncAction_SaveAnchorList;
class UOculusXRAsyncAction_SaveAnchors;
class UOculusXRAsyncAction_SetAnchorComponentStatus;
class UOculusXRAsyncAction_SetComponentStatus;
class UOculusXRAsyncAction_ShareAnchors;
class UOculusXRAsyncAction_ShareAnchorsWithGroups;
class UOculusXRBaseAnchorComponent;
enum class EOculusXRSpaceComponentType : uint8;
enum class EOculusXRSpaceStorageLocation : uint8;
struct FOculusXRAnchor;
struct FOculusXRAnchorsDiscoverResult;
struct FOculusXRSpaceDiscoveryInfo;
struct FOculusXRSpaceQueryInfo;
struct FOculusXRSpaceQueryResult;
struct FOculusXRUInt64;
struct FOculusXRUUID;

// ********** Begin Delegate FOculusXR_LatentAction_CreateSpatialAnchor_Success ********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_13_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_CreateSpatialAnchor_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_CreateSpatialAnchor_Success, UOculusXRAnchorComponent* Anchor, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_CreateSpatialAnchor_Success **********************

// ********** Begin Delegate FOculusXR_LatentAction_CreateSpatialAnchor_Failure ********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_14_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_CreateSpatialAnchor_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_CreateSpatialAnchor_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_CreateSpatialAnchor_Failure **********************

// ********** Begin Delegate FOculusXR_LatentAction_EraseAnchor_Success ****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_16_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_EraseAnchor_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_EraseAnchor_Success, AActor* Actor, FOculusXRUUID UUID, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_EraseAnchor_Success ******************************

// ********** Begin Delegate FOculusXR_LatentAction_EraseAnchor_Failure ****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_17_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_EraseAnchor_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_EraseAnchor_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_EraseAnchor_Failure ******************************

// ********** Begin Delegate FOculusXR_LatentAction_SaveAnchor_Success *****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_19_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SaveAnchor_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SaveAnchor_Success, UOculusXRAnchorComponent* Anchor, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SaveAnchor_Success *******************************

// ********** Begin Delegate FOculusXR_LatentAction_SaveAnchor_Failure *****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_20_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SaveAnchor_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SaveAnchor_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SaveAnchor_Failure *******************************

// ********** Begin Delegate FOculusXR_LatentAction_SaveAnchorList_Success *************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_22_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SaveAnchorList_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SaveAnchorList_Success, TArray<UOculusXRAnchorComponent*> const& Anchors, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SaveAnchorList_Success ***************************

// ********** Begin Delegate FOculusXR_LatentAction_SaveAnchorList_Failure *************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_23_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SaveAnchorList_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SaveAnchorList_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SaveAnchorList_Failure ***************************

// ********** Begin Delegate FOculusXR_LatentAction_QueryAnchors_Success ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_25_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_QueryAnchors_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_QueryAnchors_Success, TArray<FOculusXRSpaceQueryResult> const& QueryResults, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_QueryAnchors_Success *****************************

// ********** Begin Delegate FOculusXR_LatentAction_QueryAnchors_Failure ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_26_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_QueryAnchors_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_QueryAnchors_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_QueryAnchors_Failure *****************************

// ********** Begin Delegate FOculusXR_LatentAction_SetComponentStatus_Success *********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_28_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SetComponentStatus_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SetComponentStatus_Success, UOculusXRAnchorComponent* Anchor, EOculusXRSpaceComponentType ComponentType, bool Enabled, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SetComponentStatus_Success ***********************

// ********** Begin Delegate FOculusXR_LatentAction_SetComponentStatus_Failure *********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_29_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SetComponentStatus_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SetComponentStatus_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SetComponentStatus_Failure ***********************

// ********** Begin Delegate FOculusXR_LatentAction_SetAnchorComponentStatus_Success ***************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_31_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SetAnchorComponentStatus_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SetAnchorComponentStatus_Success, UOculusXRBaseAnchorComponent* Component, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SetAnchorComponentStatus_Success *****************

// ********** Begin Delegate FOculusXR_LatentAction_SetAnchorComponentStatus_Failure ***************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_32_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SetAnchorComponentStatus_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SetAnchorComponentStatus_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SetAnchorComponentStatus_Failure *****************

// ********** Begin Delegate FOculusXR_LatentAction_ShareAnchors_Success ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_34_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_ShareAnchors_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ShareAnchors_Success, TArray<UOculusXRAnchorComponent*> const& SharedAnchors, TArray<FString> const& UserIds, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_ShareAnchors_Success *****************************

// ********** Begin Delegate FOculusXR_LatentAction_ShareAnchors_Failure ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_35_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_ShareAnchors_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ShareAnchors_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_ShareAnchors_Failure *****************************

// ********** Begin Delegate FOculusXR_LatentAction_SaveAnchors_Success ****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_37_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SaveAnchors_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SaveAnchors_Success, TArray<UOculusXRAnchorComponent*> const& Anchors, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SaveAnchors_Success ******************************

// ********** Begin Delegate FOculusXR_LatentAction_SaveAnchors_Failure ****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_38_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_SaveAnchors_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_SaveAnchors_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_SaveAnchors_Failure ******************************

// ********** Begin Delegate FOculusXR_LatentAction_EraseAnchors_Success ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_40_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_EraseAnchors_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_EraseAnchors_Success, TArray<UOculusXRAnchorComponent*> const& Anchors, TArray<FOculusXRUInt64> const& AnchorHandles, TArray<FOculusXRUUID> const& UUIDs, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_EraseAnchors_Success *****************************

// ********** Begin Delegate FOculusXR_LatentAction_EraseAnchors_Failure ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_41_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_EraseAnchors_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_EraseAnchors_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_EraseAnchors_Failure *****************************

// ********** Begin Delegate FOculusXR_LatentAction_DiscoverAnchors_Discovered *********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_43_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_DiscoverAnchors_Discovered_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_DiscoverAnchors_Discovered, TArray<FOculusXRAnchorsDiscoverResult> const& DiscoveryResult);


// ********** End Delegate FOculusXR_LatentAction_DiscoverAnchors_Discovered ***********************

// ********** Begin Delegate FOculusXR_LatentAction_DiscoverAnchors_Complete ***********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_44_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_DiscoverAnchors_Complete_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_DiscoverAnchors_Complete, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_DiscoverAnchors_Complete *************************

// ********** Begin Delegate FOculusXR_LatentAction_DiscoverAnchors_Failure ************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_45_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_DiscoverAnchors_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_DiscoverAnchors_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_DiscoverAnchors_Failure **************************

// ********** Begin Delegate FOculusXR_LatentAction_GetSharedAnchors_Success ***********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_47_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_GetSharedAnchors_Success_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_GetSharedAnchors_Success, TArray<FOculusXRAnchorsDiscoverResult> const& SharedAnchors, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_GetSharedAnchors_Success *************************

// ********** Begin Delegate FOculusXR_LatentAction_GetSharedAnchors_Failure ***********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_48_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_GetSharedAnchors_Failure_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_GetSharedAnchors_Failure, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_GetSharedAnchors_Failure *************************

// ********** Begin Delegate FOculusXR_LatentAction_ShareAnchorsWithGroups_Complete ****************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_50_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_ShareAnchorsWithGroups_Complete_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ShareAnchorsWithGroups_Complete, bool Success, TArray<FOculusXRUUID> const& Groups, TArray<FOculusXRUInt64> const& AnchorHandles, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_ShareAnchorsWithGroups_Complete ******************

// ********** Begin Delegate FOculusXR_LatentAction_GetSharedAnchorsFromGroup_Complete *************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_51_DELEGATE \
OCULUSXRANCHORS_API void FOculusXR_LatentAction_GetSharedAnchorsFromGroup_Complete_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_GetSharedAnchorsFromGroup_Complete, bool Success, TArray<FOculusXRAnchor> const& Anchors, EOculusXRAnchorResult::Type Result);


// ********** End Delegate FOculusXR_LatentAction_GetSharedAnchorsFromGroup_Complete ***************

// ********** Begin Class UOculusXRAsyncAction_CreateSpatialAnchor *********************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncCreateSpatialAnchor);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_CreateSpatialAnchor(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_CreateSpatialAnchor, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_CreateSpatialAnchor_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_CreateSpatialAnchor)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_CreateSpatialAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_CreateSpatialAnchor(UOculusXRAsyncAction_CreateSpatialAnchor&&) = delete; \
	UOculusXRAsyncAction_CreateSpatialAnchor(const UOculusXRAsyncAction_CreateSpatialAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_CreateSpatialAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_CreateSpatialAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_CreateSpatialAnchor) \
	NO_API virtual ~UOculusXRAsyncAction_CreateSpatialAnchor();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_56_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_CreateSpatialAnchor;

// ********** End Class UOculusXRAsyncAction_CreateSpatialAnchor ***********************************

// ********** Begin Class UOculusXRAsyncAction_EraseAnchor *****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncEraseAnchor);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_EraseAnchor(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_EraseAnchor, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchor_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_EraseAnchor)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_EraseAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_EraseAnchor(UOculusXRAsyncAction_EraseAnchor&&) = delete; \
	UOculusXRAsyncAction_EraseAnchor(const UOculusXRAsyncAction_EraseAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_EraseAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_EraseAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_EraseAnchor) \
	NO_API virtual ~UOculusXRAsyncAction_EraseAnchor();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_85_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_EraseAnchor;

// ********** End Class UOculusXRAsyncAction_EraseAnchor *******************************************

// ********** Begin Class UOculusXRAsyncAction_SaveAnchor ******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSaveAnchor);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_SaveAnchor(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SaveAnchor, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchor_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SaveAnchor)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SaveAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SaveAnchor(UOculusXRAsyncAction_SaveAnchor&&) = delete; \
	UOculusXRAsyncAction_SaveAnchor(const UOculusXRAsyncAction_SaveAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SaveAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SaveAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SaveAnchor) \
	NO_API virtual ~UOculusXRAsyncAction_SaveAnchor();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_114_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SaveAnchor;

// ********** End Class UOculusXRAsyncAction_SaveAnchor ********************************************

// ********** Begin Class UOculusXRAsyncAction_SaveAnchorList **************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSaveAnchorList);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_SaveAnchorList(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SaveAnchorList, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchorList_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SaveAnchorList)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SaveAnchorList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SaveAnchorList(UOculusXRAsyncAction_SaveAnchorList&&) = delete; \
	UOculusXRAsyncAction_SaveAnchorList(const UOculusXRAsyncAction_SaveAnchorList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SaveAnchorList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SaveAnchorList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SaveAnchorList) \
	NO_API virtual ~UOculusXRAsyncAction_SaveAnchorList();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_143_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SaveAnchorList;

// ********** End Class UOculusXRAsyncAction_SaveAnchorList ****************************************

// ********** Begin Class UOculusXRAsyncAction_QueryAnchors ****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncQueryAnchorsAdvanced); \
	DECLARE_FUNCTION(execOculusXRAsyncQueryAnchors);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_QueryAnchors(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_QueryAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_QueryAnchors_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_QueryAnchors)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_QueryAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_QueryAnchors(UOculusXRAsyncAction_QueryAnchors&&) = delete; \
	UOculusXRAsyncAction_QueryAnchors(const UOculusXRAsyncAction_QueryAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_QueryAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_QueryAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_QueryAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_QueryAnchors();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_171_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_QueryAnchors;

// ********** End Class UOculusXRAsyncAction_QueryAnchors ******************************************

// ********** Begin Class UOculusXRAsyncAction_SetAnchorComponentStatus ****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSetAnchorComponentStatus);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_SetAnchorComponentStatus(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SetAnchorComponentStatus, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SetAnchorComponentStatus_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SetAnchorComponentStatus)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SetAnchorComponentStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SetAnchorComponentStatus(UOculusXRAsyncAction_SetAnchorComponentStatus&&) = delete; \
	UOculusXRAsyncAction_SetAnchorComponentStatus(const UOculusXRAsyncAction_SetAnchorComponentStatus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SetAnchorComponentStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SetAnchorComponentStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SetAnchorComponentStatus) \
	NO_API virtual ~UOculusXRAsyncAction_SetAnchorComponentStatus();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_200_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SetAnchorComponentStatus;

// ********** End Class UOculusXRAsyncAction_SetAnchorComponentStatus ******************************

// ********** Begin Class UOculusXRAsyncAction_SetComponentStatus **********************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSetComponentStatus);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_SetComponentStatus(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SetComponentStatus, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SetComponentStatus_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SetComponentStatus)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SetComponentStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SetComponentStatus(UOculusXRAsyncAction_SetComponentStatus&&) = delete; \
	UOculusXRAsyncAction_SetComponentStatus(const UOculusXRAsyncAction_SetComponentStatus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SetComponentStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SetComponentStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SetComponentStatus) \
	NO_API virtual ~UOculusXRAsyncAction_SetComponentStatus();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_233_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SetComponentStatus;

// ********** End Class UOculusXRAsyncAction_SetComponentStatus ************************************

// ********** Begin Class UOculusXRAsyncAction_ShareAnchors ****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncShareAnchors);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_ShareAnchors(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_ShareAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchors_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_ShareAnchors)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_ShareAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_ShareAnchors(UOculusXRAsyncAction_ShareAnchors&&) = delete; \
	UOculusXRAsyncAction_ShareAnchors(const UOculusXRAsyncAction_ShareAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_ShareAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_ShareAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_ShareAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_ShareAnchors();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_261_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_264_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_ShareAnchors;

// ********** End Class UOculusXRAsyncAction_ShareAnchors ******************************************

// ********** Begin Class UOculusXRAsyncAction_SaveAnchors *****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncSaveAnchors);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_SaveAnchors(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_SaveAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_SaveAnchors_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_SaveAnchors)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_SaveAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_SaveAnchors(UOculusXRAsyncAction_SaveAnchors&&) = delete; \
	UOculusXRAsyncAction_SaveAnchors(const UOculusXRAsyncAction_SaveAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_SaveAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_SaveAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_SaveAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_SaveAnchors();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_293_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_296_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_SaveAnchors;

// ********** End Class UOculusXRAsyncAction_SaveAnchors *******************************************

// ********** Begin Class UOculusXRAsyncAction_EraseAnchors ****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncEraseAnchors);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_EraseAnchors(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_EraseAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_EraseAnchors_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_EraseAnchors)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_EraseAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_EraseAnchors(UOculusXRAsyncAction_EraseAnchors&&) = delete; \
	UOculusXRAsyncAction_EraseAnchors(const UOculusXRAsyncAction_EraseAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_EraseAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_EraseAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_EraseAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_EraseAnchors();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_319_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_EraseAnchors;

// ********** End Class UOculusXRAsyncAction_EraseAnchors ******************************************

// ********** Begin Class UOculusXRAsyncAction_DiscoverAnchors *************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncDiscoverAnchors);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_DiscoverAnchors(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_DiscoverAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverAnchors_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_DiscoverAnchors)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_DiscoverAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_DiscoverAnchors(UOculusXRAsyncAction_DiscoverAnchors&&) = delete; \
	UOculusXRAsyncAction_DiscoverAnchors(const UOculusXRAsyncAction_DiscoverAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_DiscoverAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_DiscoverAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_DiscoverAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_DiscoverAnchors();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_348_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_351_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_DiscoverAnchors;

// ********** End Class UOculusXRAsyncAction_DiscoverAnchors ***************************************

// ********** Begin Class UOculusXRAsyncAction_GetSharedAnchors ************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncGetSharedAnchors);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_GetSharedAnchors(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_GetSharedAnchors, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchors_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_GetSharedAnchors)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_GetSharedAnchors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_GetSharedAnchors(UOculusXRAsyncAction_GetSharedAnchors&&) = delete; \
	UOculusXRAsyncAction_GetSharedAnchors(const UOculusXRAsyncAction_GetSharedAnchors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_GetSharedAnchors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_GetSharedAnchors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_GetSharedAnchors) \
	NO_API virtual ~UOculusXRAsyncAction_GetSharedAnchors();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_378_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_381_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_GetSharedAnchors;

// ********** End Class UOculusXRAsyncAction_GetSharedAnchors **************************************

// ********** Begin Class UOculusXRAsyncAction_ShareAnchorsWithGroups ******************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRShareAnchorsWithGroupsAsync);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_ShareAnchorsWithGroups(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_ShareAnchorsWithGroups, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_ShareAnchorsWithGroups_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_ShareAnchorsWithGroups)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_ShareAnchorsWithGroups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_ShareAnchorsWithGroups(UOculusXRAsyncAction_ShareAnchorsWithGroups&&) = delete; \
	UOculusXRAsyncAction_ShareAnchorsWithGroups(const UOculusXRAsyncAction_ShareAnchorsWithGroups&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_ShareAnchorsWithGroups); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_ShareAnchorsWithGroups); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_ShareAnchorsWithGroups) \
	NO_API virtual ~UOculusXRAsyncAction_ShareAnchorsWithGroups();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_404_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_407_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_ShareAnchorsWithGroups;

// ********** End Class UOculusXRAsyncAction_ShareAnchorsWithGroups ********************************

// ********** Begin Class UOculusXRAsyncAction_GetSharedAnchorsFromGroup ***************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRGetSharedAnchorsFromGroupAsync);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_GetSharedAnchorsFromGroup(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_GetSharedAnchorsFromGroup, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAsyncAction_GetSharedAnchorsFromGroup_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_GetSharedAnchorsFromGroup)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_GetSharedAnchorsFromGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_GetSharedAnchorsFromGroup(UOculusXRAsyncAction_GetSharedAnchorsFromGroup&&) = delete; \
	UOculusXRAsyncAction_GetSharedAnchorsFromGroup(const UOculusXRAsyncAction_GetSharedAnchorsFromGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_GetSharedAnchorsFromGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_GetSharedAnchorsFromGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_GetSharedAnchorsFromGroup) \
	NO_API virtual ~UOculusXRAsyncAction_GetSharedAnchorsFromGroup();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_427_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h_430_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_GetSharedAnchorsFromGroup;

// ********** End Class UOculusXRAsyncAction_GetSharedAnchorsFromGroup *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorLatentActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
