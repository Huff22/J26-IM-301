// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorComponents.h"

#ifdef OCULUSXRANCHORS_OculusXRAnchorComponents_generated_h
#error "OculusXRAnchorComponents.generated.h already included, missing '#pragma once' in OculusXRAnchorComponents.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorComponents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOculusXRSpaceComponentType : uint8;
struct FOculusXRUUID;

// ********** Begin Class UOculusXRBaseAnchorComponent *********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execIsComponentEnabled);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRBaseAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRBaseAnchorComponent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRBaseAnchorComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRBaseAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRBaseAnchorComponent(UOculusXRBaseAnchorComponent&&) = delete; \
	UOculusXRBaseAnchorComponent(const UOculusXRBaseAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRBaseAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRBaseAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRBaseAnchorComponent) \
	NO_API virtual ~UOculusXRBaseAnchorComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_8_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRBaseAnchorComponent;

// ********** End Class UOculusXRBaseAnchorComponent ***********************************************

// ********** Begin Class UOculusXRLocatableAnchorComponent ****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransform);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRLocatableAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRLocatableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRLocatableAnchorComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRLocatableAnchorComponent(UOculusXRLocatableAnchorComponent&&) = delete; \
	UOculusXRLocatableAnchorComponent(const UOculusXRLocatableAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRLocatableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRLocatableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRLocatableAnchorComponent) \
	NO_API virtual ~UOculusXRLocatableAnchorComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_34_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRLocatableAnchorComponent;

// ********** End Class UOculusXRLocatableAnchorComponent ******************************************

// ********** Begin Class UOculusXRSpaceContainerAnchorComponent ***********************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUUIDs);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRSpaceContainerAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRSpaceContainerAnchorComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRSpaceContainerAnchorComponent(UOculusXRSpaceContainerAnchorComponent&&) = delete; \
	UOculusXRSpaceContainerAnchorComponent(const UOculusXRSpaceContainerAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSpaceContainerAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSpaceContainerAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSpaceContainerAnchorComponent) \
	NO_API virtual ~UOculusXRSpaceContainerAnchorComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_48_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRSpaceContainerAnchorComponent;

// ********** End Class UOculusXRSpaceContainerAnchorComponent *************************************

// ********** Begin Class UOculusXRSharableAnchorComponent *****************************************
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSharableAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRSharableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRSharableAnchorComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRSharableAnchorComponent(UOculusXRSharableAnchorComponent&&) = delete; \
	UOculusXRSharableAnchorComponent(const UOculusXRSharableAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSharableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSharableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSharableAnchorComponent) \
	NO_API virtual ~UOculusXRSharableAnchorComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_62_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRSharableAnchorComponent;

// ********** End Class UOculusXRSharableAnchorComponent *******************************************

// ********** Begin Class UOculusXRStorableAnchorComponent *****************************************
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRStorableAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRStorableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRStorableAnchorComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRStorableAnchorComponent(UOculusXRStorableAnchorComponent&&) = delete; \
	UOculusXRStorableAnchorComponent(const UOculusXRStorableAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStorableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStorableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRStorableAnchorComponent) \
	NO_API virtual ~UOculusXRStorableAnchorComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_73_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRStorableAnchorComponent;

// ********** End Class UOculusXRStorableAnchorComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
