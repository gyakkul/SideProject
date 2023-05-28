// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylists_init() {}
	SEQUENCERPLAYLISTS_API UFunction* Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SequencerPlaylists;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SequencerPlaylists()
	{
		if (!Z_Registration_Info_UPackage__Script_SequencerPlaylists.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SequencerPlaylists",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x6A500207,
				0x6AE0A3C5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SequencerPlaylists.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SequencerPlaylists.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SequencerPlaylists(Z_Construct_UPackage__Script_SequencerPlaylists, TEXT("/Script/SequencerPlaylists"), Z_Registration_Info_UPackage__Script_SequencerPlaylists, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6A500207, 0x6AE0A3C5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
