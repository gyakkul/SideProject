// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSnapshotsEditorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsEditorFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSnapshotsEditorFunctionLibrary::execGenerateThumbnailForSnapshotAsset)
	{
		P_GET_OBJECT(ULevelSnapshot,Z_Param_SnapshotPackage);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSnapshotsEditorFunctionLibrary::GenerateThumbnailForSnapshotAsset(Z_Param_SnapshotPackage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotsEditorFunctionLibrary::execTakeAndSaveLevelSnapshotEditorWorld)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULevelSnapshotsEditorFunctionLibrary::TakeAndSaveLevelSnapshotEditorWorld(Z_Param_FileName,Z_Param_FolderPath,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshotsEditorFunctionLibrary::execTakeLevelSnapshotAndSaveToDisk)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_UBOOL(Z_Param_bShouldCreateUniqueFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSnapshot**)Z_Param__Result=ULevelSnapshotsEditorFunctionLibrary::TakeLevelSnapshotAndSaveToDisk(Z_Param_WorldContextObject,Z_Param_FileName,Z_Param_FolderPath,Z_Param_Description,Z_Param_bShouldCreateUniqueFileName);
		P_NATIVE_END;
	}
	void ULevelSnapshotsEditorFunctionLibrary::StaticRegisterNativesULevelSnapshotsEditorFunctionLibrary()
	{
		UClass* Class = ULevelSnapshotsEditorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateThumbnailForSnapshotAsset", &ULevelSnapshotsEditorFunctionLibrary::execGenerateThumbnailForSnapshotAsset },
			{ "TakeAndSaveLevelSnapshotEditorWorld", &ULevelSnapshotsEditorFunctionLibrary::execTakeAndSaveLevelSnapshotEditorWorld },
			{ "TakeLevelSnapshotAndSaveToDisk", &ULevelSnapshotsEditorFunctionLibrary::execTakeLevelSnapshotAndSaveToDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics
	{
		struct LevelSnapshotsEditorFunctionLibrary_eventGenerateThumbnailForSnapshotAsset_Parms
		{
			ULevelSnapshot* SnapshotPackage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapshotPackage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::NewProp_SnapshotPackage = { "SnapshotPackage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventGenerateThumbnailForSnapshotAsset_Parms, SnapshotPackage), Z_Construct_UClass_ULevelSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::NewProp_SnapshotPackage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelSnapshots" },
		{ "Comment", "/* If the snapshot is saved in the registry, takes a screenshot of the editor scene and sets it as thumnail for the snapshot. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEditorFunctionLibrary.h" },
		{ "ToolTip", "If the snapshot is saved in the registry, takes a screenshot of the editor scene and sets it as thumnail for the snapshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary, nullptr, "GenerateThumbnailForSnapshotAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::LevelSnapshotsEditorFunctionLibrary_eventGenerateThumbnailForSnapshotAsset_Parms), Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics
	{
		struct LevelSnapshotsEditorFunctionLibrary_eventTakeAndSaveLevelSnapshotEditorWorld_Parms
		{
			FString FileName;
			FString FolderPath;
			FString Description;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeAndSaveLevelSnapshotEditorWorld_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeAndSaveLevelSnapshotEditorWorld_Parms, FolderPath), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeAndSaveLevelSnapshotEditorWorld_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelSnapshots" },
		{ "Comment", "/**\n\x09 * Uses TakeLevelSnapshotAndSaveToDisk() and assumes Editor World\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEditorFunctionLibrary.h" },
		{ "ToolTip", "Uses TakeLevelSnapshotAndSaveToDisk() and assumes Editor World" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary, nullptr, "TakeAndSaveLevelSnapshotEditorWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::LevelSnapshotsEditorFunctionLibrary_eventTakeAndSaveLevelSnapshotEditorWorld_Parms), Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics
	{
		struct LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms
		{
			const UObject* WorldContextObject;
			FString FileName;
			FString FolderPath;
			FString Description;
			bool bShouldCreateUniqueFileName;
			ULevelSnapshot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCreateUniqueFileName_MetaData[];
#endif
		static void NewProp_bShouldCreateUniqueFileName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCreateUniqueFileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms, FolderPath), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName_SetBit(void* Obj)
	{
		((LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms*)Obj)->bShouldCreateUniqueFileName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName = { "bShouldCreateUniqueFileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms), &Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms, ReturnValue), Z_Construct_UClass_ULevelSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_bShouldCreateUniqueFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelSnapshots" },
		{ "Comment", "/**\n\x09 * @brief Creates a new Level Snapshot asset in the content browser and then captures the target world\n\x09 * @param WorldContextObject Context object to determine which world to take the snapshot in\n\x09 * @param FileName The desired asset file name\n\x09 * @param FolderPath The desired asset location\n\x09 * @param bShouldCreateUniqueFileName If true, the asset name will have a number incrementally added to the file name if an asset with a similar name already exists. If false, the existing asset will be overwritten.\n\x09 */" },
		{ "CPP_Default_bShouldCreateUniqueFileName", "true" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEditorFunctionLibrary.h" },
		{ "ToolTip", "@brief Creates a new Level Snapshot asset in the content browser and then captures the target world\n@param WorldContextObject Context object to determine which world to take the snapshot in\n@param FileName The desired asset file name\n@param FolderPath The desired asset location\n@param bShouldCreateUniqueFileName If true, the asset name will have a number incrementally added to the file name if an asset with a similar name already exists. If false, the existing asset will be overwritten." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary, nullptr, "TakeLevelSnapshotAndSaveToDisk", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::LevelSnapshotsEditorFunctionLibrary_eventTakeLevelSnapshotAndSaveToDisk_Parms), Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsEditorFunctionLibrary);
	UClass* Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_NoRegister()
	{
		return ULevelSnapshotsEditorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_GenerateThumbnailForSnapshotAsset, "GenerateThumbnailForSnapshotAsset" }, // 4243989161
		{ &Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeAndSaveLevelSnapshotEditorWorld, "TakeAndSaveLevelSnapshotEditorWorld" }, // 2807686221
		{ &Z_Construct_UFunction_ULevelSnapshotsEditorFunctionLibrary_TakeLevelSnapshotAndSaveToDisk, "TakeLevelSnapshotAndSaveToDisk" }, // 2629622784
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSnapshotsEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEditorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsEditorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::ClassParams = {
		&ULevelSnapshotsEditorFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsEditorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsEditorFunctionLibrary.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<ULevelSnapshotsEditorFunctionLibrary>()
	{
		return ULevelSnapshotsEditorFunctionLibrary::StaticClass();
	}
	ULevelSnapshotsEditorFunctionLibrary::ULevelSnapshotsEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsEditorFunctionLibrary);
	ULevelSnapshotsEditorFunctionLibrary::~ULevelSnapshotsEditorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Public_LevelSnapshotsEditorFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Public_LevelSnapshotsEditorFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsEditorFunctionLibrary, ULevelSnapshotsEditorFunctionLibrary::StaticClass, TEXT("ULevelSnapshotsEditorFunctionLibrary"), &Z_Registration_Info_UClass_ULevelSnapshotsEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsEditorFunctionLibrary), 2923501213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Public_LevelSnapshotsEditorFunctionLibrary_h_3034915523(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Public_LevelSnapshotsEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Public_LevelSnapshotsEditorFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
