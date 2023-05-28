// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeRecorderSources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderSources() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSources();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSources_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	DEFINE_FUNCTION(UTakeRecorderSources::execStartRecordingSource)
	{
		P_GET_TARRAY(UTakeRecorderSource*,Z_Param_InSources);
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_CurrentFrameTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecordingSource(Z_Param_InSources,Z_Param_Out_CurrentFrameTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderSources::execGetSourcesCopy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTakeRecorderSource*>*)Z_Param__Result=P_THIS->GetSourcesCopy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderSources::execRemoveSource)
	{
		P_GET_OBJECT(UTakeRecorderSource,Z_Param_InSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSource(Z_Param_InSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderSources::execAddSource)
	{
		P_GET_OBJECT(UClass,Z_Param_InSourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorderSource**)Z_Param__Result=P_THIS->AddSource(Z_Param_InSourceType);
		P_NATIVE_END;
	}
	void UTakeRecorderSources::StaticRegisterNativesUTakeRecorderSources()
	{
		UClass* Class = UTakeRecorderSources::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSource", &UTakeRecorderSources::execAddSource },
			{ "GetSourcesCopy", &UTakeRecorderSources::execGetSourcesCopy },
			{ "RemoveSource", &UTakeRecorderSources::execRemoveSource },
			{ "StartRecordingSource", &UTakeRecorderSources::execStartRecordingSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics
	{
		struct TakeRecorderSources_eventAddSource_Parms
		{
			TSubclassOf<UTakeRecorderSource>  InSourceType;
			UTakeRecorderSource* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InSourceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::NewProp_InSourceType = { "InSourceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderSources_eventAddSource_Parms, InSourceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderSources_eventAddSource_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::NewProp_InSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Add a new source to this source list of the templated type\n\x09 *\n\x09 * @param InSourceType    The class type of the source to add\n\x09 * @return An instance of the specified source type\n\x09 */" },
		{ "DeterminesOutputType", "InSourceType" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "Add a new source to this source list of the templated type\n\n@param InSourceType    The class type of the source to add\n@return An instance of the specified source type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderSources, nullptr, "AddSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::TakeRecorderSources_eventAddSource_Parms), Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderSources_AddSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderSources_AddSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics
	{
		struct TakeRecorderSources_eventGetSourcesCopy_Parms
		{
			TArray<UTakeRecorderSource*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderSources_eventGetSourcesCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09* Retrieves a copy of the list of sources that are being recorded. This is intended for Blueprint usages which cannot\n\x09* use TArrayView.\n\x09* DO NOT MODIFY THIS ARRAY, modifications will be lost.\n\x09*/" },
		{ "DisplayName", "Get Sources (Copy)" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "Retrieves a copy of the list of sources that are being recorded. This is intended for Blueprint usages which cannot\nuse TArrayView.\nDO NOT MODIFY THIS ARRAY, modifications will be lost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderSources, nullptr, "GetSourcesCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::TakeRecorderSources_eventGetSourcesCopy_Parms), Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics
	{
		struct TakeRecorderSources_eventRemoveSource_Parms
		{
			UTakeRecorderSource* InSource;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderSources_eventRemoveSource_Parms, InSource), Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::NewProp_InSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Remove the specified source from this list\n\x09 *\n\x09 * @param InSource        The source to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "Remove the specified source from this list\n\n@param InSource        The source to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderSources, nullptr, "RemoveSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::TakeRecorderSources_eventRemoveSource_Parms), Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderSources_RemoveSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderSources_RemoveSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TakeRecorderSources_eventStartRecordingSource_Parms
		{
			TArray<UTakeRecorderSource*> InSources;
			FQualifiedFrameTime CurrentFrameTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSources_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFrameTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_InSources_Inner = { "InSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_InSources = { "InSources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderSources_eventStartRecordingSource_Parms, InSources), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_CurrentFrameTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_CurrentFrameTime = { "CurrentFrameTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderSources_eventStartRecordingSource_Parms, CurrentFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_CurrentFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_CurrentFrameTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_InSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_InSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::NewProp_CurrentFrameTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Calls the recording initialization flows on each of the specified sources. */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "Calls the recording initialization flows on each of the specified sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderSources, nullptr, "StartRecordingSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::TakeRecorderSources_eventStartRecordingSource_Parms), Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderSources);
	UClass* Z_Construct_UClass_UTakeRecorderSources_NoRegister()
	{
		return UTakeRecorderSources::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderSources_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSubSequenceMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSubSequenceMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSubSequenceMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SourceSubSequenceMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveSubSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSubSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSubSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderSources_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeRecorderSources_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeRecorderSources_AddSource, "AddSource" }, // 1039330609
		{ &Z_Construct_UFunction_UTakeRecorderSources_GetSourcesCopy, "GetSourcesCopy" }, // 732201824
		{ &Z_Construct_UFunction_UTakeRecorderSources_RemoveSource, "RemoveSource" }, // 784186368
		{ &Z_Construct_UFunction_UTakeRecorderSources_StartRecordingSource, "StartRecordingSource" }, // 1372704504
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSources_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A list of sources to record for any given take. Stored as meta-data on ULevelSequence through ULevelSequence::FindMetaData<UTakeRecorderSources>\n */" },
		{ "IncludePath", "TakeRecorderSources.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A list of sources to record for any given take. Stored as meta-data on ULevelSequence through ULevelSequence::FindMetaData<UTakeRecorderSources>" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_Inner_MetaData[] = {
		{ "Comment", "/** The array of all sources contained within this list */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "The array of all sources contained within this list" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_MetaData[] = {
		{ "Comment", "/** The array of all sources contained within this list */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "The array of all sources contained within this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderSources, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_ValueProp = { "SourceSubSequenceMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_Key_KeyProp = { "SourceSubSequenceMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_MetaData[] = {
		{ "Comment", "/** Maps each source to the level sequence that was created for that source, or to the root source if a subsequence was not created. */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "Maps each source to the level sequence that was created for that source, or to the root source if a subsequence was not created." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap = { "SourceSubSequenceMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderSources, SourceSubSequenceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections_Inner = { "ActiveSubSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections_MetaData[] = {
		{ "Comment", "/** List of sub-sections that we're recording into. Needed to ensure they're all the right size at the end without re-adjusting every sub-section in a sequence. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSources.h" },
		{ "ToolTip", "List of sub-sections that we're recording into. Needed to ensure they're all the right size at the end without re-adjusting every sub-section in a sequence." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections = { "ActiveSubSections", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderSources, ActiveSubSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_Sources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_SourceSubSequenceMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderSources_Statics::NewProp_ActiveSubSections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderSources_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderSources>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderSources_Statics::ClassParams = {
		&UTakeRecorderSources::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTakeRecorderSources_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSources_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderSources_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderSources_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderSources()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderSources.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderSources.OuterSingleton, Z_Construct_UClass_UTakeRecorderSources_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderSources.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UTakeRecorderSources>()
	{
		return UTakeRecorderSources::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderSources);
	UTakeRecorderSources::~UTakeRecorderSources() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderSources, UTakeRecorderSources::StaticClass, TEXT("UTakeRecorderSources"), &Z_Registration_Info_UClass_UTakeRecorderSources, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderSources), 3926489985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_4084327316(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
