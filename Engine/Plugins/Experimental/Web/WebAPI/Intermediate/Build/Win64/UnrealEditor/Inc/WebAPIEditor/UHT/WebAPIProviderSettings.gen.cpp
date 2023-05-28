// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIProviderSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIProviderSettings() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPIProviderSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPIProviderSettings;
class UScriptStruct* FWebAPIProviderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPIProviderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPIProviderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPIProviderSettings, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPIProviderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPIProviderSettings.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPIProviderSettings>()
{
	return FWebAPIProviderSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableArbitraryJsonPayloads_MetaData[];
#endif
		static void NewProp_bEnableArbitraryJsonPayloads_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableArbitraryJsonPayloads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTypeNameTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestTypeNameTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseTypeNameTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseTypeNameTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NestedPropertyTypeNameTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NestedPropertyTypeNameTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterTypeNameTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterTypeNameTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationObjectNameTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationObjectNameTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsetEnumValueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnsetEnumValueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArrayPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultArrayPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Encapsulates settings for WebAPI providers. */" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
		{ "ToolTip", "Encapsulates settings for WebAPI providers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPIProviderSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads_MetaData[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Enable this option to allow the user to supply arbitrary json data to any request without parameters. */" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
		{ "ToolTip", "Enable this option to allow the user to supply arbitrary json data to any request without parameters." },
	};
#endif
	void Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads_SetBit(void* Obj)
	{
		((FWebAPIProviderSettings*)Obj)->bEnableArbitraryJsonPayloads = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads = { "bEnableArbitraryJsonPayloads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWebAPIProviderSettings), &Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_RequestTypeNameTemplate_MetaData[] = {
		{ "Category", "Provider" },
		{ "Comment", "// @note: Templates are made to ensure uniqueness, changing them will probably break this constraint.\n" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
		{ "ToolTip", "@note: Templates are made to ensure uniqueness, changing them will probably break this constraint." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_RequestTypeNameTemplate = { "RequestTypeNameTemplate", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, RequestTypeNameTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_RequestTypeNameTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_RequestTypeNameTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ResponseTypeNameTemplate_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ResponseTypeNameTemplate = { "ResponseTypeNameTemplate", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, ResponseTypeNameTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ResponseTypeNameTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ResponseTypeNameTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_NestedPropertyTypeNameTemplate_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_NestedPropertyTypeNameTemplate = { "NestedPropertyTypeNameTemplate", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, NestedPropertyTypeNameTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_NestedPropertyTypeNameTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_NestedPropertyTypeNameTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ParameterTypeNameTemplate_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ParameterTypeNameTemplate = { "ParameterTypeNameTemplate", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, ParameterTypeNameTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ParameterTypeNameTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ParameterTypeNameTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_OperationObjectNameTemplate_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_OperationObjectNameTemplate = { "OperationObjectNameTemplate", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, OperationObjectNameTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_OperationObjectNameTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_OperationObjectNameTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_UnsetEnumValueName_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_UnsetEnumValueName = { "UnsetEnumValueName", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, UnsetEnumValueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_UnsetEnumValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_UnsetEnumValueName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultPropertyName_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultPropertyName = { "DefaultPropertyName", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, DefaultPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultArrayPropertyName_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Public/WebAPIProviderSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultArrayPropertyName = { "DefaultArrayPropertyName", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIProviderSettings, DefaultArrayPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultArrayPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultArrayPropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_bEnableArbitraryJsonPayloads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_RequestTypeNameTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ResponseTypeNameTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_NestedPropertyTypeNameTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_ParameterTypeNameTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_OperationObjectNameTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_UnsetEnumValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewProp_DefaultArrayPropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPIProviderSettings",
		sizeof(FWebAPIProviderSettings),
		alignof(FWebAPIProviderSettings),
		Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPIProviderSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPIProviderSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPIProviderSettings.InnerSingleton, Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPIProviderSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIProviderSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIProviderSettings_h_Statics::ScriptStructInfo[] = {
		{ FWebAPIProviderSettings::StaticStruct, Z_Construct_UScriptStruct_FWebAPIProviderSettings_Statics::NewStructOps, TEXT("WebAPIProviderSettings"), &Z_Registration_Info_UScriptStruct_WebAPIProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPIProviderSettings), 3959107114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIProviderSettings_h_2682456019(TEXT("/Script/WebAPIEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIProviderSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIProviderSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
