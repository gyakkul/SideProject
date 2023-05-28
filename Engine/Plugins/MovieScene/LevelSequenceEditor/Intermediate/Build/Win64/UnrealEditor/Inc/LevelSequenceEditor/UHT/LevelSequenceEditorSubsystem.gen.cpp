// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceEditorSubsystem.h"
#include "MovieSceneBindingProxy.h"
#include "SequencerUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceEditorSubsystem() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorSubsystem();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorSubsystem_NoRegister();
	LEVELSEQUENCEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneScriptingParams();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams();
	SEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePasteTracksParams();
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams;
class UScriptStruct* FMovieSceneScriptingParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneScriptingParams, (UObject*)Z_Construct_UPackage__Script_LevelSequenceEditor(), TEXT("MovieSceneScriptingParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams.OuterSingleton;
}
template<> LEVELSEQUENCEEDITOR_API UScriptStruct* StaticStruct<FMovieSceneScriptingParams>()
{
	return FMovieSceneScriptingParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUnit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneScriptingParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneScriptingParams, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit_MetaData)) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewProp_TimeUnit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
		nullptr,
		&NewStructOps,
		"MovieSceneScriptingParams",
		sizeof(FMovieSceneScriptingParams),
		alignof(FMovieSceneScriptingParams),
		Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneScriptingParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execRebindComponent)
	{
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_ComponentBindings);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ComponentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebindComponent(Z_Param_Out_ComponentBindings,Z_Param_Out_ComponentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execRemoveInvalidBindings)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInvalidBindings(Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execRemoveAllBindings)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllBindings(Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execRemoveActorsFromBinding)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActorsFromBinding(Z_Param_Out_Actors,Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execReplaceBindingWithActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceBindingWithActors(Z_Param_Out_Actors,Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execAddActorsToBinding)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorsToBinding(Z_Param_Out_Actors,Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execFixActorReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FixActorReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execBakeTransform)
	{
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBindings);
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_BakeInTime);
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_BakeOutTime);
		P_GET_STRUCT_REF(FFrameTime,Z_Param_Out_BakeInterval);
		P_GET_STRUCT_REF(FMovieSceneScriptingParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BakeTransform(Z_Param_Out_ObjectBindings,Z_Param_Out_BakeInTime,Z_Param_Out_BakeOutTime,Z_Param_Out_BakeInterval,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execSyncSectionsUsingSourceTimecode)
	{
		P_GET_TARRAY_REF(UMovieSceneSection*,Z_Param_Out_Sections);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncSectionsUsingSourceTimecode(Z_Param_Out_Sections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execSnapSectionsToTimelineUsingSourceTimecode)
	{
		P_GET_TARRAY_REF(UMovieSceneSection*,Z_Param_Out_Sections);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapSectionsToTimelineUsingSourceTimecode(Z_Param_Out_Sections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execPasteBindings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToImport);
		P_GET_STRUCT(FMovieScenePasteBindingsParams,Z_Param_PasteBindingsParams);
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_OutObjectBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PasteBindings(Z_Param_TextToImport,Z_Param_PasteBindingsParams,Z_Param_Out_OutObjectBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execCopyBindings)
	{
		P_GET_TARRAY_REF(FMovieSceneBindingProxy,Z_Param_Out_Bindings);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExportedText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyBindings(Z_Param_Out_Bindings,Z_Param_Out_ExportedText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execPasteTracks)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToImport);
		P_GET_STRUCT(FMovieScenePasteTracksParams,Z_Param_PasteTracksParams);
		P_GET_TARRAY_REF(UMovieSceneTrack*,Z_Param_Out_OutTracks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PasteTracks(Z_Param_TextToImport,Z_Param_PasteTracksParams,Z_Param_Out_OutTracks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execCopyTracks)
	{
		P_GET_TARRAY_REF(UMovieSceneTrack*,Z_Param_Out_Tracks);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExportedText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyTracks(Z_Param_Out_Tracks,Z_Param_Out_ExportedText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execPasteSections)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToImport);
		P_GET_STRUCT(FMovieScenePasteSectionsParams,Z_Param_PasteSectionsParams);
		P_GET_TARRAY_REF(UMovieSceneSection*,Z_Param_Out_OutSections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PasteSections(Z_Param_TextToImport,Z_Param_PasteSectionsParams,Z_Param_Out_OutSections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execCopySections)
	{
		P_GET_TARRAY_REF(UMovieSceneSection*,Z_Param_Out_Sections);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExportedText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopySections(Z_Param_Out_Sections,Z_Param_Out_ExportedText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execPasteFolders)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToImport);
		P_GET_STRUCT(FMovieScenePasteFoldersParams,Z_Param_PasteFoldersParams);
		P_GET_TARRAY_REF(UMovieSceneFolder*,Z_Param_Out_OutFolders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PasteFolders(Z_Param_TextToImport,Z_Param_PasteFoldersParams,Z_Param_Out_OutFolders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execCopyFolders)
	{
		P_GET_TARRAY_REF(UMovieSceneFolder*,Z_Param_Out_Folders);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExportedText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFolders(Z_Param_Out_Folders,Z_Param_Out_ExportedText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execConvertToPossessable)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=P_THIS->ConvertToPossessable(Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execConvertToSpawnable)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=P_THIS->ConvertToSpawnable(Z_Param_Out_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execCreateCamera)
	{
		P_GET_UBOOL(Z_Param_bSpawnable);
		P_GET_OBJECT_REF(ACineCameraActor,Z_Param_Out_OutActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=P_THIS->CreateCamera(Z_Param_bSpawnable,Z_Param_Out_OutActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceEditorSubsystem::execAddActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=P_THIS->AddActors(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	void ULevelSequenceEditorSubsystem::StaticRegisterNativesULevelSequenceEditorSubsystem()
	{
		UClass* Class = ULevelSequenceEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActors", &ULevelSequenceEditorSubsystem::execAddActors },
			{ "AddActorsToBinding", &ULevelSequenceEditorSubsystem::execAddActorsToBinding },
			{ "BakeTransform", &ULevelSequenceEditorSubsystem::execBakeTransform },
			{ "ConvertToPossessable", &ULevelSequenceEditorSubsystem::execConvertToPossessable },
			{ "ConvertToSpawnable", &ULevelSequenceEditorSubsystem::execConvertToSpawnable },
			{ "CopyBindings", &ULevelSequenceEditorSubsystem::execCopyBindings },
			{ "CopyFolders", &ULevelSequenceEditorSubsystem::execCopyFolders },
			{ "CopySections", &ULevelSequenceEditorSubsystem::execCopySections },
			{ "CopyTracks", &ULevelSequenceEditorSubsystem::execCopyTracks },
			{ "CreateCamera", &ULevelSequenceEditorSubsystem::execCreateCamera },
			{ "FixActorReferences", &ULevelSequenceEditorSubsystem::execFixActorReferences },
			{ "PasteBindings", &ULevelSequenceEditorSubsystem::execPasteBindings },
			{ "PasteFolders", &ULevelSequenceEditorSubsystem::execPasteFolders },
			{ "PasteSections", &ULevelSequenceEditorSubsystem::execPasteSections },
			{ "PasteTracks", &ULevelSequenceEditorSubsystem::execPasteTracks },
			{ "RebindComponent", &ULevelSequenceEditorSubsystem::execRebindComponent },
			{ "RemoveActorsFromBinding", &ULevelSequenceEditorSubsystem::execRemoveActorsFromBinding },
			{ "RemoveAllBindings", &ULevelSequenceEditorSubsystem::execRemoveAllBindings },
			{ "RemoveInvalidBindings", &ULevelSequenceEditorSubsystem::execRemoveInvalidBindings },
			{ "ReplaceBindingWithActors", &ULevelSequenceEditorSubsystem::execReplaceBindingWithActors },
			{ "SnapSectionsToTimelineUsingSourceTimecode", &ULevelSequenceEditorSubsystem::execSnapSectionsToTimelineUsingSourceTimecode },
			{ "SyncSectionsUsingSourceTimecode", &ULevelSequenceEditorSubsystem::execSyncSectionsUsingSourceTimecode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics
	{
		struct LevelSequenceEditorSubsystem_eventAddActors_Parms
		{
			TArray<AActor*> Actors;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventAddActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventAddActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Add existing actors to Sequencer. Tracks will be automatically added based on default track settings. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Add existing actors to Sequencer. Tracks will be automatically added based on default track settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "AddActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::LevelSequenceEditorSubsystem_eventAddActors_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics
	{
		struct LevelSequenceEditorSubsystem_eventAddActorsToBinding_Parms
		{
			TArray<AActor*> Actors;
			FMovieSceneBindingProxy ObjectBinding;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventAddActorsToBinding_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventAddActorsToBinding_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::NewProp_ObjectBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Assigns the given actors to the binding */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Assigns the given actors to the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "AddActorsToBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::LevelSequenceEditorSubsystem_eventAddActorsToBinding_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct LevelSequenceEditorSubsystem_eventBakeTransform_Parms
		{
			TArray<FMovieSceneBindingProxy> ObjectBindings;
			FFrameTime BakeInTime;
			FFrameTime BakeOutTime;
			FFrameTime BakeInterval;
			FMovieSceneScriptingParams Params;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeInTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventBakeTransform_Parms, ObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInTime = { "BakeInTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventBakeTransform_Parms, BakeInTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeOutTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeOutTime = { "BakeOutTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventBakeTransform_Parms, BakeOutTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInterval = { "BakeInterval", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventBakeTransform_Parms, BakeInterval), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventBakeTransform_Parms, Params), Z_Construct_UScriptStruct_FMovieSceneScriptingParams, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_Params_MetaData)) }; // 126439521
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_ObjectBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_BakeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Bake transform */" },
		{ "CPP_Default_Params", "()" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Bake transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "BakeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::LevelSequenceEditorSubsystem_eventBakeTransform_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics
	{
		struct LevelSequenceEditorSubsystem_eventConvertToPossessable_Parms
		{
			FMovieSceneBindingProxy ObjectBinding;
			FMovieSceneBindingProxy ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventConvertToPossessable_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventConvertToPossessable_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Convert to possessable */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Convert to possessable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "ConvertToPossessable", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::LevelSequenceEditorSubsystem_eventConvertToPossessable_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics
	{
		struct LevelSequenceEditorSubsystem_eventConvertToSpawnable_Parms
		{
			FMovieSceneBindingProxy ObjectBinding;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventConvertToSpawnable_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventConvertToSpawnable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Convert to spawnable. If there are multiple objects assigned to the possessable, multiple spawnables will be created. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Convert to spawnable. If there are multiple objects assigned to the possessable, multiple spawnables will be created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "ConvertToSpawnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::LevelSequenceEditorSubsystem_eventConvertToSpawnable_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics
	{
		struct LevelSequenceEditorSubsystem_eventCopyBindings_Parms
		{
			TArray<FMovieSceneBindingProxy> Bindings;
			FString ExportedText;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopyBindings_Parms, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings_MetaData)) }; // 716961670
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_ExportedText = { "ExportedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopyBindings_Parms, ExportedText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::NewProp_ExportedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Copy bindings\n\x09 * The copied bindings will be saved to the clipboard as well as assigned to the ExportedText string.\n\x09 * The ExportedTest string can be used in conjunction with PasteBindings if, for example, pasting copy/pasting multiple\n\x09 * bindings without relying on a single clipboard.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Copy bindings\nThe copied bindings will be saved to the clipboard as well as assigned to the ExportedText string.\nThe ExportedTest string can be used in conjunction with PasteBindings if, for example, pasting copy/pasting multiple\nbindings without relying on a single clipboard." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "CopyBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::LevelSequenceEditorSubsystem_eventCopyBindings_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics
	{
		struct LevelSequenceEditorSubsystem_eventCopyFolders_Parms
		{
			TArray<UMovieSceneFolder*> Folders;
			FString ExportedText;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Folders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders_Inner = { "Folders", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders = { "Folders", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopyFolders_Parms, Folders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_ExportedText = { "ExportedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopyFolders_Parms, ExportedText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_Folders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::NewProp_ExportedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** \n\x09 * Copy folders \n\x09 * The copied folders will be saved to the clipboard as well as assigned to the ExportedText string. \n\x09 * The ExportedTest string can be used in conjunction with PasteFolders if, for example, pasting copy/pasting multiple \n\x09 * folders without relying on a single clipboard. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Copy folders\nThe copied folders will be saved to the clipboard as well as assigned to the ExportedText string.\nThe ExportedTest string can be used in conjunction with PasteFolders if, for example, pasting copy/pasting multiple\nfolders without relying on a single clipboard." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "CopyFolders", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::LevelSequenceEditorSubsystem_eventCopyFolders_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics
	{
		struct LevelSequenceEditorSubsystem_eventCopySections_Parms
		{
			TArray<UMovieSceneSection*> Sections;
			FString ExportedText;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopySections_Parms, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_ExportedText = { "ExportedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopySections_Parms, ExportedText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::NewProp_ExportedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Copy sections\n\x09 * The copied sections will be saved to the clipboard as well as assigned to the ExportedText string.\n\x09 * The ExportedTest string can be used in conjunction with PasteSections if, for example, pasting copy/pasting multiple\n\x09 * sections without relying on a single clipboard.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Copy sections\nThe copied sections will be saved to the clipboard as well as assigned to the ExportedText string.\nThe ExportedTest string can be used in conjunction with PasteSections if, for example, pasting copy/pasting multiple\nsections without relying on a single clipboard." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "CopySections", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::LevelSequenceEditorSubsystem_eventCopySections_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics
	{
		struct LevelSequenceEditorSubsystem_eventCopyTracks_Parms
		{
			TArray<UMovieSceneTrack*> Tracks;
			FString ExportedText;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopyTracks_Parms, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_ExportedText = { "ExportedText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCopyTracks_Parms, ExportedText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::NewProp_ExportedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Copy tracks\n\x09 * The copied tracks will be saved to the clipboard as well as assigned to the ExportedText string.\n\x09 * The ExportedTest string can be used in conjunction with PasteTracks if, for example, pasting copy/pasting multiple\n\x09 * tracks without relying on a single clipboard.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Copy tracks\nThe copied tracks will be saved to the clipboard as well as assigned to the ExportedText string.\nThe ExportedTest string can be used in conjunction with PasteTracks if, for example, pasting copy/pasting multiple\ntracks without relying on a single clipboard." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "CopyTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::LevelSequenceEditorSubsystem_eventCopyTracks_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics
	{
		struct LevelSequenceEditorSubsystem_eventCreateCamera_Parms
		{
			bool bSpawnable;
			ACineCameraActor* OutActor;
			FMovieSceneBindingProxy ReturnValue;
		};
		static void NewProp_bSpawnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_bSpawnable_SetBit(void* Obj)
	{
		((LevelSequenceEditorSubsystem_eventCreateCamera_Parms*)Obj)->bSpawnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_bSpawnable = { "bSpawnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceEditorSubsystem_eventCreateCamera_Parms), &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_bSpawnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCreateCamera_Parms, OutActor), Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventCreateCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_bSpawnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_OutActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Create a cine camera actor and add it to Sequencer */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Create a cine camera actor and add it to Sequencer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "CreateCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::LevelSequenceEditorSubsystem_eventCreateCamera_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Attempts to automatically fix up broken actor references in the current scene */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Attempts to automatically fix up broken actor references in the current scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "FixActorReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics
	{
		struct LevelSequenceEditorSubsystem_eventPasteBindings_Parms
		{
			FString TextToImport;
			FMovieScenePasteBindingsParams PasteBindingsParams;
			TArray<FMovieSceneBindingProxy> OutObjectBindings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToImport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToImport;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteBindingsParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutObjectBindings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjectBindings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_TextToImport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_TextToImport = { "TextToImport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteBindings_Parms, TextToImport), METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_TextToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_TextToImport_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_PasteBindingsParams = { "PasteBindingsParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteBindings_Parms, PasteBindingsParams), Z_Construct_UScriptStruct_FMovieScenePasteBindingsParams, METADATA_PARAMS(nullptr, 0) }; // 196502128
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_OutObjectBindings_Inner = { "OutObjectBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_OutObjectBindings = { "OutObjectBindings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteBindings_Parms, OutObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	void Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorSubsystem_eventPasteBindings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceEditorSubsystem_eventPasteBindings_Parms), &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_TextToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_PasteBindingsParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_OutObjectBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_OutObjectBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Paste bindings\n\x09 * Paste bindings from the given TextToImport string (used in conjunction with CopyBindings).\n\x09 * If TextToImport is empty, the contents of the clipboard will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Paste bindings\nPaste bindings from the given TextToImport string (used in conjunction with CopyBindings).\nIf TextToImport is empty, the contents of the clipboard will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "PasteBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::LevelSequenceEditorSubsystem_eventPasteBindings_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics
	{
		struct LevelSequenceEditorSubsystem_eventPasteFolders_Parms
		{
			FString TextToImport;
			FMovieScenePasteFoldersParams PasteFoldersParams;
			TArray<UMovieSceneFolder*> OutFolders;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToImport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToImport;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteFoldersParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFolders;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_TextToImport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_TextToImport = { "TextToImport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteFolders_Parms, TextToImport), METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_TextToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_TextToImport_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_PasteFoldersParams = { "PasteFoldersParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteFolders_Parms, PasteFoldersParams), Z_Construct_UScriptStruct_FMovieScenePasteFoldersParams, METADATA_PARAMS(nullptr, 0) }; // 827300519
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders_Inner = { "OutFolders", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders = { "OutFolders", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteFolders_Parms, OutFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders_MetaData)) };
	void Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorSubsystem_eventPasteFolders_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceEditorSubsystem_eventPasteFolders_Parms), &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_TextToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_PasteFoldersParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_OutFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** \n\x09 * Paste folders \n\x09 * Paste folders from the given TextToImport string (used in conjunction with CopyFolders). \n\x09 * If TextToImport is empty, the contents of the clipboard will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Paste folders\nPaste folders from the given TextToImport string (used in conjunction with CopyFolders).\nIf TextToImport is empty, the contents of the clipboard will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "PasteFolders", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::LevelSequenceEditorSubsystem_eventPasteFolders_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics
	{
		struct LevelSequenceEditorSubsystem_eventPasteSections_Parms
		{
			FString TextToImport;
			FMovieScenePasteSectionsParams PasteSectionsParams;
			TArray<UMovieSceneSection*> OutSections;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToImport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToImport;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteSectionsParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSections;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_TextToImport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_TextToImport = { "TextToImport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteSections_Parms, TextToImport), METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_TextToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_TextToImport_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_PasteSectionsParams = { "PasteSectionsParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteSections_Parms, PasteSectionsParams), Z_Construct_UScriptStruct_FMovieScenePasteSectionsParams, METADATA_PARAMS(nullptr, 0) }; // 520492491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections_Inner = { "OutSections", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections = { "OutSections", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteSections_Parms, OutSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections_MetaData)) };
	void Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorSubsystem_eventPasteSections_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceEditorSubsystem_eventPasteSections_Parms), &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_TextToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_PasteSectionsParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_OutSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Paste sections\n\x09 * Paste sections from the given TextToImport string (used in conjunction with CopySections).\n\x09 * If TextToImport is empty, the contents of the clipboard will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Paste sections\nPaste sections from the given TextToImport string (used in conjunction with CopySections).\nIf TextToImport is empty, the contents of the clipboard will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "PasteSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::LevelSequenceEditorSubsystem_eventPasteSections_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics
	{
		struct LevelSequenceEditorSubsystem_eventPasteTracks_Parms
		{
			FString TextToImport;
			FMovieScenePasteTracksParams PasteTracksParams;
			TArray<UMovieSceneTrack*> OutTracks;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToImport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToImport;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteTracksParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTracks;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_TextToImport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_TextToImport = { "TextToImport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteTracks_Parms, TextToImport), METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_TextToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_TextToImport_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_PasteTracksParams = { "PasteTracksParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteTracks_Parms, PasteTracksParams), Z_Construct_UScriptStruct_FMovieScenePasteTracksParams, METADATA_PARAMS(nullptr, 0) }; // 3774530098
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks_Inner = { "OutTracks", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks = { "OutTracks", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventPasteTracks_Parms, OutTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks_MetaData)) };
	void Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceEditorSubsystem_eventPasteTracks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceEditorSubsystem_eventPasteTracks_Parms), &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_TextToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_PasteTracksParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_OutTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/**\n\x09 * Paste tracks\n\x09 * Paste tracks from the given TextToImport string (used in conjunction with CopyTracks).\n\x09 * If TextToImport is empty, the contents of the clipboard will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Paste tracks\nPaste tracks from the given TextToImport string (used in conjunction with CopyTracks).\nIf TextToImport is empty, the contents of the clipboard will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "PasteTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::LevelSequenceEditorSubsystem_eventPasteTracks_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics
	{
		struct LevelSequenceEditorSubsystem_eventRebindComponent_Parms
		{
			TArray<FMovieSceneBindingProxy> ComponentBindings;
			FName ComponentName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings_Inner = { "ComponentBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings = { "ComponentBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventRebindComponent_Parms, ComponentBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventRebindComponent_Parms, ComponentName), METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::NewProp_ComponentName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Rebind the component binding to the requested component */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Rebind the component binding to the requested component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "RebindComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::LevelSequenceEditorSubsystem_eventRebindComponent_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics
	{
		struct LevelSequenceEditorSubsystem_eventRemoveActorsFromBinding_Parms
		{
			TArray<AActor*> Actors;
			FMovieSceneBindingProxy ObjectBinding;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventRemoveActorsFromBinding_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventRemoveActorsFromBinding_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::NewProp_ObjectBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Removes the given actors from the binding */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Removes the given actors from the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "RemoveActorsFromBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::LevelSequenceEditorSubsystem_eventRemoveActorsFromBinding_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics
	{
		struct LevelSequenceEditorSubsystem_eventRemoveAllBindings_Parms
		{
			FMovieSceneBindingProxy ObjectBinding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventRemoveAllBindings_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::NewProp_ObjectBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Remove all bound actors from this track */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Remove all bound actors from this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "RemoveAllBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::LevelSequenceEditorSubsystem_eventRemoveAllBindings_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics
	{
		struct LevelSequenceEditorSubsystem_eventRemoveInvalidBindings_Parms
		{
			FMovieSceneBindingProxy ObjectBinding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventRemoveInvalidBindings_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::NewProp_ObjectBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Remove missing objects bound to this track */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Remove missing objects bound to this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "RemoveInvalidBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::LevelSequenceEditorSubsystem_eventRemoveInvalidBindings_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics
	{
		struct LevelSequenceEditorSubsystem_eventReplaceBindingWithActors_Parms
		{
			TArray<AActor*> Actors;
			FMovieSceneBindingProxy ObjectBinding;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventReplaceBindingWithActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventReplaceBindingWithActors_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_ObjectBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::NewProp_ObjectBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Replaces the binding with the given actors */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Replaces the binding with the given actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "ReplaceBindingWithActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::LevelSequenceEditorSubsystem_eventReplaceBindingWithActors_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics
	{
		struct LevelSequenceEditorSubsystem_eventSnapSectionsToTimelineUsingSourceTimecode_Parms
		{
			TArray<UMovieSceneSection*> Sections;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventSnapSectionsToTimelineUsingSourceTimecode_Parms, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::NewProp_Sections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Snap sections to timeline using source timecode */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Snap sections to timeline using source timecode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "SnapSectionsToTimelineUsingSourceTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::LevelSequenceEditorSubsystem_eventSnapSectionsToTimelineUsingSourceTimecode_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics
	{
		struct LevelSequenceEditorSubsystem_eventSyncSectionsUsingSourceTimecode_Parms
		{
			TArray<UMovieSceneSection*> Sections;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceEditorSubsystem_eventSyncSectionsUsingSourceTimecode_Parms, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::NewProp_Sections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence Editor" },
		{ "Comment", "/** Sync section using source timecode */" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "Sync section using source timecode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceEditorSubsystem, nullptr, "SyncSectionsUsingSourceTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::LevelSequenceEditorSubsystem_eventSyncSectionsUsingSourceTimecode_Parms), Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceEditorSubsystem);
	UClass* Z_Construct_UClass_ULevelSequenceEditorSubsystem_NoRegister()
	{
		return ULevelSequenceEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActors, "AddActors" }, // 1771344406
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_AddActorsToBinding, "AddActorsToBinding" }, // 216045082
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_BakeTransform, "BakeTransform" }, // 4154657993
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToPossessable, "ConvertToPossessable" }, // 2667743502
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ConvertToSpawnable, "ConvertToSpawnable" }, // 1446699722
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyBindings, "CopyBindings" }, // 1177975679
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyFolders, "CopyFolders" }, // 564873161
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopySections, "CopySections" }, // 2191409028
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CopyTracks, "CopyTracks" }, // 3463999472
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_CreateCamera, "CreateCamera" }, // 4052671963
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_FixActorReferences, "FixActorReferences" }, // 3890242818
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteBindings, "PasteBindings" }, // 2779055352
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteFolders, "PasteFolders" }, // 3627678908
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteSections, "PasteSections" }, // 1613624038
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_PasteTracks, "PasteTracks" }, // 1558816739
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RebindComponent, "RebindComponent" }, // 3717166728
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveActorsFromBinding, "RemoveActorsFromBinding" }, // 3533973050
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveAllBindings, "RemoveAllBindings" }, // 1322662231
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_RemoveInvalidBindings, "RemoveInvalidBindings" }, // 2768171023
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_ReplaceBindingWithActors, "ReplaceBindingWithActors" }, // 2780037993
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SnapSectionsToTimelineUsingSourceTimecode, "SnapSectionsToTimelineUsingSourceTimecode" }, // 3946008787
		{ &Z_Construct_UFunction_ULevelSequenceEditorSubsystem_SyncSectionsUsingSourceTimecode, "SyncSectionsUsingSourceTimecode" }, // 1997679679
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* ULevelSequenceEditorSubsystem\n* Subsystem for level sequencer related utilities to scripts\n*/" },
		{ "IncludePath", "LevelSequenceEditorSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceEditorSubsystem.h" },
		{ "ToolTip", "ULevelSequenceEditorSubsystem\nSubsystem for level sequencer related utilities to scripts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::ClassParams = {
		&ULevelSequenceEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceEditorSubsystem.OuterSingleton, Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceEditorSubsystem.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<ULevelSequenceEditorSubsystem>()
	{
		return ULevelSequenceEditorSubsystem::StaticClass();
	}
	ULevelSequenceEditorSubsystem::ULevelSequenceEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceEditorSubsystem);
	ULevelSequenceEditorSubsystem::~ULevelSequenceEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneScriptingParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics::NewStructOps, TEXT("MovieSceneScriptingParams"), &Z_Registration_Info_UScriptStruct_MovieSceneScriptingParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneScriptingParams), 126439521U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceEditorSubsystem, ULevelSequenceEditorSubsystem::StaticClass, TEXT("ULevelSequenceEditorSubsystem"), &Z_Registration_Info_UClass_ULevelSequenceEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceEditorSubsystem), 2476178264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_3473219298(TEXT("/Script/LevelSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
