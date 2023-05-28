// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCapture_init() {}
	AUDIOCAPTURE_API UFunction* Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioCapture;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioCapture()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioCapture.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioCapture",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC3A481D7,
				0x487A52A5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioCapture.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioCapture.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioCapture(Z_Construct_UPackage__Script_AudioCapture, TEXT("/Script/AudioCapture"), Z_Registration_Info_UPackage__Script_AudioCapture, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC3A481D7, 0x487A52A5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
