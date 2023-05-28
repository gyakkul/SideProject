// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleImageUtils_init() {}
	APPLEIMAGEUTILS_API UFunction* Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AppleImageUtils;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AppleImageUtils()
	{
		if (!Z_Registration_Info_UPackage__Script_AppleImageUtils.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AppleImageUtils_AppleImageConversionDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AppleImageUtils",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB4037AC7,
				0xA04DF372,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AppleImageUtils.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AppleImageUtils.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AppleImageUtils(Z_Construct_UPackage__Script_AppleImageUtils, TEXT("/Script/AppleImageUtils"), Z_Registration_Info_UPackage__Script_AppleImageUtils, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB4037AC7, 0xA04DF372));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
