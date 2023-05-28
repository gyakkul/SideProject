// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/EditorLoadingSavingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLoadingSavingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingSavingSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EAutoSaveMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportWildcard();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadLevelAtStartup;
	static UEnum* ELoadLevelAtStartup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadLevelAtStartup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadLevelAtStartup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELoadLevelAtStartup"));
		}
		return Z_Registration_Info_UEnum_ELoadLevelAtStartup.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELoadLevelAtStartup::Type>()
	{
		return ELoadLevelAtStartup_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::Enumerators[] = {
		{ "ELoadLevelAtStartup::None", (int64)ELoadLevelAtStartup::None },
		{ "ELoadLevelAtStartup::ProjectDefault", (int64)ELoadLevelAtStartup::ProjectDefault },
		{ "ELoadLevelAtStartup::LastOpened", (int64)ELoadLevelAtStartup::LastOpened },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::Enum_MetaDataParams[] = {
		{ "LastOpened.Name", "ELoadLevelAtStartup::LastOpened" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "None.Name", "ELoadLevelAtStartup::None" },
		{ "ProjectDefault.Name", "ELoadLevelAtStartup::ProjectDefault" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELoadLevelAtStartup",
		"ELoadLevelAtStartup::Type",
		Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup()
	{
		if (!Z_Registration_Info_UEnum_ELoadLevelAtStartup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadLevelAtStartup.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadLevelAtStartup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoSaveMethod;
	static UEnum* EAutoSaveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoSaveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EAutoSaveMethod, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EAutoSaveMethod"));
		}
		return Z_Registration_Info_UEnum_EAutoSaveMethod.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EAutoSaveMethod>()
	{
		return EAutoSaveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::Enumerators[] = {
		{ "EAutoSaveMethod::BackupAndRestore", (int64)EAutoSaveMethod::BackupAndRestore },
		{ "EAutoSaveMethod::BackupAndOverwrite", (int64)EAutoSaveMethod::BackupAndOverwrite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::Enum_MetaDataParams[] = {
		{ "BackupAndOverwrite.Comment", "/** Autosave in-place, overwriting your existing content after backing up the current file (BETA) */" },
		{ "BackupAndOverwrite.Name", "EAutoSaveMethod::BackupAndOverwrite" },
		{ "BackupAndOverwrite.ToolTip", "Autosave in-place, overwriting your existing content after backing up the current file (BETA)" },
		{ "BackupAndRestore.Comment", "/** Autosave to a backup location and offer to restore after an editor crash */" },
		{ "BackupAndRestore.Name", "EAutoSaveMethod::BackupAndRestore" },
		{ "BackupAndRestore.ToolTip", "Autosave to a backup location and offer to restore after an editor crash" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EAutoSaveMethod",
		"EAutoSaveMethod",
		Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EAutoSaveMethod()
	{
		if (!Z_Registration_Info_UEnum_EAutoSaveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoSaveMethod.InnerSingleton, Z_Construct_UEnum_UnrealEd_EAutoSaveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoSaveMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoReimportWildcard;
class UScriptStruct* FAutoReimportWildcard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoReimportWildcard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoReimportWildcard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoReimportWildcard, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("AutoReimportWildcard"));
	}
	return Z_Registration_Info_UScriptStruct_AutoReimportWildcard.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FAutoReimportWildcard>()
{
	return FAutoReimportWildcard::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wildcard_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wildcard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInclude_MetaData[];
#endif
		static void NewProp_bInclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A filter used by the auto reimport manager to explicitly include/exclude files matching the specified wildcard */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "A filter used by the auto reimport manager to explicitly include/exclude files matching the specified wildcard" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoReimportWildcard>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "Comment", "/** The wildcard filter as a string. Files that match this wildcard will be included/excluded according to the bInclude member */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The wildcard filter as a string. Files that match this wildcard will be included/excluded according to the bInclude member" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard = { "Wildcard", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoReimportWildcard, Wildcard), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "Comment", "/** When true, files that match this wildcard will be included (if it doesn't fail any other filters), when false, matches will be excluded from the reimporter */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When true, files that match this wildcard will be included (if it doesn't fail any other filters), when false, matches will be excluded from the reimporter" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_SetBit(void* Obj)
	{
		((FAutoReimportWildcard*)Obj)->bInclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude = { "bInclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutoReimportWildcard), &Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_Wildcard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewProp_bInclude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"AutoReimportWildcard",
		sizeof(FAutoReimportWildcard),
		alignof(FAutoReimportWildcard),
		Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportWildcard()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoReimportWildcard.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoReimportWildcard.InnerSingleton, Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoReimportWildcard.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig;
class UScriptStruct* FAutoReimportDirectoryConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("AutoReimportDirectoryConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FAutoReimportDirectoryConfig>()
{
	return FAutoReimportDirectoryConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MountPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Wildcards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wildcards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Wildcards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Auto reimport settings for a specific directory */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Auto reimport settings for a specific directory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoReimportDirectoryConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Path to a virtual package path (eg /Game/ or /MyPlugin/), or absolute paths on disk where your source content files reside." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory = { "SourceDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoReimportDirectoryConfig, SourceDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "(Optional) Specify a virtual mout point (e.g. /Game/) to map this directory to on disk. Doing so allows auto-creation of assets when a source content file is created in this folder (see below)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoReimportDirectoryConfig, MountPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_Inner = { "Wildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutoReimportWildcard, METADATA_PARAMS(nullptr, 0) }; // 2949873969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Include/Exclude Wildcards" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "(Optional) Specify a set of wildcards to include or exclude files from this auto-reimporter." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards = { "Wildcards", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoReimportDirectoryConfig, Wildcards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_MetaData)) }; // 2949873969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_SourceDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_MountPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewProp_Wildcards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"AutoReimportDirectoryConfig",
		sizeof(FAutoReimportDirectoryConfig),
		alignof(FAutoReimportDirectoryConfig),
		Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig.InnerSingleton, Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig.InnerSingleton;
	}
	void UEditorLoadingSavingSettings::StaticRegisterNativesUEditorLoadingSavingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorLoadingSavingSettings);
	UClass* Z_Construct_UClass_UEditorLoadingSavingSettings_NoRegister()
	{
		return UEditorLoadingSavingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLoadingSavingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadLevelAtStartup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadLevelAtStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCompilationAtStartup_MetaData[];
#endif
		static void NewProp_bForceCompilationAtStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCompilationAtStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreOpenAssetTabsOnRestart_MetaData[];
#endif
		static void NewProp_bRestoreOpenAssetTabsOnRestart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreOpenAssetTabsOnRestart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSourceControlCompatabilityCheck_MetaData[];
#endif
		static void NewProp_bEnableSourceControlCompatabilityCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceControlCompatabilityCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonitorContentDirectories_MetaData[];
#endif
		static void NewProp_bMonitorContentDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonitorContentDirectories;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutoReimportDirectories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoReimportDirectories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoReimportDirectories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoReimportDirectorySettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoReimportDirectorySettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoReimportDirectorySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoReimportThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoReimportThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateAssets_MetaData[];
#endif
		static void NewProp_bAutoCreateAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDeleteAssets_MetaData[];
#endif
		static void NewProp_bAutoDeleteAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeleteAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectChangesOnStartup_MetaData[];
#endif
		static void NewProp_bDetectChangesOnStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectChangesOnStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptBeforeAutoImporting_MetaData[];
#endif
		static void NewProp_bPromptBeforeAutoImporting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptBeforeAutoImporting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteSourceFilesWithAssets_MetaData[];
#endif
		static void NewProp_bDeleteSourceFilesWithAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteSourceFilesWithAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReimportTextures_MetaData[];
#endif
		static void NewProp_bAutoReimportTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReimportTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReimportCSV_MetaData[];
#endif
		static void NewProp_bAutoReimportCSV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReimportCSV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDirtyMigratedBlueprints_MetaData[];
#endif
		static void NewProp_bDirtyMigratedBlueprints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyMigratedBlueprints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveEnable_MetaData[];
#endif
		static void NewProp_bAutoSaveEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveMaps_MetaData[];
#endif
		static void NewProp_bAutoSaveMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveMaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveContent_MetaData[];
#endif
		static void NewProp_bAutoSaveContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveContent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoSaveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoSaveMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveTimeMinutes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveTimeMinutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveInteractionDelayInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveInteractionDelayInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveWarningInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveWarningInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveMaxBackups_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveMaxBackups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData[];
#endif
		static void NewProp_bAutomaticallyCheckoutOnAssetModification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyCheckoutOnAssetModification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptForCheckoutOnAssetModification_MetaData[];
#endif
		static void NewProp_bPromptForCheckoutOnAssetModification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForCheckoutOnAssetModification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSCCAutoAddNewFiles_MetaData[];
#endif
		static void NewProp_bSCCAutoAddNewFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSCCAutoAddNewFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSCCUseGlobalSettings_MetaData[];
#endif
		static void NewProp_bSCCUseGlobalSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSCCUseGlobalSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextDiffToolPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextDiffToolPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AutoSave AutoReimport Blueprints" },
		{ "Comment", "/**\n * Implements the Level Editor's loading and saving settings.\n */" },
		{ "IncludePath", "Settings/EditorLoadingSavingSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Implements the Level Editor's loading and saving settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** Whether to load a default example map at startup  */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to load a default example map at startup" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup = { "LoadLevelAtStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, LoadLevelAtStartup), Z_Construct_UEnum_UnrealEd_ELoadLevelAtStartup, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup_MetaData)) }; // 2916426898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** Force project compilation at startup */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Force project compilation at startup" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bForceCompilationAtStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup = { "bForceCompilationAtStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** Whether to restore previously open assets at startup */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to restore previously open assets at startup" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bRestoreOpenAssetTabsOnRestart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart = { "bRestoreOpenAssetTabsOnRestart", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bEnableSourceControlCompatabilityCheck_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck = { "bEnableSourceControlCompatabilityCheck", nullptr, (EPropertyFlags)0x0040000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Monitor Content Directories" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, changes to made to source content files inside the content directories will automatically be reflected in the content browser.\nNote that source content files must reside in one of the monitored directories to be eligible for auto-reimport.\nAdvanced setup options are available below." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bMonitorContentDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories = { "bMonitorContentDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_Inner = { "AutoReimportDirectories", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories = { "AutoReimportDirectories", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoReimportDirectories_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_Inner = { "AutoReimportDirectorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig, METADATA_PARAMS(nullptr, 0) }; // 3702958861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Directories to Monitor" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Lists every directory to monitor for content changes. Can be virtual package paths (eg /Game/ or /MyPlugin/), or absolute paths on disk.\nPaths should point to the locations of the source content files (e.g. *.fbx, *.png) you want to be eligible for auto-reimport." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings = { "AutoReimportDirectorySettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoReimportDirectorySettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_MetaData)) }; // 3702958861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "ClampMax", "60" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Import Threshold Time" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Specifies an amount of time to wait before a specific file change is considered for auto reimport" },
		{ "Units", "Seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold = { "AutoReimportThreshold", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoReimportThreshold), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Auto Create Assets" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, newly added source content files will be automatically imported into new assets." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoCreateAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets = { "bAutoCreateAssets", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Auto Delete Assets" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, deleting a source content file will automatically prompt the deletion of any related assets." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoDeleteAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets = { "bAutoDeleteAssets", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Detect Changes On Startup" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "When enabled, changes to monitored directories since UE was closed will be detected on restart.\n(Not recommended when working in collaboration with others using revision control)." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bDetectChangesOnStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup = { "bDetectChangesOnStartup", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_MetaData[] = {
		{ "Category", "AutoReimport" },
		{ "DisplayName", "Prompt Before Action" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to prompt the user to import detected changes." },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bPromptBeforeAutoImporting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting = { "bPromptBeforeAutoImporting", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_MetaData[] = {
		{ "Comment", "/** Internal setting to control whether we should ask the user whether we should automatically delete source files when their assets are deleted */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Internal setting to control whether we should ask the user whether we should automatically delete source files when their assets are deleted" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bDeleteSourceFilesWithAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets = { "bDeleteSourceFilesWithAssets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_MetaData[] = {
		{ "Comment", "/** Deprecated properties - we automatically monitor all source file types that are supported by in memory factories now */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Deprecated properties - we automatically monitor all source file types that are supported by in memory factories now" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoReimportTextures_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures = { "bAutoReimportTextures", nullptr, (EPropertyFlags)0x0040000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoReimportCSV_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV = { "bAutoReimportCSV", nullptr, (EPropertyFlags)0x0040000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "/** Whether to mark blueprints dirty if they are automatically migrated during loads */" },
		{ "DisplayName", "Dirty Migrated Blueprints" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to mark blueprints dirty if they are automatically migrated during loads" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bDirtyMigratedBlueprints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints = { "bDirtyMigratedBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "Comment", "/** Whether to automatically save after a time interval */" },
		{ "DisplayName", "Enable AutoSave" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically save after a time interval" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoSaveEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable = { "bAutoSaveEnable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "Comment", "/** Whether to automatically save maps during an autosave */" },
		{ "DisplayName", "Save Maps" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically save maps during an autosave" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoSaveMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps = { "bAutoSaveMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "Comment", "/** Whether to automatically save content packages during an autosave */" },
		{ "DisplayName", "Save Content" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically save content packages during an autosave" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutoSaveContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent = { "bAutoSaveContent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "Comment", "/** What method should be used when performing an autosave? */" },
		{ "DisplayName", "Save Method" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "What method should be used when performing an autosave?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod = { "AutoSaveMethod", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveMethod), Z_Construct_UEnum_UnrealEd_EAutoSaveMethod, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod_MetaData)) }; // 3315690409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The time interval after which to auto save */" },
		{ "DisplayName", "Frequency in Minutes" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The time interval after which to auto save" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes = { "AutoSaveTimeMinutes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveTimeMinutes), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveInteractionDelayInSeconds_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ClampMin", "15" },
		{ "Comment", "/** The minimum number of seconds to wait after the last user interactions (with the editor) before auto-save can trigger */" },
		{ "DisplayName", "Interaction Delay in Seconds" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The minimum number of seconds to wait after the last user interactions (with the editor) before auto-save can trigger" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveInteractionDelayInSeconds = { "AutoSaveInteractionDelayInSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveInteractionDelayInSeconds), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveInteractionDelayInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveInteractionDelayInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of seconds warning before an autosave*/" },
		{ "DisplayName", "Warning in seconds" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "The number of seconds warning before an autosave" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds = { "AutoSaveWarningInSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveWarningInSeconds), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMaxBackups_MetaData[] = {
		{ "Category", "AutoSave" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many auto save files to keep around*/" },
		{ "DisplayName", "Maximum number of AutoSaves" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "How many auto save files to keep around" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMaxBackups = { "AutoSaveMaxBackups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, AutoSaveMaxBackups), METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMaxBackups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMaxBackups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** Whether to automatically checkout on asset modification */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically checkout on asset modification" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bAutomaticallyCheckoutOnAssetModification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification = { "bAutomaticallyCheckoutOnAssetModification", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** Whether to automatically prompt for SCC checkout on asset modification */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Whether to automatically prompt for SCC checkout on asset modification" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bPromptForCheckoutOnAssetModification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification = { "bPromptForCheckoutOnAssetModification", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** Auto add files to source control */" },
		{ "DisplayName", "Add New Files when Modified" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Auto add files to source control" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bSCCAutoAddNewFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles = { "bSCCAutoAddNewFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** Use global source control login settings, rather than per-project. Changing this will require you to login again */" },
		{ "DisplayName", "Use Global Settings" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Use global source control login settings, rather than per-project. Changing this will require you to login again" },
	};
#endif
	void Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_SetBit(void* Obj)
	{
		((UEditorLoadingSavingSettings*)Obj)->bSCCUseGlobalSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings = { "bSCCUseGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorLoadingSavingSettings), &Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath_MetaData[] = {
		{ "Category", "SourceControl" },
		{ "Comment", "/** Specifies the file path to the tool to be used for diffing text files */" },
		{ "DisplayName", "Tool for diffing text" },
		{ "ModuleRelativePath", "Classes/Settings/EditorLoadingSavingSettings.h" },
		{ "ToolTip", "Specifies the file path to the tool to be used for diffing text files" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath = { "TextDiffToolPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorLoadingSavingSettings, TextDiffToolPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_LoadLevelAtStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bForceCompilationAtStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bRestoreOpenAssetTabsOnRestart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bEnableSourceControlCompatabilityCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bMonitorContentDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportDirectorySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoReimportThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoCreateAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoDeleteAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDetectChangesOnStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptBeforeAutoImporting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDeleteSourceFilesWithAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoReimportCSV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bDirtyMigratedBlueprints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutoSaveContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveTimeMinutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveInteractionDelayInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveWarningInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_AutoSaveMaxBackups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bAutomaticallyCheckoutOnAssetModification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bPromptForCheckoutOnAssetModification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCAutoAddNewFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_bSCCUseGlobalSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::NewProp_TextDiffToolPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLoadingSavingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::ClassParams = {
		&UEditorLoadingSavingSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLoadingSavingSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorLoadingSavingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorLoadingSavingSettings.OuterSingleton, Z_Construct_UClass_UEditorLoadingSavingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorLoadingSavingSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorLoadingSavingSettings>()
	{
		return UEditorLoadingSavingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLoadingSavingSettings);
	UEditorLoadingSavingSettings::~UEditorLoadingSavingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::EnumInfo[] = {
		{ ELoadLevelAtStartup_StaticEnum, TEXT("ELoadLevelAtStartup"), &Z_Registration_Info_UEnum_ELoadLevelAtStartup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2916426898U) },
		{ EAutoSaveMethod_StaticEnum, TEXT("EAutoSaveMethod"), &Z_Registration_Info_UEnum_EAutoSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3315690409U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::ScriptStructInfo[] = {
		{ FAutoReimportWildcard::StaticStruct, Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics::NewStructOps, TEXT("AutoReimportWildcard"), &Z_Registration_Info_UScriptStruct_AutoReimportWildcard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoReimportWildcard), 2949873969U) },
		{ FAutoReimportDirectoryConfig::StaticStruct, Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics::NewStructOps, TEXT("AutoReimportDirectoryConfig"), &Z_Registration_Info_UScriptStruct_AutoReimportDirectoryConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoReimportDirectoryConfig), 3702958861U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorLoadingSavingSettings, UEditorLoadingSavingSettings::StaticClass, TEXT("UEditorLoadingSavingSettings"), &Z_Registration_Info_UClass_UEditorLoadingSavingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorLoadingSavingSettings), 3690854998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_662186576(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
