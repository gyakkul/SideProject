// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary_init() {}
	LOCATIONSERVICESBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LocationServicesBPLibrary()
	{
		if (!Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LocationServicesBPLibrary",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDA5B6A8B,
				0xACF6D22F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LocationServicesBPLibrary(Z_Construct_UPackage__Script_LocationServicesBPLibrary, TEXT("/Script/LocationServicesBPLibrary"), Z_Registration_Info_UPackage__Script_LocationServicesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA5B6A8B, 0xACF6D22F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
