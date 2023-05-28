// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "MovieSceneSequenceTickInterval.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlaybackSettings() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount;
class UScriptStruct* FMovieSceneSequenceLoopCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceLoopCount"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceLoopCount>()
{
	return FMovieSceneSequenceLoopCount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc\n * Defined as a struct rather than an int so a property type customization can be bound to it\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc\nDefined as a struct rather than an int so a property type customization can be bound to it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceLoopCount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop */" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceLoopCount, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceLoopCount",
		sizeof(FMovieSceneSequenceLoopCount),
		alignof(FMovieSceneSequenceLoopCount),
		Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings;
class UScriptStruct* FMovieSceneSequencePlaybackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlaybackSettings>()
{
	return FMovieSceneSequencePlaybackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomStartTime_MetaData[];
#endif
		static void NewProp_bRandomStartTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreState_MetaData[];
#endif
		static void NewProp_bRestoreState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMovementInput_MetaData[];
#endif
		static void NewProp_bDisableMovementInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLookAtInput_MetaData[];
#endif
		static void NewProp_bDisableLookAtInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLookAtInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[];
#endif
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideHud_MetaData[];
#endif
		static void NewProp_bHideHud_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideHud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCameraCuts_MetaData[];
#endif
		static void NewProp_bDisableCameraCuts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCameraCuts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseAtEnd_MetaData[];
#endif
		static void NewProp_bPauseAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseAtEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritTickIntervalFromOwner_MetaData[];
#endif
		static void NewProp_bInheritTickIntervalFromOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritTickIntervalFromOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicWeighting_MetaData[];
#endif
		static void NewProp_bDynamicWeighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicWeighting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for the level sequence player actor.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Settings for the level sequence player actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Auto-play the sequence when created */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Auto-play the sequence when created" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping */" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, LoopCount), Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount_MetaData)) }; // 1486336380
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Overridable tick interval for this sequence to update at. When not overridden, the owning actor or component's tick interval will be used */" },
		{ "EditCondition", "!bInheritTickIntervalFromOwner" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Overridable tick interval for this sequence to update at. When not overridden, the owning actor or component's tick interval will be used" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, TickInterval), Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval_MetaData)) }; // 734968219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** The rate at which to playback the animation */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "The rate at which to playback the animation" },
		{ "Units", "Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Start playback at the specified offset from the start of the sequence's playback range */" },
		{ "DisplayName", "Start Offset" },
		{ "EditCondition", "!bRandomStartTime" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Start playback at the specified offset from the start of the sequence's playback range" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Start playback at a random time */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Start playback at a random time" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bRandomStartTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime = { "bRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Flag used to specify whether actor states should be restored on stop */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Flag used to specify whether actor states should be restored on stop" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bRestoreState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable Input from player during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Disable Input from player during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableMovementInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput = { "bDisableMovementInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable LookAt Input from player during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Disable LookAt Input from player during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableLookAtInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput = { "bDisableLookAtInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Hide Player Pawn during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Hide Player Pawn during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bHidePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Hide HUD during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Hide HUD during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bHideHud = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud = { "bHideHud", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Disable camera cuts" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableCameraCuts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts = { "bDisableCameraCuts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Pause the sequence when playback reaches the end rather than stopping it */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Pause the sequence when playback reaches the end rather than stopping it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bPauseAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd = { "bPauseAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** When checked, a custom tick interval can be provided to define how often to update this sequence */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "When checked, a custom tick interval can be provided to define how often to update this sequence" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bInheritTickIntervalFromOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner = { "bInheritTickIntervalFromOwner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether to enable dynamic weighting on this player or not */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Whether to enable dynamic weighting on this player or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDynamicWeighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting = { "bDynamicWeighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequencePlaybackSettings",
		sizeof(FMovieSceneSequencePlaybackSettings),
		alignof(FMovieSceneSequencePlaybackSettings),
		Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSequenceLoopCount::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewStructOps, TEXT("MovieSceneSequenceLoopCount"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceLoopCount), 1486336380U) },
		{ FMovieSceneSequencePlaybackSettings::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewStructOps, TEXT("MovieSceneSequencePlaybackSettings"), &Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequencePlaybackSettings), 2544210146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_2244682952(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
