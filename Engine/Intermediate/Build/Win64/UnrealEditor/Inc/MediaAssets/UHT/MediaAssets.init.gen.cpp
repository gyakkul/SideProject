// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaAssets_init() {}
	MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature();
	MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature();
	MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MediaAssets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MediaAssets()
	{
		if (!Z_Registration_Info_UPackage__Script_MediaAssets.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MediaAssets",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2081C131,
				0x2FB4F84F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MediaAssets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MediaAssets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MediaAssets(Z_Construct_UPackage__Script_MediaAssets, TEXT("/Script/MediaAssets"), Z_Registration_Info_UPackage__Script_MediaAssets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2081C131, 0x2FB4F84F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
