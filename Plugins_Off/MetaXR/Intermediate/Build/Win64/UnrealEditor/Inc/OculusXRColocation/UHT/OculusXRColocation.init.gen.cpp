// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRColocation_init() {}
	OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature();
	OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature();
	OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature();
	OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusXRColocation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusXRColocation()
	{
		if (!Z_Registration_Info_UPackage__Script_OculusXRColocation.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OculusXRColocation",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1D986E06,
				0xA29A28EC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusXRColocation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OculusXRColocation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusXRColocation(Z_Construct_UPackage__Script_OculusXRColocation, TEXT("/Script/OculusXRColocation"), Z_Registration_Info_UPackage__Script_OculusXRColocation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1D986E06, 0xA29A28EC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
