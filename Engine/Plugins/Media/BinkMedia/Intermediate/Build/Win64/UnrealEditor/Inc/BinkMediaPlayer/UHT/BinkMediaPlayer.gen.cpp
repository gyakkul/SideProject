// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BinkMediaPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinkMediaPlayer() {}
// Cross Module References
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes();
	BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle();
	BINKMEDIAPLAYER_API UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature();
	BINKMEDIAPLAYER_API UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes;
	static UEnum* EBinkMediaPlayerBinkBufferModes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMediaPlayerBinkBufferModes"));
		}
		return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkBufferModes>()
	{
		return EBinkMediaPlayerBinkBufferModes_StaticEnum();
	}
	struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enumerators[] = {
		{ "BMASM_Bink_Stream", (int64)BMASM_Bink_Stream },
		{ "BMASM_Bink_PreloadAll", (int64)BMASM_Bink_PreloadAll },
		{ "BMASM_Bink_StreamUntilResident", (int64)BMASM_Bink_StreamUntilResident },
		{ "BMASM_Bink_MAX", (int64)BMASM_Bink_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enum_MetaDataParams[] = {
		{ "BMASM_Bink_MAX.Name", "BMASM_Bink_MAX" },
		{ "BMASM_Bink_PreloadAll.Comment", "/** Loads the whole movie into memory at Open time (will block). */" },
		{ "BMASM_Bink_PreloadAll.DisplayName", "Preload All" },
		{ "BMASM_Bink_PreloadAll.Name", "BMASM_Bink_PreloadAll" },
		{ "BMASM_Bink_PreloadAll.ToolTip", "Loads the whole movie into memory at Open time (will block)." },
		{ "BMASM_Bink_Stream.Comment", "/** Stream the movie off the media during playback (caches about 1 second of video). */" },
		{ "BMASM_Bink_Stream.DisplayName", "Stream" },
		{ "BMASM_Bink_Stream.Name", "BMASM_Bink_Stream" },
		{ "BMASM_Bink_Stream.ToolTip", "Stream the movie off the media during playback (caches about 1 second of video)." },
		{ "BMASM_Bink_StreamUntilResident.Comment", "/** Streams the movie into a memory buffer as big as the movie, so it will be preloaded eventually). */" },
		{ "BMASM_Bink_StreamUntilResident.DisplayName", "Stream Until Resident" },
		{ "BMASM_Bink_StreamUntilResident.Name", "BMASM_Bink_StreamUntilResident" },
		{ "BMASM_Bink_StreamUntilResident.ToolTip", "Streams the movie into a memory buffer as big as the movie, so it will be preloaded eventually)." },
		{ "Comment", "/**\n * Enumerates available bink buffering modes.\n */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Enumerates available bink buffering modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
		nullptr,
		"EBinkMediaPlayerBinkBufferModes",
		"EBinkMediaPlayerBinkBufferModes",
		Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes()
	{
		if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack;
	static UEnum* EBinkMediaPlayerBinkSoundTrack_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMediaPlayerBinkSoundTrack"));
		}
		return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkSoundTrack>()
	{
		return EBinkMediaPlayerBinkSoundTrack_StaticEnum();
	}
	struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enumerators[] = {
		{ "BMASM_Bink_Sound_None", (int64)BMASM_Bink_Sound_None },
		{ "BMASM_Bink_Sound_Simple", (int64)BMASM_Bink_Sound_Simple },
		{ "BMASM_Bink_Sound_LanguageOverride", (int64)BMASM_Bink_Sound_LanguageOverride },
		{ "BMASM_Bink_Sound_51", (int64)BMASM_Bink_Sound_51 },
		{ "BMASM_Bink_Sound_51LanguageOverride", (int64)BMASM_Bink_Sound_51LanguageOverride },
		{ "BMASM_Bink_Sound_71", (int64)BMASM_Bink_Sound_71 },
		{ "BMASM_Bink_Sound_71LanguageOverride", (int64)BMASM_Bink_Sound_71LanguageOverride },
		{ "BMASM_Bink_Sound_MAX", (int64)BMASM_Bink_Sound_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enum_MetaDataParams[] = {
		{ "BMASM_Bink_Sound_51.Comment", "/** 6 mono tracks in tracks snd_track_start[0..5] */" },
		{ "BMASM_Bink_Sound_51.DisplayName", "5.1 Surround" },
		{ "BMASM_Bink_Sound_51.Name", "BMASM_Bink_Sound_51" },
		{ "BMASM_Bink_Sound_51.ToolTip", "6 mono tracks in tracks snd_track_start[0..5]" },
		{ "BMASM_Bink_Sound_51LanguageOverride.Comment", "/** 6 mono tracks in tracks 0..5, center language track at snd_track_start */" },
		{ "BMASM_Bink_Sound_51LanguageOverride.DisplayName", "5.1 Surround, Language Override" },
		{ "BMASM_Bink_Sound_51LanguageOverride.Name", "BMASM_Bink_Sound_51LanguageOverride" },
		{ "BMASM_Bink_Sound_51LanguageOverride.ToolTip", "6 mono tracks in tracks 0..5, center language track at snd_track_start" },
		{ "BMASM_Bink_Sound_71.Comment", "/** 8 mono tracks in tracks snd_track_start[0..7] */" },
		{ "BMASM_Bink_Sound_71.DisplayName", "7.1 Surround" },
		{ "BMASM_Bink_Sound_71.Name", "BMASM_Bink_Sound_71" },
		{ "BMASM_Bink_Sound_71.ToolTip", "8 mono tracks in tracks snd_track_start[0..7]" },
		{ "BMASM_Bink_Sound_71LanguageOverride.Comment", "/** 8 mono tracks in tracks 0..7, center language track at snd_track_start */" },
		{ "BMASM_Bink_Sound_71LanguageOverride.DisplayName", "7.1 Surround, Language Override" },
		{ "BMASM_Bink_Sound_71LanguageOverride.Name", "BMASM_Bink_Sound_71LanguageOverride" },
		{ "BMASM_Bink_Sound_71LanguageOverride.ToolTip", "8 mono tracks in tracks 0..7, center language track at snd_track_start" },
		{ "BMASM_Bink_Sound_LanguageOverride.Comment", "/** Mono or stereo sound in track 0, language track at snd_track_start. */" },
		{ "BMASM_Bink_Sound_LanguageOverride.DisplayName", "Language Override" },
		{ "BMASM_Bink_Sound_LanguageOverride.Name", "BMASM_Bink_Sound_LanguageOverride" },
		{ "BMASM_Bink_Sound_LanguageOverride.ToolTip", "Mono or stereo sound in track 0, language track at snd_track_start." },
		{ "BMASM_Bink_Sound_MAX.Name", "BMASM_Bink_Sound_MAX" },
		{ "BMASM_Bink_Sound_None.Comment", "/** Don't open any sound tracks snd_track_start not used. */" },
		{ "BMASM_Bink_Sound_None.DisplayName", "None" },
		{ "BMASM_Bink_Sound_None.Name", "BMASM_Bink_Sound_None" },
		{ "BMASM_Bink_Sound_None.ToolTip", "Don't open any sound tracks snd_track_start not used." },
		{ "BMASM_Bink_Sound_Simple.Comment", "/** Based on filename, OR simply mono or stereo sound in track snd_track_start (default speaker spread). */" },
		{ "BMASM_Bink_Sound_Simple.DisplayName", "Simple" },
		{ "BMASM_Bink_Sound_Simple.Name", "BMASM_Bink_Sound_Simple" },
		{ "BMASM_Bink_Sound_Simple.ToolTip", "Based on filename, OR simply mono or stereo sound in track snd_track_start (default speaker spread)." },
		{ "Comment", "/**\n * Enumerates available used to specify the sounds to open at playback w/ bink movies.\n */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Enumerates available used to specify the sounds to open at playback w/ bink movies." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
		nullptr,
		"EBinkMediaPlayerBinkSoundTrack",
		"EBinkMediaPlayerBinkSoundTrack",
		Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack()
	{
		if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle;
	static UEnum* EBinkMediaPlayerBinkDrawStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle, (UObject*)Z_Construct_UPackage__Script_BinkMediaPlayer(), TEXT("EBinkMediaPlayerBinkDrawStyle"));
		}
		return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMediaPlayerBinkDrawStyle>()
	{
		return EBinkMediaPlayerBinkDrawStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enumerators[] = {
		{ "BMASM_Bink_DS_RenderToTexture", (int64)BMASM_Bink_DS_RenderToTexture },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio", (int64)BMASM_Bink_DS_OverlayFillScreenWithAspectRatio },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize", (int64)BMASM_Bink_DS_OverlayOriginalMovieSize },
		{ "BMASM_Bink_DS_OverlayFillScreen", (int64)BMASM_Bink_DS_OverlayFillScreen },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle", (int64)BMASM_Bink_DS_OverlaySpecificDestinationRectangle },
		{ "BMASM_Bink_DS_MAX", (int64)BMASM_Bink_DS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enum_MetaDataParams[] = {
		{ "BMASM_Bink_DS_MAX.Name", "BMASM_Bink_DS_MAX" },
		{ "BMASM_Bink_DS_OverlayFillScreen.Comment", "/** Renders movie in an overlay (UE4 bypass), filling the entire destination rectangle */" },
		{ "BMASM_Bink_DS_OverlayFillScreen.DisplayName", "Overlay Fill Screen" },
		{ "BMASM_Bink_DS_OverlayFillScreen.Name", "BMASM_Bink_DS_OverlayFillScreen" },
		{ "BMASM_Bink_DS_OverlayFillScreen.ToolTip", "Renders movie in an overlay (UE4 bypass), filling the entire destination rectangle" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.Comment", "/** Renders movie in an overlay (UE4 bypass) and corrects for movie aspect ratio. */" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.DisplayName", "Overlay Fill Screen with Aspect Ratio" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.Name", "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio" },
		{ "BMASM_Bink_DS_OverlayFillScreenWithAspectRatio.ToolTip", "Renders movie in an overlay (UE4 bypass) and corrects for movie aspect ratio." },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.Comment", "/** Renders movie in an overlay (UE4 bypass), displaying the original movie size and not stretching to fill frame */" },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.DisplayName", "Overlay Fill Original Movie Size" },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.Name", "BMASM_Bink_DS_OverlayOriginalMovieSize" },
		{ "BMASM_Bink_DS_OverlayOriginalMovieSize.ToolTip", "Renders movie in an overlay (UE4 bypass), displaying the original movie size and not stretching to fill frame" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.Comment", "/** Renders movie in an overlay (UE4 bypass), rendering to the specific rectangle specified (same as FillScreen) */" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.DisplayName", "Overlay Specific Destination Rectangle" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.Name", "BMASM_Bink_DS_OverlaySpecificDestinationRectangle" },
		{ "BMASM_Bink_DS_OverlaySpecificDestinationRectangle.ToolTip", "Renders movie in an overlay (UE4 bypass), rendering to the specific rectangle specified (same as FillScreen)" },
		{ "BMASM_Bink_DS_RenderToTexture.Comment", "/** Renders movie to the destination texture (default UE4 functionality) */" },
		{ "BMASM_Bink_DS_RenderToTexture.DisplayName", "Render to Texture" },
		{ "BMASM_Bink_DS_RenderToTexture.Name", "BMASM_Bink_DS_RenderToTexture" },
		{ "BMASM_Bink_DS_RenderToTexture.ToolTip", "Renders movie to the destination texture (default UE4 functionality)" },
		{ "Comment", "/**\n * Enumerates available bink buffering modes.\n */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Enumerates available bink buffering modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
		nullptr,
		"EBinkMediaPlayerBinkDrawStyle",
		"EBinkMediaPlayerBinkDrawStyle",
		Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle()
	{
		if (!Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.InnerSingleton, Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has been closed. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has been closed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaClosed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBinkMediaPlayerMediaClosed_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaClosed)
{
	OnBinkMediaPlayerMediaClosed.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics
	{
		struct _Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms
		{
			FString OpenedUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms, OpenedUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::NewProp_OpenedUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has been opened. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has been opened." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaOpened__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBinkMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaOpened, const FString& OpenedUrl)
{
	struct _Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms
	{
		FString OpenedUrl;
	};
	_Script_BinkMediaPlayer_eventOnBinkMediaPlayerMediaOpened_Parms Parms;
	Parms.OpenedUrl=OpenedUrl;
	OnBinkMediaPlayerMediaOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media player's media has finished playing. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media player's media has finished playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaReachedEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBinkMediaPlayerMediaReachedEnd_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaReachedEnd)
{
	OnBinkMediaPlayerMediaReachedEnd.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a media event occurred in the player. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a media event occurred in the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BinkMediaPlayer, nullptr, "OnBinkMediaPlayerMediaEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBinkMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaEvent)
{
	OnBinkMediaPlayerMediaEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UBinkMediaPlayer::execDraw)
	{
		P_GET_OBJECT(UTexture,Z_Param_texture);
		P_GET_UBOOL(Z_Param_tonemap);
		P_GET_PROPERTY(FIntProperty,Z_Param_out_nits);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_GET_UBOOL(Z_Param_srgb_decode);
		P_GET_UBOOL(Z_Param_hdr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Draw(Z_Param_texture,Z_Param_tonemap,Z_Param_out_nits,Z_Param_alpha,Z_Param_srgb_decode,Z_Param_hdr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSupportsSeeking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsSeeking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSupportsScrubbing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsScrubbing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSupportsRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_UBOOL(Z_Param_Unthinned);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsRate(Z_Param_Rate,Z_Param_Unthinned);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSetRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_InLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_InLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execSeek)
	{
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execRewind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Rewind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execCloseUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execOpenUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenUrl(Z_Param_NewUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execIsStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execGetRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execCanPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaPlayer::execCanPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPause();
		P_NATIVE_END;
	}
	void UBinkMediaPlayer::StaticRegisterNativesUBinkMediaPlayer()
	{
		UClass* Class = UBinkMediaPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPause", &UBinkMediaPlayer::execCanPause },
			{ "CanPlay", &UBinkMediaPlayer::execCanPlay },
			{ "CloseUrl", &UBinkMediaPlayer::execCloseUrl },
			{ "Draw", &UBinkMediaPlayer::execDraw },
			{ "GetDuration", &UBinkMediaPlayer::execGetDuration },
			{ "GetRate", &UBinkMediaPlayer::execGetRate },
			{ "GetTime", &UBinkMediaPlayer::execGetTime },
			{ "GetUrl", &UBinkMediaPlayer::execGetUrl },
			{ "IsInitialized", &UBinkMediaPlayer::execIsInitialized },
			{ "IsLooping", &UBinkMediaPlayer::execIsLooping },
			{ "IsPaused", &UBinkMediaPlayer::execIsPaused },
			{ "IsPlaying", &UBinkMediaPlayer::execIsPlaying },
			{ "IsStopped", &UBinkMediaPlayer::execIsStopped },
			{ "OpenUrl", &UBinkMediaPlayer::execOpenUrl },
			{ "Pause", &UBinkMediaPlayer::execPause },
			{ "Play", &UBinkMediaPlayer::execPlay },
			{ "Rewind", &UBinkMediaPlayer::execRewind },
			{ "Seek", &UBinkMediaPlayer::execSeek },
			{ "SetLooping", &UBinkMediaPlayer::execSetLooping },
			{ "SetRate", &UBinkMediaPlayer::execSetRate },
			{ "SetVolume", &UBinkMediaPlayer::execSetVolume },
			{ "Stop", &UBinkMediaPlayer::execStop },
			{ "SupportsRate", &UBinkMediaPlayer::execSupportsRate },
			{ "SupportsScrubbing", &UBinkMediaPlayer::execSupportsScrubbing },
			{ "SupportsSeeking", &UBinkMediaPlayer::execSupportsSeeking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics
	{
		struct BinkMediaPlayer_eventCanPause_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventCanPause_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventCanPause_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether media playback can be paused right now.\n\x09 *\n\x09 * Playback can be paused if the media supports pausing and if it is currently playing.\n\x09 *\n\x09 * @return true if pausing playback can be paused, false otherwise.\n\x09 * @see CanPlay, Pause\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether media playback can be paused right now.\n\nPlayback can be paused if the media supports pausing and if it is currently playing.\n\n@return true if pausing playback can be paused, false otherwise.\n@see CanPlay, Pause" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "CanPause", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::BinkMediaPlayer_eventCanPause_Parms), Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_CanPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_CanPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics
	{
		struct BinkMediaPlayer_eventCanPlay_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventCanPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventCanPlay_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether media playback can be started right now.\n\x09 *\n\x09 * @return true if playback can be started, false otherwise.\n\x09 * @see CanPause, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether media playback can be started right now.\n\n@return true if playback can be started, false otherwise.\n@see CanPause, Play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "CanPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::BinkMediaPlayer_eventCanPlay_Parms), Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_CanPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_CanPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Closes the specified media URL.\n\x09 *\n\x09 * @param NewUrl The URL to open.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Closes the specified media URL.\n\n@param NewUrl The URL to open.\n@return true on success, false otherwise.\n@see GetUrl" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "CloseUrl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics
	{
		struct BinkMediaPlayer_eventDraw_Parms
		{
			UTexture* texture;
			bool tonemap;
			int32 out_nits;
			float alpha;
			bool srgb_decode;
			bool hdr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static void NewProp_tonemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_tonemap;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_out_nits;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static void NewProp_srgb_decode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_srgb_decode;
		static void NewProp_hdr_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hdr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventDraw_Parms, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventDraw_Parms*)Obj)->tonemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap = { "tonemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventDraw_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_out_nits = { "out_nits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventDraw_Parms, out_nits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventDraw_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventDraw_Parms*)Obj)->srgb_decode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode = { "srgb_decode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventDraw_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventDraw_Parms*)Obj)->hdr = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr = { "hdr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventDraw_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_tonemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_out_nits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_srgb_decode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::NewProp_hdr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Draws this bink to the specified texture\n\x09 */" },
		{ "CPP_Default_alpha", "1.000000" },
		{ "CPP_Default_hdr", "false" },
		{ "CPP_Default_out_nits", "10000" },
		{ "CPP_Default_srgb_decode", "false" },
		{ "CPP_Default_tonemap", "false" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Draws this bink to the specified texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Draw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::BinkMediaPlayer_eventDraw_Parms), Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Draw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Draw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics
	{
		struct BinkMediaPlayer_eventGetDuration_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Gets the media's duration.\n\x09 *\n\x09 * @return A time span representing the duration.\n\x09 * @see GetTime, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Gets the media's duration.\n\n@return A time span representing the duration.\n@see GetTime, Seek" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::BinkMediaPlayer_eventGetDuration_Parms), Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics
	{
		struct BinkMediaPlayer_eventGetRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventGetRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Gets the media's current playback rate.\n\x09 *\n\x09 * @return The playback rate.\n\x09 * @see SetRate, SupportsRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Gets the media's current playback rate.\n\n@return The playback rate.\n@see SetRate, SupportsRate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::BinkMediaPlayer_eventGetRate_Parms), Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics
	{
		struct BinkMediaPlayer_eventGetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Gets the media's current playback time.\n\x09 *\n\x09 * @return Playback time.\n\x09 * @see GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Gets the media's current playback time.\n\n@return Playback time.\n@see GetDuration, Seek" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::BinkMediaPlayer_eventGetTime_Parms), Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics
	{
		struct BinkMediaPlayer_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Gets the URL of the currently loaded media, if any.\n\x09 *\n\x09 * @return Media URL, or empty string if no media was loaded.\n\x09 * @see OpenUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Gets the URL of the currently loaded media, if any.\n\n@return Media URL, or empty string if no media was loaded.\n@see OpenUrl" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "GetUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::BinkMediaPlayer_eventGetUrl_Parms), Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics
	{
		struct BinkMediaPlayer_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventIsInitialized_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether this player has been initialized with a media source.\n\x09 *\n\x09 * @return true if a media source is associated with this player.\n\x09 * @see OpenUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether this player has been initialized with a media source.\n\n@return true if a media source is associated with this player.\n@see OpenUrl" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::BinkMediaPlayer_eventIsInitialized_Parms), Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics
	{
		struct BinkMediaPlayer_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether playback is looping.\n\x09 *\n\x09 * @return true if looping, false otherwise.\n\x09 * @see SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether playback is looping.\n\n@return true if looping, false otherwise.\n@see SetLooping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::BinkMediaPlayer_eventIsLooping_Parms), Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics
	{
		struct BinkMediaPlayer_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether playback is currently paused.\n\x09 *\n\x09 * @return true if playback is paused, false otherwise.\n\x09 * @see CanPause, IsPlaying, IsStopped, Pause\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether playback is currently paused.\n\n@return true if playback is paused, false otherwise.\n@see CanPause, IsPlaying, IsStopped, Pause" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::BinkMediaPlayer_eventIsPaused_Parms), Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics
	{
		struct BinkMediaPlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether playback has started.\n\x09 *\n\x09 * @return true if playback has started, false otherwise.\n\x09 * @see CanPlay, IsPaused, IsStopped, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether playback has started.\n\n@return true if playback has started, false otherwise.\n@see CanPlay, IsPaused, IsStopped, Play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::BinkMediaPlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics
	{
		struct BinkMediaPlayer_eventIsStopped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventIsStopped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventIsStopped_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether playback has stopped.\n\x09 *\n\x09 * @return true if playback has stopped, false otherwise.\n\x09 * @see IsPaused, IsPlaying, Stop\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether playback has stopped.\n\n@return true if playback has stopped, false otherwise.\n@see IsPaused, IsPlaying, Stop" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "IsStopped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::BinkMediaPlayer_eventIsStopped_Parms), Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_IsStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_IsStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics
	{
		struct BinkMediaPlayer_eventOpenUrl_Parms
		{
			FString NewUrl;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewUrl;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl = { "NewUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventOpenUrl_Parms, NewUrl), METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl_MetaData)) };
	void Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventOpenUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventOpenUrl_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_NewUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Opens the specified media URL.\n\x09 *\n\x09 * @param NewUrl The URL to open.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetUrl\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Opens the specified media URL.\n\n@param NewUrl The URL to open.\n@return true on success, false otherwise.\n@see GetUrl" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "OpenUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::BinkMediaPlayer_eventOpenUrl_Parms), Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics
	{
		struct BinkMediaPlayer_eventPause_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventPause_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventPause_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Pauses media playback.\n\x09 *\n\x09 * This is the same as setting the playback rate to 0.0.\n\x09 *\n\x09 * @return true if playback is being paused, false otherwise.\n\x09 * @see CanPause, Play, Rewind, Seek, SetRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Pauses media playback.\n\nThis is the same as setting the playback rate to 0.0.\n\n@return true if playback is being paused, false otherwise.\n@see CanPause, Play, Rewind, Seek, SetRate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Pause", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::BinkMediaPlayer_eventPause_Parms), Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics
	{
		struct BinkMediaPlayer_eventPlay_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventPlay_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Starts media playback.\n\x09 *\n\x09 * This is the same as setting the playback rate to 1.0.\n\x09 *\n\x09 * @return true if playback is starting, false otherwise.\n\x09 * @see CanPlay, Pause, Rewind, Seek, SetRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Starts media playback.\n\nThis is the same as setting the playback rate to 1.0.\n\n@return true if playback is starting, false otherwise.\n@see CanPlay, Pause, Rewind, Seek, SetRate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::BinkMediaPlayer_eventPlay_Parms), Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics
	{
		struct BinkMediaPlayer_eventRewind_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventRewind_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventRewind_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Rewinds the media to the beginning.\n\x09 *\n\x09 * This is the same as seeking to zero time.\n\x09 *\n\x09 * @return true if rewinding, false otherwise.\n\x09 * @see GetTime, Pause, Play, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Rewinds the media to the beginning.\n\nThis is the same as seeking to zero time.\n\n@return true if rewinding, false otherwise.\n@see GetTime, Pause, Play, Seek" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Rewind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::BinkMediaPlayer_eventRewind_Parms), Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Rewind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Rewind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics
	{
		struct BinkMediaPlayer_eventSeek_Parms
		{
			FTimespan InTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventSeek_Parms, InTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime_MetaData)) };
	void Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSeek_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSeek_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Seeks to the specified playback time.\n\x09 *\n\x09 * @param InTime The playback time to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetTime, Rewind\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Seeks to the specified playback time.\n\n@param InTime The playback time to set.\n@return true on success, false otherwise.\n@see GetTime, Rewind" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Seek", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::BinkMediaPlayer_eventSeek_Parms), Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics
	{
		struct BinkMediaPlayer_eventSetLooping_Parms
		{
			bool InLooping;
			bool ReturnValue;
		};
		static void NewProp_InLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InLooping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSetLooping_Parms*)Obj)->InLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping = { "InLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_InLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Enables or disables playback looping.\n\x09 *\n\x09 * @param Looping Whether playback should be looped.\n\x09 * @return true on success, false otherwise.\n\x09 * @see IsLooping\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Enables or disables playback looping.\n\n@param Looping Whether playback should be looped.\n@return true on success, false otherwise.\n@see IsLooping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SetLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::BinkMediaPlayer_eventSetLooping_Parms), Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics
	{
		struct BinkMediaPlayer_eventSetRate_Parms
		{
			float Rate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventSetRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSetRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSetRate_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Changes the media's playback rate.\n\x09 *\n\x09 * @param Rate The playback rate to set.\n\x09 * @return true on success, false otherwise.\n\x09 * @see GetRate, SupportsRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Changes the media's playback rate.\n\n@param Rate The playback rate to set.\n@return true on success, false otherwise.\n@see GetRate, SupportsRate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SetRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::BinkMediaPlayer_eventSetRate_Parms), Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SetRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SetRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics
	{
		struct BinkMediaPlayer_eventSetVolume_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventSetVolume_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Changes the media's volume\n\x09 *\n\x09 * @param Rate The playback volume to set. 0 to 1\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Changes the media's volume\n\n@param Rate The playback volume to set. 0 to 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::BinkMediaPlayer_eventSetVolume_Parms), Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Stops playback and unloads the video from memory. If you want to start the video again you'll need to call InitializePlayer.\n\x09 * MediaEvent will broadcast EMediaEvent::MediaClosed.\n\x09 * @return true on success, false otherwise.\n\x09 * @see InitializePlayer, IsStopped, Play\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Stops playback and unloads the video from memory. If you want to start the video again you'll need to call InitializePlayer.\nMediaEvent will broadcast EMediaEvent::MediaClosed.\n@return true on success, false otherwise.\n@see InitializePlayer, IsStopped, Play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics
	{
		struct BinkMediaPlayer_eventSupportsRate_Parms
		{
			float Rate;
			bool Unthinned;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static void NewProp_Unthinned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Unthinned;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaPlayer_eventSupportsRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSupportsRate_Parms*)Obj)->Unthinned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned = { "Unthinned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsRate_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSupportsRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsRate_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_Unthinned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether the specified playback rate is supported.\n\x09 *\n\x09 * @param Rate The playback rate to check.\n\x09 * @param Unthinned Whether no frames should be dropped at the given rate.\n\x09 * @see SupportsScrubbing, SupportsSeeking\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether the specified playback rate is supported.\n\n@param Rate The playback rate to check.\n@param Unthinned Whether no frames should be dropped at the given rate.\n@see SupportsScrubbing, SupportsSeeking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SupportsRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::BinkMediaPlayer_eventSupportsRate_Parms), Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics
	{
		struct BinkMediaPlayer_eventSupportsScrubbing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSupportsScrubbing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsScrubbing_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether the currently loaded media supports scrubbing.\n\x09 *\n\x09 * @return true if scrubbing is supported, false otherwise.\n\x09 * @see SupportsRate, SupportsSeeking\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether the currently loaded media supports scrubbing.\n\n@return true if scrubbing is supported, false otherwise.\n@see SupportsRate, SupportsSeeking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SupportsScrubbing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::BinkMediaPlayer_eventSupportsScrubbing_Parms), Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics
	{
		struct BinkMediaPlayer_eventSupportsSeeking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BinkMediaPlayer_eventSupportsSeeking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BinkMediaPlayer_eventSupportsSeeking_Parms), &Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/**\n\x09 * Checks whether the currently loaded media can jump to a certain position.\n\x09 *\n\x09 * @return true if seeking is supported, false otherwise.\n\x09 * @see SupportsRate, SupportsScrubbing\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Checks whether the currently loaded media can jump to a certain position.\n\n@return true if seeking is supported, false otherwise.\n@see SupportsRate, SupportsScrubbing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaPlayer, nullptr, "SupportsSeeking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::BinkMediaPlayer_eventSupportsSeeking_Parms), Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinkMediaPlayer);
	UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister()
	{
		return UBinkMediaPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBinkMediaPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaOpened_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaOpened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaReachedEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaReachedEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackSuspended_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackSuspended;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[];
#endif
		static void NewProp_Looping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartImmediately_MetaData[];
#endif
		static void NewProp_StartImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartImmediately;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayedOpen_MetaData[];
#endif
		static void NewProp_DelayedOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DelayedOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkDestinationUpperLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinkDestinationUpperLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkDestinationLowerRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BinkDestinationLowerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkDrawStyle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinkDrawStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinkLayerDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BinkLayerDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBinkMediaPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBinkMediaPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinkMediaPlayer_CanPause, "CanPause" }, // 1224563939
		{ &Z_Construct_UFunction_UBinkMediaPlayer_CanPlay, "CanPlay" }, // 1372894446
		{ &Z_Construct_UFunction_UBinkMediaPlayer_CloseUrl, "CloseUrl" }, // 1627854704
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Draw, "Draw" }, // 601980702
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetDuration, "GetDuration" }, // 529951258
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetRate, "GetRate" }, // 1002886570
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetTime, "GetTime" }, // 2166801227
		{ &Z_Construct_UFunction_UBinkMediaPlayer_GetUrl, "GetUrl" }, // 3617853624
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsInitialized, "IsInitialized" }, // 4021905914
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsLooping, "IsLooping" }, // 735701155
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsPaused, "IsPaused" }, // 2651557091
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsPlaying, "IsPlaying" }, // 317862822
		{ &Z_Construct_UFunction_UBinkMediaPlayer_IsStopped, "IsStopped" }, // 138121174
		{ &Z_Construct_UFunction_UBinkMediaPlayer_OpenUrl, "OpenUrl" }, // 3638052504
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Pause, "Pause" }, // 4202941074
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Play, "Play" }, // 382537595
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Rewind, "Rewind" }, // 4006446912
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Seek, "Seek" }, // 1285702929
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SetLooping, "SetLooping" }, // 3866059333
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SetRate, "SetRate" }, // 1180388282
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SetVolume, "SetVolume" }, // 123438139
		{ &Z_Construct_UFunction_UBinkMediaPlayer_Stop, "Stop" }, // 2513161328
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SupportsRate, "SupportsRate" }, // 2003173530
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SupportsScrubbing, "SupportsScrubbing" }, // 1957603912
		{ &Z_Construct_UFunction_UBinkMediaPlayer_SupportsSeeking, "SupportsSeeking" }, // 1698012335
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a media player asset that can play movies and other media.\n *\n * This class is represents a media URL along with a corresponding media player\n * for exposing media playback functionality to the Engine and to Blueprints.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BinkMediaPlayer.h" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Implements a media player asset that can play movies and other media.\n\nThis class is represents a media URL along with a corresponding media player\nfor exposing media playback functionality to the Engine and to Blueprints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/** Holds a delegate that is invoked when a media source has been closed. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Holds a delegate that is invoked when a media source has been closed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed = { "OnMediaClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, OnMediaClosed), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed_MetaData)) }; // 482572340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/** Holds a delegate that is invoked when a media source has been opened. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Holds a delegate that is invoked when a media source has been opened." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened = { "OnMediaOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, OnMediaOpened), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaOpened__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened_MetaData)) }; // 2087647645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/** Holds a delegate that is invoked when a media source has been opened. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Holds a delegate that is invoked when a media source has been opened." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd = { "OnMediaReachedEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, OnMediaReachedEnd), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd_MetaData)) }; // 1288945615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended_MetaData[] = {
		{ "Category", "Media|BinkMediaPlayer" },
		{ "Comment", "/** A delegate that is invoked when media playback has been suspended. */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "A delegate that is invoked when media playback has been suspended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended = { "OnPlaybackSuspended", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, OnPlaybackSuspended), Z_Construct_UDelegateFunction_BinkMediaPlayer_OnBinkMediaPlayerMediaEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended_MetaData)) }; // 4246639335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether playback should loop when it reaches the end. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Whether playback should loop when it reaches the end." },
	};
#endif
	void Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((UBinkMediaPlayer*)Obj)->Looping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBinkMediaPlayer), &Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether playback start immediately, or wait for blueprint to start it. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Whether playback start immediately, or wait for blueprint to start it." },
	};
#endif
	void Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_SetBit(void* Obj)
	{
		((UBinkMediaPlayer*)Obj)->StartImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately = { "StartImmediately", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBinkMediaPlayer), &Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** To reduce memory use, don't immediately open the bink until it is first played. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "To reduce memory use, don't immediately open the bink until it is first played." },
	};
#endif
	void Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_SetBit(void* Obj)
	{
		((UBinkMediaPlayer*)Obj)->DelayedOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen = { "DelayedOpen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBinkMediaPlayer), &Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify the sounds to open at playback." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft = { "BinkDestinationUpperLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkDestinationUpperLeft), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify the sounds to open at playback." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight = { "BinkDestinationLowerRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkDestinationLowerRight), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The path or URL to the media file to be played. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "The path or URL to the media file to be played." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, URL), METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Used to specify the how the video should be buffered. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify the how the video should be buffered." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode = { "BinkBufferMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkBufferMode), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkBufferModes, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode_MetaData)) }; // 240530158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify the sounds to open at playback." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack = { "BinkSoundTrack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkSoundTrack), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkSoundTrack, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack_MetaData)) }; // 380036910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Used to specify the sounds to open at playback. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify the sounds to open at playback." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart = { "BinkSoundTrackStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkSoundTrackStart), METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Used to specify how the movie is drawn. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify how the movie is drawn." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle = { "BinkDrawStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkDrawStyle), Z_Construct_UEnum_BinkMediaPlayer_EBinkMediaPlayerBinkDrawStyle, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle_MetaData)) }; // 2000455741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Used to specify the render order. */" },
		{ "ModuleRelativePath", "Public/BinkMediaPlayer.h" },
		{ "ToolTip", "Used to specify the render order." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth = { "BinkLayerDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaPlayer, BinkLayerDepth), METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaOpened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnMediaReachedEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_OnPlaybackSuspended,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_Looping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_StartImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_DelayedOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationUpperLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDestinationLowerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkBufferMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkSoundTrackStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkDrawStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaPlayer_Statics::NewProp_BinkLayerDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBinkMediaPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaPlayer_Statics::ClassParams = {
		&UBinkMediaPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBinkMediaPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBinkMediaPlayer()
	{
		if (!Z_Registration_Info_UClass_UBinkMediaPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaPlayer.OuterSingleton, Z_Construct_UClass_UBinkMediaPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBinkMediaPlayer.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UClass* StaticClass<UBinkMediaPlayer>()
	{
		return UBinkMediaPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaPlayer);
	UBinkMediaPlayer::~UBinkMediaPlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics::EnumInfo[] = {
		{ EBinkMediaPlayerBinkBufferModes_StaticEnum, TEXT("EBinkMediaPlayerBinkBufferModes"), &Z_Registration_Info_UEnum_EBinkMediaPlayerBinkBufferModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 240530158U) },
		{ EBinkMediaPlayerBinkSoundTrack_StaticEnum, TEXT("EBinkMediaPlayerBinkSoundTrack"), &Z_Registration_Info_UEnum_EBinkMediaPlayerBinkSoundTrack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 380036910U) },
		{ EBinkMediaPlayerBinkDrawStyle_StaticEnum, TEXT("EBinkMediaPlayerBinkDrawStyle"), &Z_Registration_Info_UEnum_EBinkMediaPlayerBinkDrawStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2000455741U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaPlayer, UBinkMediaPlayer::StaticClass, TEXT("UBinkMediaPlayer"), &Z_Registration_Info_UClass_UBinkMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaPlayer), 2847285725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_4047853506(TEXT("/Script/BinkMediaPlayer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
