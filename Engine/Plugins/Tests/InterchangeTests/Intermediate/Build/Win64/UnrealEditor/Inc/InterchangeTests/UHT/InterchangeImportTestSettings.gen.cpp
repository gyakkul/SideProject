// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeImportTestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImportTestSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestSettings();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	void UInterchangeImportTestSettings::StaticRegisterNativesUInterchangeImportTestSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImportTestSettings);
	UClass* Z_Construct_UClass_UInterchangeImportTestSettings_NoRegister()
	{
		return UInterchangeImportTestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeImportTestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportTestsPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportTestsPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeImportTestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implement settings for the Interchange Import Test\n */" },
		{ "IncludePath", "InterchangeImportTestSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestSettings.h" },
		{ "ToolTip", "Implement settings for the Interchange Import Test" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportTestsPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportTestsPath = { "ImportTestsPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestSettings, ImportTestsPath), METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportTestsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportTestsPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles_Inner = { "ImportFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles = { "ImportFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestSettings, ImportFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeImportTestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportTestsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestSettings_Statics::NewProp_ImportFiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeImportTestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImportTestSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImportTestSettings_Statics::ClassParams = {
		&UInterchangeImportTestSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeImportTestSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeImportTestSettings()
	{
		if (!Z_Registration_Info_UClass_UInterchangeImportTestSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImportTestSettings.OuterSingleton, Z_Construct_UClass_UInterchangeImportTestSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeImportTestSettings.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UInterchangeImportTestSettings>()
	{
		return UInterchangeImportTestSettings::StaticClass();
	}
	UInterchangeImportTestSettings::UInterchangeImportTestSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImportTestSettings);
	UInterchangeImportTestSettings::~UInterchangeImportTestSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImportTestSettings, UInterchangeImportTestSettings::StaticClass, TEXT("UInterchangeImportTestSettings"), &Z_Registration_Info_UClass_UInterchangeImportTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImportTestSettings), 1192904913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_1095265565(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
