// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceCodeAccess_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SourceCodeAccess;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SourceCodeAccess()
	{
		if (!Z_Registration_Info_UPackage__Script_SourceCodeAccess.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SourceCodeAccess",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x088A9FBF,
				0xD281EB32,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SourceCodeAccess.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SourceCodeAccess.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SourceCodeAccess(Z_Construct_UPackage__Script_SourceCodeAccess, TEXT("/Script/SourceCodeAccess"), Z_Registration_Info_UPackage__Script_SourceCodeAccess, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x088A9FBF, 0xD281EB32));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
