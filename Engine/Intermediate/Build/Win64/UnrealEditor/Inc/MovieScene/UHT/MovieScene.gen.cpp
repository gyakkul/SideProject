// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene.h"
#include "MovieSceneBinding.h"
#include "MovieSceneFrameMigration.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieScenePossessable.h"
#include "MovieSceneSpawnable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroup();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionGroup();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneExpansionState;
class UScriptStruct* FMovieSceneExpansionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneExpansionState, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneExpansionState"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneExpansionState>()
{
	return FMovieSceneExpansionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** @todo: remove this type when support for intrinsics on TMap values is added? */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "@todo: remove this type when support for intrinsics on TMap values is added?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneExpansionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((FMovieSceneExpansionState*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneExpansionState), &Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneExpansionState",
		sizeof(FMovieSceneExpansionState),
		alignof(FMovieSceneExpansionState),
		Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame;
class UScriptStruct* FMovieSceneMarkedFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneMarkedFrame"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneMarkedFrame>()
{
	return FMovieSceneMarkedFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeterminismFence_MetaData[];
#endif
		static void NewProp_bIsDeterminismFence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeterminismFence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMarkedFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMarkedFrame, FrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMarkedFrame, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMarkedFrame, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMarkedFrame, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_MetaData[] = {
		{ "Category", "Marked Frame" },
		{ "DisplayName", "Is Determinism Fence?" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "Tooltip", "When checked, treat this mark as a fence for evaluation purposes. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_SetBit(void* Obj)
	{
		((FMovieSceneMarkedFrame*)Obj)->bIsDeterminismFence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence = { "bIsDeterminismFence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneMarkedFrame), &Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_FrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Label,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Comment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_Color,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewProp_bIsDeterminismFence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneMarkedFrame",
		sizeof(FMovieSceneMarkedFrame),
		alignof(FMovieSceneMarkedFrame),
		Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEditorData;
class UScriptStruct* FMovieSceneEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEditorData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEditorData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEditorData>()
{
	return FMovieSceneEditorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpansionStates_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpansionStates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpansionStates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExpansionStates;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinnedNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinnedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinnedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewStart_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ViewStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewEnd_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ViewEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkStart_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WorkStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkEnd_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WorkEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkedFrames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MarkedFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor only data that needs to be saved between sessions for editing but has no runtime purpose\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEditorData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_ValueProp = { "ExpansionStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneExpansionState, METADATA_PARAMS(nullptr, 0) }; // 183070591
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_Key_KeyProp = { "ExpansionStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_MetaData[] = {
		{ "Comment", "/** Map of node path -> expansion state. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Map of node path -> expansion state." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates = { "ExpansionStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ExpansionStates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_MetaData)) }; // 183070591
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_Inner = { "PinnedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_MetaData[] = {
		{ "Comment", "/** List of Pinned nodes. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "List of Pinned nodes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes = { "PinnedNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, PinnedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart_MetaData[] = {
		{ "Comment", "/** The last view-range start that the user was observing */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The last view-range start that the user was observing" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart = { "ViewStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd_MetaData[] = {
		{ "Comment", "/** The last view-range end that the user was observing */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The last view-range end that the user was observing" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd = { "ViewEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart_MetaData[] = {
		{ "Comment", "/** User-defined working range start in which the entire sequence should reside. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined working range start in which the entire sequence should reside." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart = { "WorkStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd_MetaData[] = {
		{ "Comment", "/** User-defined working range end in which the entire sequence should reside. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined working range end in which the entire sequence should reside." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd = { "WorkEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_ElementProp = { "MarkedFrames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_MetaData[] = {
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FFrameNumber>::Value, "The structure 'FFrameNumber' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames = { "MarkedFrames", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, MarkedFrames_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange = { "WorkingRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkingRange_DEPRECATED), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange = { "ViewRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewRange_DEPRECATED), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEditorData",
		sizeof(FMovieSceneEditorData),
		alignof(FMovieSceneEditorData),
		Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEditorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEditorData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEditorData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels;
class UScriptStruct* FMovieSceneTrackLabels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackLabels, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackLabels"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackLabels>()
{
	return FMovieSceneTrackLabels::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Strings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for labels that can be assigned to movie scene tracks.\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure for labels that can be assigned to movie scene tracks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackLabels, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackLabels",
		sizeof(FMovieSceneTrackLabels),
		alignof(FMovieSceneTrackLabels),
		Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs;
class UScriptStruct* FMovieSceneObjectBindingIDs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectBindingIDs"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectBindingIDs>()
{
	return FMovieSceneObjectBindingIDs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_IDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that comprises a list of object binding IDs\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that comprises a list of object binding IDs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingIDs>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingIDs, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneObjectBindingIDs",
		sizeof(FMovieSceneObjectBindingIDs),
		alignof(FMovieSceneObjectBindingIDs),
		Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup;
class UScriptStruct* FMovieSceneSectionGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionGroup, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionGroup"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionGroup>()
{
	return FMovieSceneSectionGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a group of sections\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that represents a group of sections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionGroup>();
	}
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSectionGroup, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSectionGroup",
		sizeof(FMovieSceneSectionGroup),
		alignof(FMovieSceneSectionGroup),
		Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.InnerSingleton;
	}
	void UMovieSceneNodeGroup::StaticRegisterNativesUMovieSceneNodeGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNodeGroup);
	UClass* Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister()
	{
		return UMovieSceneNodeGroup::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNodeGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNodeGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNodeGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a group of nodes\n */" },
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that represents a group of nodes" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNodeGroup, Name), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Nodes that are part of this node group, stored as node tree paths */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Nodes that are part of this node group, stored as node tree paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNodeGroup, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNodeGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNodeGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::ClassParams = {
		&UMovieSceneNodeGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNodeGroup()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton, Z_Construct_UClass_UMovieSceneNodeGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNodeGroup>()
	{
		return UMovieSceneNodeGroup::StaticClass();
	}
	UMovieSceneNodeGroup::UMovieSceneNodeGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNodeGroup);
	UMovieSceneNodeGroup::~UMovieSceneNodeGroup() {}
	void UMovieSceneNodeGroupCollection::StaticRegisterNativesUMovieSceneNodeGroupCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNodeGroupCollection);
	UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister()
	{
		return UMovieSceneNodeGroupCollection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a collection of NodeGroups\n */" },
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that represents a collection of NodeGroups" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_Inner = { "NodeGroups", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups = { "NodeGroups", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNodeGroupCollection, NodeGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNodeGroupCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::ClassParams = {
		&UMovieSceneNodeGroupCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton, Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNodeGroupCollection>()
	{
		return UMovieSceneNodeGroupCollection::StaticClass();
	}
	UMovieSceneNodeGroupCollection::UMovieSceneNodeGroupCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNodeGroupCollection);
	UMovieSceneNodeGroupCollection::~UMovieSceneNodeGroupCollection() {}
	void UMovieScene::StaticRegisterNativesUMovieScene()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene);
	UClass* Z_Construct_UClass_UMovieScene_NoRegister()
	{
		return UMovieScene::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spawnables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawnables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawnables;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Possessables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Possessables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Possessables;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingGroups_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingGroups_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingGroups_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCutTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraCutTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClockSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClockSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClockSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomClockSourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomClockSourcePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkedFrames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkedFrames;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[];
#endif
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaybackRangeLocked_MetaData[];
#endif
		static void NewProp_bPlaybackRangeLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaybackRangeLocked;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectsToDisplayNames_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectsToDisplayNames_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToDisplayNames_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectsToDisplayNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectsToLabels_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectsToLabels_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToLabels_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectsToLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootFolders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SoloNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoloNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoloNodes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MuteNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuteNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MuteNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeGroupCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFixedFrameIntervalPlayback_MetaData[];
#endif
		static void NewProp_bForceFixedFrameIntervalPlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFixedFrameIntervalPlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedFrameInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedFrameInterval;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MasterTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MasterTracks;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene asset.\n */" },
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Implements a movie scene asset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_Inner = { "Spawnables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSpawnable, METADATA_PARAMS(nullptr, 0) }; // 2899774977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_MetaData[] = {
		{ "Comment", "/**\n\x09 * Data-only blueprints for all of the objects that we we're able to spawn.\n\x09 * These describe objects and actors that we may instantiate at runtime,\n\x09 * or create proxy objects for previewing in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Data-only blueprints for all of the objects that we we're able to spawn.\nThese describe objects and actors that we may instantiate at runtime,\nor create proxy objects for previewing in the editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables = { "Spawnables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, Spawnables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_MetaData)) }; // 2899774977
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_Inner = { "Possessables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieScenePossessable, METADATA_PARAMS(nullptr, 0) }; // 517388266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_MetaData[] = {
		{ "Comment", "/** Typed slots for already-spawned objects that we are able to control with this MovieScene */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Typed slots for already-spawned objects that we are able to control with this MovieScene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables = { "Possessables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, Possessables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_MetaData)) }; // 517388266
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBinding, METADATA_PARAMS(nullptr, 0) }; // 1180083504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_MetaData[] = {
		{ "Comment", "/** Tracks bound to possessed or spawned objects */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks bound to possessed or spawned objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, ObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_MetaData)) }; // 1180083504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_ValueProp = { "BindingGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs, METADATA_PARAMS(nullptr, 0) }; // 79942988
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_Key_KeyProp = { "BindingGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_MetaData[] = {
		{ "Comment", "/** Map of persistent tagged bindings for this sequence */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Map of persistent tagged bindings for this sequence" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups = { "BindingGroups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, BindingGroups), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_MetaData)) }; // 79942988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner_MetaData[] = {
		{ "Comment", "/** Tracks which are not bound to spawned or possessed objects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks which are not bound to spawned or possessed objects" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** Tracks which are not bound to spawned or possessed objects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks which are not bound to spawned or possessed objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack_MetaData[] = {
		{ "Comment", "/** The camera cut track is a specialized track for switching between cameras on a cinematic */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The camera cut track is a specialized track for switching between cameras on a cinematic" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack = { "CameraCutTrack", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, CameraCutTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange_MetaData[] = {
		{ "Comment", "/** User-defined selection range. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined selection range." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange = { "SelectionRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, SelectionRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange_MetaData[] = {
		{ "Comment", "/** User-defined playback range for this movie scene. Must be a finite range. Relative to this movie-scene's 0-time origin. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined playback range for this movie scene. Must be a finite range. Relative to this movie-scene's 0-time origin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange = { "PlaybackRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, PlaybackRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution_MetaData[] = {
		{ "Comment", "/** The resolution at which all frame numbers within this movie-scene data are stored */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The resolution at which all frame numbers within this movie-scene data are stored" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate_MetaData[] = {
		{ "Comment", "/** The rate at which we should interact with this moviescene data on UI, and to movie scene players. Also defines the frame locked frame rate. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The rate at which we should interact with this moviescene data on UI, and to movie scene players. Also defines the frame locked frame rate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate = { "DisplayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, DisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_MetaData[] = {
		{ "Comment", "/** The type of evaluation to use when playing back this sequence */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The type of evaluation to use when playing back this sequence" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType = { "EvaluationType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, EvaluationType), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_MetaData)) }; // 2615994803
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource = { "ClockSource", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, ClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_MetaData)) }; // 3237436252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath = { "CustomClockSourcePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, CustomClockSourcePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_Inner = { "MarkedFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(nullptr, 0) }; // 97916427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_MetaData[] = {
		{ "Comment", "/** The set of user-marked frames */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The set of user-marked frames" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames = { "MarkedFrames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, MarkedFrames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_MetaData)) }; // 97916427
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_MetaData[] = {
		{ "Comment", "/** Indicates whether this movie scene is read only */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Indicates whether this movie scene is read only" },
	};
#endif
	void Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((UMovieScene*)Obj)->bReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_MetaData[] = {
		{ "Comment", "/** User-defined playback range is locked. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined playback range is locked." },
	};
#endif
	void Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_SetBit(void* Obj)
	{
		((UMovieScene*)Obj)->bPlaybackRangeLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked = { "bPlaybackRangeLocked", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_ValueProp = { "ObjectsToDisplayNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_Key_KeyProp = { "ObjectsToDisplayNames_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_MetaData[] = {
		{ "Comment", "/** Maps object GUIDs to user defined display names. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Maps object GUIDs to user defined display names." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames = { "ObjectsToDisplayNames", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, ObjectsToDisplayNames), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_ValueProp = { "ObjectsToLabels", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackLabels, METADATA_PARAMS(nullptr, 0) }; // 869720124
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_Key_KeyProp = { "ObjectsToLabels_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_MetaData[] = {
		{ "Comment", "/** Maps object GUIDs to user defined labels. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Maps object GUIDs to user defined labels." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels = { "ObjectsToLabels", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, ObjectsToLabels), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_MetaData)) }; // 869720124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Editor only data that needs to be saved between sessions for editing but has no runtime purpose */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, EditorData), Z_Construct_UScriptStruct_FMovieSceneEditorData, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData_MetaData)) }; // 3915881560
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_Inner = { "RootFolders", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_MetaData[] = {
		{ "Comment", "/** The root folders for this movie scene. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The root folders for this movie scene." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders = { "RootFolders", nullptr, (EPropertyFlags)0x0044008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, RootFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_Inner = { "SoloNodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_MetaData[] = {
		{ "Comment", "/** Nodes currently marked Solo, stored as node tree paths */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Nodes currently marked Solo, stored as node tree paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes = { "SoloNodes", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, SoloNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_Inner = { "MuteNodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_MetaData[] = {
		{ "Comment", "/** Nodes currently marked Mute, stored as node tree paths */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Nodes currently marked Mute, stored as node tree paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes = { "MuteNodes", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, MuteNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_Inner = { "SectionGroups", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSectionGroup, METADATA_PARAMS(nullptr, 0) }; // 1024028716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_MetaData[] = {
		{ "Comment", "/** Groups of sections which should maintain the same relative offset */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Groups of sections which should maintain the same relative offset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups = { "SectionGroups", nullptr, (EPropertyFlags)0x0040008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, SectionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_MetaData)) }; // 1024028716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection_MetaData[] = {
		{ "Comment", "/** Collection of user-defined groups */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Collection of user-defined groups" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection = { "NodeGroupCollection", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, NodeGroupCollection), Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, InTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime = { "OutTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, OutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, StartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, EndTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	void Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_SetBit(void* Obj)
	{
		((UMovieScene*)Obj)->bForceFixedFrameIntervalPlayback_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback = { "bForceFixedFrameIntervalPlayback", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval = { "FixedFrameInterval", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, FixedFrameInterval_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner = { "MasterTracks", nullptr, (EPropertyFlags)0x0004000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks = { "MasterTracks", nullptr, (EPropertyFlags)0x0044008820000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene, MasterTracks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene_Statics::ClassParams = {
		&UMovieScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene()
	{
		if (!Z_Registration_Info_UClass_UMovieScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene.OuterSingleton, Z_Construct_UClass_UMovieScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieScene>()
	{
		return UMovieScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene);
	UMovieScene::~UMovieScene() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneExpansionState::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewStructOps, TEXT("MovieSceneExpansionState"), &Z_Registration_Info_UScriptStruct_MovieSceneExpansionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneExpansionState), 183070591U) },
		{ FMovieSceneMarkedFrame::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame_Statics::NewStructOps, TEXT("MovieSceneMarkedFrame"), &Z_Registration_Info_UScriptStruct_MovieSceneMarkedFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMarkedFrame), 97916427U) },
		{ FMovieSceneEditorData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewStructOps, TEXT("MovieSceneEditorData"), &Z_Registration_Info_UScriptStruct_MovieSceneEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEditorData), 3915881560U) },
		{ FMovieSceneTrackLabels::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewStructOps, TEXT("MovieSceneTrackLabels"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackLabels), 869720124U) },
		{ FMovieSceneObjectBindingIDs::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewStructOps, TEXT("MovieSceneObjectBindingIDs"), &Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneObjectBindingIDs), 79942988U) },
		{ FMovieSceneSectionGroup::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewStructOps, TEXT("MovieSceneSectionGroup"), &Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSectionGroup), 1024028716U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNodeGroup, UMovieSceneNodeGroup::StaticClass, TEXT("UMovieSceneNodeGroup"), &Z_Registration_Info_UClass_UMovieSceneNodeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNodeGroup), 876500062U) },
		{ Z_Construct_UClass_UMovieSceneNodeGroupCollection, UMovieSceneNodeGroupCollection::StaticClass, TEXT("UMovieSceneNodeGroupCollection"), &Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNodeGroupCollection), 1757927099U) },
		{ Z_Construct_UClass_UMovieScene, UMovieScene::StaticClass, TEXT("UMovieScene"), &Z_Registration_Info_UClass_UMovieScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene), 414405050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_3027448251(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
