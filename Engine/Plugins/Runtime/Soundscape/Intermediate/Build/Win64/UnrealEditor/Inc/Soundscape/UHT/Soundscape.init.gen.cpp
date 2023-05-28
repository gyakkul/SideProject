// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundscape_init() {}
	SOUNDSCAPE_API UFunction* Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Soundscape;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Soundscape()
	{
		if (!Z_Registration_Info_UPackage__Script_Soundscape.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Soundscape",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAAB63DCE,
				0xCD903F7C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Soundscape.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Soundscape.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Soundscape(Z_Construct_UPackage__Script_Soundscape, TEXT("/Script/Soundscape"), Z_Registration_Info_UPackage__Script_Soundscape, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAAB63DCE, 0xCD903F7C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
