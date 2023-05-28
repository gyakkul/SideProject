// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalServices_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PortalServices;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PortalServices()
	{
		if (!Z_Registration_Info_UPackage__Script_PortalServices.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PortalServices",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x288F23F5,
				0x087DEAF4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PortalServices.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PortalServices.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PortalServices(Z_Construct_UPackage__Script_PortalServices, TEXT("/Script/PortalServices"), Z_Registration_Info_UPackage__Script_PortalServices, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x288F23F5, 0x087DEAF4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
