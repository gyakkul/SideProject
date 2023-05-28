// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalRpcRegistry_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ExternalRpcRegistry;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ExternalRpcRegistry()
	{
		if (!Z_Registration_Info_UPackage__Script_ExternalRpcRegistry.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ExternalRpcRegistry",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x742D89BE,
				0xC18FACB2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ExternalRpcRegistry.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ExternalRpcRegistry.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ExternalRpcRegistry(Z_Construct_UPackage__Script_ExternalRpcRegistry, TEXT("/Script/ExternalRpcRegistry"), Z_Registration_Info_UPackage__Script_ExternalRpcRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x742D89BE, 0xC18FACB2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
