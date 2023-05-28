// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamCore_init() {}
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VCamCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VCamCore()
	{
		if (!Z_Registration_Info_UPackage__Script_VCamCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVCamOutputProviderBase_ActivationDelegate_Blueprint__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVCamWidget_ConnectionsReinitializedDelegate_Blueprint__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VCamCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x20D4328C,
				0x6B9708D4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VCamCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VCamCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VCamCore(Z_Construct_UPackage__Script_VCamCore, TEXT("/Script/VCamCore"), Z_Registration_Info_UPackage__Script_VCamCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x20D4328C, 0x6B9708D4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
