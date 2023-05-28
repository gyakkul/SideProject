// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApexDestruction_init() {}
	APEXDESTRUCTION_API UFunction* Z_Construct_UDelegateFunction_ApexDestruction_ActorFractureSignature__DelegateSignature();
	APEXDESTRUCTION_API UFunction* Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ApexDestruction;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ApexDestruction()
	{
		if (!Z_Registration_Info_UPackage__Script_ApexDestruction.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ApexDestruction_ActorFractureSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ApexDestruction",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD78B3958,
				0xEEFB0E53,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ApexDestruction.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ApexDestruction.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ApexDestruction(Z_Construct_UPackage__Script_ApexDestruction, TEXT("/Script/ApexDestruction"), Z_Registration_Info_UPackage__Script_ApexDestruction, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD78B3958, 0xEEFB0E53));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
