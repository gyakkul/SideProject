// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NetCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NetCore()
	{
		if (!Z_Registration_Info_UPackage__Script_NetCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NetCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9475D0BF,
				0xE5B2DB7B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NetCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NetCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NetCore(Z_Construct_UPackage__Script_NetCore, TEXT("/Script/NetCore"), Z_Registration_Info_UPackage__Script_NetCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9475D0BF, 0xE5B2DB7B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
