// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/BPGraphClipboardData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPGraphClipboardData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphType();
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FBPGraphClipboardData();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPGraphClipboardData;
class UScriptStruct* FBPGraphClipboardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPGraphClipboardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPGraphClipboardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPGraphClipboardData, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("BPGraphClipboardData"));
	}
	return Z_Registration_Info_UScriptStruct_BPGraphClipboardData.OuterSingleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FBPGraphClipboardData>()
{
	return FBPGraphClipboardData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GraphType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OriginalBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodesString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A helper struct for copying a Blueprint Function to the clipboard */" },
		{ "ModuleRelativePath", "Private/BPGraphClipboardData.h" },
		{ "ToolTip", "A helper struct for copying a Blueprint Function to the clipboard" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPGraphClipboardData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphName_MetaData[] = {
		{ "Comment", "/** Name of the Graph */" },
		{ "ModuleRelativePath", "Private/BPGraphClipboardData.h" },
		{ "ToolTip", "Name of the Graph" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPGraphClipboardData, GraphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphType_MetaData[] = {
		{ "Comment", "/** The type of graph */" },
		{ "ModuleRelativePath", "Private/BPGraphClipboardData.h" },
		{ "ToolTip", "The type of graph" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPGraphClipboardData, GraphType), Z_Construct_UEnum_Engine_EGraphType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphType_MetaData)) }; // 443013784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_OriginalBlueprint_MetaData[] = {
		{ "Comment", "/** The original Blueprint that this function was copied from. Used to determine if nodes need to be created as functions or custom events */" },
		{ "ModuleRelativePath", "Private/BPGraphClipboardData.h" },
		{ "ToolTip", "The original Blueprint that this function was copied from. Used to determine if nodes need to be created as functions or custom events" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_OriginalBlueprint = { "OriginalBlueprint", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPGraphClipboardData, OriginalBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_OriginalBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_OriginalBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_NodesString_MetaData[] = {
		{ "Comment", "/** A string containing the exported text for the nodes in this function */" },
		{ "ModuleRelativePath", "Private/BPGraphClipboardData.h" },
		{ "ToolTip", "A string containing the exported text for the nodes in this function" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_NodesString = { "NodesString", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPGraphClipboardData, NodesString), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_NodesString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_NodesString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_GraphType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_OriginalBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewProp_NodesString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		nullptr,
		&NewStructOps,
		"BPGraphClipboardData",
		sizeof(FBPGraphClipboardData),
		alignof(FBPGraphClipboardData),
		Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPGraphClipboardData()
	{
		if (!Z_Registration_Info_UScriptStruct_BPGraphClipboardData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPGraphClipboardData.InnerSingleton, Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPGraphClipboardData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Private_BPGraphClipboardData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Private_BPGraphClipboardData_h_Statics::ScriptStructInfo[] = {
		{ FBPGraphClipboardData::StaticStruct, Z_Construct_UScriptStruct_FBPGraphClipboardData_Statics::NewStructOps, TEXT("BPGraphClipboardData"), &Z_Registration_Info_UScriptStruct_BPGraphClipboardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPGraphClipboardData), 1963306097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Private_BPGraphClipboardData_h_3037491464(TEXT("/Script/Kismet"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Private_BPGraphClipboardData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Private_BPGraphClipboardData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
