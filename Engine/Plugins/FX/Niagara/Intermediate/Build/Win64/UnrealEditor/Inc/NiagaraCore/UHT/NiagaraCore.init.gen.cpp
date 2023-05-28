// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NiagaraCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NiagaraCore()
	{
		if (!Z_Registration_Info_UPackage__Script_NiagaraCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NiagaraCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB05AD7BB,
				0x29059F61,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NiagaraCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NiagaraCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NiagaraCore(Z_Construct_UPackage__Script_NiagaraCore, TEXT("/Script/NiagaraCore"), Z_Registration_Info_UPackage__Script_NiagaraCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB05AD7BB, 0x29059F61));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
