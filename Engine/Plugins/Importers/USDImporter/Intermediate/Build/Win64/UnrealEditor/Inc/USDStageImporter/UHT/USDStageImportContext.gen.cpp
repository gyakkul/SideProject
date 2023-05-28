// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDStageImportContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageImportContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDStageImporter();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache2_NoRegister();
	USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageImportOptions_NoRegister();
	USDSTAGEIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageImportContext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdStageImportContext;
class UScriptStruct* FUsdStageImportContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdStageImportContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdStageImportContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdStageImportContext, (UObject*)Z_Construct_UPackage__Script_USDStageImporter(), TEXT("UsdStageImportContext"));
	}
	return Z_Registration_Info_UScriptStruct_UsdStageImportContext.OuterSingleton;
}
template<> USDSTAGEIMPORTER_API UScriptStruct* StaticStruct<FUsdStageImportContext>()
{
	return FUsdStageImportContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdStageImportContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdStageImportContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_SceneActor_MetaData[] = {
		{ "Comment", "/** Spawned actor that contains the imported scene as a child hierarchy */" },
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
		{ "ToolTip", "Spawned actor that contains the imported scene as a child hierarchy" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_SceneActor = { "SceneActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, SceneActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_SceneActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_SceneActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Comment", "/** Name to use when importing a single mesh */" },
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
		{ "ToolTip", "Name to use when importing a single mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_PackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_FilePath_MetaData[] = {
		{ "Comment", "/** Path of the main usd file to import */" },
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
		{ "ToolTip", "Path of the main usd file to import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, ImportOptions), Z_Construct_UClass_UUsdStageImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportedAsset_MetaData[] = {
		{ "Comment", "/** Keep track of the last imported object so that we have something valid to return to upstream code that calls the import factories */" },
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
		{ "ToolTip", "Keep track of the last imported object so that we have something valid to return to upstream code that calls the import factories" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportedAsset = { "ImportedAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, ImportedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportedAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportedAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_AssetCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageImportContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_AssetCache = { "AssetCache", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageImportContext, AssetCache), Z_Construct_UClass_UUsdAssetCache2_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_AssetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_AssetCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_SceneActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_ImportedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewProp_AssetCache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDStageImporter,
		nullptr,
		&NewStructOps,
		"UsdStageImportContext",
		sizeof(FUsdStageImportContext),
		alignof(FUsdStageImportContext),
		Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsdStageImportContext()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdStageImportContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdStageImportContext.InnerSingleton, Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdStageImportContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportContext_h_Statics::ScriptStructInfo[] = {
		{ FUsdStageImportContext::StaticStruct, Z_Construct_UScriptStruct_FUsdStageImportContext_Statics::NewStructOps, TEXT("UsdStageImportContext"), &Z_Registration_Info_UScriptStruct_UsdStageImportContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdStageImportContext), 3124301057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportContext_h_4284751352(TEXT("/Script/USDStageImporter"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
