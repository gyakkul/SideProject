// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayVolume_init() {}
	AUDIOGAMEPLAYVOLUME_API UFunction* Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature();
	AUDIOGAMEPLAYVOLUME_API UFunction* Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioGameplayVolume;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioGameplayVolume.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplayVolume_OnAudioGameplayVolumeProxyStateChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioGameplayVolume",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA7445D31,
				0x78248A5C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioGameplayVolume.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioGameplayVolume.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioGameplayVolume(Z_Construct_UPackage__Script_AudioGameplayVolume, TEXT("/Script/AudioGameplayVolume"), Z_Registration_Info_UPackage__Script_AudioGameplayVolume, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA7445D31, 0x78248A5C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
