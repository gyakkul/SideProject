// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneBindingExtensions.h"
#include "MovieSceneBindingProxy.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingExtensions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneBindingExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneBindingExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execSetSpawnableBindingID)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_SpawnableBindingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::SetSpawnableBindingID(Z_Param_Out_InBinding,Z_Param_Out_SpawnableBindingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execMoveBindingContents)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_SourceBindingId);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_DestinationBindingId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::MoveBindingContents(Z_Param_Out_SourceBindingId,Z_Param_Out_DestinationBindingId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execSetParent)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InParentBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::SetParent(Z_Param_Out_InBinding,Z_Param_Out_InParentBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetParent)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneBindingExtensions::GetParent(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetPossessedObjectClass)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UMovieSceneBindingExtensions::GetPossessedObjectClass(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetObjectTemplate)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UMovieSceneBindingExtensions::GetObjectTemplate(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetChildPossessables)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneBindingExtensions::GetChildPossessables(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execAddTrack)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneTrack**)Z_Param__Result=UMovieSceneBindingExtensions::AddTrack(Z_Param_Out_InBinding,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execRemove)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::Remove(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execRemoveTrack)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_TrackToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::RemoveTrack(Z_Param_Out_InBinding,Z_Param_TrackToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execFindTracksByExactType)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneBindingExtensions::FindTracksByExactType(Z_Param_Out_InBinding,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execFindTracksByType)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_OBJECT(UClass,Z_Param_TrackType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneBindingExtensions::FindTracksByType(Z_Param_Out_InBinding,Z_Param_TrackType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetTracks)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneBindingExtensions::GetTracks(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execSetSortingOrder)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_PROPERTY(FIntProperty,Z_Param_SortingOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::SetSortingOrder(Z_Param_Out_InBinding,Z_Param_SortingOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetSortingOrder)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneBindingExtensions::GetSortingOrder(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execSetName)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::SetName(Z_Param_Out_InBinding,Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetName)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMovieSceneBindingExtensions::GetName(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execSetDisplayName)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneBindingExtensions::SetDisplayName(Z_Param_Out_InBinding,Z_Param_Out_InDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetDisplayName)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMovieSceneBindingExtensions::GetDisplayName(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execGetId)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UMovieSceneBindingExtensions::GetId(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneBindingExtensions::execIsValid)
	{
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneBindingExtensions::IsValid(Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	void UMovieSceneBindingExtensions::StaticRegisterNativesUMovieSceneBindingExtensions()
	{
		UClass* Class = UMovieSceneBindingExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTrack", &UMovieSceneBindingExtensions::execAddTrack },
			{ "FindTracksByExactType", &UMovieSceneBindingExtensions::execFindTracksByExactType },
			{ "FindTracksByType", &UMovieSceneBindingExtensions::execFindTracksByType },
			{ "GetChildPossessables", &UMovieSceneBindingExtensions::execGetChildPossessables },
			{ "GetDisplayName", &UMovieSceneBindingExtensions::execGetDisplayName },
			{ "GetId", &UMovieSceneBindingExtensions::execGetId },
			{ "GetName", &UMovieSceneBindingExtensions::execGetName },
			{ "GetObjectTemplate", &UMovieSceneBindingExtensions::execGetObjectTemplate },
			{ "GetParent", &UMovieSceneBindingExtensions::execGetParent },
			{ "GetPossessedObjectClass", &UMovieSceneBindingExtensions::execGetPossessedObjectClass },
			{ "GetSortingOrder", &UMovieSceneBindingExtensions::execGetSortingOrder },
			{ "GetTracks", &UMovieSceneBindingExtensions::execGetTracks },
			{ "IsValid", &UMovieSceneBindingExtensions::execIsValid },
			{ "MoveBindingContents", &UMovieSceneBindingExtensions::execMoveBindingContents },
			{ "Remove", &UMovieSceneBindingExtensions::execRemove },
			{ "RemoveTrack", &UMovieSceneBindingExtensions::execRemoveTrack },
			{ "SetDisplayName", &UMovieSceneBindingExtensions::execSetDisplayName },
			{ "SetName", &UMovieSceneBindingExtensions::execSetName },
			{ "SetParent", &UMovieSceneBindingExtensions::execSetParent },
			{ "SetSortingOrder", &UMovieSceneBindingExtensions::execSetSortingOrder },
			{ "SetSpawnableBindingID", &UMovieSceneBindingExtensions::execSetSpawnableBindingID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics
	{
		struct MovieSceneBindingExtensions_eventAddTrack_Parms
		{
			FMovieSceneBindingProxy InBinding;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			UMovieSceneTrack* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventAddTrack_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventAddTrack_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventAddTrack_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new track to the specified binding\n\x09 *\n\x09 * @param InBinding     The binding to add tracks to\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying the type of track to create\n\x09 * @return The newly created track, if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new track to the specified binding\n\n@param InBinding     The binding to add tracks to\n@param TrackType     A UMovieSceneTrack class type specifying the type of track to create\n@return The newly created track, if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "AddTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::MovieSceneBindingExtensions_eventAddTrack_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics
	{
		struct MovieSceneBindingExtensions_eventFindTracksByExactType_Parms
		{
			FMovieSceneBindingProxy InBinding;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventFindTracksByExactType_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventFindTracksByExactType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventFindTracksByExactType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all tracks within a given binding of the specified type, not allowing sub-classed types\n\x09 *\n\x09 * @param InBinding     The binding to find tracks in\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying the exact types of track to return\n\x09 * @return An array containing any tracks that are exactly the same as the type specified\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all tracks within a given binding of the specified type, not allowing sub-classed types\n\n@param InBinding     The binding to find tracks in\n@param TrackType     A UMovieSceneTrack class type specifying the exact types of track to return\n@return An array containing any tracks that are exactly the same as the type specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "FindTracksByExactType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::MovieSceneBindingExtensions_eventFindTracksByExactType_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics
	{
		struct MovieSceneBindingExtensions_eventFindTracksByType_Parms
		{
			FMovieSceneBindingProxy InBinding;
			TSubclassOf<UMovieSceneTrack>  TrackType;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventFindTracksByType_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventFindTracksByType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventFindTracksByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all tracks within a given binding of the specified type\n\x09 *\n\x09 * @param InBinding     The binding to find tracks in\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying which types of track to return\n\x09 * @return An array containing any tracks that match the type specified\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all tracks within a given binding of the specified type\n\n@param InBinding     The binding to find tracks in\n@param TrackType     A UMovieSceneTrack class type specifying which types of track to return\n@return An array containing any tracks that match the type specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "FindTracksByType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::MovieSceneBindingExtensions_eventFindTracksByType_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics
	{
		struct MovieSceneBindingExtensions_eventGetChildPossessables_Parms
		{
			FMovieSceneBindingProxy InBinding;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetChildPossessables_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetChildPossessables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get all the children of this binding\n\x09*\n\x09* @param InBinding     The binding to to get children of\n\x09* @return An array containing all the binding's children\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the children of this binding\n\n@param InBinding     The binding to to get children of\n@return An array containing all the binding's children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetChildPossessables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::MovieSceneBindingExtensions_eventGetChildPossessables_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics
	{
		struct MovieSceneBindingExtensions_eventGetDisplayName_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetDisplayName_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get this binding's name\n\x09 *\n\x09 * @param InBinding     The binding to get the name of\n\x09 * @return The display name of the binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this binding's name\n\n@param InBinding     The binding to get the name of\n@return The display name of the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::MovieSceneBindingExtensions_eventGetDisplayName_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics
	{
		struct MovieSceneBindingExtensions_eventGetId_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FGuid ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetId_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get this binding's ID\n\x09 *\n\x09 * @param InBinding     The binding to get the ID of\n\x09 * @return The guid that uniquely represents this binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this binding's ID\n\n@param InBinding     The binding to get the ID of\n@return The guid that uniquely represents this binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::MovieSceneBindingExtensions_eventGetId_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics
	{
		struct MovieSceneBindingExtensions_eventGetName_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetName_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get this binding's object non-display name\n\x09 *\n\x09 * @param InBinding     The binding to get the name of\n\x09 * @return The name of the binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this binding's object non-display name\n\n@param InBinding     The binding to get the name of\n@return The name of the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::MovieSceneBindingExtensions_eventGetName_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics
	{
		struct MovieSceneBindingExtensions_eventGetObjectTemplate_Parms
		{
			FMovieSceneBindingProxy InBinding;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetObjectTemplate_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetObjectTemplate_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get this binding's object template\n\x09*\n\x09* @param InBinding     The binding to get the object template of\n\x09* @return The object template of the binding\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this binding's object template\n\n@param InBinding     The binding to get the object template of\n@return The object template of the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetObjectTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::MovieSceneBindingExtensions_eventGetObjectTemplate_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics
	{
		struct MovieSceneBindingExtensions_eventGetParent_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FMovieSceneBindingProxy ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetParent_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get the parent of this binding\n\x09*\n\x09* @param InBinding     The binding to get the parent of\n\x09* @return The binding's parent\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the parent of this binding\n\n@param InBinding     The binding to get the parent of\n@return The binding's parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::MovieSceneBindingExtensions_eventGetParent_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics
	{
		struct MovieSceneBindingExtensions_eventGetPossessedObjectClass_Parms
		{
			FMovieSceneBindingProxy InBinding;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetPossessedObjectClass_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetPossessedObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get this binding's possessed object class\n\x09*\n\x09* @param InBinding     The binding to get the possessed object class of\n\x09* @return The possessed object class of the binding\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this binding's possessed object class\n\n@param InBinding     The binding to get the possessed object class of\n@return The possessed object class of the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetPossessedObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::MovieSceneBindingExtensions_eventGetPossessedObjectClass_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics
	{
		struct MovieSceneBindingExtensions_eventGetSortingOrder_Parms
		{
			FMovieSceneBindingProxy InBinding;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetSortingOrder_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetSortingOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sorting order for this binding\n\x09 *\n\x09 * @param InBinding        The binding to get the sorting order from\n\x09 * @return The sorting order of the requested binding\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sorting order for this binding\n\n@param InBinding        The binding to get the sorting order from\n@return The sorting order of the requested binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetSortingOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::MovieSceneBindingExtensions_eventGetSortingOrder_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics
	{
		struct MovieSceneBindingExtensions_eventGetTracks_Parms
		{
			FMovieSceneBindingProxy InBinding;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetTracks_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventGetTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get all the tracks stored within this binding\n\x09 *\n\x09 * @param InBinding     The binding to find tracks in\n\x09 * @return An array containing all the binding's tracks\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the tracks stored within this binding\n\n@param InBinding     The binding to find tracks in\n@return An array containing all the binding's tracks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "GetTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::MovieSceneBindingExtensions_eventGetTracks_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics
	{
		struct MovieSceneBindingExtensions_eventIsValid_Parms
		{
			FMovieSceneBindingProxy InBinding;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventIsValid_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	void Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneBindingExtensions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneBindingExtensions_eventIsValid_Parms), &Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Check whether the specified binding is valid\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check whether the specified binding is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::MovieSceneBindingExtensions_eventIsValid_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics
	{
		struct MovieSceneBindingExtensions_eventMoveBindingContents_Parms
		{
			FMovieSceneBindingProxy SourceBindingId;
			FMovieSceneBindingProxy DestinationBindingId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBindingId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationBindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationBindingId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_SourceBindingId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_SourceBindingId = { "SourceBindingId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventMoveBindingContents_Parms, SourceBindingId), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_SourceBindingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_SourceBindingId_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_DestinationBindingId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_DestinationBindingId = { "DestinationBindingId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventMoveBindingContents_Parms, DestinationBindingId), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_DestinationBindingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_DestinationBindingId_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_SourceBindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::NewProp_DestinationBindingId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n     * Move all the contents (tracks, child bindings) of the specified binding ID onto another\n\x09 *\n\x09 * @param SourceBindingId The identifier of the binding ID to move all tracks and children from\n\x09 * @param DestinationBindingId The identifier of the binding ID to move the contents to\x09 \n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Move all the contents (tracks, child bindings) of the specified binding ID onto another\n\n@param SourceBindingId The identifier of the binding ID to move all tracks and children from\n@param DestinationBindingId The identifier of the binding ID to move the contents to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "MoveBindingContents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::MovieSceneBindingExtensions_eventMoveBindingContents_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics
	{
		struct MovieSceneBindingExtensions_eventRemove_Parms
		{
			FMovieSceneBindingProxy InBinding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventRemove_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::NewProp_InBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove the specified binding\n\x09 *\n\x09 * @param InBinding     The binding to remove the track from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove the specified binding\n\n@param InBinding     The binding to remove the track from" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "Remove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::MovieSceneBindingExtensions_eventRemove_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics
	{
		struct MovieSceneBindingExtensions_eventRemoveTrack_Parms
		{
			FMovieSceneBindingProxy InBinding;
			UMovieSceneTrack* TrackToRemove;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventRemoveTrack_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_InBinding_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_TrackToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_TrackToRemove = { "TrackToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventRemoveTrack_Parms, TrackToRemove), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_TrackToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_TrackToRemove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::NewProp_TrackToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove the specified track from this binding\n\x09 *\n\x09 * @param InBinding     The binding to remove the track from\n\x09 * @param TrackToRemove The track to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove the specified track from this binding\n\n@param InBinding     The binding to remove the track from\n@param TrackToRemove The track to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "RemoveTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::MovieSceneBindingExtensions_eventRemoveTrack_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics
	{
		struct MovieSceneBindingExtensions_eventSetDisplayName_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FText InDisplayName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetDisplayName_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InBinding_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InDisplayName = { "InDisplayName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetDisplayName_Parms, InDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InDisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::NewProp_InDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set this binding's name\n\x09 *\n\x09 * @param InBinding     The binding to get the name of\n\x09 * @param InName The display name of the binding\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this binding's name\n\n@param InBinding     The binding to get the name of\n@param InName The display name of the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "SetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::MovieSceneBindingExtensions_eventSetDisplayName_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics
	{
		struct MovieSceneBindingExtensions_eventSetName_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FString InName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetName_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InBinding_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set this binding's object non-display name\n\x09 *\n\x09 * @param InBinding     The binding to get the name of\n\x09 * @param InName The name of the binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this binding's object non-display name\n\n@param InBinding     The binding to get the name of\n@param InName The name of the binding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "SetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::MovieSceneBindingExtensions_eventSetName_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics
	{
		struct MovieSceneBindingExtensions_eventSetParent_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FMovieSceneBindingProxy InParentBinding;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParentBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParentBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetParent_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InBinding_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InParentBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InParentBinding = { "InParentBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetParent_Parms, InParentBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InParentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InParentBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::NewProp_InParentBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the parent to this binding\n\x09 *\n\x09 * @param InBinding     The binding to set \n\x09 * @param InParentBinding     The parent to set the InBinding to\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the parent to this binding\n\n@param InBinding     The binding to set\n@param InParentBinding     The parent to set the InBinding to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "SetParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::MovieSceneBindingExtensions_eventSetParent_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics
	{
		struct MovieSceneBindingExtensions_eventSetSortingOrder_Parms
		{
			FMovieSceneBindingProxy InBinding;
			int32 SortingOrder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetSortingOrder_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetSortingOrder_Parms, SortingOrder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::NewProp_SortingOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sorting order for this binding\n\x09 *\n\x09 * @param InBinding        The binding to get the sorting order from\n\x09 * @param SortingOrder The sorting order to set\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sorting order for this binding\n\n@param InBinding        The binding to get the sorting order from\n@param SortingOrder The sorting order to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "SetSortingOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::MovieSceneBindingExtensions_eventSetSortingOrder_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics
	{
		struct MovieSceneBindingExtensions_eventSetSpawnableBindingID_Parms
		{
			FMovieSceneBindingProxy InBinding;
			FMovieSceneObjectBindingID SpawnableBindingID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnableBindingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetSpawnableBindingID_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_InBinding_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_SpawnableBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_SpawnableBindingID = { "SpawnableBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneBindingExtensions_eventSetSpawnableBindingID_Parms, SpawnableBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_SpawnableBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_SpawnableBindingID_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::NewProp_SpawnableBindingID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the spawnable id that the possessable binding should possess\n\x09 *\n\x09 * @param InBinding     The binding to set\n\x09 * @param SpawnableBindingID The spawnable's binding id\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the spawnable id that the possessable binding should possess\n\n@param InBinding     The binding to set\n@param SpawnableBindingID The spawnable's binding id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingExtensions, nullptr, "SetSpawnableBindingID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::MovieSceneBindingExtensions_eventSetSpawnableBindingID_Parms), Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingExtensions);
	UClass* Z_Construct_UClass_UMovieSceneBindingExtensions_NoRegister()
	{
		return UMovieSceneBindingExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBindingExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_AddTrack, "AddTrack" }, // 1795460385
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByExactType, "FindTracksByExactType" }, // 3217296451
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_FindTracksByType, "FindTracksByType" }, // 2387322887
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetChildPossessables, "GetChildPossessables" }, // 2288661168
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetDisplayName, "GetDisplayName" }, // 2199891169
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetId, "GetId" }, // 751129958
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetName, "GetName" }, // 3866342972
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetObjectTemplate, "GetObjectTemplate" }, // 3365500556
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetParent, "GetParent" }, // 3107243818
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetPossessedObjectClass, "GetPossessedObjectClass" }, // 1326898165
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetSortingOrder, "GetSortingOrder" }, // 1145183095
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_GetTracks, "GetTracks" }, // 4183125160
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_IsValid, "IsValid" }, // 1773727209
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_MoveBindingContents, "MoveBindingContents" }, // 557297825
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_Remove, "Remove" }, // 3646704954
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_RemoveTrack, "RemoveTrack" }, // 2971679571
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetDisplayName, "SetDisplayName" }, // 2110914703
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetName, "SetName" }, // 740126227
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetParent, "SetParent" }, // 174086377
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSortingOrder, "SetSortingOrder" }, // 712938566
		{ &Z_Construct_UFunction_UMovieSceneBindingExtensions_SetSpawnableBindingID, "SetSpawnableBindingID" }, // 2723975447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto FMovieSceneBindingProxies for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneBindingExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto FMovieSceneBindingProxies for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBindingExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::ClassParams = {
		&UMovieSceneBindingExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBindingExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBindingExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBindingExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneBindingExtensions>()
	{
		return UMovieSceneBindingExtensions::StaticClass();
	}
	UMovieSceneBindingExtensions::UMovieSceneBindingExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingExtensions);
	UMovieSceneBindingExtensions::~UMovieSceneBindingExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingExtensions, UMovieSceneBindingExtensions::StaticClass, TEXT("UMovieSceneBindingExtensions"), &Z_Registration_Info_UClass_UMovieSceneBindingExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingExtensions), 3617093981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_167288101(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
