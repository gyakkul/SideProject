// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAssetCache_init() {}
	RUNTIMEASSETCACHE_API UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature();
	RUNTIMEASSETCACHE_API UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeAssetCache;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeAssetCache()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeAssetCache.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RuntimeAssetCache",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE8DDD908,
				0x66C0A5DF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeAssetCache.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RuntimeAssetCache.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeAssetCache(Z_Construct_UPackage__Script_RuntimeAssetCache, TEXT("/Script/RuntimeAssetCache"), Z_Registration_Info_UPackage__Script_RuntimeAssetCache, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE8DDD908, 0x66C0A5DF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
