// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinearTimecode_init() {}
	LINEARTIMECODE_API UFunction* Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LinearTimecode;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LinearTimecode()
	{
		if (!Z_Registration_Info_UPackage__Script_LinearTimecode.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LinearTimecode",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFA0B0644,
				0xDDBF41BF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LinearTimecode.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LinearTimecode.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LinearTimecode(Z_Construct_UPackage__Script_LinearTimecode, TEXT("/Script/LinearTimecode"), Z_Registration_Info_UPackage__Script_LinearTimecode, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFA0B0644, 0xDDBF41BF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
