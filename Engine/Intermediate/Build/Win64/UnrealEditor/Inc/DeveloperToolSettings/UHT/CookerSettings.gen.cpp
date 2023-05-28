// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookerSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UCookerSettings();
	DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UCookerSettings_NoRegister();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor();
	UPackage* Z_Construct_UPackage__Script_DeveloperToolSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECookProgressDisplayMode;
	static UEnum* ECookProgressDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECookProgressDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECookProgressDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("ECookProgressDisplayMode"));
		}
		return Z_Registration_Info_UEnum_ECookProgressDisplayMode.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<ECookProgressDisplayMode>()
	{
		return ECookProgressDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::Enumerators[] = {
		{ "ECookProgressDisplayMode::Nothing", (int64)ECookProgressDisplayMode::Nothing },
		{ "ECookProgressDisplayMode::RemainingPackages", (int64)ECookProgressDisplayMode::RemainingPackages },
		{ "ECookProgressDisplayMode::PackageNames", (int64)ECookProgressDisplayMode::PackageNames },
		{ "ECookProgressDisplayMode::NamesAndRemainingPackages", (int64)ECookProgressDisplayMode::NamesAndRemainingPackages },
		{ "ECookProgressDisplayMode::Instigators", (int64)ECookProgressDisplayMode::Instigators },
		{ "ECookProgressDisplayMode::InstigatorsAndCount", (int64)ECookProgressDisplayMode::InstigatorsAndCount },
		{ "ECookProgressDisplayMode::InstigatorsAndNames", (int64)ECookProgressDisplayMode::InstigatorsAndNames },
		{ "ECookProgressDisplayMode::InstigatorsAndNamesAndCount", (int64)ECookProgressDisplayMode::InstigatorsAndNamesAndCount },
		{ "ECookProgressDisplayMode::Max", (int64)ECookProgressDisplayMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "Instigators.Comment", "/** Display names and instigators of cooked packages */" },
		{ "Instigators.Name", "ECookProgressDisplayMode::Instigators" },
		{ "Instigators.ToolTip", "Display names and instigators of cooked packages" },
		{ "InstigatorsAndCount.Comment", "/** Display instigators and count of remaining packages */" },
		{ "InstigatorsAndCount.Name", "ECookProgressDisplayMode::InstigatorsAndCount" },
		{ "InstigatorsAndCount.ToolTip", "Display instigators and count of remaining packages" },
		{ "InstigatorsAndNames.Comment", "/** Display instigators and names of cooked packages */" },
		{ "InstigatorsAndNames.Name", "ECookProgressDisplayMode::InstigatorsAndNames" },
		{ "InstigatorsAndNames.ToolTip", "Display instigators and names of cooked packages" },
		{ "InstigatorsAndNamesAndCount.Comment", "/** Display instigators and names and count of cooked packages */" },
		{ "InstigatorsAndNamesAndCount.Name", "ECookProgressDisplayMode::InstigatorsAndNamesAndCount" },
		{ "InstigatorsAndNamesAndCount.ToolTip", "Display instigators and names and count of cooked packages" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ECookProgressDisplayMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "NamesAndRemainingPackages.Comment", "/** Display the number of remaining packages and package names */" },
		{ "NamesAndRemainingPackages.Name", "ECookProgressDisplayMode::NamesAndRemainingPackages" },
		{ "NamesAndRemainingPackages.ToolTip", "Display the number of remaining packages and package names" },
		{ "Nothing.Comment", "/** Don't display any progress messages */" },
		{ "Nothing.Name", "ECookProgressDisplayMode::Nothing" },
		{ "Nothing.ToolTip", "Don't display any progress messages" },
		{ "PackageNames.Comment", "/** Display names of cooked packages */" },
		{ "PackageNames.Name", "ECookProgressDisplayMode::PackageNames" },
		{ "PackageNames.ToolTip", "Display names of cooked packages" },
		{ "RemainingPackages.Comment", "/** Display the number of remaining packages */" },
		{ "RemainingPackages.Name", "ECookProgressDisplayMode::RemainingPackages" },
		{ "RemainingPackages.ToolTip", "Display the number of remaining packages" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"ECookProgressDisplayMode",
		"ECookProgressDisplayMode",
		Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_ECookProgressDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECookProgressDisplayMode.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECookProgressDisplayMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod;
	static UEnum* EBlueprintComponentDataCookingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EBlueprintComponentDataCookingMethod"));
		}
		return Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EBlueprintComponentDataCookingMethod>()
	{
		return EBlueprintComponentDataCookingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::Enumerators[] = {
		{ "EBlueprintComponentDataCookingMethod::Disabled", (int64)EBlueprintComponentDataCookingMethod::Disabled },
		{ "EBlueprintComponentDataCookingMethod::AllBlueprints", (int64)EBlueprintComponentDataCookingMethod::AllBlueprints },
		{ "EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly", (int64)EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::Enum_MetaDataParams[] = {
		{ "AllBlueprints.Comment", "/** Generate optimized component data for all Blueprint types. This option will require the most additional memory. */" },
		{ "AllBlueprints.Name", "EBlueprintComponentDataCookingMethod::AllBlueprints" },
		{ "AllBlueprints.ToolTip", "Generate optimized component data for all Blueprint types. This option will require the most additional memory." },
		{ "Disabled.Comment", "/** Do not generate optimized component data. No additional memory will be used. */" },
		{ "Disabled.Name", "EBlueprintComponentDataCookingMethod::Disabled" },
		{ "Disabled.ToolTip", "Do not generate optimized component data. No additional memory will be used." },
		{ "EnabledBlueprintsOnly.Comment", "/** Generate optimized component data only for Blueprint types that have explicitly enabled this feature in the class settings. */" },
		{ "EnabledBlueprintsOnly.Name", "EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly" },
		{ "EnabledBlueprintsOnly.ToolTip", "Generate optimized component data only for Blueprint types that have explicitly enabled this feature in the class settings." },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EBlueprintComponentDataCookingMethod",
		"EBlueprintComponentDataCookingMethod",
		Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod;
	static UEnum* EBlueprintPropertyGuidsCookingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("EBlueprintPropertyGuidsCookingMethod"));
		}
		return Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EBlueprintPropertyGuidsCookingMethod>()
	{
		return EBlueprintPropertyGuidsCookingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::Enumerators[] = {
		{ "EBlueprintPropertyGuidsCookingMethod::Disabled", (int64)EBlueprintPropertyGuidsCookingMethod::Disabled },
		{ "EBlueprintPropertyGuidsCookingMethod::AllBlueprints", (int64)EBlueprintPropertyGuidsCookingMethod::AllBlueprints },
		{ "EBlueprintPropertyGuidsCookingMethod::EnabledBlueprintsOnly", (int64)EBlueprintPropertyGuidsCookingMethod::EnabledBlueprintsOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::Enum_MetaDataParams[] = {
		{ "AllBlueprints.Comment", "/** Include the property GUIDs in a cooked build for all Blueprint types. This option will require the most additional memory. */" },
		{ "AllBlueprints.Name", "EBlueprintPropertyGuidsCookingMethod::AllBlueprints" },
		{ "AllBlueprints.ToolTip", "Include the property GUIDs in a cooked build for all Blueprint types. This option will require the most additional memory." },
		{ "Disabled.Comment", "/** Do not include the property GUIDs in a cooked build. No additional memory will be used. */" },
		{ "Disabled.Name", "EBlueprintPropertyGuidsCookingMethod::Disabled" },
		{ "Disabled.ToolTip", "Do not include the property GUIDs in a cooked build. No additional memory will be used." },
		{ "EnabledBlueprintsOnly.Comment", "/** Include the property GUIDs in a cooked build only for Blueprint types that have explicitly enabled this feature in their class settings. */" },
		{ "EnabledBlueprintsOnly.Name", "EBlueprintPropertyGuidsCookingMethod::EnabledBlueprintsOnly" },
		{ "EnabledBlueprintsOnly.ToolTip", "Include the property GUIDs in a cooked build only for Blueprint types that have explicitly enabled this feature in their class settings." },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"EBlueprintPropertyGuidsCookingMethod",
		"EBlueprintPropertyGuidsCookingMethod",
		Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureFormatASTCCompressor;
	static UEnum* ETextureFormatASTCCompressor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureFormatASTCCompressor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureFormatASTCCompressor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor, (UObject*)Z_Construct_UPackage__Script_DeveloperToolSettings(), TEXT("ETextureFormatASTCCompressor"));
		}
		return Z_Registration_Info_UEnum_ETextureFormatASTCCompressor.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<ETextureFormatASTCCompressor>()
	{
		return ETextureFormatASTCCompressor_StaticEnum();
	}
	struct Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::Enumerators[] = {
		{ "ETextureFormatASTCCompressor::IntelISPC", (int64)ETextureFormatASTCCompressor::IntelISPC },
		{ "ETextureFormatASTCCompressor::Arm", (int64)ETextureFormatASTCCompressor::Arm },
		{ "ETextureFormatASTCCompressor::Max", (int64)ETextureFormatASTCCompressor::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::Enum_MetaDataParams[] = {
		{ "Arm.Comment", "/** /ThirdParty/ARM */" },
		{ "Arm.Name", "ETextureFormatASTCCompressor::Arm" },
		{ "Arm.ToolTip", "/ThirdParty/ARM" },
		{ "IntelISPC.Comment", "/** ThirdParty/Intel/ISPCTexComp */" },
		{ "IntelISPC.Name", "ETextureFormatASTCCompressor::IntelISPC" },
		{ "IntelISPC.ToolTip", "ThirdParty/Intel/ISPCTexComp" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETextureFormatASTCCompressor::Max" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
		nullptr,
		"ETextureFormatASTCCompressor",
		"ETextureFormatASTCCompressor",
		Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor()
	{
		if (!Z_Registration_Info_UEnum_ETextureFormatASTCCompressor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureFormatASTCCompressor.InnerSingleton, Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureFormatASTCCompressor.InnerSingleton;
	}
	void UCookerSettings::StaticRegisterNativesUCookerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookerSettings);
	UClass* Z_Construct_UClass_UCookerSettings_NoRegister()
	{
		return UCookerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCookerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCookOnTheSide_MetaData[];
#endif
		static void NewProp_bEnableCookOnTheSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCookOnTheSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBuildDDCInBackground_MetaData[];
#endif
		static void NewProp_bEnableBuildDDCInBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBuildDDCInBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIterativeCookingForLaunchOn_MetaData[];
#endif
		static void NewProp_bIterativeCookingForLaunchOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIterativeCookingForLaunchOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIterativeCookingForFileCookContent_MetaData[];
#endif
		static void NewProp_bIterativeCookingForFileCookContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIterativeCookingForFileCookContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookOnTheFlyForLaunchOn_MetaData[];
#endif
		static void NewProp_bCookOnTheFlyForLaunchOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnTheFlyForLaunchOn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookProgressDisplayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookProgressDisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CookProgressDisplayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData[];
#endif
		static void NewProp_bIgnoreIniSettingsOutOfDateForIteration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreIniSettingsOutOfDateForIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData[];
#endif
		static void NewProp_bIgnoreScriptPackagesOutOfDateForIteration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreScriptPackagesOutOfDateForIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileBlueprintsInDevelopmentMode_MetaData[];
#endif
		static void NewProp_bCompileBlueprintsInDevelopmentMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileBlueprintsInDevelopmentMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BlueprintComponentDataCookingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintComponentDataCookingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlueprintComponentDataCookingMethod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BlueprintPropertyGuidsCookingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPropertyGuidsCookingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlueprintPropertyGuidsCookingMethod;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassesExcludedOnDedicatedServer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassesExcludedOnDedicatedServer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesExcludedOnDedicatedServer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModulesExcludedOnDedicatedServer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulesExcludedOnDedicatedServer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModulesExcludedOnDedicatedServer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassesExcludedOnDedicatedClient_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassesExcludedOnDedicatedClient_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesExcludedOnDedicatedClient;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModulesExcludedOnDedicatedClient_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulesExcludedOnDedicatedClient_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModulesExcludedOnDedicatedClient;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VersionedIntRValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionedIntRValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VersionedIntRValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultASTCQualityBySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultASTCQualityBySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultASTCQualityBySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultASTCQualityBySize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultASTCCompressor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultASTCCompressor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultASTCCompressor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowASTCHDRProfile_MetaData[];
#endif
		static void NewProp_bAllowASTCHDRProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowASTCHDRProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCookedDataInEditorBuilds_MetaData[];
#endif
		static void NewProp_bAllowCookedDataInEditorBuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCookedDataInEditorBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookBlueprintComponentTemplateData_MetaData[];
#endif
		static void NewProp_bCookBlueprintComponentTemplateData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookBlueprintComponentTemplateData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Various cooker settings.\n */" },
		{ "DisplayName", "Cooker" },
		{ "IncludePath", "CookerSettings.h" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Various cooker settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable cooking via network in the background of the editor, launch on uses this setting, requires device to have network access to editor" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bEnableCookOnTheSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide = { "bEnableCookOnTheSide", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_MetaData[] = {
		{ "Category", "Cooker" },
		{ "DisplayName", "Generate DDC data in background for desired launch on platform (speeds up launch on)" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bEnableBuildDDCInBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground = { "bEnableBuildDDCInBackground", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Enable -iterate for launch on */" },
		{ "DisplayName", "Iterative cooking for builds launched from the editor (launch on)" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Enable -iterate for launch on" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIterativeCookingForLaunchOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn = { "bIterativeCookingForLaunchOn", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Enable -iterate when triggering from File dropdown menu */" },
		{ "DisplayName", "Iterative cooking for the File->Cook Content menu item" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Enable -iterate when triggering from File dropdown menu" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIterativeCookingForFileCookContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent = { "bIterativeCookingForFileCookContent", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Enable -cookonthefly for launch on */" },
		{ "DisplayName", "Cooking on the fly when launching from the editor (launch on)" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Enable -cookonthefly for launch on" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bCookOnTheFlyForLaunchOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn = { "bCookOnTheFlyForLaunchOn", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_MetaData[] = {
		{ "Category", "Cooker" },
		{ "ConsoleVariable", "cook.displaymode" },
		{ "DisplayName", "Cooker Progress Display Mode" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Controls log output of the cooker" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode = { "CookProgressDisplayMode", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, CookProgressDisplayMode), Z_Construct_UEnum_DeveloperToolSettings_ECookProgressDisplayMode, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_MetaData)) }; // 2630382575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Ignore ini changes when doing iterative cooking, either in editor or out of editor */" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Ignore ini changes when doing iterative cooking, either in editor or out of editor" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIgnoreIniSettingsOutOfDateForIteration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration = { "bIgnoreIniSettingsOutOfDateForIteration", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Ignore native header file changes when doing iterative cooking, either in editor or out of editor */" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Ignore native header file changes when doing iterative cooking, either in editor or out of editor" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bIgnoreScriptPackagesOutOfDateForIteration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration = { "bIgnoreScriptPackagesOutOfDateForIteration", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Whether or not to compile Blueprints in development mode when cooking. */" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Whether or not to compile Blueprints in development mode when cooking." },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bCompileBlueprintsInDevelopmentMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode = { "bCompileBlueprintsInDevelopmentMode", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** Generate optimized component data to speed up Blueprint construction at runtime. This option can increase the overall Blueprint memory usage in a cooked build. Requires Event-Driven Loading (EDL), which is enabled by default. */" },
		{ "DisplayName", "Generate optimized Blueprint component data" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Generate optimized component data to speed up Blueprint construction at runtime. This option can increase the overall Blueprint memory usage in a cooked build. Requires Event-Driven Loading (EDL), which is enabled by default." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod = { "BlueprintComponentDataCookingMethod", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, BlueprintComponentDataCookingMethod), Z_Construct_UEnum_DeveloperToolSettings_EBlueprintComponentDataCookingMethod, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_MetaData)) }; // 3072234184
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/**\n\x09 * Should we include the property GUIDs for a Blueprint class in a cooked build, so that SaveGame archives can redirect property names via the GUIDs?\n\x09 * @note This option can increase the overall Blueprint memory usage in a cooked build, but can avoid needing to add CoreRedirect data for Blueprint classes stored within SaveGame archives.\n\x09 */" },
		{ "DisplayName", "Cook Blueprint property GUIDs?" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Should we include the property GUIDs for a Blueprint class in a cooked build, so that SaveGame archives can redirect property names via the GUIDs?\n@note This option can increase the overall Blueprint memory usage in a cooked build, but can avoid needing to add CoreRedirect data for Blueprint classes stored within SaveGame archives." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod = { "BlueprintPropertyGuidsCookingMethod", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, BlueprintPropertyGuidsCookingMethod), Z_Construct_UEnum_DeveloperToolSettings_EBlueprintPropertyGuidsCookingMethod, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod_MetaData)) }; // 1225359666
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_Inner = { "ClassesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** List of class names to exclude when cooking for dedicated server */" },
		{ "DisplayName", "Classes excluded when cooking for dedicated server" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "List of class names to exclude when cooking for dedicated server" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer = { "ClassesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, ClassesExcludedOnDedicatedServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_Inner = { "ModulesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** List of module names to exclude when cooking for dedicated server */" },
		{ "DisplayName", "Modules excluded when cooking for dedicated server" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "List of module names to exclude when cooking for dedicated server" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer = { "ModulesExcludedOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, ModulesExcludedOnDedicatedServer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_Inner = { "ClassesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** List of class names to exclude when cooking for dedicated client */" },
		{ "DisplayName", "Classes excluded when cooking for dedicated client" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "List of class names to exclude when cooking for dedicated client" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient = { "ClassesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, ClassesExcludedOnDedicatedClient), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_Inner = { "ModulesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** List of module names to exclude when cooking for dedicated client */" },
		{ "DisplayName", "Modules excluded when cooking for dedicated client" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "List of module names to exclude when cooking for dedicated client" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient = { "ModulesExcludedOnDedicatedClient", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, ModulesExcludedOnDedicatedClient), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_Inner = { "VersionedIntRValues", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_MetaData[] = {
		{ "Category", "Cooker" },
		{ "Comment", "/** List of r values that need to be versioned */" },
		{ "DisplayName", "r values that need to be versioned" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "List of r values that need to be versioned" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues = { "VersionedIntRValues", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, VersionedIntRValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Quality of 0 means fastest, 3 means best quality */" },
		{ "DisplayName", "ASTC Compression Quality vs Speed (0-3, 0 is fastest)" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Quality of 0 means fastest, 3 means best quality" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed = { "DefaultASTCQualityBySpeed", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, DefaultASTCQualityBySpeed), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Quality of 0 means smallest (12x12 block size), 4 means best (4x4 block size) */" },
		{ "DisplayName", "ASTC Compression Quality vs Size (0-4, 0 is smallest)" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Quality of 0 means smallest (12x12 block size), 4 means best (4x4 block size)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize = { "DefaultASTCQualityBySize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, DefaultASTCQualityBySize), METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "cook.ASTCTextureCompressor" },
		{ "DisplayName", "ASTC Texture Compressor" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "which compressor to use for ASTC textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor = { "DefaultASTCCompressor", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerSettings, DefaultASTCCompressor), Z_Construct_UEnum_DeveloperToolSettings_ETextureFormatASTCCompressor, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor_MetaData)) }; // 3278274103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "cook.AllowASTCHDRProfile" },
		{ "DisplayName", "ASTC HDR Profile" },
		{ "EditCondition", "DefaultASTCCompressor == ETextureFormatASTCCompressor::Arm" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "whether to allow ASTC HDR profile using Arm encoder, the hdr format is only supported on some devices, e.g. Apple A13, Mali-G72, Adreno (TM) 660" },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bAllowASTCHDRProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile = { "bAllowASTCHDRProfile", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_MetaData[] = {
		{ "Category", "Editor" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "cook.AllowCookedDataInEditorBuilds" },
		{ "DisplayName", "Allow Cooked Content In The Editor" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "If true, the editor will be able to open cooked assets (limited to a subset of supported asset types)." },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bAllowCookedDataInEditorBuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds = { "bAllowCookedDataInEditorBuilds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_MetaData[] = {
		{ "Comment", "/** Deprecated. Use BlueprintComponentDataCookingMethod instead. */" },
		{ "ModuleRelativePath", "Classes/CookerSettings.h" },
		{ "ToolTip", "Deprecated. Use BlueprintComponentDataCookingMethod instead." },
	};
#endif
	void Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_SetBit(void* Obj)
	{
		((UCookerSettings*)Obj)->bCookBlueprintComponentTemplateData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData = { "bCookBlueprintComponentTemplateData", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCookerSettings), &Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableCookOnTheSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bEnableBuildDDCInBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForLaunchOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIterativeCookingForFileCookContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookOnTheFlyForLaunchOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_CookProgressDisplayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreIniSettingsOutOfDateForIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bIgnoreScriptPackagesOutOfDateForIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCompileBlueprintsInDevelopmentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintComponentDataCookingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_BlueprintPropertyGuidsCookingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ClassesExcludedOnDedicatedClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_ModulesExcludedOnDedicatedClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_VersionedIntRValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCQualityBySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_DefaultASTCCompressor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowASTCHDRProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bAllowCookedDataInEditorBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerSettings_Statics::NewProp_bCookBlueprintComponentTemplateData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookerSettings_Statics::ClassParams = {
		&UCookerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCookerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCookerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookerSettings()
	{
		if (!Z_Registration_Info_UClass_UCookerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookerSettings.OuterSingleton, Z_Construct_UClass_UCookerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookerSettings.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UClass* StaticClass<UCookerSettings>()
	{
		return UCookerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookerSettings);
	UCookerSettings::~UCookerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics::EnumInfo[] = {
		{ ECookProgressDisplayMode_StaticEnum, TEXT("ECookProgressDisplayMode"), &Z_Registration_Info_UEnum_ECookProgressDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2630382575U) },
		{ EBlueprintComponentDataCookingMethod_StaticEnum, TEXT("EBlueprintComponentDataCookingMethod"), &Z_Registration_Info_UEnum_EBlueprintComponentDataCookingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3072234184U) },
		{ EBlueprintPropertyGuidsCookingMethod_StaticEnum, TEXT("EBlueprintPropertyGuidsCookingMethod"), &Z_Registration_Info_UEnum_EBlueprintPropertyGuidsCookingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1225359666U) },
		{ ETextureFormatASTCCompressor_StaticEnum, TEXT("ETextureFormatASTCCompressor"), &Z_Registration_Info_UEnum_ETextureFormatASTCCompressor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3278274103U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookerSettings, UCookerSettings::StaticClass, TEXT("UCookerSettings"), &Z_Registration_Info_UClass_UCookerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookerSettings), 2008717678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_374575044(TEXT("/Script/DeveloperToolSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
