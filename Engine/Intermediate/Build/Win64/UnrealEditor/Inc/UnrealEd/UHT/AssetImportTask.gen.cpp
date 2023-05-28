// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/AssetImportTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetImportTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UAssetImportTask::execIsAsyncImportComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAsyncImportComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetImportTask::execGetObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetObjects();
		P_NATIVE_END;
	}
	void UAssetImportTask::StaticRegisterNativesUAssetImportTask()
	{
		UClass* Class = UAssetImportTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjects", &UAssetImportTask::execGetObjects },
			{ "IsAsyncImportComplete", &UAssetImportTask::execIsAsyncImportComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics
	{
		struct AssetImportTask_eventGetObjects_Parms
		{
			TArray<UObject*> ReturnValue;
		};
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTask_eventGetObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/**\n\x09 * Get the list of imported objects.\n\x09 * Note that if the import was asynchronous, this will block until the results are ready.\n\x09 * To test whether asynchronous results are ready or not, use IsAsyncImportComplete().\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Get the list of imported objects.\nNote that if the import was asynchronous, this will block until the results are ready.\nTo test whether asynchronous results are ready or not, use IsAsyncImportComplete()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportTask, nullptr, "GetObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::AssetImportTask_eventGetObjects_Parms), Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportTask_GetObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportTask_GetObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics
	{
		struct AssetImportTask_eventIsAsyncImportComplete_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetImportTask_eventIsAsyncImportComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetImportTask_eventIsAsyncImportComplete_Parms), &Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/**\n\x09 * Query whether this asynchronous import task is complete, and the results are ready to read.\n\x09 * This will always return true in the case of a blocking import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Query whether this asynchronous import task is complete, and the results are ready to read.\nThis will always return true in the case of a blocking import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportTask, nullptr, "IsAsyncImportComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::AssetImportTask_eventIsAsyncImportComplete_Parms), Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetImportTask);
	UClass* Z_Construct_UClass_UAssetImportTask_NoRegister()
	{
		return UAssetImportTask::StaticClass();
	}
	struct Z_Construct_UClass_UAssetImportTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[];
#endif
		static void NewProp_bReplaceExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceExistingSettings_MetaData[];
#endif
		static void NewProp_bReplaceExistingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[];
#endif
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAsync_MetaData[];
#endif
		static void NewProp_bAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedObjectPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedObjectPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedObjectPaths;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Result_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetImportTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetImportTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetImportTask_GetObjects, "GetObjects" }, // 2514014836
		{ &Z_Construct_UFunction_UAssetImportTask_IsAsyncImportComplete, "IsAsyncImportComplete" }, // 3278393186
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains data for a group of assets to import\n */" },
		{ "IncludePath", "AssetImportTask.h" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Filename to import */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Filename to import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, Filename), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Path where asset will be imported to */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Path where asset will be imported to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, DestinationPath), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Optional custom name to import as (if you are using interchange the name must be set in a pipeline and this field will be ignored)*/" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Optional custom name to import as (if you are using interchange the name must be set in a pipeline and this field will be ignored)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName = { "DestinationName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, DestinationName), METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Overwrite existing assets */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Overwrite existing assets" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bReplaceExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Replace existing settings when overwriting existing assets  */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Replace existing settings when overwriting existing assets" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bReplaceExistingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings = { "bReplaceExistingSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Avoid dialogs */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Avoid dialogs" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Save after importing */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Save after importing" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Perform the import asynchronously for file formats where async import is available */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Perform the import asynchronously for file formats where async import is available" },
	};
#endif
	void Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync_SetBit(void* Obj)
	{
		((UAssetImportTask*)Obj)->bAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetImportTask), &Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Optional factory to use */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Optional factory to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Import options specific to the type of asset */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Import options specific to the type of asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, Options), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_Inner = { "ImportedObjectPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_MetaData[] = {
		{ "Category", "Asset Import Task" },
		{ "Comment", "/** Paths to objects created or updated after import */" },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
		{ "ToolTip", "Paths to objects created or updated after import" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths = { "ImportedObjectPaths", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, ImportedObjectPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please use the GetObjects function instead." },
		{ "ModuleRelativePath", "Public/AssetImportTask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetImportTask, Result), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetImportTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_DestinationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bReplaceExistingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_bAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Factory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_ImportedObjectPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportTask_Statics::NewProp_Result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetImportTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetImportTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetImportTask_Statics::ClassParams = {
		&UAssetImportTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssetImportTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetImportTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetImportTask()
	{
		if (!Z_Registration_Info_UClass_UAssetImportTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetImportTask.OuterSingleton, Z_Construct_UClass_UAssetImportTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetImportTask.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAssetImportTask>()
	{
		return UAssetImportTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetImportTask);
	UAssetImportTask::~UAssetImportTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetImportTask, UAssetImportTask::StaticClass, TEXT("UAssetImportTask"), &Z_Registration_Info_UClass_UAssetImportTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetImportTask), 2376011309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_2636673035(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
