// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowser_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ContentBrowser;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ContentBrowser()
	{
		if (!Z_Registration_Info_UPackage__Script_ContentBrowser.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ContentBrowser",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xB189E2AE,
				0x12A4FBA0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ContentBrowser.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ContentBrowser.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ContentBrowser(Z_Construct_UPackage__Script_ContentBrowser, TEXT("/Script/ContentBrowser"), Z_Registration_Info_UPackage__Script_ContentBrowser, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB189E2AE, 0x12A4FBA0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
