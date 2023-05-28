// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/EditorStyleSettings.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorStyleSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UNREALED_API UClass* Z_Construct_UClass_UEditorStyleSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetEditorOpenLocation;
	static UEnum* EAssetEditorOpenLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetEditorOpenLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetEditorOpenLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EAssetEditorOpenLocation"));
		}
		return Z_Registration_Info_UEnum_EAssetEditorOpenLocation.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EAssetEditorOpenLocation>()
	{
		return EAssetEditorOpenLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::Enumerators[] = {
		{ "EAssetEditorOpenLocation::Default", (int64)EAssetEditorOpenLocation::Default },
		{ "EAssetEditorOpenLocation::NewWindow", (int64)EAssetEditorOpenLocation::NewWindow },
		{ "EAssetEditorOpenLocation::MainWindow", (int64)EAssetEditorOpenLocation::MainWindow },
		{ "EAssetEditorOpenLocation::ContentBrowser", (int64)EAssetEditorOpenLocation::ContentBrowser },
		{ "EAssetEditorOpenLocation::LastDockedWindowOrNewWindow", (int64)EAssetEditorOpenLocation::LastDockedWindowOrNewWindow },
		{ "EAssetEditorOpenLocation::LastDockedWindowOrMainWindow", (int64)EAssetEditorOpenLocation::LastDockedWindowOrMainWindow },
		{ "EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser", (int64)EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ContentBrowser.Comment", "/** Docks tabs into the content browser's window. */" },
		{ "ContentBrowser.Name", "EAssetEditorOpenLocation::ContentBrowser" },
		{ "ContentBrowser.ToolTip", "Docks tabs into the content browser's window." },
		{ "Default.Comment", "/** Attempts to dock asset editors into either a new window, or the main window if they were docked there. */" },
		{ "Default.Name", "EAssetEditorOpenLocation::Default" },
		{ "Default.ToolTip", "Attempts to dock asset editors into either a new window, or the main window if they were docked there." },
		{ "LastDockedWindowOrContentBrowser.Comment", "/** Docks tabs into the last window that was docked into, or the content browser window if there is no last docked window. */" },
		{ "LastDockedWindowOrContentBrowser.Name", "EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser" },
		{ "LastDockedWindowOrContentBrowser.ToolTip", "Docks tabs into the last window that was docked into, or the content browser window if there is no last docked window." },
		{ "LastDockedWindowOrMainWindow.Comment", "/** Docks tabs into the last window that was docked into, or the main window if there is no last docked window. */" },
		{ "LastDockedWindowOrMainWindow.Name", "EAssetEditorOpenLocation::LastDockedWindowOrMainWindow" },
		{ "LastDockedWindowOrMainWindow.ToolTip", "Docks tabs into the last window that was docked into, or the main window if there is no last docked window." },
		{ "LastDockedWindowOrNewWindow.Comment", "/** Docks tabs into the last window that was docked into, or a new window if there is no last docked window. */" },
		{ "LastDockedWindowOrNewWindow.Name", "EAssetEditorOpenLocation::LastDockedWindowOrNewWindow" },
		{ "LastDockedWindowOrNewWindow.ToolTip", "Docks tabs into the last window that was docked into, or a new window if there is no last docked window." },
		{ "MainWindow.Comment", "/** Docks tabs into the main window. */" },
		{ "MainWindow.Name", "EAssetEditorOpenLocation::MainWindow" },
		{ "MainWindow.ToolTip", "Docks tabs into the main window." },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "NewWindow.Comment", "/** Docks tabs into new windows. */" },
		{ "NewWindow.Name", "EAssetEditorOpenLocation::NewWindow" },
		{ "NewWindow.ToolTip", "Docks tabs into new windows." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EAssetEditorOpenLocation",
		"EAssetEditorOpenLocation",
		Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation()
	{
		if (!Z_Registration_Info_UEnum_EAssetEditorOpenLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetEditorOpenLocation.InnerSingleton, Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetEditorOpenLocation.InnerSingleton;
	}
	void UEditorStyleSettings::StaticRegisterNativesUEditorStyleSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorStyleSettings);
	UClass* Z_Construct_UClass_UEditorStyleSettings_NoRegister()
	{
		return UEditorStyleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorStyleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHighDPIAwareness_MetaData[];
#endif
		static void NewProp_bEnableHighDPIAwareness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHighDPIAwareness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUserEditorLayoutManagement_MetaData[];
#endif
		static void NewProp_bEnableUserEditorLayoutManagement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUserEditorLayoutManagement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorVisionDeficiencyPreviewType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorVisionDeficiencyPreviewType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorVisionDeficiencyPreviewType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorVisionDeficiencySeverity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorVisionDeficiencySeverity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorVisionDeficiencyCorrection_MetaData[];
#endif
		static void NewProp_bColorVisionDeficiencyCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorVisionDeficiencyCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData[];
#endif
		static void NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorWindowBackgroundColor_MetaData[];
#endif
		static void NewProp_bEnableEditorWindowBackgroundColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorWindowBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorWindowBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorWindowBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSmallToolBarIcons_MetaData[];
#endif
		static void NewProp_bUseSmallToolBarIcons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSmallToolBarIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[];
#endif
		static void NewProp_bUseGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegularColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSnapSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_GridSnapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFriendlyNames_MetaData[];
#endif
		static void NewProp_bShowFriendlyNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFriendlyNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNativeComponentNames_MetaData[];
#endif
		static void NewProp_bShowNativeComponentNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNativeComponentNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandConfigurationMenus_MetaData[];
#endif
		static void NewProp_bExpandConfigurationMenus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandConfigurationMenus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowProjectMenus_MetaData[];
#endif
		static void NewProp_bShowProjectMenus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowProjectMenus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLaunchMenus_MetaData[];
#endif
		static void NewProp_bShowLaunchMenus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLaunchMenus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAllAdvancedDetails_MetaData[];
#endif
		static void NewProp_bShowAllAdvancedDetails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAllAdvancedDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHiddenPropertiesWhilePlaying_MetaData[];
#endif
		static void NewProp_bShowHiddenPropertiesWhilePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHiddenPropertiesWhilePlaying;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetEditorOpenLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetEditorOpenLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetEditorOpenLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableColorizedEditorTabs_MetaData[];
#endif
		static void NewProp_bEnableColorizedEditorTabs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableColorizedEditorTabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAppliedTheme_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAppliedTheme;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorStyleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor style settings.\n */" },
		{ "IncludePath", "Settings/EditorStyleSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Implements the Editor style settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * Enables high dpi support in the editor which will adjust the scale of elements in the UI to account for high DPI monitors\n\x09 * The editor must be restarted for changes to take effect.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable High DPI Support" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Enables high dpi support in the editor which will adjust the scale of elements in the UI to account for high DPI monitors\nThe editor must be restarted for changes to take effect." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableHighDPIAwareness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness = { "bEnableHighDPIAwareness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * Whether to enable the Editor UI Layout configuration tools for the user.\n\x09 * If disabled, the \"Save Layout As\" and \"Remove Layout\" menus will be removed, as well as the \"Import Layout...\" sub-menu.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Whether to enable the Editor UI Layout configuration tools for the user.\nIf disabled, the \"Save Layout As\" and \"Remove Layout\" menus will be removed, as well as the \"Import Layout...\" sub-menu." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableUserEditorLayoutManagement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement = { "bEnableUserEditorLayoutManagement", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** Applies a color vision deficiency filter to the entire editor */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Applies a color vision deficiency filter to the entire editor" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType = { "ColorVisionDeficiencyPreviewType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, ColorVisionDeficiencyPreviewType), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_MetaData)) }; // 3693246695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity = { "ColorVisionDeficiencySeverity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, ColorVisionDeficiencySeverity), METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** Shifts the color spectrum to the visible range based on the current ColorVisionDeficiencyPreviewType */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Shifts the color spectrum to the visible range based on the current ColorVisionDeficiencyPreviewType" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bColorVisionDeficiencyCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection = { "bColorVisionDeficiencyCorrection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/** If you're correcting the color deficiency, you can use this to visualize what the correction looks like with the deficiency. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "If you're correcting the color deficiency, you can use this to visualize what the correction looks like with the deficiency." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bColorVisionDeficiencyCorrectionPreviewWithDeficiency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency = { "bColorVisionDeficiencyCorrectionPreviewWithDeficiency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** The color used to represent selection */" },
		{ "DisplayName", "Viewport Selection Color" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor = { "SelectionColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, SelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableEditorWindowBackgroundColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor = { "bEnableEditorWindowBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** The color used to tint the editor window backgrounds */" },
		{ "EditCondition", "bEnableEditorWindowBackgroundColor" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to tint the editor window backgrounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor = { "EditorWindowBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, EditorWindowBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Whether to use small toolbar icons without labels or not. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Whether to use small toolbar icons without labels or not." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bUseSmallToolBarIcons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons = { "bUseSmallToolBarIcons", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_MetaData[] = {
		{ "Category", "Graphs" },
		{ "Comment", "/** If true the material editor and blueprint editor will show a grid on it's background. */" },
		{ "DisplayName", "Use Grids In The Material And Blueprint Editor" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "If true the material editor and blueprint editor will show a grid on it's background." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bUseGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid = { "bUseGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor_MetaData[] = {
		{ "Category", "Graphs" },
		{ "Comment", "/** The color used to represent regular grid lines */" },
		{ "DisplayName", "Grid Regular Color" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent regular grid lines" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor = { "RegularColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, RegularColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor_MetaData[] = {
		{ "Category", "Graphs" },
		{ "Comment", "/** The color used to represent ruler lines in the grid */" },
		{ "DisplayName", "Grid Ruler Color" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent ruler lines in the grid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor = { "RuleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, RuleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor_MetaData[] = {
		{ "Category", "Graphs" },
		{ "Comment", "/** The color used to represent the center lines in the grid */" },
		{ "DisplayName", "Grid Center Color" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "The color used to represent the center lines in the grid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor = { "CenterColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, CenterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize_MetaData[] = {
		{ "Category", "Graphs" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The custom grid snap size to use  */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "The custom grid snap size to use" },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize = { "GridSnapSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, GridSnapSize), METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GraphBackgroundBrush_MetaData[] = {
		{ "Category", "Graphs" },
		{ "Comment", "/** Optional brush used for graph backgrounds */" },
		{ "DisplayName", "Background Brush" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Optional brush used for graph backgrounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GraphBackgroundBrush = { "GraphBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, GraphBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GraphBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GraphBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** When enabled, the C++ names for properties and functions will be displayed in a format that is easier to read */" },
		{ "DisplayName", "Show Friendly Variable Names" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the C++ names for properties and functions will be displayed in a format that is easier to read" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowFriendlyNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames = { "bShowFriendlyNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** When enabled, the underlying Names for Components inherited from C++ will be shown alongside their UProperty Variable name */" },
		{ "DisplayName", "Show Underlying Names For Native Components" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the underlying Names for Components inherited from C++ will be shown alongside their UProperty Variable name" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowNativeComponentNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames = { "bShowNativeComponentNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Editor Preferences and Project Settings menu items in the main menu will be expanded with sub-menus for each settings section." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bExpandConfigurationMenus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus = { "bExpandConfigurationMenus", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_MetaData[] = {
		{ "Comment", "/** When enabled, the project subsection of the File menu will be shown. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the project subsection of the File menu will be shown." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowProjectMenus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus = { "bShowProjectMenus", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_MetaData[] = {
		{ "Comment", "/** When enabled, the Launch menu items will be shown. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Launch menu items will be shown." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowLaunchMenus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus = { "bShowLaunchMenus", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_MetaData[] = {
		{ "Comment", "/** When enabled, the Advanced Details will always auto expand. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When enabled, the Advanced Details will always auto expand." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowAllAdvancedDetails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails = { "bShowAllAdvancedDetails", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData[] = {
		{ "Comment", "/** When Playing or Simulating, shows all properties (even non-visible and non-editable properties), if the object belongs to a simulating world.  This is useful for debugging. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "When Playing or Simulating, shows all properties (even non-visible and non-editable properties), if the object belongs to a simulating world.  This is useful for debugging." },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bShowHiddenPropertiesWhilePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying = { "bShowHiddenPropertiesWhilePlaying", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** New asset editor tabs will open at the specified location. */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "New asset editor tabs will open at the specified location." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation = { "AssetEditorOpenLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, AssetEditorOpenLocation), Z_Construct_UEnum_UnrealEd_EAssetEditorOpenLocation, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_MetaData)) }; // 209997023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Should editor tabs be colorized according to the asset type */" },
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
		{ "ToolTip", "Should editor tabs be colorized according to the asset type" },
	};
#endif
	void Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_SetBit(void* Obj)
	{
		((UEditorStyleSettings*)Obj)->bEnableColorizedEditorTabs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs = { "bEnableColorizedEditorTabs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorStyleSettings), &Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CurrentAppliedTheme_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/EditorStyleSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CurrentAppliedTheme = { "CurrentAppliedTheme", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorStyleSettings, CurrentAppliedTheme), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CurrentAppliedTheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CurrentAppliedTheme_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorStyleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableHighDPIAwareness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableUserEditorLayoutManagement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencyPreviewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_ColorVisionDeficiencySeverity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bColorVisionDeficiencyCorrectionPreviewWithDeficiency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_SelectionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableEditorWindowBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_EditorWindowBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseSmallToolBarIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bUseGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RegularColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_RuleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CenterColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GridSnapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_GraphBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowFriendlyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowNativeComponentNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bExpandConfigurationMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowProjectMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowLaunchMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowAllAdvancedDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bShowHiddenPropertiesWhilePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_AssetEditorOpenLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_bEnableColorizedEditorTabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorStyleSettings_Statics::NewProp_CurrentAppliedTheme,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorStyleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorStyleSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorStyleSettings_Statics::ClassParams = {
		&UEditorStyleSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorStyleSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorStyleSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStyleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorStyleSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorStyleSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorStyleSettings.OuterSingleton, Z_Construct_UClass_UEditorStyleSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorStyleSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorStyleSettings>()
	{
		return UEditorStyleSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorStyleSettings);
	UEditorStyleSettings::~UEditorStyleSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics::EnumInfo[] = {
		{ EAssetEditorOpenLocation_StaticEnum, TEXT("EAssetEditorOpenLocation"), &Z_Registration_Info_UEnum_EAssetEditorOpenLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 209997023U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorStyleSettings, UEditorStyleSettings::StaticClass, TEXT("UEditorStyleSettings"), &Z_Registration_Info_UClass_UEditorStyleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorStyleSettings), 2457765199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_2735143909(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
