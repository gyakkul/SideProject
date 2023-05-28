// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusMR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusMR()
	{
		if (!Z_Registration_Info_UPackage__Script_OculusMR.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OculusMR",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFE42CBE0,
				0x54432FB4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusMR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OculusMR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusMR(Z_Construct_UPackage__Script_OculusMR, TEXT("/Script/OculusMR"), Z_Registration_Info_UPackage__Script_OculusMR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE42CBE0, 0x54432FB4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
