// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserClientLibrary_init() {}
	MULTIUSERCLIENTLIBRARY_API UFunction* Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiUserClientLibrary;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiUserClientLibrary()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiUserClientLibrary.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiUserClientLibrary_OnPackageSavedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiUserClientLibrary",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1033AF43,
				0xC56E2C65,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiUserClientLibrary.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiUserClientLibrary.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiUserClientLibrary(Z_Construct_UPackage__Script_MultiUserClientLibrary, TEXT("/Script/MultiUserClientLibrary"), Z_Registration_Info_UPackage__Script_MultiUserClientLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1033AF43, 0xC56E2C65));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
