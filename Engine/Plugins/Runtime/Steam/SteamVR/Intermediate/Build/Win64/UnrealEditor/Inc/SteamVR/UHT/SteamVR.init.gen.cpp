// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVR_init() {}
	STEAMVR_API UFunction* Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamVR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamVR()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamVR.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamVR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6339D9EF,
				0x3C64F6E6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamVR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamVR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamVR(Z_Construct_UPackage__Script_SteamVR, TEXT("/Script/SteamVR"), Z_Registration_Info_UPackage__Script_SteamVR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6339D9EF, 0x3C64F6E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
