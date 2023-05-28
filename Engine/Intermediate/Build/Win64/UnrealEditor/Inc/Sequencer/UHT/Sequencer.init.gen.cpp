// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Sequencer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Sequencer()
	{
		if (!Z_Registration_Info_UPackage__Script_Sequencer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Sequencer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xB471DD17,
				0x2EA43E88,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Sequencer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Sequencer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Sequencer(Z_Construct_UPackage__Script_Sequencer, TEXT("/Script/Sequencer"), Z_Registration_Info_UPackage__Script_Sequencer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB471DD17, 0x2EA43E88));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
