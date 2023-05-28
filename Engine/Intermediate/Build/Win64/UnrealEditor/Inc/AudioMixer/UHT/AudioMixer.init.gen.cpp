// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixer_init() {}
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioMixer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioMixer()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioMixer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnAudioDefaultDeviceChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnAudioDeviceStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioMixer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1538BE4B,
				0xB017651C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioMixer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioMixer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioMixer(Z_Construct_UPackage__Script_AudioMixer, TEXT("/Script/AudioMixer"), Z_Registration_Info_UPackage__Script_AudioMixer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1538BE4B, 0xB017651C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
