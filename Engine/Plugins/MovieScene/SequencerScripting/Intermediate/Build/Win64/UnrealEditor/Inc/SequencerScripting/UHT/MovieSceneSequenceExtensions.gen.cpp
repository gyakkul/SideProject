// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneSequenceExtensions.h"
#include "MovieScene.h"
#include "MovieSceneBindingProxy.h"
#include "MovieSceneObjectBindingID.h"
#include "SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceExtensions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions_NoRegister();
	SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execIsReadOnly)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::IsReadOnly(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetReadOnly)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_UBOOL(Z_Param_bInReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetReadOnly(Z_Param_Sequence,Z_Param_bInReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindNextMarkedFrame)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
		P_GET_UBOOL(Z_Param_bForward);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindNextMarkedFrame(Z_Param_Sequence,Z_Param_InFrameNumber,Z_Param_bForward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumber)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(Z_Param_Sequence,Z_Param_InFrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMarkedFrameByLabel)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(Z_Param_Sequence,Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSortMarkedFrames)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SortMarkedFrames(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execDeleteMarkedFrames)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::DeleteMarkedFrames(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execDeleteMarkedFrame)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeleteIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::DeleteMarkedFrame(Z_Param_Sequence,Z_Param_DeleteIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetMarkedFrame)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMarkIndex);
		P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetMarkedFrame(Z_Param_Sequence,Z_Param_InMarkIndex,Z_Param_InFrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddMarkedFrame)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT_REF(FMovieSceneMarkedFrame,Z_Param_Out_InMarkedFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::AddMarkedFrame(Z_Param_Sequence,Z_Param_Out_InMarkedFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMarkedFrames)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneMarkedFrame>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetMarkedFrames(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execRemoveRootFolderFromSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence(Z_Param_Sequence,Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddRootFolderToSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewFolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneFolder**)Z_Param__Result=UMovieSceneSequenceExtensions::AddRootFolderToSequence(Z_Param_Sequence,Z_Param_NewFolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetRootFoldersInSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneFolder*>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetRootFoldersInSequence(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execResolveBindingID)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_RootSequence);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_InObjectBindingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::ResolveBindingID(Z_Param_RootSequence,Z_Param_InObjectBindingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPortableBindingID)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_RootSequence);
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_DestinationSequence);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPortableBindingID(Z_Param_RootSequence,Z_Param_DestinationSequence,Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetBindingID)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=UMovieSceneSequenceExtensions::GetBindingID(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execMakeBindingID)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_ENUM(EMovieSceneObjectBindingSpace,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=UMovieSceneSequenceExtensions::MakeBindingID(Z_Param_Sequence,Z_Param_Out_InBinding,EMovieSceneObjectBindingSpace(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execLocateBoundObjects)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UMovieSceneSequenceExtensions::LocateBoundObjects(Z_Param_Sequence,Z_Param_Out_InBinding,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddSpawnableFromClass)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_ClassToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::AddSpawnableFromClass(Z_Param_Sequence,Z_Param_ClassToSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddSpawnableFromInstance)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UObject,Z_Param_ObjectToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::AddSpawnableFromInstance(Z_Param_Sequence,Z_Param_ObjectToSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddPossessable)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UObject,Z_Param_ObjectToPossess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::AddPossessable(Z_Param_Sequence,Z_Param_ObjectToPossess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPossessables)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPossessables(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetSpawnables)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetSpawnables(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetBindings)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetBindings(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindBindingById)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT(FGuid,Z_Param_BindingId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::FindBindingById(Z_Param_Sequence,Z_Param_BindingId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindBindingByName)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::FindBindingByName(Z_Param_Sequence,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetTimecodeSource)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UMovieSceneSequenceExtensions::GetTimecodeSource(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetClockSource)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUpdateClockSource*)Z_Param__Result=UMovieSceneSequenceExtensions::GetClockSource(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetClockSource)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_ENUM(EUpdateClockSource,Z_Param_InClockSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetClockSource(Z_Param_InSequence,EUpdateClockSource(Z_Param_InClockSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetEvaluationType)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieSceneEvaluationType*)Z_Param__Result=UMovieSceneSequenceExtensions::GetEvaluationType(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetEvaluationType)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_ENUM(EMovieSceneEvaluationType,Z_Param_InEvaluationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetEvaluationType(Z_Param_InSequence,EMovieSceneEvaluationType(Z_Param_InEvaluationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetWorkRangeEnd)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetWorkRangeEnd(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetWorkRangeEnd)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetWorkRangeEnd(Z_Param_InSequence,Z_Param_EndTimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetWorkRangeStart)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetWorkRangeStart(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetWorkRangeStart)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetWorkRangeStart(Z_Param_InSequence,Z_Param_StartTimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetViewRangeEnd)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetViewRangeEnd(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetViewRangeEnd)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetViewRangeEnd(Z_Param_InSequence,Z_Param_EndTimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetViewRangeStart)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetViewRangeStart(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetViewRangeStart)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetViewRangeStart(Z_Param_InSequence,Z_Param_StartTimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackEndSeconds)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(Z_Param_Sequence,Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackEnd)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetPlaybackEnd(Z_Param_Sequence,Z_Param_EndFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackStartSeconds)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(Z_Param_Sequence,Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackStart)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetPlaybackStart(Z_Param_Sequence,Z_Param_StartFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackEndSeconds)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackEnd)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackEnd(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackStartSeconds)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackStart)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackStart(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackRange)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerScriptingRange*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackRange(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execMakeRangeSeconds)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerScriptingRange*)Z_Param__Result=UMovieSceneSequenceExtensions::MakeRangeSeconds(Z_Param_Sequence,Z_Param_StartTime,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execMakeRange)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
		P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerScriptingRange*)Z_Param__Result=UMovieSceneSequenceExtensions::MakeRange(Z_Param_Sequence,Z_Param_StartFrame,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetTickResolutionDirectly)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT(FFrameRate,Z_Param_TickResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetTickResolutionDirectly(Z_Param_Sequence,Z_Param_TickResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetTickResolution)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT(FFrameRate,Z_Param_TickResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetTickResolution(Z_Param_Sequence,Z_Param_TickResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetTickResolution)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=UMovieSceneSequenceExtensions::GetTickResolution(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetDisplayRate)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_STRUCT(FFrameRate,Z_Param_DisplayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSequenceExtensions::SetDisplayRate(Z_Param_Sequence,Z_Param_DisplayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetDisplayRate)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=UMovieSceneSequenceExtensions::GetDisplayRate(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execRemoveMasterTrack)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::RemoveMasterTrack(Z_Param_Sequence,Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execRemoveTrack)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::RemoveTrack(Z_Param_Sequence,Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddMasterTrack)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneTrack**)Z_Param__Result=UMovieSceneSequenceExtensions::AddMasterTrack(Z_Param_Sequence,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddTrack)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneTrack**)Z_Param__Result=UMovieSceneSequenceExtensions::AddTrack(Z_Param_Sequence,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMasterTracksByExactType)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMasterTracksByExactType(Z_Param_Sequence,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindTracksByExactType)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindTracksByExactType(Z_Param_Sequence,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMasterTracksByType)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMasterTracksByType(Z_Param_Sequence,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindTracksByType)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindTracksByType(Z_Param_Sequence,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMasterTracks)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetMasterTracks(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetTracks)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetTracks(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMovieScene)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieScene**)Z_Param__Result=UMovieSceneSequenceExtensions::GetMovieScene(Z_Param_Sequence);
		P_NATIVE_END;
	}
	void UMovieSceneSequenceExtensions::StaticRegisterNativesUMovieSceneSequenceExtensions()
	{
		UClass* Class = UMovieSceneSequenceExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMarkedFrame", &UMovieSceneSequenceExtensions::execAddMarkedFrame },
			{ "AddMasterTrack", &UMovieSceneSequenceExtensions::execAddMasterTrack },
			{ "AddPossessable", &UMovieSceneSequenceExtensions::execAddPossessable },
			{ "AddRootFolderToSequence", &UMovieSceneSequenceExtensions::execAddRootFolderToSequence },
			{ "AddSpawnableFromClass", &UMovieSceneSequenceExtensions::execAddSpawnableFromClass },
			{ "AddSpawnableFromInstance", &UMovieSceneSequenceExtensions::execAddSpawnableFromInstance },
			{ "AddTrack", &UMovieSceneSequenceExtensions::execAddTrack },
			{ "DeleteMarkedFrame", &UMovieSceneSequenceExtensions::execDeleteMarkedFrame },
			{ "DeleteMarkedFrames", &UMovieSceneSequenceExtensions::execDeleteMarkedFrames },
			{ "FindBindingById", &UMovieSceneSequenceExtensions::execFindBindingById },
			{ "FindBindingByName", &UMovieSceneSequenceExtensions::execFindBindingByName },
			{ "FindMarkedFrameByFrameNumber", &UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumber },
			{ "FindMarkedFrameByLabel", &UMovieSceneSequenceExtensions::execFindMarkedFrameByLabel },
			{ "FindMasterTracksByExactType", &UMovieSceneSequenceExtensions::execFindMasterTracksByExactType },
			{ "FindMasterTracksByType", &UMovieSceneSequenceExtensions::execFindMasterTracksByType },
			{ "FindNextMarkedFrame", &UMovieSceneSequenceExtensions::execFindNextMarkedFrame },
			{ "FindTracksByExactType", &UMovieSceneSequenceExtensions::execFindTracksByExactType },
			{ "FindTracksByType", &UMovieSceneSequenceExtensions::execFindTracksByType },
			{ "GetBindingID", &UMovieSceneSequenceExtensions::execGetBindingID },
			{ "GetBindings", &UMovieSceneSequenceExtensions::execGetBindings },
			{ "GetClockSource", &UMovieSceneSequenceExtensions::execGetClockSource },
			{ "GetDisplayRate", &UMovieSceneSequenceExtensions::execGetDisplayRate },
			{ "GetEvaluationType", &UMovieSceneSequenceExtensions::execGetEvaluationType },
			{ "GetMarkedFrames", &UMovieSceneSequenceExtensions::execGetMarkedFrames },
			{ "GetMasterTracks", &UMovieSceneSequenceExtensions::execGetMasterTracks },
			{ "GetMovieScene", &UMovieSceneSequenceExtensions::execGetMovieScene },
			{ "GetPlaybackEnd", &UMovieSceneSequenceExtensions::execGetPlaybackEnd },
			{ "GetPlaybackEndSeconds", &UMovieSceneSequenceExtensions::execGetPlaybackEndSeconds },
			{ "GetPlaybackRange", &UMovieSceneSequenceExtensions::execGetPlaybackRange },
			{ "GetPlaybackStart", &UMovieSceneSequenceExtensions::execGetPlaybackStart },
			{ "GetPlaybackStartSeconds", &UMovieSceneSequenceExtensions::execGetPlaybackStartSeconds },
			{ "GetPortableBindingID", &UMovieSceneSequenceExtensions::execGetPortableBindingID },
			{ "GetPossessables", &UMovieSceneSequenceExtensions::execGetPossessables },
			{ "GetRootFoldersInSequence", &UMovieSceneSequenceExtensions::execGetRootFoldersInSequence },
			{ "GetSpawnables", &UMovieSceneSequenceExtensions::execGetSpawnables },
			{ "GetTickResolution", &UMovieSceneSequenceExtensions::execGetTickResolution },
			{ "GetTimecodeSource", &UMovieSceneSequenceExtensions::execGetTimecodeSource },
			{ "GetTracks", &UMovieSceneSequenceExtensions::execGetTracks },
			{ "GetViewRangeEnd", &UMovieSceneSequenceExtensions::execGetViewRangeEnd },
			{ "GetViewRangeStart", &UMovieSceneSequenceExtensions::execGetViewRangeStart },
			{ "GetWorkRangeEnd", &UMovieSceneSequenceExtensions::execGetWorkRangeEnd },
			{ "GetWorkRangeStart", &UMovieSceneSequenceExtensions::execGetWorkRangeStart },
			{ "IsReadOnly", &UMovieSceneSequenceExtensions::execIsReadOnly },
			{ "LocateBoundObjects", &UMovieSceneSequenceExtensions::execLocateBoundObjects },
			{ "MakeBindingID", &UMovieSceneSequenceExtensions::execMakeBindingID },
			{ "MakeRange", &UMovieSceneSequenceExtensions::execMakeRange },
			{ "MakeRangeSeconds", &UMovieSceneSequenceExtensions::execMakeRangeSeconds },
			{ "RemoveMasterTrack", &UMovieSceneSequenceExtensions::execRemoveMasterTrack },
			{ "RemoveRootFolderFromSequence", &UMovieSceneSequenceExtensions::execRemoveRootFolderFromSequence },
			{ "RemoveTrack", &UMovieSceneSequenceExtensions::execRemoveTrack },
			{ "ResolveBindingID", &UMovieSceneSequenceExtensions::execResolveBindingID },
			{ "SetClockSource", &UMovieSceneSequenceExtensions::execSetClockSource },
			{ "SetDisplayRate", &UMovieSceneSequenceExtensions::execSetDisplayRate },
			{ "SetEvaluationType", &UMovieSceneSequenceExtensions::execSetEvaluationType },
			{ "SetMarkedFrame", &UMovieSceneSequenceExtensions::execSetMarkedFrame },
			{ "SetPlaybackEnd", &UMovieSceneSequenceExtensions::execSetPlaybackEnd },
			{ "SetPlaybackEndSeconds", &UMovieSceneSequenceExtensions::execSetPlaybackEndSeconds },
			{ "SetPlaybackStart", &UMovieSceneSequenceExtensions::execSetPlaybackStart },
			{ "SetPlaybackStartSeconds", &UMovieSceneSequenceExtensions::execSetPlaybackStartSeconds },
			{ "SetReadOnly", &UMovieSceneSequenceExtensions::execSetReadOnly },
			{ "SetTickResolution", &UMovieSceneSequenceExtensions::execSetTickResolution },
			{ "SetTickResolutionDirectly", &UMovieSceneSequenceExtensions::execSetTickResolutionDirectly },
			{ "SetViewRangeEnd", &UMovieSceneSequenceExtensions::execSetViewRangeEnd },
			{ "SetViewRangeStart", &UMovieSceneSequenceExtensions::execSetViewRangeStart },
			{ "SetWorkRangeEnd", &UMovieSceneSequenceExtensions::execSetWorkRangeEnd },
			{ "SetWorkRangeStart", &UMovieSceneSequenceExtensions::execSetWorkRangeStart },
			{ "SortMarkedFrames", &UMovieSceneSequenceExtensions::execSortMarkedFrames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms
		{
			UMovieSceneSequence* Sequence;
			FMovieSceneMarkedFrame InMarkedFrame;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMarkedFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMarkedFrame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame = { "InMarkedFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms, InMarkedFrame), Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame_MetaData)) }; // 97916427
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Add a given user marked frame.\n\x09 * A unique label will be generated if the marked frame label is empty\n\x09 *\n\x09 * @InMarkedFrame The given user marked frame to add\n\x09 * @return The index to the newly added marked frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Add a given user marked frame.\n* A unique label will be generated if the marked frame label is empty\n*\n* @InMarkedFrame The given user marked frame to add\n* @return The index to the newly added marked frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddMasterTrack_Parms
		{
			UMovieSceneSequence* Sequence;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			UMovieSceneTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMasterTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMasterTrack_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMasterTrack_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddMasterTrack is deprecated. Please use AddTrack instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddMasterTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::MovieSceneSequenceExtensions_eventAddMasterTrack_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddPossessable_Parms
		{
			UMovieSceneSequence* Sequence;
			UObject* ObjectToPossess;
			FMovieSceneBindingProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToPossess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddPossessable_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ObjectToPossess = { "ObjectToPossess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddPossessable_Parms, ObjectToPossess), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddPossessable_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ObjectToPossess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new binding to this sequence that will possess the specified object\n\x09 *\n\x09 * @param Sequence        The sequence to add a possessable to\n\x09 * @param ObjectToPossess The object that this sequence should possess when evaluating\n\x09 * @return A unique identifier for the new binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new binding to this sequence that will possess the specified object\n\n@param Sequence        The sequence to add a possessable to\n@param ObjectToPossess The object that this sequence should possess when evaluating\n@return A unique identifier for the new binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddPossessable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::MovieSceneSequenceExtensions_eventAddPossessable_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms
		{
			UMovieSceneSequence* Sequence;
			FString NewFolderName;
			UMovieSceneFolder* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewFolderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_NewFolderName = { "NewFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms, NewFolderName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_NewFolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a root folder to the given sequence\n\x09 *\n\x09 * @param Sequence\x09\x09\x09The sequence to add a folder to\n\x09 * @param NewFolderName\x09\x09The name to give the added folder\n\x09 * @return The newly created folder\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a root folder to the given sequence\n\n@param Sequence                      The sequence to add a folder to\n@param NewFolderName         The name to give the added folder\n@return The newly created folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddRootFolderToSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms
		{
			UMovieSceneSequence* Sequence;
			UClass* ClassToSpawn;
			FMovieSceneBindingProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms, ClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ClassToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new binding to this sequence that will spawn the specified object\n\x09 *\n\x09 * @param Sequence        The sequence to add to\n\x09 * @param ClassToSpawn    A class or blueprint type to spawn for this binding\n\x09 * @return A unique identifier for the new binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new binding to this sequence that will spawn the specified object\n\n@param Sequence        The sequence to add to\n@param ClassToSpawn    A class or blueprint type to spawn for this binding\n@return A unique identifier for the new binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddSpawnableFromClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms
		{
			UMovieSceneSequence* Sequence;
			UObject* ObjectToSpawn;
			FMovieSceneBindingProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToSpawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ObjectToSpawn = { "ObjectToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms, ObjectToSpawn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ObjectToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new binding to this sequence that will spawn the specified object\n\x09 *\n\x09 * @param Sequence        The sequence to add to\n\x09 * @param ObjectToSpawn   An object instance to use as a template for spawning\n\x09 * @return A unique identifier for the new binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new binding to this sequence that will spawn the specified object\n\n@param Sequence        The sequence to add to\n@param ObjectToSpawn   An object instance to use as a template for spawning\n@return A unique identifier for the new binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddSpawnableFromInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics
	{
		struct MovieSceneSequenceExtensions_eventAddTrack_Parms
		{
			UMovieSceneSequence* Sequence;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			UMovieSceneTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddTrack_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddTrack_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new track of the specified type\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TrackType     A UMovieSceneTrack class type to create\n\x09 * @return The newly created track, if successful\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new track of the specified type\n\n@param Sequence        The sequence to use\n@param TrackType     A UMovieSceneTrack class type to create\n@return The newly created track, if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::MovieSceneSequenceExtensions_eventAddTrack_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics
	{
		struct MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 DeleteIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeleteIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_DeleteIndex = { "DeleteIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms, DeleteIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_DeleteIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Delete the user marked frame by index.\n\x09 *\n\x09 * @DeleteIndex The index to the user marked frame to delete\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Delete the user marked frame by index.\n*\n* @DeleteIndex The index to the user marked frame to delete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "DeleteMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics
	{
		struct MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms
		{
			UMovieSceneSequence* Sequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::NewProp_Sequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Delete all user marked frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Delete all user marked frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "DeleteMarkedFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindBindingById_Parms
		{
			UMovieSceneSequence* Sequence;
			FGuid BindingId;
			FMovieSceneBindingProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingById_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_BindingId = { "BindingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingById_Parms, BindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingById_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_BindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Attempt to locate a binding in this sequence by its Id\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param BindingId       The binding Id to look up\n\x09 * @return A unique identifier for the binding, or invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to locate a binding in this sequence by its Id\n\n@param Sequence        The sequence within which to find the binding\n@param BindingId       The binding Id to look up\n@return A unique identifier for the binding, or invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindBindingById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::MovieSceneSequenceExtensions_eventFindBindingById_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindBindingByName_Parms
		{
			UMovieSceneSequence* Sequence;
			FString Name;
			FMovieSceneBindingProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingByName_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Attempt to locate a binding in this sequence by its name\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param Name            The display name of the binding to look up\n\x09 * @return A unique identifier for the binding, or invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to locate a binding in this sequence by its name\n\n@param Sequence        The sequence within which to find the binding\n@param Name            The display name of the binding to look up\n@return A unique identifier for the binding, or invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindBindingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::MovieSceneSequenceExtensions_eventFindBindingByName_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameNumber InFrameNumber;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_InFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Find the user marked frame by frame number\n\x09 *\n\x09 * @InFrameNumber The frame number of the user marked frame to find\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Find the user marked frame by frame number\n*\n* @InFrameNumber The frame number of the user marked frame to find" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMarkedFrameByFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms
		{
			UMovieSceneSequence* Sequence;
			FString InLabel;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Find the user marked frame by label\n\x09 *\n\x09 * @InLabel The label to the user marked frame to find\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Find the user marked frame by label\n*\n* @InLabel The label to the user marked frame to find" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMarkedFrameByLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms
		{
			UMovieSceneSequence* Sequence;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FindMasterTracksByExactType is deprecated. Please use FindTracksByExactType instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMasterTracksByExactType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms
		{
			UMovieSceneSequence* Sequence;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FindMasterTracksByType is deprecated. Please use FindTracksByType instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMasterTracksByType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameNumber InFrameNumber;
			bool bForward;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static void NewProp_bForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForward;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward_SetBit(void* Obj)
	{
		((MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms*)Obj)->bForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward = { "bForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_InFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Find the next/previous user marked frame from the given frame number\n\x09 *\n\x09 * @InFrameNumber The frame number to find the next/previous user marked frame from\n\x09 * @bForward Find forward from the given frame number.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Find the next/previous user marked frame from the given frame number\n*\n* @InFrameNumber The frame number to find the next/previous user marked frame from\n* @bForward Find forward from the given frame number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindNextMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms
		{
			UMovieSceneSequence* Sequence;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all tracks of the specified type, not allowing sub-classed types\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying the exact types of track to return\n\x09 * @return An array containing any tracks that are exactly the same as the type specified\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all tracks of the specified type, not allowing sub-classed types\n\n@param Sequence        The sequence to use\n@param TrackType     A UMovieSceneTrack class type specifying the exact types of track to return\n@return An array containing any tracks that are exactly the same as the type specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindTracksByExactType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics
	{
		struct MovieSceneSequenceExtensions_eventFindTracksByType_Parms
		{
			UMovieSceneSequence* Sequence;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all tracks of the specified type\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying which types of track to return\n\x09 * @return An array containing any tracks that match the type specified\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all tracks of the specified type\n\n@param Sequence        The sequence to use\n@param TrackType     A UMovieSceneTrack class type specifying which types of track to return\n@return An array containing any tracks that match the type specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindTracksByType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::MovieSceneSequenceExtensions_eventFindTracksByType_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetBindingID_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FMovieSceneObjectBindingID ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindingID_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the binding ID for a binding within a sequence.\n\x09 * @note: The resulting binding is only valid when applied to properties within the same sequence as this binding. Use GetPortableBindingID for bindings which live in different sub-sequences.\n\x09 *\n\x09 * @param Binding The binding proxy to generate the binding id from\n\x09 * @return The binding's id\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the binding ID for a binding within a sequence.\n@note: The resulting binding is only valid when applied to properties within the same sequence as this binding. Use GetPortableBindingID for bindings which live in different sub-sequences.\n\n@param Binding The binding proxy to generate the binding id from\n@return The binding's id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::MovieSceneSequenceExtensions_eventGetBindingID_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetBindings_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindings_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get all the bindings in this sequence\n\x09 *\n\x09 * @param Sequence        The sequence to get bindings for\n\x09 * @return An array of unique identifiers for all the bindings in this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the bindings in this sequence\n\n@param Sequence        The sequence to get bindings for\n@return An array of unique identifiers for all the bindings in this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::MovieSceneSequenceExtensions_eventGetBindings_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetClockSource_Parms
		{
			UMovieSceneSequence* InSequence;
			EUpdateClockSource ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetClockSource_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetClockSource_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(nullptr, 0) }; // 3237436252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the clock source for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to get the clock source\n\x09 * @return The clock source for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the clock source for this sequence\n\n@param Sequence The sequence within which to get the clock source\n@return The clock source for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetClockSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::MovieSceneSequenceExtensions_eventGetClockSource_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequenceExtensions_eventGetDisplayRate_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetDisplayRate_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetDisplayRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Gets this sequence's display rate\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return The display rate that this sequence is displayed as\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets this sequence's display rate\n\n@param Sequence        The sequence to use\n@return The display rate that this sequence is displayed as" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetDisplayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::MovieSceneSequenceExtensions_eventGetDisplayRate_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetEvaluationType_Parms
		{
			UMovieSceneSequence* InSequence;
			EMovieSceneEvaluationType ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetEvaluationType_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetEvaluationType_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(nullptr, 0) }; // 2615994803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the evaluation type for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to get the evaluation type\n\x09 * @return The evaluation type for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the evaluation type for this sequence\n\n@param Sequence The sequence within which to get the evaluation type\n@return The evaluation type for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetEvaluationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::MovieSceneSequenceExtensions_eventGetEvaluationType_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<FMovieSceneMarkedFrame> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(nullptr, 0) }; // 97916427
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 97916427
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * @return Return the user marked frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* @return Return the user marked frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMarkedFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetMasterTracks_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMasterTracks_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMasterTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMasterTracks is deprecated. Please use GetTracks instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMasterTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::MovieSceneSequenceExtensions_eventGetMasterTracks_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetMovieScene_Parms
		{
			UMovieSceneSequence* Sequence;
			UMovieScene* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMovieScene_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMovieScene_Parms, ReturnValue), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get this sequence's movie scene data\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return This sequence's movie scene data object\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this sequence's movie scene data\n\n@param Sequence        The sequence to use\n@return This sequence's movie scene data object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMovieScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::MovieSceneSequenceExtensions_eventGetMovieScene_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback end of this sequence in display rate resolution\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback end\n\x09 * @return Playback end of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback end of this sequence in display rate resolution\n\n@param Sequence        The sequence within which to get the playback end\n@return Playback end of this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms
		{
			UMovieSceneSequence* Sequence;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback end of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback end\n\x09 * @return Playback end of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback end of this sequence in seconds\n\n@param Sequence        The sequence within which to get the playback end\n@return Playback end of this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackEndSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms
		{
			UMovieSceneSequence* Sequence;
			FSequencerScriptingRange ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback range of this sequence in display rate resolution\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback range\n\x09 * @return Playback range of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback range of this sequence in display rate resolution\n\n@param Sequence        The sequence within which to get the playback range\n@return Playback range of this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback start of this sequence in display rate resolution\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback start\n\x09 * @return Playback start of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback start of this sequence in display rate resolution\n\n@param Sequence        The sequence within which to get the playback start\n@return Playback start of this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms
		{
			UMovieSceneSequence* Sequence;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback start of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback start\n\x09 * @return Playback start of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback start of this sequence in seconds\n\n@param Sequence        The sequence within which to get the playback start\n@return Playback start of this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackStartSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms
		{
			UMovieSceneSequence* RootSequence;
			UMovieSceneSequence* DestinationSequence;
			FMovieSceneBindingProxy InBinding;
			FMovieSceneObjectBindingID ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_RootSequence = { "RootSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, RootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_DestinationSequence = { "DestinationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, DestinationSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_RootSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_DestinationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get a portable binding ID for a binding that resides in a different sequence to the one where this binding will be resolved.\n\x09 * @note: This function must be used over GetBindingID when the target binding resides in different shots or sub-sequences.\n\x09 * @note: Only unique instances of sequences within a root sequences are supported\n\x09 *\n\x09 * @param RootSequence The root sequence that contains both the destination sequence (that will resolve the binding ID) and the target sequence that contains the actual binding\n\x09 * @param DestinationSequence The sequence that will own or resolve the resulting binding ID. For example, if the binding ID will be applied to a camera cut section pass the sequence that contains the camera cut track to this parameter.\n\x09 * @param Binding The target binding to create the ID from\n\x09 * @return The binding's id\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a portable binding ID for a binding that resides in a different sequence to the one where this binding will be resolved.\n@note: This function must be used over GetBindingID when the target binding resides in different shots or sub-sequences.\n@note: Only unique instances of sequences within a root sequences are supported\n\n@param RootSequence The root sequence that contains both the destination sequence (that will resolve the binding ID) and the target sequence that contains the actual binding\n@param DestinationSequence The sequence that will own or resolve the resulting binding ID. For example, if the binding ID will be applied to a camera cut section pass the sequence that contains the camera cut track to this parameter.\n@param Binding The target binding to create the ID from\n@return The binding's id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPortableBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetPossessables_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPossessables_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPossessables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get all the possessables in this sequence\n\x09*\n\x09* @param Sequence        The sequence to get possessables for\n\x09* @return Possessables in this sequence\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the possessables in this sequence\n\n@param Sequence        The sequence to get possessables for\n@return Possessables in this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPossessables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::MovieSceneSequenceExtensions_eventGetPossessables_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<UMovieSceneFolder*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the root folders in the provided sequence\n\x09 *\n\x09 * @param Sequence\x09The sequence to retrieve folders from\n\x09 * @return The folders contained within the given sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the root folders in the provided sequence\n\n@param Sequence      The sequence to retrieve folders from\n@return The folders contained within the given sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetRootFoldersInSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetSpawnables_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetSpawnables_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetSpawnables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get all the spawnables in this sequence\n\x09*\n\x09* @param Sequence        The sequence to get spawnables for\n\x09* @return Spawnables in this sequence\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the spawnables in this sequence\n\n@param Sequence        The sequence to get spawnables for\n@return Spawnables in this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetSpawnables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::MovieSceneSequenceExtensions_eventGetSpawnables_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequenceExtensions_eventGetTickResolution_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTickResolution_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTickResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Gets this sequence's tick resolution\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return The tick resolution of the sequence, defining the smallest unit of time representable on this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets this sequence's tick resolution\n\n@param Sequence        The sequence to use\n@return The tick resolution of the sequence, defining the smallest unit of time representable on this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetTickResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::MovieSceneSequenceExtensions_eventGetTickResolution_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct MovieSceneSequenceExtensions_eventGetTimecodeSource_Parms
		{
			UMovieSceneSequence* Sequence;
			FTimecode ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTimecodeSource_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTimecodeSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetTimecodeSource() is no longer supported for movie scene sequences. Please use GetEarliestTimecodeSource() instead." },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetTimecodeSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::MovieSceneSequenceExtensions_eventGetTimecodeSource_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetTracks_Parms
		{
			UMovieSceneSequence* Sequence;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTracks_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get all tracks\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return An array containing all tracks in this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all tracks\n\n@param Sequence        The sequence to use\n@return An array containing all tracks in this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::MovieSceneSequenceExtensions_eventGetTracks_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms
		{
			UMovieSceneSequence* InSequence;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence view range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the view range end\n\x09 * @return The view range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence view range end in seconds\n\n@param Sequence The sequence within which to get the view range end\n@return The view range end time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetViewRangeEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms
		{
			UMovieSceneSequence* InSequence;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence view range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the view range start\n\x09 * @return The view range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence view range start in seconds\n\n@param Sequence The sequence within which to get the view range start\n@return The view range start time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetViewRangeStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms
		{
			UMovieSceneSequence* InSequence;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence work range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the work range end\n\x09 * @return The work range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence work range end in seconds\n\n@param Sequence The sequence within which to get the work range end\n@return The work range end time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetWorkRangeEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics
	{
		struct MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms
		{
			UMovieSceneSequence* InSequence;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence work range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the work range start\n\x09 * @return The work range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence work range start in seconds\n\n@param Sequence The sequence within which to get the work range start\n@return The work range start time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetWorkRangeStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics
	{
		struct MovieSceneSequenceExtensions_eventIsReadOnly_Parms
		{
			UMovieSceneSequence* Sequence;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventIsReadOnly_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequenceExtensions_eventIsReadOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventIsReadOnly_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Is read only\n\x09 *\n\x09 * @return Whether the movie scene is read only or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Is read only\n*\n* @return Whether the movie scene is read only or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "IsReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::MovieSceneSequenceExtensions_eventIsReadOnly_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics
	{
		struct MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms
		{
			UMovieSceneSequence* Sequence;
			FMovieSceneBindingProxy InBinding;
			UObject* Context;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Locate all the objects that correspond to the specified object ID, using the specified context\n\x09 *\n\x09 * @param Sequence   The sequence to locate bound objects for\n\x09 * @param InBinding  The object binding\n\x09 * @param Context    Optional context to use to find the required object\n\x09 * @return An array of all bound objects\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Locate all the objects that correspond to the specified object ID, using the specified context\n\n@param Sequence   The sequence to locate bound objects for\n@param InBinding  The object binding\n@param Context    Optional context to use to find the required object\n@return An array of all bound objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "LocateBoundObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics
	{
		struct MovieSceneSequenceExtensions_eventMakeBindingID_Parms
		{
			UMovieSceneSequence* Sequence;
			FMovieSceneBindingProxy InBinding;
			EMovieSceneObjectBindingSpace Space;
			FMovieSceneObjectBindingID ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeBindingID_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeBindingID_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeBindingID_Parms, Space), Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, METADATA_PARAMS(nullptr, 0) }; // 3772622621
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "CPP_Default_Space", "Root" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please migrate to GetBindingID or GetPortableBindingID depending on use-case." },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "MakeBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::MovieSceneSequenceExtensions_eventMakeBindingID_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics
	{
		struct MovieSceneSequenceExtensions_eventMakeRange_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 StartFrame;
			int32 Duration;
			FSequencerScriptingRange ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, StartFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Make a new range for this sequence in its display rate\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param StartFrame      The frame at which to start the range\n\x09 * @param Duration        The length of the range\n\x09 * @return Specified sequencer range\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Make a new range for this sequence in its display rate\n\n@param Sequence        The sequence within which to find the binding\n@param StartFrame      The frame at which to start the range\n@param Duration        The length of the range\n@return Specified sequencer range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "MakeRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::MovieSceneSequenceExtensions_eventMakeRange_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics
	{
		struct MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms
		{
			UMovieSceneSequence* Sequence;
			float StartTime;
			float Duration;
			FSequencerScriptingRange ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Make a new range for this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param StartTime       The time in seconds at which to start the range\n\x09 * @param Duration        The length of the range in seconds\n\x09 * @return Specified sequencer range\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Make a new range for this sequence in seconds\n\n@param Sequence        The sequence within which to find the binding\n@param StartTime       The time in seconds at which to start the range\n@param Duration        The length of the range in seconds\n@return Specified sequencer range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "MakeRangeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics
	{
		struct MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms
		{
			UMovieSceneSequence* Sequence;
			UMovieSceneTrack* Track;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveMasterTrack is deprecated. Please use RemoveTrack instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "RemoveMasterTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics
	{
		struct MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms
		{
			UMovieSceneSequence* Sequence;
			UMovieSceneFolder* Folder;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove a root folder from the given sequence. Will throw an exception if the specified folder is not valid or not a root folder.\n\x09 *\n\x09 * @param Sequence\x09\x09\x09The sequence That the folder belongs to\n\x09 * @param Folder\x09\x09\x09The folder to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove a root folder from the given sequence. Will throw an exception if the specified folder is not valid or not a root folder.\n\n@param Sequence                      The sequence That the folder belongs to\n@param Folder                        The folder to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "RemoveRootFolderFromSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics
	{
		struct MovieSceneSequenceExtensions_eventRemoveTrack_Parms
		{
			UMovieSceneSequence* Sequence;
			UMovieSceneTrack* Track;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveTrack_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequenceExtensions_eventRemoveTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventRemoveTrack_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Removes a track\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param Track           The track to remove\n\x09 * @return Whether the track was successfully removed\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes a track\n\n@param Sequence        The sequence to use\n@param Track           The track to remove\n@return Whether the track was successfully removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "RemoveTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::MovieSceneSequenceExtensions_eventRemoveTrack_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics
	{
		struct MovieSceneSequenceExtensions_eventResolveBindingID_Parms
		{
			UMovieSceneSequence* RootSequence;
			FMovieSceneObjectBindingID InObjectBindingID;
			FMovieSceneBindingProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InObjectBindingID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_RootSequence = { "RootSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventResolveBindingID_Parms, RootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_InObjectBindingID = { "InObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventResolveBindingID_Parms, InObjectBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventResolveBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_RootSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_InObjectBindingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Make a binding for the given binding ID\n\x09 *\n\x09 * @param RootSequence  The root sequence that contains the sequence\n\x09 * @param ObjectBindingID The object binding id that has the guid and the sequence id\n\x09 * @return The new binding proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Make a binding for the given binding ID\n\n@param RootSequence  The root sequence that contains the sequence\n@param ObjectBindingID The object binding id that has the guid and the sequence id\n@return The new binding proxy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "ResolveBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::MovieSceneSequenceExtensions_eventResolveBindingID_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetClockSource_Parms
		{
			UMovieSceneSequence* InSequence;
			EUpdateClockSource InClockSource;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InClockSource_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InClockSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetClockSource_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource = { "InClockSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetClockSource_Parms, InClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(nullptr, 0) }; // 3237436252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the clock source for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to set the clock source\n\x09 * @param InClockSource The clock source to set for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the clock source for this sequence\n\n@param Sequence The sequence within which to set the clock source\n@param InClockSource The clock source to set for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetClockSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::MovieSceneSequenceExtensions_eventSetClockSource_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequenceExtensions_eventSetDisplayRate_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameRate DisplayRate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetDisplayRate_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_DisplayRate = { "DisplayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetDisplayRate_Parms, DisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_DisplayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Sets this sequence's display rate\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param DisplayRate The display rate that this sequence is displayed as\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets this sequence's display rate\n\n@param Sequence        The sequence to use\n@param DisplayRate The display rate that this sequence is displayed as" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetDisplayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::MovieSceneSequenceExtensions_eventSetDisplayRate_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetEvaluationType_Parms
		{
			UMovieSceneSequence* InSequence;
			EMovieSceneEvaluationType InEvaluationType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InEvaluationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InEvaluationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetEvaluationType_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType = { "InEvaluationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetEvaluationType_Parms, InEvaluationType), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(nullptr, 0) }; // 2615994803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the evaluation type for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to set the evaluation type\n\x09 * @param InEvaluationType The evaluation type to set for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the evaluation type for this sequence\n\n@param Sequence The sequence within which to set the evaluation type\n@param InEvaluationType The evaluation type to set for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetEvaluationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::MovieSceneSequenceExtensions_eventSetEvaluationType_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 InMarkIndex;
			FFrameNumber InFrameNumber;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMarkIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InMarkIndex = { "InMarkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms, InMarkIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InMarkIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InFrameNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Sets the frame number for the given marked frame index. Does not maintain sort. Call SortMarkedFrames\n\x09 *\n\x09 * @InMarkIndex The given user marked frame index to edit\n\x09 * @InFrameNumber The frame number to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Sets the frame number for the given marked frame index. Does not maintain sort. Call SortMarkedFrames\n*\n* @InMarkIndex The given user marked frame index to edit\n* @InFrameNumber The frame number to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 EndFrame;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms, EndFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_EndFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback end of this sequence\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback end\n\x09 * @param EndFrame        The desired end frame for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback end of this sequence\n\n@param Sequence        The sequence within which to set the playback end\n@param EndFrame        The desired end frame for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms
		{
			UMovieSceneSequence* Sequence;
			float EndTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_EndTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback end of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback end\n\x09 * @param EndTime         The desired end time in seconds for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback end of this sequence in seconds\n\n@param Sequence        The sequence within which to set the playback end\n@param EndTime         The desired end time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackEndSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms
		{
			UMovieSceneSequence* Sequence;
			int32 StartFrame;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms, StartFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_StartFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback start of this sequence\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback start\n\x09 * @param StartFrame      The desired start frame for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback start of this sequence\n\n@param Sequence        The sequence within which to set the playback start\n@param StartFrame      The desired start frame for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms
		{
			UMovieSceneSequence* Sequence;
			float StartTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback start of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback start\n\x09 * @param StartTime       The desired start time in seconds for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback start of this sequence in seconds\n\n@param Sequence        The sequence within which to set the playback start\n@param StartTime       The desired start time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackStartSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetReadOnly_Parms
		{
			UMovieSceneSequence* Sequence;
			bool bInReadOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static void NewProp_bInReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetReadOnly_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly_SetBit(void* Obj)
	{
		((MovieSceneSequenceExtensions_eventSetReadOnly_Parms*)Obj)->bInReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly = { "bInReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventSetReadOnly_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Set read only\n\x09 *\n\x09 * @bInReadOnly Whether the movie scene should be read only or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Set read only\n*\n* @bInReadOnly Whether the movie scene should be read only or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::MovieSceneSequenceExtensions_eventSetReadOnly_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequenceExtensions_eventSetTickResolution_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameRate TickResolution;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolution_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolution_Parms, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_TickResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Sets this sequence's tick resolution and migrates frame times\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets this sequence's tick resolution and migrates frame times\n\n@param Sequence        The sequence to use\n@param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetTickResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::MovieSceneSequenceExtensions_eventSetTickResolution_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms
		{
			UMovieSceneSequence* Sequence;
			FFrameRate TickResolution;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_TickResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Sets this sequence's tick resolution directly without migrating frame times\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets this sequence's tick resolution directly without migrating frame times\n\n@param Sequence        The sequence to use\n@param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetTickResolutionDirectly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms
		{
			UMovieSceneSequence* InSequence;
			float EndTimeInSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_EndTimeInSeconds = { "EndTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms, EndTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_EndTimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence view range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the view range end\n\x09 * @param StartTimeInSeconds The desired view range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence view range end in seconds\n\n@param Sequence The sequence within which to set the view range end\n@param StartTimeInSeconds The desired view range end time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetViewRangeEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms
		{
			UMovieSceneSequence* InSequence;
			float StartTimeInSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_StartTimeInSeconds = { "StartTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms, StartTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_StartTimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence view range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the view range start\n\x09 * @param StartTimeInSeconds The desired view range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence view range start in seconds\n\n@param Sequence The sequence within which to set the view range start\n@param StartTimeInSeconds The desired view range start time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetViewRangeStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms
		{
			UMovieSceneSequence* InSequence;
			float EndTimeInSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_EndTimeInSeconds = { "EndTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms, EndTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_EndTimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence work range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the work range end\n\x09 * @param StartTimeInSeconds The desired work range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence work range end in seconds\n\n@param Sequence The sequence within which to set the work range end\n@param StartTimeInSeconds The desired work range end time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetWorkRangeEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics
	{
		struct MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms
		{
			UMovieSceneSequence* InSequence;
			float StartTimeInSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_StartTimeInSeconds = { "StartTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms, StartTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_StartTimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence work range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the work range start\n\x09 * @param StartTimeInSeconds The desired work range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence work range start in seconds\n\n@param Sequence The sequence within which to set the work range start\n@param StartTimeInSeconds The desired work range start time in seconds for this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetWorkRangeStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics
	{
		struct MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms
		{
			UMovieSceneSequence* Sequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::NewProp_Sequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Sort the marked frames in chronological order\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Sort the marked frames in chronological order" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SortMarkedFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequenceExtensions);
	UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions_NoRegister()
	{
		return UMovieSceneSequenceExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame, "AddMarkedFrame" }, // 3997396794
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack, "AddMasterTrack" }, // 3090518538
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable, "AddPossessable" }, // 1680965140
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence, "AddRootFolderToSequence" }, // 3693674019
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass, "AddSpawnableFromClass" }, // 3589968904
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance, "AddSpawnableFromInstance" }, // 1274626281
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack, "AddTrack" }, // 3184393994
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame, "DeleteMarkedFrame" }, // 4011787063
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames, "DeleteMarkedFrames" }, // 538939818
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById, "FindBindingById" }, // 3602809789
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName, "FindBindingByName" }, // 3391766426
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber, "FindMarkedFrameByFrameNumber" }, // 2647802852
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel, "FindMarkedFrameByLabel" }, // 3387816662
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType, "FindMasterTracksByExactType" }, // 2855263124
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType, "FindMasterTracksByType" }, // 2378901522
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame, "FindNextMarkedFrame" }, // 1360620896
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType, "FindTracksByExactType" }, // 3632197252
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType, "FindTracksByType" }, // 3197672357
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID, "GetBindingID" }, // 1970006093
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings, "GetBindings" }, // 3821757746
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource, "GetClockSource" }, // 2786205491
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate, "GetDisplayRate" }, // 2225278353
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType, "GetEvaluationType" }, // 447804446
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames, "GetMarkedFrames" }, // 1183948091
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks, "GetMasterTracks" }, // 1120333182
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene, "GetMovieScene" }, // 3466857098
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd, "GetPlaybackEnd" }, // 3237763872
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds, "GetPlaybackEndSeconds" }, // 3559542999
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange, "GetPlaybackRange" }, // 2098371742
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart, "GetPlaybackStart" }, // 1820316340
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds, "GetPlaybackStartSeconds" }, // 2644765772
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID, "GetPortableBindingID" }, // 3271797291
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables, "GetPossessables" }, // 1653921165
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence, "GetRootFoldersInSequence" }, // 2861599116
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables, "GetSpawnables" }, // 1195163706
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution, "GetTickResolution" }, // 3787254818
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTimecodeSource, "GetTimecodeSource" }, // 3381321755
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks, "GetTracks" }, // 3544488653
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd, "GetViewRangeEnd" }, // 3605604100
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart, "GetViewRangeStart" }, // 2487745290
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd, "GetWorkRangeEnd" }, // 715318221
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart, "GetWorkRangeStart" }, // 2752876435
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly, "IsReadOnly" }, // 2498227746
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects, "LocateBoundObjects" }, // 3220668266
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeBindingID, "MakeBindingID" }, // 1829191650
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange, "MakeRange" }, // 2469454131
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds, "MakeRangeSeconds" }, // 1239318920
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack, "RemoveMasterTrack" }, // 4052325457
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence, "RemoveRootFolderFromSequence" }, // 22397804
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack, "RemoveTrack" }, // 3551535561
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID, "ResolveBindingID" }, // 1467259545
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource, "SetClockSource" }, // 3672736466
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate, "SetDisplayRate" }, // 1751666694
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType, "SetEvaluationType" }, // 3593621000
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame, "SetMarkedFrame" }, // 1970356419
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd, "SetPlaybackEnd" }, // 4171580535
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds, "SetPlaybackEndSeconds" }, // 82441623
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart, "SetPlaybackStart" }, // 3815645596
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds, "SetPlaybackStartSeconds" }, // 590610760
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly, "SetReadOnly" }, // 3885904629
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution, "SetTickResolution" }, // 3811041793
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly, "SetTickResolutionDirectly" }, // 397343696
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd, "SetViewRangeEnd" }, // 3945905092
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart, "SetViewRangeStart" }, // 2500602492
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd, "SetWorkRangeEnd" }, // 11021997
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart, "SetWorkRangeStart" }, // 4219879783
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames, "SortMarkedFrames" }, // 3063508580
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneSequences for scripting purposes\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneSequences for scripting purposes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequenceExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::ClassParams = {
		&UMovieSceneSequenceExtensions::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneSequenceExtensions>()
	{
		return UMovieSceneSequenceExtensions::StaticClass();
	}
	UMovieSceneSequenceExtensions::UMovieSceneSequenceExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceExtensions);
	UMovieSceneSequenceExtensions::~UMovieSceneSequenceExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequenceExtensions, UMovieSceneSequenceExtensions::StaticClass, TEXT("UMovieSceneSequenceExtensions"), &Z_Registration_Info_UClass_UMovieSceneSequenceExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequenceExtensions), 938574006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_1017955191(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
