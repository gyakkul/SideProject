// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAssetCards.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetCards() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UHairCardGenerationSettings();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UHairCardGenerationSettings_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairCardsClusterSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairCardsGeometrySettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairCardsTextureSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsInfo();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsTextures();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsProceduralCards();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairCardsClusterType;
	static UEnum* EHairCardsClusterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairCardsClusterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairCardsClusterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairCardsClusterType"));
		}
		return Z_Registration_Info_UEnum_EHairCardsClusterType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsClusterType>()
	{
		return EHairCardsClusterType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::Enumerators[] = {
		{ "EHairCardsClusterType::Low", (int64)EHairCardsClusterType::Low },
		{ "EHairCardsClusterType::High", (int64)EHairCardsClusterType::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EHairCardsClusterType::High" },
		{ "Low.Name", "EHairCardsClusterType::Low" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairCardsClusterType",
		"EHairCardsClusterType",
		Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType()
	{
		if (!Z_Registration_Info_UEnum_EHairCardsClusterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairCardsClusterType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairCardsClusterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairCardsGenerationType;
	static UEnum* EHairCardsGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairCardsGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairCardsGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairCardsGenerationType"));
		}
		return Z_Registration_Info_UEnum_EHairCardsGenerationType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsGenerationType>()
	{
		return EHairCardsGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::Enumerators[] = {
		{ "EHairCardsGenerationType::CardsCount", (int64)EHairCardsGenerationType::CardsCount },
		{ "EHairCardsGenerationType::UseGuides", (int64)EHairCardsGenerationType::UseGuides },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CardsCount.Name", "EHairCardsGenerationType::CardsCount" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "UseGuides.Name", "EHairCardsGenerationType::UseGuides" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairCardsGenerationType",
		"EHairCardsGenerationType",
		Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType()
	{
		if (!Z_Registration_Info_UEnum_EHairCardsGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairCardsGenerationType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairCardsGenerationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairCardsClusterSettings;
class UScriptStruct* FHairCardsClusterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairCardsClusterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairCardsClusterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairCardsClusterSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairCardsClusterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairCardsClusterSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairCardsClusterSettings>()
{
	return FHairCardsClusterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterDecimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterDecimation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGuide_MetaData[];
#endif
		static void NewProp_bUseGuide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGuide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Deprecated */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairCardsClusterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_ClusterDecimation_MetaData[] = {
		{ "Comment", "/** Decimation factor use to initialized cluster (only used when UseGuide is disabled). This changes the number of generated cards */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Decimation factor use to initialized cluster (only used when UseGuide is disabled). This changes the number of generated cards" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_ClusterDecimation = { "ClusterDecimation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsClusterSettings, ClusterDecimation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_ClusterDecimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_ClusterDecimation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Quality of clustering when group hair to cluster center. This does not change the number cards, but only how cards are shaped (size/shape) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Quality of clustering when group hair to cluster center. This does not change the number cards, but only how cards are shaped (size/shape)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsClusterSettings, Type), Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type_MetaData)) }; // 532671853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide_MetaData[] = {
		{ "Comment", "/** Use the simulation guide to generate the cards instead of the decimation parameter. This changes the number of generated cards. */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Use the simulation guide to generate the cards instead of the decimation parameter. This changes the number of generated cards." },
	};
#endif
	void Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide_SetBit(void* Obj)
	{
		((FHairCardsClusterSettings*)Obj)->bUseGuide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide = { "bUseGuide", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairCardsClusterSettings), &Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_ClusterDecimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewProp_bUseGuide,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairCardsClusterSettings",
		sizeof(FHairCardsClusterSettings),
		alignof(FHairCardsClusterSettings),
		Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairCardsClusterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairCardsClusterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairCardsClusterSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairCardsClusterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings;
class UScriptStruct* FHairCardsGeometrySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairCardsGeometrySettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairCardsGeometrySettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairCardsGeometrySettings>()
{
	return FHairCardsGeometrySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardsCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CardsCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCardsLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCardsLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCardsLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCardsLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairCardsGeometrySettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType_MetaData[] = {
		{ "Category", "ClusterSettings" },
		{ "Comment", "/** Define how cards should be generated. Cards count: define a targeted number of cards. Use guides: use simulation guide as cards. */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Define how cards should be generated. Cards count: define a targeted number of cards. Use guides: use simulation guide as cards." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, GenerationType), Z_Construct_UEnum_HairStrandsCore_EHairCardsGenerationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType_MetaData)) }; // 4141406625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_CardsCount_MetaData[] = {
		{ "Category", "ClusterSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Define how many cards should be generated. The generated number can be lower, as some cards can be discarded by other options. */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Define how many cards should be generated. The generated number can be lower, as some cards can be discarded by other options." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_CardsCount = { "CardsCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, CardsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_CardsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_CardsCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType_MetaData[] = {
		{ "Category", "ClusterSettings" },
		{ "Comment", "/** Quality of clustering when group hair to belong to a similar cards. This does not change the number cards, but only how cards are shaped (size/shape) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Quality of clustering when group hair to belong to a similar cards. This does not change the number cards, but only how cards are shaped (size/shape)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType = { "ClusterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, ClusterType), Z_Construct_UEnum_HairStrandsCore_EHairCardsClusterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType_MetaData)) }; // 532671853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinSegmentLength_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Minimum size of a card segment */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "SliderExponent", "6" },
		{ "ToolTip", "Minimum size of a card segment" },
		{ "UIMax", "8.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinSegmentLength = { "MinSegmentLength", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, MinSegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinSegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinSegmentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_AngularThreshold_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max angular difference between adjacents vertices to remove vertices during simplification with MinSegmentLength, in degrees. */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Max angular difference between adjacents vertices to remove vertices during simplification with MinSegmentLength, in degrees." },
		{ "UIMax", "45.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_AngularThreshold = { "AngularThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, AngularThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_AngularThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_AngularThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinCardsLength_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length below which generated cards are discard, as there are considered too small. (Default:0, which means no trimming) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Length below which generated cards are discard, as there are considered too small. (Default:0, which means no trimming)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinCardsLength = { "MinCardsLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, MinCardsLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinCardsLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinCardsLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MaxCardsLength_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length above which generated cards are discard, as there are considered too larger. (Default:0, which means no trimming) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Length above which generated cards are discard, as there are considered too larger. (Default:0, which means no trimming)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MaxCardsLength = { "MaxCardsLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsGeometrySettings, MaxCardsLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MaxCardsLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MaxCardsLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_GenerationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_CardsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_ClusterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinSegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_AngularThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MinCardsLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewProp_MaxCardsLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairCardsGeometrySettings",
		sizeof(FHairCardsGeometrySettings),
		alignof(FHairCardsGeometrySettings),
		Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairCardsGeometrySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings.InnerSingleton, Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairCardsTextureSettings;
class UScriptStruct* FHairCardsTextureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairCardsTextureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairCardsTextureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairCardsTextureSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairCardsTextureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairCardsTextureSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairCardsTextureSettings>()
{
	return FHairCardsTextureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasMaxResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtlasMaxResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelPerCentimeters_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PixelPerCentimeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthTextureCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LengthTextureCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityTextureCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DensityTextureCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairCardsTextureSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_AtlasMaxResolution_MetaData[] = {
		{ "Category", "AtlasSettings" },
		{ "ClampMin", "512" },
		{ "Comment", "/** Max atlas resolution */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Max atlas resolution" },
		{ "UIMax", "8192" },
		{ "UIMin", "512" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_AtlasMaxResolution = { "AtlasMaxResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsTextureSettings, AtlasMaxResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_AtlasMaxResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_AtlasMaxResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_PixelPerCentimeters_MetaData[] = {
		{ "Category", "AtlasSettings" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Pixel resolution per centimeters */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Pixel resolution per centimeters" },
		{ "UIMax", "128" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_PixelPerCentimeters = { "PixelPerCentimeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsTextureSettings, PixelPerCentimeters), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_PixelPerCentimeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_PixelPerCentimeters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_LengthTextureCount_MetaData[] = {
		{ "Category", "AtlasSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of unique clump textures*/" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Number of unique clump textures" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_LengthTextureCount = { "LengthTextureCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsTextureSettings, LengthTextureCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_LengthTextureCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_LengthTextureCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_DensityTextureCount_MetaData[] = {
		{ "Comment", "/** Number of texture having variation of strands count *///UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"AtlasSettings\", meta = (ClampMin = \"1\", UIMin = \"1\", UIMax = \"128\"))\n" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Number of texture having variation of strands count //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"AtlasSettings\", meta = (ClampMin = \"1\", UIMin = \"1\", UIMax = \"128\"))" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_DensityTextureCount = { "DensityTextureCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCardsTextureSettings, DensityTextureCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_DensityTextureCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_DensityTextureCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_AtlasMaxResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_PixelPerCentimeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_LengthTextureCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewProp_DensityTextureCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairCardsTextureSettings",
		sizeof(FHairCardsTextureSettings),
		alignof(FHairCardsTextureSettings),
		Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairCardsTextureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairCardsTextureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairCardsTextureSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairCardsTextureSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards;
class UScriptStruct* FHairGroupsProceduralCards::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsProceduralCards, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsProceduralCards"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsProceduralCards>()
{
	return FHairGroupsProceduralCards::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometrySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsProceduralCards>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_ClusterSettings_MetaData[] = {
		{ "Comment", "/* Deprecated */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_ClusterSettings = { "ClusterSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsProceduralCards, ClusterSettings), Z_Construct_UScriptStruct_FHairCardsClusterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_ClusterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_ClusterSettings_MetaData)) }; // 4009647431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_GeometrySettings_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Cards geometry settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_GeometrySettings = { "GeometrySettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsProceduralCards, GeometrySettings), Z_Construct_UScriptStruct_FHairCardsGeometrySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_GeometrySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_GeometrySettings_MetaData)) }; // 3664017193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_TextureSettings_MetaData[] = {
		{ "Category", "TextureSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Cards texture atlas settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_TextureSettings = { "TextureSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsProceduralCards, TextureSettings), Z_Construct_UScriptStruct_FHairCardsTextureSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_TextureSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_TextureSettings_MetaData)) }; // 750560744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/* Use to track when a cards asset need to be regenerated */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Use to track when a cards asset need to be regenerated" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsProceduralCards, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_ClusterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_GeometrySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_TextureSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsProceduralCards",
		sizeof(FHairGroupsProceduralCards),
		alignof(FHairGroupsProceduralCards),
		Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsProceduralCards()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairCardsSourceType;
	static UEnum* EHairCardsSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairCardsSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairCardsSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairCardsSourceType"));
		}
		return Z_Registration_Info_UEnum_EHairCardsSourceType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairCardsSourceType>()
	{
		return EHairCardsSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enumerators[] = {
		{ "EHairCardsSourceType::Procedural", (int64)EHairCardsSourceType::Procedural },
		{ "EHairCardsSourceType::Imported", (int64)EHairCardsSourceType::Imported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Imported.DisplayName", "Imported" },
		{ "Imported.Name", "EHairCardsSourceType::Imported" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "Procedural.DisplayName", "Procedural (experimental)" },
		{ "Procedural.Name", "EHairCardsSourceType::Procedural" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairCardsSourceType",
		"EHairCardsSourceType",
		Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType()
	{
		if (!Z_Registration_Info_UEnum_EHairCardsSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairCardsSourceType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairCardsSourceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupCardsInfo;
class UScriptStruct* FHairGroupCardsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupCardsInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupCardsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupCardsInfo>()
{
	return FHairGroupCardsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCards_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCardVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCardVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupCardsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Card Count" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards = { "NumCards", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsInfo, NumCards), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Card Vertex Count" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices = { "NumCardVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsInfo, NumCardVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewProp_NumCardVertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupCardsInfo",
		sizeof(FHairGroupCardsInfo),
		alignof(FHairGroupCardsInfo),
		Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupCardsInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupCardsTextures;
class UScriptStruct* FHairGroupCardsTextures::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupCardsTextures, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupCardsTextures"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupCardsTextures>()
{
	return FHairGroupCardsTextures::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DepthTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoverageTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CoverageTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TangentTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxilaryDataTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuxilaryDataTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupCardsTextures>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture_MetaData[] = {
		{ "Category", "CardsTextures" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture = { "DepthTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsTextures, DepthTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture_MetaData[] = {
		{ "Category", "CardsTextures" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture = { "CoverageTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsTextures, CoverageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture_MetaData[] = {
		{ "Category", "CardsTextures" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture = { "TangentTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsTextures, TangentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture_MetaData[] = {
		{ "Category", "CardsAttributes" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture = { "AttributeTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsTextures, AttributeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture_MetaData[] = {
		{ "Category", "CardsAttributes" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture = { "AuxilaryDataTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsTextures, AuxilaryDataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture_MetaData[] = {
		{ "Category", "CardsAttributes" },
		{ "Comment", "/* This texture is only used by hair meshes and can be generated through the hair-textures option on Groom Asset. */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "This texture is only used by hair meshes and can be generated through the hair-textures option on Groom Asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture = { "MaterialTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupCardsTextures, MaterialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_DepthTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_CoverageTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_TangentTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AttributeTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_AuxilaryDataTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewProp_MaterialTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupCardsTextures",
		sizeof(FHairGroupCardsTextures),
		alignof(FHairGroupCardsTextures),
		Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsTextures()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupCardsTextures.InnerSingleton;
	}
	void UHairCardGenerationSettings::StaticRegisterNativesUHairCardGenerationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHairCardGenerationSettings);
	UClass* Z_Construct_UClass_UHairCardGenerationSettings_NoRegister()
	{
		return UHairCardGenerationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHairCardGenerationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHairCardGenerationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHairCardGenerationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Since hair-card generation can be controlled external to this plugin, this  \n * provides a way for those external generators a way to store their own \n * generation data along with the groom/cards-entry.\n */" },
		{ "IncludePath", "GroomAssetCards.h" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Since hair-card generation can be controlled external to this plugin, this\nprovides a way for those external generators a way to store their own\ngeneration data along with the groom/cards-entry." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHairCardGenerationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHairCardGenerationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHairCardGenerationSettings_Statics::ClassParams = {
		&UHairCardGenerationSettings::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHairCardGenerationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHairCardGenerationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHairCardGenerationSettings()
	{
		if (!Z_Registration_Info_UClass_UHairCardGenerationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHairCardGenerationSettings.OuterSingleton, Z_Construct_UClass_UHairCardGenerationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHairCardGenerationSettings.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UHairCardGenerationSettings>()
	{
		return UHairCardGenerationSettings::StaticClass();
	}
	UHairCardGenerationSettings::UHairCardGenerationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHairCardGenerationSettings);
	UHairCardGenerationSettings::~UHairCardGenerationSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription;
class UScriptStruct* FHairGroupsCardsSourceDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsCardsSourceDescription"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsCardsSourceDescription>()
{
	return FHairGroupsCardsSourceDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProceduralMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProceduralMeshKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenerationSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardsInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMeshKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedMeshKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsCardsSourceDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/* Deprecated */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, SourceType), Z_Construct_UEnum_HairStrandsCore_EHairCardsSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_MetaData)) }; // 2166089822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ProceduralMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMeshKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMeshKey = { "ProceduralMeshKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ProceduralMeshKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMeshKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMeshKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh = { "ImportedMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ImportedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralSettings_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralSettings = { "ProceduralSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ProceduralSettings), Z_Construct_UScriptStruct_FHairGroupsProceduralCards, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralSettings_MetaData)) }; // 1323730236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, Textures), Z_Construct_UScriptStruct_FHairGroupCardsTextures, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures_MetaData)) }; // 3802314929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "Comment", "/* Group index on which this cards geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Group index on which this cards geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "Comment", "/* LOD on which this cards geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead) */" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "LOD on which this cards geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings_MetaData[] = {
		{ "Comment", "/* Card generation data saved from the last procedural run. Dependent on the generator responsible for running the generation. */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
		{ "ToolTip", "Card generation data saved from the last procedural run. Dependent on the generator responsible for running the generation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings = { "GenerationSettings", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, GenerationSettings), Z_Construct_UClass_UHairCardGenerationSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo_MetaData[] = {
		{ "Category", "CardsSource" },
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo = { "CardsInfo", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, CardsInfo), Z_Construct_UScriptStruct_FHairGroupCardsInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo_MetaData)) }; // 2442162560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetCards.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey = { "ImportedMeshKey", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsCardsSourceDescription, ImportedMeshKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralMeshKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ProceduralSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_LODIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_GenerationSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_CardsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewProp_ImportedMeshKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsCardsSourceDescription",
		sizeof(FHairGroupsCardsSourceDescription),
		alignof(FHairGroupsCardsSourceDescription),
		Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::EnumInfo[] = {
		{ EHairCardsClusterType_StaticEnum, TEXT("EHairCardsClusterType"), &Z_Registration_Info_UEnum_EHairCardsClusterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 532671853U) },
		{ EHairCardsGenerationType_StaticEnum, TEXT("EHairCardsGenerationType"), &Z_Registration_Info_UEnum_EHairCardsGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4141406625U) },
		{ EHairCardsSourceType_StaticEnum, TEXT("EHairCardsSourceType"), &Z_Registration_Info_UEnum_EHairCardsSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2166089822U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ScriptStructInfo[] = {
		{ FHairCardsClusterSettings::StaticStruct, Z_Construct_UScriptStruct_FHairCardsClusterSettings_Statics::NewStructOps, TEXT("HairCardsClusterSettings"), &Z_Registration_Info_UScriptStruct_HairCardsClusterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairCardsClusterSettings), 4009647431U) },
		{ FHairCardsGeometrySettings::StaticStruct, Z_Construct_UScriptStruct_FHairCardsGeometrySettings_Statics::NewStructOps, TEXT("HairCardsGeometrySettings"), &Z_Registration_Info_UScriptStruct_HairCardsGeometrySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairCardsGeometrySettings), 3664017193U) },
		{ FHairCardsTextureSettings::StaticStruct, Z_Construct_UScriptStruct_FHairCardsTextureSettings_Statics::NewStructOps, TEXT("HairCardsTextureSettings"), &Z_Registration_Info_UScriptStruct_HairCardsTextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairCardsTextureSettings), 750560744U) },
		{ FHairGroupsProceduralCards::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsProceduralCards_Statics::NewStructOps, TEXT("HairGroupsProceduralCards"), &Z_Registration_Info_UScriptStruct_HairGroupsProceduralCards, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsProceduralCards), 1323730236U) },
		{ FHairGroupCardsInfo::StaticStruct, Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics::NewStructOps, TEXT("HairGroupCardsInfo"), &Z_Registration_Info_UScriptStruct_HairGroupCardsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupCardsInfo), 2442162560U) },
		{ FHairGroupCardsTextures::StaticStruct, Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics::NewStructOps, TEXT("HairGroupCardsTextures"), &Z_Registration_Info_UScriptStruct_HairGroupCardsTextures, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupCardsTextures), 3802314929U) },
		{ FHairGroupsCardsSourceDescription::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics::NewStructOps, TEXT("HairGroupsCardsSourceDescription"), &Z_Registration_Info_UScriptStruct_HairGroupsCardsSourceDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsCardsSourceDescription), 4273660569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHairCardGenerationSettings, UHairCardGenerationSettings::StaticClass, TEXT("UHairCardGenerationSettings"), &Z_Registration_Info_UClass_UHairCardGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHairCardGenerationSettings), 2385704246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_2454145177(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
