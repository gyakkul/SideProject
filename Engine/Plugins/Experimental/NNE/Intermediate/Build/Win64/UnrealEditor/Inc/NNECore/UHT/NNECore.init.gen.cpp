// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NNECore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NNECore()
	{
		if (!Z_Registration_Info_UPackage__Script_NNECore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NNECore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBE458DF2,
				0x2339A9CE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NNECore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NNECore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NNECore(Z_Construct_UPackage__Script_NNECore, TEXT("/Script/NNECore"), Z_Registration_Info_UPackage__Script_NNECore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBE458DF2, 0x2339A9CE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
