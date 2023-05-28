// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePlayerAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePlayerAttributes() {}
// Cross Module References
	PRELOADSCREENMOVIEPLAYER_API UEnum* Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType();
	UPackage* Z_Construct_UPackage__Script_PreLoadScreenMoviePlayer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieScreenPlaybackType;
	static UEnum* EMovieScreenPlaybackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieScreenPlaybackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieScreenPlaybackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType, (UObject*)Z_Construct_UPackage__Script_PreLoadScreenMoviePlayer(), TEXT("EMovieScreenPlaybackType"));
		}
		return Z_Registration_Info_UEnum_EMovieScreenPlaybackType.OuterSingleton;
	}
	template<> PRELOADSCREENMOVIEPLAYER_API UEnum* StaticEnum<EMovieScreenPlaybackType>()
	{
		return EMovieScreenPlaybackType_StaticEnum();
	}
	struct Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::Enumerators[] = {
		{ "MT_MS_Normal", (int64)MT_MS_Normal },
		{ "MT_MS_Looped", (int64)MT_MS_Looped },
		{ "MT_MS_LoadingLoop", (int64)MT_MS_LoadingLoop },
		{ "MT_MS_MAX", (int64)MT_MS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePlayerAttributes.h" },
		{ "MT_MS_LoadingLoop.Comment", "/** Alternate Looped mode.  Play all of the movies in the play list and loop just the last movie until loading is finished. */" },
		{ "MT_MS_LoadingLoop.DisplayName", "Looped Last Playback" },
		{ "MT_MS_LoadingLoop.Name", "MT_MS_LoadingLoop" },
		{ "MT_MS_LoadingLoop.ToolTip", "Alternate Looped mode.  Play all of the movies in the play list and loop just the last movie until loading is finished." },
		{ "MT_MS_Looped.Comment", "/** Looped playback mode.  Play all movies in the play list in order then start over until manually canceled */" },
		{ "MT_MS_Looped.DisplayName", "Looped Playback" },
		{ "MT_MS_Looped.Name", "MT_MS_Looped" },
		{ "MT_MS_Looped.ToolTip", "Looped playback mode.  Play all movies in the play list in order then start over until manually canceled" },
		{ "MT_MS_MAX.Hidden", "" },
		{ "MT_MS_MAX.Name", "MT_MS_MAX" },
		{ "MT_MS_Normal.Comment", "/** Normal playback mode.  Play each movie in the play list a single time */" },
		{ "MT_MS_Normal.DisplayName", "Normal Playback" },
		{ "MT_MS_Normal.Name", "MT_MS_Normal" },
		{ "MT_MS_Normal.ToolTip", "Normal playback mode.  Play each movie in the play list a single time" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PreLoadScreenMoviePlayer,
		nullptr,
		"EMovieScreenPlaybackType",
		"EMovieScreenPlaybackType",
		Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType()
	{
		if (!Z_Registration_Info_UEnum_EMovieScreenPlaybackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieScreenPlaybackType.InnerSingleton, Z_Construct_UEnum_PreLoadScreenMoviePlayer_EMovieScreenPlaybackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieScreenPlaybackType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PreLoadScreenMoviePlayer_Source_PreLoadScreenMoviePlayer_Public_MoviePlayerAttributes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PreLoadScreenMoviePlayer_Source_PreLoadScreenMoviePlayer_Public_MoviePlayerAttributes_h_Statics::EnumInfo[] = {
		{ EMovieScreenPlaybackType_StaticEnum, TEXT("EMovieScreenPlaybackType"), &Z_Registration_Info_UEnum_EMovieScreenPlaybackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1192147618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PreLoadScreenMoviePlayer_Source_PreLoadScreenMoviePlayer_Public_MoviePlayerAttributes_h_1777820648(TEXT("/Script/PreLoadScreenMoviePlayer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PreLoadScreenMoviePlayer_Source_PreLoadScreenMoviePlayer_Public_MoviePlayerAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PreLoadScreenMoviePlayer_Source_PreLoadScreenMoviePlayer_Public_MoviePlayerAttributes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
