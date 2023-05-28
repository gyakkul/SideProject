// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTools_init() {}
	ASSETTOOLS_API UFunction* Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetTools;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetTools()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetTools.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetTools",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000080,
				0x507EA2CC,
				0x269AAF16,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetTools.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetTools.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetTools(Z_Construct_UPackage__Script_AssetTools, TEXT("/Script/AssetTools"), Z_Registration_Info_UPackage__Script_AssetTools, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x507EA2CC, 0x269AAF16));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
