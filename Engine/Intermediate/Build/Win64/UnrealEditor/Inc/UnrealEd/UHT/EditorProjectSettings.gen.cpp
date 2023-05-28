// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Settings/EditorProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenPercentageMode();
	UNREALED_API UClass* Z_Construct_UClass_UDDCProjectSettings();
	UNREALED_API UClass* Z_Construct_UClass_UDDCProjectSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceProjectSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceProjectSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditor2DSettings();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditor2DSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EUnitDisplay();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMode2DLayer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnitDisplay;
	static UEnum* EUnitDisplay_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUnitDisplay.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUnitDisplay.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EUnitDisplay, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EUnitDisplay"));
		}
		return Z_Registration_Info_UEnum_EUnitDisplay.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EUnitDisplay>()
	{
		return EUnitDisplay_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::Enumerators[] = {
		{ "EUnitDisplay::None", (int64)EUnitDisplay::None },
		{ "EUnitDisplay::Metric", (int64)EUnitDisplay::Metric },
		{ "EUnitDisplay::Imperial", (int64)EUnitDisplay::Imperial },
		{ "EUnitDisplay::Invalid", (int64)EUnitDisplay::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** UENUM to define the specific set of allowable unit types */" },
		{ "Imperial.Name", "EUnitDisplay::Imperial" },
		{ "Invalid.Name", "EUnitDisplay::Invalid" },
		{ "Metric.Name", "EUnitDisplay::Metric" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "None.Name", "EUnitDisplay::None" },
		{ "ToolTip", "UENUM to define the specific set of allowable unit types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EUnitDisplay",
		"EUnitDisplay",
		Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EUnitDisplay()
	{
		if (!Z_Registration_Info_UEnum_EUnitDisplay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnitDisplay.InnerSingleton, Z_Construct_UEnum_UnrealEd_EUnitDisplay_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUnitDisplay.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultLocationUnit;
	static UEnum* EDefaultLocationUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDefaultLocationUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDefaultLocationUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EDefaultLocationUnit"));
		}
		return Z_Registration_Info_UEnum_EDefaultLocationUnit.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EDefaultLocationUnit>()
	{
		return EDefaultLocationUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::Enumerators[] = {
		{ "EDefaultLocationUnit::Micrometers", (int64)EDefaultLocationUnit::Micrometers },
		{ "EDefaultLocationUnit::Millimeters", (int64)EDefaultLocationUnit::Millimeters },
		{ "EDefaultLocationUnit::Centimeters", (int64)EDefaultLocationUnit::Centimeters },
		{ "EDefaultLocationUnit::Meters", (int64)EDefaultLocationUnit::Meters },
		{ "EDefaultLocationUnit::Kilometers", (int64)EDefaultLocationUnit::Kilometers },
		{ "EDefaultLocationUnit::Inches", (int64)EDefaultLocationUnit::Inches },
		{ "EDefaultLocationUnit::Feet", (int64)EDefaultLocationUnit::Feet },
		{ "EDefaultLocationUnit::Yards", (int64)EDefaultLocationUnit::Yards },
		{ "EDefaultLocationUnit::Miles", (int64)EDefaultLocationUnit::Miles },
		{ "EDefaultLocationUnit::Invalid", (int64)EDefaultLocationUnit::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::Enum_MetaDataParams[] = {
		{ "Centimeters.Name", "EDefaultLocationUnit::Centimeters" },
		{ "Comment", "/** UENUM to define the specific set of allowable default units */" },
		{ "Feet.Name", "EDefaultLocationUnit::Feet" },
		{ "Inches.Name", "EDefaultLocationUnit::Inches" },
		{ "Invalid.Name", "EDefaultLocationUnit::Invalid" },
		{ "Kilometers.Name", "EDefaultLocationUnit::Kilometers" },
		{ "Meters.Name", "EDefaultLocationUnit::Meters" },
		{ "Micrometers.Name", "EDefaultLocationUnit::Micrometers" },
		{ "Miles.Name", "EDefaultLocationUnit::Miles" },
		{ "Millimeters.Name", "EDefaultLocationUnit::Millimeters" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "UENUM to define the specific set of allowable default units" },
		{ "Yards.Name", "EDefaultLocationUnit::Yards" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EDefaultLocationUnit",
		"EDefaultLocationUnit",
		Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit()
	{
		if (!Z_Registration_Info_UEnum_EDefaultLocationUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultLocationUnit.InnerSingleton, Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDefaultLocationUnit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReferenceViewerSettingMode;
	static UEnum* EReferenceViewerSettingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReferenceViewerSettingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReferenceViewerSettingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EReferenceViewerSettingMode"));
		}
		return Z_Registration_Info_UEnum_EReferenceViewerSettingMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EReferenceViewerSettingMode>()
	{
		return EReferenceViewerSettingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::Enumerators[] = {
		{ "EReferenceViewerSettingMode::NoPreference", (int64)EReferenceViewerSettingMode::NoPreference },
		{ "EReferenceViewerSettingMode::ShowByDefault", (int64)EReferenceViewerSettingMode::ShowByDefault },
		{ "EReferenceViewerSettingMode::HideByDefault", (int64)EReferenceViewerSettingMode::HideByDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::Enum_MetaDataParams[] = {
		{ "HideByDefault.Comment", "// Hide this kind of reference by default (it can be toggled back on in the reference viewer)\n" },
		{ "HideByDefault.Name", "EReferenceViewerSettingMode::HideByDefault" },
		{ "HideByDefault.ToolTip", "Hide this kind of reference by default (it can be toggled back on in the reference viewer)" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "NoPreference.Comment", "// Use the editor default setting\n" },
		{ "NoPreference.Name", "EReferenceViewerSettingMode::NoPreference" },
		{ "NoPreference.ToolTip", "Use the editor default setting" },
		{ "ShowByDefault.Comment", "// Show this kind of reference by default (it can be toggled off in the reference viewer)\n" },
		{ "ShowByDefault.Name", "EReferenceViewerSettingMode::ShowByDefault" },
		{ "ShowByDefault.ToolTip", "Show this kind of reference by default (it can be toggled off in the reference viewer)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EReferenceViewerSettingMode",
		"EReferenceViewerSettingMode",
		Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode()
	{
		if (!Z_Registration_Info_UEnum_EReferenceViewerSettingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReferenceViewerSettingMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReferenceViewerSettingMode.InnerSingleton;
	}
	void UEditorProjectAppearanceSettings::StaticRegisterNativesUEditorProjectAppearanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorProjectAppearanceSettings);
	UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings_NoRegister()
	{
		return UEditorProjectAppearanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayUnits_MetaData[];
#endif
		static void NewProp_bDisplayUnits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayUnitsOnComponentTransforms_MetaData[];
#endif
		static void NewProp_bDisplayUnitsOnComponentTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayUnitsOnComponentTransforms;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceUnits_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceUnits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceUnits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DistanceUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MassUnits_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MassUnits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassUnits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MassUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnits_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUnits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngleUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngleUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TemperatureUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TemperatureUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceUnits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowSearchableNames_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowSearchableNames_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowSearchableNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceViewerDefaultMaxSearchBreadth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferenceViewerDefaultMaxSearchBreadth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnitDisplay_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UnitDisplay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor project appearance settings. Stored in default config, per-project\n */" },
		{ "DisplayName", "Appearance" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Editor project appearance settings. Stored in default config, per-project" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Display Units on Applicable Properties" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Whether to display units on editor properties where the property has units set." },
	};
#endif
	void Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_SetBit(void* Obj)
	{
		((UEditorProjectAppearanceSettings*)Obj)->bDisplayUnits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits = { "bDisplayUnits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorProjectAppearanceSettings), &Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Display Units on Component Transforms" },
		{ "EditCondition", "bDisplayUnits" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Whether to display units on component transform properties" },
	};
#endif
	void Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_SetBit(void* Obj)
	{
		((UEditorProjectAppearanceSettings*)Obj)->bDisplayUnitsOnComponentTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms = { "bDisplayUnitsOnComponentTransforms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorProjectAppearanceSettings), &Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner = { "DistanceUnits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) }; // 1931954769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Distance/Length" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose a set of units in which to display distance/length values." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits = { "DistanceUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, DistanceUnits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner = { "MassUnits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) }; // 1931954769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Mass" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose a set of units in which to display masses." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits = { "MassUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, MassUnits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner = { "TimeUnits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) }; // 1931954769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Time" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display time." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits = { "TimeUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, TimeUnits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Angles" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display angles." },
		{ "ValidEnumValues", "Degrees, Radians" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits = { "AngleUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, AngleUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Speed/Velocity" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display speeds and velocities." },
		{ "ValidEnumValues", "CentimetersPerSecond, MetersPerSecond, KilometersPerHour, MilesPerHour" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits = { "SpeedUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, SpeedUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Temperature" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display temperatures." },
		{ "ValidEnumValues", "Celsius, Farenheit, Kelvin" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits = { "TemperatureUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, TemperatureUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_MetaData[] = {
		{ "Category", "Units" },
		{ "DisplayName", "Force" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "Tooltip", "Choose the units in which to display forces." },
		{ "ValidEnumValues", "Newtons, PoundsForce, KilogramsForce" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits = { "ForceUnits", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, ForceUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames_MetaData[] = {
		{ "Category", "ReferenceViewer" },
		{ "Comment", "// Should the Reference Viewer have 'Show Searchable Names' checked by default when opened in this project\n" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Should the Reference Viewer have 'Show Searchable Names' checked by default when opened in this project" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames = { "ShowSearchableNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, ShowSearchableNames), Z_Construct_UEnum_UnrealEd_EReferenceViewerSettingMode, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames_MetaData)) }; // 3077192198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ReferenceViewerDefaultMaxSearchBreadth_MetaData[] = {
		{ "Category", "ReferenceViewer" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "// The default maximum search breadth for the reference viewer when opened\n" },
		{ "DisplayName", "Default Max Search Breadth" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "The default maximum search breadth for the reference viewer when opened" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ReferenceViewerDefaultMaxSearchBreadth = { "ReferenceViewerDefaultMaxSearchBreadth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, ReferenceViewerDefaultMaxSearchBreadth), METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ReferenceViewerDefaultMaxSearchBreadth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ReferenceViewerDefaultMaxSearchBreadth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_MetaData[] = {
		{ "Comment", "/** Deprecated properties that didn't live very long */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Deprecated properties that didn't live very long" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay = { "UnitDisplay", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, UnitDisplay_DEPRECATED), Z_Construct_UEnum_UnrealEd_EUnitDisplay, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_MetaData)) }; // 315517018
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits = { "DefaultInputUnits", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorProjectAppearanceSettings, DefaultInputUnits_DEPRECATED), Z_Construct_UEnum_UnrealEd_EDefaultLocationUnit, METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_MetaData)) }; // 2713727965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_bDisplayUnitsOnComponentTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DistanceUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_MassUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TimeUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_AngleUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_SpeedUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_TemperatureUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ForceUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ShowSearchableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_ReferenceViewerDefaultMaxSearchBreadth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_UnitDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::NewProp_DefaultInputUnits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorProjectAppearanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::ClassParams = {
		&UEditorProjectAppearanceSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorProjectAppearanceSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorProjectAppearanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorProjectAppearanceSettings.OuterSingleton, Z_Construct_UClass_UEditorProjectAppearanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorProjectAppearanceSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorProjectAppearanceSettings>()
	{
		return UEditorProjectAppearanceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorProjectAppearanceSettings);
	UEditorProjectAppearanceSettings::~UEditorProjectAppearanceSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Mode2DLayer;
class UScriptStruct* FMode2DLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Mode2DLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Mode2DLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMode2DLayer, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("Mode2DLayer"));
	}
	return Z_Registration_Info_UScriptStruct_Mode2DLayer.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMode2DLayer>()
{
	return FMode2DLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMode2DLayer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMode2DLayer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* 2D layer settings\n*/" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "2D layer settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMode2DLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** A descriptive name for this snap layer. */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "A descriptive name for this snap layer." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMode2DLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The position of this snap layer's plane along the Snap Axis. */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "The position of this snap layer's plane along the Snap Axis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMode2DLayer, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMode2DLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewProp_Depth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMode2DLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"Mode2DLayer",
		sizeof(FMode2DLayer),
		alignof(FMode2DLayer),
		Z_Construct_UScriptStruct_FMode2DLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMode2DLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMode2DLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMode2DLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_Mode2DLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Mode2DLayer.InnerSingleton, Z_Construct_UScriptStruct_FMode2DLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Mode2DLayer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelEditor2DAxis;
	static UEnum* ELevelEditor2DAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelEditor2DAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelEditor2DAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELevelEditor2DAxis"));
		}
		return Z_Registration_Info_UEnum_ELevelEditor2DAxis.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELevelEditor2DAxis>()
	{
		return ELevelEditor2DAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::Enumerators[] = {
		{ "ELevelEditor2DAxis::X", (int64)ELevelEditor2DAxis::X },
		{ "ELevelEditor2DAxis::Y", (int64)ELevelEditor2DAxis::Y },
		{ "ELevelEditor2DAxis::Z", (int64)ELevelEditor2DAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "X.Name", "ELevelEditor2DAxis::X" },
		{ "Y.Name", "ELevelEditor2DAxis::Y" },
		{ "Z.Name", "ELevelEditor2DAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELevelEditor2DAxis",
		"ELevelEditor2DAxis",
		Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis()
	{
		if (!Z_Registration_Info_UEnum_ELevelEditor2DAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelEditor2DAxis.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelEditor2DAxis.InnerSingleton;
	}
	void ULevelEditor2DSettings::StaticRegisterNativesULevelEditor2DSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditor2DSettings);
	UClass* Z_Construct_UClass_ULevelEditor2DSettings_NoRegister()
	{
		return ULevelEditor2DSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditor2DSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable2DWidget_MetaData[];
#endif
		static void NewProp_bEnable2DWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable2DWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapLayers_MetaData[];
#endif
		static void NewProp_bEnableSnapLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapLayers;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SnapAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditor2DSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure settings for the 2D Level Editor\n */" },
		{ "DisplayName", "2D" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Configure settings for the 2D Level Editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, shows the 2D combined translate and rotate tool in the viewport toolbar. */" },
		{ "DisplayName", "Enable 2D combined translate + rotate widget" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "If enabled, shows the 2D combined translate and rotate tool in the viewport toolbar." },
	};
#endif
	void Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_SetBit(void* Obj)
	{
		((ULevelEditor2DSettings*)Obj)->bEnable2DWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget = { "bEnable2DWidget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditor2DSettings), &Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_MetaData[] = {
		{ "Category", "LayerSnapping" },
		{ "Comment", "/** If enabled, shows the 2D layer snapping controls in the viewport toolbar. */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "If enabled, shows the 2D layer snapping controls in the viewport toolbar." },
	};
#endif
	void Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_SetBit(void* Obj)
	{
		((ULevelEditor2DSettings*)Obj)->bEnableSnapLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers = { "bEnableSnapLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditor2DSettings), &Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_MetaData[] = {
		{ "Category", "LayerSnapping" },
		{ "Comment", "/** Sets the world space axis for 2D snap layers. */" },
		{ "EditCondition", "bEnableSnapLayers" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Sets the world space axis for 2D snap layers." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis = { "SnapAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditor2DSettings, SnapAxis), Z_Construct_UEnum_UnrealEd_ELevelEditor2DAxis, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_MetaData)) }; // 284043032
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_Inner = { "SnapLayers", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMode2DLayer, METADATA_PARAMS(nullptr, 0) }; // 3756676150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_MetaData[] = {
		{ "Category", "LayerSnapping" },
		{ "Comment", "/** Snap layers that are displayed in the viewport toolbar. */" },
		{ "EditCondition", "bEnableSnapLayers" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Snap layers that are displayed in the viewport toolbar." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers = { "SnapLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditor2DSettings, SnapLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_MetaData)) }; // 3756676150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditor2DSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnable2DWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_bEnableSnapLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditor2DSettings_Statics::NewProp_SnapLayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditor2DSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditor2DSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditor2DSettings_Statics::ClassParams = {
		&ULevelEditor2DSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditor2DSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditor2DSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditor2DSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditor2DSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelEditor2DSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditor2DSettings.OuterSingleton, Z_Construct_UClass_ULevelEditor2DSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditor2DSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULevelEditor2DSettings>()
	{
		return ULevelEditor2DSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditor2DSettings);
	ULevelEditor2DSettings::~ULevelEditor2DSettings() {}
	void UEditorPerformanceProjectSettings::StaticRegisterNativesUEditorPerformanceProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorPerformanceProjectSettings);
	UClass* Z_Construct_UClass_UEditorPerformanceProjectSettings_NoRegister()
	{
		return UEditorPerformanceProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RealtimeScreenPercentageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeScreenPercentageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RealtimeScreenPercentageMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PathTracerScreenPercentageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTracerScreenPercentageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PathTracerScreenPercentageMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NonRealtimeScreenPercentageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonRealtimeScreenPercentageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NonRealtimeScreenPercentageMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualScreenPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinViewportRenderingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinViewportRenderingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewportRenderingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxViewportRenderingResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure per-project performance settings for the Editor\n */" },
		{ "DisplayName", "Performance" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
		{ "ToolTip", "Configure per-project performance settings for the Editor" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Default screen percentage mode for realtime editor viewports." },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode = { "RealtimeScreenPercentageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceProjectSettings, RealtimeScreenPercentageMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode_MetaData)) }; // 1588791644
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Default screen percentage mode for path traced editor viewports." },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode = { "PathTracerScreenPercentageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceProjectSettings, PathTracerScreenPercentageMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode_MetaData)) }; // 1588791644
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Default screen percentage mode for non-realtime editor viewports." },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode = { "NonRealtimeScreenPercentageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceProjectSettings, NonRealtimeScreenPercentageMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_MetaData)) }; // 1588791644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_ManualScreenPercentage_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Manual screen percentage to be set by default for editor viewports." },
		{ "EditCondition", "RealtimeScreenPercentageMode == EScreenPercentageMode::Manual || NonRealtimeScreenPercentageMode == EScreenPercentageMode::Manual" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_ManualScreenPercentage = { "ManualScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceProjectSettings, ManualScreenPercentage), METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_ManualScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_ManualScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MinViewportRenderingResolution_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Minimum default rendering resolution to use for editor viewports." },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MinViewportRenderingResolution = { "MinViewportRenderingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceProjectSettings, MinViewportRenderingResolution), METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MinViewportRenderingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MinViewportRenderingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MaxViewportRenderingResolution_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Maximum default rendering resolution to use for editor viewports." },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MaxViewportRenderingResolution = { "MaxViewportRenderingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceProjectSettings, MaxViewportRenderingResolution), METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MaxViewportRenderingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MaxViewportRenderingResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_RealtimeScreenPercentageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_PathTracerScreenPercentageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_NonRealtimeScreenPercentageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_ManualScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MinViewportRenderingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::NewProp_MaxViewportRenderingResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorPerformanceProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::ClassParams = {
		&UEditorPerformanceProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorPerformanceProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorPerformanceProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorPerformanceProjectSettings.OuterSingleton, Z_Construct_UClass_UEditorPerformanceProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorPerformanceProjectSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorPerformanceProjectSettings>()
	{
		return UEditorPerformanceProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorPerformanceProjectSettings);
	UEditorPerformanceProjectSettings::~UEditorPerformanceProjectSettings() {}
	void UDDCProjectSettings::StaticRegisterNativesUDDCProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDDCProjectSettings);
	UClass* Z_Construct_UClass_UDDCProjectSettings_NoRegister()
	{
		return UDDCProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDDCProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableWarnings_MetaData[];
#endif
		static void NewProp_EnableWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_MetaData[];
#endif
		static void NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_MetaData[];
#endif
		static void NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_MetaData[];
#endif
		static void NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecommendEveryoneSetupAGlobalS3DDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecommendEveryoneEnableS3DDC_MetaData[];
#endif
		static void NewProp_RecommendEveryoneEnableS3DDC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecommendEveryoneEnableS3DDC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecommendEveryoneUseUnrealCloudDDC_MetaData[];
#endif
		static void NewProp_RecommendEveryoneUseUnrealCloudDDC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecommendEveryoneUseUnrealCloudDDC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDCProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Derived Data" },
		{ "IncludePath", "Settings/EditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings_MetaData[] = {
		{ "Category", "Warnings" },
		{ "Comment", "/**\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings_SetBit(void* Obj)
	{
		((UDDCProjectSettings*)Obj)->EnableWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings = { "EnableWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDDCProjectSettings), &Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_MetaData[] = {
		{ "Category", "Warnings" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_SetBit(void* Obj)
	{
		((UDDCProjectSettings*)Obj)->RecommendEveryoneSetupAGlobalLocalDDCPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath = { "RecommendEveryoneSetupAGlobalLocalDDCPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDDCProjectSettings), &Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_MetaData[] = {
		{ "Category", "Warnings" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_SetBit(void* Obj)
	{
		((UDDCProjectSettings*)Obj)->RecommendEveryoneSetupAGlobalSharedDDCPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath = { "RecommendEveryoneSetupAGlobalSharedDDCPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDDCProjectSettings), &Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_MetaData[] = {
		{ "Category", "Warnings" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_SetBit(void* Obj)
	{
		((UDDCProjectSettings*)Obj)->RecommendEveryoneSetupAGlobalS3DDCPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath = { "RecommendEveryoneSetupAGlobalS3DDCPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDDCProjectSettings), &Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC_MetaData[] = {
		{ "Category", "Warnings" },
		{ "Comment", "/**\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC_SetBit(void* Obj)
	{
		((UDDCProjectSettings*)Obj)->RecommendEveryoneEnableS3DDC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC = { "RecommendEveryoneEnableS3DDC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDDCProjectSettings), &Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC_MetaData[] = {
		{ "Category", "Warnings" },
		{ "Comment", "/**\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/EditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC_SetBit(void* Obj)
	{
		((UDDCProjectSettings*)Obj)->RecommendEveryoneUseUnrealCloudDDC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC = { "RecommendEveryoneUseUnrealCloudDDC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDDCProjectSettings), &Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDCProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_EnableWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalLocalDDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalSharedDDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneSetupAGlobalS3DDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneEnableS3DDC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDCProjectSettings_Statics::NewProp_RecommendEveryoneUseUnrealCloudDDC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDCProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDCProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDDCProjectSettings_Statics::ClassParams = {
		&UDDCProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDDCProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDDCProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDCProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDCProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UDDCProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDDCProjectSettings.OuterSingleton, Z_Construct_UClass_UDDCProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDDCProjectSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDDCProjectSettings>()
	{
		return UDDCProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDCProjectSettings);
	UDDCProjectSettings::~UDDCProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::EnumInfo[] = {
		{ EUnitDisplay_StaticEnum, TEXT("EUnitDisplay"), &Z_Registration_Info_UEnum_EUnitDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 315517018U) },
		{ EDefaultLocationUnit_StaticEnum, TEXT("EDefaultLocationUnit"), &Z_Registration_Info_UEnum_EDefaultLocationUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2713727965U) },
		{ EReferenceViewerSettingMode_StaticEnum, TEXT("EReferenceViewerSettingMode"), &Z_Registration_Info_UEnum_EReferenceViewerSettingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3077192198U) },
		{ ELevelEditor2DAxis_StaticEnum, TEXT("ELevelEditor2DAxis"), &Z_Registration_Info_UEnum_ELevelEditor2DAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 284043032U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FMode2DLayer::StaticStruct, Z_Construct_UScriptStruct_FMode2DLayer_Statics::NewStructOps, TEXT("Mode2DLayer"), &Z_Registration_Info_UScriptStruct_Mode2DLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMode2DLayer), 3756676150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorProjectAppearanceSettings, UEditorProjectAppearanceSettings::StaticClass, TEXT("UEditorProjectAppearanceSettings"), &Z_Registration_Info_UClass_UEditorProjectAppearanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorProjectAppearanceSettings), 3893522909U) },
		{ Z_Construct_UClass_ULevelEditor2DSettings, ULevelEditor2DSettings::StaticClass, TEXT("ULevelEditor2DSettings"), &Z_Registration_Info_UClass_ULevelEditor2DSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditor2DSettings), 433728690U) },
		{ Z_Construct_UClass_UEditorPerformanceProjectSettings, UEditorPerformanceProjectSettings::StaticClass, TEXT("UEditorPerformanceProjectSettings"), &Z_Registration_Info_UClass_UEditorPerformanceProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorPerformanceProjectSettings), 3477511865U) },
		{ Z_Construct_UClass_UDDCProjectSettings, UDDCProjectSettings::StaticClass, TEXT("UDDCProjectSettings"), &Z_Registration_Info_UClass_UDDCProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDDCProjectSettings), 4027760583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_4255751179(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
