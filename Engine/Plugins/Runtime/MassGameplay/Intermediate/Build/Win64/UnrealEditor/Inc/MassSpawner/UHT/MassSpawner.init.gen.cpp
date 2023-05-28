// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSpawner_init() {}
	MASSSPAWNER_API UFunction* Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature();
	MASSSPAWNER_API UFunction* Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MassSpawner;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MassSpawner()
	{
		if (!Z_Registration_Info_UPackage__Script_MassSpawner.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MassSpawner",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x724A00C4,
				0x2C1370BD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MassSpawner.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MassSpawner.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MassSpawner(Z_Construct_UPackage__Script_MassSpawner, TEXT("/Script/MassSpawner"), Z_Registration_Info_UPackage__Script_MassSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x724A00C4, 0x2C1370BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
