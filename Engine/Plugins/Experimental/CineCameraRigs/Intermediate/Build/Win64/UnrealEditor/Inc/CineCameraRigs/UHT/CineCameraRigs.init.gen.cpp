// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraRigs_init() {}
	CINECAMERARIGS_API UFunction* Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CineCameraRigs;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CineCameraRigs()
	{
		if (!Z_Registration_Info_UPackage__Script_CineCameraRigs.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UCineSplineComponent_OnSplineEdited_BP__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CineCameraRigs",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCAD3E356,
				0x2B21F074,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CineCameraRigs.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CineCameraRigs.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CineCameraRigs(Z_Construct_UPackage__Script_CineCameraRigs, TEXT("/Script/CineCameraRigs"), Z_Registration_Info_UPackage__Script_CineCameraRigs, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCAD3E356, 0x2B21F074));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
