// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneSequence.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequence() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimecodeSource();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneSequence::execGetEarliestTimecodeSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneTimecodeSource*)Z_Param__Result=P_THIS->GetEarliestTimecodeSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequence::execFindBindingsByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InBindingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->FindBindingsByTag(Z_Param_InBindingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequence::execFindBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InBindingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->FindBindingByTag(Z_Param_InBindingName);
		P_NATIVE_END;
	}
	void UMovieSceneSequence::StaticRegisterNativesUMovieSceneSequence()
	{
		UClass* Class = UMovieSceneSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindBindingByTag", &UMovieSceneSequence::execFindBindingByTag },
			{ "FindBindingsByTag", &UMovieSceneSequence::execFindBindingsByTag },
			{ "GetEarliestTimecodeSource", &UMovieSceneSequence::execGetEarliestTimecodeSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics
	{
		struct MovieSceneSequence_eventFindBindingByTag_Parms
		{
			FName InBindingName;
			FMovieSceneObjectBindingID ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBindingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingByTag_Parms, InBindingName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingByTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find the first object binding ID associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Find the first object binding ID associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequence, nullptr, "FindBindingByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::MovieSceneSequence_eventFindBindingByTag_Parms), Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics
	{
		struct MovieSceneSequence_eventFindBindingsByTag_Parms
		{
			FName InBindingName;
			TArray<FMovieSceneObjectBindingID> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBindingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_InBindingName = { "InBindingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingsByTag_Parms, InBindingName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequence_eventFindBindingsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_InBindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all object binding IDs associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Find all object binding IDs associated with the specified tag name (set up through RMB->Expose on Object bindings from within sequencer)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequence, nullptr, "FindBindingsByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::MovieSceneSequence_eventFindBindingsByTag_Parms), Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics
	{
		struct MovieSceneSequence_eventGetEarliestTimecodeSource_Parms
		{
			FMovieSceneTimecodeSource ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequence_eventGetEarliestTimecodeSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneTimecodeSource, METADATA_PARAMS(nullptr, 0) }; // 2538911733
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the earliest timecode source out of all of the movie scene sections contained within this sequence's movie scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Get the earliest timecode source out of all of the movie scene sections contained within this sequence's movie scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequence, nullptr, "GetEarliestTimecodeSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::MovieSceneSequence_eventGetEarliestTimecodeSource_Parms), Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequence);
	UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister()
	{
		return UMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompiledData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCompletionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCompletionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultCompletionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentContextsAreSignificant_MetaData[];
#endif
		static void NewProp_bParentContextsAreSignificant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentContextsAreSignificant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayableDirectly_MetaData[];
#endif
		static void NewProp_bPlayableDirectly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayableDirectly;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SequenceFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SequenceFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequence_FindBindingByTag, "FindBindingByTag" }, // 4029877201
		{ &Z_Construct_UFunction_UMovieSceneSequence_FindBindingsByTag, "FindBindingsByTag" }, // 4060076454
		{ &Z_Construct_UFunction_UMovieSceneSequence_GetEarliestTimecodeSource, "GetEarliestTimecodeSource" }, // 337757882
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for movie scene animations (C++ version).\n */" },
		{ "IncludePath", "MovieSceneSequence.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract base class for movie scene animations (C++ version)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_CompiledData_MetaData[] = {
		{ "Comment", "/** Serialized compiled data - should only be used through UMovieSceneCompiledDataManager */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Serialized compiled data - should only be used through UMovieSceneCompiledDataManager" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequence, CompiledData), Z_Construct_UClass_UMovieSceneCompiledData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_CompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_CompiledData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData[] = {
		{ "Comment", "/* The default completion mode for this movie scene when a section's completion mode is set to project default */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "The default completion mode for this movie scene when a section's completion mode is set to project default" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode = { "DefaultCompletionMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequence, DefaultCompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData)) }; // 189609525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData[] = {
		{ "Comment", "/**\n\x09 * true if the result of GetParentObject is significant in object resolution for LocateBoundObjects.\n\x09 * When true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used\n\x09 * When false, the PlaybackContext will always be used for LocateBoundObjects\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "true if the result of GetParentObject is significant in object resolution for LocateBoundObjects.\nWhen true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used\nWhen false, the PlaybackContext will always be used for LocateBoundObjects" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit(void* Obj)
	{
		((UMovieSceneSequence*)Obj)->bParentContextsAreSignificant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant = { "bParentContextsAreSignificant", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSequence), &Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_MetaData[] = {
		{ "Comment", "/**\n\x09 * When true, this sequence should be compiled as if it is playable directly (outside of a root sequence). When false, various compiled data will be omitted, preventing direct playback at runtime (although will still play as a sub sequence)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "When true, this sequence should be compiled as if it is playable directly (outside of a root sequence). When false, various compiled data will be omitted, preventing direct playback at runtime (although will still play as a sub sequence)" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_SetBit(void* Obj)
	{
		((UMovieSceneSequence*)Obj)->bPlayableDirectly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly = { "bPlayableDirectly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSequence), &Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags_MetaData[] = {
		{ "Comment", "/** Flags used to define this sequence's behavior and characteristics */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "Flags used to define this sequence's behavior and characteristics" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags = { "SequenceFlags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequence, SequenceFlags), Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags_MetaData)) }; // 3684814241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_CompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bPlayableDirectly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_SequenceFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams = {
		&UMovieSceneSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers),
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequence()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequence.OuterSingleton, Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSequence.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequence>()
	{
		return UMovieSceneSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequence);
	UMovieSceneSequence::~UMovieSceneSequence() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSequence)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequence, UMovieSceneSequence::StaticClass, TEXT("UMovieSceneSequence"), &Z_Registration_Info_UClass_UMovieSceneSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequence), 3919785325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_2759946372(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
