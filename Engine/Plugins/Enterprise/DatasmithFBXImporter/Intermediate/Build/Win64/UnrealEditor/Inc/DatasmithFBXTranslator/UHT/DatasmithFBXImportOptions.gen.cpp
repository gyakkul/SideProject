// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithFBXImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithFBXImportOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	DATASMITHFBXTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithFBXImportOptions();
	DATASMITHFBXTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithFBXImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithFBXTranslator();
// End Cross Module References
	void UDatasmithFBXImportOptions::StaticRegisterNativesUDatasmithFBXImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithFBXImportOptions);
	UClass* Z_Construct_UClass_UDatasmithFBXImportOptions_NoRegister()
	{
		return UDatasmithFBXImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithFBXImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureDirs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureDirs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureDirs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithFBXTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "DatasmithFBXImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithFBXImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs_Inner = { "TextureDirs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Texture folders" },
		{ "ModuleRelativePath", "Public/DatasmithFBXImportOptions.h" },
		{ "ToolTip", "Where to look for textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs = { "TextureDirs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFBXImportOptions, TextureDirs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::NewProp_TextureDirs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithFBXImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::ClassParams = {
		&UDatasmithFBXImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithFBXImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithFBXImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithFBXImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithFBXImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithFBXImportOptions.OuterSingleton;
	}
	template<> DATASMITHFBXTRANSLATOR_API UClass* StaticClass<UDatasmithFBXImportOptions>()
	{
		return UDatasmithFBXImportOptions::StaticClass();
	}
	UDatasmithFBXImportOptions::UDatasmithFBXImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithFBXImportOptions);
	UDatasmithFBXImportOptions::~UDatasmithFBXImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithFBXImportOptions, UDatasmithFBXImportOptions::StaticClass, TEXT("UDatasmithFBXImportOptions"), &Z_Registration_Info_UClass_UDatasmithFBXImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithFBXImportOptions), 209084632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_30974835(TEXT("/Script/DatasmithFBXTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithFBXTranslator_Public_DatasmithFBXImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
