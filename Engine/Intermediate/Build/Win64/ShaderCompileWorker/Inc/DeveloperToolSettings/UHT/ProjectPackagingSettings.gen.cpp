// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/ProjectPackagingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPackagingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UProjectPackagingSettings();
	DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UProjectPackagingSettings_NoRegister();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets();
	DEVELOPERTOOLSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPakOrderFileSpec();
	DEVELOPERTOOLSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FProjectBuildSettings();
	UPackage* Z_Construct_UPackage__Script_DeveloperToolSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations;
	static UEnum* EProjectPackagingBuildConfigurations_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EProjectPackagingBuildConfigurations"));
		}
		return Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EProjectPackagingBuildConfigurations>()
	{
		return EProjectPackagingBuildConfigurations_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::Enumerators[] = {
		{ "EProjectPackagingBuildConfigurations::PPBC_Debug", (int64)EProjectPackagingBuildConfigurations::PPBC_Debug },
		{ "EProjectPackagingBuildConfigurations::PPBC_DebugGame", (int64)EProjectPackagingBuildConfigurations::PPBC_DebugGame },
		{ "EProjectPackagingBuildConfigurations::PPBC_Development", (int64)EProjectPackagingBuildConfigurations::PPBC_Development },
		{ "EProjectPackagingBuildConfigurations::PPBC_Test", (int64)EProjectPackagingBuildConfigurations::PPBC_Test },
		{ "EProjectPackagingBuildConfigurations::PPBC_Shipping", (int64)EProjectPackagingBuildConfigurations::PPBC_Shipping },
		{ "EProjectPackagingBuildConfigurations::PPBC_MAX", (int64)EProjectPackagingBuildConfigurations::PPBC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates the available build configurations for project packaging.\n */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "PPBC_Debug.Comment", "/** Debug configuration. */" },
		{ "PPBC_Debug.DisplayName", "Debug" },
		{ "PPBC_Debug.Name", "EProjectPackagingBuildConfigurations::PPBC_Debug" },
		{ "PPBC_Debug.ToolTip", "Debug configuration." },
		{ "PPBC_DebugGame.Comment", "/** DebugGame configuration. */" },
		{ "PPBC_DebugGame.DisplayName", "DebugGame" },
		{ "PPBC_DebugGame.Name", "EProjectPackagingBuildConfigurations::PPBC_DebugGame" },
		{ "PPBC_DebugGame.ToolTip", "DebugGame configuration." },
		{ "PPBC_Development.Comment", "/** Development configuration. */" },
		{ "PPBC_Development.DisplayName", "Development" },
		{ "PPBC_Development.Name", "EProjectPackagingBuildConfigurations::PPBC_Development" },
		{ "PPBC_Development.ToolTip", "Development configuration." },
		{ "PPBC_MAX.Comment", "/** Number of entries in the enum. */" },
		{ "PPBC_MAX.Hidden", "" },
		{ "PPBC_MAX.Name", "EProjectPackagingBuildConfigurations::PPBC_MAX" },
		{ "PPBC_MAX.ToolTip", "Number of entries in the enum." },
		{ "PPBC_Shipping.Comment", "/** Shipping configuration. */" },
		{ "PPBC_Shipping.DisplayName", "Shipping" },
		{ "PPBC_Shipping.Name", "EProjectPackagingBuildConfigurations::PPBC_Shipping" },
		{ "PPBC_Shipping.ToolTip", "Shipping configuration." },
		{ "PPBC_Test.Comment", "/** Test configuration. */" },
		{ "PPBC_Test.DisplayName", "Test" },
		{ "PPBC_Test.Name", "EProjectPackagingBuildConfigurations::PPBC_Test" },
		{ "PPBC_Test.ToolTip", "Test configuration." },
		{ "ToolTip", "Enumerates the available build configurations for project packaging." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EProjectPackagingBuildConfigurations",
		"EProjectPackagingBuildConfigurations",
		Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets;
	static UEnum* EProjectPackagingInternationalizationPresets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EProjectPackagingInternationalizationPresets"));
		}
		return Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EProjectPackagingInternationalizationPresets>()
	{
		return EProjectPackagingInternationalizationPresets_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::Enumerators[] = {
		{ "EProjectPackagingInternationalizationPresets::English", (int64)EProjectPackagingInternationalizationPresets::English },
		{ "EProjectPackagingInternationalizationPresets::EFIGS", (int64)EProjectPackagingInternationalizationPresets::EFIGS },
		{ "EProjectPackagingInternationalizationPresets::EFIGSCJK", (int64)EProjectPackagingInternationalizationPresets::EFIGSCJK },
		{ "EProjectPackagingInternationalizationPresets::CJK", (int64)EProjectPackagingInternationalizationPresets::CJK },
		{ "EProjectPackagingInternationalizationPresets::All", (int64)EProjectPackagingInternationalizationPresets::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/** All known cultures. */" },
		{ "All.Name", "EProjectPackagingInternationalizationPresets::All" },
		{ "All.ToolTip", "All known cultures." },
		{ "CJK.Comment", "/** Chinese, Japanese, Korean. */" },
		{ "CJK.Name", "EProjectPackagingInternationalizationPresets::CJK" },
		{ "CJK.ToolTip", "Chinese, Japanese, Korean." },
		{ "Comment", "/**\n * Enumerates the available internationalization data presets for project packaging.\n */" },
		{ "EFIGS.Comment", "/** English, French, Italian, German, Spanish. */" },
		{ "EFIGS.Name", "EProjectPackagingInternationalizationPresets::EFIGS" },
		{ "EFIGS.ToolTip", "English, French, Italian, German, Spanish." },
		{ "EFIGSCJK.Comment", "/** English, French, Italian, German, Spanish, Chinese, Japanese, Korean. */" },
		{ "EFIGSCJK.Name", "EProjectPackagingInternationalizationPresets::EFIGSCJK" },
		{ "EFIGSCJK.ToolTip", "English, French, Italian, German, Spanish, Chinese, Japanese, Korean." },
		{ "English.Comment", "/** English only. */" },
		{ "English.Name", "EProjectPackagingInternationalizationPresets::English" },
		{ "English.ToolTip", "English only." },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Enumerates the available internationalization data presets for project packaging." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EProjectPackagingInternationalizationPresets",
		"EProjectPackagingInternationalizationPresets",
		Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectPackagingBuild;
	static UEnum* EProjectPackagingBuild_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingBuild.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectPackagingBuild.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EProjectPackagingBuild"));
		}
		return Z_Registration_Info_UEnum_EProjectPackagingBuild.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EProjectPackagingBuild>()
	{
		return EProjectPackagingBuild_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::Enumerators[] = {
		{ "EProjectPackagingBuild::Always", (int64)EProjectPackagingBuild::Always },
		{ "EProjectPackagingBuild::Never", (int64)EProjectPackagingBuild::Never },
		{ "EProjectPackagingBuild::IfProjectHasCode", (int64)EProjectPackagingBuild::IfProjectHasCode },
		{ "EProjectPackagingBuild::IfEditorWasBuiltLocally", (int64)EProjectPackagingBuild::IfEditorWasBuiltLocally },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Always build. */" },
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EProjectPackagingBuild::Always" },
		{ "Always.ToolTip", "Always build." },
		{ "Comment", "/**\n * Determines whether to build the executable when packaging. Note the equivalence between these settings and EPlayOnBuildMode.\n */" },
		{ "IfEditorWasBuiltLocally.Comment", "/** If we're not packaging from a promoted build. */" },
		{ "IfEditorWasBuiltLocally.DisplayName", "If running a locally built editor" },
		{ "IfEditorWasBuiltLocally.Name", "EProjectPackagingBuild::IfEditorWasBuiltLocally" },
		{ "IfEditorWasBuiltLocally.ToolTip", "If we're not packaging from a promoted build." },
		{ "IfProjectHasCode.Comment", "/** Default (if the Never build. */" },
		{ "IfProjectHasCode.DisplayName", "If project has code, or running a locally built editor" },
		{ "IfProjectHasCode.Name", "EProjectPackagingBuild::IfProjectHasCode" },
		{ "IfProjectHasCode.ToolTip", "Default (if the Never build." },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "Never.Comment", "/** Never build. */" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EProjectPackagingBuild::Never" },
		{ "Never.ToolTip", "Never build." },
		{ "ToolTip", "Determines whether to build the executable when packaging. Note the equivalence between these settings and EPlayOnBuildMode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EProjectPackagingBuild",
		"EProjectPackagingBuild",
		Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingBuild.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectPackagingBuild.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectPackagingBuild.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod;
	static UEnum* EProjectPackagingBlueprintNativizationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EProjectPackagingBlueprintNativizationMethod"));
		}
		return Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EProjectPackagingBlueprintNativizationMethod>()
	{
		return EProjectPackagingBlueprintNativizationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::Enumerators[] = {
		{ "EProjectPackagingBlueprintNativizationMethod::Disabled", (int64)EProjectPackagingBlueprintNativizationMethod::Disabled },
		{ "EProjectPackagingBlueprintNativizationMethod::Inclusive", (int64)EProjectPackagingBlueprintNativizationMethod::Inclusive },
		{ "EProjectPackagingBlueprintNativizationMethod::Exclusive", (int64)EProjectPackagingBlueprintNativizationMethod::Exclusive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Enumerates the available methods for Blueprint nativization during project packaging.\n*/" },
		{ "Disabled.Comment", "/** Disable Blueprint nativization (default). */" },
		{ "Disabled.Name", "EProjectPackagingBlueprintNativizationMethod::Disabled" },
		{ "Disabled.ToolTip", "Disable Blueprint nativization (default)." },
		{ "Exclusive.Comment", "/** Enable nativization for selected Blueprint assets only. */" },
		{ "Exclusive.Name", "EProjectPackagingBlueprintNativizationMethod::Exclusive" },
		{ "Exclusive.ToolTip", "Enable nativization for selected Blueprint assets only." },
		{ "Inclusive.Comment", "/** Enable nativization for all Blueprint assets. */" },
		{ "Inclusive.Name", "EProjectPackagingBlueprintNativizationMethod::Inclusive" },
		{ "Inclusive.ToolTip", "Enable nativization for all Blueprint assets." },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Enumerates the available methods for Blueprint nativization during project packaging." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EProjectPackagingBlueprintNativizationMethod",
		"EProjectPackagingBlueprintNativizationMethod",
		Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod()
	{
		if (!Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod;
	static UEnum* EAssetRegistryWritebackMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EAssetRegistryWritebackMethod"));
		}
		return Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EAssetRegistryWritebackMethod>()
	{
		return EAssetRegistryWritebackMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::Enumerators[] = {
		{ "EAssetRegistryWritebackMethod::Disabled", (int64)EAssetRegistryWritebackMethod::Disabled },
		{ "EAssetRegistryWritebackMethod::OriginalFile", (int64)EAssetRegistryWritebackMethod::OriginalFile },
		{ "EAssetRegistryWritebackMethod::AdjacentFile", (int64)EAssetRegistryWritebackMethod::AdjacentFile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::Enum_MetaDataParams[] = {
		{ "AdjacentFile.Comment", "/** A duplicate asset registry will be created with the metadata added to it, adjacent to the cooked development asset registry. */" },
		{ "AdjacentFile.Name", "EAssetRegistryWritebackMethod::AdjacentFile" },
		{ "AdjacentFile.ToolTip", "A duplicate asset registry will be created with the metadata added to it, adjacent to the cooked development asset registry." },
		{ "Comment", "/**\n* The list of possible registry writebacks. During staging, iostore can\n* optionally write back data that is only available during the staging process\n* so that asset registry tools can associate this data with their respective\n* assets.\n* \n* Note that this is used in UnrealPak and thus can't use StaticEnum<>, so if you\n* add any types here, be sure to add the parsing of the strings to IoStoreUtilities.cpp.\n*/" },
		{ "Disabled.Comment", "/** Do not write-back staging metadata to the asset registry */" },
		{ "Disabled.Name", "EAssetRegistryWritebackMethod::Disabled" },
		{ "Disabled.ToolTip", "Do not write-back staging metadata to the asset registry" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "OriginalFile.Comment", "/** The development asset registry from the source cooked directory will be re-used. */" },
		{ "OriginalFile.Name", "EAssetRegistryWritebackMethod::OriginalFile" },
		{ "OriginalFile.ToolTip", "The development asset registry from the source cooked directory will be re-used." },
		{ "ToolTip", "The list of possible registry writebacks. During staging, iostore can\noptionally write back data that is only available during the staging process\nso that asset registry tools can associate this data with their respective\nassets.\n\nNote that this is used in UnrealPak and thus can't use StaticEnum<>, so if you\nadd any types here, be sure to add the parsing of the strings to IoStoreUtilities.cpp." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EAssetRegistryWritebackMethod",
		"EAssetRegistryWritebackMethod",
		Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod()
	{
		if (!Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PakOrderFileSpec;
class UScriptStruct* FPakOrderFileSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PakOrderFileSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PakOrderFileSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPakOrderFileSpec, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("PakOrderFileSpec"));
	}
	return Z_Registration_Info_UScriptStruct_PakOrderFileSpec.OuterSingleton;
}
template<> DEVELOPERTOOLSETTINGS_API UScriptStruct* StaticStruct<FPakOrderFileSpec>()
{
	return FPakOrderFileSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPakOrderFileSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Pattern_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPakOrderFileSpec, Pattern), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Pattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Pattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPakOrderFileSpec, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Pattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		&NewStructOps,
		"PakOrderFileSpec",
		sizeof(FPakOrderFileSpec),
		alignof(FPakOrderFileSpec),
		Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPakOrderFileSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_PakOrderFileSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PakOrderFileSpec.InnerSingleton, Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PakOrderFileSpec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectBuildSettings;
class UScriptStruct* FProjectBuildSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectBuildSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectBuildSettings, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("ProjectBuildSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectBuildSettings.OuterSingleton;
}
template<> DEVELOPERTOOLSETTINGS_API UScriptStruct* StaticStruct<FProjectBuildSettings>()
{
	return FProjectBuildSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProjectBuildSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HelpText;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpecificPlatforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificPlatforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificPlatforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildCookRunParams_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildCookRunParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectBuildSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** The name for this custom build. It will be shown in menus for selection. */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "The name for this custom build. It will be shown in menus for selection." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectBuildSettings, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** Any help that you would like to include in the ToolTip of the menu option (or shown in interactive mode Turnkey) */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Any help that you would like to include in the ToolTip of the menu option (or shown in interactive mode Turnkey)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectBuildSettings, HelpText), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_HelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_HelpText_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms_Inner = { "SpecificPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** If this build step is specific to one or more platforms, add them here by name (note: use Windows, not Win64) */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If this build step is specific to one or more platforms, add them here by name (note: use Windows, not Win64)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms = { "SpecificPlatforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectBuildSettings, SpecificPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_BuildCookRunParams_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * The commandline for BuildCookRun UAT command. Some substitutions are allowed:\n\x09 *   {Project} - Replaced with the path to the project's .uproject file\n\x09 *   {Platform} - Replaced with the platform name this is run for\n\x09 *   {inivalue:Config:Section:Key} - Replaced with the value for Key in Config's Section. Ex: -archivedirectory={inivalue:Engine:CustomSettings:OverrideArchiveDir}\n\x09 *   {iniif:Token:Config:Section:Key} - Replaced with Token if the vlaue for Key in Config's Section evaluates to True. Ex: {iniif:-iostore:/Script/UnrealEd.ProjectPackagingSettings:bUseIoStore}\n\x09 * Because ProjectPackagingSettings is a common section to read, if Config:Section: are not specified for 'iniif' or 'inivalue', it will use the ProjectPackagingSettings settings:\n\x09 *   {iniif:-iostore:bUseIoStore}\n\x09 * Additionally, the ini settings can have an optional search and replace modifier, to easily modify the string. The Replace can be blank:\n\x09 *   {inivalue:BuildConfiguration|PPBC_=} - This will get the BuildConfiguration from the settings, and then remove the PPBC_ enum prefix from the string, to just get say Development\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "The commandline for BuildCookRun UAT command. Some substitutions are allowed:\n  {Project} - Replaced with the path to the project's .uproject file\n  {Platform} - Replaced with the platform name this is run for\n  {inivalue:Config:Section:Key} - Replaced with the value for Key in Config's Section. Ex: -archivedirectory={inivalue:Engine:CustomSettings:OverrideArchiveDir}\n  {iniif:Token:Config:Section:Key} - Replaced with Token if the vlaue for Key in Config's Section evaluates to True. Ex: {iniif:-iostore:/Script/UnrealEd.ProjectPackagingSettings:bUseIoStore}\nBecause ProjectPackagingSettings is a common section to read, if Config:Section: are not specified for 'iniif' or 'inivalue', it will use the ProjectPackagingSettings settings:\n  {iniif:-iostore:bUseIoStore}\nAdditionally, the ini settings can have an optional search and replace modifier, to easily modify the string. The Replace can be blank:\n  {inivalue:BuildConfiguration|PPBC_=} - This will get the BuildConfiguration from the settings, and then remove the PPBC_ enum prefix from the string, to just get say Development" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_BuildCookRunParams = { "BuildCookRunParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectBuildSettings, BuildCookRunParams), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_BuildCookRunParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_BuildCookRunParams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_HelpText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_SpecificPlatforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewProp_BuildCookRunParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		&NewStructOps,
		"ProjectBuildSettings",
		sizeof(FProjectBuildSettings),
		alignof(FProjectBuildSettings),
		Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectBuildSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ProjectBuildSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectBuildSettings.InnerSingleton, Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProjectBuildSettings.InnerSingleton;
	}
	void UProjectPackagingSettings::StaticRegisterNativesUProjectPackagingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectPackagingSettings);
	UClass* Z_Construct_UClass_UProjectPackagingSettings_NoRegister()
	{
		return UProjectPackagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProjectPackagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Build_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Build_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Build;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildConfiguration_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullRebuild_MetaData[];
#endif
		static void NewProp_FullRebuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FullRebuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForDistribution_MetaData[];
#endif
		static void NewProp_ForDistribution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeDebugFiles_MetaData[];
#endif
		static void NewProp_IncludeDebugFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeDebugFiles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintNativizationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintNativizationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlueprintNativizationMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativizeBlueprintAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativizeBlueprintAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NativizeBlueprintAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData[];
#endif
		static void NewProp_bIncludeNativizedAssetsInProjectGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeNativizedAssetsInProjectGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData[];
#endif
		static void NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeMonolithicEngineHeadersInNativizedCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePakFile_MetaData[];
#endif
		static void NewProp_UsePakFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePakFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIoStore_MetaData[];
#endif
		static void NewProp_bUseIoStore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIoStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseZenStore_MetaData[];
#endif
		static void NewProp_bUseZenStore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseZenStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMakeBinaryConfig_MetaData[];
#endif
		static void NewProp_bMakeBinaryConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeBinaryConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateChunks_MetaData[];
#endif
		static void NewProp_bGenerateChunks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateChunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNoChunks_MetaData[];
#endif
		static void NewProp_bGenerateNoChunks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNoChunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChunkHardReferencesOnly_MetaData[];
#endif
		static void NewProp_bChunkHardReferencesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChunkHardReferencesOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceOneChunkPerFile_MetaData[];
#endif
		static void NewProp_bForceOneChunkPerFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOneChunkPerFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunkSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_MaxChunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildHttpChunkInstallData_MetaData[];
#endif
		static void NewProp_bBuildHttpChunkInstallData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildHttpChunkInstallData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpChunkInstallDataDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HttpChunkInstallDataDirectory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WriteBackMetadataToAssetRegistry_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteBackMetadataToAssetRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WriteBackMetadataToAssetRegistry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[];
#endif
		static void NewProp_bCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageCompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_MetaData[];
#endif
		static void NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageAdditionalCompressionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageAdditionalCompressionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageCompressionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionLevel_DebugDevelopment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackageCompressionLevel_DebugDevelopment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionLevel_TestShipping_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackageCompressionLevel_TestShipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionLevel_Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackageCompressionLevel_Distribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionMinBytesSaved_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackageCompressionMinBytesSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionMinPercentSaved_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackageCompressionMinPercentSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackageCompressionEnableDDC_MetaData[];
#endif
		static void NewProp_bPackageCompressionEnableDDC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackageCompressionEnableDDC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageCompressionMinSizeToConsiderDDC_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackageCompressionMinSizeToConsiderDDC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpChunkInstallDataVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HttpChunkInstallDataVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludePrerequisites_MetaData[];
#endif
		static void NewProp_IncludePrerequisites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludePrerequisites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAppLocalPrerequisites_MetaData[];
#endif
		static void NewProp_IncludeAppLocalPrerequisites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeAppLocalPrerequisites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShareMaterialShaderCode_MetaData[];
#endif
		static void NewProp_bShareMaterialShaderCode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShareMaterialShaderCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeterministicShaderCodeOrder_MetaData[];
#endif
		static void NewProp_bDeterministicShaderCodeOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterministicShaderCodeOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharedMaterialNativeLibraries_MetaData[];
#endif
		static void NewProp_bSharedMaterialNativeLibraries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedMaterialNativeLibraries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplocalPrerequisitesDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplocalPrerequisitesDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeCrashReporter_MetaData[];
#endif
		static void NewProp_IncludeCrashReporter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeCrashReporter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InternationalizationPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternationalizationPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InternationalizationPreset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CulturesToStage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CulturesToStage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CulturesToStage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizationTargetsToChunk_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationTargetsToChunk_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizationTargetsToChunk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationTargetCatchAllChunkId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalizationTargetCatchAllChunkId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookAll_MetaData[];
#endif
		static void NewProp_bCookAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookMapsOnly_MetaData[];
#endif
		static void NewProp_bCookMapsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookMapsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryptIniFiles_MetaData[];
#endif
		static void NewProp_bEncryptIniFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryptIniFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryptPakIndex_MetaData[];
#endif
		static void NewProp_bEncryptPakIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryptPakIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateEarlyDownloaderPakFile_MetaData[];
#endif
		static void NewProp_GenerateEarlyDownloaderPakFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateEarlyDownloaderPakFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipEditorContent_MetaData[];
#endif
		static void NewProp_bSkipEditorContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEditorContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMovies_MetaData[];
#endif
		static void NewProp_bSkipMovies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMovies;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UFSMovies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UFSMovies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UFSMovies;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NonUFSMovies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonUFSMovies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NonUFSMovies;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompressedChunkWildcard_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedChunkWildcard_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedChunkWildcard;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IniKeyBlacklist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IniKeyBlacklist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IniKeyBlacklist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IniKeyDenylist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IniKeyDenylist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IniKeyDenylist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IniSectionBlacklist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IniSectionBlacklist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IniSectionBlacklist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IniSectionDenylist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IniSectionDenylist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IniSectionDenylist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyDownloaderPakFileFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyDownloaderPakFileFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EarlyDownloaderPakFileFiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapsToCook_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapsToCook_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapsToCook;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysCook_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysCook_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysCook;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToNeverCook_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToNeverCook_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToNeverCook;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestDirectoriesToNotSearch_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestDirectoriesToNotSearch_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TestDirectoriesToNotSearch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsUFS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsUFS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsUFS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsUFSServer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsUFSServer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFSServer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAlwaysStageAsNonUFSServer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectCustomBuilds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectCustomBuilds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectCustomBuilds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCustomBuilds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCustomBuilds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EngineCustomBuilds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectPackagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "Settings/ProjectPackagingSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** Specifies whether to build the game executable during packaging. */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to build the game executable during packaging." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build = { "Build", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, Build), Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuild, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_MetaData)) }; // 1579668242
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** The build configuration for which the project is packaged. */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "The build configuration for which the project is packaged." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration = { "BuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, BuildConfiguration), Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_MetaData)) }; // 223703122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildTarget_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** Name of the target to build */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Name of the target to build" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildTarget = { "BuildTarget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, BuildTarget), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/**\n\x09 * If enabled, a full rebuild will be enforced each time the project is being packaged.\n\x09 * If disabled, only modified files will be built, which can improve iteration time.\n\x09 * Unless you iterate on packaging, we recommend full rebuilds when packaging.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, a full rebuild will be enforced each time the project is being packaged.\nIf disabled, only modified files will be built, which can improve iteration time.\nUnless you iterate on packaging, we recommend full rebuilds when packaging." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->FullRebuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild = { "FullRebuild", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/**\n\x09 * If enabled, a distribution build will be created and the shipping configuration will be used\n\x09 * If disabled, a development build will be created\n\x09 * Distribution builds are for publishing to the App Store\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, a distribution build will be created and the shipping configuration will be used\nIf disabled, a development build will be created\nDistribution builds are for publishing to the App Store" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->ForDistribution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution = { "ForDistribution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** If enabled, debug files will be included in staged shipping builds. */" },
		{ "DisplayName", "Include Debug Files in Shipping Builds" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, debug files will be included in staged shipping builds." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludeDebugFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles = { "IncludeDebugFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod = { "BlueprintNativizationMethod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, BlueprintNativizationMethod), Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBlueprintNativizationMethod, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_MetaData)) }; // 3201253410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_Inner = { "NativizeBlueprintAssets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets = { "NativizeBlueprintAssets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, NativizeBlueprintAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bIncludeNativizedAssetsInProjectGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration = { "bIncludeNativizedAssetsInProjectGeneration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bExcludeMonolithicEngineHeadersInNativizedCode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode = { "bExcludeMonolithicEngineHeadersInNativizedCode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** If enabled, all content will be put into a one or more .pak files instead of many individual files (default = enabled). */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, all content will be put into a one or more .pak files instead of many individual files (default = enabled)." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->UsePakFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile = { "UsePakFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** If enabled, use .utoc/.ucas container files for staged/packaged package data instead of pak. */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, use .utoc/.ucas container files for staged/packaged package data instead of pak." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bUseIoStore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore = { "bUseIoStore", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** If enabled, use Zen storage server for storing and fetching cooked data instead of using the local file system.  */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, use Zen storage server for storing and fetching cooked data instead of using the local file system." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bUseZenStore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore = { "bUseZenStore", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** If enabled, staging will make a binary config file for faster loading. */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, staging will make a binary config file for faster loading." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bMakeBinaryConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig = { "bMakeBinaryConfig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * If enabled, will generate pak file chunks.  Assets can be assigned to chunks in the editor or via a delegate (See ShooterGameDelegates.cpp). \n\x09 * Can be used for streaming installs (PS4 Playgo, XboxOne Streaming Install, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, will generate pak file chunks.  Assets can be assigned to chunks in the editor or via a delegate (See ShooterGameDelegates.cpp).\nCan be used for streaming installs (PS4 Playgo, XboxOne Streaming Install, etc)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bGenerateChunks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks = { "bGenerateChunks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** \n\x09 * If enabled, no platform will generate chunks, regardless of settings in platform-specific ini files.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, no platform will generate chunks, regardless of settings in platform-specific ini files." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bGenerateNoChunks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks = { "bGenerateNoChunks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Normally during chunk generation all dependencies of a package in a chunk will be pulled into that package's chunk.\n\x09 * If this is enabled then only hard dependencies are pulled in. Soft dependencies stay in their original chunk.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Normally during chunk generation all dependencies of a package in a chunk will be pulled into that package's chunk.\nIf this is enabled then only hard dependencies are pulled in. Soft dependencies stay in their original chunk." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bChunkHardReferencesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly = { "bChunkHardReferencesOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * If true, individual files are only allowed to be in a single chunk and it will assign it to the lowest number requested\n\x09 * If false, it may end up in multiple chunks if requested by the cooker\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If true, individual files are only allowed to be in a single chunk and it will assign it to the lowest number requested\nIf false, it may end up in multiple chunks if requested by the cooker" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bForceOneChunkPerFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile = { "bForceOneChunkPerFile", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * If > 0 this sets a maximum size per chunk. Chunks larger than this size will be split into multiple pak files such as pakchunk0_s1\n\x09 * This can be set in platform specific game.ini files\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If > 0 this sets a maximum size per chunk. Chunks larger than this size will be split into multiple pak files such as pakchunk0_s1\nThis can be set in platform specific game.ini files" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize = { "MaxChunkSize", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, MaxChunkSize), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** \n\x09 * If enabled, will generate data for HTTP Chunk Installer. This data can be hosted on webserver to be installed at runtime. Requires \"Generate Chunks\" enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If enabled, will generate data for HTTP Chunk Installer. This data can be hosted on webserver to be installed at runtime. Requires \"Generate Chunks\" enabled." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bBuildHttpChunkInstallData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData = { "bBuildHttpChunkInstallData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** \n\x09 * When \"Build HTTP Chunk Install Data\" is enabled this is the directory where the data will be build to.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "When \"Build HTTP Chunk Install Data\" is enabled this is the directory where the data will be build to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory = { "HttpChunkInstallDataDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, HttpChunkInstallDataDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09* Whether to write staging metadata back to the asset registry. This metadata contains information such as\n\x09* the actual compressed chunk sizes of the assets as well as some bulk data diff blame support information.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Whether to write staging metadata back to the asset registry. This metadata contains information such as\nthe actual compressed chunk sizes of the assets as well as some bulk data diff blame support information." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry = { "WriteBackMetadataToAssetRegistry", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, WriteBackMetadataToAssetRegistry), Z_Construct_UEnum_DeveloperToolSettings_EAssetRegistryWritebackMethod, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry_MetaData)) }; // 1394355778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Create compressed cooked packages (decreased deployment size)\n\x09 */" },
		{ "DisplayName", "Create compressed cooked packages" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Create compressed cooked packages (decreased deployment size)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed = { "bCompressed", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionFormat_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * A comma separated list of formats to use for .pak file and IoStore compression. If more than one is specified, the list is in order of priority, with fallbacks to other formats\n\x09 * in case of errors or unavailability of the format (plugin not enabled, etc).\n\x09 * Commonly PackageCompressionFormat=Oodle or PackageCompressionFormat=None\n\x09 */" },
		{ "DisplayName", "Package Compression Format" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A comma separated list of formats to use for .pak file and IoStore compression. If more than one is specified, the list is in order of priority, with fallbacks to other formats\nin case of errors or unavailability of the format (plugin not enabled, etc).\nCommonly PackageCompressionFormat=Oodle or PackageCompressionFormat=None" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionFormat = { "PackageCompressionFormat", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionFormat), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Force use of PackageCompressionFormat (do not use override HardwareCompressionFormat from DDPI)\n\x09 */" },
		{ "DisplayName", "Use this Compression Format not hardware override" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Force use of PackageCompressionFormat (do not use override HardwareCompressionFormat from DDPI)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bForceUseProjectCompressionFormatIgnoreHardwareOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride = { "bForceUseProjectCompressionFormatIgnoreHardwareOverride", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageAdditionalCompressionOptions_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * A generic setting for allowing a project to control compression settings during .pak file and iostore compression.\n\x09 * For instance PackageAdditionalCompressionOptions=-compressionblocksize=1MB -asynccompression\n\x09 */" },
		{ "DisplayName", "Package Compression Commandline Options" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A generic setting for allowing a project to control compression settings during .pak file and iostore compression.\nFor instance PackageAdditionalCompressionOptions=-compressionblocksize=1MB -asynccompression" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageAdditionalCompressionOptions = { "PackageAdditionalCompressionOptions", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageAdditionalCompressionOptions), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageAdditionalCompressionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageAdditionalCompressionOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMethod_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * For compressors with multiple methods, select one.  eg. for Oodle you may use one of {Kraken,Mermaid,Selkie,Leviathan}\n\x09 */" },
		{ "DisplayName", "Package Compression Method" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "For compressors with multiple methods, select one.  eg. for Oodle you may use one of {Kraken,Mermaid,Selkie,Leviathan}" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMethod = { "PackageCompressionMethod", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionMethod), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_DebugDevelopment_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/*\n\x09 * For compressors with variable levels, select the compressor effort level, which makes packages smaller but takes more time to encode.\n\x09 * This does not affect decode speed.  For faster iteration, use lower effort levels (eg. 1)\n\x09 */" },
		{ "DisplayName", "Compressor Effort Level for Debug & Development" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "* For compressors with variable levels, select the compressor effort level, which makes packages smaller but takes more time to encode.\n* This does not affect decode speed.  For faster iteration, use lower effort levels (eg. 1)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_DebugDevelopment = { "PackageCompressionLevel_DebugDevelopment", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionLevel_DebugDevelopment), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_DebugDevelopment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_DebugDevelopment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_TestShipping_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Compressor Effort Level for Test & Shipping" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_TestShipping = { "PackageCompressionLevel_TestShipping", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionLevel_TestShipping), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_TestShipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_TestShipping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_Distribution_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Compressor Effort Level for Distribution" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_Distribution = { "PackageCompressionLevel_Distribution", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionLevel_Distribution), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_Distribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinBytesSaved_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * A generic setting which is used to determine whether it is worth using compression for a block of data when creating IoStore or .pak files.\n\x09 * If the amount of saved bytes is smaller than the specified value, then the block of data remains uncompressed.\n\x09 * The optimal value of this setting depends on the capabilities of the target platform. For instance PackageCompressionMinBytesSaved=1024\n\x09 * Note that some compressors (for example Oodle) do their own internal worth it check and only use this value to determine the minimal size of a block which should be compressed.\n\x09 */" },
		{ "DisplayName", "Minimum amount of bytes which should be saved when compressing a block of data, otherwise data remains uncompressed" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A generic setting which is used to determine whether it is worth using compression for a block of data when creating IoStore or .pak files.\nIf the amount of saved bytes is smaller than the specified value, then the block of data remains uncompressed.\nThe optimal value of this setting depends on the capabilities of the target platform. For instance PackageCompressionMinBytesSaved=1024\nNote that some compressors (for example Oodle) do their own internal worth it check and only use this value to determine the minimal size of a block which should be compressed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinBytesSaved = { "PackageCompressionMinBytesSaved", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionMinBytesSaved), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinBytesSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinBytesSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinPercentSaved_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * A generic setting which is used to determine whether it is worth using compression for a block of data when creating IoStore or .pak files.\n\x09 * If the saved percentage of a compressed block of data is smaller than the specified value, then the block remains uncompressed.\n\x09 * The optimal value of this setting depends on the capabilities of the target platform. For instance PackageCompressionMinPercentSaved=5\n\x09 * Note that some compressors (for example Oodle) do their own internal worth it check and ignore this value.\n\x09 */" },
		{ "DisplayName", "Minimum percentage of a block of data which should be saved when performing compression, otherwise data remains uncompressed" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A generic setting which is used to determine whether it is worth using compression for a block of data when creating IoStore or .pak files.\nIf the saved percentage of a compressed block of data is smaller than the specified value, then the block remains uncompressed.\nThe optimal value of this setting depends on the capabilities of the target platform. For instance PackageCompressionMinPercentSaved=5\nNote that some compressors (for example Oodle) do their own internal worth it check and ignore this value." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinPercentSaved = { "PackageCompressionMinPercentSaved", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionMinPercentSaved), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinPercentSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinPercentSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Specifies if DDC should be used to store and retrieve compressed data when creating IoStore containers.\n\x09 */" },
		{ "DisplayName", "Enable DDC for IoStore compression" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies if DDC should be used to store and retrieve compressed data when creating IoStore containers." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bPackageCompressionEnableDDC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC = { "bPackageCompressionEnableDDC", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinSizeToConsiderDDC_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Specifies the minimum (uncompressed) size for storing a compressed IoStore chunk in DDC.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies the minimum (uncompressed) size for storing a compressed IoStore chunk in DDC." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinSizeToConsiderDDC = { "PackageCompressionMinSizeToConsiderDDC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, PackageCompressionMinSizeToConsiderDDC), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinSizeToConsiderDDC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinSizeToConsiderDDC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** \n\x09 * Version name for HTTP Chunk Install Data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Version name for HTTP Chunk Install Data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion = { "HttpChunkInstallDataVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, HttpChunkInstallDataVersion), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_MetaData[] = {
		{ "Category", "Prerequisites" },
		{ "Comment", "/** Specifies whether to include an installer for prerequisites of packaged games, such as redistributable operating system components, on platforms that support it. */" },
		{ "DisplayName", "Include prerequisites installer" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to include an installer for prerequisites of packaged games, such as redistributable operating system components, on platforms that support it." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludePrerequisites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites = { "IncludePrerequisites", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_MetaData[] = {
		{ "Category", "Prerequisites" },
		{ "Comment", "/** Specifies whether to include prerequisites alongside the game executable. */" },
		{ "DisplayName", "Include app-local prerequisites" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to include prerequisites alongside the game executable." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludeAppLocalPrerequisites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites = { "IncludeAppLocalPrerequisites", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** \n\x09 * By default shader code gets saved inline inside material assets, \n\x09 * enabling this option will store only shader code once as individual files\n\x09 * This will reduce overall package size but might increase loading time\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "By default shader code gets saved inline inside material assets,\nenabling this option will store only shader code once as individual files\nThis will reduce overall package size but might increase loading time" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bShareMaterialShaderCode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode = { "bShareMaterialShaderCode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** \n\x09 * With this option off, the shader code will be stored in the library essentially in a random order,\n\x09 * squarely the same in which the assets were loaded by the cooker. Enabling this will sort the shaders\n\x09 * by their hash, which makes the shader library more similar between the builds which can help patching, but\n\x09 * can adversely affect loading times.\n\x09 */" },
		{ "EditCondition", "bShareMaterialShaderCode" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "With this option off, the shader code will be stored in the library essentially in a random order,\nsquarely the same in which the assets were loaded by the cooker. Enabling this will sort the shaders\nby their hash, which makes the shader library more similar between the builds which can help patching, but\ncan adversely affect loading times." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bDeterministicShaderCodeOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder = { "bDeterministicShaderCodeOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * By default shader shader code gets saved into individual platform agnostic files,\n\x09 * enabling this option will use the platform-specific library format if and only if one is available\n\x09 * This will reduce overall package size but might increase loading time\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bShareMaterialShaderCode" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "By default shader shader code gets saved into individual platform agnostic files,\nenabling this option will use the platform-specific library format if and only if one is available\nThis will reduce overall package size but might increase loading time" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bSharedMaterialNativeLibraries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries = { "bSharedMaterialNativeLibraries", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory_MetaData[] = {
		{ "Category", "Prerequisites" },
		{ "Comment", "/** A directory containing additional prerequisite packages that should be staged in the executable directory. Can be relative to $(EngineDir) or $(ProjectDir) */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A directory containing additional prerequisite packages that should be staged in the executable directory. Can be relative to $(EngineDir) or $(ProjectDir)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory = { "ApplocalPrerequisitesDirectory", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, ApplocalPrerequisitesDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Specifies whether to include the crash reporter in the packaged project. \n\x09 * This is included by default for Blueprint based projects, but can optionally be disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Specifies whether to include the crash reporter in the packaged project.\nThis is included by default for Blueprint based projects, but can optionally be disabled." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->IncludeCrashReporter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter = { "IncludeCrashReporter", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** Predefined sets of culture whose internationalization data should be packaged. */" },
		{ "DisplayName", "Internationalization Support" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Predefined sets of culture whose internationalization data should be packaged." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset = { "InternationalizationPreset", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, InternationalizationPreset), Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingInternationalizationPresets, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_MetaData)) }; // 690106216
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_Inner = { "CulturesToStage", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** Cultures whose data should be cooked, staged, and packaged. */" },
		{ "DisplayName", "Localizations to Package" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Cultures whose data should be cooked, staged, and packaged." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage = { "CulturesToStage", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, CulturesToStage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk_Inner = { "LocalizationTargetsToChunk", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** List of localization targets that should be chunked during cooking (if using chunks) */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "List of localization targets that should be chunked during cooking (if using chunks)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk = { "LocalizationTargetsToChunk", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, LocalizationTargetsToChunk), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetCatchAllChunkId_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** The chunk ID that should be used as the catch-all chunk for any non-asset localized strings */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "The chunk ID that should be used as the catch-all chunk for any non-asset localized strings" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetCatchAllChunkId = { "LocalizationTargetCatchAllChunkId", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, LocalizationTargetCatchAllChunkId), METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetCatchAllChunkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetCatchAllChunkId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Cook all things in the project content directory\n\x09 */" },
		{ "DisplayName", "Cook everything in the project content directory (ignore list of maps below)" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Cook all things in the project content directory" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bCookAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll = { "bCookAll", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Cook only maps (this only affects the cookall flag)\n\x09 */" },
		{ "DisplayName", "Cook only maps (this only affects cookall)" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Cook only maps (this only affects the cookall flag)" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bCookMapsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly = { "bCookMapsOnly", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_MetaData[] = {
		{ "Comment", "/**\n\x09* Encrypt ini files inside of the pak file\n\x09* NOTE: Replaced by the settings inside the cryptokeys system. Kept here for legacy migration purposes.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Encrypt ini files inside of the pak file\nNOTE: Replaced by the settings inside the cryptokeys system. Kept here for legacy migration purposes." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bEncryptIniFiles_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles = { "bEncryptIniFiles", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_MetaData[] = {
		{ "Comment", "/**\n\x09* Encrypt the pak index\n\x09* NOTE: Replaced by the settings inside the cryptokeys system. Kept here for legacy migration purposes.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Encrypt the pak index\nNOTE: Replaced by the settings inside the cryptokeys system. Kept here for legacy migration purposes." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bEncryptPakIndex_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex = { "bEncryptPakIndex", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_MetaData[] = {
		{ "Comment", "/**\n\x09 * Enable the early downloader pak file pakearly.txt\n\x09 * This has been superseded by the functionality in DefaultPakFileRules.ini\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Enable the early downloader pak file pakearly.txt\nThis has been superseded by the functionality in DefaultPakFileRules.ini" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->GenerateEarlyDownloaderPakFile_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile = { "GenerateEarlyDownloaderPakFile", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Don't include content in any editor folders when cooking.  This can cause issues with missing content in cooked games if the content is being used. \n\x09 */" },
		{ "DisplayName", "Exclude editor content when cooking" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Don't include content in any editor folders when cooking.  This can cause issues with missing content in cooked games if the content is being used." },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bSkipEditorContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent = { "bSkipEditorContent", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Don't include movies by default when staging/packaging\n\x09 * Specific movies can be specified below, and this can be in a platform ini\n\x09 */" },
		{ "DisplayName", "Exclude movie files when staging" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Don't include movies by default when staging/packaging\nSpecific movies can be specified below, and this can be in a platform ini" },
	};
#endif
	void Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_SetBit(void* Obj)
	{
		((UProjectPackagingSettings*)Obj)->bSkipMovies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies = { "bSkipMovies", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectPackagingSettings), &Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_Inner = { "UFSMovies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * If SkipMovies is true, these specific movies will still be added to the .pak file (if using a .pak file; otherwise they're copied as individual files)\n\x09 * This should be the name with no extension\n\x09 */" },
		{ "DisplayName", "Specific movies to Package" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If SkipMovies is true, these specific movies will still be added to the .pak file (if using a .pak file; otherwise they're copied as individual files)\nThis should be the name with no extension" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies = { "UFSMovies", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, UFSMovies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_Inner = { "NonUFSMovies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * If SkipMovies is true, these specific movies will be copied when packaging your project, but are not supposed to be part of the .pak file\n\x09 * This should be the name with no extension\n\x09 */" },
		{ "DisplayName", "Specific movies to Copy" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If SkipMovies is true, these specific movies will be copied when packaging your project, but are not supposed to be part of the .pak file\nThis should be the name with no extension" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies = { "NonUFSMovies", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, NonUFSMovies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_Inner = { "CompressedChunkWildcard", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * If set, only these specific pak files will be compressed. This should take the form of \"*pakchunk0*\"\n\x09 * This can be set in a platform-specific ini file\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "If set, only these specific pak files will be compressed. This should take the form of \"*pakchunk0*\"\nThis can be set in a platform-specific ini file" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard = { "CompressedChunkWildcard", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, CompressedChunkWildcard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist_Inner = { "IniKeyBlacklist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = Packaging */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is no longer supported. Use IniKeyDenylist." },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", ", EditAnywhere, Category = Packaging" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist = { "IniKeyBlacklist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, IniKeyBlacklist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist_Inner = { "IniKeyDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** List of ini file keys to strip when packaging */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "List of ini file keys to strip when packaging" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist = { "IniKeyDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, IniKeyDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist_Inner = { "IniSectionBlacklist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = Packaging */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is no longer supported. Use IniSectionDenylist." },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", ", EditAnywhere, Category = Packaging" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist = { "IniSectionBlacklist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, IniSectionBlacklist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist_Inner = { "IniSectionDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/** List of ini file sections to strip when packaging */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "List of ini file sections to strip when packaging" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist = { "IniSectionDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, IniSectionDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_Inner = { "EarlyDownloaderPakFileFiles", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_MetaData[] = {
		{ "Comment", "/**\n\x09 * List of specific files to include with GenerateEarlyDownloaderPakFile\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "List of specific files to include with GenerateEarlyDownloaderPakFile" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles = { "EarlyDownloaderPakFileFiles", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, EarlyDownloaderPakFileFiles_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_Inner = { "MapsToCook", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * List of maps to include when no other map list is specified on commandline\n\x09 */" },
		{ "DisplayName", "List of maps to include in a packaged build" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of maps to include when no other map list is specified on commandline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook = { "MapsToCook", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, MapsToCook), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_Inner = { "DirectoriesToAlwaysCook", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing .uasset files that should always be cooked regardless of whether they're referenced by anything in your project\n\x09 * These paths are stored either as a full package path (e.g. /Game/Folder, /Engine/Folder, /PluginName/Folder) or as a relative package path from /Game\n\x09 */" },
		{ "DisplayName", "Additional Asset Directories to Cook" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Directories containing .uasset files that should always be cooked regardless of whether they're referenced by anything in your project\nThese paths are stored either as a full package path (e.g. /Game/Folder, /Engine/Folder, /PluginName/Folder) or as a relative package path from /Game" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook = { "DirectoriesToAlwaysCook", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysCook), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_Inner = { "DirectoriesToNeverCook", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing .uasset files that should never be cooked even if they are referenced by your project\n\x09 * These paths are stored either as a full package path (e.g. /Game/Folder, /Engine/Folder, /PluginName/Folder) or as a relative package path from /Game\n\x09 */" },
		{ "DisplayName", "Directories to never cook" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Directories containing .uasset files that should never be cooked even if they are referenced by your project\nThese paths are stored either as a full package path (e.g. /Game/Folder, /Engine/Folder, /PluginName/Folder) or as a relative package path from /Game" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook = { "DirectoriesToNeverCook", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToNeverCook), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch_Inner = { "TestDirectoriesToNotSearch", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing .uasset files that are for editor testing purposes and should not be included in\n\x09 * enumerations of all packages in a root directory, because they will cause errors on load\n\x09 * These paths are stored either as a full package path (e.g. /Game/Folder, /Engine/Folder, /PluginName/Folder) or as a relative package path from /Game\n\x09 */" },
		{ "DisplayName", "Test directories to not search" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "Directories containing .uasset files that are for editor testing purposes and should not be included in\nenumerations of all packages in a root directory, because they will cause errors on load\nThese paths are stored either as a full package path (e.g. /Game/Folder, /Engine/Folder, /PluginName/Folder) or as a relative package path from /Game" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch = { "TestDirectoriesToNotSearch", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, TestDirectoriesToNotSearch), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_Inner = { "DirectoriesToAlwaysStageAsUFS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing files that should always be added to the .pak file (if using a .pak file; otherwise they're copied as individual files)\n\x09 * This is used to stage additional files that you manually load via the UFS (Unreal File System) file IO API\n\x09 * Note: These paths are relative to your project Content directory\n\x09 */" },
		{ "DisplayName", "Additional Non-Asset Directories to Package" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be added to the .pak file (if using a .pak file; otherwise they're copied as individual files)\nThis is used to stage additional files that you manually load via the UFS (Unreal File System) file IO API\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS = { "DirectoriesToAlwaysStageAsUFS", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsUFS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_Inner = { "DirectoriesToAlwaysStageAsNonUFS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing files that should always be copied when packaging your project, but are not supposed to be part of the .pak file\n\x09 * This is used to stage additional files that you manually load without using the UFS (Unreal File System) file IO API, eg, third-party libraries that perform their own internal file IO\n\x09 * Note: These paths are relative to your project Content directory\n\x09 */" },
		{ "DisplayName", "Additional Non-Asset Directories To Copy" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be copied when packaging your project, but are not supposed to be part of the .pak file\nThis is used to stage additional files that you manually load without using the UFS (Unreal File System) file IO API, eg, third-party libraries that perform their own internal file IO\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS = { "DirectoriesToAlwaysStageAsNonUFS", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsNonUFS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_Inner = { "DirectoriesToAlwaysStageAsUFSServer", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing files that should always be added to the .pak file for a dedicated server (if using a .pak file; otherwise they're copied as individual files)\n\x09 * This is used to stage additional files that you manually load via the UFS (Unreal File System) file IO API\n\x09 * Note: These paths are relative to your project Content directory\n\x09 */" },
		{ "DisplayName", "Additional Non-Asset Directories to Package for dedicated server only" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be added to the .pak file for a dedicated server (if using a .pak file; otherwise they're copied as individual files)\nThis is used to stage additional files that you manually load via the UFS (Unreal File System) file IO API\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer = { "DirectoriesToAlwaysStageAsUFSServer", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsUFSServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_Inner = { "DirectoriesToAlwaysStageAsNonUFSServer", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * Directories containing files that should always be copied when packaging your project for a dedicated server, but are not supposed to be part of the .pak file\n\x09 * This is used to stage additional files that you manually load without using the UFS (Unreal File System) file IO API, eg, third-party libraries that perform their own internal file IO\n\x09 * Note: These paths are relative to your project Content directory\n\x09 */" },
		{ "DisplayName", "Additional Non-Asset Directories To Copy for dedicated server only" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories containing files that should always be copied when packaging your project for a dedicated server, but are not supposed to be part of the .pak file\nThis is used to stage additional files that you manually load without using the UFS (Unreal File System) file IO API, eg, third-party libraries that perform their own internal file IO\nNote: These paths are relative to your project Content directory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer = { "DirectoriesToAlwaysStageAsNonUFSServer", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, DirectoriesToAlwaysStageAsNonUFSServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds_Inner = { "ProjectCustomBuilds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProjectBuildSettings, METADATA_PARAMS(nullptr, 0) }; // 3467977305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "/**\n\x09 * A list of custom builds that will show up in the Platforms menu to allow customized builds that make sense for your project. Will show up near Package Project in the Platforms menu.\n\x09 */" },
		{ "DisplayName", "Additional builds for this project." },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A list of custom builds that will show up in the Platforms menu to allow customized builds that make sense for your project. Will show up near Package Project in the Platforms menu." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds = { "ProjectCustomBuilds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, ProjectCustomBuilds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds_MetaData)) }; // 3467977305
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds_Inner = { "EngineCustomBuilds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProjectBuildSettings, METADATA_PARAMS(nullptr, 0) }; // 3467977305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds_MetaData[] = {
		{ "Comment", "/**\n\x09 * A list of custom builds, specified in engine ini files, and not editable in editor, that will show up in the Platforms menu to allow customized builds for all projects\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/ProjectPackagingSettings.h" },
		{ "ToolTip", "A list of custom builds, specified in engine ini files, and not editable in editor, that will show up in the Platforms menu to allow customized builds for all projects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds = { "EngineCustomBuilds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectPackagingSettings, EngineCustomBuilds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds_MetaData)) }; // 3467977305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectPackagingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_Build,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BuildTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_FullRebuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ForDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeDebugFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_BlueprintNativizationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NativizeBlueprintAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bIncludeNativizedAssetsInProjectGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bExcludeMonolithicEngineHeadersInNativizedCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UsePakFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseIoStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bUseZenStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bMakeBinaryConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bGenerateNoChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bChunkHardReferencesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceOneChunkPerFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MaxChunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bBuildHttpChunkInstallData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_WriteBackMetadataToAssetRegistry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bForceUseProjectCompressionFormatIgnoreHardwareOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageAdditionalCompressionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_DebugDevelopment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_TestShipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionLevel_Distribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinBytesSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinPercentSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bPackageCompressionEnableDDC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_PackageCompressionMinSizeToConsiderDDC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_HttpChunkInstallDataVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludePrerequisites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeAppLocalPrerequisites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bShareMaterialShaderCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bDeterministicShaderCodeOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSharedMaterialNativeLibraries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ApplocalPrerequisitesDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IncludeCrashReporter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_InternationalizationPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CulturesToStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetsToChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_LocalizationTargetCatchAllChunkId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bCookMapsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptIniFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bEncryptPakIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_GenerateEarlyDownloaderPakFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipEditorContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_bSkipMovies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_UFSMovies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_NonUFSMovies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_CompressedChunkWildcard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyBlacklist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniKeyDenylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionBlacklist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_IniSectionDenylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EarlyDownloaderPakFileFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_MapsToCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToNeverCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_TestDirectoriesToNotSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsUFSServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_DirectoriesToAlwaysStageAsNonUFSServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_ProjectCustomBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectPackagingSettings_Statics::NewProp_EngineCustomBuilds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectPackagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectPackagingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectPackagingSettings_Statics::ClassParams = {
		&UProjectPackagingSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProjectPackagingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectPackagingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectPackagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectPackagingSettings()
	{
		if (!Z_Registration_Info_UClass_UProjectPackagingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectPackagingSettings.OuterSingleton, Z_Construct_UClass_UProjectPackagingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectPackagingSettings.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UClass* StaticClass<UProjectPackagingSettings>()
	{
		return UProjectPackagingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectPackagingSettings);
	UProjectPackagingSettings::~UProjectPackagingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::EnumInfo[] = {
		{ EProjectPackagingBuildConfigurations_StaticEnum, TEXT("EProjectPackagingBuildConfigurations"), &Z_Registration_Info_UEnum_EProjectPackagingBuildConfigurations, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 223703122U) },
		{ EProjectPackagingInternationalizationPresets_StaticEnum, TEXT("EProjectPackagingInternationalizationPresets"), &Z_Registration_Info_UEnum_EProjectPackagingInternationalizationPresets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 690106216U) },
		{ EProjectPackagingBuild_StaticEnum, TEXT("EProjectPackagingBuild"), &Z_Registration_Info_UEnum_EProjectPackagingBuild, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1579668242U) },
		{ EProjectPackagingBlueprintNativizationMethod_StaticEnum, TEXT("EProjectPackagingBlueprintNativizationMethod"), &Z_Registration_Info_UEnum_EProjectPackagingBlueprintNativizationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3201253410U) },
		{ EAssetRegistryWritebackMethod_StaticEnum, TEXT("EAssetRegistryWritebackMethod"), &Z_Registration_Info_UEnum_EAssetRegistryWritebackMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1394355778U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::ScriptStructInfo[] = {
		{ FPakOrderFileSpec::StaticStruct, Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics::NewStructOps, TEXT("PakOrderFileSpec"), &Z_Registration_Info_UScriptStruct_PakOrderFileSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPakOrderFileSpec), 4119169566U) },
		{ FProjectBuildSettings::StaticStruct, Z_Construct_UScriptStruct_FProjectBuildSettings_Statics::NewStructOps, TEXT("ProjectBuildSettings"), &Z_Registration_Info_UScriptStruct_ProjectBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectBuildSettings), 3467977305U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectPackagingSettings, UProjectPackagingSettings::StaticClass, TEXT("UProjectPackagingSettings"), &Z_Registration_Info_UClass_UProjectPackagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectPackagingSettings), 3183958960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_3314664027(TEXT("/Script/DeveloperToolSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
