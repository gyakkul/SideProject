// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascadeToNiagaraConverter_init() {}
	CASCADETONIAGARACONVERTER_API UFunction* Z_Construct_UDelegateFunction_UNiagaraEmitterConversionContext_OnPasteScript__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CascadeToNiagaraConverter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CascadeToNiagaraConverter()
	{
		if (!Z_Registration_Info_UPackage__Script_CascadeToNiagaraConverter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UNiagaraEmitterConversionContext_OnPasteScript__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CascadeToNiagaraConverter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x5F9CDF17,
				0xDBD7E172,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CascadeToNiagaraConverter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CascadeToNiagaraConverter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CascadeToNiagaraConverter(Z_Construct_UPackage__Script_CascadeToNiagaraConverter, TEXT("/Script/CascadeToNiagaraConverter"), Z_Registration_Info_UPackage__Script_CascadeToNiagaraConverter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F9CDF17, 0xDBD7E172));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
