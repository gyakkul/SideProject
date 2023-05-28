// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InternationalizationExportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternationalizationExportSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UInternationalizationExportSettings();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UInternationalizationExportSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TranslationEditor();
// End Cross Module References
	void UInternationalizationExportSettings::StaticRegisterNativesUInternationalizationExportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInternationalizationExportSettings);
	UClass* Z_Construct_UClass_UInternationalizationExportSettings_NoRegister()
	{
		return UInternationalizationExportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInternationalizationExportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CulturesToGenerate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CulturesToGenerate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CulturesToGenerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandletClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandletClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortableObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PortableObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManifestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ManifestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchiveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArchiveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLoc_MetaData[];
#endif
		static void NewProp_bExportLoc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportLoc_MetaData[];
#endif
		static void NewProp_bImportLoc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCultureDirectory_MetaData[];
#endif
		static void NewProp_bUseCultureDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCultureDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternationalizationExportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InternationalizationExportSettings.h" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_Inner = { "CulturesToGenerate", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_MetaData[] = {
		{ "Category", "CommonSettings" },
		{ "Comment", "/** Which cultures should be exported */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Which cultures should be exported" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate = { "CulturesToGenerate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, CulturesToGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** The commandlet to run */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "The commandlet to run" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass = { "CommandletClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, CommandletClass), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Source for the localization data */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Source for the localization data" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, SourcePath), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Destination for the localization data */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Destination for the localization data" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, DestinationPath), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Filename for the Portable Object format file */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Filename for the Portable Object format file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName = { "PortableObjectName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, PortableObjectName), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Name of the manifest file */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Name of the manifest file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName = { "ManifestName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, ManifestName), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Name of the archive file */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Name of the archive file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName = { "ArchiveName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationExportSettings, ArchiveName), METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Whether or not to export localization data */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Whether or not to export localization data" },
	};
#endif
	void Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_SetBit(void* Obj)
	{
		((UInternationalizationExportSettings*)Obj)->bExportLoc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc = { "bExportLoc", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInternationalizationExportSettings), &Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Whether or not to import localization data */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Whether or not to import localization data" },
	};
#endif
	void Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_SetBit(void* Obj)
	{
		((UInternationalizationExportSettings*)Obj)->bImportLoc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc = { "bImportLoc", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInternationalizationExportSettings), &Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_MetaData[] = {
		{ "Category", "GatherTextStep" },
		{ "Comment", "/** Whether or not to use culture path */" },
		{ "ModuleRelativePath", "Private/InternationalizationExportSettings.h" },
		{ "ToolTip", "Whether or not to use culture path" },
	};
#endif
	void Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_SetBit(void* Obj)
	{
		((UInternationalizationExportSettings*)Obj)->bUseCultureDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory = { "bUseCultureDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInternationalizationExportSettings), &Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInternationalizationExportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CulturesToGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_CommandletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_PortableObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ManifestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_ArchiveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bExportLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bImportLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationExportSettings_Statics::NewProp_bUseCultureDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternationalizationExportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternationalizationExportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInternationalizationExportSettings_Statics::ClassParams = {
		&UInternationalizationExportSettings::StaticClass,
		"InternationalizationExport",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInternationalizationExportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInternationalizationExportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationExportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInternationalizationExportSettings()
	{
		if (!Z_Registration_Info_UClass_UInternationalizationExportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInternationalizationExportSettings.OuterSingleton, Z_Construct_UClass_UInternationalizationExportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInternationalizationExportSettings.OuterSingleton;
	}
	template<> TRANSLATIONEDITOR_API UClass* StaticClass<UInternationalizationExportSettings>()
	{
		return UInternationalizationExportSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternationalizationExportSettings);
	UInternationalizationExportSettings::~UInternationalizationExportSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInternationalizationExportSettings, UInternationalizationExportSettings::StaticClass, TEXT("UInternationalizationExportSettings"), &Z_Registration_Info_UClass_UInternationalizationExportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInternationalizationExportSettings), 3784156552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_863614123(TEXT("/Script/TranslationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_InternationalizationExportSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
