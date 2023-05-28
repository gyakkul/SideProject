// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerScripting_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SequencerScripting;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SequencerScripting()
	{
		if (!Z_Registration_Info_UPackage__Script_SequencerScripting.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SequencerScripting",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB3FB7530,
				0xFDE49251,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SequencerScripting.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SequencerScripting.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SequencerScripting(Z_Construct_UPackage__Script_SequencerScripting, TEXT("/Script/SequencerScripting"), Z_Registration_Info_UPackage__Script_SequencerScripting, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB3FB7530, 0xFDE49251));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
