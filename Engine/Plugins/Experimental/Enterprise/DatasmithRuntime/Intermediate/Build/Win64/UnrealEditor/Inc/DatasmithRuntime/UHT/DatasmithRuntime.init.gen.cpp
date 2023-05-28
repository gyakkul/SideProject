// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithRuntime_init() {}
	DATASMITHRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DatasmithRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DatasmithRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_DatasmithRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DatasmithRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBB6DA684,
				0x95DCE571,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DatasmithRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DatasmithRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DatasmithRuntime(Z_Construct_UPackage__Script_DatasmithRuntime, TEXT("/Script/DatasmithRuntime"), Z_Registration_Info_UPackage__Script_DatasmithRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB6DA684, 0x95DCE571));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
