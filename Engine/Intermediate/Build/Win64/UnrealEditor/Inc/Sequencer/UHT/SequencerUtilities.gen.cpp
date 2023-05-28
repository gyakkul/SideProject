// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerUtilities.h"
#include "MovieSceneBindingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerUtilities() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteTracksParams();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams;
class UScriptStruct* FMovieScenePasteFoldersParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("MovieScenePasteFoldersParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams.OuterSingleton;
}
template<> SEQUENCER_API UScriptStruct* StaticStruct<FMovieScenePasteFoldersParams>()
{
	return FMovieScenePasteFoldersParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentFolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Paste folders params */" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
		{ "ToolTip", "Paste folders params" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePasteFoldersParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteFoldersParams, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_ParentFolder_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_ParentFolder = { "ParentFolder", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteFoldersParams, ParentFolder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_ParentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_ParentFolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewProp_ParentFolder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		&NewStructOps,
		"MovieScenePasteFoldersParams",
		sizeof(FMovieScenePasteFoldersParams),
		alignof(FMovieScenePasteFoldersParams),
		Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams;
class UScriptStruct* FMovieScenePasteSectionsParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("MovieScenePasteSectionsParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams.OuterSingleton;
}
template<> SEQUENCER_API UScriptStruct* StaticStruct<FMovieScenePasteSectionsParams>()
{
	return FMovieScenePasteSectionsParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackRowIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackRowIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackRowIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Paste sections params */" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
		{ "ToolTip", "Paste sections params" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePasteSectionsParams>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x001400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteSectionsParams, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices_Inner = { "TrackRowIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices = { "TrackRowIndices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteSectionsParams, TrackRowIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteSectionsParams, Time), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_TrackRowIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		&NewStructOps,
		"MovieScenePasteSectionsParams",
		sizeof(FMovieScenePasteSectionsParams),
		alignof(FMovieScenePasteSectionsParams),
		Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams;
class UScriptStruct* FMovieScenePasteTracksParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("MovieScenePasteTracksParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams.OuterSingleton;
}
template<> SEQUENCER_API UScriptStruct* StaticStruct<FMovieScenePasteTracksParams>()
{
	return FMovieScenePasteTracksParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentFolder;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Folders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Folders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Paste tracks params */" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
		{ "ToolTip", "Paste tracks params" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePasteTracksParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteTracksParams, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Sequence_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteTracksParams, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_ParentFolder_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_ParentFolder = { "ParentFolder", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteTracksParams, ParentFolder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_ParentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_ParentFolder_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders_Inner = { "Folders", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders = { "Folders", nullptr, (EPropertyFlags)0x001400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteTracksParams, Folders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_ParentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewProp_Folders,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		&NewStructOps,
		"MovieScenePasteTracksParams",
		sizeof(FMovieScenePasteTracksParams),
		alignof(FMovieScenePasteTracksParams),
		Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteTracksParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams;
class UScriptStruct* FMovieScenePasteBindingsParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("MovieScenePasteBindingsParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams.OuterSingleton;
}
template<> SEQUENCER_API UScriptStruct* StaticStruct<FMovieScenePasteBindingsParams>()
{
	return FMovieScenePasteBindingsParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentFolder;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Folders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Folders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDuplicateExistingActors_MetaData[];
#endif
		static void NewProp_bDuplicateExistingActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDuplicateExistingActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Paste bindings params */" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
		{ "ToolTip", "Paste bindings params" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePasteBindingsParams>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteBindingsParams, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_ParentFolder_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_ParentFolder = { "ParentFolder", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteBindingsParams, ParentFolder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_ParentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_ParentFolder_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders_Inner = { "Folders", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders = { "Folders", nullptr, (EPropertyFlags)0x001400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePasteBindingsParams, Folders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/SequencerUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors_SetBit(void* Obj)
	{
		((FMovieScenePasteBindingsParams*)Obj)->bDuplicateExistingActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors = { "bDuplicateExistingActors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieScenePasteBindingsParams), &Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_ParentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_Folders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewProp_bDuplicateExistingActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		&NewStructOps,
		"MovieScenePasteBindingsParams",
		sizeof(FMovieScenePasteBindingsParams),
		alignof(FMovieScenePasteBindingsParams),
		Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerUtilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerUtilities_h_Statics::ScriptStructInfo[] = {
		{ FMovieScenePasteFoldersParams::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams_Statics::NewStructOps, TEXT("MovieScenePasteFoldersParams"), &Z_Registration_Info_UScriptStruct_MovieScenePasteFoldersParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePasteFoldersParams), 827300519U) },
		{ FMovieScenePasteSectionsParams::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams_Statics::NewStructOps, TEXT("MovieScenePasteSectionsParams"), &Z_Registration_Info_UScriptStruct_MovieScenePasteSectionsParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePasteSectionsParams), 520492491U) },
		{ FMovieScenePasteTracksParams::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePasteTracksParams_Statics::NewStructOps, TEXT("MovieScenePasteTracksParams"), &Z_Registration_Info_UScriptStruct_MovieScenePasteTracksParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePasteTracksParams), 3774530098U) },
		{ FMovieScenePasteBindingsParams::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams_Statics::NewStructOps, TEXT("MovieScenePasteBindingsParams"), &Z_Registration_Info_UScriptStruct_MovieScenePasteBindingsParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePasteBindingsParams), 196502128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerUtilities_h_2468503778(TEXT("/Script/Sequencer"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerUtilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
