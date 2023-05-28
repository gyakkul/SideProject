// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithIFCImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithIFCImportOptions() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	DATASMITHIFCTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithIFCImportOptions();
	DATASMITHIFCTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithIFCImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithIFCTranslator();
// End Cross Module References
	void UDatasmithIFCImportOptions::StaticRegisterNativesUDatasmithIFCImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithIFCImportOptions);
	UClass* Z_Construct_UClass_UDatasmithIFCImportOptions_NoRegister()
	{
		return UDatasmithIFCImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithIFCImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithIFCTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "DatasmithIFCImportOptions.h" },
		{ "ModuleRelativePath", "Private/DatasmithIFCImportOptions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithIFCImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::ClassParams = {
		&UDatasmithIFCImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithIFCImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithIFCImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithIFCImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithIFCImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithIFCImportOptions.OuterSingleton;
	}
	template<> DATASMITHIFCTRANSLATOR_API UClass* StaticClass<UDatasmithIFCImportOptions>()
	{
		return UDatasmithIFCImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithIFCImportOptions);
	UDatasmithIFCImportOptions::~UDatasmithIFCImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithIFCImporter_Source_DatasmithIFCTranslator_Private_DatasmithIFCImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithIFCImporter_Source_DatasmithIFCTranslator_Private_DatasmithIFCImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithIFCImportOptions, UDatasmithIFCImportOptions::StaticClass, TEXT("UDatasmithIFCImportOptions"), &Z_Registration_Info_UClass_UDatasmithIFCImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithIFCImportOptions), 2887563919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithIFCImporter_Source_DatasmithIFCTranslator_Private_DatasmithIFCImportOptions_h_1815132371(TEXT("/Script/DatasmithIFCTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithIFCImporter_Source_DatasmithIFCTranslator_Private_DatasmithIFCImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithIFCImporter_Source_DatasmithIFCTranslator_Private_DatasmithIFCImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
