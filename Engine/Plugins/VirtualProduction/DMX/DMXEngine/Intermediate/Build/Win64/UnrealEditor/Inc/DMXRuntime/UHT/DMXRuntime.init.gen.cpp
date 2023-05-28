// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXRuntime_init() {}
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DMXRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DMXRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_DMXRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DMXRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAF17EC6C,
				0xDFE1899E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DMXRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DMXRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DMXRuntime(Z_Construct_UPackage__Script_DMXRuntime, TEXT("/Script/DMXRuntime"), Z_Registration_Info_UPackage__Script_DMXRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAF17EC6C, 0xDFE1899E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
