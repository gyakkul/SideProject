// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreBase_init() {}
	GOOGLEARCOREBASE_API UFunction* Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GoogleARCoreBase;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase()
	{
		if (!Z_Registration_Info_UPackage__Script_GoogleARCoreBase.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GoogleARCoreBase",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4357A494,
				0x2FD84DA6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GoogleARCoreBase.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GoogleARCoreBase.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GoogleARCoreBase(Z_Construct_UPackage__Script_GoogleARCoreBase, TEXT("/Script/GoogleARCoreBase"), Z_Registration_Info_UPackage__Script_GoogleARCoreBase, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4357A494, 0x2FD84DA6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
