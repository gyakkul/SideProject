// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomBuildSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomConversionSettings;
class UScriptStruct* FGroomConversionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomConversionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomConversionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomConversionSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomConversionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GroomConversionSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomConversionSettings>()
{
	return FGroomConversionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroomConversionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomConversionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Rotation in Euler angles in degrees to fix up or front axes */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Rotation in Euler angles in degrees to fix up or front axes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomConversionSettings, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Scale value to convert file unit into centimeters */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Scale value to convert file unit into centimeters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomConversionSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GroomConversionSettings",
		sizeof(FGroomConversionSettings),
		alignof(FGroomConversionSettings),
		Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GroomConversionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomConversionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroomConversionSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomInterpolationQuality;
	static UEnum* EGroomInterpolationQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomInterpolationQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomInterpolationQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomInterpolationQuality"));
		}
		return Z_Registration_Info_UEnum_EGroomInterpolationQuality.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationQuality>()
	{
		return EGroomInterpolationQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enumerators[] = {
		{ "EGroomInterpolationQuality::Low", (int64)EGroomInterpolationQuality::Low },
		{ "EGroomInterpolationQuality::Medium", (int64)EGroomInterpolationQuality::Medium },
		{ "EGroomInterpolationQuality::High", (int64)EGroomInterpolationQuality::High },
		{ "EGroomInterpolationQuality::Unknown", (int64)EGroomInterpolationQuality::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High" },
		{ "High.Name", "EGroomInterpolationQuality::High" },
		{ "High.ToolTip", "Build interpolation data using curve shape matching search. This result in high quality interpolation data, but is relatively slow to build (can takes several dozen of minutes)" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EGroomInterpolationQuality::Low" },
		{ "Low.ToolTip", "Build interpolation data based on nearst neighbor search. Low quality interpolation data, but fast to build (takes a few minutes)" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EGroomInterpolationQuality::Medium" },
		{ "Medium.ToolTip", "Build interpolation data using curve shape matching search but within a limited spatial range. This is a tradeoff between Low and high quality in term of quality & build time (can takes several dozen of minutes)" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EGroomInterpolationQuality::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomInterpolationQuality",
		"EGroomInterpolationQuality",
		Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality()
	{
		if (!Z_Registration_Info_UEnum_EGroomInterpolationQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomInterpolationQuality.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomInterpolationQuality.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomInterpolationWeight;
	static UEnum* EGroomInterpolationWeight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomInterpolationWeight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomInterpolationWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomInterpolationWeight"));
		}
		return Z_Registration_Info_UEnum_EGroomInterpolationWeight.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationWeight>()
	{
		return EGroomInterpolationWeight_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enumerators[] = {
		{ "EGroomInterpolationWeight::Parametric", (int64)EGroomInterpolationWeight::Parametric },
		{ "EGroomInterpolationWeight::Root", (int64)EGroomInterpolationWeight::Root },
		{ "EGroomInterpolationWeight::Index", (int64)EGroomInterpolationWeight::Index },
		{ "EGroomInterpolationWeight::Unknown", (int64)EGroomInterpolationWeight::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enum_MetaDataParams[] = {
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EGroomInterpolationWeight::Index" },
		{ "Index.ToolTip", "Build interpolation data based on guide and strands vertex indices" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "Parametric.DisplayName", "Parametric" },
		{ "Parametric.Name", "EGroomInterpolationWeight::Parametric" },
		{ "Parametric.ToolTip", "Build interpolation data based on curve parametric distance" },
		{ "Root.DisplayName", "Root" },
		{ "Root.Name", "EGroomInterpolationWeight::Root" },
		{ "Root.ToolTip", "Build interpolation data based on distance between guide's root and strands's root" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EGroomInterpolationWeight::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomInterpolationWeight",
		"EGroomInterpolationWeight",
		Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight()
	{
		if (!Z_Registration_Info_UEnum_EGroomInterpolationWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomInterpolationWeight.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomInterpolationWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomBuildSettings;
class UScriptStruct* FGroomBuildSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomBuildSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomBuildSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomBuildSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GroomBuildSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomBuildSettings>()
{
	return FGroomBuildSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroomBuildSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomBuildSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "If checked, override imported guides with generated ones." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_SetBit(void* Obj)
	{
		((FGroomBuildSettings*)Obj)->bOverrideGuides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides = { "bOverrideGuides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomBuildSettings), &Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Density factor for converting hair into guide curve if no guides are provided. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Density factor for converting hair into guide curve if no guides are provided." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity = { "HairToGuideDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomBuildSettings, HairToGuideDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Interpolation data quality. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Interpolation data quality." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality = { "InterpolationQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomBuildSettings, InterpolationQuality), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_MetaData)) }; // 4262326969
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Interpolation distance metric. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Interpolation distance metric." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance = { "InterpolationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomBuildSettings, InterpolationDistance), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_MetaData)) }; // 682640392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Randomize which guides affect a given hair strand. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Randomize which guides affect a given hair strand." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_SetBit(void* Obj)
	{
		((FGroomBuildSettings*)Obj)->bRandomizeGuide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide = { "bRandomizeGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomBuildSettings), &Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Force a hair strand to be affected by a unique guide. */" },
		{ "ModuleRelativePath", "Public/GroomSettings.h" },
		{ "ToolTip", "Force a hair strand to be affected by a unique guide." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_SetBit(void* Obj)
	{
		((FGroomBuildSettings*)Obj)->bUseUniqueGuide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide = { "bUseUniqueGuide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomBuildSettings), &Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bOverrideGuides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_HairToGuideDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_InterpolationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bRandomizeGuide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewProp_bUseUniqueGuide,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GroomBuildSettings",
		sizeof(FGroomBuildSettings),
		alignof(FGroomBuildSettings),
		Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroomBuildSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GroomBuildSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomBuildSettings.InnerSingleton, Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroomBuildSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::EnumInfo[] = {
		{ EGroomInterpolationQuality_StaticEnum, TEXT("EGroomInterpolationQuality"), &Z_Registration_Info_UEnum_EGroomInterpolationQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4262326969U) },
		{ EGroomInterpolationWeight_StaticEnum, TEXT("EGroomInterpolationWeight"), &Z_Registration_Info_UEnum_EGroomInterpolationWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 682640392U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::ScriptStructInfo[] = {
		{ FGroomConversionSettings::StaticStruct, Z_Construct_UScriptStruct_FGroomConversionSettings_Statics::NewStructOps, TEXT("GroomConversionSettings"), &Z_Registration_Info_UScriptStruct_GroomConversionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomConversionSettings), 2255439455U) },
		{ FGroomBuildSettings::StaticStruct, Z_Construct_UScriptStruct_FGroomBuildSettings_Statics::NewStructOps, TEXT("GroomBuildSettings"), &Z_Registration_Info_UScriptStruct_GroomBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomBuildSettings), 447737485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_867359671(TEXT("/Script/HairStrandsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
