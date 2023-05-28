// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Operators/UVEditorUVTransformOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorUVTransformOp() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVAlignProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVAlignProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVDistributeProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVDistributeProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVQuickTransformProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVQuickTransformProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformOperatorFactory();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformPropertiesBase();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_NoRegister();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorUVTransformType;
	static UEnum* EUVEditorUVTransformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorUVTransformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorUVTransformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorUVTransformType"));
		}
		return Z_Registration_Info_UEnum_EUVEditorUVTransformType.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorUVTransformType>()
	{
		return EUVEditorUVTransformType_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::Enumerators[] = {
		{ "EUVEditorUVTransformType::Transform", (int64)EUVEditorUVTransformType::Transform },
		{ "EUVEditorUVTransformType::Align", (int64)EUVEditorUVTransformType::Align },
		{ "EUVEditorUVTransformType::Distribute", (int64)EUVEditorUVTransformType::Distribute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::Enum_MetaDataParams[] = {
		{ "Align.Comment", "/** Position all selected elements given alignment rules */" },
		{ "Align.Name", "EUVEditorUVTransformType::Align" },
		{ "Align.ToolTip", "Position all selected elements given alignment rules" },
		{ "Comment", "/**\n * UV Transform Strategies for the UV Transform Tool\n */" },
		{ "Distribute.Comment", "/** Position all selected elements given distribution rules */" },
		{ "Distribute.Name", "EUVEditorUVTransformType::Distribute" },
		{ "Distribute.ToolTip", "Position all selected elements given distribution rules" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "UV Transform Strategies for the UV Transform Tool" },
		{ "Transform.Comment", "/** Apply Scale, Totation and Translation properties to all UV values */" },
		{ "Transform.Name", "EUVEditorUVTransformType::Transform" },
		{ "Transform.ToolTip", "Apply Scale, Totation and Translation properties to all UV values" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorUVTransformType",
		"EUVEditorUVTransformType",
		Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorUVTransformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorUVTransformType.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorUVTransformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorUVTransformType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorPivotType;
	static UEnum* EUVEditorPivotType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorPivotType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorPivotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorPivotType"));
		}
		return Z_Registration_Info_UEnum_EUVEditorPivotType.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorPivotType>()
	{
		return EUVEditorPivotType_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::Enumerators[] = {
		{ "EUVEditorPivotType::BoundingBoxCenter", (int64)EUVEditorPivotType::BoundingBoxCenter },
		{ "EUVEditorPivotType::Origin", (int64)EUVEditorPivotType::Origin },
		{ "EUVEditorPivotType::IndividualBoundingBoxCenter", (int64)EUVEditorPivotType::IndividualBoundingBoxCenter },
		{ "EUVEditorPivotType::Manual", (int64)EUVEditorPivotType::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::Enum_MetaDataParams[] = {
		{ "BoundingBoxCenter.Comment", "/** Pivot around the collective center of all island bounding boxes */" },
		{ "BoundingBoxCenter.Name", "EUVEditorPivotType::BoundingBoxCenter" },
		{ "BoundingBoxCenter.ToolTip", "Pivot around the collective center of all island bounding boxes" },
		{ "Comment", "/**\n * Transform Pivot Mode\n */" },
		{ "IndividualBoundingBoxCenter.Comment", "/** Pivot around each island's bounding box center */" },
		{ "IndividualBoundingBoxCenter.Name", "EUVEditorPivotType::IndividualBoundingBoxCenter" },
		{ "IndividualBoundingBoxCenter.ToolTip", "Pivot around each island's bounding box center" },
		{ "Manual.Comment", "/** Pivot around a user specified point */" },
		{ "Manual.Name", "EUVEditorPivotType::Manual" },
		{ "Manual.ToolTip", "Pivot around a user specified point" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "Origin.Comment", "/** Pivot around the global origin point */" },
		{ "Origin.Name", "EUVEditorPivotType::Origin" },
		{ "Origin.ToolTip", "Pivot around the global origin point" },
		{ "ToolTip", "Transform Pivot Mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorPivotType",
		"EUVEditorPivotType",
		Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorPivotType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorPivotType.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorPivotType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorTranslationMode;
	static UEnum* EUVEditorTranslationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorTranslationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorTranslationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorTranslationMode"));
		}
		return Z_Registration_Info_UEnum_EUVEditorTranslationMode.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorTranslationMode>()
	{
		return EUVEditorTranslationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::Enumerators[] = {
		{ "EUVEditorTranslationMode::Relative", (int64)EUVEditorTranslationMode::Relative },
		{ "EUVEditorTranslationMode::Absolute", (int64)EUVEditorTranslationMode::Absolute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "/** Move elements such that the transform origin is placed at the value specified */" },
		{ "Absolute.Name", "EUVEditorTranslationMode::Absolute" },
		{ "Absolute.ToolTip", "Move elements such that the transform origin is placed at the value specified" },
		{ "Comment", "/**\n * Translation Mode\n */" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "Relative.Comment", "/** Move elements relative to their current position by the amount specified */" },
		{ "Relative.Name", "EUVEditorTranslationMode::Relative" },
		{ "Relative.ToolTip", "Move elements relative to their current position by the amount specified" },
		{ "ToolTip", "Translation Mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorTranslationMode",
		"EUVEditorTranslationMode",
		Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorTranslationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorTranslationMode.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorTranslationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorAlignDirection;
	static UEnum* EUVEditorAlignDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorAlignDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorAlignDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorAlignDirection"));
		}
		return Z_Registration_Info_UEnum_EUVEditorAlignDirection.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorAlignDirection>()
	{
		return EUVEditorAlignDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::Enumerators[] = {
		{ "EUVEditorAlignDirection::None", (int64)EUVEditorAlignDirection::None },
		{ "EUVEditorAlignDirection::Top", (int64)EUVEditorAlignDirection::Top },
		{ "EUVEditorAlignDirection::Bottom", (int64)EUVEditorAlignDirection::Bottom },
		{ "EUVEditorAlignDirection::Left", (int64)EUVEditorAlignDirection::Left },
		{ "EUVEditorAlignDirection::Right", (int64)EUVEditorAlignDirection::Right },
		{ "EUVEditorAlignDirection::CenterVertically", (int64)EUVEditorAlignDirection::CenterVertically },
		{ "EUVEditorAlignDirection::CenterHorizontally", (int64)EUVEditorAlignDirection::CenterHorizontally },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::Enum_MetaDataParams[] = {
		{ "Bottom.Name", "EUVEditorAlignDirection::Bottom" },
		{ "CenterHorizontally.Name", "EUVEditorAlignDirection::CenterHorizontally" },
		{ "CenterVertically.Name", "EUVEditorAlignDirection::CenterVertically" },
		{ "Left.Name", "EUVEditorAlignDirection::Left" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "None.Name", "EUVEditorAlignDirection::None" },
		{ "Right.Name", "EUVEditorAlignDirection::Right" },
		{ "Top.Name", "EUVEditorAlignDirection::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorAlignDirection",
		"EUVEditorAlignDirection",
		Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorAlignDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorAlignDirection.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorAlignDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorAlignAnchor;
	static UEnum* EUVEditorAlignAnchor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorAlignAnchor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorAlignAnchor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorAlignAnchor"));
		}
		return Z_Registration_Info_UEnum_EUVEditorAlignAnchor.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorAlignAnchor>()
	{
		return EUVEditorAlignAnchor_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::Enumerators[] = {
		{ "EUVEditorAlignAnchor::BoundingBox", (int64)EUVEditorAlignAnchor::BoundingBox },
		{ "EUVEditorAlignAnchor::UDIMTile", (int64)EUVEditorAlignAnchor::UDIMTile },
		{ "EUVEditorAlignAnchor::Manual", (int64)EUVEditorAlignAnchor::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::Enum_MetaDataParams[] = {
		{ "BoundingBox.Comment", "/** Align relative to the collective bounding box of all islands */" },
		{ "BoundingBox.Name", "EUVEditorAlignAnchor::BoundingBox" },
		{ "BoundingBox.ToolTip", "Align relative to the collective bounding box of all islands" },
		{ "Manual.Comment", "/** Align relative to a user specified point */" },
		{ "Manual.Name", "EUVEditorAlignAnchor::Manual" },
		{ "Manual.ToolTip", "Align relative to a user specified point" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "UDIMTile.Comment", "/** Align relative to the local UDIM tile containing the island */" },
		{ "UDIMTile.Name", "EUVEditorAlignAnchor::UDIMTile" },
		{ "UDIMTile.ToolTip", "Align relative to the local UDIM tile containing the island" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorAlignAnchor",
		"EUVEditorAlignAnchor",
		Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorAlignAnchor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorAlignAnchor.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorAlignAnchor.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorDistributeMode;
	static UEnum* EUVEditorDistributeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorDistributeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorDistributeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorDistributeMode"));
		}
		return Z_Registration_Info_UEnum_EUVEditorDistributeMode.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorDistributeMode>()
	{
		return EUVEditorDistributeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::Enumerators[] = {
		{ "EUVEditorDistributeMode::None", (int64)EUVEditorDistributeMode::None },
		{ "EUVEditorDistributeMode::VerticalSpace", (int64)EUVEditorDistributeMode::VerticalSpace },
		{ "EUVEditorDistributeMode::HorizontalSpace", (int64)EUVEditorDistributeMode::HorizontalSpace },
		{ "EUVEditorDistributeMode::TopEdges", (int64)EUVEditorDistributeMode::TopEdges },
		{ "EUVEditorDistributeMode::BottomEdges", (int64)EUVEditorDistributeMode::BottomEdges },
		{ "EUVEditorDistributeMode::LeftEdges", (int64)EUVEditorDistributeMode::LeftEdges },
		{ "EUVEditorDistributeMode::RightEdges", (int64)EUVEditorDistributeMode::RightEdges },
		{ "EUVEditorDistributeMode::CentersVertically", (int64)EUVEditorDistributeMode::CentersVertically },
		{ "EUVEditorDistributeMode::CentersHorizontally", (int64)EUVEditorDistributeMode::CentersHorizontally },
		{ "EUVEditorDistributeMode::MinimallyRemoveOverlap", (int64)EUVEditorDistributeMode::MinimallyRemoveOverlap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::Enum_MetaDataParams[] = {
		{ "BottomEdges.Name", "EUVEditorDistributeMode::BottomEdges" },
		{ "CentersHorizontally.Name", "EUVEditorDistributeMode::CentersHorizontally" },
		{ "CentersVertically.Name", "EUVEditorDistributeMode::CentersVertically" },
		{ "HorizontalSpace.Name", "EUVEditorDistributeMode::HorizontalSpace" },
		{ "LeftEdges.Name", "EUVEditorDistributeMode::LeftEdges" },
		{ "MinimallyRemoveOverlap.Name", "EUVEditorDistributeMode::MinimallyRemoveOverlap" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "None.Name", "EUVEditorDistributeMode::None" },
		{ "RightEdges.Name", "EUVEditorDistributeMode::RightEdges" },
		{ "TopEdges.Name", "EUVEditorDistributeMode::TopEdges" },
		{ "VerticalSpace.Name", "EUVEditorDistributeMode::VerticalSpace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorDistributeMode",
		"EUVEditorDistributeMode",
		Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorDistributeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorDistributeMode.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorDistributeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode;
	static UEnum* EUVEditorAlignDistributeGroupingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorAlignDistributeGroupingMode"));
		}
		return Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorAlignDistributeGroupingMode>()
	{
		return EUVEditorAlignDistributeGroupingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::Enumerators[] = {
		{ "EUVEditorAlignDistributeGroupingMode::IndividualBoundingBoxes", (int64)EUVEditorAlignDistributeGroupingMode::IndividualBoundingBoxes },
		{ "EUVEditorAlignDistributeGroupingMode::EnclosingBoundingBox", (int64)EUVEditorAlignDistributeGroupingMode::EnclosingBoundingBox },
		{ "EUVEditorAlignDistributeGroupingMode::IndividualVertices", (int64)EUVEditorAlignDistributeGroupingMode::IndividualVertices },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::Enum_MetaDataParams[] = {
		{ "EnclosingBoundingBox.Comment", "/** Treat selection as a single unit, moving everything together and preserving relative positions.*/" },
		{ "EnclosingBoundingBox.Name", "EUVEditorAlignDistributeGroupingMode::EnclosingBoundingBox" },
		{ "EnclosingBoundingBox.ToolTip", "Treat selection as a single unit, moving everything together and preserving relative positions." },
		{ "IndividualBoundingBoxes.Comment", "/** Treat selection as individual connected components, moving each according to their bounding boxes.*/" },
		{ "IndividualBoundingBoxes.Name", "EUVEditorAlignDistributeGroupingMode::IndividualBoundingBoxes" },
		{ "IndividualBoundingBoxes.ToolTip", "Treat selection as individual connected components, moving each according to their bounding boxes." },
		{ "IndividualVertices.Comment", "/** Treat selection as isolated UV vertices, moving each UV independently of each other.*/" },
		{ "IndividualVertices.Name", "EUVEditorAlignDistributeGroupingMode::IndividualVertices" },
		{ "IndividualVertices.ToolTip", "Treat selection as isolated UV vertices, moving each UV independently of each other." },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorAlignDistributeGroupingMode",
		"EUVEditorAlignDistributeGroupingMode",
		Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode.InnerSingleton;
	}
	void UUVEditorUVTransformPropertiesBase::StaticRegisterNativesUUVEditorUVTransformPropertiesBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVTransformPropertiesBase);
	UClass* Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_NoRegister()
	{
		return UUVEditorUVTransformPropertiesBase::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Transform Settings\n */" },
		{ "IncludePath", "Operators/UVEditorUVTransformOp.h" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "UV Transform Settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVTransformPropertiesBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::ClassParams = {
		&UUVEditorUVTransformPropertiesBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVTransformPropertiesBase()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVTransformPropertiesBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVTransformPropertiesBase.OuterSingleton, Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVTransformPropertiesBase.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorUVTransformPropertiesBase>()
	{
		return UUVEditorUVTransformPropertiesBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVTransformPropertiesBase);
	UUVEditorUVTransformPropertiesBase::~UUVEditorUVTransformPropertiesBase() {}
	void UUVEditorUVTransformProperties::StaticRegisterNativesUUVEditorUVTransformProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVTransformProperties);
	UClass* Z_Construct_UClass_UUVEditorUVTransformProperties_NoRegister()
	{
		return UUVEditorUVTransformProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVTransformProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TranslationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PivotMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualPivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickTranslateOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuickTranslateOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuickRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuickTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuickRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorUVTransformPropertiesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Transform Settings\n */" },
		{ "IncludePath", "Operators/UVEditorUVTransformOp.h" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "UV Transform Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Advanced Transform | Scaling" },
		{ "Comment", "/** Scale applied to UVs, potentially non-uniform */" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Scale applied to UVs, potentially non-uniform" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000200001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Advanced Transform | Rotation" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "-100000" },
		{ "Comment", "/** Rotation applied to UVs after scaling, specified in degrees */" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Rotation applied to UVs after scaling, specified in degrees" },
		{ "TransientToolProperty", "" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, Rotation), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Advanced Transform | Translation" },
		{ "Comment", "/** Translation applied to UVs, and after scaling and rotation */" },
		{ "DisplayName", "Translation" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Translation applied to UVs, and after scaling and rotation" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Translation_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Advanced Transform | Translation" },
		{ "Comment", "/** Translation applied to UVs, and after scaling and rotation */" },
		{ "DisplayName", "Translation Mode" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Translation applied to UVs, and after scaling and rotation" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, TranslationMode), Z_Construct_UEnum_UVEditorTools_EUVEditorTranslationMode, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode_MetaData)) }; // 1395762940
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode_MetaData[] = {
		{ "Category", "Advanced Transform | Transform Origin" },
		{ "Comment", "/** Transformation origin mode used for scaling and rotation */" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Transformation origin mode used for scaling and rotation" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode = { "PivotMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, PivotMode), Z_Construct_UEnum_UVEditorTools_EUVEditorPivotType, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode_MetaData)) }; // 1555161268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_ManualPivot_MetaData[] = {
		{ "Category", "Advanced Transform | Transform Origin" },
		{ "Comment", "/** Manual Transformation origin point */" },
		{ "DisplayName", "Coords" },
		{ "EditCondition", "PivotMode == EUVEditorPivotType::Manual" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Manual Transformation origin point" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_ManualPivot = { "ManualPivot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, ManualPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_ManualPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_ManualPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslateOffset_MetaData[] = {
		{ "Category", "Quick Transform" },
		{ "DisplayName", "Translation" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslateOffset = { "QuickTranslateOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, QuickTranslateOffset), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslateOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslateOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotationOffset_MetaData[] = {
		{ "Category", "Quick Transform" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "-100000" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "TransientToolProperty", "" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotationOffset = { "QuickRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, QuickRotationOffset), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslation_MetaData[] = {
		{ "Category", "Quick Transform" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslation = { "QuickTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, QuickTranslation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotation_MetaData[] = {
		{ "Category", "Quick Transform" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotation = { "QuickRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformProperties, QuickRotation), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_TranslationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_PivotMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_ManualPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslateOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::NewProp_QuickRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVTransformProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::ClassParams = {
		&UUVEditorUVTransformProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVTransformProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVTransformProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVTransformProperties.OuterSingleton, Z_Construct_UClass_UUVEditorUVTransformProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVTransformProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorUVTransformProperties>()
	{
		return UUVEditorUVTransformProperties::StaticClass();
	}
	UUVEditorUVTransformProperties::UUVEditorUVTransformProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVTransformProperties);
	UUVEditorUVTransformProperties::~UUVEditorUVTransformProperties() {}
	void UUVEditorUVQuickTransformProperties::StaticRegisterNativesUUVEditorUVQuickTransformProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVQuickTransformProperties);
	UClass* Z_Construct_UClass_UUVEditorUVQuickTransformProperties_NoRegister()
	{
		return UUVEditorUVQuickTransformProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorUVTransformProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Quick Transform Only Settings\n * \n * We are using a subclass here to \"trick\" the details customization system, allowing us to reuse a lot of the logic\n * without having to build new operators or new customizations.\n * \n * See FUVEditorUVTransformToolDetails and FUVEditorUVQuickTransformToolDetails, where we provide two customizations\n * which present different views of the \"same\" properties - one with all settings and one with simply the quick transform settings.\n * This is designed to be used in the future where we want to provide a quick translate \"tool\" when no other tools are running.\n * \n */" },
		{ "IncludePath", "Operators/UVEditorUVTransformOp.h" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "UV Quick Transform Only Settings\n\nWe are using a subclass here to \"trick\" the details customization system, allowing us to reuse a lot of the logic\nwithout having to build new operators or new customizations.\n\nSee FUVEditorUVTransformToolDetails and FUVEditorUVQuickTransformToolDetails, where we provide two customizations\nwhich present different views of the \"same\" properties - one with all settings and one with simply the quick transform settings.\nThis is designed to be used in the future where we want to provide a quick translate \"tool\" when no other tools are running." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVQuickTransformProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::ClassParams = {
		&UUVEditorUVQuickTransformProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVQuickTransformProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVQuickTransformProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVQuickTransformProperties.OuterSingleton, Z_Construct_UClass_UUVEditorUVQuickTransformProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVQuickTransformProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorUVQuickTransformProperties>()
	{
		return UUVEditorUVQuickTransformProperties::StaticClass();
	}
	UUVEditorUVQuickTransformProperties::UUVEditorUVQuickTransformProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVQuickTransformProperties);
	UUVEditorUVQuickTransformProperties::~UUVEditorUVQuickTransformProperties() {}
	void UUVEditorUVAlignProperties::StaticRegisterNativesUUVEditorUVAlignProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVAlignProperties);
	UClass* Z_Construct_UClass_UUVEditorUVAlignProperties_NoRegister()
	{
		return UUVEditorUVAlignProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVAlignProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AlignAnchor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignAnchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualAnchor;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AlignDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Grouping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grouping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Grouping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorUVTransformPropertiesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Align Settings\n */" },
		{ "IncludePath", "Operators/UVEditorUVTransformOp.h" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "UV Align Settings" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor_MetaData[] = {
		{ "Category", "Align" },
		{ "Comment", "/** Controls what geometry the alignment is to be relative to when performed. */" },
		{ "DisplayName", "Alignment Anchor" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Controls what geometry the alignment is to be relative to when performed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor = { "AlignAnchor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVAlignProperties, AlignAnchor), Z_Construct_UEnum_UVEditorTools_EUVEditorAlignAnchor, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor_MetaData)) }; // 2556073168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_ManualAnchor_MetaData[] = {
		{ "Category", "Align" },
		{ "Comment", "/** Manual anchor location for relative alignment */" },
		{ "DisplayName", "Anchor Coords" },
		{ "EditCondition", "AlignAnchor == EUVEditorAlignAnchor::Manual" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Manual anchor location for relative alignment" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_ManualAnchor = { "ManualAnchor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVAlignProperties, ManualAnchor), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_ManualAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_ManualAnchor_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection_MetaData[] = {
		{ "Category", "Align" },
		{ "Comment", "/** Controls what side of the island bounding boxes are being aligned */" },
		{ "DisplayName", "Alignment Direction" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Controls what side of the island bounding boxes are being aligned" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection = { "AlignDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVAlignProperties, AlignDirection), Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDirection, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection_MetaData)) }; // 2850045755
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping_MetaData[] = {
		{ "Category", "Align" },
		{ "Comment", "/** Controls how alignment considers grouping selected objects with respect to the alignment behavior.*/" },
		{ "DisplayName", "Grouping Mode" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Controls how alignment considers grouping selected objects with respect to the alignment behavior." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping = { "Grouping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVAlignProperties, Grouping), Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping_MetaData)) }; // 889528603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_ManualAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_AlignDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::NewProp_Grouping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVAlignProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::ClassParams = {
		&UUVEditorUVAlignProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVAlignProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVAlignProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVAlignProperties.OuterSingleton, Z_Construct_UClass_UUVEditorUVAlignProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVAlignProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorUVAlignProperties>()
	{
		return UUVEditorUVAlignProperties::StaticClass();
	}
	UUVEditorUVAlignProperties::UUVEditorUVAlignProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVAlignProperties);
	UUVEditorUVAlignProperties::~UUVEditorUVAlignProperties() {}
	void UUVEditorUVDistributeProperties::StaticRegisterNativesUUVEditorUVDistributeProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVDistributeProperties);
	UClass* Z_Construct_UClass_UUVEditorUVDistributeProperties_NoRegister()
	{
		return UUVEditorUVDistributeProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DistributeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistributeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributeMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Grouping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grouping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Grouping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableManualDistances_MetaData[];
#endif
		static void NewProp_bEnableManualDistances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableManualDistances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorUVTransformPropertiesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Distribute Settings\n */" },
		{ "IncludePath", "Operators/UVEditorUVTransformOp.h" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "UV Distribute Settings" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode_MetaData[] = {
		{ "Category", "Distribute" },
		{ "Comment", "/** Controls the distribution behavior */" },
		{ "DisplayName", "Distribution Mode" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Controls the distribution behavior" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode = { "DistributeMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVDistributeProperties, DistributeMode), Z_Construct_UEnum_UVEditorTools_EUVEditorDistributeMode, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode_MetaData)) }; // 1760206963
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping_MetaData[] = {
		{ "Category", "Distribute" },
		{ "Comment", "/** Controls how distribution considers grouping selected objects with respect to the distribution behavior.*/" },
		{ "DisplayName", "Grouping Mode" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Controls how distribution considers grouping selected objects with respect to the distribution behavior." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping = { "Grouping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVDistributeProperties, Grouping), Z_Construct_UEnum_UVEditorTools_EUVEditorAlignDistributeGroupingMode, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping_MetaData)) }; // 889528603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances_MetaData[] = {
		{ "Category", "Distribute" },
		{ "Comment", "/** If true, enable overriding distances used in the distribution behavior with manually entered values.*/" },
		{ "DisplayName", "Manual Distances" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "If true, enable overriding distances used in the distribution behavior with manually entered values." },
	};
#endif
	void Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances_SetBit(void* Obj)
	{
		((UUVEditorUVDistributeProperties*)Obj)->bEnableManualDistances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances = { "bEnableManualDistances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorUVDistributeProperties), &Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualExtent_MetaData[] = {
		{ "Category", "Distribute" },
		{ "Comment", "/** For Edge and Center distribution modes, specify the desired overall distance within which to evenly place the edges or centers. */" },
		{ "DisplayName", "Manual Extent" },
		{ "EditCondition", "bEnableManualDistances" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "For Edge and Center distribution modes, specify the desired overall distance within which to evenly place the edges or centers." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualExtent = { "ManualExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVDistributeProperties, ManualExtent), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualSpacing_MetaData[] = {
		{ "Category", "Distribute" },
		{ "Comment", "/** For Spacing and Remove Overlap distribution modes, specify the desired distance between objects. */" },
		{ "DisplayName", "Manual Spacing" },
		{ "EditCondition", "bEnableManualDistances" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "For Spacing and Remove Overlap distribution modes, specify the desired distance between objects." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualSpacing = { "ManualSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVDistributeProperties, ManualSpacing), METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualSpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_DistributeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_Grouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_bEnableManualDistances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::NewProp_ManualSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVDistributeProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::ClassParams = {
		&UUVEditorUVDistributeProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVDistributeProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVDistributeProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVDistributeProperties.OuterSingleton, Z_Construct_UClass_UUVEditorUVDistributeProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVDistributeProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorUVDistributeProperties>()
	{
		return UUVEditorUVDistributeProperties::StaticClass();
	}
	UUVEditorUVDistributeProperties::UUVEditorUVDistributeProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVDistributeProperties);
	UUVEditorUVDistributeProperties::~UUVEditorUVDistributeProperties() {}
	void UUVEditorUVTransformOperatorFactory::StaticRegisterNativesUUVEditorUVTransformOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUVTransformOperatorFactory);
	UClass* Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_NoRegister()
	{
		return UUVEditorUVTransformOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV Transform operations.\n *\n * Inherits from UObject so that it can hold a strong pointer to the settings UObject, which\n * needs to be a UObject to be displayed in the details panel.\n */" },
		{ "IncludePath", "Operators/UVEditorUVTransformOp.h" },
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
		{ "ToolTip", "Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV Transform operations.\n\nInherits from UObject so that it can hold a strong pointer to the settings UObject, which\nneeds to be a UObject to be displayed in the details panel." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Operators/UVEditorUVTransformOp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorUVTransformOperatorFactory, Settings), Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUVTransformOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::ClassParams = {
		&UUVEditorUVTransformOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUVTransformOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUVTransformOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUVTransformOperatorFactory.OuterSingleton, Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUVTransformOperatorFactory.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorUVTransformOperatorFactory>()
	{
		return UUVEditorUVTransformOperatorFactory::StaticClass();
	}
	UUVEditorUVTransformOperatorFactory::UUVEditorUVTransformOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUVTransformOperatorFactory);
	UUVEditorUVTransformOperatorFactory::~UUVEditorUVTransformOperatorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics::EnumInfo[] = {
		{ EUVEditorUVTransformType_StaticEnum, TEXT("EUVEditorUVTransformType"), &Z_Registration_Info_UEnum_EUVEditorUVTransformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2080720822U) },
		{ EUVEditorPivotType_StaticEnum, TEXT("EUVEditorPivotType"), &Z_Registration_Info_UEnum_EUVEditorPivotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555161268U) },
		{ EUVEditorTranslationMode_StaticEnum, TEXT("EUVEditorTranslationMode"), &Z_Registration_Info_UEnum_EUVEditorTranslationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1395762940U) },
		{ EUVEditorAlignDirection_StaticEnum, TEXT("EUVEditorAlignDirection"), &Z_Registration_Info_UEnum_EUVEditorAlignDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2850045755U) },
		{ EUVEditorAlignAnchor_StaticEnum, TEXT("EUVEditorAlignAnchor"), &Z_Registration_Info_UEnum_EUVEditorAlignAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2556073168U) },
		{ EUVEditorDistributeMode_StaticEnum, TEXT("EUVEditorDistributeMode"), &Z_Registration_Info_UEnum_EUVEditorDistributeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1760206963U) },
		{ EUVEditorAlignDistributeGroupingMode_StaticEnum, TEXT("EUVEditorAlignDistributeGroupingMode"), &Z_Registration_Info_UEnum_EUVEditorAlignDistributeGroupingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 889528603U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorUVTransformPropertiesBase, UUVEditorUVTransformPropertiesBase::StaticClass, TEXT("UUVEditorUVTransformPropertiesBase"), &Z_Registration_Info_UClass_UUVEditorUVTransformPropertiesBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVTransformPropertiesBase), 2892190502U) },
		{ Z_Construct_UClass_UUVEditorUVTransformProperties, UUVEditorUVTransformProperties::StaticClass, TEXT("UUVEditorUVTransformProperties"), &Z_Registration_Info_UClass_UUVEditorUVTransformProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVTransformProperties), 2689785783U) },
		{ Z_Construct_UClass_UUVEditorUVQuickTransformProperties, UUVEditorUVQuickTransformProperties::StaticClass, TEXT("UUVEditorUVQuickTransformProperties"), &Z_Registration_Info_UClass_UUVEditorUVQuickTransformProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVQuickTransformProperties), 1310408032U) },
		{ Z_Construct_UClass_UUVEditorUVAlignProperties, UUVEditorUVAlignProperties::StaticClass, TEXT("UUVEditorUVAlignProperties"), &Z_Registration_Info_UClass_UUVEditorUVAlignProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVAlignProperties), 4206462414U) },
		{ Z_Construct_UClass_UUVEditorUVDistributeProperties, UUVEditorUVDistributeProperties::StaticClass, TEXT("UUVEditorUVDistributeProperties"), &Z_Registration_Info_UClass_UUVEditorUVDistributeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVDistributeProperties), 1415036196U) },
		{ Z_Construct_UClass_UUVEditorUVTransformOperatorFactory, UUVEditorUVTransformOperatorFactory::StaticClass, TEXT("UUVEditorUVTransformOperatorFactory"), &Z_Registration_Info_UClass_UUVEditorUVTransformOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUVTransformOperatorFactory), 203955814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_2788975476(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Operators_UVEditorUVTransformOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
