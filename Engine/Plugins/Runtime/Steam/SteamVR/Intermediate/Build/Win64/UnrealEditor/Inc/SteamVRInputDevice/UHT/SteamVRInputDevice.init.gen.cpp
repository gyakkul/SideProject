// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRInputDevice_init() {}
	STEAMVRINPUTDEVICE_API UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature();
	STEAMVRINPUTDEVICE_API UFunction* Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamVRInputDevice;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamVRInputDevice.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingActivatedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamVRInputDevice_ComponentTrackingDeactivatedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamVRInputDevice",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB2515B7B,
				0x007BB25A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamVRInputDevice.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamVRInputDevice.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamVRInputDevice(Z_Construct_UPackage__Script_SteamVRInputDevice, TEXT("/Script/SteamVRInputDevice"), Z_Registration_Info_UPackage__Script_SteamVRInputDevice, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB2515B7B, 0x007BB25A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
