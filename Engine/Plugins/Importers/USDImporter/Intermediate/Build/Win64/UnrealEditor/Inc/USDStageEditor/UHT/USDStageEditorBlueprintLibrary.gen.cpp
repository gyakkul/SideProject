// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDStageEditorBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageEditorBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_USDStageEditor();
	USDSTAGE_API UClass* Z_Construct_UClass_AUsdStageActor_NoRegister();
	USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdStageEditorBlueprintLibrary();
	USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_NoRegister();
	USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageImportOptions_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execExportSelectedLayers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::ExportSelectedLayers(Z_Param_OutputDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execActionsImport)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputContentFolder);
		P_GET_OBJECT(UUsdStageImportOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::ActionsImport(Z_Param_OutputContentFolder,Z_Param_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileClose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileExportFlattenedStage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileExportFlattenedStage(Z_Param_OutputLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileExportAllLayers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileExportAllLayers(Z_Param_OutputDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileSave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputFilePathIfUnsaved);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileSave(Z_Param_OutputFilePathIfUnsaved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileOpen(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execFileNew)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::FileNew();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execSetSelectedPropertyNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::SetSelectedPropertyNames(Z_Param_Out_NewSelection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execGetSelectedPropertyNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdStageEditorBlueprintLibrary::GetSelectedPropertyNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execSetSelectedPrimPaths)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::SetSelectedPrimPaths(Z_Param_Out_NewSelection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execGetSelectedPrimPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdStageEditorBlueprintLibrary::GetSelectedPrimPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execSetSelectedLayerIdentifiers)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdStageEditorBlueprintLibrary::SetSelectedLayerIdentifiers(Z_Param_Out_NewSelection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execGetSelectedLayerIdentifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdStageEditorBlueprintLibrary::GetSelectedLayerIdentifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execSetAttachedStageActor)
	{
		P_GET_OBJECT(AUsdStageActor,Z_Param_NewActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdStageEditorBlueprintLibrary::SetAttachedStageActor(Z_Param_NewActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execGetAttachedStageActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AUsdStageActor**)Z_Param__Result=UUsdStageEditorBlueprintLibrary::GetAttachedStageActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execCloseStageEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdStageEditorBlueprintLibrary::CloseStageEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdStageEditorBlueprintLibrary::execOpenStageEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdStageEditorBlueprintLibrary::OpenStageEditor();
		P_NATIVE_END;
	}
	void UUsdStageEditorBlueprintLibrary::StaticRegisterNativesUUsdStageEditorBlueprintLibrary()
	{
		UClass* Class = UUsdStageEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionsImport", &UUsdStageEditorBlueprintLibrary::execActionsImport },
			{ "CloseStageEditor", &UUsdStageEditorBlueprintLibrary::execCloseStageEditor },
			{ "ExportSelectedLayers", &UUsdStageEditorBlueprintLibrary::execExportSelectedLayers },
			{ "FileClose", &UUsdStageEditorBlueprintLibrary::execFileClose },
			{ "FileExportAllLayers", &UUsdStageEditorBlueprintLibrary::execFileExportAllLayers },
			{ "FileExportFlattenedStage", &UUsdStageEditorBlueprintLibrary::execFileExportFlattenedStage },
			{ "FileNew", &UUsdStageEditorBlueprintLibrary::execFileNew },
			{ "FileOpen", &UUsdStageEditorBlueprintLibrary::execFileOpen },
			{ "FileReload", &UUsdStageEditorBlueprintLibrary::execFileReload },
			{ "FileReset", &UUsdStageEditorBlueprintLibrary::execFileReset },
			{ "FileSave", &UUsdStageEditorBlueprintLibrary::execFileSave },
			{ "GetAttachedStageActor", &UUsdStageEditorBlueprintLibrary::execGetAttachedStageActor },
			{ "GetSelectedLayerIdentifiers", &UUsdStageEditorBlueprintLibrary::execGetSelectedLayerIdentifiers },
			{ "GetSelectedPrimPaths", &UUsdStageEditorBlueprintLibrary::execGetSelectedPrimPaths },
			{ "GetSelectedPropertyNames", &UUsdStageEditorBlueprintLibrary::execGetSelectedPropertyNames },
			{ "OpenStageEditor", &UUsdStageEditorBlueprintLibrary::execOpenStageEditor },
			{ "SetAttachedStageActor", &UUsdStageEditorBlueprintLibrary::execSetAttachedStageActor },
			{ "SetSelectedLayerIdentifiers", &UUsdStageEditorBlueprintLibrary::execSetSelectedLayerIdentifiers },
			{ "SetSelectedPrimPaths", &UUsdStageEditorBlueprintLibrary::execSetSelectedPrimPaths },
			{ "SetSelectedPropertyNames", &UUsdStageEditorBlueprintLibrary::execSetSelectedPropertyNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventActionsImport_Parms
		{
			FString OutputContentFolder;
			UUsdStageImportOptions* Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputContentFolder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_OutputContentFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_OutputContentFolder = { "OutputContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventActionsImport_Parms, OutputContentFolder), METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_OutputContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_OutputContentFolder_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventActionsImport_Parms, Options), Z_Construct_UClass_UUsdStageImportOptions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_OutputContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n\x09 * Imports the currently opened USD Stage into persistent UE assets, actors and components on the level.\n\x09 * Corresponds to the \"Actions -> Import\" action on the USD Stage Editor menu bar.\n     * @param OutputContentFolder - Content path (e.g. \"/Game/Imports\") to receive the imported assets.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If this path is the empty string a dialog will be shown to let the user pick\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09the folder.\n     * @papam Options - Options object to use for the import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Imports the currently opened USD Stage into persistent UE assets, actors and components on the level.\nCorresponds to the \"Actions -> Import\" action on the USD Stage Editor menu bar.\n@param OutputContentFolder - Content path (e.g. \"/Game/Imports\") to receive the imported assets.\n                                                             If this path is the empty string a dialog will be shown to let the user pick\n                                                             the folder.\n@papam Options - Options object to use for the import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "ActionsImport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::UsdStageEditorBlueprintLibrary_eventActionsImport_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventCloseStageEditor_Parms
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
	void Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdStageEditorBlueprintLibrary_eventCloseStageEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdStageEditorBlueprintLibrary_eventCloseStageEditor_Parms), &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Stage Editor" },
		{ "Comment", "/**\n\x09 * Closes the USD Stage Editor window if it is opened. Does nothing in case it is already closed.\n\x09 * @return True if a stage was closed by this action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Closes the USD Stage Editor window if it is opened. Does nothing in case it is already closed.\n@return True if a stage was closed by this action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "CloseStageEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::UsdStageEditorBlueprintLibrary_eventCloseStageEditor_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventExportSelectedLayers_Parms
		{
			FString OutputDirectory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventExportSelectedLayers_Parms, OutputDirectory), METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::NewProp_OutputDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::NewProp_OutputDirectory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n\x09 * Exports the currently selected layers on the USD Stage Editor to brand new files in a new location.\n\x09 * Corresponds to right-clicking selected layers on the USD Stage Editor and picking \"Export\".\n\x09 * @param OutputDirectory - Directory path (e.g. \"C:/ExportFolder/\") to receive the exported files.\n\x09 *                          If this path is the empty string a dialog will be shown to let the user pick the\n\x09 *                          directory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Exports the currently selected layers on the USD Stage Editor to brand new files in a new location.\nCorresponds to right-clicking selected layers on the USD Stage Editor and picking \"Export\".\n@param OutputDirectory - Directory path (e.g. \"C:/ExportFolder/\") to receive the exported files.\n                         If this path is the empty string a dialog will be shown to let the user pick the\n                         directory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "ExportSelectedLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::UsdStageEditorBlueprintLibrary_eventExportSelectedLayers_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n\x09 * Closes the currently opened USD Stage (by clearing the attached Stage Actor's RootLayer property).\n\x09 * Corresponds to the \"File -> Close\" action on the USD Stage Editor menu bar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Closes the currently opened USD Stage (by clearing the attached Stage Actor's RootLayer property).\nCorresponds to the \"File -> Close\" action on the USD Stage Editor menu bar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventFileExportAllLayers_Parms
		{
			FString OutputDirectory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventFileExportAllLayers_Parms, OutputDirectory), METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::NewProp_OutputDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::NewProp_OutputDirectory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n     * Exports all layers of the currently opened USD Stage to brand new files in a new location.\n\x09 * Corresponds to the \"File -> Export -> All Layers\" action on the USD Stage Editor menu bar.\n     * @param OutputDirectory - Directory path (e.g. \"C:/ExportFolder/\") to receive the exported files.\n\x09 *                          If this path is the empty string a dialog will be shown to let the user pick the\n\x09 *                          directory.\n     */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Exports all layers of the currently opened USD Stage to brand new files in a new location.\nCorresponds to the \"File -> Export -> All Layers\" action on the USD Stage Editor menu bar.\n@param OutputDirectory - Directory path (e.g. \"C:/ExportFolder/\") to receive the exported files.\n                         If this path is the empty string a dialog will be shown to let the user pick the\n                         directory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileExportAllLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::UsdStageEditorBlueprintLibrary_eventFileExportAllLayers_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventFileExportFlattenedStage_Parms
		{
			FString OutputLayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::NewProp_OutputLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::NewProp_OutputLayer = { "OutputLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventFileExportFlattenedStage_Parms, OutputLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::NewProp_OutputLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::NewProp_OutputLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::NewProp_OutputLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n     * Exports the currently opened USD Stage to a single \"flattened\" USD layer.\n\x09 * Corresponds to the \"File -> Export -> All Layers\" action on the USD Stage Editor menu bar.\n\x09 * @param OutputLayer - File path (e.g. \"C:/ExportFolder/out.usda\") to export the flattened layer to.\n\x09 *                      If this path is the empty string a dialog will be shown to let the user pick the file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Exports the currently opened USD Stage to a single \"flattened\" USD layer.\nCorresponds to the \"File -> Export -> All Layers\" action on the USD Stage Editor menu bar.\n@param OutputLayer - File path (e.g. \"C:/ExportFolder/out.usda\") to export the flattened layer to.\n                     If this path is the empty string a dialog will be shown to let the user pick the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileExportFlattenedStage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::UsdStageEditorBlueprintLibrary_eventFileExportFlattenedStage_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n\x09 * Creates a new memory-only layer and opens an USD Stage with that layer as its root.\n\x09 * Corresponds to the \"File -> New\" action on the USD Stage Editor menu bar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Creates a new memory-only layer and opens an USD Stage with that layer as its root.\nCorresponds to the \"File -> New\" action on the USD Stage Editor menu bar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileNew", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventFileOpen_Parms
		{
			FString FilePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventFileOpen_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n     * Opens an USD Stage from a file on disk.\n\x09 * Corresponds to the \"File -> Open\" action on the USD Stage Editor menu bar.\n\x09 * @param FilePath - File path to the USD layer to open (e.g. \"C:/Folder/MyFile.usda\").\n\x09 *                   If this path is the empty string a dialog will be shown to let the user pick the file.\n     */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Opens an USD Stage from a file on disk.\nCorresponds to the \"File -> Open\" action on the USD Stage Editor menu bar.\n@param FilePath - File path to the USD layer to open (e.g. \"C:/Folder/MyFile.usda\").\n                  If this path is the empty string a dialog will be shown to let the user pick the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::UsdStageEditorBlueprintLibrary_eventFileOpen_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n\x09 * Reloads all layers of the current USD Stage.\n\x09 * Corresponds to the \"File -> Reload\" action on the USD Stage Editor menu bar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Reloads all layers of the current USD Stage.\nCorresponds to the \"File -> Reload\" action on the USD Stage Editor menu bar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n\x09 * Resets the state of the current USD Stage (which layers are muted, the current edit target, etc.).\n\x09 * Corresponds to the \"File -> Reset state\" action on the USD Stage Editor menu bar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Resets the state of the current USD Stage (which layers are muted, the current edit target, etc.).\nCorresponds to the \"File -> Reset state\" action on the USD Stage Editor menu bar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventFileSave_Parms
		{
			FString OutputFilePathIfUnsaved;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFilePathIfUnsaved_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFilePathIfUnsaved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::NewProp_OutputFilePathIfUnsaved_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::NewProp_OutputFilePathIfUnsaved = { "OutputFilePathIfUnsaved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventFileSave_Parms, OutputFilePathIfUnsaved), METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::NewProp_OutputFilePathIfUnsaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::NewProp_OutputFilePathIfUnsaved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::NewProp_OutputFilePathIfUnsaved,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Menu Actions" },
		{ "Comment", "/**\n     * Saves the currently opened USD Stage back to disk, or to a new file in case it hasn't been saved yet.\n\x09 * Corresponds to the \"File -> Save\" action on the USD Stage Editor menu bar.\n\x09 * @param OutputFilePathIfUnsaved - File path (e.g. \"C:/Folder/MyFile.usda\") to use when the currently opened\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09stage hasn't been saved yet.\n\x09 *                                  If this path is the empty string a dialog will be shown to let the user pick\n\x09 *                                  the file.\n     */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Saves the currently opened USD Stage back to disk, or to a new file in case it hasn't been saved yet.\nCorresponds to the \"File -> Save\" action on the USD Stage Editor menu bar.\n@param OutputFilePathIfUnsaved - File path (e.g. \"C:/Folder/MyFile.usda\") to use when the currently opened\n                                                                     stage hasn't been saved yet.\n                                 If this path is the empty string a dialog will be shown to let the user pick\n                                 the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "FileSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::UsdStageEditorBlueprintLibrary_eventFileSave_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventGetAttachedStageActor_Parms
		{
			AUsdStageActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventGetAttachedStageActor_Parms, ReturnValue), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Stage Actor" },
		{ "Comment", "/**\n\x09 * Gets which actor is currently attached to the USD Stage Editor, if any.\n\x09 * May return nullptr in case no actor is attached.\n\x09 * @return The attached stage actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Gets which actor is currently attached to the USD Stage Editor, if any.\nMay return nullptr in case no actor is attached.\n@return The attached stage actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "GetAttachedStageActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::UsdStageEditorBlueprintLibrary_eventGetAttachedStageActor_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventGetSelectedLayerIdentifiers_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventGetSelectedLayerIdentifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Selection" },
		{ "Comment", "/**\n\x09 * Returns the full identifiers of all layers that are currently selected on the USD Stage Editor.\n\x09 * @return The list of identifiers (e.g. [\"c:/MyFolder/root.usda\", \"c:/MyFolder/sublayer.usda\"])\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Returns the full identifiers of all layers that are currently selected on the USD Stage Editor.\n@return The list of identifiers (e.g. [\"c:/MyFolder/root.usda\", \"c:/MyFolder/sublayer.usda\"])" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "GetSelectedLayerIdentifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::UsdStageEditorBlueprintLibrary_eventGetSelectedLayerIdentifiers_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventGetSelectedPrimPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventGetSelectedPrimPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Selection" },
		{ "Comment", "/**\n\x09 * Returns the full paths to all prims currently selected on the USD Stage Editor.\n\x09 * @return The paths of selected prims (e.g. [\"/ParentPrim/Mesh\", \"/Root\"])\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Returns the full paths to all prims currently selected on the USD Stage Editor.\n@return The paths of selected prims (e.g. [\"/ParentPrim/Mesh\", \"/Root\"])" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "GetSelectedPrimPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::UsdStageEditorBlueprintLibrary_eventGetSelectedPrimPaths_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventGetSelectedPropertyNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventGetSelectedPropertyNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Selection" },
		{ "Comment", "/**\n\x09 * Returns the names of the currently selected properties on the right panel of the USD Stage Editor.\n\x09 * @return The names of selected properties (e.g. [\"points\", \"displayColor\"])\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Returns the names of the currently selected properties on the right panel of the USD Stage Editor.\n@return The names of selected properties (e.g. [\"points\", \"displayColor\"])" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "GetSelectedPropertyNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::UsdStageEditorBlueprintLibrary_eventGetSelectedPropertyNames_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventOpenStageEditor_Parms
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
	void Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdStageEditorBlueprintLibrary_eventOpenStageEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdStageEditorBlueprintLibrary_eventOpenStageEditor_Parms), &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Stage Editor" },
		{ "Comment", "/**\n\x09 * Opens the the USD Stage Editor window, or focus it in case it is already open.\n\x09 * @return True if a stage is now opened and available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Opens the the USD Stage Editor window, or focus it in case it is already open.\n@return True if a stage is now opened and available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "OpenStageEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::UsdStageEditorBlueprintLibrary_eventOpenStageEditor_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventSetAttachedStageActor_Parms
		{
			AUsdStageActor* NewActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventSetAttachedStageActor_Parms, NewActor), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdStageEditorBlueprintLibrary_eventSetAttachedStageActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdStageEditorBlueprintLibrary_eventSetAttachedStageActor_Parms), &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::NewProp_NewActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Stage Actor" },
		{ "Comment", "/**\n\x09 * Sets which actor is currently attached to the USD Stage Editor.\n\x09 * Provide None/nullptr to clear the attached stage actor.\n\x09 * @param NewActor - The actor to select\n\x09 * @return True in case the new actor was attached to the USD Stage Editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets which actor is currently attached to the USD Stage Editor.\nProvide None/nullptr to clear the attached stage actor.\n@param NewActor - The actor to select\n@return True in case the new actor was attached to the USD Stage Editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "SetAttachedStageActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::UsdStageEditorBlueprintLibrary_eventSetAttachedStageActor_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventSetSelectedLayerIdentifiers_Parms
		{
			TArray<FString> NewSelection;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSelection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSelection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection_Inner = { "NewSelection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventSetSelectedLayerIdentifiers_Parms, NewSelection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::NewProp_NewSelection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Selection" },
		{ "Comment", "/**\n\x09 * Sets the USD Stage Editor layer selection to all occurences of the layers with identifiers\n\x09 * in NewSelection. Provide an empty array to clear the selection.\n\x09 * @param NewSelection - The list of identifiers to select\n\x09 *                       (e.g. [\"c:/MyFolder/root.usda\", \"c:/MyFolder/sublayer.usda\"])\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets the USD Stage Editor layer selection to all occurences of the layers with identifiers\nin NewSelection. Provide an empty array to clear the selection.\n@param NewSelection - The list of identifiers to select\n                      (e.g. [\"c:/MyFolder/root.usda\", \"c:/MyFolder/sublayer.usda\"])" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "SetSelectedLayerIdentifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::UsdStageEditorBlueprintLibrary_eventSetSelectedLayerIdentifiers_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventSetSelectedPrimPaths_Parms
		{
			TArray<FString> NewSelection;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSelection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSelection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection_Inner = { "NewSelection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventSetSelectedPrimPaths_Parms, NewSelection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::NewProp_NewSelection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Selection" },
		{ "Comment", "/**\n\x09 * Sets the USD Stage Editor prim selection to the prims with paths contained in NewSelection.\n\x09 * Provide an empty array to clear the selection.\n\x09 * @param NewSelection - The list of prim paths to select (e.g. [\"/ParentPrim/Mesh\", \"/Root\"])\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets the USD Stage Editor prim selection to the prims with paths contained in NewSelection.\nProvide an empty array to clear the selection.\n@param NewSelection - The list of prim paths to select (e.g. [\"/ParentPrim/Mesh\", \"/Root\"])" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "SetSelectedPrimPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::UsdStageEditorBlueprintLibrary_eventSetSelectedPrimPaths_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics
	{
		struct UsdStageEditorBlueprintLibrary_eventSetSelectedPropertyNames_Parms
		{
			TArray<FString> NewSelection;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSelection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSelection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection_Inner = { "NewSelection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageEditorBlueprintLibrary_eventSetSelectedPropertyNames_Parms, NewSelection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::NewProp_NewSelection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Selection" },
		{ "Comment", "/**\n\x09 * Sets the USD Stage Editor property selection to the properties with names contained in NewSelection.\n\x09 * Provide an empty array to clear the selection.\n\x09 * @param NewSelection - The list of property names to select (e.g. [\"points\", \"displayColor\"])\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ToolTip", "Sets the USD Stage Editor property selection to the properties with names contained in NewSelection.\nProvide an empty array to clear the selection.\n@param NewSelection - The list of property names to select (e.g. [\"points\", \"displayColor\"])" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, nullptr, "SetSelectedPropertyNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::UsdStageEditorBlueprintLibrary_eventSetSelectedPropertyNames_Parms), Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdStageEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_NoRegister()
	{
		return UUsdStageEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStageEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ActionsImport, "ActionsImport" }, // 2940296509
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_CloseStageEditor, "CloseStageEditor" }, // 475833383
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_ExportSelectedLayers, "ExportSelectedLayers" }, // 3229915826
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileClose, "FileClose" }, // 1322808022
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportAllLayers, "FileExportAllLayers" }, // 359558647
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileExportFlattenedStage, "FileExportFlattenedStage" }, // 3661979283
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileNew, "FileNew" }, // 2678641042
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileOpen, "FileOpen" }, // 2149634880
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReload, "FileReload" }, // 2772237670
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileReset, "FileReset" }, // 3971945607
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_FileSave, "FileSave" }, // 2069302232
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetAttachedStageActor, "GetAttachedStageActor" }, // 3026859393
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedLayerIdentifiers, "GetSelectedLayerIdentifiers" }, // 2462942411
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPrimPaths, "GetSelectedPrimPaths" }, // 3562873394
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_GetSelectedPropertyNames, "GetSelectedPropertyNames" }, // 1903236559
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_OpenStageEditor, "OpenStageEditor" }, // 4167532755
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetAttachedStageActor, "SetAttachedStageActor" }, // 407422088
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedLayerIdentifiers, "SetSelectedLayerIdentifiers" }, // 4191915880
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPrimPaths, "SetSelectedPrimPaths" }, // 2456089611
		{ &Z_Construct_UFunction_UUsdStageEditorBlueprintLibrary_SetSelectedPropertyNames, "SetSelectedPropertyNames" }, // 151524814
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Library of functions that can be used from scripting to interact with the USD Stage Editor UI */" },
		{ "IncludePath", "USDStageEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/USDStageEditorBlueprintLibrary.h" },
		{ "ScriptName", "UsdStageEditorLibrary" },
		{ "ToolTip", "Library of functions that can be used from scripting to interact with the USD Stage Editor UI" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdStageEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::ClassParams = {
		&UUsdStageEditorBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdStageEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UUsdStageEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdStageEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdStageEditorBlueprintLibrary.OuterSingleton;
	}
	template<> USDSTAGEEDITOR_API UClass* StaticClass<UUsdStageEditorBlueprintLibrary>()
	{
		return UUsdStageEditorBlueprintLibrary::StaticClass();
	}
	UUsdStageEditorBlueprintLibrary::UUsdStageEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdStageEditorBlueprintLibrary);
	UUsdStageEditorBlueprintLibrary::~UUsdStageEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdStageEditorBlueprintLibrary, UUsdStageEditorBlueprintLibrary::StaticClass, TEXT("UUsdStageEditorBlueprintLibrary"), &Z_Registration_Info_UClass_UUsdStageEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdStageEditorBlueprintLibrary), 518605333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_2485782177(TEXT("/Script/USDStageEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
