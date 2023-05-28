// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistry_init() {}
	DATAREGISTRY_API UFunction* Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DataRegistry;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DataRegistry()
	{
		if (!Z_Registration_Info_UPackage__Script_DataRegistry.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DataRegistry",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x79AAADB5,
				0x99735A6A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DataRegistry.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DataRegistry.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DataRegistry(Z_Construct_UPackage__Script_DataRegistry, TEXT("/Script/DataRegistry"), Z_Registration_Info_UPackage__Script_DataRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x79AAADB5, 0x99735A6A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
