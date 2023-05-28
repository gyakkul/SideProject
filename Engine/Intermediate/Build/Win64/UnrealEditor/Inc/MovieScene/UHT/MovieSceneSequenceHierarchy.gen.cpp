// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneSequenceHierarchy.h"
#include "Evaluation/MovieSceneSequenceInstanceData.h"
#include "Evaluation/MovieSceneSequenceTransform.h"
#include "MovieSceneFrameMigration.h"
#include "MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceHierarchy() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData;
class UScriptStruct* FMovieSceneSubSequenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSequenceData>()
{
	return FMovieSceneSubSequenceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterToInnerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterToInnerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootToSequenceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootToSequenceTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeterministicSequenceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeterministicSequenceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPlayRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPlayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentStartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentStartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentEndFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentEndFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFirstLoopStartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentFirstLoopStartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoop_MetaData[];
#endif
		static void NewProp_bCanLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullPlayRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FullPlayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwarpedPlayRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnwarpedPlayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreRollRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreRollRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostRollRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostRollRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_HierarchicalBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionPath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSectionSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionSignature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sub sequence data that is stored within an evaluation template as a backreference to the originating sequence, and section\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Sub sequence data that is stored within an evaluation template as a backreference to the originating sequence, and section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence_MetaData[] = {
		{ "AllowedClasses", "/Script/MovieScene.MovieSceneSequence" },
		{ "Comment", "/** The sequence that the sub section references */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence that the sub section references" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, Sequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform_MetaData[] = {
		{ "Comment", "/** The transform from this sub sequence's parent to its own play space. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The transform from this sub sequence's parent to its own play space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform = { "OuterToInnerTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, OuterToInnerTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform_MetaData)) }; // 3038509274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform_MetaData[] = {
		{ "Comment", "/** Transform that transforms a given time from the sequences outer space, to its authored space. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Transform that transforms a given time from the sequences outer space, to its authored space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform = { "RootToSequenceTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, RootToSequenceTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform_MetaData)) }; // 3038509274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution_MetaData[] = {
		{ "Comment", "/** The tick resolution of the inner sequence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The tick resolution of the inner sequence." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID_MetaData[] = {
		{ "Comment", "/** This sequence's deterministic sequence ID. Used in editor to reduce the risk of collisions on recompilation. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sequence's deterministic sequence ID. Used in editor to reduce the risk of collisions on recompilation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID = { "DeterministicSequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, DeterministicSequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID_MetaData)) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange_MetaData[] = {
		{ "Comment", "/** The play range of the parent section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The play range of the parent section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange = { "ParentPlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentPlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset_MetaData[] = {
		{ "Comment", "/** The start frame offset of the parent section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The start frame offset of the parent section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset = { "ParentStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset_MetaData[] = {
		{ "Comment", "/** The end frame offset of the parent section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The end frame offset of the parent section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset = { "ParentEndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentEndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset_MetaData[] = {
		{ "Comment", "/** The offset for the first loop of the sub-sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The offset for the first loop of the sub-sequence" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset = { "ParentFirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentFirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_MetaData[] = {
		{ "Comment", "/** Whether this sub-sequence can loop */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Whether this sub-sequence can loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_SetBit(void* Obj)
	{
		((FMovieSceneSubSequenceData*)Obj)->bCanLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop = { "bCanLoop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSubSequenceData), &Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange_MetaData[] = {
		{ "Comment", "/** This sub sequence's playback range according to its parent sub section. Clamped recursively during template generation */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sub sequence's playback range according to its parent sub section. Clamped recursively during template generation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange = { "PlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange_MetaData[] = {
		{ "Comment", "/** The sub-sequence's full playback range, in its own local time space. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sub-sequence's full playback range, in its own local time space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange = { "FullPlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, FullPlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange_MetaData[] = {
		{ "Comment", "/**\n\x09 * The play range of the parent section, without any warping involved.\n\x09 * That means that, for a sub-sequence playing with an initial offset of 50 and looping 3 times,\n\x09 * this play range will start 50 frames after PlayRange's lower bound, and extend much past PlayRange's \n\x09 * upper bound (3 times longer).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The play range of the parent section, without any warping involved.\nThat means that, for a sub-sequence playing with an initial offset of 50 and looping 3 times,\nthis play range will start 50 frames after PlayRange's lower bound, and extend much past PlayRange's\nupper bound (3 times longer)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange = { "UnwarpedPlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, UnwarpedPlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange_MetaData[] = {
		{ "Comment", "/** The sequence preroll range considering the start offset */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence preroll range considering the start offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange = { "PreRollRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PreRollRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange_MetaData[] = {
		{ "Comment", "/** The sequence postroll range considering the start offset */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence postroll range considering the start offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange = { "PostRollRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PostRollRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange_MetaData)) }; // 199181766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias_MetaData[] = {
		{ "Comment", "/** The accumulated hierarchical bias of this sequence. Higher bias will take precedence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The accumulated hierarchical bias of this sequence. Higher bias will take precedence" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias = { "HierarchicalBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, HierarchicalBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData_MetaData[] = {
		{ "Comment", "/** Instance data that should be used for any tracks contained immediately within this sub sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Instance data that should be used for any tracks contained immediately within this sub sequence" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, InstanceData), Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData_MetaData)) }; // 1938979048
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath_MetaData[] = {
		{ "Comment", "/** This sequence's path within its movie scene */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sequence's path within its movie scene" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath = { "SectionPath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SectionPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature_MetaData[] = {
		{ "Comment", "/** The sub section's signature at the time this structure was populated. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sub section's signature at the time this structure was populated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature = { "SubSectionSignature", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SubSectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSequenceData",
		sizeof(FMovieSceneSubSequenceData),
		alignof(FMovieSceneSubSequenceData),
		Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode;
class UScriptStruct* FMovieSceneSequenceHierarchyNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchyNode"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceHierarchyNode>()
{
	return FMovieSceneSequenceHierarchyNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple structure specifying parent and child sequence IDs for any given sequences\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Simple structure specifying parent and child sequence IDs for any given sequences" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchyNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID_MetaData[] = {
		{ "Comment", "/** Movie scene sequence ID of this node's parent sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Movie scene sequence ID of this node's parent sequence" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, ParentID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID_MetaData)) }; // 3213602762
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_MetaData[] = {
		{ "Comment", "/** Array of child sequences contained within this sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Array of child sequences contained within this sequence" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_MetaData)) }; // 3213602762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceHierarchyNode",
		sizeof(FMovieSceneSequenceHierarchyNode),
		alignof(FMovieSceneSequenceHierarchyNode),
		Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry;
class UScriptStruct* FMovieSceneSubSequenceTreeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceTreeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSequenceTreeEntry>()
{
	return FMovieSceneSubSequenceTreeEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceTreeEntry>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSequenceTreeEntry",
		sizeof(FMovieSceneSubSequenceTreeEntry),
		alignof(FMovieSceneSubSequenceTreeEntry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree;
class UScriptStruct* FMovieSceneSubSequenceTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceTree"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSequenceTree>()
{
	return FMovieSceneSubSequenceTree::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceTree>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSequenceTree",
		sizeof(FMovieSceneSubSequenceTree),
		alignof(FMovieSceneSubSequenceTree),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy;
class UScriptStruct* FMovieSceneSequenceHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceHierarchy>()
{
	return FMovieSceneSequenceHierarchy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tree;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSequences_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSequences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSequences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubSequences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Hierarchy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that stores hierarchical information pertaining to all sequences contained within a root sequence\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Structure that stores hierarchical information pertaining to all sequences contained within a root sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, RootNode), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode_MetaData)) }; // 1467775714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Tree), Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree_MetaData)) }; // 1524033146
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_ValueProp = { "SubSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, METADATA_PARAMS(nullptr, 0) }; // 3487992342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_Key_KeyProp = { "SubSequences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_MetaData[] = {
		{ "Comment", "/** Map of all (recursive) sub sequences found in this template, keyed on sequence ID */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Map of all (recursive) sub sequences found in this template, keyed on sequence ID" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences = { "SubSequences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, SubSequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_MetaData)) }; // 3213602762 3487992342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_ValueProp = { "Hierarchy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, METADATA_PARAMS(nullptr, 0) }; // 1467775714
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_Key_KeyProp = { "Hierarchy_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "Comment", "/** Structural information describing the structure of the sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Structural information describing the structure of the sequence" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Hierarchy), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_MetaData)) }; // 3213602762 1467775714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceHierarchy",
		sizeof(FMovieSceneSequenceHierarchy),
		alignof(FMovieSceneSequenceHierarchy),
		Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSubSequenceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewStructOps, TEXT("MovieSceneSubSequenceData"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSequenceData), 3487992342U) },
		{ FMovieSceneSequenceHierarchyNode::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewStructOps, TEXT("MovieSceneSequenceHierarchyNode"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceHierarchyNode), 1467775714U) },
		{ FMovieSceneSubSequenceTreeEntry::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::NewStructOps, TEXT("MovieSceneSubSequenceTreeEntry"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSequenceTreeEntry), 2575479287U) },
		{ FMovieSceneSubSequenceTree::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::NewStructOps, TEXT("MovieSceneSubSequenceTree"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSequenceTree), 1524033146U) },
		{ FMovieSceneSequenceHierarchy::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewStructOps, TEXT("MovieSceneSequenceHierarchy"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceHierarchy), 1680595002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_3452226497(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
