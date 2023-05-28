// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertSequencerMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertSequencerMessages() {}
// Cross Module References
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerCloseEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerOpenEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerState();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumberRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus;
	static UEnum* EConcertMovieScenePlayerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertMovieScenePlayerStatus"));
		}
		return Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertMovieScenePlayerStatus>()
	{
		return EConcertMovieScenePlayerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enumerators[] = {
		{ "EConcertMovieScenePlayerStatus::Stopped", (int64)EConcertMovieScenePlayerStatus::Stopped },
		{ "EConcertMovieScenePlayerStatus::Playing", (int64)EConcertMovieScenePlayerStatus::Playing },
		{ "EConcertMovieScenePlayerStatus::Scrubbing", (int64)EConcertMovieScenePlayerStatus::Scrubbing },
		{ "EConcertMovieScenePlayerStatus::Jumping", (int64)EConcertMovieScenePlayerStatus::Jumping },
		{ "EConcertMovieScenePlayerStatus::Stepping", (int64)EConcertMovieScenePlayerStatus::Stepping },
		{ "EConcertMovieScenePlayerStatus::Paused", (int64)EConcertMovieScenePlayerStatus::Paused },
		{ "EConcertMovieScenePlayerStatus::MAX", (int64)EConcertMovieScenePlayerStatus::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum for the current Sequencer player status, should match EMovieScenePlayerStatus::Type\n * Defined here to not have a dependency on the MovieScene module.\n */" },
		{ "Jumping.Name", "EConcertMovieScenePlayerStatus::Jumping" },
		{ "MAX.Name", "EConcertMovieScenePlayerStatus::MAX" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "Paused.Name", "EConcertMovieScenePlayerStatus::Paused" },
		{ "Playing.Name", "EConcertMovieScenePlayerStatus::Playing" },
		{ "Scrubbing.Name", "EConcertMovieScenePlayerStatus::Scrubbing" },
		{ "Stepping.Name", "EConcertMovieScenePlayerStatus::Stepping" },
		{ "Stopped.Name", "EConcertMovieScenePlayerStatus::Stopped" },
		{ "ToolTip", "Enum for the current Sequencer player status, should match EMovieScenePlayerStatus::Type\nDefined here to not have a dependency on the MovieScene module." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertMovieScenePlayerStatus",
		"EConcertMovieScenePlayerStatus",
		Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus()
	{
		if (!Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerState;
class UScriptStruct* FConcertSequencerState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerState, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerState"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerState.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerState>()
{
	return FConcertSequencerState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopMode_MetaData[];
#endif
		static void NewProp_bLoopMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "Comment", "/** The full path name to the root sequence that is open on the sequencer */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The full path name to the root sequence that is open on the sequencer" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerState, SequenceObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** The time that the sequence is at */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The time that the sequence is at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerState, Time), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_MetaData[] = {
		{ "Comment", "/** The current status of the sequencer player */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The current status of the sequencer player" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus = { "PlayerStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerState, PlayerStatus), Z_Construct_UEnum_ConcertSyncCore_EConcertMovieScenePlayerStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_MetaData)) }; // 2813621040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange = { "PlaybackRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerState, PlaybackRange), Z_Construct_UScriptStruct_FFrameNumberRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "Comment", "/** The current playback speed */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The current playback speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerState, PlaybackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_SetBit(void* Obj)
	{
		((FConcertSequencerState*)Obj)->bLoopMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode = { "bLoopMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSequencerState), &Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_SequenceObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlayerStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewProp_bLoopMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerState",
		sizeof(FConcertSequencerState),
		alignof(FConcertSequencerState),
		Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerState()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerState.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent;
class UScriptStruct* FConcertSequencerOpenEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerOpenEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerOpenEvent>()
{
	return FConcertSequencerOpenEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that signals a Sequencer just been opened.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that signals a Sequencer just been opened." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerOpenEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "Comment", "/** The full path name to the root sequence of the sequencer that just opened. */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The full path name to the root sequence of the sequencer that just opened." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerOpenEvent, SequenceObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewProp_SequenceObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerOpenEvent",
		sizeof(FConcertSequencerOpenEvent),
		alignof(FConcertSequencerOpenEvent),
		Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerOpenEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent;
class UScriptStruct* FConcertSequencerCloseEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerCloseEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerCloseEvent>()
{
	return FConcertSequencerCloseEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bControllerClose_MetaData[];
#endif
		static void NewProp_bControllerClose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bControllerClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorsWithSequencerOpened_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorsWithSequencerOpened;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that signals a Sequencer just been closed.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that signals a Sequencer just been closed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerCloseEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "Comment", "/** The full path name to the root sequence of the sequencer that just closed. */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The full path name to the root sequence of the sequencer that just closed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerCloseEvent, SequenceObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_SetBit(void* Obj)
	{
		((FConcertSequencerCloseEvent*)Obj)->bControllerClose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose = { "bControllerClose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSequencerCloseEvent), &Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened = { "EditorsWithSequencerOpened", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerCloseEvent, EditorsWithSequencerOpened), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_SequenceObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_bControllerClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewProp_EditorsWithSequencerOpened,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerCloseEvent",
		sizeof(FConcertSequencerCloseEvent),
		alignof(FConcertSequencerCloseEvent),
		Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerCloseEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent;
class UScriptStruct* FConcertSequencerStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerStateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerStateEvent>()
{
	return FConcertSequencerStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that signals a sequencer UI has changed the current state\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that signals a sequencer UI has changed the current state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerStateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** The new state that the sequence is at */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "The new state that the sequence is at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerStateEvent, State), Z_Construct_UScriptStruct_FConcertSequencerState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State_MetaData)) }; // 3393670744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerStateEvent",
		sizeof(FConcertSequencerStateEvent),
		alignof(FConcertSequencerStateEvent),
		Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent;
class UScriptStruct* FConcertSequencerStateSyncEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerStateSyncEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerStateSyncEvent>()
{
	return FConcertSequencerStateSyncEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencerStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencerStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SequencerStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event that represent the current open sequencer states to a newly connected client\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "Event that represent the current open sequencer states to a newly connected client" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerStateSyncEvent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_Inner = { "SequencerStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertSequencerState, METADATA_PARAMS(nullptr, 0) }; // 3393670744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates = { "SequencerStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerStateSyncEvent, SequencerStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_MetaData)) }; // 3393670744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewProp_SequencerStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerStateSyncEvent",
		sizeof(FConcertSequencerStateSyncEvent),
		alignof(FConcertSequencerStateSyncEvent),
		Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent;
class UScriptStruct* FConcertSequencerTimeAdjustmentEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSequencerTimeAdjustmentEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSequencerTimeAdjustmentEvent>()
{
	return FConcertSequencerTimeAdjustmentEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SequenceObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An event that represents a time changes on the sequencer. This can happen via take recorder\n * which will shift the active take _if_ Start At Timecode is enabled.\n */" },
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
		{ "ToolTip", "An event that represents a time changes on the sequencer. This can happen via take recorder\nwhich will shift the active take _if_ Start At Timecode is enabled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSequencerTimeAdjustmentEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame = { "PlaybackStartFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerTimeAdjustmentEvent, PlaybackStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertSequencerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath = { "SequenceObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSequencerTimeAdjustmentEvent, SequenceObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_PlaybackStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewProp_SequenceObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSequencerTimeAdjustmentEvent",
		sizeof(FConcertSequencerTimeAdjustmentEvent),
		alignof(FConcertSequencerTimeAdjustmentEvent),
		Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::EnumInfo[] = {
		{ EConcertMovieScenePlayerStatus_StaticEnum, TEXT("EConcertMovieScenePlayerStatus"), &Z_Registration_Info_UEnum_EConcertMovieScenePlayerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2813621040U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::ScriptStructInfo[] = {
		{ FConcertSequencerState::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerState_Statics::NewStructOps, TEXT("ConcertSequencerState"), &Z_Registration_Info_UScriptStruct_ConcertSequencerState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerState), 3393670744U) },
		{ FConcertSequencerOpenEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics::NewStructOps, TEXT("ConcertSequencerOpenEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerOpenEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerOpenEvent), 950380146U) },
		{ FConcertSequencerCloseEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics::NewStructOps, TEXT("ConcertSequencerCloseEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerCloseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerCloseEvent), 3602559142U) },
		{ FConcertSequencerStateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics::NewStructOps, TEXT("ConcertSequencerStateEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerStateEvent), 2828167144U) },
		{ FConcertSequencerStateSyncEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics::NewStructOps, TEXT("ConcertSequencerStateSyncEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerStateSyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerStateSyncEvent), 1604609162U) },
		{ FConcertSequencerTimeAdjustmentEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics::NewStructOps, TEXT("ConcertSequencerTimeAdjustmentEvent"), &Z_Registration_Info_UScriptStruct_ConcertSequencerTimeAdjustmentEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSequencerTimeAdjustmentEvent), 4063543466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_1246777982(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
