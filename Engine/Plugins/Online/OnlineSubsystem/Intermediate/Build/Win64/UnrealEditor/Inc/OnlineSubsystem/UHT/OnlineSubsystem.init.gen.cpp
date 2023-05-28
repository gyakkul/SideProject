// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystem_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OnlineSubsystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OnlineSubsystem()
	{
		if (!Z_Registration_Info_UPackage__Script_OnlineSubsystem.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OnlineSubsystem",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE28D7BC6,
				0x8202084F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OnlineSubsystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OnlineSubsystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OnlineSubsystem(Z_Construct_UPackage__Script_OnlineSubsystem, TEXT("/Script/OnlineSubsystem"), Z_Registration_Info_UPackage__Script_OnlineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE28D7BC6, 0x8202084F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
