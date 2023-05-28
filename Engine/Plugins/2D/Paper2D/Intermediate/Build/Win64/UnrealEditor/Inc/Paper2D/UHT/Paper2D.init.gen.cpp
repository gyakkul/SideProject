// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaper2D_init() {}
	PAPER2D_API UFunction* Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Paper2D;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Paper2D()
	{
		if (!Z_Registration_Info_UPackage__Script_Paper2D.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Paper2D",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x71999E1C,
				0xDC3AD96B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Paper2D.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Paper2D.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Paper2D(Z_Construct_UPackage__Script_Paper2D, TEXT("/Script/Paper2D"), Z_Registration_Info_UPackage__Script_Paper2D, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x71999E1C, 0xDC3AD96B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
