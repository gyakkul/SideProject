// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TutorialSettings.h"
#include "EditorTutorial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialSettings();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UTutorialSettings_NoRegister();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	void UTutorialSettings::StaticRegisterNativesUTutorialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTutorialSettings);
	UClass* Z_Construct_UClass_UTutorialSettings_NoRegister()
	{
		return UTutorialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupTutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupTutorial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Per-project tutorial settings */" },
		{ "IncludePath", "TutorialSettings.h" },
		{ "ModuleRelativePath", "Private/TutorialSettings.h" },
		{ "ToolTip", "Per-project tutorial settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTutorialCategory, METADATA_PARAMS(nullptr, 0) }; // 3105601252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** Categories for tutorials */" },
		{ "ModuleRelativePath", "Private/TutorialSettings.h" },
		{ "ToolTip", "Categories for tutorials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTutorialSettings, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_MetaData)) }; // 3105601252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** Tutorial to start on project startup */" },
		{ "MetaClass", "/Script/IntroTutorials.EditorTutorial" },
		{ "ModuleRelativePath", "Private/TutorialSettings.h" },
		{ "ToolTip", "Tutorial to start on project startup" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial = { "StartupTutorial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTutorialSettings, StartupTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialSettings_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialSettings_Statics::NewProp_StartupTutorial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTutorialSettings_Statics::ClassParams = {
		&UTutorialSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTutorialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialSettings()
	{
		if (!Z_Registration_Info_UClass_UTutorialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTutorialSettings.OuterSingleton, Z_Construct_UClass_UTutorialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTutorialSettings.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UClass* StaticClass<UTutorialSettings>()
	{
		return UTutorialSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialSettings);
	UTutorialSettings::~UTutorialSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTutorialSettings, UTutorialSettings::StaticClass, TEXT("UTutorialSettings"), &Z_Registration_Info_UClass_UTutorialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTutorialSettings), 1308286103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_2535354258(TEXT("/Script/IntroTutorials"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_TutorialSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
