// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDUnrealAssetInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDUnrealAssetInfo() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdUnrealAssetInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo;
class UScriptStruct* FUsdUnrealAssetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdUnrealAssetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdUnrealAssetInfo>()
{
	return FUsdUnrealAssetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealContentPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealAssetType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealAssetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealExportTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealExportTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealEngineVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealEngineVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Metadata added to a prim to indicate it was exported from a particular Unreal asset\n */" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Metadata added to a prim to indicate it was exported from a particular Unreal asset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdUnrealAssetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Name of the Unreal asset\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Name of the Unreal asset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Filepath to the layer where the asset was exported to\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Filepath to the layer where the asset was exported to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Identifier string for the current asset version. Whenever the asset is updated inside Unreal, this will change\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Identifier string for the current asset version. Whenever the asset is updated inside Unreal, this will change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Path to the exported asset (e.g. \"/Game/MyMaterials/Red.Red\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Path to the exported asset (e.g. \"/Game/MyMaterials/Red.Red\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath = { "UnrealContentPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealContentPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Class name of the exported asset (e.g. \"StaticMesh\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Class name of the exported asset (e.g. \"StaticMesh\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType = { "UnrealAssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealAssetType), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// DateTime string of the moment of export (e.g. \"2022.06.17-14.19.54\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "DateTime string of the moment of export (e.g. \"2022.06.17-14.19.54\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime = { "UnrealExportTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealExportTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// Engine version string describing the engine that exported this asset (e.g. \"5.1.0-21000000+UE5\")\n" },
		{ "ModuleRelativePath", "Public/USDUnrealAssetInfo.h" },
		{ "ToolTip", "Engine version string describing the engine that exported this asset (e.g. \"5.1.0-21000000+UE5\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion = { "UnrealEngineVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdUnrealAssetInfo, UnrealEngineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealContentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealAssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealExportTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewProp_UnrealEngineVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		&NewStructOps,
		"UsdUnrealAssetInfo",
		sizeof(FUsdUnrealAssetInfo),
		alignof(FUsdUnrealAssetInfo),
		Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsdUnrealAssetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.InnerSingleton, Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics::ScriptStructInfo[] = {
		{ FUsdUnrealAssetInfo::StaticStruct, Z_Construct_UScriptStruct_FUsdUnrealAssetInfo_Statics::NewStructOps, TEXT("UsdUnrealAssetInfo"), &Z_Registration_Info_UScriptStruct_UsdUnrealAssetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdUnrealAssetInfo), 3937709393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDUnrealAssetInfo_h_2628555263(TEXT("/Script/USDClasses"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDUnrealAssetInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
