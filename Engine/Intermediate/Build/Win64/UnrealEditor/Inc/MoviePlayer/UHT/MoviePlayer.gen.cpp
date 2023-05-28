// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePlayer() {}
// Cross Module References
	MOVIEPLAYER_API UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
	UPackage* Z_Construct_UPackage__Script_MoviePlayer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePlaybackType;
	static UEnum* EMoviePlaybackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, (UObject*)Z_Construct_UPackage__Script_MoviePlayer(), TEXT("EMoviePlaybackType"));
		}
		return Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton;
	}
	template<> MOVIEPLAYER_API UEnum* StaticEnum<EMoviePlaybackType>()
	{
		return EMoviePlaybackType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::Enumerators[] = {
		{ "MT_Normal", (int64)MT_Normal },
		{ "MT_Looped", (int64)MT_Looped },
		{ "MT_LoadingLoop", (int64)MT_LoadingLoop },
		{ "MT_MAX", (int64)MT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// In order for a platform to support early movie playback, the platform must support the rendering thread \n// starting very early and support rendering as soon as it is started and the module containing the movie streamer for the platform must already be loaded\n" },
		{ "ModuleRelativePath", "Public/MoviePlayer.h" },
		{ "MT_LoadingLoop.Comment", "/** Alternate Looped mode.  Play all of the movies in the play list and loop just the last movie until loading is finished. */" },
		{ "MT_LoadingLoop.DisplayName", "Looped Last Playback" },
		{ "MT_LoadingLoop.Name", "MT_LoadingLoop" },
		{ "MT_LoadingLoop.ToolTip", "Alternate Looped mode.  Play all of the movies in the play list and loop just the last movie until loading is finished." },
		{ "MT_Looped.Comment", "/** Looped playback mode.  Play all movies in the play list in order then start over until manually canceled */" },
		{ "MT_Looped.DisplayName", "Looped Playback" },
		{ "MT_Looped.Name", "MT_Looped" },
		{ "MT_Looped.ToolTip", "Looped playback mode.  Play all movies in the play list in order then start over until manually canceled" },
		{ "MT_MAX.Hidden", "" },
		{ "MT_MAX.Name", "MT_MAX" },
		{ "MT_Normal.Comment", "/** Normal playback mode.  Play each movie in the play list a single time */" },
		{ "MT_Normal.DisplayName", "Normal Playback" },
		{ "MT_Normal.Name", "MT_Normal" },
		{ "MT_Normal.ToolTip", "Normal playback mode.  Play each movie in the play list a single time" },
		{ "ToolTip", "In order for a platform to support early movie playback, the platform must support the rendering thread\nstarting very early and support rendering as soon as it is started and the module containing the movie streamer for the platform must already be loaded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoviePlayer,
		nullptr,
		"EMoviePlaybackType",
		"EMoviePlaybackType",
		Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType()
	{
		if (!Z_Registration_Info_UEnum_EMoviePlaybackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePlaybackType.InnerSingleton, Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoviePlaybackType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h_Statics::EnumInfo[] = {
		{ EMoviePlaybackType_StaticEnum, TEXT("EMoviePlaybackType"), &Z_Registration_Info_UEnum_EMoviePlaybackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2270427260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h_678118597(TEXT("/Script/MoviePlayer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
