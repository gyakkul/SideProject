// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneFwd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFwd() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieScenePlayerStatus;
	static UEnum* EMovieScenePlayerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieScenePlayerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieScenePlayerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePlayerStatus"));
		}
		return Z_Registration_Info_UEnum_EMovieScenePlayerStatus.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePlayerStatus::Type>()
	{
		return EMovieScenePlayerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::Enumerators[] = {
		{ "EMovieScenePlayerStatus::Stopped", (int64)EMovieScenePlayerStatus::Stopped },
		{ "EMovieScenePlayerStatus::Playing", (int64)EMovieScenePlayerStatus::Playing },
		{ "EMovieScenePlayerStatus::Scrubbing", (int64)EMovieScenePlayerStatus::Scrubbing },
		{ "EMovieScenePlayerStatus::Jumping", (int64)EMovieScenePlayerStatus::Jumping },
		{ "EMovieScenePlayerStatus::Stepping", (int64)EMovieScenePlayerStatus::Stepping },
		{ "EMovieScenePlayerStatus::Paused", (int64)EMovieScenePlayerStatus::Paused },
		{ "EMovieScenePlayerStatus::MAX", (int64)EMovieScenePlayerStatus::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "Jumping.Name", "EMovieScenePlayerStatus::Jumping" },
		{ "MAX.Name", "EMovieScenePlayerStatus::MAX" },
		{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
		{ "Paused.Name", "EMovieScenePlayerStatus::Paused" },
		{ "Playing.Name", "EMovieScenePlayerStatus::Playing" },
		{ "Scrubbing.Name", "EMovieScenePlayerStatus::Scrubbing" },
		{ "Stepping.Name", "EMovieScenePlayerStatus::Stepping" },
		{ "Stopped.Name", "EMovieScenePlayerStatus::Stopped" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieScenePlayerStatus",
		"EMovieScenePlayerStatus::Type",
		Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus()
	{
		if (!Z_Registration_Info_UEnum_EMovieScenePlayerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieScenePlayerStatus.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieScenePlayerStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneEvaluationType;
	static UEnum* EMovieSceneEvaluationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneEvaluationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneEvaluationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneEvaluationType"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneEvaluationType.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneEvaluationType>()
	{
		return EMovieSceneEvaluationType_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::Enumerators[] = {
		{ "EMovieSceneEvaluationType::FrameLocked", (int64)EMovieSceneEvaluationType::FrameLocked },
		{ "EMovieSceneEvaluationType::WithSubFrames", (int64)EMovieSceneEvaluationType::WithSubFrames },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FrameLocked.Comment", "/** Play the sequence frame-locked to its playback rate (snapped to the tick resolution - no sub-frames) */" },
		{ "FrameLocked.Name", "EMovieSceneEvaluationType::FrameLocked" },
		{ "FrameLocked.ToolTip", "Play the sequence frame-locked to its playback rate (snapped to the tick resolution - no sub-frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
		{ "WithSubFrames.Comment", "/** Play the sequence in real-time, with sub-frame interpolation if necessary */" },
		{ "WithSubFrames.Name", "EMovieSceneEvaluationType::WithSubFrames" },
		{ "WithSubFrames.ToolTip", "Play the sequence in real-time, with sub-frame interpolation if necessary" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieSceneEvaluationType",
		"EMovieSceneEvaluationType",
		Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneEvaluationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneEvaluationType.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneEvaluationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateClockSource;
	static UEnum* EUpdateClockSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUpdateClockSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUpdateClockSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdateClockSource, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EUpdateClockSource"));
		}
		return Z_Registration_Info_UEnum_EUpdateClockSource.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EUpdateClockSource>()
	{
		return EUpdateClockSource_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::Enumerators[] = {
		{ "EUpdateClockSource::Tick", (int64)EUpdateClockSource::Tick },
		{ "EUpdateClockSource::Platform", (int64)EUpdateClockSource::Platform },
		{ "EUpdateClockSource::Audio", (int64)EUpdateClockSource::Audio },
		{ "EUpdateClockSource::RelativeTimecode", (int64)EUpdateClockSource::RelativeTimecode },
		{ "EUpdateClockSource::Timecode", (int64)EUpdateClockSource::Timecode },
		{ "EUpdateClockSource::PlayEveryFrame", (int64)EUpdateClockSource::PlayEveryFrame },
		{ "EUpdateClockSource::Custom", (int64)EUpdateClockSource::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::Enum_MetaDataParams[] = {
		{ "Audio.Comment", "/** Use the audio clock for timing. Does not honor world or actor pause state. */" },
		{ "Audio.Name", "EUpdateClockSource::Audio" },
		{ "Audio.ToolTip", "Use the audio clock for timing. Does not honor world or actor pause state." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum used to define how to update to a particular time\n */" },
		{ "Custom.Comment", "/** Custom clock source created and defined externally. */" },
		{ "Custom.Name", "EUpdateClockSource::Custom" },
		{ "Custom.ToolTip", "Custom clock source created and defined externally." },
		{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
		{ "Platform.Comment", "/** Use the platform clock for timing. Does not honor world or actor pause state. */" },
		{ "Platform.Name", "EUpdateClockSource::Platform" },
		{ "Platform.ToolTip", "Use the platform clock for timing. Does not honor world or actor pause state." },
		{ "PlayEveryFrame.Comment", "/** Debugging Tool: Hold on each whole frame for a Sequencer.SecondsPerFrame many wall-clock seconds before advancing to the next one. Does not honor world or actor pause state or time dilation and audio will be out of sync. */" },
		{ "PlayEveryFrame.Name", "EUpdateClockSource::PlayEveryFrame" },
		{ "PlayEveryFrame.ToolTip", "Debugging Tool: Hold on each whole frame for a Sequencer.SecondsPerFrame many wall-clock seconds before advancing to the next one. Does not honor world or actor pause state or time dilation and audio will be out of sync." },
		{ "RelativeTimecode.Comment", "/** Time relative to the timecode provider for timing. Does not honor world or actor pause state. */" },
		{ "RelativeTimecode.Name", "EUpdateClockSource::RelativeTimecode" },
		{ "RelativeTimecode.ToolTip", "Time relative to the timecode provider for timing. Does not honor world or actor pause state." },
		{ "Tick.Comment", "/** Use the default world tick delta for timing. Honors world and actor pause state, but is susceptible to accumulation errors */" },
		{ "Tick.Name", "EUpdateClockSource::Tick" },
		{ "Tick.ToolTip", "Use the default world tick delta for timing. Honors world and actor pause state, but is susceptible to accumulation errors" },
		{ "Timecode.Comment", "/** Use current timecode provider for timing. Does not honor world or actor pause state. */" },
		{ "Timecode.Name", "EUpdateClockSource::Timecode" },
		{ "Timecode.ToolTip", "Use current timecode provider for timing. Does not honor world or actor pause state." },
		{ "ToolTip", "Enum used to define how to update to a particular time" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EUpdateClockSource",
		"EUpdateClockSource",
		Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource()
	{
		if (!Z_Registration_Info_UEnum_EUpdateClockSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateClockSource.InnerSingleton, Z_Construct_UEnum_MovieScene_EUpdateClockSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUpdateClockSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneSequenceFlags;
	static UEnum* EMovieSceneSequenceFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneSequenceFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneSequenceFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneSequenceFlags"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneSequenceFlags.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneSequenceFlags>()
	{
		return EMovieSceneSequenceFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::Enumerators[] = {
		{ "EMovieSceneSequenceFlags::None", (int64)EMovieSceneSequenceFlags::None },
		{ "EMovieSceneSequenceFlags::Volatile", (int64)EMovieSceneSequenceFlags::Volatile },
		{ "EMovieSceneSequenceFlags::BlockingEvaluation", (int64)EMovieSceneSequenceFlags::BlockingEvaluation },
		{ "EMovieSceneSequenceFlags::DynamicWeighting", (int64)EMovieSceneSequenceFlags::DynamicWeighting },
		{ "EMovieSceneSequenceFlags::InheritedFlags", (int64)EMovieSceneSequenceFlags::InheritedFlags },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlockingEvaluation.Comment", "/**\n\x09 * Indicates that a sequence must fully evaluate and apply its state every time it is updated, blocking until complete. Should be used sparingly as it will severely affect performance.\n\x09 */" },
		{ "BlockingEvaluation.Name", "EMovieSceneSequenceFlags::BlockingEvaluation" },
		{ "BlockingEvaluation.ToolTip", "Indicates that a sequence must fully evaluate and apply its state every time it is updated, blocking until complete. Should be used sparingly as it will severely affect performance." },
		{ "Comment", "/**\n * Bitfield flags that define special behavior for any UMovieSceneSequence.\n */" },
		{ "DynamicWeighting.Comment", "/**\n\x09 * Indicates that a sequence will utilize dynamic weighting when it is played back. Setting this flag ensures that initial values are cached correctly so the sequence can be blended into and out of\n\x09 */" },
		{ "DynamicWeighting.Name", "EMovieSceneSequenceFlags::DynamicWeighting" },
		{ "DynamicWeighting.ToolTip", "Indicates that a sequence will utilize dynamic weighting when it is played back. Setting this flag ensures that initial values are cached correctly so the sequence can be blended into and out of" },
		{ "InheritedFlags.Comment", "/** Symbolic entry for all flags that should be inherited by parent sequences when present on a sub sequence */" },
		{ "InheritedFlags.Hidden", "" },
		{ "InheritedFlags.Name", "EMovieSceneSequenceFlags::InheritedFlags" },
		{ "InheritedFlags.ToolTip", "Symbolic entry for all flags that should be inherited by parent sequences when present on a sub sequence" },
		{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
		{ "None.Comment", "/** Symbolic entry for no flags */" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMovieSceneSequenceFlags::None" },
		{ "None.ToolTip", "Symbolic entry for no flags" },
		{ "ToolTip", "Bitfield flags that define special behavior for any UMovieSceneSequence." },
		{ "Volatile.Comment", "/**\n\x09 * Flag signifying that this sequence can change dynamically at runtime or during the game so the template must be checked for validity and recompiled as necessary before each evaluation.\n\x09 * The absence of this flag will result in the same compiled data being used for the duration of the program, as well as being pre-built during cook. As such, any dynamic changes to the \n\x09 * sequence will not be reflected in the evaluation itself. This flag *must* be set if *any* procedural changes will be made to the source sequence data in-game.\n\x09 */" },
		{ "Volatile.Name", "EMovieSceneSequenceFlags::Volatile" },
		{ "Volatile.ToolTip", "Flag signifying that this sequence can change dynamically at runtime or during the game so the template must be checked for validity and recompiled as necessary before each evaluation.\nThe absence of this flag will result in the same compiled data being used for the duration of the program, as well as being pre-built during cook. As such, any dynamic changes to the\nsequence will not be reflected in the evaluation itself. This flag *must* be set if *any* procedural changes will be made to the source sequence data in-game." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieSceneSequenceFlags",
		"EMovieSceneSequenceFlags",
		Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneSequenceFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneSequenceFlags.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneSequenceFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneServerClientMask;
	static UEnum* EMovieSceneServerClientMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneServerClientMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneServerClientMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneServerClientMask"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneServerClientMask.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneServerClientMask>()
	{
		return EMovieSceneServerClientMask_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::Enumerators[] = {
		{ "EMovieSceneServerClientMask::None", (int64)EMovieSceneServerClientMask::None },
		{ "EMovieSceneServerClientMask::Server", (int64)EMovieSceneServerClientMask::Server },
		{ "EMovieSceneServerClientMask::Client", (int64)EMovieSceneServerClientMask::Client },
		{ "EMovieSceneServerClientMask::All", (int64)EMovieSceneServerClientMask::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/**\n * \n */" },
		{ "All.Hidden", "" },
		{ "All.Name", "EMovieSceneServerClientMask::All" },
		{ "Bitflags", "" },
		{ "Client.Comment", "/**\n * \n */" },
		{ "Client.Name", "EMovieSceneServerClientMask::Client" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMovieSceneServerClientMask::None" },
		{ "Server.Comment", "/**\n * \n */" },
		{ "Server.Name", "EMovieSceneServerClientMask::Server" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieSceneServerClientMask",
		"EMovieSceneServerClientMask",
		Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneServerClientMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneServerClientMask.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneServerClientMask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h_Statics::EnumInfo[] = {
		{ EMovieScenePlayerStatus_StaticEnum, TEXT("EMovieScenePlayerStatus"), &Z_Registration_Info_UEnum_EMovieScenePlayerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555802701U) },
		{ EMovieSceneEvaluationType_StaticEnum, TEXT("EMovieSceneEvaluationType"), &Z_Registration_Info_UEnum_EMovieSceneEvaluationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2615994803U) },
		{ EUpdateClockSource_StaticEnum, TEXT("EUpdateClockSource"), &Z_Registration_Info_UEnum_EUpdateClockSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3237436252U) },
		{ EMovieSceneSequenceFlags_StaticEnum, TEXT("EMovieSceneSequenceFlags"), &Z_Registration_Info_UEnum_EMovieSceneSequenceFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3684814241U) },
		{ EMovieSceneServerClientMask_StaticEnum, TEXT("EMovieSceneServerClientMask"), &Z_Registration_Info_UEnum_EMovieSceneServerClientMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3878148798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h_2467030916(TEXT("/Script/MovieScene"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
