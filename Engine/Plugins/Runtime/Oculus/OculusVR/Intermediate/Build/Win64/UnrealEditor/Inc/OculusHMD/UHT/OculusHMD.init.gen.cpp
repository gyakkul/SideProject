// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusHMD_init() {}
	OCULUSHMD_API UFunction* Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusHMD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusHMD()
	{
		if (!Z_Registration_Info_UPackage__Script_OculusHMD.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UDEPRECATED_UOculusEventComponent_OculusDisplayRefreshRateChangedEventDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OculusHMD",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA5558A47,
				0x1D4600B7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusHMD.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OculusHMD.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusHMD(Z_Construct_UPackage__Script_OculusHMD, TEXT("/Script/OculusHMD"), Z_Registration_Info_UPackage__Script_OculusHMD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA5558A47, 0x1D4600B7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
