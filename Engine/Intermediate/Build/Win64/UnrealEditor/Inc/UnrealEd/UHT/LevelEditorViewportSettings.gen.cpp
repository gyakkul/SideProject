// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/LevelEditorViewportSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorViewportSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorViewportSettings();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMaterialKind();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ERotationGridMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EScrollGestureDirection();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EWASDType();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSnapToSurfaceSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationGridMode;
	static UEnum* ERotationGridMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotationGridMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotationGridMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ERotationGridMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ERotationGridMode"));
		}
		return Z_Registration_Info_UEnum_ERotationGridMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ERotationGridMode>()
	{
		return ERotationGridMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::Enumerators[] = {
		{ "GridMode_DivisionsOf360", (int64)GridMode_DivisionsOf360 },
		{ "GridMode_Common", (int64)GridMode_Common },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates modes for the viewport's rotation grid.\n */" },
		{ "GridMode_Common.Comment", "/** Uses the user defined grid values. */" },
		{ "GridMode_Common.Name", "GridMode_Common" },
		{ "GridMode_Common.ToolTip", "Uses the user defined grid values." },
		{ "GridMode_DivisionsOf360.Comment", "/** Using Divisions of 360 degrees (e.g 360/2. 360/3, 360/4, ... ). */" },
		{ "GridMode_DivisionsOf360.Name", "GridMode_DivisionsOf360" },
		{ "GridMode_DivisionsOf360.ToolTip", "Using Divisions of 360 degrees (e.g 360/2. 360/3, 360/4, ... )." },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enumerates modes for the viewport's rotation grid." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ERotationGridMode",
		"ERotationGridMode",
		Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ERotationGridMode()
	{
		if (!Z_Registration_Info_UEnum_ERotationGridMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationGridMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ERotationGridMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotationGridMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWASDType;
	static UEnum* EWASDType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWASDType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWASDType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EWASDType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EWASDType"));
		}
		return Z_Registration_Info_UEnum_EWASDType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EWASDType>()
	{
		return EWASDType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EWASDType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EWASDType_Statics::Enumerators[] = {
		{ "WASD_Always", (int64)WASD_Always },
		{ "WASD_RMBOnly", (int64)WASD_RMBOnly },
		{ "WASD_Never", (int64)WASD_Never },
		{ "WASD_MAX", (int64)WASD_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EWASDType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates camera control types for the W, A, S and D keys.\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enumerates camera control types for the W, A, S and D keys." },
		{ "WASD_Always.DisplayName", "Use WASD for Camera Controls" },
		{ "WASD_Always.Name", "WASD_Always" },
		{ "WASD_MAX.Name", "WASD_MAX" },
		{ "WASD_Never.DisplayName", "Never use WASD for Camera Controls" },
		{ "WASD_Never.Name", "WASD_Never" },
		{ "WASD_RMBOnly.DisplayName", "Use WASD only when a Mouse Button is Pressed" },
		{ "WASD_RMBOnly.Name", "WASD_RMBOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EWASDType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EWASDType",
		"EWASDType",
		Z_Construct_UEnum_UnrealEd_EWASDType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EWASDType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EWASDType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EWASDType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EWASDType()
	{
		if (!Z_Registration_Info_UEnum_EWASDType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWASDType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EWASDType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWASDType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType;
	static UEnum* ELandscapeFoliageEditorControlType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELandscapeFoliageEditorControlType"));
		}
		return Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELandscapeFoliageEditorControlType>()
	{
		return ELandscapeFoliageEditorControlType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::Enumerators[] = {
		{ "ELandscapeFoliageEditorControlType::IgnoreCtrl", (int64)ELandscapeFoliageEditorControlType::IgnoreCtrl },
		{ "ELandscapeFoliageEditorControlType::RequireCtrl", (int64)ELandscapeFoliageEditorControlType::RequireCtrl },
		{ "ELandscapeFoliageEditorControlType::RequireNoCtrl", (int64)ELandscapeFoliageEditorControlType::RequireNoCtrl },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Is Ctrl key required for editing landscape/foliage?\n */" },
		{ "IgnoreCtrl.DisplayName", "Ignore Ctrl key (allow but don't require Ctrl held)" },
		{ "IgnoreCtrl.Name", "ELandscapeFoliageEditorControlType::IgnoreCtrl" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "RequireCtrl.DisplayName", "Require Ctrl held for tools" },
		{ "RequireCtrl.Name", "ELandscapeFoliageEditorControlType::RequireCtrl" },
		{ "RequireNoCtrl.DisplayName", "Require Ctrl is not held" },
		{ "RequireNoCtrl.Name", "ELandscapeFoliageEditorControlType::RequireNoCtrl" },
		{ "ToolTip", "Is Ctrl key required for editing landscape/foliage?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELandscapeFoliageEditorControlType",
		"ELandscapeFoliageEditorControlType",
		Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeasuringToolUnits;
	static UEnum* EMeasuringToolUnits_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeasuringToolUnits.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeasuringToolUnits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMeasuringToolUnits"));
		}
		return Z_Registration_Info_UEnum_EMeasuringToolUnits.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMeasuringToolUnits>()
	{
		return EMeasuringToolUnits_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::Enumerators[] = {
		{ "MeasureUnits_Centimeters", (int64)MeasureUnits_Centimeters },
		{ "MeasureUnits_Meters", (int64)MeasureUnits_Meters },
		{ "MeasureUnits_Kilometers", (int64)MeasureUnits_Kilometers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Units used by measuring tool\n */" },
		{ "MeasureUnits_Centimeters.DisplayName", "Centimeters" },
		{ "MeasureUnits_Centimeters.Name", "MeasureUnits_Centimeters" },
		{ "MeasureUnits_Kilometers.DisplayName", "Kilometers" },
		{ "MeasureUnits_Kilometers.Name", "MeasureUnits_Kilometers" },
		{ "MeasureUnits_Meters.DisplayName", "Meters" },
		{ "MeasureUnits_Meters.Name", "MeasureUnits_Meters" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Units used by measuring tool" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EMeasuringToolUnits",
		"EMeasuringToolUnits",
		Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits()
	{
		if (!Z_Registration_Info_UEnum_EMeasuringToolUnits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeasuringToolUnits.InnerSingleton, Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeasuringToolUnits.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScrollGestureDirection;
	static UEnum* EScrollGestureDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScrollGestureDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScrollGestureDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EScrollGestureDirection, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EScrollGestureDirection"));
		}
		return Z_Registration_Info_UEnum_EScrollGestureDirection.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EScrollGestureDirection>()
	{
		return EScrollGestureDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::Enumerators[] = {
		{ "EScrollGestureDirection::UseSystemSetting", (int64)EScrollGestureDirection::UseSystemSetting },
		{ "EScrollGestureDirection::Standard", (int64)EScrollGestureDirection::Standard },
		{ "EScrollGestureDirection::Natural", (int64)EScrollGestureDirection::Natural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Scroll gesture direction\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "Natural.DisplayName", "Natural" },
		{ "Natural.Name", "EScrollGestureDirection::Natural" },
		{ "Standard.DisplayName", "Standard" },
		{ "Standard.Name", "EScrollGestureDirection::Standard" },
		{ "ToolTip", "Scroll gesture direction" },
		{ "UseSystemSetting.DisplayName", "Use system setting" },
		{ "UseSystemSetting.Name", "EScrollGestureDirection::UseSystemSetting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EScrollGestureDirection",
		"EScrollGestureDirection",
		Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EScrollGestureDirection()
	{
		if (!Z_Registration_Info_UEnum_EScrollGestureDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScrollGestureDirection.InnerSingleton, Z_Construct_UEnum_UnrealEd_EScrollGestureDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScrollGestureDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialKind;
	static UEnum* EMaterialKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMaterialKind, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMaterialKind"));
		}
		return Z_Registration_Info_UEnum_EMaterialKind.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMaterialKind>()
	{
		return EMaterialKind_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::Enumerators[] = {
		{ "EMaterialKind::Unknown", (int64)EMaterialKind::Unknown },
		{ "EMaterialKind::Base", (int64)EMaterialKind::Base },
		{ "EMaterialKind::Normal", (int64)EMaterialKind::Normal },
		{ "EMaterialKind::Specular", (int64)EMaterialKind::Specular },
		{ "EMaterialKind::Emissive", (int64)EMaterialKind::Emissive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::Enum_MetaDataParams[] = {
		{ "Base.Name", "EMaterialKind::Base" },
		{ "Emissive.Name", "EMaterialKind::Emissive" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "Normal.Name", "EMaterialKind::Normal" },
		{ "Specular.Name", "EMaterialKind::Specular" },
		{ "Unknown.Name", "EMaterialKind::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EMaterialKind",
		"EMaterialKind",
		Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EMaterialKind()
	{
		if (!Z_Registration_Info_UEnum_EMaterialKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialKind.InnerSingleton, Z_Construct_UEnum_UnrealEd_EMaterialKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialKind.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings;
class UScriptStruct* FLevelEditorViewportInstanceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LevelEditorViewportInstanceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLevelEditorViewportInstanceSettings>()
{
	return FLevelEditorViewportInstanceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerspViewModeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerspViewModeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoViewModeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrthoViewModeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorShowFlagsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditorShowFlagsString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameShowFlagsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameShowFlagsString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BufferVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NaniteVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LumenVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrataVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StrataVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroomVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualShadowMapVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualShadowMapVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingDebugVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RayTracingDebugVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUSkinCacheVisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GPUSkinCacheVisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposureSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposureSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarViewPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarViewPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRealtime_MetaData[];
#endif
		static void NewProp_bIsRealtime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRealtime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[];
#endif
		static void NewProp_bShowFPS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnScreenStats_MetaData[];
#endif
		static void NewProp_bShowOnScreenStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnScreenStats;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnabledStats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledStats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFullToolbar_MetaData[];
#endif
		static void NewProp_bShowFullToolbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFullToolbar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Level Editor's per-instance view port settings.\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Implements the Level Editor's per-instance view port settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditorViewportInstanceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType_MetaData[] = {
		{ "Comment", "/** The viewport type */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The viewport type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType = { "ViewportType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, ViewportType), Z_Construct_UEnum_UnrealEd_ELevelViewportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType_MetaData)) }; // 159852840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex_MetaData[] = {
		{ "Comment", "/* View mode to set when this viewport is of type LVT_Perspective. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "View mode to set when this viewport is of type LVT_Perspective." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex = { "PerspViewModeIndex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, PerspViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex_MetaData)) }; // 1054163023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex_MetaData[] = {
		{ "Comment", "/* View mode to set when this viewport is not of type LVT_Perspective. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "View mode to set when this viewport is not of type LVT_Perspective." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex = { "OrthoViewModeIndex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, OrthoViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex_MetaData)) }; // 1054163023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString_MetaData[] = {
		{ "Comment", "/**\n\x09 * A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form.\n\x09 * These have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form.\nThese have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString = { "EditorShowFlagsString", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, EditorShowFlagsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString_MetaData[] = {
		{ "Comment", "/**\n\x09 * A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form.\n\x09 * These have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form.\nThese have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString = { "GameShowFlagsString", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, GameShowFlagsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode_MetaData[] = {
		{ "Comment", "/** The buffer visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The buffer visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode = { "BufferVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, BufferVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_NaniteVisualizationMode_MetaData[] = {
		{ "Comment", "/** The Nanite visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The Nanite visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_NaniteVisualizationMode = { "NaniteVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, NaniteVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_NaniteVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_NaniteVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_LumenVisualizationMode_MetaData[] = {
		{ "Comment", "/** The Lumen visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The Lumen visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_LumenVisualizationMode = { "LumenVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, LumenVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_LumenVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_LumenVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_StrataVisualizationMode_MetaData[] = {
		{ "Comment", "/** The Strata visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The Strata visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_StrataVisualizationMode = { "StrataVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, StrataVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_StrataVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_StrataVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GroomVisualizationMode_MetaData[] = {
		{ "Comment", "/** The Groom visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The Groom visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GroomVisualizationMode = { "GroomVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, GroomVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GroomVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GroomVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_VirtualShadowMapVisualizationMode_MetaData[] = {
		{ "Comment", "/** The virtual shadow map visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The virtual shadow map visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_VirtualShadowMapVisualizationMode = { "VirtualShadowMapVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, VirtualShadowMapVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_VirtualShadowMapVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_VirtualShadowMapVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_RayTracingDebugVisualizationMode_MetaData[] = {
		{ "Comment", "/** The buffer visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The buffer visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_RayTracingDebugVisualizationMode = { "RayTracingDebugVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, RayTracingDebugVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_RayTracingDebugVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_RayTracingDebugVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GPUSkinCacheVisualizationMode_MetaData[] = {
		{ "Comment", "/** The GPU Skin Cache visualization mode for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The GPU Skin Cache visualization mode for the viewport." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GPUSkinCacheVisualizationMode = { "GPUSkinCacheVisualizationMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, GPUSkinCacheVisualizationMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GPUSkinCacheVisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GPUSkinCacheVisualizationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings_MetaData[] = {
		{ "Comment", "/** Setting to allow designers to override the automatic expose. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Setting to allow designers to override the automatic expose." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings = { "ExposureSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, ExposureSettings), Z_Construct_UScriptStruct_FExposureSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings_MetaData)) }; // 1667589982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "Comment", "/* Field of view angle for the viewport. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Field of view angle for the viewport." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, FOVAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane_MetaData[] = {
		{ "Comment", "/* Position of the var plane in the editor viewport */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Position of the var plane in the editor viewport" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane = { "FarViewPlane", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, FarViewPlane), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_MetaData[] = {
		{ "Comment", "/* Whether this viewport is updating in real-time. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether this viewport is updating in real-time." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bIsRealtime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime = { "bIsRealtime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_MetaData[] = {
		{ "Comment", "/* Whether the FPS counter should be shown. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether the FPS counter should be shown." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bShowFPS_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_MetaData[] = {
		{ "Comment", "/* Whether viewport statistics should be shown. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether viewport statistics should be shown." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bShowOnScreenStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats = { "bShowOnScreenStats", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_Inner = { "EnabledStats", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_MetaData[] = {
		{ "Comment", "/* Whether viewport statistics should be enabled by default. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether viewport statistics should be enabled by default." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats = { "EnabledStats", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettings, EnabledStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** When enabled, the full viewport toolbar will be shown. When disabled, a compact toolbar is used. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When enabled, the full viewport toolbar will be shown. When disabled, a compact toolbar is used." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_SetBit(void* Obj)
	{
		((FLevelEditorViewportInstanceSettings*)Obj)->bShowFullToolbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar = { "bShowFullToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelEditorViewportInstanceSettings), &Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ViewportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_PerspViewModeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_OrthoViewModeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EditorShowFlagsString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GameShowFlagsString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_BufferVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_NaniteVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_LumenVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_StrataVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GroomVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_VirtualShadowMapVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_RayTracingDebugVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_GPUSkinCacheVisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_ExposureSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FOVAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_FarViewPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bIsRealtime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowOnScreenStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_EnabledStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewProp_bShowFullToolbar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LevelEditorViewportInstanceSettings",
		sizeof(FLevelEditorViewportInstanceSettings),
		alignof(FLevelEditorViewportInstanceSettings),
		Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair;
class UScriptStruct* FLevelEditorViewportInstanceSettingsKeyValuePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LevelEditorViewportInstanceSettingsKeyValuePair"));
	}
	return Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLevelEditorViewportInstanceSettingsKeyValuePair>()
{
	return FLevelEditorViewportInstanceSettingsKeyValuePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a key -> value pair for the per-instance view port settings\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Implements a key -> value pair for the per-instance view port settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditorViewportInstanceSettingsKeyValuePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Comment", "/*  Name identifying this config. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Name identifying this config." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettingsKeyValuePair, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings_MetaData[] = {
		{ "Comment", "/* Settings for this config. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Settings for this config." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings = { "ConfigSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorViewportInstanceSettingsKeyValuePair, ConfigSettings), Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings_MetaData)) }; // 4253844153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewProp_ConfigSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LevelEditorViewportInstanceSettingsKeyValuePair",
		sizeof(FLevelEditorViewportInstanceSettingsKeyValuePair),
		alignof(FLevelEditorViewportInstanceSettingsKeyValuePair),
		Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair.InnerSingleton, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings;
class UScriptStruct* FSnapToSurfaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapToSurfaceSettings, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("SnapToSurfaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSnapToSurfaceSettings>()
{
	return FSnapToSurfaceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapOffsetExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapOffsetExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapRotation_MetaData[];
#endif
		static void NewProp_bSnapRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings that control the behavior of the \"snap to surface\" feature\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Settings that control the behavior of the \"snap to surface\" feature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapToSurfaceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether snapping to surfaces in the world is enabled */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether snapping to surfaces in the world is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSnapToSurfaceSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSnapToSurfaceSettings), &Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent_MetaData[] = {
		{ "Comment", "/** The amount of offset to apply when snapping to surfaces */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The amount of offset to apply when snapping to surfaces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent = { "SnapOffsetExtent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapToSurfaceSettings, SnapOffsetExtent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_MetaData[] = {
		{ "Comment", "/** Whether objects should match the rotation of the surfaces they snap to */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether objects should match the rotation of the surfaces they snap to" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_SetBit(void* Obj)
	{
		((FSnapToSurfaceSettings*)Obj)->bSnapRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation = { "bSnapRotation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSnapToSurfaceSettings), &Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_SnapOffsetExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewProp_bSnapRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SnapToSurfaceSettings",
		sizeof(FSnapToSurfaceSettings),
		alignof(FSnapToSurfaceSettings),
		Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapToSurfaceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings.InnerSingleton;
	}
	void ULevelEditorViewportSettings::StaticRegisterNativesULevelEditorViewportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorViewportSettings);
	UClass* Z_Construct_UClass_ULevelEditorViewportSettings_NoRegister()
	{
		return ULevelEditorViewportSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorViewportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlightCameraControlType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FlightCameraControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlightCameraControlExperimentalNavigation_MetaData[];
#endif
		static void NewProp_FlightCameraControlExperimentalNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlightCameraControlExperimentalNavigation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeEditorControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeEditorControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeEditorControlType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FoliageEditorControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageEditorControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FoliageEditorControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPanMovesCanvas_MetaData[];
#endif
		static void NewProp_bPanMovesCanvas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPanMovesCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterZoomAroundCursor_MetaData[];
#endif
		static void NewProp_bCenterZoomAroundCursor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterZoomAroundCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumOrthographicZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumOrthographicZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTranslateRotateZWidget_MetaData[];
#endif
		static void NewProp_bAllowTranslateRotateZWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTranslateRotateZWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowArcballRotate_MetaData[];
#endif
		static void NewProp_bAllowArcballRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowArcballRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowScreenRotate_MetaData[];
#endif
		static void NewProp_bAllowScreenRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowScreenRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClickBSPSelectsBrush_MetaData[];
#endif
		static void NewProp_bClickBSPSelectsBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClickBSPSelectsBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowActorEditorContext_MetaData[];
#endif
		static void NewProp_bShowActorEditorContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowActorEditorContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeedScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeedScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseScrollCameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MouseScrollCameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseLookYAxis_MetaData[];
#endif
		static void NewProp_bInvertMouseLookYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseLookYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertOrbitYAxis_MetaData[];
#endif
		static void NewProp_bInvertOrbitYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertOrbitYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMiddleMousePan_MetaData[];
#endif
		static void NewProp_bInvertMiddleMousePan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMiddleMousePan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertRightMouseDollyYAxis_MetaData[];
#endif
		static void NewProp_bInvertRightMouseDollyYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertRightMouseDollyYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteTranslation_MetaData[];
#endif
		static void NewProp_bUseAbsoluteTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLevelStreamingVolumePrevis_MetaData[];
#endif
		static void NewProp_bLevelStreamingVolumePrevis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLevelStreamingVolumePrevis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUE3OrbitControls_MetaData[];
#endif
		static void NewProp_bUseUE3OrbitControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUE3OrbitControls;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScrollGestureDirectionFor3DViewports_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollGestureDirectionFor3DViewports_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScrollGestureDirectionFor3DViewports;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScrollGestureDirectionForOrthoViewports_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollGestureDirectionForOrthoViewports_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScrollGestureDirectionForOrthoViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLevelEditorJoystickControls_MetaData[];
#endif
		static void NewProp_bLevelEditorJoystickControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLevelEditorJoystickControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceScaledCameraSpeed_MetaData[];
#endif
		static void NewProp_bUseDistanceScaledCameraSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceScaledCameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrbitCameraAroundSelection_MetaData[];
#endif
		static void NewProp_bOrbitCameraAroundSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrbitCameraAroundSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePowerOf2SnapSize_MetaData[];
#endif
		static void NewProp_bUsePowerOf2SnapSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePowerOf2SnapSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecimalGridSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecimalGridSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DecimalGridSizes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecimalGridIntervals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecimalGridIntervals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DecimalGridIntervals;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pow2GridSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pow2GridSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pow2GridSizes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pow2GridIntervals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pow2GridIntervals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pow2GridIntervals;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CommonRotGridSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonRotGridSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonRotGridSizes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DivisionsOf360RotGridSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivisionsOf360RotGridSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DivisionsOf360RotGridSizes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingGridSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingGridSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalingGridSizes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridEnabled_MetaData[];
#endif
		static void NewProp_GridEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GridEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotGridEnabled_MetaData[];
#endif
		static void NewProp_RotGridEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotGridEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapScaleEnabled_MetaData[];
#endif
		static void NewProp_SnapScaleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapScaleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapToSurface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapToSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePercentageBasedScaling_MetaData[];
#endif
		static void NewProp_bUsePercentageBasedScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePercentageBasedScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLayerSnap_MetaData[];
#endif
		static void NewProp_bEnableLayerSnap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLayerSnap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSnapLayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSnapLayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableActorSnap_MetaData[];
#endif
		static void NewProp_bEnableActorSnap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableActorSnap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSnapScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorSnapScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSnapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorSnapDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapVertices_MetaData[];
#endif
		static void NewProp_bSnapVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPosGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRotGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScalingGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScalingGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreserveNonUniformScale_MetaData[];
#endif
		static void NewProp_PreserveNonUniformScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNonUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotGridMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRotGridMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewportHoverFeedback_MetaData[];
#endif
		static void NewProp_bEnableViewportHoverFeedback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewportHoverFeedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightWithBrackets_MetaData[];
#endif
		static void NewProp_bHighlightWithBrackets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightWithBrackets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinkedOrthographicViewports_MetaData[];
#endif
		static void NewProp_bUseLinkedOrthographicViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinkedOrthographicViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStrictBoxSelection_MetaData[];
#endif
		static void NewProp_bStrictBoxSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrictBoxSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransparentBoxSelection_MetaData[];
#endif
		static void NewProp_bTransparentBoxSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransparentBoxSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelectionOutline_MetaData[];
#endif
		static void NewProp_bUseSelectionOutline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelectionOutline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionHighlightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPSelectionHighlightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPSelectionHighlightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData[];
#endif
		static void NewProp_bEnableViewportCameraToUpdateFromPIV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewportCameraToUpdateFromPIV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewSelectedCameras_MetaData[];
#endif
		static void NewProp_bPreviewSelectedCameras_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewSelectedCameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPreviewSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPreviewSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundDropDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundDropDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BillboardScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BillboardScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformWidgetSizeAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransformWidgetSizeAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveEngineStats_MetaData[];
#endif
		static void NewProp_bSaveEngineStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveEngineStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasuringToolUnits_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeasuringToolUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSplinePointSizeAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectedSplinePointSizeAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineLineThicknessAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineLineThicknessAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineTangentHandleSizeAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineTangentHandleSizeAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineTangentScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineTangentScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInViewportMenuLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastInViewportMenuLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialForDroppedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialForDroppedTextures;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParamsForDroppedTextures_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialParamsForDroppedTextures_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialParamsForDroppedTextures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamsForDroppedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialParamsForDroppedTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorViewportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Level Editor's view port settings.\n */" },
		{ "IncludePath", "Settings/LevelEditorViewportSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Implements the Level Editor's view port settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Enable the use of flight camera controls under various circumstances. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enable the use of flight camera controls under various circumstances." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType = { "FlightCameraControlType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, FlightCameraControlType), Z_Construct_UEnum_UnrealEd_EWASDType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType_MetaData)) }; // 2935081929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Enable the use of the experimental navigation in the flight camera controls. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enable the use of the experimental navigation in the flight camera controls." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->FlightCameraControlExperimentalNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation = { "FlightCameraControlExperimentalNavigation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Choose the control scheme for landscape tools (ignored for pen input) */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Choose the control scheme for landscape tools (ignored for pen input)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType = { "LandscapeEditorControlType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, LandscapeEditorControlType), Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_MetaData)) }; // 340642774
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Choose the control scheme for foliage tools */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Choose the control scheme for foliage tools" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType = { "FoliageEditorControlType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, FoliageEditorControlType), Z_Construct_UEnum_UnrealEd_ELandscapeFoliageEditorControlType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_MetaData)) }; // 340642774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** If true, moves the canvas and shows the mouse.  If false, uses original camera movement. */" },
		{ "DisplayName", "Grab and Drag to Move Orthographic Cameras" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true, moves the canvas and shows the mouse.  If false, uses original camera movement." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bPanMovesCanvas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas = { "bPanMovesCanvas", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** If checked, in orthographic view ports zooming will center on the mouse position.  If unchecked, the zoom is around the center of the viewport. */" },
		{ "DisplayName", "Orthographic Zoom to Cursor Position" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If checked, in orthographic view ports zooming will center on the mouse position.  If unchecked, the zoom is around the center of the viewport." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bCenterZoomAroundCursor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor = { "bCenterZoomAroundCursor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MinimumOrthographicZoom_MetaData[] = {
		{ "Category", "Controls" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The closest possible distance allowed when viewing through an orthographic camera */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The closest possible distance allowed when viewing through an orthographic camera" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MinimumOrthographicZoom = { "MinimumOrthographicZoom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, MinimumOrthographicZoom), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MinimumOrthographicZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MinimumOrthographicZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Allow translate/rotate widget */" },
		{ "DisplayName", "Enable Combined Translate/Rotate Widget" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Allow translate/rotate widget" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bAllowTranslateRotateZWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget = { "bAllowTranslateRotateZWidget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Allow arcball rotation with rotate widget */" },
		{ "DisplayName", "Enable Arcball Rotate" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Allow arcball rotation with rotate widget" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bAllowArcballRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate = { "bAllowArcballRotate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Allow screen rotation with rotate widget */" },
		{ "DisplayName", "Enable Screen Rotate" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Allow screen rotation with rotate widget" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bAllowScreenRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate = { "bAllowScreenRotate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** If true, Clicking a BSP selects the brush and ctrl+shift+click selects the surface. If false, vice versa */" },
		{ "DisplayName", "Clicking BSP Enables Brush" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true, Clicking a BSP selects the brush and ctrl+shift+click selects the surface. If false, vice versa" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bClickBSPSelectsBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush = { "bClickBSPSelectsBrush", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** If true, viewport will show actor editor context (current level, current data layer(s), current folder) */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true, viewport will show actor editor context (current level, current data layer(s), current folder)" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bShowActorEditorContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext = { "bShowActorEditorContext", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How fast the perspective camera moves when flying through the world. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "How fast the perspective camera moves when flying through the world." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar_MetaData[] = {
		{ "ClampMin", "1" },
		{ "Comment", "/** Scalar applied to perspective camera movement to increase movement range. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Scalar applied to perspective camera movement to increase movement range." },
		{ "UIMax", "128" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar = { "CameraSpeedScalar", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CameraSpeedScalar), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed_MetaData[] = {
		{ "Category", "Controls" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How fast the perspective camera moves through the world when using mouse scroll. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "How fast the perspective camera moves through the world when using mouse scroll." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed = { "MouseScrollCameraSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, MouseScrollCameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty_MetaData[] = {
		{ "Category", "Controls" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** The sensitivity of mouse movement when rotating the camera. */" },
		{ "DisplayName", "Mouse Sensitivity" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The sensitivity of mouse movement when rotating the camera." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty = { "MouseSensitivty", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, MouseSensitivty), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Whether or not to invert mouse on the y axis in free look mode */" },
		{ "DisplayName", "Invert Mouse Look Y Axis" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert mouse on the y axis in free look mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertMouseLookYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis = { "bInvertMouseLookYAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Whether or not to invert mouse on y axis in orbit mode */" },
		{ "DisplayName", "Invert Orbit Y Axis" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert mouse on y axis in orbit mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertOrbitYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis = { "bInvertOrbitYAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Whether or not to invert the direction of middle mouse panning in viewports */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert the direction of middle mouse panning in viewports" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertMiddleMousePan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan = { "bInvertMiddleMousePan", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Whether or not to invert the direction of right mouse dolly on the Y axis in orbit mode */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether or not to invert the direction of right mouse dolly on the Y axis in orbit mode" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bInvertRightMouseDollyYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis = { "bInvertRightMouseDollyYAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Whether to use mouse position as direct widget position. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether to use mouse position as direct widget position." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseAbsoluteTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation = { "bUseAbsoluteTranslation", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** If enabled, the viewport will stream in levels automatically when the camera is moved. */" },
		{ "DisplayName", "Stream in Levels Automatically when Camera is Moved" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, the viewport will stream in levels automatically when the camera is moved." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bLevelStreamingVolumePrevis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis = { "bLevelStreamingVolumePrevis", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** When checked, orbit the camera by using the L or U keys when unchecked, Alt and Left Mouse Drag will orbit around the look at point */" },
		{ "DisplayName", "Use UE3 Orbit Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When checked, orbit the camera by using the L or U keys when unchecked, Alt and Left Mouse Drag will orbit around the look at point" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseUE3OrbitControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls = { "bUseUE3OrbitControls", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Direction of the scroll gesture for 3D viewports */" },
		{ "DisplayName", "Scroll gesture direction for 3D viewports" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Direction of the scroll gesture for 3D viewports" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports = { "ScrollGestureDirectionFor3DViewports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, ScrollGestureDirectionFor3DViewports), Z_Construct_UEnum_UnrealEd_EScrollGestureDirection, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_MetaData)) }; // 3054824673
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Direction of the scroll gesture for orthographic viewports */" },
		{ "DisplayName", "Scroll gesture direction for orthographic viewports" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Direction of the scroll gesture for orthographic viewports" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports = { "ScrollGestureDirectionForOrthoViewports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, ScrollGestureDirectionForOrthoViewports), Z_Construct_UEnum_UnrealEd_EScrollGestureDirection, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_MetaData)) }; // 3054824673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Enables joystick-based camera movement in 3D level editing viewports */" },
		{ "DisplayName", "Level Editor Joystick Controls" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enables joystick-based camera movement in 3D level editing viewports" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bLevelEditorJoystickControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls = { "bLevelEditorJoystickControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** If enabled, scale the perspective camera speed based on the distance between the camera and its look-at position */" },
		{ "DisplayName", "Use distance-scaled camera speed" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, scale the perspective camera speed based on the distance between the camera and its look-at position" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseDistanceScaledCameraSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed = { "bUseDistanceScaledCameraSpeed", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** If enabled, the camera will orbit around the current selection in the viewport */" },
		{ "DisplayName", "Orbit camera around selection" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, the camera will orbit around the current selection in the viewport" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bOrbitCameraAroundSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection = { "bOrbitCameraAroundSelection", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled will use power of 2 grid settings (e.g, 1,2,4,8,16,...,1024) instead of decimal grid sizes */" },
		{ "DisplayName", "Use Power of Two Snap Size" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled will use power of 2 grid settings (e.g, 1,2,4,8,16,...,1024) instead of decimal grid sizes" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUsePowerOf2SnapSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize = { "bUsePowerOf2SnapSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_Inner = { "DecimalGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** Decimal grid sizes (for translation snapping and grid rendering) */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Decimal grid sizes (for translation snapping and grid rendering)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes = { "DecimalGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, DecimalGridSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_Inner = { "DecimalGridIntervals", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** The number of lines between each major line interval for decimal grids */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The number of lines between each major line interval for decimal grids" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals = { "DecimalGridIntervals", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, DecimalGridIntervals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_Inner = { "Pow2GridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** Power of 2 grid sizes (for translation snapping and grid rendering) */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Power of 2 grid sizes (for translation snapping and grid rendering)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes = { "Pow2GridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, Pow2GridSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_Inner = { "Pow2GridIntervals", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** The number of lines between each major line interval for pow2 grids */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The number of lines between each major line interval for pow2 grids" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals = { "Pow2GridIntervals", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, Pow2GridIntervals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_Inner = { "CommonRotGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** User defined grid intervals for rotations */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "User defined grid intervals for rotations" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes = { "CommonRotGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CommonRotGridSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_Inner = { "DivisionsOf360RotGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** Preset grid intervals for rotations */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Preset grid intervals for rotations" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes = { "DivisionsOf360RotGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, DivisionsOf360RotGridSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_Inner = { "ScalingGridSizes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** Grid sizes for scaling */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Grid sizes for scaling" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes = { "ScalingGridSizes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, ScalingGridSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled, actor positions will snap to the grid. */" },
		{ "DisplayName", "Enable Grid Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor positions will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->GridEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled = { "GridEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled, actor rotations will snap to the grid. */" },
		{ "DisplayName", "Enable Rotation Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor rotations will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->RotGridEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled = { "RotGridEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled, actor sizes will snap to the grid. */" },
		{ "DisplayName", "Enable Scale Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actor sizes will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->SnapScaleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled = { "SnapScaleEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface_MetaData[] = {
		{ "Comment", "/** If enabled, actors will snap to surfaces in the viewport when dragged around */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, actors will snap to surfaces in the viewport when dragged around" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface = { "SnapToSurface", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SnapToSurface), Z_Construct_UScriptStruct_FSnapToSurfaceSettings, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface_MetaData)) }; // 2223793561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled, use the old-style multiplicative/percentage scaling method instead of the new additive/fraction method */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, use the old-style multiplicative/percentage scaling method instead of the new additive/fraction method" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUsePercentageBasedScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling = { "bUsePercentageBasedScaling", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled, new Actors that you drag into the viewport snap to the active 2D layer. */" },
		{ "DisplayName", "Enable 2D Layer Snapping" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, new Actors that you drag into the viewport snap to the active 2D layer." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableLayerSnap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap = { "bEnableLayerSnap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex_MetaData[] = {
		{ "Comment", "/** The index of the snap plane to use when 2D Layer Snapping is enabled, from the array of Snap Layers set for the project. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The index of the snap plane to use when 2D Layer Snapping is enabled, from the array of Snap Layers set for the project." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex = { "ActiveSnapLayerIndex", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, ActiveSnapLayerIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If true actor snap will be enabled in the editor **/" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If true actor snap will be enabled in the editor *" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableActorSnap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap = { "bEnableActorSnap", nullptr, (EPropertyFlags)0x0010040000034001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** Global actor snap scale for the editor */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Global actor snap scale for the editor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale = { "ActorSnapScale", nullptr, (EPropertyFlags)0x0010040000034001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, ActorSnapScale), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance_MetaData[] = {
		{ "Comment", "/** Global actor snap distance setting for the editor */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Global actor snap distance setting for the editor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance = { "ActorSnapDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, ActorSnapDistance), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bSnapVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices = { "bSnapVertices", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance = { "SnapDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SnapDistance), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize = { "CurrentPosGridSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentPosGridSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize = { "CurrentRotGridSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentRotGridSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize = { "CurrentScalingGridSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentScalingGridSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->PreserveNonUniformScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale = { "PreserveNonUniformScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode_MetaData[] = {
		{ "Comment", "/** Controls which array of rotation grid values we are using */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Controls which array of rotation grid values we are using" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode = { "CurrentRotGridMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CurrentRotGridMode), Z_Construct_UEnum_UnrealEd_ERotationGridMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode_MetaData)) }; // 4188224864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** How to constrain perspective view port FOV */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "How to constrain perspective view port FOV" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData)) }; // 3405006504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Enables real-time hover feedback when mousing over objects in editor view ports */" },
		{ "DisplayName", "Highlight Objects Under Mouse Cursor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enables real-time hover feedback when mousing over objects in editor view ports" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableViewportHoverFeedback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback = { "bEnableViewportHoverFeedback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** If enabled, selected objects will be highlighted with brackets in all modes rather than a special highlight color. */" },
		{ "DisplayName", "Highlight Selected Objects with Brackets" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If enabled, selected objects will be highlighted with brackets in all modes rather than a special highlight color." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bHighlightWithBrackets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets = { "bHighlightWithBrackets", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** If checked all orthographic view ports are linked to the same position and move together. */" },
		{ "DisplayName", "Link Orthographic Viewport Movement" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "If checked all orthographic view ports are linked to the same position and move together." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseLinkedOrthographicViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports = { "bUseLinkedOrthographicViewports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_MetaData[] = {
		{ "Comment", "/** True if viewport box selection requires objects to be fully encompassed by the selection box to be selected */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "True if viewport box selection requires objects to be fully encompassed by the selection box to be selected" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bStrictBoxSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection = { "bStrictBoxSelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_MetaData[] = {
		{ "Comment", "/** True if viewport box selection also selects occluded objects, false if only objects with visible pixels are selected */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "True if viewport box selection also selects occluded objects, false if only objects with visible pixels are selected" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bTransparentBoxSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection = { "bTransparentBoxSelection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Whether to show selection outlines for selected Actors */" },
		{ "DisplayName", "Use Selection Outline" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Whether to show selection outlines for selected Actors" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bUseSelectionOutline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline = { "bUseSelectionOutline", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the intensity of the overlay displayed when an object is selected */" },
		{ "DisplayName", "Selection Highlight Intensity" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Sets the intensity of the overlay displayed when an object is selected" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity = { "SelectionHighlightIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SelectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the intensity of the overlay displayed when an object is selected */" },
		{ "DisplayName", "BSP Surface Highlight Intensity" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Sets the intensity of the overlay displayed when an object is selected" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity = { "BSPSelectionHighlightIntensity", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, BSPSelectionHighlightIntensity), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Enables the editor perspective camera to be dropped at the last PlayInViewport cam position */" },
		{ "DisplayName", "Use Camera Location from Play-In-Viewport" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Enables the editor perspective camera to be dropped at the last PlayInViewport cam position" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bEnableViewportCameraToUpdateFromPIV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV = { "bEnableViewportCameraToUpdateFromPIV", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** When enabled, selecting a camera actor will display a live 'picture in picture' preview from the camera's perspective within the current editor view port.  This can be used to easily tweak camera positioning, post-processing and other settings without having to possess the camera itself.  This feature may reduce application performance when enabled. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When enabled, selecting a camera actor will display a live 'picture in picture' preview from the camera's perspective within the current editor view port.  This can be used to easily tweak camera positioning, post-processing and other settings without having to possess the camera itself.  This feature may reduce application performance when enabled." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bPreviewSelectedCameras = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras = { "bPreviewSelectedCameras", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Affects the size of 'picture in picture' previews if they are enabled */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Affects the size of 'picture in picture' previews if they are enabled" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize = { "CameraPreviewSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, CameraPreviewSize), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Distance from the camera to place actors which are dropped on nothing in the view port. */" },
		{ "DisplayName", "Background Drop Distance" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Distance from the camera to place actors which are dropped on nothing in the view port." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance = { "BackgroundDropDistance", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, BackgroundDropDistance), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_Inner = { "PreviewMeshes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "Preview" },
		{ "Comment", "/** A list of meshes that can be used as preview mesh in the editor view port by holding down the backslash key */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "A list of meshes that can be used as preview mesh in the editor view port by holding down the backslash key" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes = { "PreviewMeshes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, PreviewMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "UIMax", "5" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale = { "BillboardScale", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, BillboardScale), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMax", "150" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** The size adjustment to apply to the translate/rotate/scale widgets (in Unreal units). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The size adjustment to apply to the translate/rotate/scale widgets (in Unreal units)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment = { "TransformWidgetSizeAdjustment", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, TransformWidgetSizeAdjustment), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** When enabled, engine stats that are enabled in level viewports are preserved between editor sessions */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When enabled, engine stats that are enabled in level viewports are preserved between editor sessions" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_SetBit(void* Obj)
	{
		((ULevelEditorViewportSettings*)Obj)->bSaveEngineStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats = { "bSaveEngineStats", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorViewportSettings), &Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "Comment", "/** Specify the units used by the measuring tool */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Specify the units used by the measuring tool" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits = { "MeasuringToolUnits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, MeasuringToolUnits), Z_Construct_UEnum_UnrealEd_EMeasuringToolUnits, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits_MetaData)) }; // 32236179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectedSplinePointSizeAdjustment_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMax", "20.00" },
		{ "ClampMin", "-5.00" },
		{ "Comment", "/** The size adjustment to apply to selected spline points (in screen space units). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The size adjustment to apply to selected spline points (in screen space units)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectedSplinePointSizeAdjustment = { "SelectedSplinePointSizeAdjustment", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SelectedSplinePointSizeAdjustment), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectedSplinePointSizeAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectedSplinePointSizeAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineLineThicknessAdjustment_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0.00" },
		{ "Comment", "/** The size adjustment to apply to spline line thickness which increases the spline's hit tolerance. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The size adjustment to apply to spline line thickness which increases the spline's hit tolerance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineLineThicknessAdjustment = { "SplineLineThicknessAdjustment", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SplineLineThicknessAdjustment), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineLineThicknessAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineLineThicknessAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentHandleSizeAdjustment_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMax", "20.00" },
		{ "ClampMin", "-5.00" },
		{ "Comment", "/** The size adjustment to apply to spline tangent handle (in screen space units). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The size adjustment to apply to spline tangent handle (in screen space units)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentHandleSizeAdjustment = { "SplineTangentHandleSizeAdjustment", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SplineTangentHandleSizeAdjustment), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentHandleSizeAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentHandleSizeAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentScale_MetaData[] = {
		{ "Category", "LookAndFeel" },
		{ "ClampMin", "0.00" },
		{ "Comment", "/** The scale to apply to spline tangent lengths */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "The scale to apply to spline tangent lengths" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentScale = { "SplineTangentScale", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, SplineTangentScale), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LastInViewportMenuLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LastInViewportMenuLocation = { "LastInViewportMenuLocation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, LastInViewportMenuLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LastInViewportMenuLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LastInViewportMenuLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialForDroppedTextures_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** When dropping a texture in the viewport, create an instance of this material instead of creating a new material. Populate MaterialParamsForDroppedTextures to specify the parameter names. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When dropping a texture in the viewport, create an instance of this material instead of creating a new material. Populate MaterialParamsForDroppedTextures to specify the parameter names." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialForDroppedTextures = { "MaterialForDroppedTextures", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, MaterialForDroppedTextures), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialForDroppedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialForDroppedTextures_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_ValueProp = { "MaterialParamsForDroppedTextures", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_Key_KeyProp = { "MaterialParamsForDroppedTextures_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_UnrealEd_EMaterialKind, METADATA_PARAMS(nullptr, 0) }; // 1861337432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** When dropping a texture in the viewport, determines which material parameter to assign for each found texture type. Only relevant if MaterialForDroppedTextures is assigned. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "When dropping a texture in the viewport, determines which material parameter to assign for each found texture type. Only relevant if MaterialForDroppedTextures is assigned." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures = { "MaterialParamsForDroppedTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, MaterialParamsForDroppedTextures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_MetaData)) }; // 1861337432
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_Inner = { "PerInstanceSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair, METADATA_PARAMS(nullptr, 0) }; // 463668364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_MetaData[] = {
		{ "Comment", "// Per-instance viewport settings.\n" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorViewportSettings.h" },
		{ "ToolTip", "Per-instance viewport settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings = { "PerInstanceSettings", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorViewportSettings, PerInstanceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_MetaData)) }; // 463668364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorViewportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FlightCameraControlExperimentalNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LandscapeEditorControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_FoliageEditorControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPanMovesCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bCenterZoomAroundCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MinimumOrthographicZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowTranslateRotateZWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowArcballRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bAllowScreenRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bClickBSPSelectsBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bShowActorEditorContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraSpeedScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseScrollCameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MouseSensitivty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMouseLookYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertOrbitYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertMiddleMousePan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bInvertRightMouseDollyYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseAbsoluteTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelStreamingVolumePrevis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseUE3OrbitControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionFor3DViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScrollGestureDirectionForOrthoViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bLevelEditorJoystickControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseDistanceScaledCameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bOrbitCameraAroundSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePowerOf2SnapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DecimalGridIntervals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_Pow2GridIntervals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CommonRotGridSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_DivisionsOf360RotGridSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ScalingGridSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_GridEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_RotGridEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapScaleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapToSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUsePercentageBasedScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableLayerSnap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActiveSnapLayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableActorSnap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_ActorSnapDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSnapVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SnapDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentPosGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentScalingGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreserveNonUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CurrentRotGridMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_AspectRatioAxisConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportHoverFeedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bHighlightWithBrackets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseLinkedOrthographicViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bStrictBoxSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bTransparentBoxSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bUseSelectionOutline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectionHighlightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BSPSelectionHighlightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bEnableViewportCameraToUpdateFromPIV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bPreviewSelectedCameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_CameraPreviewSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BackgroundDropDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PreviewMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_BillboardScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_TransformWidgetSizeAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_bSaveEngineStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MeasuringToolUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SelectedSplinePointSizeAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineLineThicknessAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentHandleSizeAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_SplineTangentScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_LastInViewportMenuLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialForDroppedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_MaterialParamsForDroppedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorViewportSettings_Statics::NewProp_PerInstanceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorViewportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorViewportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorViewportSettings_Statics::ClassParams = {
		&ULevelEditorViewportSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditorViewportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorViewportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorViewportSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorViewportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorViewportSettings.OuterSingleton, Z_Construct_UClass_ULevelEditorViewportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorViewportSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULevelEditorViewportSettings>()
	{
		return ULevelEditorViewportSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorViewportSettings);
	ULevelEditorViewportSettings::~ULevelEditorViewportSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::EnumInfo[] = {
		{ ERotationGridMode_StaticEnum, TEXT("ERotationGridMode"), &Z_Registration_Info_UEnum_ERotationGridMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4188224864U) },
		{ EWASDType_StaticEnum, TEXT("EWASDType"), &Z_Registration_Info_UEnum_EWASDType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2935081929U) },
		{ ELandscapeFoliageEditorControlType_StaticEnum, TEXT("ELandscapeFoliageEditorControlType"), &Z_Registration_Info_UEnum_ELandscapeFoliageEditorControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 340642774U) },
		{ EMeasuringToolUnits_StaticEnum, TEXT("EMeasuringToolUnits"), &Z_Registration_Info_UEnum_EMeasuringToolUnits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 32236179U) },
		{ EScrollGestureDirection_StaticEnum, TEXT("EScrollGestureDirection"), &Z_Registration_Info_UEnum_EScrollGestureDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3054824673U) },
		{ EMaterialKind_StaticEnum, TEXT("EMaterialKind"), &Z_Registration_Info_UEnum_EMaterialKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1861337432U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::ScriptStructInfo[] = {
		{ FLevelEditorViewportInstanceSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics::NewStructOps, TEXT("LevelEditorViewportInstanceSettings"), &Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelEditorViewportInstanceSettings), 4253844153U) },
		{ FLevelEditorViewportInstanceSettingsKeyValuePair::StaticStruct, Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics::NewStructOps, TEXT("LevelEditorViewportInstanceSettingsKeyValuePair"), &Z_Registration_Info_UScriptStruct_LevelEditorViewportInstanceSettingsKeyValuePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelEditorViewportInstanceSettingsKeyValuePair), 463668364U) },
		{ FSnapToSurfaceSettings::StaticStruct, Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics::NewStructOps, TEXT("SnapToSurfaceSettings"), &Z_Registration_Info_UScriptStruct_SnapToSurfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapToSurfaceSettings), 2223793561U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelEditorViewportSettings, ULevelEditorViewportSettings::StaticClass, TEXT("ULevelEditorViewportSettings"), &Z_Registration_Info_UClass_ULevelEditorViewportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorViewportSettings), 919594043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_1417378290(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
