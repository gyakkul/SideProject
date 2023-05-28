// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameplay_init() {}
	MODULARGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularGameplay;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularGameplay()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularGameplay.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularGameplay",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF99BA445,
				0xEB9F9120,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularGameplay.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModularGameplay.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularGameplay(Z_Construct_UPackage__Script_ModularGameplay, TEXT("/Script/ModularGameplay"), Z_Registration_Info_UPackage__Script_ModularGameplay, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF99BA445, 0xEB9F9120));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
