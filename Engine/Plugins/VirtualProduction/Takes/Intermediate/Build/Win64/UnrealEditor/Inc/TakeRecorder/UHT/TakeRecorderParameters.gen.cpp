// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Recorder/TakeRecorderParameters.h"
#include "TrackRecorders/IMovieSceneTrackRecorderHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderParameters() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	TAKERECORDER_API UEnum* Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderParameters();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderProjectParameters();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderUserParameters();
	TAKETRACKRECORDERS_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderTrackSettings();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters;
class UScriptStruct* FTakeRecorderUserParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeRecorderUserParameters, (UObject*)Z_Construct_UPackage__Script_TakeRecorder(), TEXT("TakeRecorderUserParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters.OuterSingleton;
}
template<> TAKERECORDER_API UScriptStruct* StaticStruct<FTakeRecorderUserParameters>()
{
	return FTakeRecorderUserParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaximizeViewport_MetaData[];
#endif
		static void NewProp_bMaximizeViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaximizeViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CountdownSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPlayhead_MetaData[];
#endif
		static void NewProp_bResetPlayhead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPlayhead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtPlaybackEnd_MetaData[];
#endif
		static void NewProp_bStopAtPlaybackEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtPlaybackEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveRedundantTracks_MetaData[];
#endif
		static void NewProp_bRemoveRedundantTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveRedundantTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReduceKeysTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReduceKeysTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveRecordedAssets_MetaData[];
#endif
		static void NewProp_bSaveRecordedAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveRecordedAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLock_MetaData[];
#endif
		static void NewProp_bAutoLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSerialize_MetaData[];
#endif
		static void NewProp_bAutoSerialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSerialize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeRecorderUserParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Whether to maximize the viewport (enter Immersive Mode) when recording */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Whether to maximize the viewport (enter Immersive Mode) when recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bMaximizeViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport = { "bMaximizeViewport", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_CountdownSeconds_MetaData[] = {
		{ "Category", "User Settings" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Delay that we will use before starting recording */" },
		{ "DisplayName", "Countdown" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Delay that we will use before starting recording" },
		{ "UIMax", "60.0" },
		{ "UIMin", "0.0" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_CountdownSeconds = { "CountdownSeconds", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderUserParameters, CountdownSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_CountdownSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_CountdownSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_EngineTimeDilation_MetaData[] = {
		{ "Category", "User Settings" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** The engine time dilation to apply during the recording */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "The engine time dilation to apply during the recording" },
		{ "UIMin", "0.00001" },
		{ "Units", "Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_EngineTimeDilation = { "EngineTimeDilation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderUserParameters, EngineTimeDilation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_EngineTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_EngineTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Reset playhead to beginning of the playback range when starting recording */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Reset playhead to beginning of the playback range when starting recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bResetPlayhead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead = { "bResetPlayhead", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Automatically stop recording when reaching the end of the playback range */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Automatically stop recording when reaching the end of the playback range" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bStopAtPlaybackEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd = { "bStopAtPlaybackEnd", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Recommended for use with recorded spawnables. Beware that changes to actor instances in the map after recording may alter the recording when played back */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Recommended for use with recorded spawnables. Beware that changes to actor instances in the map after recording may alter the recording when played back" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bRemoveRedundantTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks = { "bRemoveRedundantTracks", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_ReduceKeysTolerance_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Tolerance to use when reducing keys */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Tolerance to use when reducing keys" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_ReduceKeysTolerance = { "ReduceKeysTolerance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderUserParameters, ReduceKeysTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_ReduceKeysTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_ReduceKeysTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Whether to save recorded level sequences and assets when done recording */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Whether to save recorded level sequences and assets when done recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bSaveRecordedAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets = { "bSaveRecordedAssets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Whether to lock the level sequence when done recording */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Whether to lock the level sequence when done recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bAutoLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock = { "bAutoLock", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** Whether to incrementally serialize and store some data while recording*/" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Whether to incrementally serialize and store some data while recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize_SetBit(void* Obj)
	{
		((FTakeRecorderUserParameters*)Obj)->bAutoSerialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize = { "bAutoSerialize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderUserParameters), &Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bMaximizeViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_CountdownSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_EngineTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bResetPlayhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bStopAtPlaybackEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bRemoveRedundantTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_ReduceKeysTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bSaveRecordedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewProp_bAutoSerialize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
		nullptr,
		&NewStructOps,
		"TakeRecorderUserParameters",
		sizeof(FTakeRecorderUserParameters),
		alignof(FTakeRecorderUserParameters),
		Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderUserParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters.InnerSingleton, Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters;
class UScriptStruct* FTakeRecorderProjectParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters, (UObject*)Z_Construct_UPackage__Script_TakeRecorder(), TEXT("TakeRecorderProjectParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters.OuterSingleton;
}
template<> TAKERECORDER_API UScriptStruct* StaticStruct<FTakeRecorderProjectParameters>()
{
	return FTakeRecorderProjectParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTakeSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTakeSaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakeSaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSlate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSlate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecordingClockSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordingClockSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordingClockSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartAtCurrentTimecode_MetaData[];
#endif
		static void NewProp_bStartAtCurrentTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAtCurrentTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordTimecode_MetaData[];
#endif
		static void NewProp_bRecordTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordSourcesIntoSubSequences_MetaData[];
#endif
		static void NewProp_bRecordSourcesIntoSubSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordSourcesIntoSubSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordToPossessable_MetaData[];
#endif
		static void NewProp_bRecordToPossessable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordToPossessable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNotifications_MetaData[];
#endif
		static void NewProp_bShowNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNotifications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeRecorderProjectParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RootTakeSaveDir_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** The root of the directory in which to save recorded takes. */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "The root of the directory in which to save recorded takes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RootTakeSaveDir = { "RootTakeSaveDir", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderProjectParameters, RootTakeSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RootTakeSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RootTakeSaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_TakeSaveDir_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * The name of the directory in which to save recorded takes. Supports any of the following format specifiers that will be substituted when a take is recorded:\n\x09 * {day}       - The day of the timestamp for the start of the recording.\n\x09 * {month}     - The month of the timestamp for the start of the recording.\n\x09 * {year}      - The year of the timestamp for the start of the recording.\n\x09 * {hour}      - The hour of the timestamp for the start of the recording.\n\x09 * {minute}    - The minute of the timestamp for the start of the recording.\n\x09 * {second}    - The second of the timestamp for the start of the recording.\n\x09 * {take}      - The take number.\n\x09 * {slate}     - The slate string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "The name of the directory in which to save recorded takes. Supports any of the following format specifiers that will be substituted when a take is recorded:\n{day}       - The day of the timestamp for the start of the recording.\n{month}     - The month of the timestamp for the start of the recording.\n{year}      - The year of the timestamp for the start of the recording.\n{hour}      - The hour of the timestamp for the start of the recording.\n{minute}    - The minute of the timestamp for the start of the recording.\n{second}    - The second of the timestamp for the start of the recording.\n{take}      - The take number.\n{slate}     - The slate string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_TakeSaveDir = { "TakeSaveDir", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderProjectParameters, TakeSaveDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_TakeSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_TakeSaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultSlate_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * The default name to use for the Slate information\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "The default name to use for the Slate information" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultSlate = { "DefaultSlate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderProjectParameters, DefaultSlate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultSlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultSlate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * The clock source to use when recording\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "The clock source to use when recording" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource = { "RecordingClockSource", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderProjectParameters, RecordingClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource_MetaData)) }; // 3237436252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * If enabled, track sections will start at the current timecode. Otherwise, 0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "If enabled, track sections will start at the current timecode. Otherwise, 0." },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_SetBit(void* Obj)
	{
		((FTakeRecorderProjectParameters*)Obj)->bStartAtCurrentTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode = { "bStartAtCurrentTimecode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderProjectParameters), &Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * If enabled, timecode will be recorded into each actor track\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "If enabled, timecode will be recorded into each actor track" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode_SetBit(void* Obj)
	{
		((FTakeRecorderProjectParameters*)Obj)->bRecordTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode = { "bRecordTimecode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderProjectParameters), &Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09* If enabled, each Source will be recorded into a separate Sequence and embedded in the Root Sequence will link to them via Subscenes track.\n\x09* If disabled, all Sources will be recorded into the Root Sequence, and you will not be able to swap between various takes of specific source\n\x09* using the Sequencer Take ui. This can still be done via copying and pasting between sequences if needed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "If enabled, each Source will be recorded into a separate Sequence and embedded in the Root Sequence will link to them via Subscenes track.\nIf disabled, all Sources will be recorded into the Root Sequence, and you will not be able to swap between various takes of specific source\nusing the Sequencer Take ui. This can still be done via copying and pasting between sequences if needed." },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences_SetBit(void* Obj)
	{
		((FTakeRecorderProjectParameters*)Obj)->bRecordSourcesIntoSubSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences = { "bRecordSourcesIntoSubSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderProjectParameters), &Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/*\n\x09 * If enabled, all recorded actors will be recorded to possessable object bindings in Sequencer. If disabled, all recorded actors will be \n\x09 * recorded to spawnable object bindings in Sequencer. This can be overridden per actor source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "* If enabled, all recorded actors will be recorded to possessable object bindings in Sequencer. If disabled, all recorded actors will be\n* recorded to spawnable object bindings in Sequencer. This can be overridden per actor source." },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable_SetBit(void* Obj)
	{
		((FTakeRecorderProjectParameters*)Obj)->bRecordToPossessable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable = { "bRecordToPossessable", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderProjectParameters), &Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks_Inner = { "DefaultTracks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTakeRecorderTrackSettings, METADATA_PARAMS(nullptr, 0) }; // 1425196939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** List of property names for which movie scene tracks will always record. */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "List of property names for which movie scene tracks will always record." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks = { "DefaultTracks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderProjectParameters, DefaultTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks_MetaData)) }; // 1425196939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Whether to show notification windows or not when recording */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Whether to show notification windows or not when recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications_SetBit(void* Obj)
	{
		((FTakeRecorderProjectParameters*)Obj)->bShowNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications = { "bShowNotifications", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderProjectParameters), &Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RootTakeSaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_TakeSaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultSlate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_RecordingClockSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bStartAtCurrentTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordSourcesIntoSubSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bRecordToPossessable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_DefaultTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewProp_bShowNotifications,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
		nullptr,
		&NewStructOps,
		"TakeRecorderProjectParameters",
		sizeof(FTakeRecorderProjectParameters),
		alignof(FTakeRecorderProjectParameters),
		Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderProjectParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters.InnerSingleton, Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETakeRecorderMode;
	static UEnum* ETakeRecorderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETakeRecorderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode, (UObject*)Z_Construct_UPackage__Script_TakeRecorder(), TEXT("ETakeRecorderMode"));
		}
		return Z_Registration_Info_UEnum_ETakeRecorderMode.OuterSingleton;
	}
	template<> TAKERECORDER_API UEnum* StaticEnum<ETakeRecorderMode>()
	{
		return ETakeRecorderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::Enumerators[] = {
		{ "ETakeRecorderMode::RecordNewSequence", (int64)ETakeRecorderMode::RecordNewSequence },
		{ "ETakeRecorderMode::RecordIntoSequence", (int64)ETakeRecorderMode::RecordIntoSequence },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "RecordIntoSequence.Comment", "/* Record into an existing sequence */" },
		{ "RecordIntoSequence.Name", "ETakeRecorderMode::RecordIntoSequence" },
		{ "RecordIntoSequence.ToolTip", "Record into an existing sequence" },
		{ "RecordNewSequence.Comment", "/* Record into a new sequence */" },
		{ "RecordNewSequence.Name", "ETakeRecorderMode::RecordNewSequence" },
		{ "RecordNewSequence.ToolTip", "Record into a new sequence" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder,
		nullptr,
		"ETakeRecorderMode",
		"ETakeRecorderMode",
		Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETakeRecorderMode.InnerSingleton, Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETakeRecorderMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TakeRecorderParameters;
class UScriptStruct* FTakeRecorderParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TakeRecorderParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TakeRecorderParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeRecorderParameters, (UObject*)Z_Construct_UPackage__Script_TakeRecorder(), TEXT("TakeRecorderParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TakeRecorderParameters.OuterSingleton;
}
template<> TAKERECORDER_API UScriptStruct* StaticStruct<FTakeRecorderParameters>()
{
	return FTakeRecorderParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Project_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Project;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TakeRecorderMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeRecorderMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TakeRecorderMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRecordingAndSave_MetaData[];
#endif
		static void NewProp_bDisableRecordingAndSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRecordingAndSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure housing all configurable parameters for a take recorder instance\n */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Structure housing all configurable parameters for a take recorder instance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeRecorderParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderParameters, User), Z_Construct_UScriptStruct_FTakeRecorderUserParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_User_MetaData)) }; // 3708244952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_Project_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_Project = { "Project", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderParameters, Project), Z_Construct_UScriptStruct_FTakeRecorderProjectParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_Project_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_Project_MetaData)) }; // 3064183064
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode = { "TakeRecorderMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderParameters, TakeRecorderMode), Z_Construct_UEnum_TakeRecorder_ETakeRecorderMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode_MetaData)) }; // 1349687011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTakeRecorderParameters, StartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave_MetaData[] = {
		{ "Comment", "/**\n\x09 * Option to disable recording and saving of data. This can be used in a scenario where multiple clients are running\n\x09 * take recorder, but only certain ones are set to process and save the data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderParameters.h" },
		{ "ToolTip", "Option to disable recording and saving of data. This can be used in a scenario where multiple clients are running\ntake recorder, but only certain ones are set to process and save the data." },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave_SetBit(void* Obj)
	{
		((FTakeRecorderParameters*)Obj)->bDisableRecordingAndSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave = { "bDisableRecordingAndSave", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecorderParameters), &Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_Project,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_TakeRecorderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewProp_bDisableRecordingAndSave,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
		nullptr,
		&NewStructOps,
		"TakeRecorderParameters",
		sizeof(FTakeRecorderParameters),
		alignof(FTakeRecorderParameters),
		Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_TakeRecorderParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TakeRecorderParameters.InnerSingleton, Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TakeRecorderParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics::EnumInfo[] = {
		{ ETakeRecorderMode_StaticEnum, TEXT("ETakeRecorderMode"), &Z_Registration_Info_UEnum_ETakeRecorderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1349687011U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics::ScriptStructInfo[] = {
		{ FTakeRecorderUserParameters::StaticStruct, Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics::NewStructOps, TEXT("TakeRecorderUserParameters"), &Z_Registration_Info_UScriptStruct_TakeRecorderUserParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTakeRecorderUserParameters), 3708244952U) },
		{ FTakeRecorderProjectParameters::StaticStruct, Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics::NewStructOps, TEXT("TakeRecorderProjectParameters"), &Z_Registration_Info_UScriptStruct_TakeRecorderProjectParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTakeRecorderProjectParameters), 3064183064U) },
		{ FTakeRecorderParameters::StaticStruct, Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics::NewStructOps, TEXT("TakeRecorderParameters"), &Z_Registration_Info_UScriptStruct_TakeRecorderParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTakeRecorderParameters), 110737924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_1429768206(TEXT("/Script/TakeRecorder"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
