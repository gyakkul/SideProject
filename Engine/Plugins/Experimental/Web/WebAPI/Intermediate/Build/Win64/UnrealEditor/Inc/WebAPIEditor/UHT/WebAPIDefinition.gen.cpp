// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIDefinition.h"
#include "CodeGen/WebAPICodeGeneratorSettings.h"
#include "WebAPIProviderSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIDefinition();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIDefinition_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchema_NoRegister();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPIProviderSettings();
// End Cross Module References
	void UWebAPIDefinition::StaticRegisterNativesUWebAPIDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIDefinition);
	UClass* Z_Construct_UClass_UWebAPIDefinition_NoRegister()
	{
		return UWebAPIDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProviderSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorSettings;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedDataCache_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ImportedDataCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedDataCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImportedDataCache;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WebAPISchema_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WebAPISchema;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinition_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "ImportSettings" },
		{ "Comment", "/** The asset containing various options and the schema itself. */" },
		{ "IncludePath", "WebAPIDefinition.h" },
		{ "ModuleRelativePath", "Public/WebAPIDefinition.h" },
		{ "ToolTip", "The asset containing various options and the schema itself." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this definition. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebAPIDefinition.h" },
		{ "ToolTip", "Importing data and options used for this definition." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016040802080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDefinition, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ProviderSettings_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Provider" },
		{ "Comment", "/** Settings for the WebAPI provider. */" },
		{ "ModuleRelativePath", "Public/WebAPIDefinition.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for the WebAPI provider." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ProviderSettings = { "ProviderSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDefinition, ProviderSettings), Z_Construct_UScriptStruct_FWebAPIProviderSettings, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ProviderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ProviderSettings_MetaData)) }; // 3959107114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_GeneratorSettings_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Generator" },
		{ "Comment", "/** Settings for code generation. */" },
		{ "ModuleRelativePath", "Public/WebAPIDefinition.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for code generation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_GeneratorSettings = { "GeneratorSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDefinition, GeneratorSettings), Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_GeneratorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_GeneratorSettings_MetaData)) }; // 3535293876
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_ValueProp = { "ImportedDataCache", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_Key_KeyProp = { "ImportedDataCache_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_MetaData[] = {
		{ "Comment", "/** Optional data store, ie. schema file contents. */" },
		{ "ModuleRelativePath", "Public/WebAPIDefinition.h" },
		{ "ToolTip", "Optional data store, ie. schema file contents." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache = { "ImportedDataCache", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDefinition, ImportedDataCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_WebAPISchema_MetaData[] = {
		{ "Comment", "/** The schema written by the provider. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebAPIDefinition.h" },
		{ "ToolTip", "The schema written by the provider." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_WebAPISchema = { "WebAPISchema", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDefinition, WebAPISchema), Z_Construct_UClass_UWebAPISchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_WebAPISchema_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_WebAPISchema_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIDefinition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ProviderSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_GeneratorSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_ImportedDataCache,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDefinition_Statics::NewProp_WebAPISchema,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIDefinition_Statics::ClassParams = {
		&UWebAPIDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIDefinition()
	{
		if (!Z_Registration_Info_UClass_UWebAPIDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIDefinition.OuterSingleton, Z_Construct_UClass_UWebAPIDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIDefinition.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIDefinition>()
	{
		return UWebAPIDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIDefinition);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIDefinition, UWebAPIDefinition::StaticClass, TEXT("UWebAPIDefinition"), &Z_Registration_Info_UClass_UWebAPIDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIDefinition), 2804319275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIDefinition_h_1427088848(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
