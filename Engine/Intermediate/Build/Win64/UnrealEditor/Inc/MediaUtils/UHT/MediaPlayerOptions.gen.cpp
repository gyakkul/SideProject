// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlayerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	MEDIAUTILS_API UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride();
	MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions();
	MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions();
	UPackage* Z_Construct_UPackage__Script_MediaUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride;
	static UEnum* EMediaPlayerOptionBooleanOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("EMediaPlayerOptionBooleanOverride"));
		}
		return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.OuterSingleton;
	}
	template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionBooleanOverride>()
	{
		return EMediaPlayerOptionBooleanOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enumerators[] = {
		{ "EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting", (int64)EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting },
		{ "EMediaPlayerOptionBooleanOverride::Enabled", (int64)EMediaPlayerOptionBooleanOverride::Enabled },
		{ "EMediaPlayerOptionBooleanOverride::Disabled", (int64)EMediaPlayerOptionBooleanOverride::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EMediaPlayerOptionBooleanOverride::Disabled" },
		{ "Enabled.Name", "EMediaPlayerOptionBooleanOverride::Enabled" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
		{ "UseMediaPlayerSetting.Name", "EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		"EMediaPlayerOptionBooleanOverride",
		"EMediaPlayerOptionBooleanOverride",
		Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton, Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions;
class UScriptStruct* FMediaPlayerTrackOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerTrackOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.OuterSingleton;
}
template<> MEDIAUTILS_API UScriptStruct* StaticStruct<FMediaPlayerTrackOptions>()
{
	return FMediaPlayerTrackOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Audio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Caption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Script;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Video;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerTrackOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Audio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Caption), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Metadata), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Script), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Video), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		&NewStructOps,
		"MediaPlayerTrackOptions",
		sizeof(FMediaPlayerTrackOptions),
		alignof(FMediaPlayerTrackOptions),
		Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.InnerSingleton, Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaPlayerOptions;
class UScriptStruct* FMediaPlayerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaPlayerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerOptions, (UObject*)Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerOptions.OuterSingleton;
}
template<> MEDIAUTILS_API UScriptStruct* StaticStruct<FMediaPlayerOptions>()
{
	return FMediaPlayerOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeekTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeekTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayOnOpen_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayOnOpen;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Loop_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Loop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData)) }; // 218945444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime = { "SeekTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerOptions, SeekTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerOptions, PlayOnOpen), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData)) }; // 3471032472
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerOptions, Loop), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_MetaData)) }; // 3471032472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		&NewStructOps,
		"MediaPlayerOptions",
		sizeof(FMediaPlayerOptions),
		alignof(FMediaPlayerOptions),
		Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaPlayerOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaPlayerOptions.InnerSingleton, Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaPlayerOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::EnumInfo[] = {
		{ EMediaPlayerOptionBooleanOverride_StaticEnum, TEXT("EMediaPlayerOptionBooleanOverride"), &Z_Registration_Info_UEnum_EMediaPlayerOptionBooleanOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3471032472U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::ScriptStructInfo[] = {
		{ FMediaPlayerTrackOptions::StaticStruct, Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewStructOps, TEXT("MediaPlayerTrackOptions"), &Z_Registration_Info_UScriptStruct_MediaPlayerTrackOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaPlayerTrackOptions), 218945444U) },
		{ FMediaPlayerOptions::StaticStruct, Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewStructOps, TEXT("MediaPlayerOptions"), &Z_Registration_Info_UScriptStruct_MediaPlayerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaPlayerOptions), 393372981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_1129362507(TEXT("/Script/MediaUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
