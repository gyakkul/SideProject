// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectLinkExtension_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DirectLinkExtension;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DirectLinkExtension()
	{
		if (!Z_Registration_Info_UPackage__Script_DirectLinkExtension.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DirectLinkExtension",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x303A04A5,
				0x65E221C9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DirectLinkExtension.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DirectLinkExtension.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DirectLinkExtension(Z_Construct_UPackage__Script_DirectLinkExtension, TEXT("/Script/DirectLinkExtension"), Z_Registration_Info_UPackage__Script_DirectLinkExtension, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x303A04A5, 0x65E221C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
