// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemOculus_init() {}
	ONLINESUBSYSTEMOCULUS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature();
	ONLINESUBSYSTEMOCULUS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature();
	ONLINESUBSYSTEMOCULUS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OnlineSubsystemOculus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus()
	{
		if (!Z_Registration_Info_UPackage__Script_OnlineSubsystemOculus.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OnlineSubsystemOculus",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x640F2234,
				0x5C622BEC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OnlineSubsystemOculus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OnlineSubsystemOculus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OnlineSubsystemOculus(Z_Construct_UPackage__Script_OnlineSubsystemOculus, TEXT("/Script/OnlineSubsystemOculus"), Z_Registration_Info_UPackage__Script_OnlineSubsystemOculus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x640F2234, 0x5C622BEC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
