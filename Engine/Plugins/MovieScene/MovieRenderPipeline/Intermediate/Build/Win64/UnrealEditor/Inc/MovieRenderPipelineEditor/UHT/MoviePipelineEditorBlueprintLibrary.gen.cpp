// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineEditorBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineEditorBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execResolveOutputDirectoryFromJob)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::ResolveOutputDirectoryFromJob(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execEnsureJobHasDefaultSettings)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineEditorBlueprintLibrary::EnsureJobHasDefaultSettings(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execCreateJobFromSequence)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InPipelineQueue);
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::CreateJobFromSequence(Z_Param_InPipelineQueue,Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execConvertManifestFileToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InManifestFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::ConvertManifestFileToString(Z_Param_InManifestFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execSaveQueueToManifestFile)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InPipelineQueue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutManifestFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineQueue**)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::SaveQueueToManifestFile(Z_Param_InPipelineQueue,Z_Param_Out_OutManifestFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execWarnUserOfUnsavedMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineEditorBlueprintLibrary::WarnUserOfUnsavedMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execIsMapValidForRemoteRender)
	{
		P_GET_TARRAY_REF(UMoviePipelineExecutorJob*,Z_Param_Out_InJobs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::IsMapValidForRemoteRender(Z_Param_Out_InJobs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execExportConfigToAsset)
	{
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_InConfig);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_GET_UBOOL(Z_Param_bInSaveAsset);
		P_GET_OBJECT_REF(UMoviePipelinePrimaryConfig,Z_Param_Out_OutAsset);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::ExportConfigToAsset(Z_Param_InConfig,Z_Param_InPackagePath,Z_Param_InFileName,Z_Param_bInSaveAsset,Z_Param_Out_OutAsset,Z_Param_Out_OutErrorReason);
		P_NATIVE_END;
	}
	void UMoviePipelineEditorBlueprintLibrary::StaticRegisterNativesUMoviePipelineEditorBlueprintLibrary()
	{
		UClass* Class = UMoviePipelineEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertManifestFileToString", &UMoviePipelineEditorBlueprintLibrary::execConvertManifestFileToString },
			{ "CreateJobFromSequence", &UMoviePipelineEditorBlueprintLibrary::execCreateJobFromSequence },
			{ "EnsureJobHasDefaultSettings", &UMoviePipelineEditorBlueprintLibrary::execEnsureJobHasDefaultSettings },
			{ "ExportConfigToAsset", &UMoviePipelineEditorBlueprintLibrary::execExportConfigToAsset },
			{ "IsMapValidForRemoteRender", &UMoviePipelineEditorBlueprintLibrary::execIsMapValidForRemoteRender },
			{ "ResolveOutputDirectoryFromJob", &UMoviePipelineEditorBlueprintLibrary::execResolveOutputDirectoryFromJob },
			{ "SaveQueueToManifestFile", &UMoviePipelineEditorBlueprintLibrary::execSaveQueueToManifestFile },
			{ "WarnUserOfUnsavedMap", &UMoviePipelineEditorBlueprintLibrary::execWarnUserOfUnsavedMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventConvertManifestFileToString_Parms
		{
			FString InManifestFilePath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManifestFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InManifestFilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_InManifestFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_InManifestFilePath = { "InManifestFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventConvertManifestFileToString_Parms, InManifestFilePath), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_InManifestFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_InManifestFilePath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventConvertManifestFileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_InManifestFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Loads the specified manifest file and converts it into an FString to be embedded with HTTP REST requests. Use in combination with SaveQueueToManifestFile. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Loads the specified manifest file and converts it into an FString to be embedded with HTTP REST requests. Use in combination with SaveQueueToManifestFile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "ConvertManifestFileToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::MoviePipelineEditorBlueprintLibrary_eventConvertManifestFileToString_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventCreateJobFromSequence_Parms
		{
			UMoviePipelineQueue* InPipelineQueue;
			const ULevelSequence* InSequence;
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelineQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InPipelineQueue = { "InPipelineQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventCreateJobFromSequence_Parms, InPipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventCreateJobFromSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InSequence_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventCreateJobFromSequence_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InPipelineQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Create a job from a level sequence. Sets the map as the currently editor world, the author, the sequence and the job name as the sequence name on the new job. Returns the newly created job. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Create a job from a level sequence. Sets the map as the currently editor world, the author, the sequence and the job name as the sequence name on the new job. Returns the newly created job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "CreateJobFromSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::MoviePipelineEditorBlueprintLibrary_eventCreateJobFromSequence_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventEnsureJobHasDefaultSettings_Parms
		{
			UMoviePipelineExecutorJob* InJob;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventEnsureJobHasDefaultSettings_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::NewProp_InJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Ensure the job has the settings specified by the project settings added. If they're already added we don't modify the object so that we don't make it confused about whether or not you've modified the preset. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Ensure the job has the settings specified by the project settings added. If they're already added we don't modify the object so that we don't make it confused about whether or not you've modified the preset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "EnsureJobHasDefaultSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::MoviePipelineEditorBlueprintLibrary_eventEnsureJobHasDefaultSettings_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms
		{
			const UMoviePipelinePrimaryConfig* InConfig;
			FString InPackagePath;
			FString InFileName;
			bool bInSaveAsset;
			UMoviePipelinePrimaryConfig* OutAsset;
			FText OutErrorReason;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInSaveAsset_MetaData[];
#endif
		static void NewProp_bInSaveAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSaveAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAsset;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, InConfig), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_SetBit(void* Obj)
	{
		((MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms*)Obj)->bInSaveAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset = { "bInSaveAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms), &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutAsset = { "OutAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, OutAsset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutErrorReason = { "OutErrorReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, OutErrorReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms), &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutErrorReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "ExportConfigToAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventIsMapValidForRemoteRender_Parms
		{
			TArray<UMoviePipelineExecutorJob*> InJobs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InJobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InJobs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs_Inner = { "InJobs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs = { "InJobs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventIsMapValidForRemoteRender_Parms, InJobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineEditorBlueprintLibrary_eventIsMapValidForRemoteRender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineEditorBlueprintLibrary_eventIsMapValidForRemoteRender_Parms), &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_InJobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Checks to see if any of the Jobs try to point to maps that wouldn't be valid on a remote render (ie: unsaved maps) */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Checks to see if any of the Jobs try to point to maps that wouldn't be valid on a remote render (ie: unsaved maps)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "IsMapValidForRemoteRender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::MoviePipelineEditorBlueprintLibrary_eventIsMapValidForRemoteRender_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventResolveOutputDirectoryFromJob_Parms
		{
			UMoviePipelineExecutorJob* InJob;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventResolveOutputDirectoryFromJob_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventResolveOutputDirectoryFromJob_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Resolves as much of the output directory for this job into a usable directory path as possible. Cannot resolve anything that relies on shot name, frame numbers, etc. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Resolves as much of the output directory for this job into a usable directory path as possible. Cannot resolve anything that relies on shot name, frame numbers, etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "ResolveOutputDirectoryFromJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::MoviePipelineEditorBlueprintLibrary_eventResolveOutputDirectoryFromJob_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventSaveQueueToManifestFile_Parms
		{
			UMoviePipelineQueue* InPipelineQueue;
			FString OutManifestFilePath;
			UMoviePipelineQueue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelineQueue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutManifestFilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::NewProp_InPipelineQueue = { "InPipelineQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventSaveQueueToManifestFile_Parms, InPipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::NewProp_OutManifestFilePath = { "OutManifestFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventSaveQueueToManifestFile_Parms, OutManifestFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventSaveQueueToManifestFile_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::NewProp_InPipelineQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::NewProp_OutManifestFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Take the specified Queue, duplicate it and write it to disk in the ../Saved/MovieRenderPipeline/ folder. Returns the duplicated queue. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Take the specified Queue, duplicate it and write it to disk in the ../Saved/MovieRenderPipeline/ folder. Returns the duplicated queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "SaveQueueToManifestFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::MoviePipelineEditorBlueprintLibrary_eventSaveQueueToManifestFile_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Pop a dialog box that specifies that they cannot render due to never saved map. Only shows OK button. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ToolTip", "Pop a dialog box that specifies that they cannot render due to never saved map. Only shows OK button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "WarnUserOfUnsavedMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister()
	{
		return UMoviePipelineEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ConvertManifestFileToString, "ConvertManifestFileToString" }, // 325519310
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_CreateJobFromSequence, "CreateJobFromSequence" }, // 3554443864
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_EnsureJobHasDefaultSettings, "EnsureJobHasDefaultSettings" }, // 3909985000
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset, "ExportConfigToAsset" }, // 1174821499
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_IsMapValidForRemoteRender, "IsMapValidForRemoteRender" }, // 3254194584
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ResolveOutputDirectoryFromJob, "ResolveOutputDirectoryFromJob" }, // 3414622681
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_SaveQueueToManifestFile, "SaveQueueToManifestFile" }, // 549073047
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_WarnUserOfUnsavedMap, "WarnUserOfUnsavedMap" }, // 406010900
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipelineEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
		{ "ScriptName", "MoviePipelineEditorLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::ClassParams = {
		&UMoviePipelineEditorBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineEditorBlueprintLibrary.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEditorBlueprintLibrary>()
	{
		return UMoviePipelineEditorBlueprintLibrary::StaticClass();
	}
	UMoviePipelineEditorBlueprintLibrary::UMoviePipelineEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEditorBlueprintLibrary);
	UMoviePipelineEditorBlueprintLibrary::~UMoviePipelineEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, UMoviePipelineEditorBlueprintLibrary::StaticClass, TEXT("UMoviePipelineEditorBlueprintLibrary"), &Z_Registration_Info_UClass_UMoviePipelineEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineEditorBlueprintLibrary), 1284462276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_1767989693(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
