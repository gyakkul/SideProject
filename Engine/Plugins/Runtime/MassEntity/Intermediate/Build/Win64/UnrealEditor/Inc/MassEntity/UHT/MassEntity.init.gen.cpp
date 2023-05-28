// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntity_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MassEntity;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MassEntity()
	{
		if (!Z_Registration_Info_UPackage__Script_MassEntity.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MassEntity",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE716A5AD,
				0x84D93FDA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MassEntity.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MassEntity.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MassEntity(Z_Construct_UPackage__Script_MassEntity, TEXT("/Script/MassEntity"), Z_Registration_Info_UPackage__Script_MassEntity, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE716A5AD, 0x84D93FDA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
