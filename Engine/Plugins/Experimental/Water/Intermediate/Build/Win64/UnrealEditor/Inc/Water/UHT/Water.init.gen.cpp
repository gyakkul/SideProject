// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWater_init() {}
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Water;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Water()
	{
		if (!Z_Registration_Info_UPackage__Script_Water.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Water_OnCameraUnderwaterStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Water_OnWaterScalabilityChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Water",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE6C19962,
				0xE49B5202,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Water.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Water.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Water(Z_Construct_UPackage__Script_Water, TEXT("/Script/Water"), Z_Registration_Info_UPackage__Script_Water, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE6C19962, 0xE49B5202));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
