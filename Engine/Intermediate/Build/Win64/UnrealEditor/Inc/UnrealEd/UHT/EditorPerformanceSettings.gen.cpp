// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/EditorPerformanceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPerformanceSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerformanceSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride;
	static UEnum* EEditorUserScreenPercentageModeOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EEditorUserScreenPercentageModeOverride"));
		}
		return Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EEditorUserScreenPercentageModeOverride>()
	{
		return EEditorUserScreenPercentageModeOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::Enumerators[] = {
		{ "EEditorUserScreenPercentageModeOverride::ProjectDefault", (int64)EEditorUserScreenPercentageModeOverride::ProjectDefault },
		{ "EEditorUserScreenPercentageModeOverride::Manual", (int64)EEditorUserScreenPercentageModeOverride::Manual },
		{ "EEditorUserScreenPercentageModeOverride::BasedOnDisplayResolution", (int64)EEditorUserScreenPercentageModeOverride::BasedOnDisplayResolution },
		{ "EEditorUserScreenPercentageModeOverride::BasedOnDPIScale", (int64)EEditorUserScreenPercentageModeOverride::BasedOnDPIScale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::Enum_MetaDataParams[] = {
		{ "BasedOnDisplayResolution.Comment", "// Automatic control the screen percentage based on the display resolution, r.ScreenPercentage.Auto.*\n" },
		{ "BasedOnDisplayResolution.DisplayName", "Based on display resolution" },
		{ "BasedOnDisplayResolution.Name", "EEditorUserScreenPercentageModeOverride::BasedOnDisplayResolution" },
		{ "BasedOnDisplayResolution.ToolTip", "Automatic control the screen percentage based on the display resolution, r.ScreenPercentage.Auto.*" },
		{ "BasedOnDPIScale.Comment", "// Based on DPI scale.\n" },
		{ "BasedOnDPIScale.DisplayName", "Based on operating system's DPI scale" },
		{ "BasedOnDPIScale.Name", "EEditorUserScreenPercentageModeOverride::BasedOnDPIScale" },
		{ "BasedOnDPIScale.ToolTip", "Based on DPI scale." },
		{ "Comment", "// Mode for the computation of the screen percentage (r.ScreenPercentage.Mode).\n" },
		{ "Manual.Comment", "// Directly controls the screen percentage with the r.ScreenPercentage cvar\n" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EEditorUserScreenPercentageModeOverride::Manual" },
		{ "Manual.ToolTip", "Directly controls the screen percentage with the r.ScreenPercentage cvar" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ProjectDefault.Comment", "// Uses the project's default configured in the project settings.\n" },
		{ "ProjectDefault.Name", "EEditorUserScreenPercentageModeOverride::ProjectDefault" },
		{ "ProjectDefault.ToolTip", "Uses the project's default configured in the project settings." },
		{ "ToolTip", "Mode for the computation of the screen percentage (r.ScreenPercentage.Mode)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EEditorUserScreenPercentageModeOverride",
		"EEditorUserScreenPercentageModeOverride",
		Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride()
	{
		if (!Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride.InnerSingleton, Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride.InnerSingleton;
	}
	void UEditorPerformanceSettings::StaticRegisterNativesUEditorPerformanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorPerformanceSettings);
	UClass* Z_Construct_UClass_UEditorPerformanceSettings_NoRegister()
	{
		return UEditorPerformanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorPerformanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFrameRateAndMemory_MetaData[];
#endif
		static void NewProp_bShowFrameRateAndMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFrameRateAndMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThrottleCPUWhenNotForeground_MetaData[];
#endif
		static void NewProp_bThrottleCPUWhenNotForeground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThrottleCPUWhenNotForeground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRealtimeViewportsInRemoteSessions_MetaData[];
#endif
		static void NewProp_bDisableRealtimeViewportsInRemoteSessions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRealtimeViewportsInRemoteSessions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonitorEditorPerformance_MetaData[];
#endif
		static void NewProp_bMonitorEditorPerformance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonitorEditorPerformance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScalabilityWarningIndicator_MetaData[];
#endif
		static void NewProp_bEnableScalabilityWarningIndicator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScalabilityWarningIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayHighDPIViewports_MetaData[];
#endif
		static void NewProp_bDisplayHighDPIViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayHighDPIViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePIEScreenPercentage_MetaData[];
#endif
		static void NewProp_bOverridePIEScreenPercentage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePIEScreenPercentage;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideManualScreenPercentage_MetaData[];
#endif
		static void NewProp_bOverrideManualScreenPercentage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideManualScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualScreenPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinViewportRenderingResolution_MetaData[];
#endif
		static void NewProp_bOverrideMinViewportRenderingResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinViewportRenderingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinViewportRenderingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinViewportRenderingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxViewportRenderingResolution_MetaData[];
#endif
		static void NewProp_bOverrideMaxViewportRenderingResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxViewportRenderingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewportRenderingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxViewportRenderingResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorPerformanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Performance" },
		{ "IncludePath", "Editor/EditorPerformanceSettings.h" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "Settings to tweak the performance of the editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "Comment", "/** When enabled, the application frame rate, memory and Unreal object count will be displayed in the main editor UI */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "When enabled, the application frame rate, memory and Unreal object count will be displayed in the main editor UI" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bShowFrameRateAndMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory = { "bShowFrameRateAndMemory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "Comment", "/** Lowers CPU usage when the editor is in the background and not the active application */" },
		{ "DisplayName", "Use Less CPU when in Background" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "Lowers CPU usage when the editor is in the background and not the active application" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bThrottleCPUWhenNotForeground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground = { "bThrottleCPUWhenNotForeground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "Comment", "/** Disables realtime viewports by default when connected via a remote session */" },
		{ "DisplayName", "Disable realtime viewports by default in Remote Sessions" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "Disables realtime viewports by default when connected via a remote session" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bDisableRealtimeViewportsInRemoteSessions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions = { "bDisableRealtimeViewportsInRemoteSessions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "Comment", "/** When turned on, the editor will constantly monitor performance and adjust scalability settings for you when performance drops (disabled in debug) */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "When turned on, the editor will constantly monitor performance and adjust scalability settings for you when performance drops (disabled in debug)" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bMonitorEditorPerformance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance = { "bMonitorEditorPerformance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator_MetaData[] = {
		{ "Category", "EditorPerformance" },
		{ "Comment", "/** When enabled, a warning will appear in the viewport when your editors scalability settings are non-default and you may be viewing a low quality scene */" },
		{ "DisplayName", "Enable Scalability Warning Indicator" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "When enabled, a warning will appear in the viewport when your editors scalability settings are non-default and you may be viewing a low quality scene" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bEnableScalabilityWarningIndicator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator = { "bEnableScalabilityWarningIndicator", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "Comment", "/** \n\x09 * By default the editor will adjust scene scaling (quality) for high DPI in order to ensure consistent performance with very large render targets.\n\x09 * Enabling this will disable automatic adjusting and render at the full resolution of the viewport\n\x09 */" },
		{ "ConsoleVariable", "r.Editor.Viewport.HighDPI" },
		{ "DisplayName", "Displays viewports' at high DPI" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "By default the editor will adjust scene scaling (quality) for high DPI in order to ensure consistent performance with very large render targets.\nEnabling this will disable automatic adjusting and render at the full resolution of the viewport" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bDisplayHighDPIViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports = { "bDisplayHighDPIViewports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "ConsoleVariable", "r.Editor.Viewport.OverridePIEScreenPercentage" },
		{ "DisplayName", "Override game screen percentage settings with editor settings in PIE" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bOverridePIEScreenPercentage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage = { "bOverridePIEScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Override project's default screen percentage mode for realtime editor viewports." },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode = { "RealtimeScreenPercentageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceSettings, RealtimeScreenPercentageMode), Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode_MetaData)) }; // 2595641238
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Override project's default screen percentage mode for path-traced editor viewports." },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode = { "PathTracerScreenPercentageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceSettings, PathTracerScreenPercentageMode), Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode_MetaData)) }; // 2595641238
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Override project's default screen percentage mode for non-realtime editor viewports." },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode = { "NonRealtimeScreenPercentageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceSettings, NonRealtimeScreenPercentageMode), Z_Construct_UEnum_UnrealEd_EEditorUserScreenPercentageModeOverride, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_MetaData)) }; // 2595641238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Override project's manual screen percentage" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bOverrideManualScreenPercentage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage = { "bOverrideManualScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_ManualScreenPercentage_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "Comment", "/** Editor viewport screen percentage */" },
		{ "DisplayName", "Editor viewport screen percentage." },
		{ "EditCondition", "bOverrideManualScreenPercentage" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
		{ "ToolTip", "Editor viewport screen percentage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_ManualScreenPercentage = { "ManualScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceSettings, ManualScreenPercentage), METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_ManualScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_ManualScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Override project's minimum viewport rendering resolution" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bOverrideMinViewportRenderingResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution = { "bOverrideMinViewportRenderingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MinViewportRenderingResolution_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Minimum default rendering resolution to use for editor viewports." },
		{ "EditCondition", "bOverrideMinViewportRenderingResolution" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MinViewportRenderingResolution = { "MinViewportRenderingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceSettings, MinViewportRenderingResolution), METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MinViewportRenderingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MinViewportRenderingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Override project's maximum viewport rendering resolution" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution_SetBit(void* Obj)
	{
		((UEditorPerformanceSettings*)Obj)->bOverrideMaxViewportRenderingResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution = { "bOverrideMaxViewportRenderingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerformanceSettings), &Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MaxViewportRenderingResolution_MetaData[] = {
		{ "Category", "ViewportResolution" },
		{ "DisplayName", "Maximum default rendering resolution to use for editor viewports." },
		{ "EditCondition", "bOverrideMaxViewportRenderingResolution" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerformanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MaxViewportRenderingResolution = { "MaxViewportRenderingResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerformanceSettings, MaxViewportRenderingResolution), METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MaxViewportRenderingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MaxViewportRenderingResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorPerformanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bShowFrameRateAndMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bThrottleCPUWhenNotForeground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisableRealtimeViewportsInRemoteSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bMonitorEditorPerformance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bEnableScalabilityWarningIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bDisplayHighDPIViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverridePIEScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_RealtimeScreenPercentageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_PathTracerScreenPercentageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_NonRealtimeScreenPercentageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideManualScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_ManualScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMinViewportRenderingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MinViewportRenderingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_bOverrideMaxViewportRenderingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerformanceSettings_Statics::NewProp_MaxViewportRenderingResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorPerformanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorPerformanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorPerformanceSettings_Statics::ClassParams = {
		&UEditorPerformanceSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorPerformanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorPerformanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerformanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorPerformanceSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorPerformanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorPerformanceSettings.OuterSingleton, Z_Construct_UClass_UEditorPerformanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorPerformanceSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorPerformanceSettings>()
	{
		return UEditorPerformanceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorPerformanceSettings);
	UEditorPerformanceSettings::~UEditorPerformanceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics::EnumInfo[] = {
		{ EEditorUserScreenPercentageModeOverride_StaticEnum, TEXT("EEditorUserScreenPercentageModeOverride"), &Z_Registration_Info_UEnum_EEditorUserScreenPercentageModeOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2595641238U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorPerformanceSettings, UEditorPerformanceSettings::StaticClass, TEXT("UEditorPerformanceSettings"), &Z_Registration_Info_UClass_UEditorPerformanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorPerformanceSettings), 2764417272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_1244966928(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
