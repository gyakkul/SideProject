// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobilePatchingUtils_init() {}
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature();
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature();
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature();
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MobilePatchingUtils;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MobilePatchingUtils()
	{
		if (!Z_Registration_Info_UPackage__Script_MobilePatchingUtils.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MobilePatchingUtils",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x68AD4FB3,
				0x9495D450,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MobilePatchingUtils.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MobilePatchingUtils.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MobilePatchingUtils(Z_Construct_UPackage__Script_MobilePatchingUtils, TEXT("/Script/MobilePatchingUtils"), Z_Registration_Info_UPackage__Script_MobilePatchingUtils, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x68AD4FB3, 0x9495D450));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
