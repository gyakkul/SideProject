// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/BinkMoviePlayerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinkMoviePlayerSettings() {}
// Cross Module References
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMoviePlayerSettings();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMoviePlayerSettings_NoRegister();
	BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes();
	BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes;
	static UEnum* EBinkMoviePlayerBinkBufferModes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMoviePlayerBinkBufferModes"));
		}
		return Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMoviePlayerBinkBufferModes>()
	{
		return EBinkMoviePlayerBinkBufferModes_StaticEnum();
	}
	struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::Enumerators[] = {
		{ "MP_Bink_Stream", (int64)MP_Bink_Stream },
		{ "MP_Bink_PreloadAll", (int64)MP_Bink_PreloadAll },
		{ "MP_Bink_StreamUntilResident", (int64)MP_Bink_StreamUntilResident },
		{ "MP_Bink_MAX", (int64)MP_Bink_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates available bink buffering modes.\n */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "MP_Bink_MAX.Name", "MP_Bink_MAX" },
		{ "MP_Bink_PreloadAll.Comment", "/** Loads the whole movie into memory at Open time (will block). */" },
		{ "MP_Bink_PreloadAll.DisplayName", "Preload All" },
		{ "MP_Bink_PreloadAll.Name", "MP_Bink_PreloadAll" },
		{ "MP_Bink_PreloadAll.ToolTip", "Loads the whole movie into memory at Open time (will block)." },
		{ "MP_Bink_Stream.Comment", "/** Stream the movie off the media during playback (caches about 1 second of video). */" },
		{ "MP_Bink_Stream.DisplayName", "Stream" },
		{ "MP_Bink_Stream.Name", "MP_Bink_Stream" },
		{ "MP_Bink_Stream.ToolTip", "Stream the movie off the media during playback (caches about 1 second of video)." },
		{ "MP_Bink_StreamUntilResident.Comment", "/** Streams the movie into a memory buffer as big as the movie, so it will be preloaded eventually). */" },
		{ "MP_Bink_StreamUntilResident.DisplayName", "Stream Until Resident" },
		{ "MP_Bink_StreamUntilResident.Name", "MP_Bink_StreamUntilResident" },
		{ "MP_Bink_StreamUntilResident.ToolTip", "Streams the movie into a memory buffer as big as the movie, so it will be preloaded eventually)." },
		{ "ToolTip", "Enumerates available bink buffering modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
		nullptr,
		"EBinkMoviePlayerBinkBufferModes",
		"EBinkMoviePlayerBinkBufferModes",
		Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes()
	{
		if (!Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack;
	static UEnum* EBinkMoviePlayerBinkSoundTrack_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMoviePlayerBinkSoundTrack"));
		}
		return Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMoviePlayerBinkSoundTrack>()
	{
		return EBinkMoviePlayerBinkSoundTrack_StaticEnum();
	}
	struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::Enumerators[] = {
		{ "MP_Bink_Sound_None", (int64)MP_Bink_Sound_None },
		{ "MP_Bink_Sound_Simple", (int64)MP_Bink_Sound_Simple },
		{ "MP_Bink_Sound_LanguageOverride", (int64)MP_Bink_Sound_LanguageOverride },
		{ "MP_Bink_Sound_51", (int64)MP_Bink_Sound_51 },
		{ "MP_Bink_Sound_51LanguageOverride", (int64)MP_Bink_Sound_51LanguageOverride },
		{ "MP_Bink_Sound_71", (int64)MP_Bink_Sound_71 },
		{ "MP_Bink_Sound_71LanguageOverride", (int64)MP_Bink_Sound_71LanguageOverride },
		{ "MP_Bink_Sound_MAX", (int64)MP_Bink_Sound_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates available used to specify the sounds to open at playback w/ bink movies.\n */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "MP_Bink_Sound_51.Comment", "/** 6 mono tracks in tracks snd_track_start[0..5] */" },
		{ "MP_Bink_Sound_51.DisplayName", "5.1 Surround" },
		{ "MP_Bink_Sound_51.Name", "MP_Bink_Sound_51" },
		{ "MP_Bink_Sound_51.ToolTip", "6 mono tracks in tracks snd_track_start[0..5]" },
		{ "MP_Bink_Sound_51LanguageOverride.Comment", "/** 6 mono tracks in tracks 0..5, center language track at snd_track_start */" },
		{ "MP_Bink_Sound_51LanguageOverride.DisplayName", "5.1 Surround, Language Override" },
		{ "MP_Bink_Sound_51LanguageOverride.Name", "MP_Bink_Sound_51LanguageOverride" },
		{ "MP_Bink_Sound_51LanguageOverride.ToolTip", "6 mono tracks in tracks 0..5, center language track at snd_track_start" },
		{ "MP_Bink_Sound_71.Comment", "/** 8 mono tracks in tracks snd_track_start[0..7] */" },
		{ "MP_Bink_Sound_71.DisplayName", "7.1 Surround" },
		{ "MP_Bink_Sound_71.Name", "MP_Bink_Sound_71" },
		{ "MP_Bink_Sound_71.ToolTip", "8 mono tracks in tracks snd_track_start[0..7]" },
		{ "MP_Bink_Sound_71LanguageOverride.Comment", "/** 8 mono tracks in tracks 0..7, center language track at snd_track_start */" },
		{ "MP_Bink_Sound_71LanguageOverride.DisplayName", "7.1 Surround, Language Override" },
		{ "MP_Bink_Sound_71LanguageOverride.Name", "MP_Bink_Sound_71LanguageOverride" },
		{ "MP_Bink_Sound_71LanguageOverride.ToolTip", "8 mono tracks in tracks 0..7, center language track at snd_track_start" },
		{ "MP_Bink_Sound_LanguageOverride.Comment", "/** Mono or stereo sound in track 0, language track at snd_track_start. */" },
		{ "MP_Bink_Sound_LanguageOverride.DisplayName", "Language Override" },
		{ "MP_Bink_Sound_LanguageOverride.Name", "MP_Bink_Sound_LanguageOverride" },
		{ "MP_Bink_Sound_LanguageOverride.ToolTip", "Mono or stereo sound in track 0, language track at snd_track_start." },
		{ "MP_Bink_Sound_MAX.Name", "MP_Bink_Sound_MAX" },
		{ "MP_Bink_Sound_None.Comment", "/** Don't open any sound tracks snd_track_start not used. */" },
		{ "MP_Bink_Sound_None.DisplayName", "None" },
		{ "MP_Bink_Sound_None.Name", "MP_Bink_Sound_None" },
		{ "MP_Bink_Sound_None.ToolTip", "Don't open any sound tracks snd_track_start not used." },
		{ "MP_Bink_Sound_Simple.Comment", "/** Based on filename, OR simply mono or stereo sound in track snd_track_start (default speaker spread). */" },
		{ "MP_Bink_Sound_Simple.DisplayName", "Simple" },
		{ "MP_Bink_Sound_Simple.Name", "MP_Bink_Sound_Simple" },
		{ "MP_Bink_Sound_Simple.ToolTip", "Based on filename, OR simply mono or stereo sound in track snd_track_start (default speaker spread)." },
		{ "ToolTip", "Enumerates available used to specify the sounds to open at playback w/ bink movies." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
		nullptr,
		"EBinkMoviePlayerBinkSoundTrack",
		"EBinkMoviePlayerBinkSoundTrack",
		Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack()
	{
		if (!Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack.InnerSingleton;
	}
	void UBinkMoviePlayerSettings::StaticRegisterNativesUBinkMoviePlayerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinkMoviePlayerSettings);
	UClass* Z_Construct_UClass_UBinkMoviePlayerSettings_NoRegister()
	{
		return UBinkMoviePlayerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBinkMoviePlayerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkBufferMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinkBufferMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkSoundTrack_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinkSoundTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkSoundTrackStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BinkSoundTrackStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkDestinationUpperLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinkDestinationUpperLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkDestinationLowerRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinkDestinationLowerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkPixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinkPixelFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Windows target platform.\n */" },
		{ "IncludePath", "BinkMoviePlayerSettings.h" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Implements the settings for the Windows target platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkBufferMode_MetaData[] = {
		{ "Category", "BinkMovies" },
		{ "Comment", "/** Used to specify the how the video should be buffered. */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Used to specify the how the video should be buffered." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkBufferMode = { "BinkBufferMode", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMoviePlayerSettings, BinkBufferMode), Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkBufferModes, METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkBufferMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkBufferMode_MetaData)) }; // 2430896662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrack_MetaData[] = {
		{ "Category", "BinkMovies" },
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Used to specify the sounds to open at playback." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrack = { "BinkSoundTrack", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMoviePlayerSettings, BinkSoundTrack), Z_Construct_UEnum_BinkMediaPlayer_EBinkMoviePlayerBinkSoundTrack, METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrack_MetaData)) }; // 17901265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrackStart_MetaData[] = {
		{ "Category", "BinkMovies" },
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Used to specify the sounds to open at playback." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrackStart = { "BinkSoundTrackStart", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMoviePlayerSettings, BinkSoundTrackStart), METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrackStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrackStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationUpperLeft_MetaData[] = {
		{ "Category", "BinkMovies" },
		{ "Comment", "/** Used to specify the render destination rectangle. */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Used to specify the render destination rectangle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationUpperLeft = { "BinkDestinationUpperLeft", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMoviePlayerSettings, BinkDestinationUpperLeft), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationUpperLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationUpperLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationLowerRight_MetaData[] = {
		{ "Category", "BinkMovies" },
		{ "Comment", "/** Used to specify the render destination rectangle. */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Used to specify the render destination rectangle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationLowerRight = { "BinkDestinationLowerRight", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMoviePlayerSettings, BinkDestinationLowerRight), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationLowerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationLowerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkPixelFormat_MetaData[] = {
		{ "Category", "BinkMovies" },
		{ "Comment", "/** Used to specify the render destination rectangle. */" },
		{ "ModuleRelativePath", "Private/BinkMoviePlayerSettings.h" },
		{ "ToolTip", "Used to specify the render destination rectangle." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkPixelFormat = { "BinkPixelFormat", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMoviePlayerSettings, BinkPixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkPixelFormat_MetaData)) }; // 2651536151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkBufferMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkSoundTrackStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationUpperLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkDestinationLowerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::NewProp_BinkPixelFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMoviePlayerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::ClassParams = {
		&UBinkMoviePlayerSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBinkMoviePlayerSettings()
	{
		if (!Z_Registration_Info_UClass_UBinkMoviePlayerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMoviePlayerSettings.OuterSingleton, Z_Construct_UClass_UBinkMoviePlayerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBinkMoviePlayerSettings.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UClass* StaticClass<UBinkMoviePlayerSettings>()
	{
		return UBinkMoviePlayerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMoviePlayerSettings);
	UBinkMoviePlayerSettings::~UBinkMoviePlayerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics::EnumInfo[] = {
		{ EBinkMoviePlayerBinkBufferModes_StaticEnum, TEXT("EBinkMoviePlayerBinkBufferModes"), &Z_Registration_Info_UEnum_EBinkMoviePlayerBinkBufferModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2430896662U) },
		{ EBinkMoviePlayerBinkSoundTrack_StaticEnum, TEXT("EBinkMoviePlayerBinkSoundTrack"), &Z_Registration_Info_UEnum_EBinkMoviePlayerBinkSoundTrack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 17901265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMoviePlayerSettings, UBinkMoviePlayerSettings::StaticClass, TEXT("UBinkMoviePlayerSettings"), &Z_Registration_Info_UClass_UBinkMoviePlayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMoviePlayerSettings), 998459222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_662813013(TEXT("/Script/BinkMediaPlayer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
