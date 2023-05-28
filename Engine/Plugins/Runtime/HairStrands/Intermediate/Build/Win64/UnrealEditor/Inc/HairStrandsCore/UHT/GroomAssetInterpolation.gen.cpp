// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAssetInterpolation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetInterpolation() {}
// Cross Module References
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairDecimationSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairDeformationSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsLOD();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairInterpolationSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairLODSettings();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairInterpolationQuality;
	static UEnum* EHairInterpolationQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairInterpolationQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairInterpolationQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairInterpolationQuality"));
		}
		return Z_Registration_Info_UEnum_EHairInterpolationQuality.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairInterpolationQuality>()
	{
		return EHairInterpolationQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enumerators[] = {
		{ "EHairInterpolationQuality::Low", (int64)EHairInterpolationQuality::Low },
		{ "EHairInterpolationQuality::Medium", (int64)EHairInterpolationQuality::Medium },
		{ "EHairInterpolationQuality::High", (int64)EHairInterpolationQuality::High },
		{ "EHairInterpolationQuality::Unknown", (int64)EHairInterpolationQuality::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High" },
		{ "High.Name", "EHairInterpolationQuality::High" },
		{ "High.ToolTip", "Build interpolation data using curve shape matching search. This result in high quality interpolation data, but is relatively slow to build (can takes several dozen of minutes)" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EHairInterpolationQuality::Low" },
		{ "Low.ToolTip", "Build interpolation data based on nearst neighbor search. Low quality interpolation data, but fast to build (takes a few minutes)" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EHairInterpolationQuality::Medium" },
		{ "Medium.ToolTip", "Build interpolation data using curve shape matching search but within a limited spatial range. This is a tradeoff between Low and high quality in term of quality & build time (can takes several dozen of minutes)" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EHairInterpolationQuality::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairInterpolationQuality",
		"EHairInterpolationQuality",
		Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality()
	{
		if (!Z_Registration_Info_UEnum_EHairInterpolationQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairInterpolationQuality.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairInterpolationQuality.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairInterpolationWeight;
	static UEnum* EHairInterpolationWeight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairInterpolationWeight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairInterpolationWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairInterpolationWeight"));
		}
		return Z_Registration_Info_UEnum_EHairInterpolationWeight.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairInterpolationWeight>()
	{
		return EHairInterpolationWeight_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enumerators[] = {
		{ "EHairInterpolationWeight::Parametric", (int64)EHairInterpolationWeight::Parametric },
		{ "EHairInterpolationWeight::Root", (int64)EHairInterpolationWeight::Root },
		{ "EHairInterpolationWeight::Index", (int64)EHairInterpolationWeight::Index },
		{ "EHairInterpolationWeight::Distance", (int64)EHairInterpolationWeight::Distance },
		{ "EHairInterpolationWeight::Unknown", (int64)EHairInterpolationWeight::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enum_MetaDataParams[] = {
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EHairInterpolationWeight::Distance" },
		{ "Distance.ToolTip", "Build interpolation data based on curve euclidean distance" },
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EHairInterpolationWeight::Index" },
		{ "Index.ToolTip", "Build interpolation data based on guide and strands vertex indices" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Parametric.DisplayName", "Parametric" },
		{ "Parametric.Name", "EHairInterpolationWeight::Parametric" },
		{ "Parametric.ToolTip", "Build interpolation data based on curve parametric distance" },
		{ "Root.DisplayName", "Root" },
		{ "Root.Name", "EHairInterpolationWeight::Root" },
		{ "Root.ToolTip", "Build interpolation data based on distance between guide's root and strands's root" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EHairInterpolationWeight::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairInterpolationWeight",
		"EHairInterpolationWeight",
		Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight()
	{
		if (!Z_Registration_Info_UEnum_EHairInterpolationWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairInterpolationWeight.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairInterpolationWeight.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomGeometryType;
	static UEnum* EGroomGeometryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomGeometryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomGeometryType"));
		}
		return Z_Registration_Info_UEnum_EGroomGeometryType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomGeometryType>()
	{
		return EGroomGeometryType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enumerators[] = {
		{ "EGroomGeometryType::Strands", (int64)EGroomGeometryType::Strands },
		{ "EGroomGeometryType::Cards", (int64)EGroomGeometryType::Cards },
		{ "EGroomGeometryType::Meshes", (int64)EGroomGeometryType::Meshes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cards.Name", "EGroomGeometryType::Cards" },
		{ "Meshes.Name", "EGroomGeometryType::Meshes" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "Strands.Name", "EGroomGeometryType::Strands" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomGeometryType",
		"EGroomGeometryType",
		Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType()
	{
		if (!Z_Registration_Info_UEnum_EGroomGeometryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomGeometryType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomGeometryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomBindingType;
	static UEnum* EGroomBindingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomBindingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomBindingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomBindingType"));
		}
		return Z_Registration_Info_UEnum_EGroomBindingType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingType>()
	{
		return EGroomBindingType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enumerators[] = {
		{ "EGroomBindingType::NoneBinding", (int64)EGroomBindingType::NoneBinding },
		{ "EGroomBindingType::Rigid", (int64)EGroomBindingType::Rigid },
		{ "EGroomBindingType::Skinning", (int64)EGroomBindingType::Skinning },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "NoneBinding.Hidden", "" },
		{ "NoneBinding.Name", "EGroomBindingType::NoneBinding" },
		{ "Rigid.DisplayName", "Rigid" },
		{ "Rigid.Name", "EGroomBindingType::Rigid" },
		{ "Rigid.ToolTip", "When attached to a skeltal mesh, the hair follow the provided attachement name" },
		{ "Skinning.DisplayName", "Skinning" },
		{ "Skinning.Name", "EGroomBindingType::Skinning" },
		{ "Skinning.ToolTip", "When attached to a skeltal mesh, the hair follow the skin surface" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomBindingType",
		"EGroomBindingType",
		Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingType()
	{
		if (!Z_Registration_Info_UEnum_EGroomBindingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomBindingType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomBindingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomBindingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomOverrideType;
	static UEnum* EGroomOverrideType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomOverrideType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomOverrideType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomOverrideType"));
		}
		return Z_Registration_Info_UEnum_EGroomOverrideType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomOverrideType>()
	{
		return EGroomOverrideType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enumerators[] = {
		{ "EGroomOverrideType::Auto", (int64)EGroomOverrideType::Auto },
		{ "EGroomOverrideType::Enable", (int64)EGroomOverrideType::Enable },
		{ "EGroomOverrideType::Disable", (int64)EGroomOverrideType::Disable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EGroomOverrideType::Auto" },
		{ "Auto.ToolTip", "Use the asset value" },
		{ "BlueprintType", "true" },
		{ "Disable.DisplayName", "Disable" },
		{ "Disable.Name", "EGroomOverrideType::Disable" },
		{ "Disable.ToolTip", "Override the asset value, and force disabled" },
		{ "Enable.DisplayName", "Enable" },
		{ "Enable.Name", "EGroomOverrideType::Enable" },
		{ "Enable.ToolTip", "Override the asset value, and force enabled" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomOverrideType",
		"EGroomOverrideType",
		Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType()
	{
		if (!Z_Registration_Info_UEnum_EGroomOverrideType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomOverrideType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomOverrideType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairLODSettings;
class UScriptStruct* FHairLODSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairLODSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairLODSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairLODSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairLODSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairLODSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairLODSettings>()
{
	return FHairLODSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairLODSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveDecimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveDecimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDecimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexDecimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Simulation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simulation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Simulation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GlobalInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairLODSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation = { "CurveDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, CurveDecimation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of vertices per strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation = { "VertexDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, VertexDecimation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of vertices per strands in a uniform manner" },
		{ "UIMax", "45.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold = { "AngularThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, AngularThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, ThicknessScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If disable, the hair strands won't be rendered" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FHairLODSettings*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairLODSettings), &Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If enable this LOD version will use cards representation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, GeometryType), Z_Construct_UEnum_HairStrandsCore_EGroomGeometryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_MetaData)) }; // 4151352457
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If enable this LOD version will use the provided attachment points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, BindingType), Z_Construct_UEnum_HairStrandsCore_EGroomBindingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_MetaData)) }; // 3081966970
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Groom simulation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation = { "Simulation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, Simulation), Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_MetaData)) }; // 558004101
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "DisplayName", "RBF Interpolation" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Global interpolation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation = { "GlobalInterpolation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairLODSettings, GlobalInterpolation), Z_Construct_UEnum_HairStrandsCore_EGroomOverrideType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_MetaData)) }; // 558004101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_CurveDecimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_VertexDecimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_AngularThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_ThicknessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GeometryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_BindingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_Simulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewProp_GlobalInterpolation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairLODSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairLODSettings",
		sizeof(FHairLODSettings),
		alignof(FHairLODSettings),
		Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairLODSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairLODSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairLODSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairLODSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairLODSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairLODSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairLODSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairDecimationSettings;
class UScriptStruct* FHairDecimationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairDecimationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairDecimationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairDecimationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairDecimationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairDecimationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairDecimationSettings>()
{
	return FHairDecimationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairDecimationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveDecimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveDecimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDecimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexDecimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairDecimationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation = { "CurveDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairDecimationSettings, CurveDecimation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of verties for each hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation = { "VertexDecimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairDecimationSettings, VertexDecimation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_CurveDecimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewProp_VertexDecimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairDecimationSettings",
		sizeof(FHairDecimationSettings),
		alignof(FHairDecimationSettings),
		Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairDecimationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairDecimationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairDecimationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairDecimationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairInterpolationSettings;
class UScriptStruct* FHairInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairInterpolationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairInterpolationSettings>()
{
	return FHairInterpolationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGuides_MetaData[];
#endif
		static void NewProp_bOverrideGuides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGuides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairToGuideDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HairToGuideDensity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationQuality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationDistance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeGuide_MetaData[];
#endif
		static void NewProp_bRandomizeGuide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeGuide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUniqueGuide_MetaData[];
#endif
		static void NewProp_bUseUniqueGuide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUniqueGuide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairInterpolationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If checked, override imported guides with generated ones." },
	};
#endif
	void Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_SetBit(void* Obj)
	{
		((FHairInterpolationSettings*)Obj)->bOverrideGuides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides = { "bOverrideGuides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairInterpolationSettings), &Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Density factor for converting hair into guide curve if no guides are provided. The value should be between 0 and 1, and can be thought as a ratio/percentage of strands used as guides.*/" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Density factor for converting hair into guide curve if no guides are provided. The value should be between 0 and 1, and can be thought as a ratio/percentage of strands used as guides." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity = { "HairToGuideDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairInterpolationSettings, HairToGuideDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Interpolation data quality. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Interpolation data quality." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality = { "InterpolationQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairInterpolationSettings, InterpolationQuality), Z_Construct_UEnum_HairStrandsCore_EHairInterpolationQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_MetaData)) }; // 2605969350
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Interpolation distance metric. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Interpolation distance metric." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance = { "InterpolationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairInterpolationSettings, InterpolationDistance), Z_Construct_UEnum_HairStrandsCore_EHairInterpolationWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_MetaData)) }; // 2307210353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Randomize which guides affect a given hair strand. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Randomize which guides affect a given hair strand." },
	};
#endif
	void Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_SetBit(void* Obj)
	{
		((FHairInterpolationSettings*)Obj)->bRandomizeGuide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide = { "bRandomizeGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairInterpolationSettings), &Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "Comment", "/** Force a hair strand to be affected by a unique guide. */" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Force a hair strand to be affected by a unique guide." },
	};
#endif
	void Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_SetBit(void* Obj)
	{
		((FHairInterpolationSettings*)Obj)->bUseUniqueGuide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide = { "bUseUniqueGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairInterpolationSettings), &Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bOverrideGuides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_HairToGuideDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_InterpolationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bRandomizeGuide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewProp_bUseUniqueGuide,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairInterpolationSettings",
		sizeof(FHairInterpolationSettings),
		alignof(FHairInterpolationSettings),
		Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairInterpolationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairInterpolationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairInterpolationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairDeformationSettings;
class UScriptStruct* FHairDeformationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairDeformationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairDeformationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairDeformationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairDeformationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairDeformationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairDeformationSettings>()
{
	return FHairDeformationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairDeformationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEditRigging_MetaData[];
#endif
		static void NewProp_bCanEditRigging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEditRigging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRigging_MetaData[];
#endif
		static void NewProp_bEnableRigging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRigging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairDeformationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging_MetaData[] = {
		{ "Category", "SkeletonGeneration" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging_SetBit(void* Obj)
	{
		((FHairDeformationSettings*)Obj)->bCanEditRigging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging = { "bCanEditRigging", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairDeformationSettings), &Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_MetaData[] = {
		{ "Category", "SkeletonGeneration" },
		{ "EditCondition", "bCanEditRigging" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Enable the generation of a skeletal mesh that will drive the guides deformation. The total number of bones per group is for now 256 (NumCurves * NumPoints)" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_SetBit(void* Obj)
	{
		((FHairDeformationSettings*)Obj)->bEnableRigging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging = { "bEnableRigging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairDeformationSettings), &Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves_MetaData[] = {
		{ "Category", "SkeletonGeneration" },
		{ "EditCondition", "bCanEditRigging" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Number of guides that will be generated on the groom and the skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves = { "NumCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairDeformationSettings, NumCurves), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints_MetaData[] = {
		{ "Category", "SkeletonGeneration" },
		{ "EditCondition", "bCanEditRigging" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Number of points/bones per generated guide" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairDeformationSettings, NumPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bCanEditRigging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_bEnableRigging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewProp_NumPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairDeformationSettings",
		sizeof(FHairDeformationSettings),
		alignof(FHairDeformationSettings),
		Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairDeformationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairDeformationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairDeformationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairDeformationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsInterpolation;
class UScriptStruct* FHairGroupsInterpolation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsInterpolation, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsInterpolation"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsInterpolation>()
{
	return FHairGroupsInterpolation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecimationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecimationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiggingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RiggingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsInterpolation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Decimation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings = { "DecimationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsInterpolation, DecimationSettings), Z_Construct_UScriptStruct_FHairDecimationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings_MetaData)) }; // 3790913383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "InterpolationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Interpolation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsInterpolation, InterpolationSettings), Z_Construct_UScriptStruct_FHairInterpolationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings_MetaData)) }; // 210318800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings_MetaData[] = {
		{ "Category", "SkeletonGeneration" },
		{ "DisplayName", "Skeleton Generation" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Skeleton Generation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings = { "RiggingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsInterpolation, RiggingSettings), Z_Construct_UScriptStruct_FHairDeformationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings_MetaData)) }; // 3433195543
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_DecimationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_InterpolationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewProp_RiggingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsInterpolation",
		sizeof(FHairGroupsInterpolation),
		alignof(FHairGroupsInterpolation),
		Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsInterpolation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsLOD;
class UScriptStruct* FHairGroupsLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsLOD, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsLOD"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsLOD.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsLOD>()
{
	return FHairGroupsLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterWorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterWorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterScreenSizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterScreenSizeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsLOD>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_Inner = { "LODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairLODSettings, METADATA_PARAMS(nullptr, 0) }; // 2892342799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "Reduce the number of hair strands in a uniform manner" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs = { "LODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsLOD, LODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_MetaData)) }; // 2892342799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterWorldSize_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If enable this LOD version will use cards representation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterWorldSize = { "ClusterWorldSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsLOD, ClusterWorldSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterWorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterScreenSizeScale_MetaData[] = {
		{ "Category", "DecimationSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetInterpolation.h" },
		{ "ToolTip", "If enable this LOD version will use cards representation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterScreenSizeScale = { "ClusterScreenSizeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsLOD, ClusterScreenSizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterScreenSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterScreenSizeScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_LODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterWorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewProp_ClusterScreenSizeScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsLOD",
		sizeof(FHairGroupsLOD),
		alignof(FHairGroupsLOD),
		Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsLOD.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsLOD.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::EnumInfo[] = {
		{ EHairInterpolationQuality_StaticEnum, TEXT("EHairInterpolationQuality"), &Z_Registration_Info_UEnum_EHairInterpolationQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2605969350U) },
		{ EHairInterpolationWeight_StaticEnum, TEXT("EHairInterpolationWeight"), &Z_Registration_Info_UEnum_EHairInterpolationWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2307210353U) },
		{ EGroomGeometryType_StaticEnum, TEXT("EGroomGeometryType"), &Z_Registration_Info_UEnum_EGroomGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4151352457U) },
		{ EGroomBindingType_StaticEnum, TEXT("EGroomBindingType"), &Z_Registration_Info_UEnum_EGroomBindingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3081966970U) },
		{ EGroomOverrideType_StaticEnum, TEXT("EGroomOverrideType"), &Z_Registration_Info_UEnum_EGroomOverrideType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 558004101U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::ScriptStructInfo[] = {
		{ FHairLODSettings::StaticStruct, Z_Construct_UScriptStruct_FHairLODSettings_Statics::NewStructOps, TEXT("HairLODSettings"), &Z_Registration_Info_UScriptStruct_HairLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairLODSettings), 2892342799U) },
		{ FHairDecimationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairDecimationSettings_Statics::NewStructOps, TEXT("HairDecimationSettings"), &Z_Registration_Info_UScriptStruct_HairDecimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairDecimationSettings), 3790913383U) },
		{ FHairInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics::NewStructOps, TEXT("HairInterpolationSettings"), &Z_Registration_Info_UScriptStruct_HairInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairInterpolationSettings), 210318800U) },
		{ FHairDeformationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairDeformationSettings_Statics::NewStructOps, TEXT("HairDeformationSettings"), &Z_Registration_Info_UScriptStruct_HairDeformationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairDeformationSettings), 3433195543U) },
		{ FHairGroupsInterpolation::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics::NewStructOps, TEXT("HairGroupsInterpolation"), &Z_Registration_Info_UScriptStruct_HairGroupsInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsInterpolation), 3358068899U) },
		{ FHairGroupsLOD::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsLOD_Statics::NewStructOps, TEXT("HairGroupsLOD"), &Z_Registration_Info_UScriptStruct_HairGroupsLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsLOD), 2812470900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_4067475679(TEXT("/Script/HairStrandsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
