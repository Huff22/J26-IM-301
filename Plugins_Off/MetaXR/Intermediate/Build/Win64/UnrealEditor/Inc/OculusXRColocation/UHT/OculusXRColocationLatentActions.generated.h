// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRColocationLatentActions.h"

#ifdef OCULUSXRCOLOCATION_OculusXRColocationLatentActions_generated_h
#error "OculusXRColocationLatentActions.generated.h already included, missing '#pragma once' in OculusXRColocationLatentActions.h"
#endif
#define OCULUSXRCOLOCATION_OculusXRColocationLatentActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOculusXRAsyncAction_DiscoverColocationSessions;
class UOculusXRAsyncAction_StartColocationSessionAdvertisement;
class UOculusXRAsyncAction_StopColocationSessionAdvertisement;
struct FOculusXRColocationSession;

// ********** Begin Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete ********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_11_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationDiscoveryComplete_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationDiscoveryComplete, bool Success, FOculusXRColocationSession const& Session, TArray<FOculusXRColocationSession> const& FoundSessions);


// ********** End Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete **********************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationSessionFound *************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_12_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationSessionFound_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationSessionFound, bool Success, FOculusXRColocationSession const& Session, TArray<FOculusXRColocationSession> const& FoundSessions);


// ********** End Delegate FOculusXR_LatentAction_ColocationSessionFound ***************************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted *****************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_13_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationAdvertisementStarted_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationAdvertisementStarted, bool Success, FOculusXRColocationSession const& Session);


// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted *******************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped *****************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_14_DELEGATE \
OCULUSXRCOLOCATION_API void FOculusXR_LatentAction_ColocationAdvertisementStopped_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationAdvertisementStopped, bool Success);


// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped *******************

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions **************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncDiscoverColocationSessions);


OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_DiscoverColocationSessions(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_DiscoverColocationSessions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_DiscoverColocationSessions)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_DiscoverColocationSessions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_DiscoverColocationSessions(UOculusXRAsyncAction_DiscoverColocationSessions&&) = delete; \
	UOculusXRAsyncAction_DiscoverColocationSessions(const UOculusXRAsyncAction_DiscoverColocationSessions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_DiscoverColocationSessions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_DiscoverColocationSessions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_DiscoverColocationSessions) \
	NO_API virtual ~UOculusXRAsyncAction_DiscoverColocationSessions();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_19_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_DiscoverColocationSessions;

// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions ****************************

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *****************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncStartColocationSessionAdvertisement);


OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_StartColocationSessionAdvertisement(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_StartColocationSessionAdvertisement, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_StartColocationSessionAdvertisement)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_StartColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_StartColocationSessionAdvertisement(UOculusXRAsyncAction_StartColocationSessionAdvertisement&&) = delete; \
	UOculusXRAsyncAction_StartColocationSessionAdvertisement(const UOculusXRAsyncAction_StartColocationSessionAdvertisement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_StartColocationSessionAdvertisement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_StartColocationSessionAdvertisement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_StartColocationSessionAdvertisement) \
	NO_API virtual ~UOculusXRAsyncAction_StartColocationSessionAdvertisement();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_43_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_StartColocationSessionAdvertisement;

// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *******************

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ******************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusXRAsyncStopColocationSessionAdvertisement);


OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_StopColocationSessionAdvertisement(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_StopColocationSessionAdvertisement, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRColocation"), Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_StopColocationSessionAdvertisement)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_StopColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_StopColocationSessionAdvertisement(UOculusXRAsyncAction_StopColocationSessionAdvertisement&&) = delete; \
	UOculusXRAsyncAction_StopColocationSessionAdvertisement(const UOculusXRAsyncAction_StopColocationSessionAdvertisement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_StopColocationSessionAdvertisement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_StopColocationSessionAdvertisement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_StopColocationSessionAdvertisement) \
	NO_API virtual ~UOculusXRAsyncAction_StopColocationSessionAdvertisement();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_65_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_StopColocationSessionAdvertisement;

// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
