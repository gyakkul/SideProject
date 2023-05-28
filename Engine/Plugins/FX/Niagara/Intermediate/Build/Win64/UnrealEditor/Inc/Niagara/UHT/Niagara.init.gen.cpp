// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagara_init() {}
	NIAGARA_API UFunction* Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature();
	NIAGARA_API UFunction* Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Niagara;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Niagara()
	{
		if (!Z_Registration_Info_UPackage__Script_Niagara.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Niagara",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3F929AA9,
				0xE1097E26,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Niagara.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Niagara.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Niagara(Z_Construct_UPackage__Script_Niagara, TEXT("/Script/Niagara"), Z_Registration_Info_UPackage__Script_Niagara, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F929AA9, 0xE1097E26));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
