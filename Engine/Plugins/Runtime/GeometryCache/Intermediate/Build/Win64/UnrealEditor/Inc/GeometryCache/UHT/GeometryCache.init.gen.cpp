// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCache_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeometryCache;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeometryCache()
	{
		if (!Z_Registration_Info_UPackage__Script_GeometryCache.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometryCache",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE4CC8F00,
				0x361AE8E0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeometryCache.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeometryCache.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeometryCache(Z_Construct_UPackage__Script_GeometryCache, TEXT("/Script/GeometryCache"), Z_Registration_Info_UPackage__Script_GeometryCache, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4CC8F00, 0x361AE8E0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
