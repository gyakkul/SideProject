// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeEditorObject.h"
#include "LandscapeImportHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditorObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ULandscapeEditorObject();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ULandscapeEditorObject_NoRegister();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoImportLayer();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportDescriptor();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayer();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeToolFlattenMode;
	static UEnum* ELandscapeToolFlattenMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolFlattenMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeToolFlattenMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolFlattenMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeToolFlattenMode.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolFlattenMode>()
	{
		return ELandscapeToolFlattenMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::Enumerators[] = {
		{ "ELandscapeToolFlattenMode::Invalid", (int64)ELandscapeToolFlattenMode::Invalid },
		{ "ELandscapeToolFlattenMode::Both", (int64)ELandscapeToolFlattenMode::Both },
		{ "ELandscapeToolFlattenMode::Raise", (int64)ELandscapeToolFlattenMode::Raise },
		{ "ELandscapeToolFlattenMode::Lower", (int64)ELandscapeToolFlattenMode::Lower },
		{ "ELandscapeToolFlattenMode::Interval", (int64)ELandscapeToolFlattenMode::Interval },
		{ "ELandscapeToolFlattenMode::Terrace", (int64)ELandscapeToolFlattenMode::Terrace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/** Flatten may both raise and lower values */" },
		{ "Both.Name", "ELandscapeToolFlattenMode::Both" },
		{ "Both.ToolTip", "Flatten may both raise and lower values" },
		{ "Interval.Comment", "/** Flatten to closest specific terrace interval at the clicked point */" },
		{ "Interval.Name", "ELandscapeToolFlattenMode::Interval" },
		{ "Interval.ToolTip", "Flatten to closest specific terrace interval at the clicked point" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeToolFlattenMode::Invalid" },
		{ "Lower.Comment", "/** Flatten may only lower values, values below the clicked point will be left unchanged */" },
		{ "Lower.Name", "ELandscapeToolFlattenMode::Lower" },
		{ "Lower.ToolTip", "Flatten may only lower values, values below the clicked point will be left unchanged" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Raise.Comment", "/** Flatten may only raise values, values above the clicked point will be left unchanged */" },
		{ "Raise.Name", "ELandscapeToolFlattenMode::Raise" },
		{ "Raise.ToolTip", "Flatten may only raise values, values above the clicked point will be left unchanged" },
		{ "Terrace.Comment", "/** Flatten to specific terrace height intervals */" },
		{ "Terrace.Name", "ELandscapeToolFlattenMode::Terrace" },
		{ "Terrace.ToolTip", "Flatten to specific terrace height intervals" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeToolFlattenMode",
		"ELandscapeToolFlattenMode",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolFlattenMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeToolFlattenMode.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeToolFlattenMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeToolErosionMode;
	static UEnum* ELandscapeToolErosionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolErosionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeToolErosionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolErosionMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeToolErosionMode.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolErosionMode>()
	{
		return ELandscapeToolErosionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::Enumerators[] = {
		{ "ELandscapeToolErosionMode::Invalid", (int64)ELandscapeToolErosionMode::Invalid },
		{ "ELandscapeToolErosionMode::Both", (int64)ELandscapeToolErosionMode::Both },
		{ "ELandscapeToolErosionMode::Raise", (int64)ELandscapeToolErosionMode::Raise },
		{ "ELandscapeToolErosionMode::Lower", (int64)ELandscapeToolErosionMode::Lower },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/** Apply all erosion effects, both raising and lowering the heightmap */" },
		{ "Both.Name", "ELandscapeToolErosionMode::Both" },
		{ "Both.ToolTip", "Apply all erosion effects, both raising and lowering the heightmap" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeToolErosionMode::Invalid" },
		{ "Lower.Comment", "/** Only applies erosion effects that result in lowering the heightmap */" },
		{ "Lower.Name", "ELandscapeToolErosionMode::Lower" },
		{ "Lower.ToolTip", "Only applies erosion effects that result in lowering the heightmap" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Raise.Comment", "/** Only applies erosion effects that result in raising the heightmap */" },
		{ "Raise.Name", "ELandscapeToolErosionMode::Raise" },
		{ "Raise.ToolTip", "Only applies erosion effects that result in raising the heightmap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeToolErosionMode",
		"ELandscapeToolErosionMode",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolErosionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeToolErosionMode.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeToolErosionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode;
	static UEnum* ELandscapeToolHydroErosionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolHydroErosionMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolHydroErosionMode>()
	{
		return ELandscapeToolHydroErosionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::Enumerators[] = {
		{ "ELandscapeToolHydroErosionMode::Invalid", (int64)ELandscapeToolHydroErosionMode::Invalid },
		{ "ELandscapeToolHydroErosionMode::Both", (int64)ELandscapeToolHydroErosionMode::Both },
		{ "ELandscapeToolHydroErosionMode::Positive", (int64)ELandscapeToolHydroErosionMode::Positive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/** Rains in some places and not others, randomly */" },
		{ "Both.Name", "ELandscapeToolHydroErosionMode::Both" },
		{ "Both.ToolTip", "Rains in some places and not others, randomly" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeToolHydroErosionMode::Invalid" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Positive.Comment", "/** Rain is applied to the entire area */" },
		{ "Positive.Name", "ELandscapeToolHydroErosionMode::Positive" },
		{ "Positive.ToolTip", "Rain is applied to the entire area" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeToolHydroErosionMode",
		"ELandscapeToolHydroErosionMode",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeToolNoiseMode;
	static UEnum* ELandscapeToolNoiseMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolNoiseMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeToolNoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolNoiseMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeToolNoiseMode.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolNoiseMode>()
	{
		return ELandscapeToolNoiseMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::Enumerators[] = {
		{ "ELandscapeToolNoiseMode::Invalid", (int64)ELandscapeToolNoiseMode::Invalid },
		{ "ELandscapeToolNoiseMode::Both", (int64)ELandscapeToolNoiseMode::Both },
		{ "ELandscapeToolNoiseMode::Add", (int64)ELandscapeToolNoiseMode::Add },
		{ "ELandscapeToolNoiseMode::Sub", (int64)ELandscapeToolNoiseMode::Sub },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Comment", "/** Noise will only raise the heightmap */" },
		{ "Add.Name", "ELandscapeToolNoiseMode::Add" },
		{ "Add.ToolTip", "Noise will only raise the heightmap" },
		{ "Both.Comment", "/** Noise will both raise and lower the heightmap */" },
		{ "Both.Name", "ELandscapeToolNoiseMode::Both" },
		{ "Both.ToolTip", "Noise will both raise and lower the heightmap" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeToolNoiseMode::Invalid" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Sub.Comment", "/** Noise will only lower the heightmap */" },
		{ "Sub.Name", "ELandscapeToolNoiseMode::Sub" },
		{ "Sub.ToolTip", "Noise will only lower the heightmap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeToolNoiseMode",
		"ELandscapeToolNoiseMode",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolNoiseMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeToolNoiseMode.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeToolNoiseMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeToolPasteMode;
	static UEnum* ELandscapeToolPasteMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolPasteMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeToolPasteMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolPasteMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeToolPasteMode.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolPasteMode>()
	{
		return ELandscapeToolPasteMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::Enumerators[] = {
		{ "ELandscapeToolPasteMode::Invalid", (int64)ELandscapeToolPasteMode::Invalid },
		{ "ELandscapeToolPasteMode::Both", (int64)ELandscapeToolPasteMode::Both },
		{ "ELandscapeToolPasteMode::Raise", (int64)ELandscapeToolPasteMode::Raise },
		{ "ELandscapeToolPasteMode::Lower", (int64)ELandscapeToolPasteMode::Lower },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/** Paste may both raise and lower values */" },
		{ "Both.Name", "ELandscapeToolPasteMode::Both" },
		{ "Both.ToolTip", "Paste may both raise and lower values" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeToolPasteMode::Invalid" },
		{ "Lower.Comment", "/** Paste may only lower values, places where the pasted data would be above the heightmap are left unchanged. Good for copy/pasting valleys or pits */" },
		{ "Lower.Name", "ELandscapeToolPasteMode::Lower" },
		{ "Lower.ToolTip", "Paste may only lower values, places where the pasted data would be above the heightmap are left unchanged. Good for copy/pasting valleys or pits" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Raise.Comment", "/** Paste may only raise values, places where the pasted data would be below the heightmap are left unchanged. Good for copy/pasting mountains */" },
		{ "Raise.Name", "ELandscapeToolPasteMode::Raise" },
		{ "Raise.ToolTip", "Paste may only raise values, places where the pasted data would be below the heightmap are left unchanged. Good for copy/pasting mountains" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeToolPasteMode",
		"ELandscapeToolPasteMode",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeToolPasteMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeToolPasteMode.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeToolPasteMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeConvertMode;
	static UEnum* ELandscapeConvertMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeConvertMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeConvertMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeConvertMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeConvertMode.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeConvertMode>()
	{
		return ELandscapeConvertMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::Enumerators[] = {
		{ "ELandscapeConvertMode::Invalid", (int64)ELandscapeConvertMode::Invalid },
		{ "ELandscapeConvertMode::Expand", (int64)ELandscapeConvertMode::Expand },
		{ "ELandscapeConvertMode::Clip", (int64)ELandscapeConvertMode::Clip },
		{ "ELandscapeConvertMode::Resample", (int64)ELandscapeConvertMode::Resample },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::Enum_MetaDataParams[] = {
		{ "Clip.Comment", "/** Will floor the number of components for the new world size, which might reduce the world size compared to previous settings*/" },
		{ "Clip.Name", "ELandscapeConvertMode::Clip" },
		{ "Clip.ToolTip", "Will floor the number of components for the new world size, which might reduce the world size compared to previous settings" },
		{ "Expand.Comment", "/** Will round up the number of components for the new world size, which might expand the world size compared to previous settings*/" },
		{ "Expand.Name", "ELandscapeConvertMode::Expand" },
		{ "Expand.ToolTip", "Will round up the number of components for the new world size, which might expand the world size compared to previous settings" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeConvertMode::Invalid" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Resample.Comment", "/** The landscape will have the same overall size in the world, and have the same number of components. Existing landscape geometry and layer data will be resampled to match the new resolution. */" },
		{ "Resample.Name", "ELandscapeConvertMode::Resample" },
		{ "Resample.ToolTip", "The landscape will have the same overall size in the world, and have the same number of components. Existing landscape geometry and layer data will be resampled to match the new resolution." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeConvertMode",
		"ELandscapeConvertMode",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeConvertMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeConvertMode.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeConvertMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeTextureColorChannel;
	static UEnum* ELandscapeTextureColorChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTextureColorChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeTextureColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeTextureColorChannel"));
		}
		return Z_Registration_Info_UEnum_ELandscapeTextureColorChannel.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeTextureColorChannel>()
	{
		return ELandscapeTextureColorChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::Enumerators[] = {
		{ "ELandscapeTextureColorChannel::Red", (int64)ELandscapeTextureColorChannel::Red },
		{ "ELandscapeTextureColorChannel::Green", (int64)ELandscapeTextureColorChannel::Green },
		{ "ELandscapeTextureColorChannel::Blue", (int64)ELandscapeTextureColorChannel::Blue },
		{ "ELandscapeTextureColorChannel::Alpha", (int64)ELandscapeTextureColorChannel::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "ELandscapeTextureColorChannel::Alpha" },
		{ "Blue.Name", "ELandscapeTextureColorChannel::Blue" },
		{ "Green.Name", "ELandscapeTextureColorChannel::Green" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "Red.Name", "ELandscapeTextureColorChannel::Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeTextureColorChannel",
		"ELandscapeTextureColorChannel",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTextureColorChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeTextureColorChannel.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeTextureColorChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeMirrorOperation;
	static UEnum* ELandscapeMirrorOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeMirrorOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeMirrorOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeMirrorOperation"));
		}
		return Z_Registration_Info_UEnum_ELandscapeMirrorOperation.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeMirrorOperation>()
	{
		return ELandscapeMirrorOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::Enumerators[] = {
		{ "ELandscapeMirrorOperation::MinusXToPlusX", (int64)ELandscapeMirrorOperation::MinusXToPlusX },
		{ "ELandscapeMirrorOperation::PlusXToMinusX", (int64)ELandscapeMirrorOperation::PlusXToMinusX },
		{ "ELandscapeMirrorOperation::MinusYToPlusY", (int64)ELandscapeMirrorOperation::MinusYToPlusY },
		{ "ELandscapeMirrorOperation::PlusYToMinusY", (int64)ELandscapeMirrorOperation::PlusYToMinusY },
		{ "ELandscapeMirrorOperation::RotateMinusXToPlusX", (int64)ELandscapeMirrorOperation::RotateMinusXToPlusX },
		{ "ELandscapeMirrorOperation::RotatePlusXToMinusX", (int64)ELandscapeMirrorOperation::RotatePlusXToMinusX },
		{ "ELandscapeMirrorOperation::RotateMinusYToPlusY", (int64)ELandscapeMirrorOperation::RotateMinusYToPlusY },
		{ "ELandscapeMirrorOperation::RotatePlusYToMinusY", (int64)ELandscapeMirrorOperation::RotatePlusYToMinusY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::Enum_MetaDataParams[] = {
		{ "MinusXToPlusX.DisplayName", "-X to +X" },
		{ "MinusXToPlusX.Name", "ELandscapeMirrorOperation::MinusXToPlusX" },
		{ "MinusYToPlusY.DisplayName", "-Y to +Y" },
		{ "MinusYToPlusY.Name", "ELandscapeMirrorOperation::MinusYToPlusY" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "PlusXToMinusX.DisplayName", "+X to -X" },
		{ "PlusXToMinusX.Name", "ELandscapeMirrorOperation::PlusXToMinusX" },
		{ "PlusYToMinusY.DisplayName", "+Y to -Y" },
		{ "PlusYToMinusY.Name", "ELandscapeMirrorOperation::PlusYToMinusY" },
		{ "RotateMinusXToPlusX.DisplayName", "Rotate -X to +X" },
		{ "RotateMinusXToPlusX.Name", "ELandscapeMirrorOperation::RotateMinusXToPlusX" },
		{ "RotateMinusYToPlusY.DisplayName", "Rotate -Y to +Y" },
		{ "RotateMinusYToPlusY.Name", "ELandscapeMirrorOperation::RotateMinusYToPlusY" },
		{ "RotatePlusXToMinusX.DisplayName", "Rotate +X to -X" },
		{ "RotatePlusXToMinusX.Name", "ELandscapeMirrorOperation::RotatePlusXToMinusX" },
		{ "RotatePlusYToMinusY.DisplayName", "Rotate +Y to -Y" },
		{ "RotatePlusYToMinusY.Name", "ELandscapeMirrorOperation::RotatePlusYToMinusY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeMirrorOperation",
		"ELandscapeMirrorOperation",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeMirrorOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeMirrorOperation.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeMirrorOperation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoImportLayer;
class UScriptStruct* FGizmoImportLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoImportLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoImportLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoImportLayer, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("GizmoImportLayer"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoImportLayer.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FGizmoImportLayer>()
{
	return FGizmoImportLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGizmoImportLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayerFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoImport_MetaData[];
#endif
		static void NewProp_bNoImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoImport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoImportLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename = { "LayerFilename", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoImportLayer, LayerFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoImportLayer, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_SetBit(void* Obj)
	{
		((FGizmoImportLayer*)Obj)->bNoImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport = { "bNoImport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGizmoImportLayer), &Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"GizmoImportLayer",
		sizeof(FGizmoImportLayer),
		alignof(FGizmoImportLayer),
		Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoImportLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_GizmoImportLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoImportLayer.InnerSingleton, Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GizmoImportLayer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeImportHeightmapError;
	static UEnum* ELandscapeImportHeightmapError_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportHeightmapError.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeImportHeightmapError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportHeightmapError"));
		}
		return Z_Registration_Info_UEnum_ELandscapeImportHeightmapError.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportHeightmapError>()
	{
		return ELandscapeImportHeightmapError_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::Enumerators[] = {
		{ "ELandscapeImportHeightmapError::None", (int64)ELandscapeImportHeightmapError::None },
		{ "ELandscapeImportHeightmapError::FileNotFound", (int64)ELandscapeImportHeightmapError::FileNotFound },
		{ "ELandscapeImportHeightmapError::InvalidSize", (int64)ELandscapeImportHeightmapError::InvalidSize },
		{ "ELandscapeImportHeightmapError::CorruptFile", (int64)ELandscapeImportHeightmapError::CorruptFile },
		{ "ELandscapeImportHeightmapError::ColorPng", (int64)ELandscapeImportHeightmapError::ColorPng },
		{ "ELandscapeImportHeightmapError::LowBitDepth", (int64)ELandscapeImportHeightmapError::LowBitDepth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::Enum_MetaDataParams[] = {
		{ "ColorPng.Name", "ELandscapeImportHeightmapError::ColorPng" },
		{ "CorruptFile.Name", "ELandscapeImportHeightmapError::CorruptFile" },
		{ "FileNotFound.Name", "ELandscapeImportHeightmapError::FileNotFound" },
		{ "InvalidSize.Name", "ELandscapeImportHeightmapError::InvalidSize" },
		{ "LowBitDepth.Name", "ELandscapeImportHeightmapError::LowBitDepth" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "None.Name", "ELandscapeImportHeightmapError::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeImportHeightmapError",
		"ELandscapeImportHeightmapError",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportHeightmapError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeImportHeightmapError.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeImportHeightmapError.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeImportLayerError;
	static UEnum* ELandscapeImportLayerError_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportLayerError.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeImportLayerError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportLayerError"));
		}
		return Z_Registration_Info_UEnum_ELandscapeImportLayerError.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportLayerError>()
	{
		return ELandscapeImportLayerError_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::Enumerators[] = {
		{ "ELandscapeImportLayerError::None", (int64)ELandscapeImportLayerError::None },
		{ "ELandscapeImportLayerError::MissingLayerInfo", (int64)ELandscapeImportLayerError::MissingLayerInfo },
		{ "ELandscapeImportLayerError::FileNotFound", (int64)ELandscapeImportLayerError::FileNotFound },
		{ "ELandscapeImportLayerError::FileSizeMismatch", (int64)ELandscapeImportLayerError::FileSizeMismatch },
		{ "ELandscapeImportLayerError::CorruptFile", (int64)ELandscapeImportLayerError::CorruptFile },
		{ "ELandscapeImportLayerError::ColorPng", (int64)ELandscapeImportLayerError::ColorPng },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::Enum_MetaDataParams[] = {
		{ "ColorPng.Name", "ELandscapeImportLayerError::ColorPng" },
		{ "CorruptFile.Name", "ELandscapeImportLayerError::CorruptFile" },
		{ "FileNotFound.Name", "ELandscapeImportLayerError::FileNotFound" },
		{ "FileSizeMismatch.Name", "ELandscapeImportLayerError::FileSizeMismatch" },
		{ "MissingLayerInfo.Name", "ELandscapeImportLayerError::MissingLayerInfo" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "None.Name", "ELandscapeImportLayerError::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeImportLayerError",
		"ELandscapeImportLayerError",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportLayerError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeImportLayerError.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeImportLayerError.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLandscapeImportLayer>() == std::is_polymorphic<FLandscapeImportLayerInfo>(), "USTRUCT FLandscapeImportLayer cannot be polymorphic unless super FLandscapeImportLayerInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeImportLayer;
class UScriptStruct* FLandscapeImportLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeImportLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeImportLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportLayer, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapeImportLayer"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeImportLayer.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapeImportLayer>()
{
	return FLandscapeImportLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailMIC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC = { "ThumbnailMIC", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportLayer, ThumbnailMIC), Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult = { "ImportResult", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportLayer, ImportResult), Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_MetaData)) }; // 2081317131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportLayer, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ExportFilePath_MetaData[] = {
		{ "Category", "Export" },
		{ "DisplayName", "Layer File" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ExportFilePath = { "ExportFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportLayer, ExportFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ExportFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ExportFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((FLandscapeImportLayer*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLandscapeImportLayer), &Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ExportFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_bSelected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		Z_Construct_UScriptStruct_FLandscapeImportLayerInfo,
		&NewStructOps,
		"LandscapeImportLayer",
		sizeof(FLandscapeImportLayer),
		alignof(FLandscapeImportLayer),
		Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeImportLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeImportLayer.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeImportLayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings;
class UScriptStruct* FLandscapePatternBrushWorldSpaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapePatternBrushWorldSpaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapePatternBrushWorldSpaceSettings>()
{
	return FLandscapePatternBrushWorldSpaceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterTextureOnOrigin_MetaData[];
#endif
		static void NewProp_bCenterTextureOnOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterTextureOnOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepeatSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapePatternBrushWorldSpaceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapePatternBrushWorldSpaceSettings, Origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapePatternBrushWorldSpaceSettings, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_MetaData[] = {
		{ "Category", "World-Space" },
		{ "Comment", "// if true, the texture used for the pattern is centered on the PatternOrigin.\n// if false, the corner of the texture is placed at the PatternOrigin\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "if true, the texture used for the pattern is centered on the PatternOrigin.\nif false, the corner of the texture is placed at the PatternOrigin" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_SetBit(void* Obj)
	{
		((FLandscapePatternBrushWorldSpaceSettings*)Obj)->bCenterTextureOnOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin = { "bCenterTextureOnOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLandscapePatternBrushWorldSpaceSettings), &Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize = { "RepeatSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapePatternBrushWorldSpaceSettings, RepeatSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"LandscapePatternBrushWorldSpaceSettings",
		sizeof(FLandscapePatternBrushWorldSpaceSettings),
		alignof(FLandscapePatternBrushWorldSpaceSettings),
		Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings.InnerSingleton;
	}
	void ULandscapeEditorObject::StaticRegisterNativesULandscapeEditorObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditorObject);
	UClass* Z_Construct_UClass_ULandscapeEditorObject_NoRegister()
	{
		return ULandscapeEditorObject::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeEditorObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToolStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintToolStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintToolStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeightTargetValue_MetaData[];
#endif
		static void NewProp_bUseWeightTargetValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeightTargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightTargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightTargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValueRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumValueRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCombinedLayersOperation_MetaData[];
#endif
		static void NewProp_bCombinedLayersOperation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombinedLayersOperation;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_FlattenMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlattenMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FlattenMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSlopeFlatten_MetaData[];
#endif
		static void NewProp_bUseSlopeFlatten_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSlopeFlatten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPickValuePerApply_MetaData[];
#endif
		static void NewProp_bPickValuePerApply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPickValuePerApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFlattenTarget_MetaData[];
#endif
		static void NewProp_bUseFlattenTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFlattenTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlattenTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlattenTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFlattenTargetPreview_MetaData[];
#endif
		static void NewProp_bShowFlattenTargetPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFlattenTargetPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerraceInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerraceInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerraceSmooth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerraceSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenEyeDropperModeActivated_MetaData[];
#endif
		static void NewProp_bFlattenEyeDropperModeActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenEyeDropperModeActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlattenEyeDropperModeDesiredTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlattenEyeDropperModeDesiredTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RampWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampSideFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RampSideFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothFilterKernelSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothFilterKernelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetailSmooth_MetaData[];
#endif
		static void NewProp_bDetailSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetailSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetailScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErodeThresh_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErodeThresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErodeSurfaceThickness_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErodeSurfaceThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErodeIterationNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErodeIterationNum;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ErosionNoiseMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErosionNoiseMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ErosionNoiseMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErosionNoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErosionNoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RainAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SedimentCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HErodeIterationNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HErodeIterationNum;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_RainDistMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDistMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RainDistMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainDistScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainDistScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHErosionDetailSmooth_MetaData[];
#endif
		static void NewProp_bHErosionDetailSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHErosionDetailSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HErosionDetailScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HErosionDetailScale;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_NoiseMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NoiseMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelectedRegion_MetaData[];
#endif
		static void NewProp_bUseSelectedRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelectedRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNegativeMask_MetaData[];
#endif
		static void NewProp_bUseNegativeMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNegativeMask;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PasteMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasteMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PasteMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToAllTargets_MetaData[];
#endif
		static void NewProp_bApplyToAllTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllTargets;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SnapMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothGizmoBrush_MetaData[];
#endif
		static void NewProp_bSmoothGizmoBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothGizmoBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoHeightmapFilenameString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GizmoHeightmapFilenameString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoImportSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoImportSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoImportLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoImportLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GizmoImportLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorOp_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOp_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorSmoothingWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorSmoothingWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintBrush_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_QuadsPerSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResizeLandscape_QuadsPerSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_SectionsPerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResizeLandscape_SectionsPerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_ComponentCount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeLandscape_ComponentCount;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ResizeLandscape_ConvertMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_ConvertMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResizeLandscape_ConvertMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Material_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NewLandscape_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_QuadsPerSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewLandscape_QuadsPerSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_SectionsPerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewLandscape_SectionsPerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_ComponentCount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLandscape_ComponentCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLandscape_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLandscape_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLandscape_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportLandscape_HeightmapImportResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_HeightmapImportResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportLandscape_HeightmapImportResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_HeightmapErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ImportLandscape_HeightmapErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_HeightmapFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportLandscape_HeightmapFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ImportLandscape_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ImportLandscape_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapExportFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeightmapExportFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_GizmoLocalPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportLandscape_GizmoLocalPosition;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ImportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeightmapSelected_MetaData[];
#endif
		static void NewProp_bHeightmapSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightmapSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportEditLayer_MetaData[];
#endif
		static void NewProp_bExportEditLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportEditLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSingleFile_MetaData[];
#endif
		static void NewProp_bExportSingleFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSingleFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapImportDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapImportDescriptor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapImportDescriptorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightmapImportDescriptorIndex;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ImportLandscape_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportLandscape_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHaveLayersContent_MetaData[];
#endif
		static void NewProp_bCanHaveLayersContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHaveLayersContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipYAxis_MetaData[];
#endif
		static void NewProp_bFlipYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_WorldPartitionGridSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportLandscape_AlphamapType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_AlphamapType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportLandscape_AlphamapType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportLandscape_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportLandscape_Layers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBrushRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintBrushRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBrushFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintBrushFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseClayBrush_MetaData[];
#endif
		static void NewProp_bUseClayBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClayBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBrushAutoRotate_MetaData[];
#endif
		static void NewProp_bAlphaBrushAutoRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBrushAutoRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushPanU_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushPanU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushPanV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushPanV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpacePatternBrush_MetaData[];
#endif
		static void NewProp_bUseWorldSpacePatternBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpacePatternBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpacePatternBrushSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpacePatternBrushSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlphaTexture;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AlphaTextureChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaTextureChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AlphaTextureSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AlphaTextureSizeY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaTextureData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlphaTextureData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushComponentSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BrushComponentSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PaintingRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintingRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PaintingRestriction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetDisplayOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetDisplayOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowUnusedLayers_MetaData[];
#endif
		static void NewProp_ShowUnusedLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowUnusedLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeEditorObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeEditorObject.h" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// Strength of the Sculpt tool. If you're using a pen/tablet with pressure-sensing, the pressure used affects the strength of the tool.\n" },
		{ "DisplayName", "Tool Strength" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap,Visibility" },
		{ "ShowForTools", "Paint,Sculpt,Erase,Smooth,Flatten,Erosion,HydraErosion,Noise,Mask,CopyPaste" },
		{ "ToolTip", "Strength of the Sculpt tool. If you're using a pen/tablet with pressure-sensing, the pressure used affects the strength of the tool." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength = { "ToolStrength", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ToolStrength), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintToolStrength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// Strength of the Paint tool. If you're using a pen/tablet with pressure-sensing, the pressure used affects the strength of the tool.\n" },
		{ "DisplayName", "Tool Strength" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Weightmap" },
		{ "ShowForTools", "Paint,Sculpt,Erase,Smooth,Flatten,Erosion,HydraErosion,Noise,Mask,CopyPaste" },
		{ "ToolTip", "Strength of the Paint tool. If you're using a pen/tablet with pressure-sensing, the pressure used affects the strength of the tool." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintToolStrength = { "PaintToolStrength", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, PaintToolStrength), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintToolStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintToolStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Enable to make tools blend towards a target value\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Enable to make tools blend towards a target value" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseWeightTargetValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue = { "bUseWeightTargetValue", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// Enable to make tools blend towards a target value\n" },
		{ "DisplayName", "Use Target Value" },
		{ "EditCondition", "bUseWeightTargetValue" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Weightmap" },
		{ "ShowForTools", "Paint,Sculpt,Noise" },
		{ "ToolTip", "Enable to make tools blend towards a target value" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue = { "WeightTargetValue", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, WeightTargetValue), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius_MetaData[] = {
		{ "Comment", "// I have no idea what this is for but it's used by the noise and erosion tools, and isn't exposed to the UI\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "I have no idea what this is for but it's used by the noise and erosion tools, and isn't exposed to the UI" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius = { "MaximumValueRadius", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, MaximumValueRadius), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForLandscapeLayerSystem", "" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten,Smooth,Erosion,HydraErosion,Ramp" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bCombinedLayersOperation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation = { "bCombinedLayersOperation", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Whether to flatten by lowering, raising, both or terracing\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Whether to flatten by lowering, raising, both or terracing" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode = { "FlattenMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, FlattenMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_MetaData)) }; // 403129909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Flattens to the angle of the clicked point, instead of horizontal\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Flattens to the angle of the clicked point, instead of horizontal" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseSlopeFlatten = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten = { "bUseSlopeFlatten", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Constantly picks new values to flatten towards when dragging around, instead of only using the first clicked point\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Constantly picks new values to flatten towards when dragging around, instead of only using the first clicked point" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bPickValuePerApply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply = { "bPickValuePerApply", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Enable to flatten towards a target height\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Enable to flatten towards a target height" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseFlattenTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget = { "bUseFlattenTarget", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Target height to flatten towards (in Unreal Units)\n" },
		{ "EditCondition", "bUseFlattenTarget" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Target height to flatten towards (in Unreal Units)" },
		{ "UIMax", "32768" },
		{ "UIMin", "-32768" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget = { "FlattenTarget", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, FlattenTarget), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Whether to show the preview grid for the flatten target height\n" },
		{ "DisplayName", "Show Preview Grid" },
		{ "EditCondition", "bUseFlattenTarget" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Whether to show the preview grid for the flatten target height" },
		{ "UIMax", "32768" },
		{ "UIMin", "-32768" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bShowFlattenTargetPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview = { "bShowFlattenTargetPreview", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Height of the terrace intervals in unreal units, for the terrace flatten mode \n" },
		{ "DisplayName", "Terrace Interval" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Height of the terrace intervals in unreal units, for the terrace flatten mode" },
		{ "UIMax", "32768" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval = { "TerraceInterval", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, TerraceInterval), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Smoothing value for terrace flatten mode\n" },
		{ "DisplayName", "Terrace Smoothing" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Smoothing value for terrace flatten mode" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth = { "TerraceSmooth", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, TerraceSmooth), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_MetaData[] = {
		{ "Comment", "// Whether the Eye Dropper mode is activated\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Whether the Eye Dropper mode is activated" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bFlattenEyeDropperModeActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated = { "bFlattenEyeDropperModeActivated", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget = { "FlattenEyeDropperModeDesiredTarget", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, FlattenEyeDropperModeDesiredTarget), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// Width of ramp\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Ramp" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Width of ramp" },
		{ "UIMax", "8192" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth = { "RampWidth", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, RampWidth), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Falloff on side of ramp\n" },
		{ "DisplayName", "Side Falloff" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Ramp" },
		{ "ToolTip", "Falloff on side of ramp" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff = { "RampSideFalloff", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, RampSideFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "31" },
		{ "ClampMin", "1" },
		{ "Comment", "// The radius smoothing is performed over\n// Higher values smooth out bigger details, lower values only smooth out smaller details\n" },
		{ "DisplayName", "Filter Kernel Radius" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Smooth" },
		{ "ToolTip", "The radius smoothing is performed over\nHigher values smooth out bigger details, lower values only smooth out smaller details" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize = { "SmoothFilterKernelSize", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, SmoothFilterKernelSize), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If checked, performs a detail preserving smooth using the specified detail smoothing value\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "If checked, performs a detail preserving smooth using the specified detail smoothing value" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bDetailSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth = { "bDetailSmooth", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0" },
		{ "Comment", "// Larger detail smoothing values remove more details, while smaller values preserve more details\n" },
		{ "DisplayName", "Detail Smooth" },
		{ "EditCondition", "bDetailSmooth" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Smooth" },
		{ "ToolTip", "Larger detail smoothing values remove more details, while smaller values preserve more details" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale = { "DetailScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, DetailScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "256" },
		{ "ClampMin", "0" },
		{ "Comment", "// The minimum height difference necessary for the erosion effects to be applied. Smaller values will result in more erosion being applied\n" },
		{ "DisplayName", "Threshold" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "The minimum height difference necessary for the erosion effects to be applied. Smaller values will result in more erosion being applied" },
		{ "UIMax", "128" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh = { "ErodeThresh", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ErodeThresh), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "128" },
		{ "Comment", "// The thickness of the surface for the layer weight erosion effect\n" },
		{ "DisplayName", "Surface Thickness" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "The thickness of the surface for the layer weight erosion effect" },
		{ "UIMax", "512" },
		{ "UIMin", "128" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness = { "ErodeSurfaceThickness", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ErodeSurfaceThickness), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "300" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of erosion iterations, more means more erosion but is slower\n" },
		{ "DisplayName", "Iterations" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "Number of erosion iterations, more means more erosion but is slower" },
		{ "UIMax", "150" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum = { "ErodeIterationNum", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ErodeIterationNum), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Whether to erode by lowering, raising, or both\n" },
		{ "DisplayName", "Noise Mode" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "Whether to erode by lowering, raising, or both" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode = { "ErosionNoiseMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ErosionNoiseMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_MetaData)) }; // 1070344808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "// The size of the perlin noise filter used\n" },
		{ "DisplayName", "Noise Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "The size of the perlin noise filter used" },
		{ "UIMax", "256" },
		{ "UIMin", "1.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale = { "ErosionNoiseScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ErosionNoiseScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "// The amount of rain to apply to the surface. Larger values will result in more erosion\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "The amount of rain to apply to the surface. Larger values will result in more erosion" },
		{ "UIMax", "256" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount = { "RainAmount", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, RainAmount), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// The amount of sediment that the water can carry. Larger values will result in more erosion\n" },
		{ "DisplayName", "Sediment Cap." },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "The amount of sediment that the water can carry. Larger values will result in more erosion" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity = { "SedimentCapacity", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, SedimentCapacity), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "300" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of erosion iterations, more means more erosion but is slower\n" },
		{ "DisplayName", "Iterations" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "Number of erosion iterations, more means more erosion but is slower" },
		{ "UIMax", "150" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum = { "HErodeIterationNum", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, HErodeIterationNum), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Initial Rain Distribution\n" },
		{ "DisplayName", "Initial Rain Distribution" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "Initial Rain Distribution" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode = { "RainDistMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, RainDistMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_MetaData)) }; // 1191617141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "// The size of the noise filter for applying initial rain to the surface\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "The size of the noise filter for applying initial rain to the surface" },
		{ "UIMax", "256" },
		{ "UIMin", "1.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale = { "RainDistScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, RainDistScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If checked, performs a detail-preserving smooth to the erosion effect using the specified detail smoothing value\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "If checked, performs a detail-preserving smooth to the erosion effect using the specified detail smoothing value" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bHErosionDetailSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth = { "bHErosionDetailSmooth", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0" },
		{ "Comment", "// Larger detail smoothing values remove more details, while smaller values preserve more details\n" },
		{ "DisplayName", "Detail Smooth" },
		{ "EditCondition", "bHErosionDetailSmooth" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "Larger detail smoothing values remove more details, while smaller values preserve more details" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale = { "HErosionDetailScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, HErosionDetailScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Whether to apply noise that raises, lowers, or both\n" },
		{ "DisplayName", "Noise Mode" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Noise" },
		{ "ToolTip", "Whether to apply noise that raises, lowers, or both" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode = { "NoiseMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NoiseMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_MetaData)) }; // 2624420065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "// The size of the perlin noise filter used\n" },
		{ "DisplayName", "Noise Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Noise" },
		{ "ToolTip", "The size of the perlin noise filter used" },
		{ "UIMax", "256" },
		{ "UIMin", "1.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Uses selected region as a mask for other tools\n" },
		{ "DisplayName", "Use Region as Mask" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForMask", "" },
		{ "ShowForTools", "Mask" },
		{ "ToolTip", "Uses selected region as a mask for other tools" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseSelectedRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion = { "bUseSelectedRegion", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If enabled, protects the selected region from changes\n// If disabled, only allows changes in the selected region\n" },
		{ "DisplayName", "Negative Mask" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForMask", "" },
		{ "ShowForTools", "Mask" },
		{ "ToolTip", "If enabled, protects the selected region from changes\nIf disabled, only allows changes in the selected region" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseNegativeMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask = { "bUseNegativeMask", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Whether to paste will only raise, only lower, or both\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "Whether to paste will only raise, only lower, or both" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode = { "PasteMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, PasteMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_MetaData)) }; // 3188723277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If set, copies/pastes all layers, otherwise only copy/pastes the layer selected in the targets panel\n" },
		{ "DisplayName", "Gizmo copy/paste all layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "If set, copies/pastes all layers, otherwise only copy/pastes the layer selected in the targets panel" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bApplyToAllTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets = { "bApplyToAllTargets", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Snap Gizmo to Landscape grid" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste,ImportExport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode = { "SnapMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, SnapMode), Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode_MetaData)) }; // 906983974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Smooths the edges of the gizmo data into the landscape. Without this, the edges of the pasted data will be sharp\n" },
		{ "DisplayName", "Use Smooth Gizmo Brush" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "Smooths the edges of the gizmo data into the landscape. Without this, the edges of the pasted data will be sharp" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bSmoothGizmoBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush = { "bSmoothGizmoBrush", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Heightmap" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString = { "GizmoHeightmapFilenameString", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, GizmoHeightmapFilenameString), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Heightmap Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize = { "GizmoImportSize", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, GizmoImportSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_Inner = { "GizmoImportLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGizmoImportLayer, METADATA_PARAMS(nullptr, 0) }; // 4062157608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers = { "GizmoImportLayers", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, GizmoImportLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_MetaData)) }; // 4062157608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Location of the mirror plane, defaults to the center of the landscape. Doesn't normally need to be changed!\n" },
		{ "DisplayName", "Mirror Point" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Mirror" },
		{ "ToolTip", "Location of the mirror plane, defaults to the center of the landscape. Doesn't normally need to be changed!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint = { "MirrorPoint", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, MirrorPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Type of mirroring operation to perform e.g. \"Minus X To Plus X\" copies and flips the -X half of the landscape onto the +X half\n" },
		{ "DisplayName", "Operation" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Mirror" },
		{ "ToolTip", "Type of mirroring operation to perform e.g. \"Minus X To Plus X\" copies and flips the -X half of the landscape onto the +X half" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp = { "MirrorOp", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, MirrorOp), Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_MetaData)) }; // 1671991640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of vertices either side of the mirror plane to smooth over\n" },
		{ "DisplayName", "Smoothing Width" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Mirror" },
		{ "ToolTip", "Number of vertices either side of the mirror plane to smooth over" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth = { "MirrorSmoothingWidth", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, MirrorSmoothingWidth), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Blueprint Brush Tool\n" },
		{ "DisplayName", "Blueprint Brush" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "BlueprintBrush" },
		{ "ToolTip", "Blueprint Brush Tool" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintBrush = { "BlueprintBrush", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, BlueprintBrush), Z_Construct_UClass_UClass, Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "Comment", "// Number of quads per landscape component section\n" },
		{ "DisplayName", "Section Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Number of quads per landscape component section" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection = { "ResizeLandscape_QuadsPerSection", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_QuadsPerSection), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "Comment", "// Number of sections per landscape component\n" },
		{ "DisplayName", "Sections Per Component" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Number of sections per landscape component" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent = { "ResizeLandscape_SectionsPerComponent", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_SectionsPerComponent), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "Comment", "// Number of components in resulting landscape\n" },
		{ "DisplayName", "Number of Components" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Number of components in resulting landscape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount = { "ResizeLandscape_ComponentCount", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_ComponentCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "Comment", "// Determines how the new component size will be applied to the existing landscape geometry.\n" },
		{ "DisplayName", "Resize Mode" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Determines how the new component size will be applied to the existing landscape geometry." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode = { "ResizeLandscape_ConvertMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_ConvertMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_MetaData)) }; // 1149166887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// Material initially applied to the landscape. Setting a material here exposes properties for setting up layer info based on the landscape blend nodes in the material.\n" },
		{ "DisplayName", "Material" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "Material initially applied to the landscape. Setting a material here exposes properties for setting up layer info based on the landscape blend nodes in the material." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material = { "NewLandscape_Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The number of quads in a single landscape section. One section is the unit of LOD transition for landscape rendering.\n" },
		{ "DisplayName", "Section Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The number of quads in a single landscape section. One section is the unit of LOD transition for landscape rendering." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection = { "NewLandscape_QuadsPerSection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_QuadsPerSection), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The number of sections in a single landscape component. This along with the section size determines the size of each landscape component. A component is the base unit of rendering and culling.\n" },
		{ "DisplayName", "Sections Per Component" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The number of sections in a single landscape component. This along with the section size determines the size of each landscape component. A component is the base unit of rendering and culling." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent = { "NewLandscape_SectionsPerComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_SectionsPerComponent), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The number of components in the X and Y direction, determining the overall size of the landscape.\n" },
		{ "DisplayName", "Number of Components" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The number of components in the X and Y direction, determining the overall size of the landscape." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount = { "NewLandscape_ComponentCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_ComponentCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The location of the new landscape\n" },
		{ "DisplayName", "Location" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The location of the new landscape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location = { "NewLandscape_Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The rotation of the new landscape\n" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The rotation of the new landscape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation = { "NewLandscape_Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The scale of the new landscape. This is the distance between each vertex on the landscape, defaulting to 100 units.\n" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The scale of the new landscape. This is the distance between each vertex on the landscape, defaulting to 100 units." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale = { "NewLandscape_Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape,ImportExport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult = { "ImportLandscape_HeightmapImportResult", nullptr, (EPropertyFlags)0x0010000400020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_HeightmapImportResult), Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_MetaData)) }; // 2081317131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape,ImportExport" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage = { "ImportLandscape_HeightmapErrorMessage", nullptr, (EPropertyFlags)0x0010000400020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_HeightmapErrorMessage), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// Specify a height map file in 16-bit RAW or PNG format\n" },
		{ "DisplayName", "Heightmap File" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape,ImportExport" },
		{ "ToolTip", "Specify a height map file in 16-bit RAW or PNG format" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename = { "ImportLandscape_HeightmapFilename", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_HeightmapFilename), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width = { "ImportLandscape_Width", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Width), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height = { "ImportLandscape_Height", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Height), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapExportFilename_MetaData[] = {
		{ "Category", "Import / Export" },
		{ "DisplayName", "Heightmap File" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ImportExport" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapExportFilename = { "HeightmapExportFilename", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, HeightmapExportFilename), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapExportFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapExportFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_GizmoLocalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_GizmoLocalPosition = { "ImportLandscape_GizmoLocalPosition", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_GizmoLocalPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_GizmoLocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_GizmoLocalPosition_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType_MetaData[] = {
		{ "Category", "Import / Export" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ImportExport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType = { "ImportType", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportType), Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType_MetaData)) }; // 2085451856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bHeightmapSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected = { "bHeightmapSelected", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer_MetaData[] = {
		{ "Category", "Import / Export" },
		{ "DisplayName", "Export Selected Edit Layer" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ImportExport" },
		{ "ToolTip", "When true exports the selected edit layer, if false exports the blended result" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bExportEditLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer = { "bExportEditLayer", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile_MetaData[] = {
		{ "Category", "Import / Export" },
		{ "DisplayName", "Export Single File" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ImportExport" },
		{ "ToolTip", "(World Partition only) When true, exports the landscape as a single file, if false exports each grid tile individually." },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bExportSingleFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile = { "bExportSingleFile", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptor = { "HeightmapImportDescriptor", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, HeightmapImportDescriptor), Z_Construct_UScriptStruct_FLandscapeImportDescriptor, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptor_MetaData)) }; // 1175394505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptorIndex = { "HeightmapImportDescriptorIndex", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, HeightmapImportDescriptorIndex), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptorIndex_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_Inner = { "ImportLandscape_Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data = { "ImportLandscape_Data", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Enable Edit Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "Enable support for landscape edit layers." },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bCanHaveLayersContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent = { "bCanHaveLayersContent", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Flip Y Axis" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape,ImportExport" },
		{ "ToolTip", "Whether to flip Y coordinate of imported files." },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bFlipYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis = { "bFlipYAxis", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldPartitionGridSize_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "DisplayName", "World Partition Grid Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "Number of components per landscape streaming proxies per axis" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldPartitionGridSize = { "WorldPartitionGridSize", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, WorldPartitionGridSize), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldPartitionGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldPartitionGridSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// Whether the imported alpha maps are to be interpreted as \"layered\" or \"additive\" (UE uses additive internally)\n" },
		{ "DisplayName", "Layer Alphamap Type" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape,ImportExport" },
		{ "ToolTip", "Whether the imported alpha maps are to be interpreted as \"layered\" or \"additive\" (UE uses additive internally)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType = { "ImportLandscape_AlphamapType", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_AlphamapType), Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_MetaData)) }; // 4093977154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_Inner = { "ImportLandscape_Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeImportLayer, METADATA_PARAMS(nullptr, 0) }; // 472898639
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "Comment", "// The landscape layers that will be created. Only layer names referenced in the material assigned above are shown here. Modify the material to add more layers.\n" },
		{ "DisplayName", "Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape,ImportExport" },
		{ "ToolTip", "The landscape layers that will be created. Only layer names referenced in the material assigned above are shown here. Modify the material to add more layers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers = { "ImportLandscape_Layers", nullptr, (EPropertyFlags)0x0010000400000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_MetaData)) }; // 472898639
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "// The radius of the sculpt brush, in unreal units\n" },
		{ "DisplayName", "Brush Size" },
		{ "MaxFractionalDigits", "2" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Alpha,BrushSet_Pattern" },
		{ "ShowForTargetTypes", "Heightmap,Visibility" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "The radius of the sculpt brush, in unreal units" },
		{ "UIMax", "8192" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushRadius_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "// The radius of the paint brush, in unreal units\n" },
		{ "DisplayName", "Brush Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Alpha,BrushSet_Pattern" },
		{ "ShowForTargetTypes", "Weightmap" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "The radius of the paint brush, in unreal units" },
		{ "UIMax", "8192" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushRadius = { "PaintBrushRadius", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, PaintBrushRadius), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The falloff at the edge of the sculpt brush, as a fraction of the brush's size. 0 = no falloff, 1 = all falloff\n" },
		{ "DisplayName", "Brush Falloff" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Gizmo,BrushSet_Pattern" },
		{ "ShowForTargetTypes", "Heightmap,Visibility" },
		{ "ToolTip", "The falloff at the edge of the sculpt brush, as a fraction of the brush's size. 0 = no falloff, 1 = all falloff" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff = { "BrushFalloff", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, BrushFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushFalloff_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// The falloff at the edge of the point brush, as a fraction of the brush's size. 0 = no falloff, 1 = all falloff\n" },
		{ "DisplayName", "Brush Falloff" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Gizmo,BrushSet_Pattern" },
		{ "ShowForTargetTypes", "Weightmap" },
		{ "ToolTip", "The falloff at the edge of the point brush, as a fraction of the brush's size. 0 = no falloff, 1 = all falloff" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushFalloff = { "PaintBrushFalloff", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, PaintBrushFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "Comment", "// Selects the Clay Brush painting mode\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Alpha,BrushSet_Pattern" },
		{ "ShowForTools", "Sculpt" },
		{ "ToolTip", "Selects the Clay Brush painting mode" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseClayBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush = { "bUseClayBrush", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0.005" },
		{ "Comment", "// Scale of the brush texture. A scale of 1.000 maps the brush texture to the landscape at a 1 pixel = 1 vertex size\n" },
		{ "DisplayName", "Texture Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Scale of the brush texture. A scale of 1.000 maps the brush texture to the landscape at a 1 pixel = 1 vertex size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale = { "AlphaBrushScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "Comment", "// Rotate brush to follow mouse\n" },
		{ "DisplayName", "Auto-Rotate" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha" },
		{ "ToolTip", "Rotate brush to follow mouse" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bAlphaBrushAutoRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate = { "bAlphaBrushAutoRotate", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "// Rotates the brush mask texture\n" },
		{ "DisplayName", "Texture Rotation" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha,BrushSet_Pattern" },
		{ "ToolTip", "Rotates the brush mask texture" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation = { "AlphaBrushRotation", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushRotation), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Horizontally offsets the brush mask texture\n" },
		{ "DisplayName", "Texture Pan U" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
		{ "ToolTip", "Horizontally offsets the brush mask texture" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU = { "AlphaBrushPanU", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushPanU), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Vertically offsets the brush mask texture\n" },
		{ "DisplayName", "Texture Pan V" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
		{ "ToolTip", "Vertically offsets the brush mask texture" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV = { "AlphaBrushPanV", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushPanV), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "Use World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseWorldSpacePatternBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush = { "bUseWorldSpacePatternBrush", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "World-Space Settings" },
		{ "EditCondition", "bUseWorldSpacePatternBrush" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings = { "WorldSpacePatternBrushSettings", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, WorldSpacePatternBrushSettings), Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings_MetaData)) }; // 85562265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "Comment", "// Mask texture to use\n" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha,BrushSet_Pattern" },
		{ "ToolTip", "Mask texture to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture = { "AlphaTexture", nullptr, (EPropertyFlags)0x0014000400000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "Comment", "// Channel of Mask Texture to use\n" },
		{ "DisplayName", "Texture Channel" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha,BrushSet_Pattern" },
		{ "ToolTip", "Channel of Mask Texture to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel = { "AlphaTextureChannel", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureChannel), Z_Construct_UEnum_LandscapeEditor_ELandscapeTextureColorChannel, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_MetaData)) }; // 3708517282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX = { "AlphaTextureSizeX", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureSizeX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY = { "AlphaTextureSizeY", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureSizeY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_Inner = { "AlphaTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData = { "AlphaTextureData", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of components X/Y to affect at once. 1 means 1x1, 2 means 2x2, etc\n" },
		{ "DisplayName", "Brush Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Component" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Number of components X/Y to affect at once. 1 means 1x1, 2 means 2x2, etc" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize = { "BrushComponentSize", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, BrushComponentSize), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_MetaData[] = {
		{ "Category", "Target Layers" },
		{ "Comment", "// Limits painting to only the components that already have the selected layer\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Weightmap,Visibility" },
		{ "ToolTip", "Limits painting to only the components that already have the selected layer" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction = { "PaintingRestriction", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, PaintingRestriction), Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_MetaData)) }; // 2475432070
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_MetaData[] = {
		{ "Category", "Target Layers" },
		{ "Comment", "// Display order of the targets\n" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Display order of the targets" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder = { "TargetDisplayOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, TargetDisplayOrder), Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_MetaData)) }; // 2222658250
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_MetaData[] = {
		{ "Category", "Target Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->ShowUnusedLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers = { "ShowUnusedLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_CurrentLayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_CurrentLayerIndex = { "CurrentLayerIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeEditorObject, CurrentLayerIndex), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_CurrentLayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_CurrentLayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeEditorObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintToolStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCombinedLayersOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SnapMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapExportFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_GizmoLocalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHeightmapSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportEditLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bExportSingleFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HeightmapImportDescriptorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bCanHaveLayersContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlipYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldPartitionGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintBrushFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_CurrentLayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeEditorObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditorObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditorObject_Statics::ClassParams = {
		&ULandscapeEditorObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeEditorObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeEditorObject()
	{
		if (!Z_Registration_Info_UClass_ULandscapeEditorObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditorObject.OuterSingleton, Z_Construct_UClass_ULandscapeEditorObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeEditorObject.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UClass* StaticClass<ULandscapeEditorObject>()
	{
		return ULandscapeEditorObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditorObject);
	ULandscapeEditorObject::~ULandscapeEditorObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::EnumInfo[] = {
		{ ELandscapeToolFlattenMode_StaticEnum, TEXT("ELandscapeToolFlattenMode"), &Z_Registration_Info_UEnum_ELandscapeToolFlattenMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 403129909U) },
		{ ELandscapeToolErosionMode_StaticEnum, TEXT("ELandscapeToolErosionMode"), &Z_Registration_Info_UEnum_ELandscapeToolErosionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1070344808U) },
		{ ELandscapeToolHydroErosionMode_StaticEnum, TEXT("ELandscapeToolHydroErosionMode"), &Z_Registration_Info_UEnum_ELandscapeToolHydroErosionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1191617141U) },
		{ ELandscapeToolNoiseMode_StaticEnum, TEXT("ELandscapeToolNoiseMode"), &Z_Registration_Info_UEnum_ELandscapeToolNoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2624420065U) },
		{ ELandscapeToolPasteMode_StaticEnum, TEXT("ELandscapeToolPasteMode"), &Z_Registration_Info_UEnum_ELandscapeToolPasteMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3188723277U) },
		{ ELandscapeConvertMode_StaticEnum, TEXT("ELandscapeConvertMode"), &Z_Registration_Info_UEnum_ELandscapeConvertMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1149166887U) },
		{ ELandscapeTextureColorChannel_StaticEnum, TEXT("ELandscapeTextureColorChannel"), &Z_Registration_Info_UEnum_ELandscapeTextureColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3708517282U) },
		{ ELandscapeMirrorOperation_StaticEnum, TEXT("ELandscapeMirrorOperation"), &Z_Registration_Info_UEnum_ELandscapeMirrorOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1671991640U) },
		{ ELandscapeImportHeightmapError_StaticEnum, TEXT("ELandscapeImportHeightmapError"), &Z_Registration_Info_UEnum_ELandscapeImportHeightmapError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3337828176U) },
		{ ELandscapeImportLayerError_StaticEnum, TEXT("ELandscapeImportLayerError"), &Z_Registration_Info_UEnum_ELandscapeImportLayerError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3535401437U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::ScriptStructInfo[] = {
		{ FGizmoImportLayer::StaticStruct, Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewStructOps, TEXT("GizmoImportLayer"), &Z_Registration_Info_UScriptStruct_GizmoImportLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoImportLayer), 4062157608U) },
		{ FLandscapeImportLayer::StaticStruct, Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewStructOps, TEXT("LandscapeImportLayer"), &Z_Registration_Info_UScriptStruct_LandscapeImportLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeImportLayer), 472898639U) },
		{ FLandscapePatternBrushWorldSpaceSettings::StaticStruct, Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewStructOps, TEXT("LandscapePatternBrushWorldSpaceSettings"), &Z_Registration_Info_UScriptStruct_LandscapePatternBrushWorldSpaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapePatternBrushWorldSpaceSettings), 85562265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeEditorObject, ULandscapeEditorObject::StaticClass, TEXT("ULandscapeEditorObject"), &Z_Registration_Info_UClass_ULandscapeEditorObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditorObject), 3249407561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_2389690926(TEXT("/Script/LandscapeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeEditorObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
