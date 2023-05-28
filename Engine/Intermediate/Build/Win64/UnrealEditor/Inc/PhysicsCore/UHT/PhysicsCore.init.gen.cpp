// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PhysicsCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PhysicsCore()
	{
		if (!Z_Registration_Info_UPackage__Script_PhysicsCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PhysicsCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x50AFB560,
				0x93DD9009,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PhysicsCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PhysicsCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PhysicsCore(Z_Construct_UPackage__Script_PhysicsCore, TEXT("/Script/PhysicsCore"), Z_Registration_Info_UPackage__Script_PhysicsCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x50AFB560, 0x93DD9009));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
