// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaIOCore_init() {}
	MEDIAIOCORE_API UFunction* Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MediaIOCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MediaIOCore()
	{
		if (!Z_Registration_Info_UPackage__Script_MediaIOCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MediaIOCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5220A06E,
				0x99B0254B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MediaIOCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MediaIOCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MediaIOCore(Z_Construct_UPackage__Script_MediaIOCore, TEXT("/Script/MediaIOCore"), Z_Registration_Info_UPackage__Script_MediaIOCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5220A06E, 0x99B0254B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
