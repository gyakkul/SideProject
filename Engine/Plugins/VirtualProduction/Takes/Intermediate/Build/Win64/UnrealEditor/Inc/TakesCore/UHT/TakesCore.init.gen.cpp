// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakesCore_init() {}
	TAKESCORE_API UFunction* Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature();
	TAKESCORE_API UFunction* Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TakesCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TakesCore()
	{
		if (!Z_Registration_Info_UPackage__Script_TakesCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TakesCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0x06FE903F,
				0x67D4C8C8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TakesCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TakesCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TakesCore(Z_Construct_UPackage__Script_TakesCore, TEXT("/Script/TakesCore"), Z_Registration_Info_UPackage__Script_TakesCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x06FE903F, 0x67D4C8C8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
