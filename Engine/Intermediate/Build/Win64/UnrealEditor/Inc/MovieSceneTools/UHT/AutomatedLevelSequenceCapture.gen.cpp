// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomatedLevelSequenceCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedLevelSequenceCapture() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	void UAutomatedLevelSequenceCapture::StaticRegisterNativesUAutomatedLevelSequenceCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomatedLevelSequenceCapture);
	UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture_NoRegister()
	{
		return UAutomatedLevelSequenceCapture::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSequenceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomStartFrame_MetaData[];
#endif
		static void NewProp_bUseCustomStartFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEndFrame_MetaData[];
#endif
		static void NewProp_bUseCustomEndFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomEndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WarmUpFrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeWarmUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeWarmUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeShotWarmUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeShotWarmUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayEveryFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayEveryFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BurnInOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEditDecisionList_MetaData[];
#endif
		static void NewProp_bWriteEditDecisionList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEditDecisionList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteFinalCutProXML_MetaData[];
#endif
		static void NewProp_bWriteFinalCutProXML_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteFinalCutProXML;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LevelSequenceActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AutomatedLevelSequenceCapture.h" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** A level sequence asset to playback at runtime - used where the level sequence does not already exist in the world. */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "A level sequence asset to playback at runtime - used where the level sequence does not already exist in the world." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, LevelSequenceAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_ShotName_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Optional shot name to render. The frame range to render will be set to the shot frame range. */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Optional shot name to render. The frame range to render will be set to the shot frame range." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_ShotName = { "ShotName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, ShotName), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_ShotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_ShotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** When enabled, the StartFrame setting will override the default starting frame number */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "When enabled, the StartFrame setting will override the default starting frame number" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bUseCustomStartFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame = { "bUseCustomStartFrame", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Frame number to start capturing. */" },
		{ "DisplayName", "Start Frame" },
		{ "EditCondition", "bUseCustomStartFrame" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Frame number to start capturing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame = { "CustomStartFrame", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, CustomStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** When enabled, the EndFrame setting will override the default ending frame number */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "When enabled, the EndFrame setting will override the default ending frame number" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bUseCustomEndFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame = { "bUseCustomEndFrame", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Frame number to end capturing. */" },
		{ "DisplayName", "End Frame" },
		{ "EditCondition", "bUseCustomEndFrame" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Frame number to end capturing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame = { "CustomEndFrame", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, CustomEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The number of extra frames to play before the sequence's start frame, to \"warm up\" the animation.  This is useful if your\n\x09    animation contains particles or other runtime effects that are spawned into the scene earlier than your capture start frame */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of extra frames to play before the sequence's start frame, to \"warm up\" the animation.  This is useful if your\n          animation contains particles or other runtime effects that are spawned into the scene earlier than your capture start frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount = { "WarmUpFrameCount", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, WarmUpFrameCount), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of seconds to wait (in real-time) before we start playing back the warm up frames.  Useful for allowing post processing effects to settle down before capturing the animation. */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of seconds to wait (in real-time) before we start playing back the warm up frames.  Useful for allowing post processing effects to settle down before capturing the animation." },
		{ "Units", "Seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp = { "DelayBeforeWarmUp", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, DelayBeforeWarmUp), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of seconds to wait (in real-time) at shot boundaries.  Useful for allowing post processing effects to settle down before capturing the animation. */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of seconds to wait (in real-time) at shot boundaries.  Useful for allowing post processing effects to settle down before capturing the animation." },
		{ "Units", "Seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp = { "DelayBeforeShotWarmUp", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, DelayBeforeShotWarmUp), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayEveryFrame_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of seconds to wait (in real-time) at every frame.  Useful for allowing post processing effects to settle down before capturing the animation. */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The number of seconds to wait (in real-time) at every frame.  Useful for allowing post processing effects to settle down before capturing the animation." },
		{ "Units", "Seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayEveryFrame = { "DelayEveryFrame", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, DelayEveryFrame), METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayEveryFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions = { "BurnInOptions", nullptr, (EPropertyFlags)0x001404000008200d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Whether to write edit decision lists (EDLs) if the sequence contains shots */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Whether to write edit decision lists (EDLs) if the sequence contains shots" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bWriteEditDecisionList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList = { "bWriteEditDecisionList", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Whether to write Final Cut Pro XML files (XMLs) if the sequence contains shots */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "Whether to write Final Cut Pro XML files (XMLs) if the sequence contains shots" },
	};
#endif
	void Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_SetBit(void* Obj)
	{
		((UAutomatedLevelSequenceCapture*)Obj)->bWriteFinalCutProXML = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML = { "bWriteFinalCutProXML", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomatedLevelSequenceCapture), &Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "Comment", "/** The pre-existing level sequence actor to use for capture that specifies playback settings */" },
		{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
		{ "ToolTip", "The pre-existing level sequence actor to use for capture that specifies playback settings" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_ShotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bUseCustomEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_CustomEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_WarmUpFrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeWarmUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayBeforeShotWarmUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_DelayEveryFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_BurnInOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteEditDecisionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_bWriteFinalCutProXML,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::NewProp_LevelSequenceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedLevelSequenceCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::ClassParams = {
		&UAutomatedLevelSequenceCapture::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::PropPointers),
		0,
		0x009004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture()
	{
		if (!Z_Registration_Info_UClass_UAutomatedLevelSequenceCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomatedLevelSequenceCapture.OuterSingleton, Z_Construct_UClass_UAutomatedLevelSequenceCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomatedLevelSequenceCapture.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UAutomatedLevelSequenceCapture>()
	{
		return UAutomatedLevelSequenceCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedLevelSequenceCapture);
	UAutomatedLevelSequenceCapture::~UAutomatedLevelSequenceCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_AutomatedLevelSequenceCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_AutomatedLevelSequenceCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomatedLevelSequenceCapture, UAutomatedLevelSequenceCapture::StaticClass, TEXT("UAutomatedLevelSequenceCapture"), &Z_Registration_Info_UClass_UAutomatedLevelSequenceCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomatedLevelSequenceCapture), 480549057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_AutomatedLevelSequenceCapture_h_729491871(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_AutomatedLevelSequenceCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_AutomatedLevelSequenceCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
