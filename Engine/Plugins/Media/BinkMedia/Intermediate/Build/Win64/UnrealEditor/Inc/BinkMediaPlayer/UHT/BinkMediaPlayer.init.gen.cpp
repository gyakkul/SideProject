// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinkMediaPlayer_init() {}
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BinkMediaPlayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer()
	{
		if (!Z_Registration_Info_UPackage__Script_BinkMediaPlayer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BinkMediaPlayer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9C907048,
				0xA547C5F4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BinkMediaPlayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BinkMediaPlayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BinkMediaPlayer(Z_Construct_UPackage__Script_BinkMediaPlayer, TEXT("/Script/BinkMediaPlayer"), Z_Registration_Info_UPackage__Script_BinkMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C907048, 0xA547C5F4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
