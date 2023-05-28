// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleVision_init() {}
	APPLEVISION_API UFunction* Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AppleVision;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AppleVision()
	{
		if (!Z_Registration_Info_UPackage__Script_AppleVision.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AppleVision",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0C437DD5,
				0x73AAD652,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AppleVision.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AppleVision.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AppleVision(Z_Construct_UPackage__Script_AppleVision, TEXT("/Script/AppleVision"), Z_Registration_Info_UPackage__Script_AppleVision, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0C437DD5, 0x73AAD652));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
