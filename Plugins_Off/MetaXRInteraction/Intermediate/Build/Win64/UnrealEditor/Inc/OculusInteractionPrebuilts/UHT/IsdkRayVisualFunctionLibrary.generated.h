// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractorVisuals/IsdkRayVisualFunctionLibrary.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRayVisualFunctionLibrary_generated_h
#error "IsdkRayVisualFunctionLibrary.generated.h already included, missing '#pragma once' in IsdkRayVisualFunctionLibrary.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRayVisualFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkRayInteractor;
class UIsdkRayVisualComponent;

// ********** Begin Class UIsdkRayVisualFunctionLibrary ********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateRayVisualWithRayInteractor);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRayVisualFunctionLibrary(); \
	friend struct Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRayVisualFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRayVisualFunctionLibrary)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkRayVisualFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRayVisualFunctionLibrary(UIsdkRayVisualFunctionLibrary&&) = delete; \
	UIsdkRayVisualFunctionLibrary(const UIsdkRayVisualFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRayVisualFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRayVisualFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkRayVisualFunctionLibrary) \
	NO_API virtual ~UIsdkRayVisualFunctionLibrary();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_42_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRayVisualFunctionLibrary;

// ********** End Class UIsdkRayVisualFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
