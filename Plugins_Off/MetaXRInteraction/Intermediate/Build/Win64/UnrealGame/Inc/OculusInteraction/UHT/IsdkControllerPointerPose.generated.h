// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkControllerPointerPose.h"

#ifdef OCULUSINTERACTION_IsdkControllerPointerPose_generated_h
#error "IsdkControllerPointerPose.generated.h already included, missing '#pragma once' in IsdkControllerPointerPose.h"
#endif
#define OCULUSINTERACTION_IsdkControllerPointerPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkControllerPointerPose ***********************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerPointerPose_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkControllerPointerPose(); \
	friend struct Z_Construct_UClass_UIsdkControllerPointerPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerPointerPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkControllerPointerPose, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkControllerPointerPose_NoRegister) \
	DECLARE_SERIALIZER(UIsdkControllerPointerPose) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkControllerPointerPose*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkControllerPointerPose(UIsdkControllerPointerPose&&) = delete; \
	UIsdkControllerPointerPose(const UIsdkControllerPointerPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkControllerPointerPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkControllerPointerPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkControllerPointerPose) \
	NO_API virtual ~UIsdkControllerPointerPose();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h_30_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h_34_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkControllerPointerPose;

// ********** End Class UIsdkControllerPointerPose *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
