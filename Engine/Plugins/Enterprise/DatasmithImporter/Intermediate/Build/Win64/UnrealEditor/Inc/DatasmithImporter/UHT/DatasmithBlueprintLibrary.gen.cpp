// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithImportOptions_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithSceneElement();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithSceneElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithSceneElementBase();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_NoRegister();
	DATASMITHIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult;
class UScriptStruct* FDatasmithImportFactoryCreateFileResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult, (UObject*)Z_Construct_UPackage__Script_DatasmithImporter(), TEXT("DatasmithImportFactoryCreateFileResult"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult.OuterSingleton;
}
template<> DATASMITHIMPORTER_API UScriptStruct* StaticStruct<FDatasmithImportFactoryCreateFileResult>()
{
	return FDatasmithImportFactoryCreateFileResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedActors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportSucceed_MetaData[];
#endif
		static void NewProp_bImportSucceed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportSucceed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Scene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithImportFactoryCreateFileResult>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors_Inner = { "ImportedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors_MetaData[] = {
		{ "Category", "Imported" },
		{ "Comment", "/** List of all created actors if user requires to use multiple actors. The root actor will be the first element of the array. */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "List of all created actors if user requires to use multiple actors. The root actor will be the first element of the array." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors = { "ImportedActors", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithImportFactoryCreateFileResult, ImportedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes_Inner = { "ImportedMeshes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes_MetaData[] = {
		{ "Category", "Imported" },
		{ "Comment", "/** Meshes created during the import process */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Meshes created during the import process" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes = { "ImportedMeshes", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithImportFactoryCreateFileResult, ImportedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed_SetBit(void* Obj)
	{
		((FDatasmithImportFactoryCreateFileResult*)Obj)->bImportSucceed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed = { "bImportSucceed", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDatasmithImportFactoryCreateFileResult), &Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithImportFactoryCreateFileResult, Scene), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_Scene_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_ImportedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_bImportSucceed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewProp_Scene,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
		nullptr,
		&NewStructOps,
		"DatasmithImportFactoryCreateFileResult",
		sizeof(FDatasmithImportFactoryCreateFileResult),
		alignof(FDatasmithImportFactoryCreateFileResult),
		Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execDestroyScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execGetImportOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithImportOptions**)Z_Param__Result=P_THIS->GetImportOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execGetAllOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UClass*,UObject*>*)Z_Param__Result=P_THIS->GetAllOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execGetOptions)
	{
		P_GET_OBJECT(UClass,Z_Param_OptionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOptions(Z_Param_OptionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execReimportScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDatasmithImportFactoryCreateFileResult*)Z_Param__Result=P_THIS->ReimportScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execImportScenes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDatasmithImportFactoryCreateFileResult>*)Z_Param__Result=P_THIS->ImportScenes(Z_Param_DestinationFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execImportScene)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDatasmithImportFactoryCreateFileResult*)Z_Param__Result=P_THIS->ImportScene(Z_Param_DestinationFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execTranslateScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TranslateScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execGetExistingDatasmithScene)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithSceneElement**)Z_Param__Result=UDatasmithSceneElement::GetExistingDatasmithScene(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execConstructDatasmithSceneFromCADFiles)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithSceneElement**)Z_Param__Result=UDatasmithSceneElement::ConstructDatasmithSceneFromCADFiles(Z_Param_Out_FilePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execConstructDatasmithSceneFromSourceUri)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceUri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithSceneElement**)Z_Param__Result=UDatasmithSceneElement::ConstructDatasmithSceneFromSourceUri(Z_Param_SourceUri);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElement::execConstructDatasmithSceneFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithSceneElement**)Z_Param__Result=UDatasmithSceneElement::ConstructDatasmithSceneFromFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	void UDatasmithSceneElement::StaticRegisterNativesUDatasmithSceneElement()
	{
		UClass* Class = UDatasmithSceneElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructDatasmithSceneFromCADFiles", &UDatasmithSceneElement::execConstructDatasmithSceneFromCADFiles },
			{ "ConstructDatasmithSceneFromFile", &UDatasmithSceneElement::execConstructDatasmithSceneFromFile },
			{ "ConstructDatasmithSceneFromSourceUri", &UDatasmithSceneElement::execConstructDatasmithSceneFromSourceUri },
			{ "DestroyScene", &UDatasmithSceneElement::execDestroyScene },
			{ "GetAllOptions", &UDatasmithSceneElement::execGetAllOptions },
			{ "GetExistingDatasmithScene", &UDatasmithSceneElement::execGetExistingDatasmithScene },
			{ "GetImportOptions", &UDatasmithSceneElement::execGetImportOptions },
			{ "GetOptions", &UDatasmithSceneElement::execGetOptions },
			{ "ImportScene", &UDatasmithSceneElement::execImportScene },
			{ "ImportScenes", &UDatasmithSceneElement::execImportScenes },
			{ "ReimportScene", &UDatasmithSceneElement::execReimportScene },
			{ "TranslateScene", &UDatasmithSceneElement::execTranslateScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics
	{
		struct DatasmithSceneElement_eventConstructDatasmithSceneFromCADFiles_Parms
		{
			TArray<FString> FilePaths;
			UDatasmithSceneElement* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventConstructDatasmithSceneFromCADFiles_Parms, FilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventConstructDatasmithSceneFromCADFiles_Parms, ReturnValue), Z_Construct_UClass_UDatasmithSceneElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_FilePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith" },
		{ "Comment", "/**\n\x09 * Open set of CAD files as actors in a single datasmith scene\n\x09 * Importing set of files into single DatasmithScene asset(with ImportScene) is supported only for CAD files\n\x09 * @return\x09The opened DatasmithScene, that can be modified and can be imported.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Open set of CAD files as actors in a single datasmith scene\nImporting set of files into single DatasmithScene asset(with ImportScene) is supported only for CAD files\n@return      The opened DatasmithScene, that can be modified and can be imported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "ConstructDatasmithSceneFromCADFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::DatasmithSceneElement_eventConstructDatasmithSceneFromCADFiles_Parms), Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics
	{
		struct DatasmithSceneElement_eventConstructDatasmithSceneFromFile_Parms
		{
			FString FilePath;
			UDatasmithSceneElement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventConstructDatasmithSceneFromFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventConstructDatasmithSceneFromFile_Parms, ReturnValue), Z_Construct_UClass_UDatasmithSceneElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith" },
		{ "Comment", "/**\n\x09 * Open an existing UDatasmith file from disk.\n\x09 * @param\x09""FilePath UDatasmith file path to open. ie: c:/MyFolder/MyFiles.udatasmith\n\x09 * @return\x09The opened DatasmithScene, that can be modified and can be imported.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Open an existing UDatasmith file from disk.\n@param       FilePath UDatasmith file path to open. ie: c:/MyFolder/MyFiles.udatasmith\n@return      The opened DatasmithScene, that can be modified and can be imported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "ConstructDatasmithSceneFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::DatasmithSceneElement_eventConstructDatasmithSceneFromFile_Parms), Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics
	{
		struct DatasmithSceneElement_eventConstructDatasmithSceneFromSourceUri_Parms
		{
			FString SourceUri;
			UDatasmithSceneElement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceUri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceUri;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_SourceUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_SourceUri = { "SourceUri", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventConstructDatasmithSceneFromSourceUri_Parms, SourceUri), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_SourceUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_SourceUri_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventConstructDatasmithSceneFromSourceUri_Parms, ReturnValue), Z_Construct_UClass_UDatasmithSceneElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_SourceUri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith" },
		{ "Comment", "/**\n\x09 * Open an existing Datasmith source from the SourceUri.\n\x09 * @param\x09SourceUri Uri of the datasmith scene to open. ie: file://c:/MyFolder/MyFiles.udatasmith\n\x09 * @return\x09The opened DatasmithScene, that can be modified and can be imported.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Open an existing Datasmith source from the SourceUri.\n@param       SourceUri Uri of the datasmith scene to open. ie: file://c:/MyFolder/MyFiles.udatasmith\n@return      The opened DatasmithScene, that can be modified and can be imported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "ConstructDatasmithSceneFromSourceUri", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::DatasmithSceneElement_eventConstructDatasmithSceneFromSourceUri_Parms), Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Destroy reference to the udatasmith file. The Scene will no longer be available.\n\x09 * DestroyScene is called automatically after ImportScene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Destroy reference to the udatasmith file. The Scene will no longer be available.\nDestroyScene is called automatically after ImportScene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "DestroyScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics
	{
		struct DatasmithSceneElement_eventGetAllOptions_Parms
		{
			TMap<UClass*,UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventGetAllOptions_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * List all the options structures applicable on this scene\n\x09 * @return A map of options type to option object\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "List all the options structures applicable on this scene\n@return A map of options type to option object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "GetAllOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::DatasmithSceneElement_eventGetAllOptions_Parms), Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics
	{
		struct DatasmithSceneElement_eventGetExistingDatasmithScene_Parms
		{
			FString AssetPath;
			UDatasmithSceneElement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventGetExistingDatasmithScene_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventGetExistingDatasmithScene_Parms, ReturnValue), Z_Construct_UClass_UDatasmithSceneElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith" },
		{ "Comment", "/**\n\x09 * Open an existing DatasmithScene asset file from disk.\n\x09 * @param   AssetPath Path of the DFatasmithScene asset (eg. \"/Game/MyAsset\")\n\x09 * @return  The opened DatasmithScene, that can be modified and can be reimported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Open an existing DatasmithScene asset file from disk.\n@param   AssetPath Path of the DFatasmithScene asset (eg. \"/Game/MyAsset\")\n@return  The opened DatasmithScene, that can be modified and can be reimported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "GetExistingDatasmithScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::DatasmithSceneElement_eventGetExistingDatasmithScene_Parms), Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics
	{
		struct DatasmithSceneElement_eventGetImportOptions_Parms
		{
			UDatasmithImportOptions* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventGetImportOptions_Parms, ReturnValue), Z_Construct_UClass_UDatasmithImportOptions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetImportOptions is deprecated, use GetOptions instead." },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "GetImportOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::DatasmithSceneElement_eventGetImportOptions_Parms), Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics
	{
		struct DatasmithSceneElement_eventGetOptions_Parms
		{
			UClass* OptionType;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_OptionType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::NewProp_OptionType = { "OptionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventGetOptions_Parms, OptionType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventGetOptions_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::NewProp_OptionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Fetch the typed options for this scene\n\x09 * @param OptionType\x09Type of the option structure to get\n\x09 * @return The option structure found\n\x09 */" },
		{ "CPP_Default_OptionType", "None" },
		{ "DeterminesOutputType", "OptionType" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Fetch the typed options for this scene\n@param OptionType    Type of the option structure to get\n@return The option structure found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "GetOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::DatasmithSceneElement_eventGetOptions_Parms), Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_GetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_GetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics
	{
		struct DatasmithSceneElement_eventImportScene_Parms
		{
			FString DestinationFolder;
			FDatasmithImportFactoryCreateFileResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFolder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_DestinationFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_DestinationFolder = { "DestinationFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventImportScene_Parms, DestinationFolder), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_DestinationFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_DestinationFolder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventImportScene_Parms, ReturnValue), Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult, METADATA_PARAMS(nullptr, 0) }; // 1545012325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_DestinationFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Import a Datasmith Scene created with ConstructDatasmithSceneFromFile.\n\x09 * @param\x09""DestinationFolder\x09""Destination of where you want the asset to be imported. ie: /Game/MyFolder1\n\x09 * @return\x09""A structure that contains the created actor or the blueprint actor depending of the options specified at the import.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Import a Datasmith Scene created with ConstructDatasmithSceneFromFile.\n@param       DestinationFolder       Destination of where you want the asset to be imported. ie: /Game/MyFolder1\n@return      A structure that contains the created actor or the blueprint actor depending of the options specified at the import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "ImportScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::DatasmithSceneElement_eventImportScene_Parms), Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_ImportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_ImportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics
	{
		struct DatasmithSceneElement_eventImportScenes_Parms
		{
			FString DestinationFolder;
			TArray<FDatasmithImportFactoryCreateFileResult> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFolder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_DestinationFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_DestinationFolder = { "DestinationFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventImportScenes_Parms, DestinationFolder), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_DestinationFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_DestinationFolder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult, METADATA_PARAMS(nullptr, 0) }; // 1545012325
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventImportScenes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1545012325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_DestinationFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Import a Datasmith Scene created with ConstructDatasmithSceneFromFiles into an array of scenes.\n\x09 * @param\x09""DestinationFolder\x09""Destination of where you want the asset to be imported. ie: /Game/MyFolder1\n\x09 * @return\x09""An array of import results corresponding to array of input files\n\x09 **/" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Import a Datasmith Scene created with ConstructDatasmithSceneFromFiles into an array of scenes.\n@param       DestinationFolder       Destination of where you want the asset to be imported. ie: /Game/MyFolder1\n@return      An array of import results corresponding to array of input files" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "ImportScenes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::DatasmithSceneElement_eventImportScenes_Parms), Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics
	{
		struct DatasmithSceneElement_eventReimportScene_Parms
		{
			FDatasmithImportFactoryCreateFileResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElement_eventReimportScene_Parms, ReturnValue), Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult, METADATA_PARAMS(nullptr, 0) }; // 1545012325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Reimport a scene opened with GetExistingDatasmithScene\n\x09 * @return\x09""A structure that contains the created actor or the blueprint actor depending of the options specified at the import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Reimport a scene opened with GetExistingDatasmithScene\n@return      A structure that contains the created actor or the blueprint actor depending of the options specified at the import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "ReimportScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::DatasmithSceneElement_eventReimportScene_Parms), Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics
	{
		struct DatasmithSceneElement_eventTranslateScene_Parms
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
	void Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithSceneElement_eventTranslateScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithSceneElement_eventTranslateScene_Parms), &Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Datasmith" },
		{ "Comment", "/**\n\x09 * Trigger the translation phase, which populates the DatasmithScene.\n\x09 * note that options should have been set before that and any modification to the scene made prior will be lost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Trigger the translation phase, which populates the DatasmithScene.\nnote that options should have been set before that and any modification to the scene made prior will be lost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElement, nullptr, "TranslateScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::DatasmithSceneElement_eventTranslateScene_Parms), Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSceneElement);
	UClass* Z_Construct_UClass_UDatasmithSceneElement_NoRegister()
	{
		return UDatasmithSceneElement::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSceneElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSceneElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneElementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithSceneElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromCADFiles, "ConstructDatasmithSceneFromCADFiles" }, // 1998911191
		{ &Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromFile, "ConstructDatasmithSceneFromFile" }, // 2206620009
		{ &Z_Construct_UFunction_UDatasmithSceneElement_ConstructDatasmithSceneFromSourceUri, "ConstructDatasmithSceneFromSourceUri" }, // 3322290600
		{ &Z_Construct_UFunction_UDatasmithSceneElement_DestroyScene, "DestroyScene" }, // 1786231530
		{ &Z_Construct_UFunction_UDatasmithSceneElement_GetAllOptions, "GetAllOptions" }, // 3728656547
		{ &Z_Construct_UFunction_UDatasmithSceneElement_GetExistingDatasmithScene, "GetExistingDatasmithScene" }, // 554762862
		{ &Z_Construct_UFunction_UDatasmithSceneElement_GetImportOptions, "GetImportOptions" }, // 2343543733
		{ &Z_Construct_UFunction_UDatasmithSceneElement_GetOptions, "GetOptions" }, // 3279579615
		{ &Z_Construct_UFunction_UDatasmithSceneElement_ImportScene, "ImportScene" }, // 3974291412
		{ &Z_Construct_UFunction_UDatasmithSceneElement_ImportScenes, "ImportScenes" }, // 2375751397
		{ &Z_Construct_UFunction_UDatasmithSceneElement_ReimportScene, "ReimportScene" }, // 3313800156
		{ &Z_Construct_UFunction_UDatasmithSceneElement_TranslateScene, "TranslateScene" }, // 2698093913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSceneElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneElement_Statics::ClassParams = {
		&UDatasmithSceneElement::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSceneElement()
	{
		if (!Z_Registration_Info_UClass_UDatasmithSceneElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSceneElement.OuterSingleton, Z_Construct_UClass_UDatasmithSceneElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithSceneElement.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithSceneElement>()
	{
		return UDatasmithSceneElement::StaticClass();
	}
	UDatasmithSceneElement::UDatasmithSceneElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneElement);
	UDatasmithSceneElement::~UDatasmithSceneElement() {}
	DEFINE_FUNCTION(UDatasmithStaticMeshBlueprintLibrary::execSetupStaticLighting)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Objects);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LightmapResolutionIdealRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithStaticMeshBlueprintLibrary::SetupStaticLighting(Z_Param_Out_Objects,Z_Param_bApplyChanges,Z_Param_bGenerateLightmapUVs,Z_Param_LightmapResolutionIdealRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithStaticMeshBlueprintLibrary::execComputeLightmapResolution)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Objects);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IdealRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithStaticMeshBlueprintLibrary::ComputeLightmapResolution(Z_Param_Out_Objects,Z_Param_bApplyChanges,Z_Param_IdealRatio);
		P_NATIVE_END;
	}
	void UDatasmithStaticMeshBlueprintLibrary::StaticRegisterNativesUDatasmithStaticMeshBlueprintLibrary()
	{
		UClass* Class = UDatasmithStaticMeshBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeLightmapResolution", &UDatasmithStaticMeshBlueprintLibrary::execComputeLightmapResolution },
			{ "SetupStaticLighting", &UDatasmithStaticMeshBlueprintLibrary::execSetupStaticLighting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics
	{
		struct DatasmithStaticMeshBlueprintLibrary_eventComputeLightmapResolution_Parms
		{
			TArray<UObject*> Objects;
			bool bApplyChanges;
			float IdealRatio;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithStaticMeshBlueprintLibrary_eventComputeLightmapResolution_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects_MetaData)) };
	void Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((DatasmithStaticMeshBlueprintLibrary_eventComputeLightmapResolution_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithStaticMeshBlueprintLibrary_eventComputeLightmapResolution_Parms), &Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_IdealRatio = { "IdealRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithStaticMeshBlueprintLibrary_eventComputeLightmapResolution_Parms, IdealRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_Objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::NewProp_IdealRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Static Mesh" },
		{ "Comment", "/**\n\x09 * Sets the proper lightmap resolution to get the desired lightmap density ratio\n\x09 *\n\x09 * @param\x09Objects\x09\x09\x09\x09\x09List of static meshes and static mesh actors to update.\n\x09 * @param\x09""bApplyChanges\x09\x09\x09Indicates if changes must be apply or not.\n\x09 * @param\x09IdealRatio\x09\x09\x09\x09The desired lightmap density ratio\n\x09 */" },
		{ "CPP_Default_IdealRatio", "0.200000" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Sets the proper lightmap resolution to get the desired lightmap density ratio\n\n@param       Objects                                 List of static meshes and static mesh actors to update.\n@param       bApplyChanges                   Indicates if changes must be apply or not.\n@param       IdealRatio                              The desired lightmap density ratio" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary, nullptr, "ComputeLightmapResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::DatasmithStaticMeshBlueprintLibrary_eventComputeLightmapResolution_Parms), Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics
	{
		struct DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms
		{
			TArray<UObject*> Objects;
			bool bApplyChanges;
			bool bGenerateLightmapUVs;
			float LightmapResolutionIdealRatio;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightmapResolutionIdealRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects_MetaData)) };
	void Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms), &Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms), &Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_LightmapResolutionIdealRatio = { "LightmapResolutionIdealRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms, LightmapResolutionIdealRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_Objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::NewProp_LightmapResolutionIdealRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Static Mesh" },
		{ "Comment", "/**\n\x09 * Setup the Lightmap UVs settings to enable or disable the lightmap generation on the static meshes found in the Assets list\n\x09 *\n\x09 * @param\x09""Assets\x09\x09\x09\x09\x09\x09\x09List of objects to set the generate lightmap uvs flag on. Only Static Meshes and Static Mesh Components will be affected.\n\x09 * @param\x09""bApplyChanges\x09\x09\x09\x09\x09Indicates if changes must be apply or not.\n\x09 * @param\x09""bGenerateLightmapUVs\x09\x09\x09The value to set for the generate lightmap uvs flag.\n\x09 * @param\x09LightmapResolutionIdealRatio\x09The desired lightmap density ratio\n\x09 */" },
		{ "CPP_Default_LightmapResolutionIdealRatio", "0.200000" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ToolTip", "Setup the Lightmap UVs settings to enable or disable the lightmap generation on the static meshes found in the Assets list\n\n@param       Assets                                                  List of objects to set the generate lightmap uvs flag on. Only Static Meshes and Static Mesh Components will be affected.\n@param       bApplyChanges                                   Indicates if changes must be apply or not.\n@param       bGenerateLightmapUVs                    The value to set for the generate lightmap uvs flag.\n@param       LightmapResolutionIdealRatio    The desired lightmap density ratio" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary, nullptr, "SetupStaticLighting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::DatasmithStaticMeshBlueprintLibrary_eventSetupStaticLighting_Parms), Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshBlueprintLibrary);
	UClass* Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_NoRegister()
	{
		return UDatasmithStaticMeshBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_ComputeLightmapResolution, "ComputeLightmapResolution" }, // 51528433
		{ &Z_Construct_UFunction_UDatasmithStaticMeshBlueprintLibrary_SetupStaticLighting, "SetupStaticLighting" }, // 1629932487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatasmithBlueprintLibrary.h" },
		{ "ScriptName", "DatasmithStaticMeshLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::ClassParams = {
		&UDatasmithStaticMeshBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStaticMeshBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStaticMeshBlueprintLibrary.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithStaticMeshBlueprintLibrary>()
	{
		return UDatasmithStaticMeshBlueprintLibrary::StaticClass();
	}
	UDatasmithStaticMeshBlueprintLibrary::UDatasmithStaticMeshBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshBlueprintLibrary);
	UDatasmithStaticMeshBlueprintLibrary::~UDatasmithStaticMeshBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithImportFactoryCreateFileResult::StaticStruct, Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics::NewStructOps, TEXT("DatasmithImportFactoryCreateFileResult"), &Z_Registration_Info_UScriptStruct_DatasmithImportFactoryCreateFileResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithImportFactoryCreateFileResult), 1545012325U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSceneElement, UDatasmithSceneElement::StaticClass, TEXT("UDatasmithSceneElement"), &Z_Registration_Info_UClass_UDatasmithSceneElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSceneElement), 4030787052U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary, UDatasmithStaticMeshBlueprintLibrary::StaticClass, TEXT("UDatasmithStaticMeshBlueprintLibrary"), &Z_Registration_Info_UClass_UDatasmithStaticMeshBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshBlueprintLibrary), 3822319569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_3582651583(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
