// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusInteractionPrebuilts_init() {}
	OCULUSINTERACTIONPREBUILTS_API UFunction* Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusInteractionPrebuilts;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts()
	{
		if (!Z_Registration_Info_UPackage__Script_OculusInteractionPrebuilts.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OculusInteractionPrebuilts",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0B530D1D,
				0x41C3B6DA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusInteractionPrebuilts.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OculusInteractionPrebuilts.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusInteractionPrebuilts(Z_Construct_UPackage__Script_OculusInteractionPrebuilts, TEXT("/Script/OculusInteractionPrebuilts"), Z_Registration_Info_UPackage__Script_OculusInteractionPrebuilts, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0B530D1D, 0x41C3B6DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
