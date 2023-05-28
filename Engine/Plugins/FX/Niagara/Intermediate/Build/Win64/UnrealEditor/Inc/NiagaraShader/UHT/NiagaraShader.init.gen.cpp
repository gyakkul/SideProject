// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraShader_init() {}
	NIAGARASHADER_API UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NiagaraShader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NiagaraShader()
	{
		if (!Z_Registration_Info_UPackage__Script_NiagaraShader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NiagaraShader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFEA9A1BE,
				0x83E949A7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NiagaraShader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NiagaraShader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NiagaraShader(Z_Construct_UPackage__Script_NiagaraShader, TEXT("/Script/NiagaraShader"), Z_Registration_Info_UPackage__Script_NiagaraShader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFEA9A1BE, 0x83E949A7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
