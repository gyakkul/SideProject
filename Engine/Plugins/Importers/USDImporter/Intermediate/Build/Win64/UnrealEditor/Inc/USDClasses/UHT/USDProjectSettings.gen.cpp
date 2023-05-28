// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdProjectSettings();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdProjectSettings_NoRegister();
	USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdSaveDialogBehavior;
	static UEnum* EUsdSaveDialogBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdSaveDialogBehavior"));
		}
		return Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.OuterSingleton;
	}
	template<> USDCLASSES_API UEnum* StaticEnum<EUsdSaveDialogBehavior>()
	{
		return EUsdSaveDialogBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enumerators[] = {
		{ "EUsdSaveDialogBehavior::NeverSave", (int64)EUsdSaveDialogBehavior::NeverSave },
		{ "EUsdSaveDialogBehavior::AlwaysSave", (int64)EUsdSaveDialogBehavior::AlwaysSave },
		{ "EUsdSaveDialogBehavior::ShowPrompt", (int64)EUsdSaveDialogBehavior::ShowPrompt },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysSave.Name", "EUsdSaveDialogBehavior::AlwaysSave" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "NeverSave.Name", "EUsdSaveDialogBehavior::NeverSave" },
		{ "ShowPrompt.Name", "EUsdSaveDialogBehavior::ShowPrompt" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		"EUsdSaveDialogBehavior",
		"EUsdSaveDialogBehavior",
		Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior()
	{
		if (!Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdSaveDialogBehavior.InnerSingleton;
	}
	void UUsdProjectSettings::StaticRegisterNativesUUsdProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdProjectSettings);
	UClass* Z_Construct_UClass_UUsdProjectSettings_NoRegister()
	{
		return UUsdProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUsdProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPluginDirectories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPluginDirectories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPluginDirectories;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalMaterialPurposes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalMaterialPurposes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalMaterialPurposes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAssetCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCreateDefaultAssetCacheDialog_MetaData[];
#endif
		static void NewProp_bShowCreateDefaultAssetCacheDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCreateDefaultAssetCacheDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmationWhenClearingLayers_MetaData[];
#endif
		static void NewProp_bShowConfirmationWhenClearingLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmationWhenClearingLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData[];
#endif
		static void NewProp_bShowConfirmationWhenMutingDirtyLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmationWhenMutingDirtyLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOverriddenOpinionsWarning_MetaData[];
#endif
		static void NewProp_bShowOverriddenOpinionsWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOverriddenOpinionsWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWarningOnIncompleteDuplication_MetaData[];
#endif
		static void NewProp_bShowWarningOnIncompleteDuplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWarningOnIncompleteDuplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData[];
#endif
		static void NewProp_bShowTransformTrackOnCameraComponentWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransformTrackOnCameraComponentWarning;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowSaveLayersDialogWhenSaving_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowSaveLayersDialogWhenSaving_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowSaveLayersDialogWhenSaving;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowSaveLayersDialogWhenClosing_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowSaveLayersDialogWhenClosing_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowSaveLayersDialogWhenClosing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTwoSidedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceVTMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceVTMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentVTMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorAndOpacityMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorTwoSidedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// USDImporter and defaultconfig here so this ends up at DefaultUSDImporter.ini in the editor, and is sent to the\n// packaged game as well\n" },
		{ "DisplayName", "USDImporter" },
		{ "IncludePath", "USDProjectSettings.h" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "USDImporter and defaultconfig here so this ends up at DefaultUSDImporter.ini in the editor, and is sent to the\npackaged game as well" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_Inner = { "AdditionalPluginDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// Additional paths to check for USD plugins\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Additional paths to check for USD plugins" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories = { "AdditionalPluginDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, AdditionalPluginDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_Inner = { "AdditionalMaterialPurposes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// Material purposes to show on drop-downs in addition to the standard \"preview\" and \"full\"\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Material purposes to show on drop-downs in addition to the standard \"preview\" and \"full\"" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes = { "AdditionalMaterialPurposes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, AdditionalMaterialPurposes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache_MetaData[] = {
		{ "AllowedClasses", "/Script/USDClasses.UsdAssetCache2" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * USD Asset Cache to use for USD Stage Actors that don't have any asset cache specified.\n\x09 * Leave this empty to have each stage actor generate it's on transient cache instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "USD Asset Cache to use for USD Stage Actors that don't have any asset cache specified.\nLeave this empty to have each stage actor generate it's on transient cache instead." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache = { "DefaultAssetCache", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, DefaultAssetCache), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_SetBit(void* Obj)
	{
		((UUsdProjectSettings*)Obj)->bShowCreateDefaultAssetCacheDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog = { "bShowCreateDefaultAssetCacheDialog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_SetBit(void* Obj)
	{
		((UUsdProjectSettings*)Obj)->bShowConfirmationWhenClearingLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers = { "bShowConfirmationWhenClearingLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_SetBit(void* Obj)
	{
		((UUsdProjectSettings*)Obj)->bShowConfirmationWhenMutingDirtyLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers = { "bShowConfirmationWhenMutingDirtyLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring opinions that could have no effect on the composed stage\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring opinions that could have no effect on the composed stage" },
	};
#endif
	void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_SetBit(void* Obj)
	{
		((UUsdProjectSettings*)Obj)->bShowOverriddenOpinionsWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning = { "bShowOverriddenOpinionsWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show a warning whenever the \"Duplicate All Local Layer Specs\" option is picked, and the duplicated\n// prim has some specs outside the local layer stack that will not be duplicated.\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show a warning whenever the \"Duplicate All Local Layer Specs\" option is picked, and the duplicated\nprim has some specs outside the local layer stack that will not be duplicated." },
	};
#endif
	void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_SetBit(void* Obj)
	{
		((UUsdProjectSettings*)Obj)->bShowWarningOnIncompleteDuplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication = { "bShowWarningOnIncompleteDuplication", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to show the warning dialog when authoring a transform track directly to a camera component\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to show the warning dialog when authoring a transform track directly to a camera component" },
	};
#endif
	void Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_SetBit(void* Obj)
	{
		((UUsdProjectSettings*)Obj)->bShowTransformTrackOnCameraComponentWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning = { "bShowTransformTrackOnCameraComponentWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdProjectSettings), &Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to display the pop up dialog asking what to do about dirty USD layers when saving the UE level\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to display the pop up dialog asking what to do about dirty USD layers when saving the UE level" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving = { "ShowSaveLayersDialogWhenSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ShowSaveLayersDialogWhenSaving), Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_MetaData)) }; // 2013782242
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_MetaData[] = {
		{ "Category", "USD|Dialogs" },
		{ "Comment", "// Whether to display the pop up dialog asking what to do about dirty USD layers when closing USD stages\n" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "Whether to display the pop up dialog asking what to do about dirty USD layers when closing USD stages" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing = { "ShowSaveLayersDialogWhenClosing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ShowSaveLayersDialogWhenClosing), Z_Construct_UEnum_USDClasses_EUsdSaveDialogBehavior, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_MetaData)) }; // 2013782242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial = { "ReferencePreviewSurfaceMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial = { "ReferencePreviewSurfaceTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial = { "ReferencePreviewSurfaceTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial = { "ReferencePreviewSurfaceTranslucentTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial = { "ReferencePreviewSurfaceVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial = { "ReferencePreviewSurfaceTranslucentVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial = { "ReferencePreviewSurfaceTwoSidedVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTwoSidedVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|UsdPreviewSurface with Virtual Textures" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial = { "ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial = { "ReferenceDisplayColorMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial = { "ReferenceDisplayColorAndOpacityMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorAndOpacityMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial = { "ReferenceDisplayColorTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "USD|Reference Materials|DisplayColor" },
		{ "Comment", "/**\n\x09 * What material to use as reference material when creating material instances from USD materials.\n\x09 * You can swap these with your own materials, but make sure that the replacement materials have parameters with\n\x09 * the same names and types as the ones provided by the default material, otherwise the instances will not have\n\x09 * the parameters filled with values extracted from the USD material when parsing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDProjectSettings.h" },
		{ "ToolTip", "What material to use as reference material when creating material instances from USD materials.\nYou can swap these with your own materials, but make sure that the replacement materials have parameters with\nthe same names and types as the ones provided by the default material, otherwise the instances will not have\nthe parameters filled with values extracted from the USD material when parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial = { "ReferenceDisplayColorAndOpacityTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdProjectSettings, ReferenceDisplayColorAndOpacityTwoSidedMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalPluginDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_AdditionalMaterialPurposes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_DefaultAssetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowCreateDefaultAssetCacheDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenClearingLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowConfirmationWhenMutingDirtyLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowOverriddenOpinionsWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowWarningOnIncompleteDuplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_bShowTransformTrackOnCameraComponentWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ShowSaveLayersDialogWhenClosing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceVTMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentVTMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTwoSidedVTMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorTwoSidedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdProjectSettings_Statics::NewProp_ReferenceDisplayColorAndOpacityTwoSidedMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdProjectSettings_Statics::ClassParams = {
		&UUsdProjectSettings::StaticClass,
		"USDImporter",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::PropPointers),
		0,
		0x000800A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UUsdProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdProjectSettings.OuterSingleton, Z_Construct_UClass_UUsdProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdProjectSettings.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdProjectSettings>()
	{
		return UUsdProjectSettings::StaticClass();
	}
	UUsdProjectSettings::UUsdProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdProjectSettings);
	UUsdProjectSettings::~UUsdProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics::EnumInfo[] = {
		{ EUsdSaveDialogBehavior_StaticEnum, TEXT("EUsdSaveDialogBehavior"), &Z_Registration_Info_UEnum_EUsdSaveDialogBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2013782242U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdProjectSettings, UUsdProjectSettings::StaticClass, TEXT("UUsdProjectSettings"), &Z_Registration_Info_UClass_UUsdProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdProjectSettings), 3577827289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_3568392794(TEXT("/Script/USDClasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
