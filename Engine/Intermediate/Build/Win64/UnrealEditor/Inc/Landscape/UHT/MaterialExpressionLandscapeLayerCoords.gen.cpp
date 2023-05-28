// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapeLayerCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerCoords() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ETerrainCoordMappingType();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETerrainCoordMappingType;
	static UEnum* ETerrainCoordMappingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ETerrainCoordMappingType"));
		}
		return Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ETerrainCoordMappingType>()
	{
		return ETerrainCoordMappingType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enumerators[] = {
		{ "TCMT_Auto", (int64)TCMT_Auto },
		{ "TCMT_XY", (int64)TCMT_XY },
		{ "TCMT_XZ", (int64)TCMT_XZ },
		{ "TCMT_YZ", (int64)TCMT_YZ },
		{ "TCMT_MAX", (int64)TCMT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "TCMT_Auto.Name", "TCMT_Auto" },
		{ "TCMT_MAX.Name", "TCMT_MAX" },
		{ "TCMT_XY.Name", "TCMT_XY" },
		{ "TCMT_XZ.Name", "TCMT_XZ" },
		{ "TCMT_YZ.Name", "TCMT_YZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ETerrainCoordMappingType",
		"ETerrainCoordMappingType",
		Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ETerrainCoordMappingType()
	{
		if (!Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton, Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType;
	static UEnum* ELandscapeCustomizedCoordType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeCustomizedCoordType"));
		}
		return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeCustomizedCoordType>()
	{
		return ELandscapeCustomizedCoordType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enumerators[] = {
		{ "LCCT_None", (int64)LCCT_None },
		{ "LCCT_CustomUV0", (int64)LCCT_CustomUV0 },
		{ "LCCT_CustomUV1", (int64)LCCT_CustomUV1 },
		{ "LCCT_CustomUV2", (int64)LCCT_CustomUV2 },
		{ "LCCT_WeightMapUV", (int64)LCCT_WeightMapUV },
		{ "LCCT_MAX", (int64)LCCT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enum_MetaDataParams[] = {
		{ "LCCT_CustomUV0.Name", "LCCT_CustomUV0" },
		{ "LCCT_CustomUV1.Name", "LCCT_CustomUV1" },
		{ "LCCT_CustomUV2.Name", "LCCT_CustomUV2" },
		{ "LCCT_MAX.Name", "LCCT_MAX" },
		{ "LCCT_None.Comment", "/** Don't use customized UV, just use original UV. */" },
		{ "LCCT_None.Name", "LCCT_None" },
		{ "LCCT_None.ToolTip", "Don't use customized UV, just use original UV." },
		{ "LCCT_WeightMapUV.Comment", "/** Use original WeightMapUV, which could not be customized. */" },
		{ "LCCT_WeightMapUV.Name", "LCCT_WeightMapUV" },
		{ "LCCT_WeightMapUV.ToolTip", "Use original WeightMapUV, which could not be customized." },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeCustomizedCoordType",
		"ELandscapeCustomizedCoordType",
		Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton;
	}
	void UMaterialExpressionLandscapeLayerCoords::StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerCoords);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerCoords::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MappingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomUVType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomUVType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingPanU_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingPanU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingPanV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingPanV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Determines the mapping place to use on the terrain. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType = { "MappingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingType), Z_Construct_UEnum_Landscape_ETerrainCoordMappingType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType_MetaData)) }; // 1018390614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Determines the mapping place to use on the terrain. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType = { "CustomUVType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, CustomUVType), Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType_MetaData)) }; // 3740499676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Uniform scale to apply to the mapping. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Uniform scale to apply to the mapping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale = { "MappingScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingScale), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Rotation to apply to the mapping. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Rotation to apply to the mapping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation = { "MappingRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingRotation), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Offset to apply to the mapping along U. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Offset to apply to the mapping along U." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU = { "MappingPanU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingPanU), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Offset to apply to the mapping along V. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Offset to apply to the mapping along V." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV = { "MappingPanV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingPanV), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerCoords>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerCoords::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerCoords>()
	{
		return UMaterialExpressionLandscapeLayerCoords::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerCoords);
	UMaterialExpressionLandscapeLayerCoords::~UMaterialExpressionLandscapeLayerCoords() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::EnumInfo[] = {
		{ ETerrainCoordMappingType_StaticEnum, TEXT("ETerrainCoordMappingType"), &Z_Registration_Info_UEnum_ETerrainCoordMappingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1018390614U) },
		{ ELandscapeCustomizedCoordType_StaticEnum, TEXT("ELandscapeCustomizedCoordType"), &Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3740499676U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords, UMaterialExpressionLandscapeLayerCoords::StaticClass, TEXT("UMaterialExpressionLandscapeLayerCoords"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerCoords), 1517987343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_2531081887(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
