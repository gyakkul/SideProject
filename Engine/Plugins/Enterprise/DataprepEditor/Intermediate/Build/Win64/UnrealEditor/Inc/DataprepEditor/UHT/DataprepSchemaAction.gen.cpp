// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SchemaActions/DataprepSchemaAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepSchemaAction() {}
// Cross Module References
	DATAPREPEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepSchemaAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_DataprepEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FDataprepSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDataprepSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataprepSchemaAction;
class UScriptStruct* FDataprepSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataprepSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataprepSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataprepSchemaAction, (UObject*)Z_Construct_UPackage__Script_DataprepEditor(), TEXT("DataprepSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_DataprepSchemaAction.OuterSingleton;
}
template<> DATAPREPEDITOR_API UScriptStruct* StaticStruct<FDataprepSchemaAction>()
{
	return FDataprepSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The DataprepSchemaAction is the data structure used to populate the Dataprep action menu and the Dataprep palette\n */" },
		{ "ModuleRelativePath", "Private/SchemaActions/DataprepSchemaAction.h" },
		{ "ToolTip", "The DataprepSchemaAction is the data structure used to populate the Dataprep action menu and the Dataprep palette" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataprepSchemaAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DataprepSchemaAction",
		sizeof(FDataprepSchemaAction),
		alignof(FDataprepSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataprepSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_DataprepSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataprepSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataprepSchemaAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_SchemaActions_DataprepSchemaAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_SchemaActions_DataprepSchemaAction_h_Statics::ScriptStructInfo[] = {
		{ FDataprepSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FDataprepSchemaAction_Statics::NewStructOps, TEXT("DataprepSchemaAction"), &Z_Registration_Info_UScriptStruct_DataprepSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataprepSchemaAction), 118471151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_SchemaActions_DataprepSchemaAction_h_1370983940(TEXT("/Script/DataprepEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_SchemaActions_DataprepSchemaAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_SchemaActions_DataprepSchemaAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
