// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectLink_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DirectLink;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DirectLink()
	{
		if (!Z_Registration_Info_UPackage__Script_DirectLink.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DirectLink",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x124224FB,
				0xF46FF8BC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DirectLink.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DirectLink.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DirectLink(Z_Construct_UPackage__Script_DirectLink, TEXT("/Script/DirectLink"), Z_Registration_Info_UPackage__Script_DirectLink, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x124224FB, 0xF46FF8BC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
