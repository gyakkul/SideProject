// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraphTypes() {}
// Cross Module References
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphNodeClassData();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphNodeClassData;
class UScriptStruct* FGraphNodeClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphNodeClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphNodeClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphNodeClassData, (UObject*)Z_Construct_UPackage__Script_AIGraph(), TEXT("GraphNodeClassData"));
	}
	return Z_Registration_Info_UScriptStruct_GraphNodeClassData.OuterSingleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FGraphNodeClassData>()
{
	return FGraphNodeClassData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphNodeClassData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedClassPackage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedClassPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphNodeClassData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Comment", "/** path to class if it's not loaded yet */" },
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
		{ "ToolTip", "path to class if it's not loaded yet" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphNodeClassData, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage = { "GeneratedClassPackage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphNodeClassData, GeneratedClassPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** resolved name of class from asset data */" },
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
		{ "ToolTip", "resolved name of class from asset data" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphNodeClassData, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category_MetaData[] = {
		{ "Comment", "/** User-defined category for this class */" },
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
		{ "ToolTip", "User-defined category for this class" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphNodeClassData, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		nullptr,
		&NewStructOps,
		"GraphNodeClassData",
		sizeof(FGraphNodeClassData),
		alignof(FGraphNodeClassData),
		Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphNodeClassData()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphNodeClassData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphNodeClassData.InnerSingleton, Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphNodeClassData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphTypes_h_Statics::ScriptStructInfo[] = {
		{ FGraphNodeClassData::StaticStruct, Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewStructOps, TEXT("GraphNodeClassData"), &Z_Registration_Info_UScriptStruct_GraphNodeClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphNodeClassData), 1802589264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphTypes_h_3683087469(TEXT("/Script/AIGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
