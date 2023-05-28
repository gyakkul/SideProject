// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetEditorMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorMessages() {}
// Cross Module References
	UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset();
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset;
class UScriptStruct* FAssetEditorRequestOpenAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset, (UObject*)Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("AssetEditorRequestOpenAsset"));
	}
	return Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.OuterSingleton;
}
template<> UNREALEDMESSAGES_API UScriptStruct* StaticStruct<FAssetEditorRequestOpenAsset>()
{
	return FAssetEditorRequestOpenAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for opening an asset in the asset browser.\n */" },
		{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
		{ "ToolTip", "Implements a message for opening an asset in the asset browser." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorRequestOpenAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**\n\x09 * Holds the name of the asset to open.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AssetEditorMessages.h" },
		{ "ToolTip", "Holds the name of the asset to open." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetEditorRequestOpenAsset, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewProp_AssetName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
		nullptr,
		&NewStructOps,
		"AssetEditorRequestOpenAsset",
		sizeof(FAssetEditorRequestOpenAsset),
		alignof(FAssetEditorRequestOpenAsset),
		Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.InnerSingleton, Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics::ScriptStructInfo[] = {
		{ FAssetEditorRequestOpenAsset::StaticStruct, Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset_Statics::NewStructOps, TEXT("AssetEditorRequestOpenAsset"), &Z_Registration_Info_UScriptStruct_AssetEditorRequestOpenAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetEditorRequestOpenAsset), 1650071810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_3149925199(TEXT("/Script/UnrealEdMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_AssetEditorMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
