// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/FileHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execReloadPackages)
	{
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToReload);
		P_GET_UBOOL_REF(Z_Param_Out_bOutAnyPackagesReloaded);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorMessage);
		P_GET_ENUM(EReloadPackagesInteractionMode,Z_Param_InteractionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLoadingAndSavingUtils::ReloadPackages(Z_Param_Out_PackagesToReload,Z_Param_Out_bOutAnyPackagesReloaded,Z_Param_Out_OutErrorMessage,EReloadPackagesInteractionMode(Z_Param_InteractionMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execUnloadPackages)
	{
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToUnload);
		P_GET_UBOOL_REF(Z_Param_Out_bOutAnyPackagesUnloaded);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLoadingAndSavingUtils::UnloadPackages(Z_Param_Out_PackagesToUnload,Z_Param_Out_bOutAnyPackagesUnloaded,Z_Param_Out_OutErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execExportScene)
	{
		P_GET_UBOOL(Z_Param_bExportSelectedActorsOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLoadingAndSavingUtils::ExportScene(Z_Param_bExportSelectedActorsOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execImportScene)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLoadingAndSavingUtils::ImportScene(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execGetDirtyContentPackages)
	{
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_OutDirtyPackages);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLoadingAndSavingUtils::GetDirtyContentPackages(Z_Param_Out_OutDirtyPackages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execGetDirtyMapPackages)
	{
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_OutDirtyPackages);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLoadingAndSavingUtils::GetDirtyMapPackages(Z_Param_Out_OutDirtyPackages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execSaveCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execSaveDirtyPackagesWithDialog)
	{
		P_GET_UBOOL(Z_Param_bSaveMapPackages);
		P_GET_UBOOL(Z_Param_bSaveContentPackages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveDirtyPackagesWithDialog(Z_Param_bSaveMapPackages,Z_Param_bSaveContentPackages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execSaveDirtyPackages)
	{
		P_GET_UBOOL(Z_Param_bSaveMapPackages);
		P_GET_UBOOL(Z_Param_bSaveContentPackages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveDirtyPackages(Z_Param_bSaveMapPackages,Z_Param_bSaveContentPackages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execSavePackagesWithDialog)
	{
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToSave);
		P_GET_UBOOL(Z_Param_bOnlyDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SavePackagesWithDialog(Z_Param_Out_PackagesToSave,Z_Param_bOnlyDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execSavePackages)
	{
		P_GET_TARRAY_REF(UPackage*,Z_Param_Out_PackagesToSave);
		P_GET_UBOOL(Z_Param_bOnlyDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SavePackages(Z_Param_Out_PackagesToSave,Z_Param_bOnlyDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execSaveMap)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLoadingAndSavingUtils::SaveMap(Z_Param_World,Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execLoadMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::LoadMap(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execLoadMapWithDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::LoadMapWithDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execNewMapFromTemplate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToTemplateLevel);
		P_GET_UBOOL(Z_Param_bSaveExistingMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::NewMapFromTemplate(Z_Param_PathToTemplateLevel,Z_Param_bSaveExistingMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLoadingAndSavingUtils::execNewBlankMap)
	{
		P_GET_UBOOL(Z_Param_bSaveExistingMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UEditorLoadingAndSavingUtils::NewBlankMap(Z_Param_bSaveExistingMap);
		P_NATIVE_END;
	}
	void UEditorLoadingAndSavingUtils::StaticRegisterNativesUEditorLoadingAndSavingUtils()
	{
		UClass* Class = UEditorLoadingAndSavingUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportScene", &UEditorLoadingAndSavingUtils::execExportScene },
			{ "GetDirtyContentPackages", &UEditorLoadingAndSavingUtils::execGetDirtyContentPackages },
			{ "GetDirtyMapPackages", &UEditorLoadingAndSavingUtils::execGetDirtyMapPackages },
			{ "ImportScene", &UEditorLoadingAndSavingUtils::execImportScene },
			{ "LoadMap", &UEditorLoadingAndSavingUtils::execLoadMap },
			{ "LoadMapWithDialog", &UEditorLoadingAndSavingUtils::execLoadMapWithDialog },
			{ "NewBlankMap", &UEditorLoadingAndSavingUtils::execNewBlankMap },
			{ "NewMapFromTemplate", &UEditorLoadingAndSavingUtils::execNewMapFromTemplate },
			{ "ReloadPackages", &UEditorLoadingAndSavingUtils::execReloadPackages },
			{ "SaveCurrentLevel", &UEditorLoadingAndSavingUtils::execSaveCurrentLevel },
			{ "SaveDirtyPackages", &UEditorLoadingAndSavingUtils::execSaveDirtyPackages },
			{ "SaveDirtyPackagesWithDialog", &UEditorLoadingAndSavingUtils::execSaveDirtyPackagesWithDialog },
			{ "SaveMap", &UEditorLoadingAndSavingUtils::execSaveMap },
			{ "SavePackages", &UEditorLoadingAndSavingUtils::execSavePackages },
			{ "SavePackagesWithDialog", &UEditorLoadingAndSavingUtils::execSavePackagesWithDialog },
			{ "UnloadPackages", &UEditorLoadingAndSavingUtils::execUnloadPackages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics
	{
		struct EditorLoadingAndSavingUtils_eventExportScene_Parms
		{
			bool bExportSelectedActorsOnly;
		};
		static void NewProp_bExportSelectedActorsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSelectedActorsOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventExportScene_Parms*)Obj)->bExportSelectedActorsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly = { "bExportSelectedActorsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventExportScene_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::NewProp_bExportSelectedActorsOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Exports the current scene \n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Exports the current scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "ExportScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::EditorLoadingAndSavingUtils_eventExportScene_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventGetDirtyContentPackages_Parms
		{
			TArray<UPackage*> OutDirtyPackages;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDirtyPackages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDirtyPackages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages_Inner = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventGetDirtyContentPackages_Parms, OutDirtyPackages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::NewProp_OutDirtyPackages,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Appends array with all currently dirty content packages.\n\x09 *\n\x09 * @param OutDirtyPackages Array to append dirty packages to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Appends array with all currently dirty content packages.\n\n@param OutDirtyPackages Array to append dirty packages to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "GetDirtyContentPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::EditorLoadingAndSavingUtils_eventGetDirtyContentPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventGetDirtyMapPackages_Parms
		{
			TArray<UPackage*> OutDirtyPackages;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDirtyPackages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDirtyPackages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages_Inner = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages = { "OutDirtyPackages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventGetDirtyMapPackages_Parms, OutDirtyPackages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::NewProp_OutDirtyPackages,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Appends array with all currently dirty map packages.\n\x09 *\n\x09 * @param OutDirtyPackages Array to append dirty packages to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Appends array with all currently dirty map packages.\n\n@param OutDirtyPackages Array to append dirty packages to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "GetDirtyMapPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::EditorLoadingAndSavingUtils_eventGetDirtyMapPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics
	{
		struct EditorLoadingAndSavingUtils_eventImportScene_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventImportScene_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\x09\n\x09 * Imports a file such as (FBX or obj) and spawns actors f into the current level\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Imports a file such as (FBX or obj) and spawns actors f into the current level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "ImportScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::EditorLoadingAndSavingUtils_eventImportScene_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics
	{
		struct EditorLoadingAndSavingUtils_eventLoadMap_Parms
		{
			FString Filename;
			UWorld* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventLoadMap_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventLoadMap_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Loads the specified map.  Does not prompt the user to save the current map.\n\x09 *\n\x09 * @param\x09""Filename\x09\x09Level package filename, including path.\n\x09 * @return\x09\x09\x09\x09\x09true if the map was loaded successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Loads the specified map.  Does not prompt the user to save the current map.\n\n@param       Filename                Level package filename, including path.\n@return                                      true if the map was loaded successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "LoadMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::EditorLoadingAndSavingUtils_eventLoadMap_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics
	{
		struct EditorLoadingAndSavingUtils_eventLoadMapWithDialog_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventLoadMapWithDialog_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Prompts the user to save the current map if necessary, the presents a load dialog and\n\x09 * loads a new map if selected by the user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Prompts the user to save the current map if necessary, the presents a load dialog and\nloads a new map if selected by the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "LoadMapWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::EditorLoadingAndSavingUtils_eventLoadMapWithDialog_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics
	{
		struct EditorLoadingAndSavingUtils_eventNewBlankMap_Parms
		{
			bool bSaveExistingMap;
			UWorld* ReturnValue;
		};
		static void NewProp_bSaveExistingMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveExistingMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventNewBlankMap_Parms*)Obj)->bSaveExistingMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap = { "bSaveExistingMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventNewBlankMap_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventNewBlankMap_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_bSaveExistingMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "NewBlankMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::EditorLoadingAndSavingUtils_eventNewBlankMap_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics
	{
		struct EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms
		{
			FString PathToTemplateLevel;
			bool bSaveExistingMap;
			UWorld* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToTemplateLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToTemplateLevel;
		static void NewProp_bSaveExistingMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveExistingMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel = { "PathToTemplateLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms, PathToTemplateLevel), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms*)Obj)->bSaveExistingMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap = { "bSaveExistingMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_PathToTemplateLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_bSaveExistingMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "NewMapFromTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::EditorLoadingAndSavingUtils_eventNewMapFromTemplate_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventReloadPackages_Parms
		{
			TArray<UPackage*> PackagesToReload;
			bool bOutAnyPackagesReloaded;
			FText OutErrorMessage;
			EReloadPackagesInteractionMode InteractionMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PackagesToReload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToReload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToReload;
		static void NewProp_bOutAnyPackagesReloaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutAnyPackagesReloaded;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload_Inner = { "PackagesToReload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload = { "PackagesToReload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventReloadPackages_Parms, PackagesToReload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_bOutAnyPackagesReloaded_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventReloadPackages_Parms*)Obj)->bOutAnyPackagesReloaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_bOutAnyPackagesReloaded = { "bOutAnyPackagesReloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventReloadPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_bOutAnyPackagesReloaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventReloadPackages_Parms, OutErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode = { "InteractionMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventReloadPackages_Parms, InteractionMode), Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode_MetaData)) }; // 1001375270
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_PackagesToReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_bOutAnyPackagesReloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_OutErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::NewProp_InteractionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Helper function that attempts to reload the specified top-level packages.\n\x09 *\n\x09 * @param\x09PackagesToReload\x09\x09The list of packages that should be reloaded\n\x09 * @param\x09""bOutAnyPackagesReloaded\x09True if the set of loaded packages was changed\n\x09 * @param\x09OutErrorMessage\x09\x09\x09""An error message specifying any problems with reloading packages\n\x09 * @param\x09InteractionMode\x09\x09\x09Whether the function is allowed to ask the user questions (such as whether to reload dirty packages)\n\x09 */" },
		{ "CPP_Default_InteractionMode", "Interactive" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Helper function that attempts to reload the specified top-level packages.\n\n@param       PackagesToReload                The list of packages that should be reloaded\n@param       bOutAnyPackagesReloaded True if the set of loaded packages was changed\n@param       OutErrorMessage                 An error message specifying any problems with reloading packages\n@param       InteractionMode                 Whether the function is allowed to ask the user questions (such as whether to reload dirty packages)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "ReloadPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::EditorLoadingAndSavingUtils_eventReloadPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms
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
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Saves the active level, prompting the use for checkout if necessary.\n\x09 *\n\x09 * @return\x09true on success, False on fail\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Saves the active level, prompting the use for checkout if necessary.\n\n@return      true on success, False on fail" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveCurrentLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::EditorLoadingAndSavingUtils_eventSaveCurrentLevel_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms
		{
			bool bSaveMapPackages;
			bool bSaveContentPackages;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveMapPackages_MetaData[];
#endif
		static void NewProp_bSaveMapPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveMapPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveContentPackages_MetaData[];
#endif
		static void NewProp_bSaveContentPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveContentPackages;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms*)Obj)->bSaveMapPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages = { "bSaveMapPackages", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms*)Obj)->bSaveContentPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages = { "bSaveContentPackages", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveMapPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_bSaveContentPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Looks at all currently loaded packages and saves them if their \"bDirty\" flag is set.\n\x09 * Assume all dirty packages should be saved and check out from source control (if enabled).\n\x09 *\n\x09 * @param\x09""bSaveMapPackages\x09\x09\x09true if map packages should be saved\n\x09 * @param\x09""bSaveContentPackages\x09\x09true if we should save content packages.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09true on success, false on fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Looks at all currently loaded packages and saves them if their \"bDirty\" flag is set.\nAssume all dirty packages should be saved and check out from source control (if enabled).\n\n@param       bSaveMapPackages                        true if map packages should be saved\n@param       bSaveContentPackages            true if we should save content packages.\n@return                                                              true on success, false on fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveDirtyPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::EditorLoadingAndSavingUtils_eventSaveDirtyPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms
		{
			bool bSaveMapPackages;
			bool bSaveContentPackages;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveMapPackages_MetaData[];
#endif
		static void NewProp_bSaveMapPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveMapPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveContentPackages_MetaData[];
#endif
		static void NewProp_bSaveContentPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveContentPackages;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms*)Obj)->bSaveMapPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages = { "bSaveMapPackages", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms*)Obj)->bSaveContentPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages = { "bSaveContentPackages", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveMapPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_bSaveContentPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Looks at all currently loaded packages and saves them if their \"bDirty\" flag is set.\n\x09 * Prompt the user to select which dirty packages to save and check them out from source control (if enabled).\n\x09 *\n\n\x09 * @param\x09""bSaveMapPackages\x09\x09\x09true if map packages should be saved\n\x09 * @param\x09""bSaveContentPackages\x09\x09true if we should save content packages.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09true on success, false on fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Looks at all currently loaded packages and saves them if their \"bDirty\" flag is set.\nPrompt the user to select which dirty packages to save and check them out from source control (if enabled).\n\n\n@param       bSaveMapPackages                        true if map packages should be saved\n@param       bSaveContentPackages            true if we should save content packages.\n@return                                                              true on success, false on fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveDirtyPackagesWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::EditorLoadingAndSavingUtils_eventSaveDirtyPackagesWithDialog_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSaveMap_Parms
		{
			UWorld* World;
			FString AssetPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSaveMap_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSaveMap_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSaveMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSaveMap_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Saves the specified map, returning true on success.\n\x09 *\n\x09 * @param\x09World\x09\x09\x09The world to save.\n\x09 * @param\x09""AssetPath\x09\x09The valid content directory path and name for the asset.  E.g \"/Game/MyMap\"\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09true if the map was saved successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Saves the specified map, returning true on success.\n\n@param       World                   The world to save.\n@param       AssetPath               The valid content directory path and name for the asset.  E.g \"/Game/MyMap\"\n\n@return                                      true if the map was saved successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SaveMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::EditorLoadingAndSavingUtils_eventSaveMap_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSavePackages_Parms
		{
			TArray<UPackage*> PackagesToSave;
			bool bOnlyDirty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PackagesToSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToSave;
		static void NewProp_bOnlyDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_Inner = { "PackagesToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave = { "PackagesToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSavePackages_Parms, PackagesToSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackages_Parms*)Obj)->bOnlyDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty = { "bOnlyDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_PackagesToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_bOnlyDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09 * Save all packages.\n\x09 * Assume all dirty packages should be saved and check out from source control (if enabled).\n\x09 *\n\x09 * @param\x09\x09PackagesToSave\x09\x09\x09\x09The list of packages to save.  Both map and content packages are supported\n\x09 * @param\x09\x09""bCheckDirty\x09\x09\x09\x09\x09If true, only packages that are dirty in PackagesToSave will be saved\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09\x09true on success, false on fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Save all packages.\nAssume all dirty packages should be saved and check out from source control (if enabled).\n\n@param               PackagesToSave                          The list of packages to save.  Both map and content packages are supported\n@param               bCheckDirty                                     If true, only packages that are dirty in PackagesToSave will be saved\n@return                                                                      true on success, false on fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SavePackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::EditorLoadingAndSavingUtils_eventSavePackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics
	{
		struct EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms
		{
			TArray<UPackage*> PackagesToSave;
			bool bOnlyDirty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PackagesToSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToSave;
		static void NewProp_bOnlyDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_Inner = { "PackagesToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave = { "PackagesToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms, PackagesToSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms*)Obj)->bOnlyDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty = { "bOnlyDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_PackagesToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_bOnlyDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09* Save all packages. Optionally prompting the user to select which packages to save.\n\x09* Prompt the user to select which dirty packages to save and check them out from source control (if enabled).\n\x09*\n\x09* @param\x09\x09PackagesToSave\x09\x09\x09\x09The list of packages to save.  Both map and content packages are supported\n\x09* @param\x09\x09""bCheckDirty\x09\x09\x09\x09\x09If true, only packages that are dirty in PackagesToSave will be saved\n\x09* @return\x09\x09\x09\x09\x09\x09\x09\x09\x09true on success, false on fail.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Save all packages. Optionally prompting the user to select which packages to save.\nPrompt the user to select which dirty packages to save and check them out from source control (if enabled).\n\n@param                PackagesToSave                          The list of packages to save.  Both map and content packages are supported\n@param                bCheckDirty                                     If true, only packages that are dirty in PackagesToSave will be saved\n@return                                                                       true on success, false on fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "SavePackagesWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::EditorLoadingAndSavingUtils_eventSavePackagesWithDialog_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics
	{
		struct EditorLoadingAndSavingUtils_eventUnloadPackages_Parms
		{
			TArray<UPackage*> PackagesToUnload;
			bool bOutAnyPackagesUnloaded;
			FText OutErrorMessage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PackagesToUnload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToUnload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToUnload;
		static void NewProp_bOutAnyPackagesUnloaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutAnyPackagesUnloaded;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_Inner = { "PackagesToUnload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload = { "PackagesToUnload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms, PackagesToUnload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_MetaData)) };
	void Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded_SetBit(void* Obj)
	{
		((EditorLoadingAndSavingUtils_eventUnloadPackages_Parms*)Obj)->bOutAnyPackagesUnloaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded = { "bOutAnyPackagesUnloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms), &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLoadingAndSavingUtils_eventUnloadPackages_Parms, OutErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_PackagesToUnload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_bOutAnyPackagesUnloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::NewProp_OutErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Editor Loading and Saving" },
		{ "Comment", "/**\n\x09* Unloads a list of packages\n\x09*\n\x09* @param PackagesToUnload Array of packages to unload.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "Unloads a list of packages\n\n@param PackagesToUnload Array of packages to unload." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLoadingAndSavingUtils, nullptr, "UnloadPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::EditorLoadingAndSavingUtils_eventUnloadPackages_Parms), Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorLoadingAndSavingUtils);
	UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister()
	{
		return UEditorLoadingAndSavingUtils::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ExportScene, "ExportScene" }, // 1006883159
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyContentPackages, "GetDirtyContentPackages" }, // 1794650173
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_GetDirtyMapPackages, "GetDirtyMapPackages" }, // 2039094500
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ImportScene, "ImportScene" }, // 559936171
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMap, "LoadMap" }, // 1741772189
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_LoadMapWithDialog, "LoadMapWithDialog" }, // 3604405609
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewBlankMap, "NewBlankMap" }, // 3745299063
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_NewMapFromTemplate, "NewMapFromTemplate" }, // 718083775
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_ReloadPackages, "ReloadPackages" }, // 1517349536
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveCurrentLevel, "SaveCurrentLevel" }, // 1090966600
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackages, "SaveDirtyPackages" }, // 39179691
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveDirtyPackagesWithDialog, "SaveDirtyPackagesWithDialog" }, // 518395505
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SaveMap, "SaveMap" }, // 3859220554
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackages, "SavePackages" }, // 3168538986
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_SavePackagesWithDialog, "SavePackagesWithDialog" }, // 2565291656
		{ &Z_Construct_UFunction_UEditorLoadingAndSavingUtils_UnloadPackages, "UnloadPackages" }, // 1884406788
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is a wrapper for editor loading and saving functionality\n * It is meant to contain only functions that can be executed in script (but are also allowed in C++).\n * It is separated from FEditorFileUtils to ensure new easier to use methods can be created without breaking FEditorFileUtils backwards compatibility\n * However this should be used in place of FEditorFileUtils wherever possible as the goal is to deprecate FEditorFileUtils eventually\n */" },
		{ "IncludePath", "FileHelpers.h" },
		{ "ModuleRelativePath", "Public/FileHelpers.h" },
		{ "ToolTip", "This class is a wrapper for editor loading and saving functionality\nIt is meant to contain only functions that can be executed in script (but are also allowed in C++).\nIt is separated from FEditorFileUtils to ensure new easier to use methods can be created without breaking FEditorFileUtils backwards compatibility\nHowever this should be used in place of FEditorFileUtils wherever possible as the goal is to deprecate FEditorFileUtils eventually" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLoadingAndSavingUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::ClassParams = {
		&UEditorLoadingAndSavingUtils::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils()
	{
		if (!Z_Registration_Info_UClass_UEditorLoadingAndSavingUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorLoadingAndSavingUtils.OuterSingleton, Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorLoadingAndSavingUtils.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorLoadingAndSavingUtils>()
	{
		return UEditorLoadingAndSavingUtils::StaticClass();
	}
	UEditorLoadingAndSavingUtils::UEditorLoadingAndSavingUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLoadingAndSavingUtils);
	UEditorLoadingAndSavingUtils::~UEditorLoadingAndSavingUtils() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorLoadingAndSavingUtils, UEditorLoadingAndSavingUtils::StaticClass, TEXT("UEditorLoadingAndSavingUtils"), &Z_Registration_Info_UClass_UEditorLoadingAndSavingUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorLoadingAndSavingUtils), 2211620610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_1314484730(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
