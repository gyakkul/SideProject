// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/CrashReporterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrashReporterSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UCrashReporterSettings();
	UNREALED_API UClass* Z_Construct_UClass_UCrashReporterSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCrashReporterSettings::StaticRegisterNativesUCrashReporterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrashReporterSettings);
	UClass* Z_Construct_UClass_UCrashReporterSettings_NoRegister()
	{
		return UCrashReporterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCrashReporterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UploadSymbolsPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UploadSymbolsPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamStorage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DownstreamStorage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteStorage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStorage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteStorage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrashReporterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements per-project cooker settings exposed to the editor\n */" },
		{ "IncludePath", "CrashReporterSettings.h" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Implements per-project cooker settings exposed to the editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath_MetaData[] = {
		{ "Category", "CrashReporter" },
		{ "Comment", "/**\n\x09 * Directory for uploading locally built binaries and .PDB files\n\x09 */" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Directory for uploading locally built binaries and .PDB files" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath = { "UploadSymbolsPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrashReporterSettings, UploadSymbolsPath), METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage_MetaData[] = {
		{ "Category", "CrashReporter" },
		{ "Comment", "/**\n\x09 * Local downstream PDB storage path (used for caching remote .PDB files)\n\x09 */" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Local downstream PDB storage path (used for caching remote .PDB files)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage = { "DownstreamStorage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrashReporterSettings, DownstreamStorage), METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_Inner = { "RemoteStorage", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_MetaData[] = {
		{ "Category", "CrashReporter" },
		{ "Comment", "/**\n\x09 * Remote PDB storage (directory path or http/https URL)\n\x09 */" },
		{ "ModuleRelativePath", "Public/CrashReporterSettings.h" },
		{ "ToolTip", "Remote PDB storage (directory path or http/https URL)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage = { "RemoteStorage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrashReporterSettings, RemoteStorage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrashReporterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_UploadSymbolsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_DownstreamStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrashReporterSettings_Statics::NewProp_RemoteStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrashReporterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrashReporterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrashReporterSettings_Statics::ClassParams = {
		&UCrashReporterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrashReporterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrashReporterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrashReporterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrashReporterSettings()
	{
		if (!Z_Registration_Info_UClass_UCrashReporterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrashReporterSettings.OuterSingleton, Z_Construct_UClass_UCrashReporterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrashReporterSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCrashReporterSettings>()
	{
		return UCrashReporterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrashReporterSettings);
	UCrashReporterSettings::~UCrashReporterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrashReporterSettings, UCrashReporterSettings::StaticClass, TEXT("UCrashReporterSettings"), &Z_Registration_Info_UClass_UCrashReporterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrashReporterSettings), 1196858094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_2929386596(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
